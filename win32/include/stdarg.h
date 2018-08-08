#ifndef ITP_STDARG_H
#define ITP_STDARG_H

#include "C:/Program Files/Microsoft Visual Studio 12.0/VC/include/stdarg.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef va_copy
    #undef va_copy
#endif
#define va_copy(d, s) (d) = (s)

#ifdef __cplusplus
}
#endif

#endif // ITP_STDARG_H
