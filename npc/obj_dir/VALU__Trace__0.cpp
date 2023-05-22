// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__trace_chg_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VALU___024root__trace_chg_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ALU__DOT__add_sub));
        bufp->chgQData(oldp+1,(vlSelf->ALU__DOT__add_res),33);
        bufp->chgBit(oldp+3,((1U & (~ (IData)((vlSelf->ALU__DOT__add_res 
                                               >> 0x20U))))));
        bufp->chgIData(oldp+4,(vlSelf->ALU__DOT__or_res),32);
        bufp->chgIData(oldp+5,((~ vlSelf->ALU__DOT__or_res)),32);
        bufp->chgQData(oldp+6,(vlSelf->ALU__DOT__mul_pre),64);
        bufp->chgIData(oldp+8,((IData)(vlSelf->ALU__DOT__mul_pre)),32);
        bufp->chgIData(oldp+9,((IData)((vlSelf->ALU__DOT__mul_pre 
                                        >> 0x20U))),32);
    }
    bufp->chgCData(oldp+10,(vlSelf->io_alu_op),5);
    bufp->chgIData(oldp+11,(vlSelf->io_src1),32);
    bufp->chgIData(oldp+12,(vlSelf->io_src2),32);
    bufp->chgIData(oldp+13,(vlSelf->io_res),32);
    bufp->chgBit(oldp+14,((1U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+15,((2U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+16,((3U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+17,((4U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+18,((5U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+19,((6U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+20,((7U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+21,((8U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+22,((9U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+23,((0xaU == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+24,((0xbU == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+25,((0xcU == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+26,((0xdU == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+27,((0xeU == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+28,((0xfU == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+29,((0x10U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+30,((0x12U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+31,((0x11U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+32,((0x13U == (IData)(vlSelf->io_alu_op))));
    bufp->chgBit(oldp+33,((1U & (((~ (vlSelf->io_src2 
                                      >> 0x1fU)) & 
                                  (vlSelf->io_src1 
                                   >> 0x1fU)) | ((~ 
                                                  ((vlSelf->io_src1 
                                                    ^ vlSelf->io_src2) 
                                                   >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ALU__DOT__add_res 
                                                            >> 0x1fU)))))));
    bufp->chgIData(oldp+34,((vlSelf->io_src1 & vlSelf->io_src2)),32);
    bufp->chgIData(oldp+35,((vlSelf->io_src1 ^ vlSelf->io_src2)),32);
    bufp->chgQData(oldp+36,((0x7fffffffffffffffULL 
                             & ((QData)((IData)(vlSelf->io_src1)) 
                                << (0x1fU & vlSelf->io_src2)))),63);
    bufp->chgQData(oldp+38,((((QData)((IData)((((vlSelf->io_src1 
                                                 >> 0x1fU) 
                                                & (0xbU 
                                                   == (IData)(vlSelf->io_alu_op)))
                                                ? 0xffffffffU
                                                : 0U))) 
                              << 0x20U) | (QData)((IData)(vlSelf->io_src1)))),64);
    bufp->chgQData(oldp+40,(((((QData)((IData)((((vlSelf->io_src1 
                                                  >> 0x1fU) 
                                                 & (0xbU 
                                                    == (IData)(vlSelf->io_alu_op)))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(vlSelf->io_src1))) 
                             >> (0x1fU & vlSelf->io_src2))),64);
    bufp->chgIData(oldp+42,((IData)((VL_MULS_QQQ(64, 
                                                 VL_EXTENDS_QI(64,32, vlSelf->io_src1), 
                                                 VL_EXTENDS_QI(64,32, vlSelf->io_src2)) 
                                     >> 0x20U))),32);
    bufp->chgIData(oldp+43,(VL_DIV_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
    bufp->chgIData(oldp+44,(VL_MODDIV_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
    bufp->chgIData(oldp+45,(VL_MODDIVS_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
    bufp->chgIData(oldp+46,((IData)((0x1ffffffffULL 
                                     & VL_DIVS_QQQ(33, 
                                                   (0x1ffffffffULL 
                                                    & VL_EXTENDS_QI(33,32, vlSelf->io_src1)), 
                                                   (0x1ffffffffULL 
                                                    & VL_EXTENDS_QI(33,32, vlSelf->io_src2)))))),32);
}

void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_cleanup\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
