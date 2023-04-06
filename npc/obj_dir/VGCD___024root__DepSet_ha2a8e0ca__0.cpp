// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCD.h for the primary calling header

#include "verilated.h"

#include "VGCD___024root.h"

void VGCD___024root___eval_act(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval_act\n"); );
}

VL_INLINE_OPT void VGCD___024root___nba_sequent__TOP__0(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__GCD__DOT__x;
    __Vdly__GCD__DOT__x = 0;
    SData/*15:0*/ __Vdly__GCD__DOT__y;
    __Vdly__GCD__DOT__y = 0;
    // Body
    __Vdly__GCD__DOT__y = vlSelf->GCD__DOT__y;
    __Vdly__GCD__DOT__x = vlSelf->GCD__DOT__x;
    if (vlSelf->io_loadingValues) {
        __Vdly__GCD__DOT__x = vlSelf->io_value1;
        __Vdly__GCD__DOT__y = vlSelf->io_value2;
    } else if (((IData)(vlSelf->GCD__DOT__x) > (IData)(vlSelf->GCD__DOT__y))) {
        __Vdly__GCD__DOT__x = (0xffffU & ((IData)(vlSelf->GCD__DOT__x) 
                                          - (IData)(vlSelf->GCD__DOT__y)));
    } else {
        __Vdly__GCD__DOT__y = (0xffffU & ((IData)(vlSelf->GCD__DOT__y) 
                                          - (IData)(vlSelf->GCD__DOT__x)));
    }
    vlSelf->GCD__DOT__x = __Vdly__GCD__DOT__x;
    vlSelf->GCD__DOT__y = __Vdly__GCD__DOT__y;
    vlSelf->io_outputGCD = vlSelf->GCD__DOT__x;
    vlSelf->io_outputValid = (0U == (IData)(vlSelf->GCD__DOT__y));
}

void VGCD___024root___eval_nba(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VGCD___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VGCD___024root___eval_triggers__act(VGCD___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VGCD___024root___dump_triggers__act(VGCD___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VGCD___024root___dump_triggers__nba(VGCD___024root* vlSelf);
#endif  // VL_DEBUG

void VGCD___024root___eval(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VGCD___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VGCD___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/GCD.v", 35, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VGCD___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VGCD___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/GCD.v", 35, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VGCD___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VGCD___024root___eval_debug_assertions(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_loadingValues & 0xfeU))) {
        Verilated::overWidthError("io_loadingValues");}
}
#endif  // VL_DEBUG
