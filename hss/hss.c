/* "hss.c"
 * $Id: hss.c,v 1.2 1996/08/11 14:57:46 motohash Exp $
 */
#if HAVE_CONFIG_H
#include "../config.h"
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#if HAVE_MEMORY_H
#  include <memory.h>
#endif
#if HAVE_BSTRING_H
#  include <bstring.h>
#endif
#if HAVE_UNISTD_H
#  include <unistd.h>
#endif
#include <errno.h>
#include "sio.h"
#include "hss.h"

#define DBLOCAL		5

#define HSS_DEFAULT_TMOUT	2	/* 2sec */
#define HSS_CMD_RDB		"\r\nrdb\r\n"
#define HSS_CMD_RDB_CHAT	"\nExec Remote Debugger (epc:8008a800)\r\n"
#define HSS_CMD_RDB_TMOUT	5

static void hss_err_sys PARAMS((hss_t));
static hss_return_t hss_err_eno PARAMS((hss_t, int));
static const char * hss_err_get PARAMS((hss_t));
static inline unsigned short hss_ushort_swap PARAMS((unsigned short));
static inline unsigned int hss_uint_swap PARAMS((unsigned int));
static inline unsigned short hss_pkt_csum PARAMS((const void *, int));
static int hss_pkt_send_simple PARAMS((hss_t, int));
static inline int hss_pkt_in PARAMS((hss_t));
static struct hss_pkt *hss_pkt_receive PARAMS((hss_t, int, int *));
static int hss_pkt_send PARAMS((hss_t, struct hss_hdr *, const void *, int));

static hss_return_t hss_open PARAMS((hss_t, const char *));
static hss_return_t hss_close PARAMS((hss_t));
static hss_return_t hss_speed_set PARAMS((hss_t, int));
static hss_return_t hss_speed_get PARAMS((hss_t, int *));
static hss_return_t hss_tmout_set PARAMS((hss_t, int));
static hss_return_t hss_tmout_get PARAMS((hss_t, int *));
static hss_return_t hss_reg_fetch PARAMS((hss_t, hss_regid_t, hss_register_t *));
static hss_return_t hss_reg_store PARAMS((hss_t, hss_regid_t, hss_register_t));
static hss_return_t hss_mem_read PARAMS((hss_t, hss_vma_t, hss_size_t, void *));
static hss_return_t hss_mem_write PARAMS((hss_t, hss_vma_t, hss_size_t, const void *));
static hss_return_t hss_resume PARAMS((hss_t, int));
static hss_return_t hss_query PARAMS((hss_t, hss_sigval_t *));
static hss_return_t hss_wait PARAMS((hss_t, hss_sigval_t *,
				     void (*msgproc) PARAMS((const void *, int))));
static hss_return_t hss_rdb_mode PARAMS((hss_t));

/* 
 * set error
 */
static void
hss_err_sys(hss)
    hss_t hss;
{
    errlog_t elog = hss->elog;
    if (elog == NULL)
	return;
    (*elog->ops->syserr)(elog);
}


/* 
 * set error number
 */
static hss_return_t
hss_err_eno(hss, eno)
    hss_t hss;
    int eno;
{
    errlog_t elog = hss->elog;
    if (elog != NULL)
	(*elog->ops->seterr)(elog, eno, NULL);
    return HSS_E_SYS;

}

/* 
 * Get Error message
 */
static const char *
hss_err_get(hss)
    hss_t hss;
{
    errlog_t elog;
    if (hss == NULL || hss->elog == NULL)
	return "";
    elog = hss->elog;
    return (*elog->ops->getstr)(elog);
}

/*================================*
 *	UTILS
 *================================*/

/* 
 * swap ushort
 */
static inline unsigned short
hss_ushort_swap(x)
    unsigned short x;
{
    return (x << 8) | (x >> 8);
}

/* 
 * swap uint
 */
static inline unsigned int
hss_uint_swap(x)
    unsigned int x;
{
    unsigned int y = 0;
    int i;

    for (i = sizeof(y); --i >= 0; x >>= 8)
	y = (y << 8) | (x & 0xff);
    return y;
}

