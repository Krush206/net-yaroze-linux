/* "sio.h"
 * $Id: sio.h,v 1.1 1996/08/10 14:16:05 motohash Exp $
 */
#ifndef HSS_SIO_HEADERFILE
#define HSS_SIO_HEADERFILE

#include <termios.h>
#include "errlog.h"

/* const */
#define SIO_BUFSIZE	(128)
#define SIO_TMOUT	(256)
#define SIO_EOF		(257)

/* typedef */
struct sio_ops;
struct sio {
    int fd;
    int tmout;
    int rest;
    unsigned char *now;
    struct termios state;

    errlog_t elog;
    const struct sio_ops *ops;
    unsigned char ibuf[SIO_BUFSIZE];
};
typedef struct sio *sio_t;

struct sio_ops {
    int  (*open) PARAMS((sio_t, const char *));
    void (*close) PARAMS((sio_t));
    int  (*read) PARAMS((sio_t));
    int  (*write) PARAMS((sio_t, const void *, int));
    int  (*getch) PARAMS((sio_t, int));
    int  (*speed) PARAMS((sio_t, int));
    int	 (*tmout) PARAMS((sio_t, int));
    int  (*available) PARAMS((sio_t));
    const char *(*geterr) PARAMS((sio_t));
};
typedef const struct sio_ops *sio_ops_t;

/* functions */
extern sio_t sio_create PARAMS((void));
extern void  sio_destroy PARAMS((sio_t));

#endif /* !HSS_SIO_HEADERFILE */
