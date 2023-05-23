#ifndef _TRACE_H_
#define _TRACE_H_

#include <common.h>
#include <isa.h>

#define IRING_BUFSIZE 20
#define MRING_BUFSIZE 10
#define FRING_SIZE 16

typedef struct _iring_ {
    char buf[IRING_BUFSIZE][128];
    int pos;
} Iring_t;

typedef struct _mring_ {
    vaddr_t pc[MRING_BUFSIZE];
    vaddr_t addr[MRING_BUFSIZE];
    int wr[MRING_BUFSIZE];
    int pos;
} Mring_t;

typedef struct _func_ {
    vaddr_t addr;
    vaddr_t size;
    char name[24];
} Func_t;

typedef struct _fring_{
    vaddr_t pc;
    vaddr_t next_pc;
    char func_name[24];
} Fring_t;


#define INVALID 0
#define READ 1
#define WRITE 2

#endif