/* 
 * hss_ntohs()
 * hss_htons()
 * hss_ntohi()
 * hss_htoni()
 */
#define hss_swap(H, V, F) \
	(((H)->tendian == (H)->hendian)? (V) : F(V))
#define hss_ttohs(H, V)  hss_swap(H, V, hss_ushort_swap)
#define hss_htots(H, V)  hss_swap(H, V, hss_ushort_swap)
#define hss_ttohi(H, V)  hss_swap(H, V, hss_uint_swap)
#define hss_htoti(H, V)  hss_swap(H, V, hss_uint_swap)

/* 
 * calc checksum
 */
static inline unsigned short
hss_pkt_csum(pkt, pktlen)
    const void *pkt;
    int pktlen;
{
    const unsigned short *p = pkt;
    const unsigned short hsz = sizeof(unsigned short) * 8;
    unsigned int x = 0;
    int i;

    for (i = pktlen; i > 0; i -= sizeof(*p))
	x += *p++;
    while (x >> hsz)
	x = (unsigned short)x + (x >> hsz);
    return x;
}

/* 
 * set packet-header
 */
#define hss_pkt_sethdr(HDR, C, A, L) \
	(HDR)->magic[0] = HSS_MAGIC0, \
	(HDR)->magic[1] = HSS_MAGIC1, \
	(HDR)->magic[2] = HSS_MAGIC2, \
	(HDR)->code = (C), \
	(HDR)->addr = (A), \
	(HDR)->length = (L), \
	(HDR)->sum = 0

/* 
 * send simple packet (for ACK/NAK)
 */
static int
hss_pkt_send_simple(hss, code)
    hss_t hss;
    int code;
{
    struct hss_hdr hdr;
    sio_t sio = hss->sio;

    DBLOG(DBLOCAL, ("hss_pkt_send_simple\n"));
    hss_pkt_sethdr(&hdr, code, 0, 0);

    hdr.addr = hss_htoti(hss, hdr.addr);
    hdr.length = hss_htots(hss, hdr.length);
    hdr.sum = ~hss_pkt_csum(&hdr, sizeof(hdr));
    hdr.sum = hss_htots(hss, hdr.sum);

    return (*sio->ops->write)(sio, &hdr, sizeof(hdr));
}

/* 
 * packet in
 */
static inline int
hss_pkt_in(hss)
    hss_t hss;
{
    struct hss_pkt *pkt;
    unsigned char *p;
    int size;
    int now;
    sio_t sio = hss->sio;

    DBLOG(DBLOCAL, ("hss_pkt_in\n"));
    if ((*sio->ops->available)(sio) == 0) {
	int i;

	(void)(*sio->ops->tmout)(sio, hss->tmout);
	i = (*sio->ops->read)(sio);
	DBLOG(DBLOCAL, ("hss_pkt_in: read %d\n", i));
	if (i == 0) {
	    if (hss->tmout >= 0) {
		(void)hss_err_eno(hss, ETIMEDOUT);
		return HSS_E_TMOUT;
	    }
	    (void)hss_err_eno(hss, EAGAIN);
	    return HSS_E_EOF;
	} else if (i < 0)
	    return HSS_E_SYS;
    }

    now = hss->pnow;
    p = &hss->pbuf[now];
    if (now < sizeof(pkt->hdr)) {
	DBLOG(DBLOCAL, ("input: header now=%d\n", now));
	while (1) {
	    int ch = (*sio->ops->getch)(sio, 0);
	    if (ch < 0)
		return HSS_E_SYS;

	    DBLOG(DBLOCAL, ("%02x ", ch));
	    *p++ = ch;
	    if ((now == 0 && ch != HSS_MAGIC0) ||
		(now == 1 && ch != HSS_MAGIC1) ||
		(now == 2 && ch != HSS_MAGIC2)) {

		DBLOG(DBLEV, ("input: skipped header garbage"));
		now = 0;
		p = hss->pbuf;
	    }
	    if (++now == sizeof(pkt->hdr))
		break;
	    else if ((*sio->ops->available)(sio) == 0) {
		hss->pnow = now;
		return 0;
	    }
	}
	DBLOG(DBLOCAL, ("\n"));

	pkt = (struct hss_pkt *)hss->pbuf;
	size = hss_ttohs(hss, pkt->hdr.length);
	if (size & 1)
	    size++;
	if (size > sizeof(*pkt) - sizeof(pkt->hdr)) {
	    DBLOG(DBLEV, ("hss_pktin: illegal packet size"));
	    hss->pnow = 0;
	    return 0;
	}
	hss->psize = sizeof(pkt->hdr) + size;
	if (size == 0)
	    return hss->psize;
	else if ((*sio->ops->available)(sio) == 0) {
	    hss->pnow = now;
	    return 0;
	}
    }

    DBLOG(DBLOCAL, ("input: data now=%d\n", now));

    size = hss->psize;
    while (1) {
	int ch = (*sio->ops->getch)(sio, 0);
	if (ch < 0)
	    return HSS_E_SYS;

	*p++ = ch;
	if (++now >= size) {
	    break;
	} else if ((*sio->ops->available)(sio) == 0) {
	    hss->pnow = now;
	    return 0;
	}
    }
    return size;
}

