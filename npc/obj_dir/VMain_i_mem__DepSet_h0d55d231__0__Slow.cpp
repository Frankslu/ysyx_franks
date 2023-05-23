// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_i_mem.h"

void VMain_i_mem____Vdpiimwrap_vaddr_fetch_TOP__Main__iram(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VMain_i_mem___stl_sequent__TOP__Main__iram__0(VMain_i_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_i_mem___stl_sequent__TOP__Main__iram__0\n"); );
    // Body
    if (vlSelf->__PVT__en) {
        VMain_i_mem____Vdpiimwrap_vaddr_fetch_TOP__Main__iram(vlSelf->__PVT__addr, vlSelf->__Vtask_vaddr_fetch__0__rdata);
        vlSelf->__PVT__rdata = vlSelf->__Vtask_vaddr_fetch__0__rdata;
    }
}

VL_ATTR_COLD void VMain_i_mem___ctor_var_reset(VMain_i_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_i_mem___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_vaddr_fetch__0__rdata = 0;
}
