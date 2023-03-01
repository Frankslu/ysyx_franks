#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vexample.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main() {
	Vexample *swch = new Vexample;

	Verilated::traceEverOn(true);
	VerilatedVcdC *wv = new VerilatedVcdC;

	swch->trace(wv,0);
	wv->open("wave.vcd");

	while((int)sim_time < MAX_SIM_TIME && !Verilated::gotFinish()){
		int a = rand() & 1;
		int b = rand() & 1;
		swch->a = a;
		swch->b = b;
		swch->eval();
		wv->dump(sim_time);
		sim_time++;
	}
	swch->final();
	wv->close();
	delete swch;
	
	return 0;
}
