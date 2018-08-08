#ifndef ITP_ERRNO_H
#define ITP_ERRNO_H

#include "C:/Program Files/Microsoft Visual Studio 12.0/VC/include/errno.h"

#ifdef ENODATA
    #undef ENODATA
#endif
#define ENODATA       61        /* No data (for no delay io) */
#ifdef ELOOP
    #undef ELOOP
#endif
#define ELOOP         92        /* Too many symbolic links */
#ifdef EOPNOTSUPP
    #undef EOPNOTSUPP
#endif
#define EOPNOTSUPP    95        /* Operation not supported on transport endpoint */
#ifdef ECONNRESET
    #undef ECONNRESET
#endif
#define ECONNRESET    104       /* Connection reset by peer */
#ifdef ENOBUFS
    #undef ENOBUFS
#endif
#define ENOBUFS       105       /* No buffer space available */
#ifdef EAFNOSUPPORT
    #undef EAFNOSUPPORT
#endif
#define EAFNOSUPPORT  106       /* Address family not supported by protocol family */
#ifdef ENOTSOCK
    #undef ENOTSOCK
#endif
#define ENOTSOCK      108       /* Socket operation on non-socket */
#ifdef ENOPROTOOPT
    #undef ENOPROTOOPT
#endif
#define ENOPROTOOPT   109       /* Protocol not available */
#ifdef ESHUTDOWN
    #undef ESHUTDOWN
#endif
#define ESHUTDOWN     110       /* Can't send after socket shutdown */
#ifdef ECONNREFUSED
    #undef ECONNREFUSED
#endif
#define ECONNREFUSED  111       /* Connection refused */
#ifdef EADDRINUSE
    #undef EADDRINUSE
#endif
#define EADDRINUSE    112       /* Address already in use */
#ifdef ECONNABORTED
    #undef ECONNABORTED
#endif
#define ECONNABORTED  113       /* Connection aborted */
#ifdef ENETUNREACH
    #undef ENETUNREACH
#endif
#define ENETUNREACH   114       /* Network is unreachable */
#ifdef ENETDOWN
    #undef ENETDOWN
#endif
#define ENETDOWN      115       /* Network interface is not configured */
#ifdef ETIMEDOUT
    #undef ETIMEDOUT
#endif
#define ETIMEDOUT     116       /* Connection timed out */
#ifdef EHOSTDOWN
    #undef EHOSTDOWN
#endif
#define EHOSTDOWN     117       /* Host is down */
#ifdef EHOSTUNREACH
    #undef EHOSTUNREACH
#endif
#define EHOSTUNREACH  118       /* Host is unreachable */
#ifdef EINPROGRESS
    #undef EINPROGRESS
#endif
#define EINPROGRESS   119       /* Connection already in progress */
#ifdef EALREADY
    #undef EALREADY
#endif
#define EALREADY      120       /* Socket already connected */
#ifdef EMSGSIZE
    #undef EMSGSIZE
#endif
#define EMSGSIZE      122       /* Message too long */
#ifdef EADDRNOTAVAIL
    #undef EADDRNOTAVAIL
#endif
#define EADDRNOTAVAIL 125       /* Address not available */
#ifdef EISCONN
    #undef EISCONN
#endif
#define EISCONN       127       /* Socket is already connected */
#ifdef ENOTCONN
    #undef ENOTCONN
#endif
#define ENOTCONN      128       /* Socket is not connected */
#ifdef ENOTSUP
    #undef ENOTSUP
#endif
#define ENOTSUP       134       /* Not supported */
#ifdef EOVERFLOW
    #undef EOVERFLOW
#endif
#define EOVERFLOW     139       /* Value too large for defined data type */
#ifdef EWOULDBLOCK
    #undef EWOULDBLOCK
#endif
#define EWOULDBLOCK   EAGAIN    /* Operation would block */

#endif // ITP_ERRNO_H