/* 
 * receive packet
 */
static struct hss_pkt *
hss_pkt_receive(hss, retry, sizep)
    hss_t hss;
    int retry;
    int *sizep;
{
    int size = 0;

    DBLOG(DBLOCAL, ("hss_pkt_receive\n"));
    hss->pnow = 0;
    hss->psize = 0;
    while (--retry >= 0) {
	struct hss_pkt *pkt;
	int i;

	do {
	    size = hss_pkt_in(hss);
	} while (size == 0);
	if (size < 0)
	    break;

	pkt = (struct hss_pkt *)hss->pbuf;
	i = hss_pkt_csum(pkt, size);
	if (i ^ (unsigned short)~0) {
	    DBLOG(DBLOCAL, ("input: bad checksum %04x (calc %04x)\n",
			    (int)hss_ttohs(hss, pkt->hdr.sum), i));

	    if (pkt->hdr.code != HSS_ACK && pkt->hdr.code != HSS_NAK)
		hss_pkt_send_simple(hss, HSS_NAK);
	    hss->psize = 0;
	    hss->pnow = 0;
	    continue;
	}

	pkt->hdr.addr = hss_ttohi(hss, pkt->hdr.addr);
	pkt->hdr.length = hss_ttohs(hss, pkt->hdr.length);
	if (pkt->hdr.code != HSS_ACK && pkt->hdr.code != HSS_NAK)
	    hss_pkt_send_simple(hss, HSS_ACK);
	pkt = malloc(size);
	if (pkt == NULL) {
	    hss_err_sys(hss);
	    break;
	}
	memcpy(pkt, hss->pbuf, size);
	if (sizep != NULL)
	    *sizep = size;
	return pkt;
    }
    if (sizep != NULL)
	*sizep = size;
    return NULL;
}


/* 
 * send packet
 */
static int
hss_pkt_send(hss, hdr, body, retry)
    hss_t hss;
    struct hss_hdr *hdr;
    const void *body;
    int retry;
{
    struct hss_pkt pkt;
    sio_t sio = hss->sio;
    int len = hdr->length;


    DBLOG(DBLOCAL, ("hss_pkt_send\n"));
    memcpy(&pkt, hdr, sizeof(pkt.hdr));
    if (body != NULL)
	memcpy(pkt.body, body, len);
    DBLOG(DBLOCAL, ("hss_pkt_send: code=%d addr=%08x len=%d\n",
		    pkt.hdr.code, pkt.hdr.addr, len));
    if (len & 1)
	pkt.body[len++] = '\0';

    len += sizeof(*hdr);
    pkt.hdr.sum = 0;
    pkt.hdr.addr = hss_htoti(hss, pkt.hdr.addr);
    pkt.hdr.length = hss_htots(hss, pkt.hdr.length);
    pkt.hdr.sum = ~hss_pkt_csum(&pkt, len);
    pkt.hdr.sum = hss_htots(hss, pkt.hdr.sum);

    while (--retry >= 0) {
	struct hss_pkt *rpkt;
	int size;
	int i = (*sio->ops->write)(sio, &pkt, len);
	if (i < 0)
	    return i;
	rpkt = hss_pkt_receive(hss, 1, &size);
	if (rpkt != NULL) {
	    i = rpkt->hdr.code;
	    free(rpkt);
	    if (i == HSS_ACK)
		return 0;
	} else if (size < 0)
	    return size;
    }
    return HSS_E_TMOUT;
}


