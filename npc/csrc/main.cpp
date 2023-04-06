#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd.h>
#include "Vtop.h"

int main(){
	Vtop *top = new Vtop;

	Verilated::traceEverOn(true);
	VerilatedVcdC *wv = new VerilatedVcdC;

	top->trace(wv,0);
	wv->open("wave.vcd");

	top->final();
	wv->close();
	delete top;

	return 0;
}
