// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_MEM_stage.h"
#include "VMain__Syms.h"

void VMain_MEM_stage___ctor_var_reset(VMain_MEM_stage* vlSelf);

VMain_MEM_stage::VMain_MEM_stage(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_MEM_stage___ctor_var_reset(this);
}

void VMain_MEM_stage::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_MEM_stage::~VMain_MEM_stage() {
}
