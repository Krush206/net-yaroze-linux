/* "sio.c"
 * $Id: sio.c,v 1.1 1996/08/10 14:16:02 motohash Exp $
 */
#if HAVE_CONFIG_H
#include "../config.h"
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#if HAVE_MEMORY_H
#  include <memory.h>
#endif
#if HAVE_BSTRING_H
#  include <bstring.h>
#endif
#if HAVE_FCNTL_H
#  include <fcntl.h>
#endif
#include "sio.h"
#include "errlog.h"

#define DBLOCAL		5

static void	sio_err_sys PARAMS((sio_t));
static void	sio_err_eno PARAMS((sio_t, int));
static const char *sio_err_get PARAMS((sio_t));
static int	sio_open PARAMS((sio_t, const char *));
static void	sio_close PARAMS((sio_t));
static int	sio_read PARAMS((sio_t));
static int	sio_write PARAMS((sio_t, const void *, int));
static int	sio_tmout_set PARAMS((sio_t, int));
static int	sio_readchar PARAMS((sio_t, int));
static inline int sio_rate2code PARAMS((int));
static int	sio_speed_set PARAMS((sio_t, int));
static int	sio_ibuf_rest PARAMS((sio_t));

/* 
 * set error
 */
static void
sio_err_sys(sio)
    sio_t sio;
{
    errlog_t elog = sio->elog;
    if (elog == NULL)
	return;
    (*elog->ops->syserr)(elog);
}

/* 
 * set error number
 */
static void
sio_err_eno(sio, eno)
    sio_t sio;
    int eno;
{
    errlog_t elog = sio->elog;
    if (elog == NULL)
	return;
    (*elog->ops->seterr)(elog, eno, NULL);
}

/* 
 * Get Error message
 */
static const char *
sio_err_get(sio)
    sio_t sio;
{
    errlog_t elog;
    if (sio == NULL || sio->elog == NULL)
	return "";
    elog = sio->elog;
    return (*elog->ops->getstr)(elog);
}

/*
 * Open
 */
static int
sio_open(sio, name)
    sio_t sio;
    const char *name;
{
    struct termios state;
    int ret = -1;
    int fd;

    if (sio == NULL)
	return ret;

    fd = open(name, O_RDWR);
    if (fd < 0) {
	sio_err_sys(sio);
	return fd;
    } else if (sio->fd >= 0)
	close(sio->fd);

    /* set rawmode */
    ret = tcgetattr(fd, &state);
    if (ret < 0)
	goto error;

    sio->state = state;
    state.c_iflag = 0;
    state.c_oflag = 0;
    state.c_lflag = 0;
    state.c_cflag &= ~(CSIZE | PARENB);
    state.c_cflag |= CS8 | CLOCAL;
    state.c_cc[VMIN] = 0;
    state.c_cc[VTIME] = 0;
    if ((ret = tcsetattr(fd, TCSANOW, &state)) < 0 ||
	(ret = tcflush(fd, TCIFLUSH)) < 0 ||
	(ret = tcflush(fd, TCOFLUSH)) < 0)
	goto error;
	
    sio->fd = fd;
    sio->now = sio->ibuf;
    sio->rest = 0;
    sio->tmout = 0;
    return fd;

 error:
    close(fd);
    sio_err_sys(sio);
    return ret;
}

/*
 * Close
 */
static void
sio_close(sio)
    sio_t sio;
{
    int fd = sio->fd;
    if (fd >= 0) {
	(void)tcsetattr(fd, TCSANOW, &sio->state);
	(void)close(sio->fd);
    }
    sio->fd = -1;
}

/*
 * Read
 */
static int
sio_read(sio)
    sio_t sio;
{
    int rlen;

    if (sio == NULL)
	return -1;
    rlen = read(sio->fd, sio->ibuf, SIO_BUFSIZE);
    if (rlen < 0)
	sio_err_sys(sio);

    sio->rest = rlen;
    sio->now = sio->ibuf;
    return rlen;
}

/*
 * Write
 */
static int
sio_write(sio, vp, len)
    sio_t sio;
    const void *vp;
    int len;
{
    const char *buf = vp;
    int rest;
    int fd;

    if (sio == NULL || vp == NULL)
	return -1;
    fd = sio->fd;
    for (rest = len; rest > 0; ) {
	int xlen = write(fd, buf, rest);
	if (xlen < 0) {
	    sio_err_sys(sio);
	    return xlen;
	}
	buf = &buf[xlen];
	rest -= xlen;
    }
    return len - rest;
}


/*
 * Set timeout
 */
