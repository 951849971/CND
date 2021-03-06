#ifndef ITP_LIMITS_H
#define ITP_LIMITS_H

#define _POSIX_
#include "C:/Program Files/Microsoft Visual Studio 12.0/VC/include/limits.h"
#undef _POSIX_

#ifdef NAME_MAX
    #undef NAME_MAX
#endif
#define NAME_MAX         255
#ifdef OPEN_MAX
    #undef OPEN_MAX
#endif
#define OPEN_MAX         32
#ifdef PATH_MAX
    #undef PATH_MAX
#endif
#define PATH_MAX         4096
#ifdef PTHREAD_KEYS_MAX
    #undef PTHREAD_KEYS_MAX
#endif
#define PTHREAD_KEYS_MAX 4

#endif // ITP_LIMITS_H
