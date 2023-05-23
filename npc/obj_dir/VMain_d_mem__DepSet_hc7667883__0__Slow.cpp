// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain_d_mem.h"

void VMain_d_mem____Vdpiimwrap_vaddr_write_TOP__Main__dram(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ &rdata);
void VMain_d_mem____Vdpiimwrap_vaddr_read_TOP__Main__dram(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VMain_d_mem___stl_sequent__TOP__Main__dram__0(VMain_d_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_d_mem___stl_sequent__TOP__Main__dram__0\n"); );
    // Body
    if (vlSelf->__PVT__en) {
        if (vlSelf->__PVT__wr) {
            VMain_d_mem____Vdpiimwrap_vaddr_write_TOP__Main__dram(vlSelf->__PVT__addr, vlSelf->__PVT__wdata, 
                                                                  VL_EXTEND_II(8,4, (IData)(vlSelf->__PVT__wstrb)), vlSelf->__Vtask_vaddr_write__0__rdata);
            vlSelf->__PVT__rdata = vlSelf->__Vtask_vaddr_write__0__rdata;
        } else {
            VMain_d_mem____Vdpiimwrap_vaddr_read_TOP__Main__dram(vlSelf->__PVT__addr, vlSelf->__Vtask_vaddr_read__1__rdata);
            vlSelf->__PVT__rdata = vlSelf->__Vtask_vaddr_read__1__rdata;
        }
    }
}

VL_ATTR_COLD void VMain_d_mem___ctor_var_reset(VMain_d_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VMain_d_mem___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_vaddr_write__0__rdata = 0;
    vlSelf->__Vtask_vaddr_read__1__rdata = 0;
}