#ifndef _TRACE_H_
#define _TRACE_H_
typedef struct _iring_ {
    char buf[20][128];
    int pos;
} Iring_t;

extern Iring_t iring;

#define next_pos iring.pos == 19 ? 0 : iring.pos + 1

void display_iring();
void iring_write(char *buf);
void init_trace();
#endif