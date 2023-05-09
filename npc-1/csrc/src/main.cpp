#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VGCD.h"

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
static int parse_args(int argc, char *argv[])
{
  if (argc == 2)
  {
    if (strlen(argv[1]) != 0)
    {
      img_file = argv[1];
      img_size = ld(img_file);
    }
  }
  return 0;
}

int main(int argc, char *argv[])
{
  parse_args(argc, argv);

  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  top = new VMain{contextp};

#ifdef CONFIG_ITRACE
  init_disasm("riscv64-pc-linux-gnu");
#endif

#ifdef CONFIG_VCD
  Verilated::traceEverOn(true);
  m_trace = new VerilatedVcdC;
  top->trace(m_trace, 5);
  m_trace->open("waveform.vcd");
#endif

  init_npc();

#ifdef CONFIG_DIFFTEST
  init_so("/home/wcx/Desktop/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so", img_size);
#endif

  while (1)
  {
    exec_once();
  }

  return 0;
}