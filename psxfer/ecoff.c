/* "ecoff.c"
 * $Id: ecoff.c,v 1.1 1996/08/10 14:16:15 motohash Exp $
 */
#if HAVE_CONFIG_H
#include "config.h"
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#if HAVE_BSTRING_H
#  include <bstring.h>
#endif
#if HAVE_MEMORY_H
#  include <memory.h>
#endif
#include "hss/hss.h"
#include "hss/ecoff.h"
#include "psxfer.h"

#define DBLOCAL		5

struct ecoff_swap_info;
static void ecoff_swap PARAMS((void *, size_t));
static void ecoff_swap_hdr PARAMS((const struct ecoff_swap_info *, void *));

/*================================*
 *	BYTESWAP OPS
 *================================*/
struct ecoff_swap_info {
    unsigned short	off;		/* offsetof element */
    unsigned short	size;		/* sizeof element */
};

#define ECOFF_PSX_SP		0x801fff00
#define ECOFF_SWAP(T, M)	{ (unsigned short)(&((T)0)->M), sizeof(((T)0)->M), }
#define ECOFF_SWAP_HDR(M)	ECOFF_SWAP(struct ecoff_file_hdr *, M)
#define ECOFF_SWAP_AOUT(M)	ECOFF_SWAP(struct ecoff_aout_hdr *, M)
#define ECOFF_SWAP_SHDR(M)	ECOFF_SWAP(struct ecoff_sect_hdr *, M)

static const struct ecoff_swap_info ecoff_swapinfo_hdr[] = {
    ECOFF_SWAP_HDR(f_magic),
    ECOFF_SWAP_HDR(f_nscns),
    ECOFF_SWAP_HDR(f_timdat),
    ECOFF_SWAP_HDR(f_symptr),
    ECOFF_SWAP_HDR(f_nsyms),
    ECOFF_SWAP_HDR(f_opthdr),
    ECOFF_SWAP_HDR(f_flags),
    { 0, 0, },
};

static const struct ecoff_swap_info ecoff_swapinfo_aout[] = {
    ECOFF_SWAP_AOUT(a_magic),
    ECOFF_SWAP_AOUT(a_vstamp),
    ECOFF_SWAP_AOUT(a_tsize),
    ECOFF_SWAP_AOUT(a_dsize),
    ECOFF_SWAP_AOUT(a_bsize),
    ECOFF_SWAP_AOUT(a_entry),
    ECOFF_SWAP_AOUT(a_ftext),
    ECOFF_SWAP_AOUT(a_fdata),
    ECOFF_SWAP_AOUT(a_fbss),
    ECOFF_SWAP_AOUT(a_gprmask),
    ECOFF_SWAP_AOUT(a_cprmask[0]),
    ECOFF_SWAP_AOUT(a_cprmask[1]),
    ECOFF_SWAP_AOUT(a_cprmask[2]),
    ECOFF_SWAP_AOUT(a_cprmask[3]),
    ECOFF_SWAP_AOUT(a_gp),
    { 0, 0, },
};

static const struct ecoff_swap_info ecoff_swapinfo_shdr[] = {
    ECOFF_SWAP_SHDR(s_paddr),
    ECOFF_SWAP_SHDR(s_vaddr),
    ECOFF_SWAP_SHDR(s_size),
    ECOFF_SWAP_SHDR(s_scnptr),
    ECOFF_SWAP_SHDR(s_relptr),
    ECOFF_SWAP_SHDR(s_lnnoptr),
    ECOFF_SWAP_SHDR(s_nreloc),
    ECOFF_SWAP_SHDR(s_nlnno),
    ECOFF_SWAP_SHDR(s_flags),
    { 0, 0, },
};

/* 
 * byteswap
 */
static void
ecoff_swap(ptr, n)
    void *ptr;
    size_t n;
{
    unsigned char *bp = ptr;
    int i;

    for (i = n / 2; --i >= 0; ) {
	unsigned char ch = bp[n - 1 - i];
	bp[n - 1 - i] = bp[i];
	bp[i] = ch;
    }
}

