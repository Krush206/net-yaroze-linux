/* Remote target communications for serial-line targets using HSS protocol

This file is part of GDB.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

#include "defs.h"
#include "gdb_string.h"
#include <fcntl.h>
#include "frame.h"
#include "inferior.h"
#include "bfd.h"
#include "symfile.h"
#include "target.h"
#include "wait.h"
#include "terminal.h"
#include "gdbcmd.h"
#include "gdbcore.h"
#include "objfiles.h"
#include "gdb-stabs.h"
#include "thread.h"

#ifdef USG
#include <sys/types.h>
#endif

#include <signal.h>
#include "serial.h"

#include <stdarg.h>

#define MAX_HSS_SIZ	1500

typedef struct {
	unsigned char magic[3], code;
	unsigned long adr;
	unsigned short len, sum;
	unsigned char data[0];
} HSS;

#define HSS_MAGIC	"HSs"
#define HSS_ACK		0	/* host <-> target */
#define HSS_NAK		1	/* host <-> target */
#define HSS_OK		2	/* host <-  target */
#define HSS_NG		3	/* host <-  target */
#define HSS_RDREG	4	/* host  -> target */
#define HSS_WRREG	5	/* host  -> target */
#define HSS_RDMEM	6	/* host  -> target */
#define HSS_WRMEM	7	/* host  -> target */
#define HSS_CONT	8	/* host  -> target */
#define HSS_STEP	9	/* host  -> target */
#define HSS_SIGNAL	10	/* host <-  target */
#define HSS_QUERY	11	/* host  -> target */
#define HSS_SEND	12	/* host <-  target */
#define HSS_UNIMP	13	/* host <-  target */
#define HSS_TIMEOUT	14	/* only internal */
#define HSS_INVALID	15	/* only internal */

static int hss_timeout = 5;
static int hss_break;
static serial_t hss_desc = NULL;
static int hss_need_reply = 0;
static unsigned char send_hss_buf[sizeof(HSS) + MAX_HSS_SIZ];
static unsigned char recv_hss_buf[sizeof(HSS) + MAX_HSS_SIZ];

extern char *tmp_mips_processor_type;
extern int mips_set_processor_type();
extern char *mips_psx_reg_names[];
extern struct target_ops hss_ops;

static char *hss_code_name(unsigned char code){
	static char *codenames[] = {
		"ACK", "NAK", "OK", "NG",
		"RDREG", "WRREG", "RDMEM", "WRMEM",
		"CONT", "STEP", "SIGNAL", "QUERY",
		"SEND", "INIMP", "TIMEOUT", "INVALID"
	};

	if(HSS_INVALID < code)
		return("???");
	return(codenames[code]);
}

static void hss_dump(char *title, HSS *hss){
	int i, len;
	unsigned char code = hss->code;

	printf_unfiltered("%s%s(%02x)",
		title, hss_code_name(code), code);
	printf_unfiltered(" m=%02x%02x%02x",
		hss->magic[0], hss->magic[1], hss->magic[2]);
	printf_unfiltered(" a=%08x",
		extract_unsigned_integer((char *)&hss->adr, 4));
	printf_unfiltered(" l=%04x",
		len = extract_unsigned_integer((char *)&hss->len, 2));
	printf_unfiltered(" s=%04x",
		extract_unsigned_integer((char *)&hss->sum, 2));
	if(len & 1)
		++len;
	for(i = 0; i < len && i < 4; i++)
		printf_unfiltered(" %02x", hss->data[i]);
	if(i < len)
		printf_unfiltered(" ...");
	printf_unfiltered("\n");
}

static unsigned short hss_sum(void *cp, int len){
	unsigned short *p = (unsigned short *)cp;
	unsigned long v = 0;

	while(0 < len)
		v += *p++, len -= sizeof(unsigned short);
	while(v >> 16)
		v = (unsigned short)v + (v >> 16);
	return(v);
}

static void hss_acknak(unsigned char code, int ack){
	HSS hss_buf, *hss = &hss_buf;

	if(code == HSS_ACK || code == HSS_NAK)
		return;
	strncpy(hss->magic, HSS_MAGIC, sizeof(hss->magic));
	code = (ack)? HSS_ACK: HSS_NAK;
	hss->code = code;
	hss->adr = hss->len = hss->sum = 0;
	hss->sum = ~hss_sum(hss, sizeof(HSS));
	if(SERIAL_WRITE(hss_desc, (char *)hss, sizeof(HSS)))
		perror_with_name("hss_acknak: write failed");
}

