#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VGCD.h"

int main(){
	VGCD *GCD = new VGCD;

	Verilated::traceEverOn(true);
	VerilatedVcdC *wv = new VerilatedVcdC;

	GCD->trace(wv,0);
	wv->open("wave.vcd");

	GCD->final();
	wv->close();
	delete GCD;

	return 0;
}
