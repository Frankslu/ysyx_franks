#ifndef VE_H
#define VE_H

#include <stdint.h>
#include <stdio.h>

// Include common routines
#include <verilated.h>
#include <verilated_dpi.h>
#include <verilated_vcd_c.h>

#include "VMain.h"
#include "VMain__Dpi.h"

extern VerilatedContext *contextp;
extern VMain *top;
extern VerilatedVcd *tfp;

#define EXEC_CLOCK do{ \
	top->clock = 0; \
	top->eval(); \
	top->clock = 1; \
	top->eval(); \
	}while(0)
#endif