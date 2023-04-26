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
void iring_init();

// void init_trace(){
//     iring_init();
// }

// void iring_init(){
//     for(int i=0; i<20; i++){
//         iring.buf[i][0] = '\0';
//     }
//     iring.pos = 0;
// }

// void iring_write(char *_buf){
//     strcpy(iring.buf[iring.pos], _buf);
//     iring.pos = iring.pos == 19 ? 0 : iring.pos + 1;
// }

// void display_iring(){
//     for(int i=0; i<20; i++){
//         printf("%s\n", iring.buf[iring.pos]);
//         iring.pos = next_pos;
//     }
// }
#endif