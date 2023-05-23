// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_Exec.h"
#include "VMain__Syms.h"

void VMain_Exec___ctor_var_reset(VMain_Exec* vlSelf);

VMain_Exec::VMain_Exec(VMain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMain_Exec___ctor_var_reset(this);
}

void VMain_Exec::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMain_Exec::~VMain_Exec() {
}
