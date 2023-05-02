#include <trace/trace.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Iring_t iring;
Mring_t mring;

void iring_init();
void mring_init();

void init_trace(){
    iring_init();
    mring_init();
}

void iring_init(){
    for (int i=0; i<IRING_BUFSIZE; i++){
        iring.buf[i][0] = '\0';
    }
    iring.pos = 0;
}

void mring_init(){
    for (int i=0; i<MRING_BUFSIZE; i++){
        mring.pc[i] = 0;
        mring.addr[i] = 0;
        mring.wr[i] = INVALID;
    }
    mring.pos = 0;
}

void iring_write(char *_buf){
    strcpy(iring.buf[iring.pos], _buf);
    iring.pos = iring.pos == IRING_BUFSIZE - 1 ? 0 : iring.pos + 1;
}

void display_iring(){
    for (int i=0; i<IRING_BUFSIZE; i++){
        if (iring.buf[iring.pos][0] != '\0'){
            printf("%s\n", iring.buf[iring.pos]);
        }
        iring.pos = iring.pos == IRING_BUFSIZE - 1 ? 0 : iring.pos + 1;
    }
}

void record_read(vaddr_t addr){
    mring.pc[mring.pos] = cpu.pc;
    mring.addr[mring.pos] = addr;
    mring.wr[mring.pos] = READ;
    mring.pos = mring.pos == MRING_BUFSIZE - 1 ? 0 : mring.pos + 1;
}

void record_write(vaddr_t addr){
    mring.pc[mring.pos] = cpu.pc;
    mring.addr[mring.pos] = addr;
    mring.wr[mring.pos] = WRITE;
    mring.pos = mring.pos == MRING_BUFSIZE - 1 ? 0 : mring.pos + 1;
}

void display_wring(){
    for (int i=0; i<MRING_BUFSIZE; i++){
        if (mring.wr[mring.pos] == INVALID){
            printf("%x  %s %x\n", mring.pc[mring.pos], mring.wr[mring.pos] == READ ? "read" : "write", mring.addr[mring.pos]);
        }
        mring.pos = mring.pos == MRING_BUFSIZE - 1 ? 0 : mring.pos + 1;
    }
}