/*================================*
 *	OPS
 *================================*/

/* 
 * Open
 */
static
hss_return_t
hss_open(hss, name)
    hss_t hss;
    const char *name;
{
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if (name == NULL)
	return hss_err_eno(hss, EINVAL);
    else if ((sio = hss->sio) == NULL)
	return hss_err_eno(hss, EPERM);

    hss->tmout = HSS_DEFAULT_TMOUT;

    if ((*sio->ops->open)(sio, name) < 0 ||
	(*sio->ops->tmout)(sio, hss->tmout) < 0)
	return HSS_E_SYS;

    hss->speed = -1;
    hss->state = 0;
    hss->pnow = 0;
    hss->psize = 0;

    return HSS_E_OK;
}

/* 
 * Close
 */
static hss_return_t
hss_close(hss)
    hss_t hss;
{
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if ((sio = hss->sio) == NULL)
	return hss_err_eno(hss, EPERM);

    (*hss->ops->close)(hss);
    hss->speed = -1;
    hss->tmout = HSS_DEFAULT_TMOUT;
    hss->state = 0;
    hss->pnow = 0;
    hss->psize = 0;

    return HSS_E_OK;
}

/* 
 * Set sio speed
 */
static hss_return_t
hss_speed_set(hss, bps)
    hss_t hss;
    int bps;
{
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if ((sio = hss->sio) == NULL)
	return hss_err_eno(hss, EPERM);

    if ((*sio->ops->speed)(sio, bps) < 0)
	return HSS_E_SYS;

    hss->speed = bps;
    return HSS_E_OK;
}

/* 
 * Get sio speed
 */
static hss_return_t
hss_speed_get(hss, bpsp)
    hss_t hss;
    int *bpsp;
{
    if (hss == NULL)
	return HSS_E_FATAL;
    else if (bpsp == NULL)
	return hss_err_eno(hss, EINVAL);
    *bpsp = hss->speed;
    return HSS_E_OK;
}

/* 
 * Set sio receive timeout
 */
static hss_return_t
hss_tmout_set(hss, sec)
    hss_t hss;
    int sec;
{
    sio_t sio;
    int ret;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if ((sio = hss->sio) == NULL)
	return hss_err_eno(hss, EPERM);
    else if ((ret = (*sio->ops->tmout)(sio, sec)) < 0)
	return ret;

    hss->tmout = sec;
    return HSS_E_OK;
}

/* 
 * Get sio receive timeout
 */
static hss_return_t
hss_tmout_get(hss, secp)
    hss_t hss;
    int *secp;
{
    if (hss == NULL)
	return HSS_E_FATAL;
    else if (secp == NULL)
	return hss_err_eno(hss, EINVAL);

    *secp = hss->tmout;
    return HSS_E_OK;
}

/* 
 * Fetch Register
 */
static hss_return_t
hss_reg_fetch(hss, rid, rvalp)
    hss_t hss;
    hss_regid_t rid;
    hss_register_t *rvalp;
{
    struct hss_pkt *pkt;
    struct hss_hdr hdr;
    hss_return_t ret;
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if (rvalp == NULL || (sio = hss->sio) == NULL)
	return hss_err_eno(hss, EINVAL);

    hss_pkt_sethdr(&hdr, HSS_RDREG, rid, 0);
    if (hss_pkt_send(hss, &hdr, NULL, hss->retry) != 0 ||
	(pkt = hss_pkt_receive(hss, hss->retry, NULL)) == NULL)
	return HSS_E_SYS;

    if (pkt->hdr.code == HSS_OK) {
	memcpy(rvalp, pkt->body, pkt->hdr.length);
	*rvalp = hss_ttohi(hss, *rvalp);
	ret = HSS_E_OK;
    } else {
	ret = HSS_E_SYS;
    }
    free(pkt);
    return ret;
}

/* 
 * Store register
 */
