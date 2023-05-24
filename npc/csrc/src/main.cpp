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

struct {
	int argc;
	char **argv;
} parameter;

void init_monitor(int, char *[]);
void sdb_mainloop();

int main(int argc, char *argv[]){
	parameter.argc = argc;
	parameter.argv = argv;
	init_monitor(argc, argv);

	sdb_mainloop();

	return 0;
}