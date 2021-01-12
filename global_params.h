#ifndef _GLOBAL_PARAMS_H_

#include "stddef.h"

/*
 * Number of bytes in a page
 */
static const size_t PAGE_SIZE_IN_BYTES = 4096;

/*
 * Number of bytes in a pointer
 */
static const size_t POINTER_SIZE_IN_BYTES = sizeof(void*);

/*
 * Number of bytes in a size_t
 */
static const size_t SIZE_T_SIZE_IN_BYTES = sizeof(size_t);

#endif