#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmux.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;

int main() {
	Vmux *mux = new Vmux;

	Verilated::traceEverOn(true);
	VerilatedVcdC *wv = new VerilatedVcdC;

	mux->trace(wv,0);
	wv->open("wave.vcd");

	while((int)sim_time < MAX_SIM_TIME && !Verilated::gotFinish()){
		int x0 = rand() % 4;
		int x1 = rand() % 4;
		int x2 = rand() % 4;
		int x3 = rand() % 4;
		int key = rand() % 4;
		int res = 0;
		mux->x0 = x0;
		mux->x1 = x1;
		mux->x2 = x2;
		mux->x3 = x3;
		mux->key = key;
		mux->eval();
		wv->dump(sim_time);
		switch(key){
			case 0:res = x0;break;
			case 1:res = x1;break;
			case 2:res = x2;break;
			case 3:res = x3;break;
		}
		if(res != mux->s)
			printf("Error:x1=%d x2=%d x3=%d x4=%d key=%d s=%d res=%d\n",mux->x0,mux->x1,mux->x2,mux->x3,mux->key,mux->s,res);
		sim_time++;
	}
	mux->final();
	wv->close();
	delete mux;
	
	return 0;
}
