#ifndef VE_H
#define VE_H

#include <stdint.h>
#include <stdio.h>
#include "macro.h"
// Include common routines
#include <verilated.h>
#include <verilated_dpi.h>
#include <verilated_vcd_c.h>

#include "VMain.h"
#include "VMain__Dpi.h"

extern VerilatedContext *contextp;
extern VMain *top;

IFDEF(CONFIG_CC_WAVE, extern VerilatedVcdC *tfp;)

#endif