static hss_return_t
hss_reg_store(hss, rid, rval)
    hss_t hss;
    hss_regid_t rid;
    hss_register_t rval;
{
    struct hss_pkt *pkt;
    struct hss_hdr hdr;
    hss_return_t ret;
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if ((sio = hss->sio) == NULL)
	return hss_err_eno(hss, EINVAL);

    hss_pkt_sethdr(&hdr, HSS_WRREG, rid, sizeof(rval));
    rval = hss_htoti(hss, rval);
    if (hss_pkt_send(hss, &hdr, &rval, hss->retry) != 0 ||
	(pkt = hss_pkt_receive(hss, hss->retry, NULL)) == NULL)
	return HSS_E_SYS;

    ret = (pkt->hdr.code == HSS_OK)? HSS_E_OK : HSS_E_SYS;
    free(pkt);
    return ret;
}

/* 
 * Read from memory
 */
static hss_return_t
hss_mem_read(hss, vma, len, buf)
    hss_t hss;
    hss_vma_t vma;
    hss_size_t len;
    void *buf;
{
    struct hss_pkt *pkt;
    struct hss_hdr hdr;
    hss_return_t ret;
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if (buf == NULL || (sio = hss->sio) == NULL)
	return hss_err_eno(hss, EINVAL);

    if (len > HSS_BODY_MTU)
	len = HSS_BODY_MTU;

    hss_pkt_sethdr(&hdr, HSS_RDMEM, vma, sizeof(len));
    len = hss_htoti(hss, len);
    if (hss_pkt_send(hss, &hdr, &len, hss->retry) != 0 ||
	(pkt = hss_pkt_receive(hss, hss->retry, NULL)) == NULL)
	return HSS_E_SYS;

    if (pkt->hdr.code == HSS_OK) {
	memcpy(buf, pkt->body, pkt->hdr.length);
	ret = pkt->hdr.length;
    } else {
	ret = HSS_E_SYS;
    }
    free(pkt);
    return ret;
}

/* 
 * Write to memory
 */
static hss_return_t
hss_mem_write(hss, vma, len, buf)
    hss_t hss;
    hss_vma_t vma;
    hss_size_t len;
    const void *buf;
{
    struct hss_pkt *pkt;
    struct hss_hdr hdr;
    hss_return_t ret;
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if (buf == NULL || (sio = hss->sio) == NULL)
	return hss_err_eno(hss, EINVAL);
    if (len > HSS_BODY_MTU)
	len = HSS_BODY_MTU;

    hss_pkt_sethdr(&hdr, HSS_WRMEM, vma, len);
    if (hss_pkt_send(hss, &hdr, buf, hss->retry) != 0 ||
	(pkt = hss_pkt_receive(hss, hss->retry, NULL)) == NULL)
	return HSS_E_SYS;

    ret = (pkt->hdr.code == HSS_OK)? len : HSS_E_SYS;
    free(pkt);
    return ret;
}

/* 
 * Resume
 */
static hss_return_t
hss_resume(hss, step)
    hss_t hss;
    int step;
{
    struct hss_hdr hdr;
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if ((sio = hss->sio) == NULL)
	return hss_err_eno(hss, EINVAL);

    hss_pkt_sethdr(&hdr, (step)? HSS_STEP : HSS_CONT, 0, 0);
    return ((hss_pkt_send(hss, &hdr, NULL, hss->retry) != 0)?
	    HSS_E_SYS : HSS_E_OK);
}

/* 
 * Query
 */
static hss_return_t
hss_query(hss, sigvp)
    hss_t hss;
    hss_sigval_t *sigvp;
{
    struct hss_pkt *pkt;
    struct hss_hdr hdr;
    hss_return_t ret;
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if ((sio = hss->sio) == NULL || sigvp == NULL)
	return hss_err_eno(hss, EINVAL);

    hss_pkt_sethdr(&hdr, HSS_QUERY, 0, 0);
    if (hss_pkt_send(hss, &hdr, NULL, hss->retry) != 0 ||
	(pkt = hss_pkt_receive(hss, hss->retry, NULL)) == NULL)
	return HSS_E_SYS;

    if (pkt->hdr.code == HSS_SIGNAL) {
	memcpy(sigvp, pkt->body, pkt->hdr.length);
	*sigvp = hss_ttohi(hss, *sigvp);
	ret = HSS_E_OK;
    } else {
	ret = HSS_E_SYS;
    }
    free(pkt);
    return ret;
}

