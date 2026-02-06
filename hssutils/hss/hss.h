/* "hss.h"
 * $Id: hss.h,v 1.1 1996/08/10 14:16:00 motohash Exp $
 */
#ifndef HSS_HSS_HEADERFILE
#define HSS_HSS_HEADERFILE

#include "sio.h"

#define HSS_BODY_MTU		1500
#define HSS_MTU			(sizeof(struct hss_pkt))
#define HSS_ENDIAN_BE		0	/* bigendian */
#define HSS_ENDIAN_LE		1	/* littleendian */

struct hss_hdr {
    unsigned char	magic[3];
    unsigned char	code;
    unsigned int	addr;
    unsigned short	length;
    unsigned short	sum;
};

struct hss_pkt {
    struct hss_hdr	hdr;
    unsigned char	body[HSS_BODY_MTU];
};

#define HSS_MAGIC0		'H'
#define HSS_MAGIC1		'S'
#define HSS_MAGIC2		's'
#define HSS_ACK			0
#define HSS_NAK			1
#define HSS_OK			2
#define HSS_NG			3
#define HSS_RDREG		4	/* read register */
#define HSS_WRREG		5	/* write register */
#define HSS_RDMEM		6	/* read memory */
#define HSS_WRMEM		7	/* write memory */
#define HSS_CONT		8	/* resume */
#define HSS_STEP		9	/* step */
#define HSS_SIGNAL		10	/* signal */
#define HSS_QUERY		11	/* query */
#define HSS_SEND		12	/* send message */
#define HSS_UNIMP		13	/* unimplemented */

enum hss_sigval {
    HSS_SIGHUP = 1,
    HSS_SIGINT,
    HSS_SIGQUIT,
    HSS_SIGILL,
    HSS_SIGTRAP,
    HSS_SIGABRT,
    HSS_SIGEMT,
    HSS_SIGFPE,
    HSS_SIGKILL,
    HSS_SIGBUS,
    HSS_SIGSEGV,
    HSS_SIGSYS,
};

enum hss_regid {
    REG_ZERO, REG_AT,  REG_V0,  REG_V1,
    REG_A0,   REG_A1,  REG_A2,  REG_A3,
    REG_T0,   REG_T1,  REG_T2,  REG_T3,
    REG_T4,   REG_T5,  REG_T6,  REG_T7,
    REG_S0,   REG_S1,  REG_S2,  REG_S3,
    REG_S4,   REG_S5,  REG_S6,  REG_S7,
    REG_T8,   REG_T9,  REG_K0,  REG_K1,
    REG_GP,   REG_SP,  REG_FP,  REG_RA,
    REG_SR,   REG_LO,  REG_HI,  REG_xx,
    REG_CR,   REG_EPC,
};

enum hss_rtype {
    HSS_E_OK = 0,
    HSS_E_SYS = -1,
    HSS_E_EOF = -2,
    HSS_E_TMOUT = -3,
    HSS_E_FATAL = -4,
};

/* typedef */
struct hss_ops;
struct hss {
    unsigned char tendian;		/* target endian (target PCB) */
    unsigned char hendian;		/* host endian (myself) */
    unsigned short retry;
    int speed;
    int tmout;
    int state;

    sio_t sio;
    errlog_t elog;
    const struct hss_ops *ops;

    int pnow;
    int psize;
    unsigned char pbuf[HSS_MTU];
};
typedef struct hss *hss_t;

typedef unsigned int	hss_vma_t;
typedef unsigned int	hss_size_t;
typedef enum hss_regid	hss_regid_t;
typedef unsigned int	hss_register_t;
typedef int		hss_return_t;
typedef enum hss_sigval	hss_sigval_t;

struct hss_ops {
    hss_return_t (*open) PARAMS((hss_t, const char *));
    hss_return_t (*close) PARAMS((hss_t));
    hss_return_t (*rdb) PARAMS((hss_t));

    hss_return_t (*setspeed) PARAMS((hss_t, int));
    hss_return_t (*settimeout) PARAMS((hss_t, int));
    hss_return_t (*getspeed) PARAMS((hss_t, int *));
    hss_return_t (*gettimeout) PARAMS((hss_t, int *));

    hss_return_t (*readreg) PARAMS((hss_t, hss_regid_t, hss_register_t *));
    hss_return_t (*writereg) PARAMS((hss_t, hss_regid_t, hss_register_t));
    hss_return_t (*readmem) PARAMS((hss_t, hss_vma_t, hss_size_t, void *));
    hss_return_t (*writemem) PARAMS((hss_t, hss_vma_t, hss_size_t, const void *));

    hss_return_t (*resume) PARAMS((hss_t, int));
    hss_return_t (*query) PARAMS((hss_t, hss_sigval_t *));

    hss_return_t (*wait) PARAMS((hss_t,  hss_sigval_t *,
				 void (*) PARAMS((const void *, int))));
    const char * (*geterr) PARAMS((hss_t));
};
typedef const struct sio_ops *hss_ops_t;

/* functions */
extern hss_t hss_create PARAMS((void));
extern void  hss_destroy PARAMS((hss_t));

#endif /* !HSS_HSS_HEADERFILE */
