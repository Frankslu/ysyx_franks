// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

#include <stdint.h>
#include <stdio.h>

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "top.v"
#include "Vmem.h"
#include "Vmem__Dpi.h"

#include 
int Mem[8];

void mem_init(){
    for(int i=0; i<8; i++){
        Mem[i] = i * 0x11111111;
    }
}

void pmem_read(int raddr, int *rdata){
    *rdata = Mem[raddr];
}

void pmem_write(int waddr, int wdata, char wstrb, int *rdata){
    uint8_t mask = (uint8_t)wstrb;
    switch (mask){
    case 1:
        Mem[waddr] = wdata & 0xf;
        break;
    
    case 2:
        Mem[waddr] = wdata & 0xff;
        break;

    case 3:
        Mem[waddr] = wdata;
        break;

    default:
        break;
    }
    *rdata = 0xdeadbeef;
}

int main(int argc, char** argv) {
    // See a similar example walkthrough in the verilator manpage.

    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it is better to start with a more complete example,
    // e.g. examples/c_tracing.

    // Construct a VerilatedContext to hold simulation time, etc.
    VerilatedContext* contextp = new VerilatedContext;

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
    Vmem* top = new Vmem{contextp};

    mem_init();
    for(int i=0; i<8; i++){
        top->io_r_en = 1;
        top->io_r_wr = 0;
        top->io_r_addr = i;
        top->eval();
        if(top->io_w_rdata != Mem[i])
            printf("1 false in %d\n",i);
    }
    // Simulate until $finish

    for(int i=0; i<8; i++){
        top->io_r_en = 1;
        top->io_r_wr = 1;
        top->io_r_addr = 7-i;
        top->io_r_wdata = 2*i;
        top->io_r_wstrb = 2;
        top->eval();
        printf("%x\n", top->io_w_rdata);
        top->io_r_en = 1;
        top->io_r_wr = 0;
        top->io_r_addr = 7-i;
        top->eval();
        if(top->io_w_rdata != Mem[7-i])
            printf("2 false in %d\n",7-i);
    }

    // Final model cleanup
    top->final();

    // Destroy model
    delete top;

    // Return good completion status
    return 0;
}
