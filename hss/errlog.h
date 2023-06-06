/* "errlog.h"
 * $Id: errlog.h,v 1.1 1996/08/10 14:15:54 motohash Exp $
 */
#ifndef HSS_ERRLOG_HEADERFILE
#define HSS_ERRLOG_HEADERFILE

/* const */
#define ERRLOG_MSGSIZE	(256)

struct errlog {
    const struct errlog_ops *ops;
    int errno;
    char msg[ERRLOG_MSGSIZE];
};
typedef struct errlog *	errlog_t;

struct errlog_ops {
    void	(*syserr) PARAMS((errlog_t));
    void	(*seterr) PARAMS((errlog_t, int, const char *));
    int		(*getno) PARAMS((errlog_t));
    const char *(*getstr) PARAMS((errlog_t));
    errlog_t	(*copy) PARAMS((errlog_t, errlog_t));
};
typedef const struct errlog_ops *errlog_ops_t;

/* functions */
extern errlog_t	errlog_create PARAMS((void));
extern void	errlog_destroy PARAMS((errlog_t));

#endif /* !HSS_ERRLOG_HEADERFILE */
