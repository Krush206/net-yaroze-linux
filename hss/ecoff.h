/* "ecoff.h" ... ecoff file format.
 * $Id: ecoff.h,v 1.1 1996/08/10 14:15:48 motohash Exp $
 */
#ifndef HSS_ECOFF_HEADERFILE
#define HSS_ECOFF_HEADERFILE

/* Generic ECOFF
 *	file header
 *	a.out header	(entry, gp, ...)
 *	section headers	(vaddr, size, flag, ...)
 *	data
 *	symtabs
 */

/*
 * Mips magic numbers used in filehdr.
 */
#define ECOFF_MIPS_MAGIC_1		0x0180
#define ECOFF_MIPS_MAGIC_LITTLE		0x0162
#define ECOFF_MIPS_MAGIC_BIG		0x0160
#define ECOFF_MIPS_MAGIC_1_SWAP		0x8001
#define ECOFF_MIPS_MAGIC_LITTLE_SWAP	0x6201
#define ECOFF_MIPS_MAGIC_BIG_SWAP	0x6001
/* MIPS II ISA */
#define ECOFF_MIPS_MAGIC_LITTLE2	0x0166
#define ECOFF_MIPS_MAGIC_BIG2		0x0163
#define ECOFF_MIPS_MAGIC_LITTLE2_SWAP	0x6601
#define ECOFF_MIPS_MAGIC_BIG2_SWAP	0x6301
/* MIPS III ISA */
#define ECOFF_MIPS_MAGIC_LITTLE3	0x0142
#define ECOFF_MIPS_MAGIC_BIG3		0x0140
#define ECOFF_MIPS_MAGIC_LITTLE3_SWAP	0x4201
#define ECOFF_MIPS_MAGIC_BIG3_SWAP	0x4001

/* Magic numbers are defined in coff/ecoff.h.  */
#define ECOFF_MIPS_BADMAG(X) (((X) != ECOFF_MIPS_MAGIC_BIG) && \
			      ((X) != ECOFF_MIPS_MAGIC_BIG2) && \
			      ((X) != ECOFF_MIPS_MAGIC_BIG3))

/*
 * Magic numbers used in a.out header.
 * demand load format, eg normal ld output
 */
#define ECOFF_AOUT_ZMAGIC	0413

/* Names of special sections.  */
#define ECOFF_SECT_TEXT		".text"
#define ECOFF_SECT_DATA		".data"
#define ECOFF_SECT_BSS		".bss"
#define ECOFF_SECT_RDATA	".rdata"
#define ECOFF_SECT_SDATA	".sdata"
#define ECOFF_SECT_SBSS		".sbss"
#define ECOFF_SECT_LITA		".lita"
#define ECOFF_SECT_LIT4		".lit4"
#define ECOFF_SECT_LIT8		".lit8"
#define ECOFF_SECT_LIB		".lib"
#define ECOFF_SECT_INIT		".init"
#define ECOFF_SECT_FINI		".fini"
#define ECOFF_SECT_PDATA	".pdata"
#define ECOFF_SECT_XDATA	".xdata"

/* file header */
struct ecoff_file_hdr {
    unsigned short	f_magic;	/*  0. magic number */
    unsigned short	f_nscns;	/*  2. number of sections */
    unsigned int	f_timdat;	/*  4. time & date stamp */
    unsigned int	f_symptr;	/*  8. file pointer to symtab */
    unsigned int	f_nsyms;	/* 12. number of symtab entries */
    unsigned short	f_opthdr;	/* 16. sizeof(optional hdr) */
    unsigned short	f_flags;	/* 18. flags */
};					/* 20. */

/*
 * bits for f_flags:
 *	F_RELFLG	relocation info stripped from file
 *	F_EXEC		file is executable (no unresolved external references)
 *	F_LNNO		line numbers stripped from file
 *	F_LSYMS		local symbols stripped from file
 *	F_AR16WR	file is 16-bit little-endian
 *	F_AR32WR	file is 32-bit little-endian
 *	F_AR32W		file is 32-bit big-endian
 */
