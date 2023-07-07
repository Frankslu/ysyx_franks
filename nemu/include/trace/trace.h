#ifndef _TRACE_H_
#define _TRACE_H_

#include <common.h>
#include <isa.h>

#define IRING_BUFSIZE 20
#define MRING_BUFSIZE 10
#define FRING_SIZE 16
#define DRING_SIZE 16
#define ERING_SIZE 16

typedef struct _iring_ {
    char buf[IRING_BUFSIZE][128];
    int pos;
} Iring_t;

typedef struct _mring_ {
    vaddr_t pc[MRING_BUFSIZE];
    vaddr_t addr[MRING_BUFSIZE];
    word_t data[MRING_BUFSIZE];
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
    bool dir;
} Fring_t;

typedef struct _dring_{
    vaddr_t pc;
    vaddr_t addr;
    char dev_name[20];
    int wr;
    word_t data;
} Dring_t;

typedef struct _ering_{
    vaddr_t pc;
    char *NO;
} Ering_t;

#define INVALID 0
#define READ 1
#define WRITE 2

#define CALL true
#define RET false

void print_watchpoint();
void display_iring();
void display_breakpoint();
void display_mring();
void display_fring();
void display_ering();
vaddr_t func2addr(const char *s, bool *success);

#endif
