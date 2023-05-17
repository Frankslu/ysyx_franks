// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

#include <stdint.h>
#include <stdio.h>
#include <assert.h>

// Include common routines
#include <verilated.h>
#include <verilated_vcd_c.h>

// Include model header, generated from Verilating "top.v"
#include "Vleft.h"
VerilatedContext *contextp;
Vleft *top;

// void test(int aluop, uint32_t num[][3]){
//     for (int i = 0; i < 4; i++){
//         top->io_alu_op = aluop;
//         top->io_src1 = num[i][0];
//         top->io_src2 = num[i][1];
//         top->eval();
//         assert(top->io_res == (uint32_t)num[i][2]);
//         printf("aluop %d, num %d pass\n", aluop, i);
//     }
// }

int main(int argc, char **argv){
    // See a similar example walkthrough in the verilator manpage.

    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it is better to start with a more complete example,
    // e.g. examples/c_tracing.

    // Construct a VerilatedContext to hold simulation time, etc.
    contextp = new VerilatedContext;
    VerilatedVcdC *tfp = new VerilatedVcdC;

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
    top = new Vleft{ contextp };
    tfp->open("wave.vcd");
    int a, b, c;
    int sim_time = 0;

    while (scanf("%x, %x", &a, &b) == 2){
        top->a = a;
        top->b = b;
        top->eval();
        tfp->dump(sim_time++);
        printf("a=%x, b=%x, c=%x\n", a, b, top->c);
    }

    // Final model cleanup
    top->final();
    tfp->close();

    // Destroy model
    delete top;

    // Return good completion status
    return 0;
}
