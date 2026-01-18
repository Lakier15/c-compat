#ifndef _ASSERT_H
#define _ASSERT_H

#include <common.h>

#define static_assert(expr, str) _Static_assert(expr, str)

static inline void assert(bool expr) {
    if(!expr) {
        __builtin_trap();
    }
}

#endif