static int hss_getpkt(void){
	HSS *hss = (HSS *)recv_hss_buf;
	int ch, off = 0, len = 0, naked = 0;
	unsigned char code = 0;

	while(1){
		ch = SERIAL_READCHAR(hss_desc, hss_timeout);
		switch(ch){
		case SERIAL_EOF:
			error("Remote connection closed");
		case SERIAL_ERROR:
			perror_with_name("Remote communication error");
		case SERIAL_TIMEOUT:
			if(remote_debug)
				puts_unfiltered("Timed out.\n");
			return(HSS_TIMEOUT);
		default:
			break;
		}
		if(off < sizeof(hss->magic))
			if((off == 0 && ch != HSS_MAGIC[0])
					|| (off == 1 && ch != HSS_MAGIC[1])
					|| (off == 2 && ch != HSS_MAGIC[2])){
				if(1 < remote_debug)
					printf_unfiltered("Bad magic\n");
				off = 0;
				continue;
			}
		recv_hss_buf[off++] = ch;
		if(sizeof(HSS) == off){
			len = extract_unsigned_integer((char *)&hss->len, 2);
			if(len & 1)
				++len;
			if(MAX_HSS_SIZ < len){
				if(1 < remote_debug)
					printf_unfiltered("Bad len\n");
				off = 0;
				continue;
			}
		}
		if(off < sizeof(HSS) + len)
			continue;
		code = hss->code;
		if(0xffff != hss_sum(hss, sizeof(HSS) + len)){
			off = 0;
			if(3 < naked++)
				break;
			hss_acknak(code, 0);
			if(remote_debug)
				printf_unfiltered("Bad sum\n");
			continue;
		}
		hss_acknak(code, 1);
		if(remote_debug)
			hss_dump("Rcv: ", hss);
		if(code == HSS_NG)
			warning("Remote failure reply: %08lx",
				extract_unsigned_integer(hss->data, 4));
		else if(code == HSS_SEND){
			puts_unfiltered(hss->data);
			off = naked = 0;
			continue;
		}
		return(code);
	}
	printf_unfiltered("Ignoring packet error, continuing...\n");
	hss_acknak(code, 1);
	return(HSS_INVALID);
}

static void hss_putpkt(int code, ...){
	va_list args;
	HSS *hss = (HSS *)send_hss_buf;
	int val, len, tcount = 0;
	char *ptr;

	strncpy(hss->magic, HSS_MAGIC, sizeof(hss->magic));
	hss->code = code;
	hss->adr = hss->sum = 0, len = 0;
	va_start(args, code);
	switch(code){
	case HSS_RDREG:
		val = va_arg(args, int);
		store_unsigned_integer((char *)&hss->adr, 4, val);
		break;
	case HSS_WRREG:
		val = va_arg(args, int);
		store_unsigned_integer((char *)&hss->adr, 4, val);
		val = va_arg(args, int);
		store_unsigned_integer(hss->data, 4, val), len = 4;
		break;
	case HSS_RDMEM:
		val = va_arg(args, int);
		store_unsigned_integer((char *)&hss->adr, 4, val);
		val = va_arg(args, int);
		store_unsigned_integer(hss->data, 4, val), len = 4;
		break;
	case HSS_WRMEM:
		val = va_arg(args, int);
		store_unsigned_integer((char *)&hss->adr, 4, val);
		val = va_arg(args, int);
		ptr = va_arg(args, char *);
		memcpy(hss->data, ptr, val);
		if(val & 1)
			hss->data[val] = 0;
		len = val;
		break;
	default:
		break;
	}
	store_unsigned_integer((char *)&hss->len, 2, len);
	len += sizeof(HSS);
	if(len & 1)
		hss->data[len++] = 0;
	hss->sum = ~hss_sum(hss, len);
	while(1){
		int code;

		if(remote_debug)
			hss_dump("Snd: ", hss);
		if(SERIAL_WRITE(hss_desc, (char *)hss, len))
			perror_with_name("hss_putpkt: write failed");
		switch(code = hss_getpkt()) {
		case HSS_ACK:
			return;
		case HSS_TIMEOUT:
			error("Timed out");
			break;
		default:
			if(++tcount > 3)
				return;
		}
	}
	va_end(args);
}

