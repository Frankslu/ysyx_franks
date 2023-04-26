#include <trace/trace.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Iring_t iring;

void init_trace(){
    iring_init();
}

void iring_init(){
    for(int i=0; i<20; i++){
        iring.buf[i][0] = '\0';
    }
    iring.pos = 0;
}

void iring_write(char *_buf){
    strcpy(iring.buf[iring.pos], _buf);
    iring.pos = iring.pos == 19 ? 0 : iring.pos + 1;
}

void display_iring(){
    for(int i=0; i<20; i++){
        printf("%s\n", iring.buf[iring.pos]);
        iring.pos = next_pos;
    }
}
