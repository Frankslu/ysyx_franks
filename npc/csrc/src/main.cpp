#include <stdio.h>
#include <stdlib.h>


#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"
#include "Vmem__Dpi.h"

// int main(){
// 	VGCD *top = new mycpu_top;

// 	Verilated::traceEverOn(true);
// 	VerilatedVcdC *wv = new VerilatedVcdC;

// 	top->trace(wv,0);
// 	wv->open("wave.vcd");

// 	top->final();
// 	wv->close();
// 	delete GCD;

// 	return 0;
// }

void init_monitor(int, char *[]);
void engine_start();

int main(int argc, char *argv[]){
	init_monitor(argc, argv);

	engine_start();

	return 0;
}