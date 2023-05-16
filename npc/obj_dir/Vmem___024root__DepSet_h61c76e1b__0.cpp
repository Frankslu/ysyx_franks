// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmem__Syms.h"
#include "Vmem___024root.h"

extern "C" void pmem_read(int raddr, int* rdata);

VL_INLINE_OPT void Vmem___024root____Vdpiimwrap_mem__DOT__Memory__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root____Vdpiimwrap_mem__DOT__Memory__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask, int* rdata);

VL_INLINE_OPT void Vmem___024root____Vdpiimwrap_mem__DOT__Memory__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root____Vdpiimwrap_mem__DOT__Memory__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    int rdata__Vcvt;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__ico(Vmem___024root* vlSelf);
#endif  // VL_DEBUG

void Vmem___024root___eval_triggers__ico(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem___024root___dump_triggers__act(Vmem___024root* vlSelf);
#endif  // VL_DEBUG

void Vmem___024root___eval_triggers__act(Vmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem___024root___dump_triggers__act(vlSelf);
    }
#endif
}
