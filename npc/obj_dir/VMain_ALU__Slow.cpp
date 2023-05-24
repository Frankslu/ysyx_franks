// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_ALU.h"
#include "VMain__Syms.h"

void VMain_ALU___ctor_var_reset(VMain_ALU* vlSelf);

VMain_ALU::VMain_ALU(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_ALU___ctor_var_reset(this);
}

void VMain_ALU::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_ALU::~VMain_ALU() {
}