/* 
 * byteswap header element
 */
static void
ecoff_swap_hdr(sinfo, ptr)
    const struct ecoff_swap_info *sinfo;
    void *ptr;
{
    unsigned char *base = ptr;

    if (sinfo == NULL || base == NULL)
	return;
    for (; sinfo->size; sinfo++)
	ecoff_swap(&base[sinfo->off], sinfo->size);
}

/*================================* 
 *	ECOFF LOAD OPS
 *================================*/
struct ecoff_sect_info {
    unsigned int vaddr;			/* base address */
    unsigned int size;			/* data length */
    long ptr;				/* file pointer */
    unsigned int flags;			/* flag */
};

/* loadable section? */
#define ECOFF_MIPS_ALLOC \
	(ECOFF_MIPS_LOAD | ECOFF_MIPS_ZERO)
#define ECOFF_MIPS_LOAD	\
	(STYP_TEXT | STYP_DATA | STYP_SDATA | STYP_RDATA | \
	 STYP_LIT8 | STYP_LIT4)
#define ECOFF_MIPS_ZERO	\
	(STYP_SBSS | STYP_BSS)

/*
 * ret: succeed:0/fail:!0
 */
int
ecoff_load(hss, name, verbose)
    hss_t hss;
    const char *name;
    int verbose;
{
    union ecoff_generic {
	struct ecoff_file_hdr hdr;
	struct ecoff_aout_hdr aout;
	struct ecoff_sect_hdr sect;
	unsigned char buf;
    } ecoff;
    struct ecoff_sect_info *sect = NULL;
    struct ecoff_sect_info *s;
    size_t total = 0;
    size_t sent = 0;
    int ret = -1;
    unsigned int vma = 0;
    FILE *fip;
    int nswap;
    int i, n;

    if (hss == NULL)
	return -1;
    fip = fopen(name, "r");
    if (fip == NULL) {
	perror(name);
	return -1;
    }

    /*
     * hdr
     */
    if (fread(&ecoff.buf, sizeof(ecoff.hdr), 1, fip) != 1) {
        fprintf(stderr, "%s: header error\n", name);
	goto error;
    }
    switch (ecoff.hdr.f_magic) {
    case ECOFF_MIPS_MAGIC_LITTLE:
    case ECOFF_MIPS_MAGIC_BIG:
	nswap = 0;
	break;
    case ECOFF_MIPS_MAGIC_LITTLE_SWAP:
    case ECOFF_MIPS_MAGIC_BIG_SWAP:
	nswap = 1;
	ecoff_swap_hdr(ecoff_swapinfo_hdr, &ecoff.hdr);
	break;
    default:
	fprintf(stderr, "%s: bad magic\n", name);
	goto error;
    }
    i = ECOFF_HDR_F_EXEC | ((hss->tendian != HSS_ENDIAN_LE)?
			    ECOFF_HDR_F_AR32W : ECOFF_HDR_F_AR32WR);
    if ((ecoff.hdr.f_flags & i) != i) {
	fprintf(stderr, "%s: bad format flags\n", name);
	return -1;
    }
    n = ecoff.hdr.f_nscns;

    /* 
     * aout hdr
     */
    if (fread(&ecoff.buf, sizeof(ecoff.aout), 1, fip) != 1) {
	fprintf(stderr, "%s: a.out header error\n", name);
	goto error;
    } else if (nswap)
	ecoff_swap_hdr(ecoff_swapinfo_aout, &ecoff.aout);

    if (ecoff.aout.a_magic != ECOFF_AOUT_ZMAGIC) {
	fprintf(stderr, "%s: a.out bad magic number\n", name);
	goto error;
    }
#if DONT_XFER
    /* nothing to do */
#else
    if ((*hss->ops->writereg)(hss, REG_EPC, ecoff.aout.a_entry) != HSS_E_OK ||
	(*hss->ops->writereg)(hss, REG_GP, ecoff.aout.a_gp) != HSS_E_OK) {
	fprintf(stderr, "%s: writereg: %s\n", name, (*hss->ops->geterr)(hss));
	goto error;
    }
    /* set stack-pointer */
    if ((*hss->ops->writereg)(hss, REG_SP, ECOFF_PSX_SP) != HSS_E_OK) {
	fprintf(stderr, "%s: set sp: %s\n", name, (*hss->ops->geterr)(hss));
	goto error;
    }
#endif
    if (verbose)
	printf("%7s: %08x\n%7s: %08x\n",
	       "entry", ecoff.aout.a_entry,
	       "gp", ecoff.aout.a_gp);

    /*
     * sect hdr
     */
    sect = malloc(sizeof(*s) * n);
    if (sect == NULL) {
	perror(name);
	goto error;
    }
    
    for (s = sect, i = n; --i >= 0; s++) {
	if (fread(&ecoff.buf, sizeof(ecoff.sect), 1, fip) != 1) {
	    fprintf(stderr, "%s: section error\n", name);
	    goto error;
	} else if (nswap)
	    ecoff_swap_hdr(ecoff_swapinfo_shdr, &ecoff.sect);

	s->vaddr = ecoff.sect.s_vaddr;
	s->size = ecoff.sect.s_size;
	s->ptr = ecoff.sect.s_scnptr;
	s->flags = ecoff.sect.s_flags;
#if BSSXFER
	if (ecoff.sect.s_flags & ECOFF_MIPS_ALLOC)
	    total += s->size;
#else
	if (ecoff.sect.s_flags & ECOFF_MIPS_LOAD)
	    total += s->size;
#endif
	if (verbose)
	    printf("%7s: %08x..%08x\n",
		   ecoff.sect.s_name,
		   ecoff.sect.s_vaddr,
		   ecoff.sect.s_vaddr + ecoff.sect.s_size);
    }

    /*
     * xfer
     */
    for (s = sect; --n >= 0; s++) {
	size_t rest;

#if BSSXFER
	if (!(s->flags & ECOFF_MIPS_ALLOC))
	    continue;
#else
	if (!(s->flags & ECOFF_MIPS_LOAD))
	    continue;
#endif
	DBLOG(DBLOCAL, ("%08x..%08x: %08x\n",
			s->vaddr, s->vaddr + s->size, s->flags));

	if ((s->flags & ECOFF_MIPS_LOAD) && fseek(fip, s->ptr, SEEK_SET) < 0) {
	    perror(name);
	    goto error;
	}

	vma = s->vaddr;
	for (rest = s->size; rest > 0; ) {
	    unsigned char buf[XFER_BUFSIZE];
	    unsigned char *bp = buf;
	    int rlen = (rest >= XFER_BUFSIZE)? XFER_BUFSIZE : rest;

#if BSSXFER
	    if (s->flags & ECOFF_MIPS_LOAD) {
		rlen = fread(bp, 1, rlen, fip);
		if (rlen < 0) {
		    perror(name);
		    goto error;
		}
	    } else if (s->flags & ECOFF_MIPS_ZERO)
		memset(buf, 0, sizeof(buf));
#else
	    rlen = fread(bp, 1, rlen, fip);
	    if (rlen < 0) {
		perror(name);
		goto error;
	    }
#endif
	    rest -= rlen;
	    while (rlen > 0) {
#if DONT_XFER
		int xlen = rlen;
#else
		int xlen = (*hss->ops->writemem)(hss, vma, rlen, bp);
		if (xlen <= 0) {
		    fprintf(stderr, "%s: download: %s\n",
			    name, (*hss->ops->geterr)(hss));
		    goto error;
		}
#endif
		bp = &bp[xlen];
		rlen -= xlen;
		sent += xlen;
		vma += xlen;
		if (verbose) {
		    printf("\r%s: %08x %2d%%",
			   name, vma, (100 * sent) / total);
		    fflush(stdout);
		}
	    }
	}
    }
    if (verbose)
	printf("\r%s: %08x done\n", name, vma);
    ret = 0;
 error:
    if (sect != NULL)
	free(sect);
    if (fip != NULL)
	fclose(fip);
    return ret;
}
