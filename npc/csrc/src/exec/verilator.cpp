#include "ve.h"
#include "common.h"
#include "cpu/decode.h"
#include "cpu/cpu.h"

#define dump(x) IFDEF(CONFIG_CC_WAVE, tfp->dump(x))

VerilatedContext *contextp = NULL;
VMain *top = NULL;
__attribute__((unused)) VerilatedVcdC *tfp = NULL;
uint64_t sim_time = 0;

int decode_exec(Decode *s);
int scan_bp(vaddr_t pc);


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
	cpu.is_break = (int)is_break == 1 ? true : false;
}

void init_verilator(int argc, char *argv[]){
	contextp = new VerilatedContext;

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v"
	top = new VMain{ contextp };

#ifdef CONFIG_CC_WAVE
	tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
	top->trace(tfp, 5);
	tfp->open("wave.vcd");
#endif

	for (int i = 0; i < 4; i++){
		top->reset = 1;
		top->clock = 1;
		top->eval();
    	dump(sim_time++);
		top->clock = 0;
		top->eval();
    	dump(sim_time++);
	}
		top->reset = 1;
		top->clock = 1;
		top->eval();
    	dump(sim_time++);
	top->reset = 0;
		top->clock = 0;
		top->eval();
    	dump(sim_time++);
}

int npc_exec_once(){
	top->clock = 1;
	top->eval();
	dump(sim_time++);
	top->clock = 0;
	top->eval();
    dump(sim_time++);
	// decode_exec(s);
	if (cpu.is_break == true){
#ifdef CONFIG_BREAKPOINT
		if (scan_bp(cpu.pc) == 1){
			set_npc_state(NPC_STOP, cpu.pc, cpu.gpr[4]);
		}
		else {
			set_npc_state(NPC_END, cpu.pc, cpu.gpr[4]);
		}
#else
		set_npc_state(NPC_END, cpu.pc, cpu.gpr[4]);
#endif
	}
	return 0;
}

void verilator_finish(){
	if (top == NULL)
		return;

	top->eval();
    dump(sim_time++);
	top->eval();
    dump(sim_time++);
	top->eval();
    dump(sim_time++);

	top->final();
	IFDEF(CONFIG_CC_WAVE, tfp->close());
	delete top;
	top = nullptr;
}