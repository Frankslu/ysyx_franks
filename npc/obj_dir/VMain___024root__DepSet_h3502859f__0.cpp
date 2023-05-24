// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain___024root.h"

void VMain___024root___eval_act(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_act\n"); );
}

void VMain___024root___eval_triggers__ico(VMain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__ico(VMain___024root* vlSelf);
#endif  // VL_DEBUG
void VMain___024root___eval_ico(VMain___024root* vlSelf);
void VMain___024root___eval_triggers__act(VMain___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__act(VMain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__nba(VMain___024root* vlSelf);
#endif  // VL_DEBUG
void VMain___024root___eval_nba(VMain___024root* vlSelf);

void VMain___024root___eval(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h96e6bc8f__0;
    IData/*31:0*/ __Vtemp_hc5ad9b08__0;
    IData/*31:0*/ __Vtemp_h764bbb3f__0;
    // Body
    vlSelf->__VicoIterCount = 0U;
    vlSelf->__VicoContinue = 1U;
    while (vlSelf->__VicoContinue) {
        vlSelf->__VicoContinue = 0U;
        VMain___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            vlSelf->__VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VMain___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/franks/ysyx-workbench/npc/vsrc/Main.v", 1433, "", "Input combinational region did not converge.");
            }
            __Vtemp_h96e6bc8f__0 = ((IData)(1U) + vlSelf->__VicoIterCount);
            vlSelf->__VicoIterCount = __Vtemp_h96e6bc8f__0;
            VMain___024root___eval_ico(vlSelf);
        }
    }
    vlSelf->__VnbaIterCount = 0U;
    vlSelf->__VnbaContinue = 1U;
    while (vlSelf->__VnbaContinue) {
        vlSelf->__VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VMain___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VMain___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/franks/ysyx-workbench/npc/vsrc/Main.v", 1433, "", "Active region did not converge.");
                }
                __Vtemp_hc5ad9b08__0 = ((IData)(1U) 
                                        + vlSelf->__VactIterCount);
                vlSelf->__VactIterCount = __Vtemp_hc5ad9b08__0;
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VMain___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            vlSelf->__VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VnbaIterCount))) {
#ifdef VL_DEBUG
                VMain___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/franks/ysyx-workbench/npc/vsrc/Main.v", 1433, "", "NBA region did not converge.");
            }
            __Vtemp_h764bbb3f__0 = ((IData)(1U) + vlSelf->__VnbaIterCount);
            vlSelf->__VnbaIterCount = __Vtemp_h764bbb3f__0;
            VMain___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VMain___024root___eval_debug_assertions(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
