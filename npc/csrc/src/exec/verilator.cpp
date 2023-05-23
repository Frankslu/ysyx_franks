#include "ve.h"
#include "common.h"
#include "cpu/decode.h"
#include "cpu/cpu.h"


VerilatedContext *contextp = NULL;
VMain *top = NULL;
__attribute__((unused)) VerilatedVcd *tfp = NULL;
uint64_t sim_time = 0;

int decode_exec(Decode *s);

extern "C" void set_gpr_ptr(const svOpenArrayHandle regs){
	cpu.gpr = (word_t *)(((VerilatedDpiOpenVar *)regs)->datap());
}

//verilator dpi-c
extern "C" void inst_exec_once(char valid, int inst, int pc){
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
	cpu.is_break = (int)is_break == 1 ? 1 : 0;
}

void init_verilator(int argc, char *argv[]){
	contextp = new VerilatedContext;

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
	top = new VMain{ contextp };

#ifdef CONFIG_CC_WAVE
	VerilatedVcdC *tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
	top->trace(tfp, 99);
	tfp->open("wave.vcd");
#endif

	for (int i = 0; i < 2; i++){
		top->reset = 1;
		top->clock = 0;
		top->eval();
    	tfp->dump(sim_time++);
		top->clock = 1;
		top->eval();
    	tfp->dump(sim_time++);
	}
	top->reset = 0;

}

int npc_exec_once(Decode *s){
	top->clock = 0;
	top->eval();
	printf("1\n");
	tfp->dump(sim_time++);
	printf("1\n");
	top->clock = 1;
	top->eval();
    tfp->dump(sim_time++);
	s->isa.inst.val = cpu.inst;
	// decode_exec(s);
	if (cpu.is_break == true){
		set_npc_state(NPC_END, cpu.pc, 0);
	}
	printf("%x\n", cpu.pc);
	return 0;
}

void verilator_finish(){
	top->final();
	tfp->close();
	delete top;
}