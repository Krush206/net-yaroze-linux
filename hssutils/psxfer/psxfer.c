/* "psxfer.c"
 * $Id: psxfer.c,v 1.1 1996/08/10 14:16:17 motohash Exp $
 */
#if HAVE_CONFIG_H
#include "../config.h"
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "hss/hss.h"
#include "psxfer.h"

#define DBLOCAL		5

#ifndef DEFAULT_DEVICE
#   define DEFAULT_DEVICE	"/dev/cuaa0"
#endif
#ifndef DEFAULT_BPS
#   define DEFAULT_BPS		115200
#endif

static int psxfer_bwrite PARAMS((hss_t, const char *, unsigned int, int));
static int psxfer_bread PARAMS((hss_t, const char *, unsigned int, size_t, int));
static void psxfer_showmsg PARAMS((const void *, int));
static int psxfer_go PARAMS((hss_t, int));
static void psxfer_main PARAMS((hss_t));
extern int main PARAMS((int, char *argv[]));

/* 
 * Binary: Write to PS
 */
static int
psxfer_bwrite(hss, name, vma, verbose)
    hss_t hss;
    const char *name;			/* input file */
    unsigned int vma;			/* start address */
    int verbose;			/* verbose */
{
    unsigned char buf[XFER_BUFSIZE];
    const char *fname = name;
    size_t total = 0;
    size_t sent = 0;
    int ret = -1;
    FILE *fip;

    if (hss == NULL) {
	return -1;
    } else if (name == NULL) {
	fip = stdin;
	fname = "stdin";
    } else {
	fip = fopen(name, "r");
	if (fip == NULL) {
	    perror(name);
	    return -1;
	}
	fseek(fip, 0L, SEEK_END);
	total = ftell(fip);
	fseek(fip, 0L, SEEK_SET);
    }

    while (1) {
	unsigned char *bp = buf;
	int rlen;

	rlen = fread(bp, 1, XFER_BUFSIZE, fip);
	if (rlen < 0) {
	    perror(fname);
	    goto error;
	} else if (rlen == 0)
	    break;

	while (rlen > 0) {
#if DONT_XFER
	    int xlen = rlen;
#else
	    int xlen = (*hss->ops->writemem)(hss, vma, rlen, bp);
	    if (xlen <= 0) {
		fprintf(stderr, "%s:writemem: %s\n",
			fname, (*hss->ops->geterr)(hss));
		goto error;
	    }
#endif
	    bp = &bp[xlen];
	    rlen -= xlen;
	    sent += xlen;
	    vma += xlen;
	    if (verbose) {
		printf("\r%s: %08x ", fname, vma);
		if (total)
		    printf("%2d%%", (100 * sent) / total);
		else
		    printf("%3dK", sent / 1024);
		fflush(stdout);
	    }
	}
    }
    if (verbose)
	printf("\r%s: %08x done\t\t\n", fname, vma);
    ret = 0;
 error:
    if (fip != NULL && name != NULL)
	fclose(fip);
    return ret;
}

/* 
 * Binary: Read from PS
 */
static int
psxfer_bread(hss, name, vma, len, verbose)
    hss_t hss;
    const char *name;			/* output */
    unsigned int vma;			/* start address */
    size_t len;				/* len */
    int verbose;			/* verbose */
{
    const char *fname = name;
    size_t rest = len;
    int ret = -1;
    FILE *fop;

    if (hss == NULL) {
	return -1;
    } else if (name == NULL) {
	fop = stdout;
	fname = "stdout";
    } else {
	fop = fopen(name, "w");
	if (fop == NULL) {
	    perror(name);
	    return -1;
	}
    }

    while (rest > 0) {
	unsigned char buf[XFER_BUFSIZE];
	int xlen = (*hss->ops->readmem)(hss, vma, rest, buf);

	if (xlen <= 0) {
	    fprintf(stderr, "%s:bread: %s\n",
		    fname, (*hss->ops->geterr)(hss));
	    goto error;
	}
	if (fwrite(buf, 1, xlen, fop) != xlen) {
	    perror(fname);
	    goto error;
	}
	rest -= xlen;
	vma += xlen;
	if (verbose) {
	    printf("\r%s: %08x %2d%%",
		   fname, vma, (100 * (len - rest)) / len);
	    fflush(stdout);
	}
    }
    if (verbose)
	printf("\r%s: %08x done\n", fname, vma);
    ret = 0;
 error:
    if (fop != NULL && name != NULL)
	fclose(fop);
    return ret;
}

/* 
 * show message
 */
static void
psxfer_showmsg(vp, len)
    const void *vp;
    int len;
{
    const unsigned char *bp = vp;

    if (len > 0 && bp[len - 1] == '\0')
	printf("%s", bp);
    else
	fwrite(bp, 1, len, stdout);
    /* fflush(stdout); */
}

/* 
 * Go
 */
static int
psxfer_go(hss, verbose)
    hss_t hss;
    int verbose;
{
    static const char *signame[] = {
	"",
	"SIGHUP",
	"SIGINT",
	"SIGQUIT",
	"SIGILL(Sys, RI, CpU, Ovf)",
	"SIGTRAP(Bp)",
	"SIGABRT",
	"SIGEMT",
	"SIGFPE",
	"SIGKILL",
	"SIGBUS(AdEL, AdES)",
	"SIGSEGV(IBE, DBE)",
	"HSS_SIGSYS",
    };
    hss_sigval_t sig;
    int ret = -1;

    if ((*hss->ops->resume)(hss, 0) != HSS_E_OK) {
	fprintf(stderr, "resume: %s\n", (*hss->ops->geterr)(hss));
    } else if ((*hss->ops->wait)(hss, &sig, psxfer_showmsg) != HSS_E_OK) {
	fprintf(stderr, "wait: %s\n", (*hss->ops->geterr)(hss));
    } else {
	if (verbose) {
	    printf("program terminated. sigval=%d", sig);
	    if (sig < sizeof(signame) / sizeof(signame[0]))
		printf(" %s", signame[sig]);

	    printf("\n");
	}
	ret = 0;
    }
    return ret;
}

