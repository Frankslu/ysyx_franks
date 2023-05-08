// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrdmem.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrdmem___024root.h"

void Vrdmem___024root____Vdpiimwrap_rdmem__DOT__mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vrdmem___024root____Vdpiimwrap_rdmem__DOT__mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vrdmem___024root___ico_sequent__TOP__0(Vrdmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrdmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrdmem___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->mem_io_r_en) {
        if (vlSelf->mem_io_r_wr) {
            Vrdmem___024root____Vdpiimwrap_rdmem__DOT__mem__DOT__pmem_read_TOP(vlSelf->mem_io_r_addr, vlSelf->__Vtask_rdmem__DOT__mem__DOT__pmem_read__0__rdata);
            vlSelf->mem_io_w_rdata = vlSelf->__Vtask_rdmem__DOT__mem__DOT__pmem_read__0__rdata;
        } else {
            Vrdmem___024root____Vdpiimwrap_rdmem__DOT__mem__DOT__pmem_write_TOP(vlSelf->mem_io_r_addr, vlSelf->mem_io_r_wdata, (IData)(vlSelf->mem_io_r_wstrb));
        }
    }
}

void Vrdmem___024root___eval_ico(Vrdmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrdmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrdmem___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vrdmem___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vrdmem___024root___eval_act(Vrdmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrdmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrdmem___024root___eval_act\n"); );
}

void Vrdmem___024root___eval_nba(Vrdmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrdmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrdmem___024root___eval_nba\n"); );
}

void Vrdmem___024root___eval_triggers__ico(Vrdmem___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrdmem___024root___dump_triggers__ico(Vrdmem___024root* vlSelf);
#endif  // VL_DEBUG
void Vrdmem___024root___eval_triggers__act(Vrdmem___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrdmem___024root___dump_triggers__act(Vrdmem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrdmem___024root___dump_triggers__nba(Vrdmem___024root* vlSelf);
#endif  // VL_DEBUG

void Vrdmem___024root___eval(Vrdmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrdmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrdmem___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vrdmem___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vrdmem___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/rdmem.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vrdmem___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vrdmem___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrdmem___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/rdmem.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vrdmem___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrdmem___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/rdmem.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vrdmem___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vrdmem___024root___eval_debug_assertions(Vrdmem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrdmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrdmem___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->mem_io_r_en & 0xfeU))) {
        Verilated::overWidthError("mem_io_r_en");}
    if (VL_UNLIKELY((vlSelf->mem_io_r_wr & 0xfeU))) {
        Verilated::overWidthError("mem_io_r_wr");}
    if (VL_UNLIKELY((vlSelf->mem_io_r_wstrb & 0xf0U))) {
        Verilated::overWidthError("mem_io_r_wstrb");}
}
#endif  // VL_DEBUG
