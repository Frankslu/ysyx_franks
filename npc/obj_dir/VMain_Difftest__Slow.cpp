// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Difftest.h"
#include "VMain__Syms.h"

void VMain_Difftest___ctor_var_reset(VMain_Difftest* vlSelf);

VMain_Difftest::VMain_Difftest(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_Difftest___ctor_var_reset(this);
}

void VMain_Difftest::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_Difftest::~VMain_Difftest() {
}