static int
sio_tmout_set(sio, sec)
    sio_t sio;
    int sec;				/* timeout */
{
    struct termios state;
    int ret = -1;

    if (sio == NULL)
	return ret;
    else if (sec == sio->tmout)
	return 0;

    ret = tcgetattr(sio->fd, &state);
    if (ret < 0) {
	sio_err_sys(sio);	
	return ret;
    }
    if (sec > 0) {
	state.c_cc[VTIME] = sec * 10;
	state.c_cc[VMIN]  = 0;
    } else {
	state.c_cc[VTIME] = 0;
	state.c_cc[VMIN]  = 1;
    }
    sio->tmout = sec;
    ret = tcsetattr(sio->fd, TCSANOW, &state);
    if (ret < 0)
	sio_err_sys(sio);
    return ret;
}

/*
 * Read char
 */
static int
sio_readchar(sio, sec)
    sio_t sio;
    int sec;
{
    int rest;

    if (sio == NULL)
	return -1;
    if (sio->rest > 0) {
	--sio->rest;
	return *sio->now++;
    }

    if (sec == 0) {
	sio_err_eno(sio, ETIMEDOUT);
	return SIO_TMOUT;
    } else {
	int ret = sio_tmout_set(sio, sec);
	if (ret < 0)
	    return ret;
    }

    rest = sio_read(sio);
    if (rest == 0)
	return SIO_TMOUT;
    else if (rest < 0)
	return rest;

    sio->rest = --rest;
    sio->now = sio->ibuf;
    return *sio->now++;
}

/*
 * convert rate
 */
static inline int
sio_rate2code(rate)
    int rate;
{
    static const struct {
	int bps;
	int code;
    } sio_spdtab[] = {
	{ 1200, B1200, },
	{ 2400, B2400, },
	{ 4800, B4800, },
	{ 9600, B9600, },
#ifdef B14400
	{ 14400, B14400, },
#endif
	{ 19200, B19200, },
	{ 38400, B38400, },
#ifdef B28800
	{ 28800, B28800, },
#endif
#ifdef B57600
	{ 57600, B57600, },
#endif
#ifdef B76800
	{ 76800, B76800, },
#endif
#ifdef B115200
	{ 115200, B115200, },
#endif
#ifdef B230400
	{ 230400, B230400, },
#endif
    };
    int low = 0;
    int high = sizeof(sio_spdtab) / sizeof(sio_spdtab[0]);

    while (low < high) {
	int mid = (low + high) / 2;
	int ret = rate - sio_spdtab[mid].bps;
	if (ret > 0)
	    low = mid + 1;
	else if (ret < 0)
	    high = mid;
	else
	    return sio_spdtab[mid].code;
    }
    return -1;
}

/* 
 * SPEED
 */
static int
sio_speed_set(sio, rate)
    sio_t sio;
    int rate;
{
    struct termios state;
    speed_t code;
    int ret = -1;
    
    if (sio == NULL)
	return ret;

    ret = tcgetattr(sio->fd, &state);
    if (ret < 0)
	return ret;

    code = sio_rate2code(rate);
    if (code < 0) {
	sio_err_eno(sio, EINVAL);
	return code;
    }
    ret = cfsetospeed(&state, code);
    if (ret < 0)
	goto error;
    ret = cfsetispeed(&state, code);
    if (ret < 0)
	goto error;
    ret = tcsetattr(sio->fd, TCSANOW, &state);
    if (ret < 0)
	goto error;
    return ret;

 error:
    sio_err_sys(sio);
    return ret;
}

/*
 * AVAILABLE
 */
static int
sio_ibuf_rest(sio)
    sio_t sio;
{
    if (sio == NULL)
	return -1;
    return (sio->rest > 0)? sio->rest : 0;
}

static const struct sio_ops sioops = {
    sio_open,
    sio_close,
    sio_read,
    sio_write,
    sio_readchar,
    sio_speed_set,
    sio_tmout_set,
    sio_ibuf_rest,
    sio_err_get,
};


/*================================*
 *	FUNCTIONS
 *================================*/

/*
 * CREATE
 */
sio_t
sio_create()
{
    sio_t sio = (sio_t)malloc(sizeof(struct sio));
    if (sio != NULL) {
	memset(sio, 0, sizeof(struct sio));
	sio->ops = &sioops;
	sio->fd = -1;
	sio->elog = errlog_create();
	if (sio->elog == NULL) {
	    sio_destroy(sio);
	    sio = NULL;
	}
	    
    }
    return sio;
}

/*
 * DESTROY
 */
void
sio_destroy(sio)
    sio_t sio;
{
    if (sio == NULL)
	return;
    if (sio->fd >= 0)
	close(sio->fd);
    if (sio->elog != NULL)
	errlog_destroy(sio->elog);
    free(sio);
}
