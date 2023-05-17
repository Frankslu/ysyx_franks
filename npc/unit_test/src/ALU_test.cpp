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

// Include model header, generated from Verilating "top.v"
#include "VALU.h"
VerilatedContext *contextp;
VALU *top;

void test(int aluop, int num[][3]){
    for (int i = 0; i < 4; i++){
        top->io_alu_op = aluop;
        top->io_src1 = num[i][0];
        top->io_src2 = num[i][1];
        top->eval();
        assert(top->io_res == num[i][2]);
    }
}

int main(int argc, char **argv){
    // See a similar example walkthrough in the verilator manpage.

    // This is intended to be a minimal example.  Before copying this to start a
    // real project, it is better to start with a more complete example,
    // e.g. examples/c_tracing.

    // Construct a VerilatedContext to hold simulation time, etc.
    contextp = new VerilatedContext;

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
    top = new VALU{ contextp };

    int test1[4][3] = {
        {0x1111, 0x8888, 0x9999},
        {0xffffffff, 0x1, 0x0},
        (0xf0000000, 0xf0000010, 0x10),
        (0x12345678, 0x87654321, 0x99999999)
    };
    test(1, test1);

    int test2[4][3] = {
        {0x1, 0x10, 0x1 - 0x10},
        {0xffffffff, 0xfffffff0, 0xffffffff-0xfffffff0},
        (0xf0000000, 0xf0000010, 0xf0000000-0xf0000010),
        (0xaabbcc, 0xaaaabb, 0xaabbcc-0xaaaabb)
    };
    test(2, test2);


    // Final model cleanup
    top->final();

    // Destroy model
    delete top;

    // Return good completion status
    return 0;
}
