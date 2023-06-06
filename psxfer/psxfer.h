/* "psxfer.h"
 * $Id: psxfer.h,v 1.1 1996/08/10 14:16:19 motohash Exp $
 */
#ifndef PSXFER_HEADERFILE
#define PSXFER_HEADERFILE

#include "hss/hss.h"

#define XFER_BUFSIZE		(8 * 1024)

extern int ecoff_load PARAMS((hss_t, const char *, int));

#endif /* !PSXFER_HEADERFILE */
