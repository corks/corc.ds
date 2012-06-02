#ifndef LIBCAERUS_BOOL_H
#define LIBCAERUS_BOOL_H
#if (__STDC_VERSION__ < 199901L)
typedef enum libcaerus_boolean_ {
    false,
    true
} bool;
#else
#include <stdbool.h>
#endif
#endif /* LIBCAERUS_BOOL_H */
