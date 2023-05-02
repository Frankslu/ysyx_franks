#ifndef _TRACE_H_
#define _TRACE_H_
#include <common.h>
#include <isa.h>

#define IRING_BUFSIZE 20
#define MRING_BUFSIZE 10

typedef struct _iring_ {
    char buf[IRING_BUFSIZE][56];
    int pos;
} Iring_t;

typedef struct _mring_ {
    vaddr_t pc[MRING_BUFSIZE];
    vaddr_t addr[MRING_BUFSIZE];
    int wr[MRING_BUFSIZE];
    int pos;
} Mring_t;

#define INVALID 0
#define READ 1
#define WRITE 2

#endif
