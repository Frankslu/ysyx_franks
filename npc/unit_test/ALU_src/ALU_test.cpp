// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// Include model header, generated from Verilating "top.v"
#include "include/ALU_test.h"
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
VerilatedContext *contextp;
VALU *top;
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
    top = new VALU{ contextp };
    top->trace(tfp, 5);
    tfp->open("wave.vcd");
    top->clock = 0;
    top->reset = 0;
    int a, b, c;
    int sim_time = 0;

    while (scanf("%x, %x, %x", &a, &b, &c) == 3){
        top->io_alu_op = a;
        top->io_src1 = b;
        top->io_src2 = c;
        top->eval();
        tfp->dump(sim_time++);
        printf("a=%x, b=%x, c=%x\n", b, c, top->io_res);
    }

    // Final model cleanup
    top->final();
    tfp->close();

    // Destroy model
    delete top;

    // Return good completion status
    return 0;
}
