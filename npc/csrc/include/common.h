#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

#include "generated/autoconf.h"
#include "macro.h"

#include <assert.h>
#include <stdlib.h>

#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

typedef uint32_t word_t;
typedef int32_t  sword_t;
#define FMT_WORD "0x%08" PRIx32

typedef word_t vaddr_t;
typedef uint32_t paddr_t;
#define FMT_PADDR "0x%08" PRIx32
typedef uint16_t ioaddr_t;

#define streq(str1, str2) (strcmp((str1), (str2)) == 0)
#include "debug.h"

#endif