static void hss_open(char *name, int from_tty){
	if(name == NULL)
		error("To open a remote debug connection, you need to specify what serial\ndevice is attached to the remote system (e.g. /dev/ttya).");
	target_preopen(from_tty);
	if(hss_desc)
		unpush_target(&hss_ops);
	if(NULL == (hss_desc = SERIAL_OPEN(name)))
		perror_with_name(name);
	if(baud_rate != -1)
		if(SERIAL_SETBAUDRATE(hss_desc, baud_rate)){
			SERIAL_CLOSE(hss_desc);
			perror_with_name(name);
		}
	SERIAL_RAW(hss_desc);
	SERIAL_FLUSH_INPUT(hss_desc);
	if(from_tty)
		printf_filtered("Remote debugging using %s\n", name);
	push_target(&hss_ops);
	tmp_mips_processor_type = "psx";
	mips_set_processor_type_command("psx", 0);
	flush_cached_frames();
	registers_changed();
	stop_pc = read_pc();
	set_current_frame(create_new_frame(read_fp(), stop_pc));
	select_frame(get_current_frame(), 0);
	print_stack_frame(selected_frame, -1, 1);
}

static void hss_close(int quiting){
	if(hss_desc)
		SERIAL_CLOSE(hss_desc);
	hss_desc = NULL;
}

static void hss_resume(int pid, int step, enum target_signal siggnal){
	if(siggnal != TARGET_SIGNAL_0)
		warning("Can't send signal to a remote system. Try `handle %s ignore'.",
			target_signal_to_name(siggnal));
	if(step)
		hss_putpkt(HSS_STEP);
	else
		hss_putpkt(HSS_CONT);
	hss_need_reply = 1;
}

static void hss_detach(char *args, int from_tty){
	if(args)
		error("Argument given to \"detach\" when remotely debugging.");
	pop_target();
	if(from_tty)
		puts_filtered("Ending remote debugging.\n");
}

/* control-C */
static void (*hss_ofunc)();

/* Ask the user what to do when an interrupt is received.  */
static void interrupt_query()
{
	target_terminal_ours();

	if (query("Interrupted while waiting for the program.\n\
Give up (and stop debugging it)? "))
	{
		target_mourn_inferior();
		return_to_top_level(RETURN_QUIT);
	}
	target_terminal_inferior();
}

static void hss_interrupt(int signo)
{
	/* If this doesn't work, try more severe steps.  */
	signal(signo, hss_ofunc);
	if(remote_debug)
		printf_unfiltered("hss_interrupt called\n");
	interrupt_query();
	signal(signo, hss_interrupt);
#if 0
	/* Send a break or a ^C, depending on user preference.  */
	if (remote_break)
		SERIAL_SEND_BREAK(hss_desc);
	else
		SERIAL_WRITE(hss_desc, "\003", 1);
#endif
}

static int hss_wait(int pid, struct target_waitstatus *status){
	HSS *hss = (HSS *)recv_hss_buf;
	unsigned char code;

	if(hss_need_reply == 0){
		status->kind = TARGET_WAITKIND_STOPPED;
		status->value.integer = TARGET_SIGNAL_TRAP;
		return(0);
	}
	status->kind = TARGET_WAITKIND_STOPPED;
	while(1){
		hss_ofunc = (void (*)())signal(SIGINT, hss_interrupt);
		code = hss_getpkt();
		signal(SIGINT, hss_ofunc);

		if(code == HSS_SIGNAL){
			status->value.sig = (enum target_signal)
				extract_unsigned_integer(hss->data, 4);
			break;
		}else if(code != HSS_NG && code != HSS_SEND
				&& code != HSS_TIMEOUT)
			warning("Invalid remote reply: code=0x%x(%s)",
				code, hss_code_name(code));
	}
	hss_need_reply = 0;
	return(0);
}

static void hss_fetch_registers(int regno){
	HSS *hss = (HSS *)recv_hss_buf;
	int i, v;

	if(regno == -1){
		for(i = 0; i < NUM_REGS; i++)
			hss_fetch_registers(i);
		return;
	}
	if(*mips_psx_reg_names[regno] == '\0')
		return;
	hss_putpkt(HSS_RDREG, regno);
	if(hss_getpkt() == HSS_OK){
		v = extract_unsigned_integer(hss->data, 4);
		supply_register(regno, (char *)&v);
	}
}

static void hss_store_registers(int regno){
	HSS *hss = (HSS *)recv_hss_buf;
	int i, v;

	if(regno == -1){
		for(i = 0; i < NUM_REGS; i++)
			hss_store_registers(i);
		return;
	}
	if(*mips_psx_reg_names[regno] == '\0')
		return;
	hss_putpkt(HSS_WRREG, regno, read_register(regno));
	(void)hss_getpkt();
	registers_changed();
}

static void hss_prepare_to_store(void){
}

