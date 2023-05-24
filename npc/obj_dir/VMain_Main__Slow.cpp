// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Main.h"
#include "VMain__Syms.h"

void VMain_Main___ctor_var_reset(VMain_Main* vlSelf);

VMain_Main::VMain_Main(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_Main___ctor_var_reset(this);
}

void VMain_Main::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_Main::~VMain_Main() {
}