#define LBUF_SIZE		1024
/* 
 * Interactive mode
 */
static void
psxfer_main(hss)
    hss_t hss;
{
#if 0
    unsigned char buf[LBUF_SIZE];

    buf[sizeof(buf) - 1] = '\0';
    while (fgets(buf, sizeof(buf) - 1, stdin) != NULL) {
	unsigned int x;
	unsigned char *p;
	len = strlen(buf);

	if (buf[len - 1] == '\n')
	    buf[--len] = '\0';

	/* under construction */
    }
#endif
}

#define USAGE \
"Usage: %s [-B<bps>] [-a<addr>] [-n<file>] [-p<dev>] [-s<size>]\
 [-g] [-h] [-v] [file...]\n"

/* #define DEFAULT_SP		0x801ffc00 */
#define XFER_ATTR_ADDR		0x1
#define XFER_ATTR_SIZE		0x2
#define XFER_ATTR_GO		0x4
#define XFER_ATTR_SP		0x8
#define XFER_ATTR_VERBOSE	0x10

/* 
 * MAIN
 */
int
main(argc, argv)
    int argc;
    char *argv[];
{
    extern int optind;
    char *dev = DEFAULT_DEVICE;
    char *fname = NULL;
    int bps = DEFAULT_BPS;
    int opt = XFER_ATTR_VERBOSE;
    int errcnt = 0;
    size_t len = 0;
    unsigned int vma = 0;
    unsigned int sp = 0;
    hss_t hss;
    int i;

    /*
     * option parsing
     */
    while ((i = getopt(argc, argv, "B:S:a:bhgn:p:s:v")) != -1) {
	extern char *optarg;
	unsigned int x;

	switch (i) {
	case 'B':
	    bps = atoi(optarg);
	    break;
	case 'S':
	    opt |= XFER_ATTR_SP;
	    sscanf(optarg, "%x", &sp);
	    break;
	case 'a':
	    opt |= XFER_ATTR_ADDR;
	    sscanf(optarg, "%x", &vma);
	    break;
	case 'g':
	    opt |= XFER_ATTR_GO;
	    break;
	case 'n':
	    fname = optarg;
	    break;
	case 'p':
	    dev = optarg;
	    break;
	case 'h':
	    printf (USAGE, argv[0]);
	    return 0;
	    break;
	case 's':
	    opt |= XFER_ATTR_SIZE;
	    sscanf(optarg, "%x", &x);
	    len = x;
	    break;
	case 'v':
	    printf("%s: Version %s\n", argv[0], VERSION);
	    break;
	default:
	    fprintf (stderr, USAGE, argv[0]);
	    return(1);
	    break;
	}
    }

    /*
     * initialize
     */
    hss = hss_create();
    if (hss == NULL) {
	fprintf(stderr, "%s: fatal error\n", argv[0]);
	return 1;
    } else if ((*hss->ops->open)(hss, dev) < 0) {
	fprintf(stderr, "%s:%s: %s\n",
		argv[0], dev, (*hss->ops->geterr)(hss));
	hss_destroy(hss);
	return 1;
    } else if ((*hss->ops->setspeed)(hss, bps) < 0) {
	fprintf(stderr, "%s:bps %d: %s\n",
		argv[0], bps, (*hss->ops->geterr)(hss));
	hss_destroy(hss);
	return 1;
    } else if ((*hss->ops->rdb)(hss) != HSS_E_OK) {
	fprintf(stderr, "%s: rdb mode error\n", argv[0]);
	hss_destroy(hss);
	return 1;
    }

    /*
     * main
     */
    i = optind;
    if (fname == NULL && i < argc)
	fname = argv[i++];

    do {
	int ret = 0;

	switch (opt & (XFER_ATTR_ADDR | XFER_ATTR_SIZE)) {
	case XFER_ATTR_ADDR | XFER_ATTR_SIZE:
	    ret = psxfer_bread(hss, fname, vma, len,
			       (opt & XFER_ATTR_VERBOSE));
	    break;
	case XFER_ATTR_ADDR:
	    ret = psxfer_bwrite(hss, fname, vma, (opt & XFER_ATTR_VERBOSE));
	    break;
	case 0:
	    if (fname == NULL)
		continue;
	    ret = ecoff_load(hss, fname, (opt & XFER_ATTR_VERBOSE));
	    break;
	default:
	    if (fname == NULL)
		break;

	    fprintf(stderr, "%s: what to do?\n", fname);
	    ret = 1;
	    break;
	}
	errcnt += (ret != 0)? 1 : 0;
    } while (i < argc && (fname = argv[i++]) != NULL);

    if (opt & XFER_ATTR_SP) {
	/* set stack-pointer */
	if ((*hss->ops->writereg)(hss, REG_SP, sp) != HSS_E_OK) {
	    fprintf(stderr, "%s: set sp: %s\n",
		    argv[0], (*hss->ops->geterr)(hss));
	    errcnt++;
	}
    }
    if (opt & XFER_ATTR_GO) {
	(void)psxfer_go(hss, (opt & XFER_ATTR_VERBOSE));
    } else if (!(opt & (XFER_ATTR_ADDR | XFER_ATTR_SIZE))) {
#if 0
	psxfer_main(hss);
#endif
    }
    hss_destroy(hss);
    return (errcnt)? 1 : 0;
}