/*
 * Wait
 */
static hss_return_t
hss_wait(hss, sigvp, msgproc)
    hss_t hss;
    hss_sigval_t *sigvp;
    void (*msgproc) PARAMS((const void *, int));
{
    struct hss_pkt *pkt;
    sio_t sio;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if ((sio = hss->sio) == NULL || sigvp == NULL)
	return hss_err_eno(hss, EINVAL);

    while (1) {
	pkt = hss_pkt_receive(hss, hss->retry, NULL);
	if (pkt == NULL)
	    continue;

	switch (pkt->hdr.code) {
	case HSS_SIGNAL:
	    memcpy(sigvp, pkt->body, pkt->hdr.length);
	    *sigvp = hss_ttohi(hss, *sigvp);
	    free(pkt);
	    return HSS_E_OK;
	    break;
	case HSS_SEND:
	    (*msgproc)(pkt->body, pkt->hdr.length);
	    /* fall through... */
	default:
	    free(pkt);
	    break;
	}
    }
    return HSS_E_SYS;
}

/* 
 * Rdb
 */
static hss_return_t
hss_rdb_mode(hss)
    hss_t hss;
{
    static const char *chat = HSS_CMD_RDB_CHAT;
    hss_register_t rv;
    sio_t sio;
    int p;

    if (hss == NULL)
	return HSS_E_FATAL;
    else if ((sio = hss->sio) == NULL)
	return hss_err_eno(hss, EPERM);
    else if (hss_reg_fetch(hss, REG_EPC, &rv) == HSS_E_OK)
	return HSS_E_OK;

    /*
     * rdbmode
     */
    if ((*sio->ops->write)(sio, HSS_CMD_RDB, sizeof(HSS_CMD_RDB) - 1) < 0)
	return HSS_E_SYS;

    for (p = 0; chat[p] != '\0'; ) {
	int ch = (*sio->ops->getch)(sio, HSS_CMD_RDB_TMOUT);
	if (ch < 0 || ch == SIO_TMOUT || ch == SIO_EOF)
	    return HSS_E_SYS;

	DBLOG(DBLOCAL, ("%c", ch));
	if (chat[p] == ch)
	    p++;
	else
	    p = 0;
    }
    sleep(1);
    return HSS_E_OK;
}

/* ops table */
static const struct hss_ops hssops = {
    hss_open,
    hss_close,
    hss_rdb_mode,

    hss_speed_set,
    hss_tmout_set,
    hss_speed_get,
    hss_tmout_get,

    hss_reg_fetch,
    hss_reg_store,
    hss_mem_read,
    hss_mem_write,

    hss_resume,
    hss_query,
    hss_wait,
    hss_err_get,
};

/*================================*
 *	FUNCTIONS
 *================================*/
#define HSS_ENDIAN_CHKVAL	0x1234

/*
 * CREATE
 */
hss_t
hss_create()
{
    hss_t hss = (hss_t)malloc(sizeof(struct hss));
    unsigned short magic = HSS_ENDIAN_CHKVAL;
    unsigned char *p = (unsigned char *)&magic;

    if (hss == NULL)
	return hss;

    memset(hss, 0, sizeof(struct hss));
    hss->ops = &hssops;
    hss->hendian = ((p[0] == (HSS_ENDIAN_CHKVAL & 0xff))?
		    HSS_ENDIAN_LE : HSS_ENDIAN_BE);
    hss->tendian = HSS_ENDIAN_LE;	/* target PS(=little endian) */
    hss->retry = 5;
    hss->sio = sio_create();
    if (hss->sio == NULL) {
	hss_destroy(hss);
	return NULL;
    }

    hss->elog = hss->sio->elog;
    return hss;
}

/*
 * DESTROY
 */
void
hss_destroy(hss)
    hss_t hss;
{
    if (hss == NULL)
	return;
    if (hss->sio != NULL)
	sio_destroy(hss->sio);
    free(hss);
}
