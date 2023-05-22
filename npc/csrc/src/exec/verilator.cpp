#include "ve.h"
#include "common.h"
#include "isa.h"

VerilatedContext *contextp = NULL;
VMain *top = NULL;
__attribute__((unused)) VerilatedVcd *tfp = NULL;

extern "C" void set_gpr_ptr(int pc, const svOpenArrayHandle regs){
	cpu.gpr = (word_t *)(((VerilatedDpiOpenVar *)regs)->datap());
}

void init_verilator(int argc, char *argv[]){
	contextp = new VerilatedContext;
    VerilatedVcdC *tfp = new VerilatedVcdC;

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
    top = new VMain{ contextp };
    top->trace(tfp, 5);
	tfp->open("wave.vcd");

	for (int i = 0; i < 10; i++){
		top->reset = 1;
		EXEC_CLOCK;
	}
	top->reset = 0;

}