static int hss_xfer_memory(CORE_ADDR memaddr, char *myaddr, int len,
		int write, struct target_ops *target){
	HSS *hss = (HSS *)recv_hss_buf;
	int r = 0, n;

	while(r < len){
		if(n = len, MAX_HSS_SIZ < n)
			n = MAX_HSS_SIZ;
		if(write)
			hss_putpkt(HSS_WRMEM, memaddr, n, myaddr);
		else
			hss_putpkt(HSS_RDMEM, memaddr, n);
		if(hss_getpkt() != HSS_OK){
			errno = EIO;
			return(0);
		}
		if(write == 0)
			memcpy(myaddr, hss->data, n);
		memaddr += n, myaddr += n, r += n;
	}
	return(r);
}

static void hss_files_info(struct target_ops *target){
	puts_filtered("Debugging a target over a serial line.\n");
}

#ifdef REMOTE_BREAKPOINT
static unsigned char break_insn[] = REMOTE_BREAKPOINT;
#else /* REMOTE_BREAKPOINT */
static unsigned char break_insn[] = BREAKPOINT;
#endif /* REMOTE_BREAKPOINT */

static int hss_insert_breakpoint(CORE_ADDR memaddr, char *contents_cache){
	int val;

	val = target_read_memory(memaddr, contents_cache, sizeof(break_insn));
	if(val == 0)
		val = target_write_memory(memaddr, (char *)break_insn,
			sizeof(break_insn));
	return(val);
}

static int hss_remove_breakpoint(CORE_ADDR memaddr, char *contents_cache){
	return(target_write_memory(memaddr, contents_cache,
		sizeof(break_insn)));
}

static void hss_kill(void){
}

static void hss_create_inferior(char *execfile, char *args, char **env){
	CORE_ADDR entry_pt;

	if(args && *args){
		warning("Can't pass arguments; arguments ignored.");
		execute_command("set args", 0);
	}
	if(execfile == 0 || exec_bfd == 0)
		error("NO executable file specified");
	entry_pt = (CORE_ADDR)bfd_get_start_address(exec_bfd);
	init_wait_for_inferior();
	proceed(entry_pt, TARGET_SIGNAL_DEFAULT, 0);
}
static void hss_mourn(void){
	unpush_target(&hss_ops);
	generic_mourn_inferior();
}

struct target_ops hss_ops = {
  "hss",			/* to_shortname */
  "Remote serial target in HSS protocol",	/* to_longname */
  "Use a remote computer via serial line, using a HSS protocol.\n\
Specify the serial device it is connected to (e.g. /dev/ttya).", /* to_doc */
  hss_open,			/* to_open */
  hss_close,			/* to_close */
  NULL,				/* to_attach */
  hss_detach,			/* to_detach */
  hss_resume,			/* to_resume */
  hss_wait,			/* to_wait */
  hss_fetch_registers,		/* to_fetch_registers */
  hss_store_registers,		/* to_store_registers */
  hss_prepare_to_store,		/* to_prepare_to_store */
  hss_xfer_memory,		/* to_xfer_memory */
  hss_files_info,		/* to_files_info */
  hss_insert_breakpoint,	/* to_insert_breakpoint */
  hss_remove_breakpoint,	/* to_remove_breakpoint */
  NULL,				/* to_terminal_init */
  NULL,				/* to_terminal_inferior */
  NULL,				/* to_terminal_ours_for_output */
  NULL,				/* to_terminal_ours */
  NULL,				/* to_terminal_info */
  hss_kill,			/* to_kill */
  generic_load,			/* to_load */
  NULL,				/* to_lookup_symbol */
  hss_create_inferior,		/* to_create_inferior */
  hss_mourn,			/* to_mourn_inferior */
  NULL,				/* to_can_run */
  NULL,				/* to_notice_signal */
  0,				/* to_thread_alive */
  0,				/* to_stop */
  process_stratum,		/* to_stratum */
  NULL,				/* to_next */
  1,				/* to_has_all_memory */
  1,				/* to_has_memory */
  1,				/* to_has_stack */
  1,				/* to_has_registers */
  1,				/* to_has_execution */
  NULL,				/* sections */
  NULL,				/* sections_end */
  OPS_MAGIC			/* to_magic */
};

void
_initialize_remote_hss(void){
	add_target(&hss_ops);
	add_show_from_set(add_set_cmd("remotetimeout", no_class,
					var_integer, (char *)&hss_timeout,
				       "Set timeout value for remote read.\n",
				       &setlist),
			  &showlist);

	add_show_from_set(add_set_cmd("remotebreak", no_class,
				      var_integer, (char *)&hss_break,
				      "Set whether to send break if interrupted.\n",
				      &setlist),
			  &showlist);
}
