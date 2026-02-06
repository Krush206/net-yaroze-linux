/* "errlog.c"
 * $Id: errlog.c,v 1.1 1996/08/10 14:15:52 motohash Exp $
 */
#if HAVE_CONFIG_H
#  include "../config.h"
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
#include "errlog.h"

#define DBLOCAL		5

static void errlog_set PARAMS((errlog_t, int, const char *));
static void errlog_sys PARAMS((errlog_t));
static const char *errlog_getemsg PARAMS((errlog_t));
static int errlog_geteid PARAMS((errlog_t));
static errlog_t errlog_copy PARAMS((errlog_t, errlog_t));

/*================================*
 *	ERROR HANDLING
 *================================*/

#if HAVE_STRERROR
/* nothing to do */
#else
static char * strerror PARAMS((int));

/* strerror:
 *--------------------------------*/
static char *
strerror(eno)
    int eno;
{
    extern char * sys_errlist[];
    return sys_errlist[eno];
}
#endif /* HAVE_STRERROR */

/* set user defined error
 *================================*/
static void
errlog_set(elog, errno, msg)
    errlog_t elog;
    int errno;
    const char *msg;
{
    if (elog == NULL)
	return;

    elog->errno = errno;
    if (msg == NULL) {
	msg = strerror(errno);
	if (msg == NULL) {
	    elog->msg[0] = '\0';
	    return;
	}
    }
    strncpy(elog->msg, msg, sizeof(elog->msg) - 1);
}

/* set system error
 *================================*/
static void
errlog_sys(elog)
    errlog_t elog;
{
    if (elog != NULL)
	errlog_set(elog, errno, strerror(errno));
}

/* get error message.
 *================================*/
static const char *
errlog_getemsg(elog)
    errlog_t elog;
{
    return (elog != NULL)? elog->msg : NULL;
}

/* get error number.
 *================================*/
static int
errlog_geteid(elog)
    errlog_t elog;
{
    return (elog != NULL)? elog->errno : -1;
}

/* copy.
 *================================*/
static errlog_t
errlog_copy(elog, src)
    errlog_t elog;
    errlog_t src;
{
    if (elog == NULL || src == NULL)
	return NULL;
    errlog_set(elog, src->errno, src->msg);

    return elog;
}

static const struct errlog_ops elogops = {
    errlog_sys,
    errlog_set,
    errlog_geteid,
    errlog_getemsg,
    errlog_copy,
};


/*================================*
 *	FUNCTIONS
 *================================*/

/* create: FUNC
 ********************************/
errlog_t
errlog_create()
{
    errlog_t elog = (errlog_t)malloc(sizeof(struct errlog));
    if (elog != NULL) {
	memset(elog, 0, sizeof(struct errlog));
	elog->ops = &elogops;
    }
    return elog;
}

/* destroy: FUNC
 ********************************/
void
errlog_destroy(elog)
    errlog_t elog;
{
    if (elog == NULL)
	return;
    free(elog);
}
