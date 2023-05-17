// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub__TOP__0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+12,"reset", false,-1);
    tracep->declBus(c+13,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+14,"io_src1", false,-1, 31,0);
    tracep->declBus(c+15,"io_src2", false,-1, 31,0);
    tracep->declBus(c+16,"io_res", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+12,"reset", false,-1);
    tracep->declBus(c+13,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+14,"io_src1", false,-1, 31,0);
    tracep->declBus(c+15,"io_src2", false,-1, 31,0);
    tracep->declBus(c+16,"io_res", false,-1, 31,0);
    tracep->declBit(c+17,"op_add", false,-1);
    tracep->declBit(c+18,"op_sub", false,-1);
    tracep->declBit(c+19,"op_slt", false,-1);
    tracep->declBit(c+20,"op_sltu", false,-1);
    tracep->declBit(c+21,"op_and", false,-1);
    tracep->declBit(c+22,"op_nor", false,-1);
    tracep->declBit(c+23,"op_or", false,-1);
    tracep->declBit(c+24,"op_xor", false,-1);
    tracep->declBit(c+25,"op_sll", false,-1);
    tracep->declBit(c+26,"op_srl", false,-1);
    tracep->declBit(c+27,"op_sra", false,-1);
    tracep->declBit(c+28,"op_lui", false,-1);
    tracep->declBit(c+29,"op_mul", false,-1);
    tracep->declBit(c+30,"op_mulh", false,-1);
    tracep->declBit(c+31,"op_mulhu", false,-1);
    tracep->declBit(c+32,"op_div", false,-1);
    tracep->declBit(c+33,"op_mod", false,-1);
    tracep->declBit(c+34,"op_divu", false,-1);
    tracep->declBit(c+35,"op_modu", false,-1);
    tracep->declBit(c+1,"add_sub", false,-1);
    tracep->declQuad(c+2,"add_res", false,-1, 32,0);
    tracep->declBit(c+36,"slt_res", false,-1);
    tracep->declBit(c+4,"sltu_res", false,-1);
    tracep->declBus(c+37,"and_res", false,-1, 31,0);
    tracep->declBus(c+5,"or_res", false,-1, 31,0);
    tracep->declBus(c+6,"nor_res", false,-1, 31,0);
    tracep->declBus(c+38,"xor_res", false,-1, 31,0);
    tracep->declQuad(c+39,"sll_res", false,-1, 62,0);
    tracep->declQuad(c+41,"sr", false,-1, 63,0);
    tracep->declQuad(c+43,"sr_res", false,-1, 63,0);
    tracep->declQuad(c+7,"mul_pre", false,-1, 63,0);
    tracep->declBus(c+9,"mul_res", false,-1, 31,0);
    tracep->declBus(c+10,"mulhu_res", false,-1, 31,0);
    tracep->declBus(c+45,"mulh_res", false,-1, 31,0);
    tracep->declBus(c+46,"divu_res", false,-1, 31,0);
    tracep->declBus(c+47,"modu_res", false,-1, 31,0);
    tracep->declQuad(c+48,"div_res", false,-1, 32,0);
    tracep->declBus(c+50,"mod_res", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ALU__DOT__add_sub));
    bufp->fullQData(oldp+2,(vlSelf->ALU__DOT__add_res),33);
    bufp->fullBit(oldp+4,((1U & (~ (IData)((vlSelf->ALU__DOT__add_res 
                                            >> 0x20U))))));
    bufp->fullIData(oldp+5,(vlSelf->ALU__DOT__or_res),32);
    bufp->fullIData(oldp+6,((~ vlSelf->ALU__DOT__or_res)),32);
    bufp->fullQData(oldp+7,(vlSelf->ALU__DOT__mul_pre),64);
    bufp->fullIData(oldp+9,((IData)(vlSelf->ALU__DOT__mul_pre)),32);
    bufp->fullIData(oldp+10,((IData)((vlSelf->ALU__DOT__mul_pre 
                                      >> 0x20U))),32);
    bufp->fullBit(oldp+11,(vlSelf->clock));
    bufp->fullBit(oldp+12,(vlSelf->reset));
    bufp->fullCData(oldp+13,(vlSelf->io_alu_op),5);
    bufp->fullIData(oldp+14,(vlSelf->io_src1),32);
    bufp->fullIData(oldp+15,(vlSelf->io_src2),32);
    bufp->fullIData(oldp+16,(vlSelf->io_res),32);
    bufp->fullBit(oldp+17,((1U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+18,((2U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+19,((3U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+20,((4U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+21,((5U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+22,((6U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+23,((7U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+24,((8U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+25,((9U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+26,((0xaU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+27,((0xbU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+28,((0xcU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+29,((0xdU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+30,((0xeU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+31,((0xfU == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+32,((0x10U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+33,((0x12U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+34,((0x11U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+35,((0x13U == (IData)(vlSelf->io_alu_op))));
    bufp->fullBit(oldp+36,((1U & (((~ (vlSelf->io_src2 
                                       >> 0x1fU)) & 
                                   (vlSelf->io_src1 
                                    >> 0x1fU)) | ((~ 
                                                   ((vlSelf->io_src1 
                                                     ^ vlSelf->io_src2) 
                                                    >> 0x1fU)) 
                                                  & (IData)(
                                                            (vlSelf->ALU__DOT__add_res 
                                                             >> 0x1fU)))))));
    bufp->fullIData(oldp+37,((vlSelf->io_src1 & vlSelf->io_src2)),32);
    bufp->fullIData(oldp+38,((vlSelf->io_src1 ^ vlSelf->io_src2)),32);
    bufp->fullQData(oldp+39,((0x7fffffffffffffffULL 
                              & ((QData)((IData)(vlSelf->io_src1)) 
                                 << (0x1fU & vlSelf->io_src2)))),63);
    bufp->fullQData(oldp+41,((((QData)((IData)((((vlSelf->io_src1 
                                                  >> 0x1fU) 
                                                 & (0xbU 
                                                    == (IData)(vlSelf->io_alu_op)))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(vlSelf->io_src1)))),64);
    bufp->fullQData(oldp+43,(((((QData)((IData)((((vlSelf->io_src1 
                                                   >> 0x1fU) 
                                                  & (0xbU 
                                                     == (IData)(vlSelf->io_alu_op)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->io_src1))) 
                              >> (0x1fU & vlSelf->io_src2))),64);
    bufp->fullIData(oldp+45,((IData)((VL_MULS_QQQ(64, 
                                                  VL_EXTENDS_QI(64,32, vlSelf->io_src1), 
                                                  VL_EXTENDS_QI(64,32, vlSelf->io_src2)) 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+46,(VL_DIV_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
    bufp->fullIData(oldp+47,(VL_MODDIV_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
    bufp->fullQData(oldp+48,((0x1ffffffffULL & VL_DIVS_QQQ(33, 
                                                           (0x1ffffffffULL 
                                                            & VL_EXTENDS_QI(33,32, vlSelf->io_src1)), 
                                                           (0x1ffffffffULL 
                                                            & VL_EXTENDS_QI(33,32, vlSelf->io_src2))))),33);
    bufp->fullIData(oldp+50,(VL_MODDIVS_III(32, vlSelf->io_src1, vlSelf->io_src2)),32);
}