#define	ECOFF_HDR_F_RELFLG	(0x0001)
#define	ECOFF_HDR_F_EXEC	(0x0002)
#define	ECOFF_HDR_F_LNNO	(0x0004)
#define	ECOFF_HDR_F_LSYMS	(0x0008)
#define	ECOFF_HDR_F_AR16WR	(0x0080)
#define	ECOFF_HDR_F_AR32WR	(0x0100)
#define	ECOFF_HDR_F_AR32W     	(0x0200)
#define	ECOFF_HDR_F_DYNLOAD	(0x1000)
#define	ECOFF_HDR_F_SHROBJ	(0x2000)

/* a.out optional hader */
struct ecoff_aout_hdr {
    unsigned short	a_magic;	/*  0. type of file */
    unsigned short	a_vstamp;	/*  2. version stamp */
    unsigned int	a_tsize;	/*  4. text size (nbytes) padded to FW bdry */
    unsigned int	a_dsize;	/*  8. data size */
    unsigned int	a_bsize;	/* 12. bss size */
    unsigned int	a_entry;	/* 16. entry pt. */
    unsigned int	a_ftext;	/* 20. base of text used for this file */
    unsigned int	a_fdata;	/* 24. base of data used for this file */
    unsigned int	a_fbss;		/* 28. base of bss used for this file */
    unsigned int	a_gprmask;	/* 32. gpr register mask */
    unsigned int	a_cprmask[4];	/* 36. co-processor register mask */
    unsigned int	a_gp;		/* 52. value for gp register */
};					/* 56. */

/* section header */
struct ecoff_sect_hdr {
    unsigned char	s_name[8];	/*  0. section name */
    unsigned int	s_paddr;	/*  8. physical address, aliased s_nlib */
    unsigned int	s_vaddr;	/* 12. virtual address */
    unsigned int	s_size;		/* 16. section size */
    unsigned int	s_scnptr;	/* 20. file ptr to raw data for section */
    unsigned int	s_relptr;	/* 24. file ptr to relocation */
    unsigned int	s_lnnoptr;	/* 28. file ptr to line numbers */
    unsigned short	s_nreloc;	/* 32. number of relocation entries */
    unsigned short	s_nlnno;	/* 34. number of line number entries */
    unsigned int	s_flags;	/* 36. flags */
};					/* 40. */

/*
 * bits for s_flags:
 *
 * ECOFF uses some additional section flags.
 */
#define STYP_REG	0x0		/* allocated, relocated, loaded */
#define STYP_DSECT	0x1		/* dummy */
#define STYP_NOLOAD	0x2		/* allocated, relocated, not loaded */
#define STYP_GROUP	0x4		/* formed of input sections */
#define STYP_PAD	0x8		/* not allocated, not relocated, loaded */
#define STYP_COPY	0x10		/* for decision function used by field 
					   update;  not allocated, not relocated, */
#define STYP_TEXT	0x0020		/* section contains text only */
#define STYP_DATA	0x0040		/* section contains data only */
#define STYP_BSS	0x0080		/* section contains bss only */

/* ECOFF uses some additional section flags.  */
#define STYP_RDATA	0x100
#define STYP_SDATA	0x200
#define STYP_SBSS	0x400
#define STYP_ECOFF_FINI	0x1000000
#define STYP_EXTENDESC	0x2000000	/* 0x02FFF000 bits => scn type, rest clr */
#define STYP_LITA	0x4000000
#define STYP_LIT8	0x8000000
#define STYP_LIT4	0x10000000
#define STYP_ECOFF_LIB	0x40000000
#define STYP_ECOFF_INIT	0x80000000
#define STYP_OTHER_LOAD	(STYP_ECOFF_INIT | STYP_ECOFF_FINI)
/* extended section types */
#define STYP_COMMENT	0x2100000
#define STYP_XDATA	0x2400000
#define STYP_PDATA	0x2800000

#endif /* !HSS_ECOFF_HEADERFILE */
