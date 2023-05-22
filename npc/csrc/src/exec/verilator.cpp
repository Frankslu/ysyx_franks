#include "ve.h"
#include "common.h"
#include "decode.h"
#include "cpu.h"


VerilatedContext *contextp = NULL;
VMain *top = NULL;
__attribute__((unused)) VerilatedVcd *tfp = NULL;

int decode_exec(Decode * s);

extern "C" void set_gpr_ptr(const svOpenArrayHandle regs){
	printf("hello3\n");
	cpu.gpr = (word_t *)(((VerilatedDpiOpenVar *)regs)->datap());
}

//verilator dpi-c
extern "C" void inst_exec_once(char valid, int inst, int pc){
	printf("hello1\n");
	if ((int)valid == 1){
		cpu.valid = true;
		cpu.pc = (vaddr_t)pc;
		cpu.inst = inst;
	}
	else{
		cpu.valid = false;
	}
}

extern "C" void npc_break(char is_break){
	printf("hello2\n");
	cpu.is_break = (int)is_break == 1 ? 1 : 0;
}

void init_verilator(int argc, char *argv[]){
	contextp = new VerilatedContext;

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
	top = new VMain{ contextp };

#ifdef CONFIG_WAVETRACE
	VerilatedVcdC *tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
	top->trace(tfp, 99);
	tfp->open("wave.vcd");
#endif
	
	for (int i = 0; i < 10; i++){
		top->reset = 1;
		top->clock = 0;
		top->eval();
		top->clock = 1;
		top->eval();
	}
	top->reset = 0;

}

int npc_exec_once(Decode *s){
	printf("2\n");
	top->reset = 0;
	printf("1\n");
	top->clock = 0;
	printf("1\n");
	top->eval();
	printf("1\n");
	top->reset = 0;
	printf("1\n");
	top->clock = 1;
	printf("1\n");
	top->eval();
	printf("2\n");
	s->isa.inst.val = cpu.inst;
	printf("3\n");
	// decode_exec(s);
	if (cpu.is_break == true){
		set_npc_state(NPC_STOP, cpu.pc, 0);
	printf("4\n");
	}
	return 0;
}