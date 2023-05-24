// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMain.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMain__Syms.h"
#include "VMain___024root.h"

VL_ATTR_COLD void VMain_Main___eval_initial__TOP__Main(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_preIF___eval_initial__TOP__Main__cpucore__pIF(VMain_preIF* vlSelf);
VL_ATTR_COLD void VMain_regfile___eval_initial__TOP__Main__cpucore__ID__reg_(VMain_regfile* vlSelf);
VL_ATTR_COLD void VMain_Difftest___eval_initial__TOP__Main__cpucore__ID__reg___difftest(VMain_Difftest* vlSelf);

VL_ATTR_COLD void VMain___024root___eval_initial(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_initial\n"); );
    // Body
    VMain_Main___eval_initial__TOP__Main((&vlSymsp->TOP__Main));
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VMain_preIF___eval_initial__TOP__Main__cpucore__pIF((&vlSymsp->TOP__Main__cpucore__pIF));
    VMain_regfile___eval_initial__TOP__Main__cpucore__ID__reg_((&vlSymsp->TOP__Main__cpucore__ID__reg_));
    VMain_Difftest___eval_initial__TOP__Main__cpucore__ID__reg___difftest((&vlSymsp->TOP__Main__cpucore__ID__reg___difftest));
    vlSelf->__Vtrigrprev__TOP__Main__clock = vlSymsp->TOP__Main.clock;
    vlSelf->__Vtrigrprev__TOP__Main__cpucore__pIF____PVT__clock 
        = vlSymsp->TOP__Main__cpucore__pIF.__PVT__clock;
    vlSelf->__Vtrigrprev__TOP__Main__cpucore__ID__reg_____PVT__clock 
        = vlSymsp->TOP__Main__cpucore__ID__reg_.__PVT__clock;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMain___024root___dump_triggers__stl(VMain___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMain___024root___eval_triggers__stl(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMain___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VMain___024root___stl_sequent__TOP__0(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__Main.reset = vlSelf->reset;
    vlSymsp->TOP__Main.clock = vlSelf->clock;
}

VL_ATTR_COLD void VMain_Main___stl_sequent__TOP__Main__0(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_preIF___stl_sequent__TOP__Main__cpucore__pIF__0(VMain_preIF* vlSelf);
VL_ATTR_COLD void VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___0(VMain_regfile* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__0(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_Difftest___stl_sequent__TOP__Main__cpucore__ID__reg___difftest__0(VMain_Difftest* vlSelf);
VL_ATTR_COLD void VMain_preIF___stl_sequent__TOP__Main__cpucore__pIF__1(VMain_preIF* vlSelf);
VL_ATTR_COLD void VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__0(VMain_ID_stage* vlSelf);
VL_ATTR_COLD void VMain_Main___stl_sequent__TOP__Main__1(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__0(VMain_IF_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__1(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_Main___stl_sequent__TOP__Main__2(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__1(VMain_IF_stage* vlSelf);
VL_ATTR_COLD void VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__1(VMain_ID_stage* vlSelf);
VL_ATTR_COLD void VMain_i_mem___stl_sequent__TOP__Main__iram__0(VMain_i_mem* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__2(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_Main___stl_sequent__TOP__Main__3(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__2(VMain_ID_stage* vlSelf);
VL_ATTR_COLD void VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__0(VMain_EX_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__3(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__2(VMain_IF_stage* vlSelf);
VL_ATTR_COLD void VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__1(VMain_EX_stage* vlSelf);
VL_ATTR_COLD void VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__0(VMain_MEM_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__4(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__3(VMain_ID_stage* vlSelf);
VL_ATTR_COLD void VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__1(VMain_MEM_stage* vlSelf);
VL_ATTR_COLD void VMain_WB_stage___stl_sequent__TOP__Main__cpucore__WB__0(VMain_WB_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__5(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___1(VMain_regfile* vlSelf);
VL_ATTR_COLD void VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__2(VMain_EX_stage* vlSelf);
VL_ATTR_COLD void VMain_WB_stage___stl_sequent__TOP__Main__cpucore__WB__1(VMain_WB_stage* vlSelf);
VL_ATTR_COLD void VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__4(VMain_ID_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__6(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_ALU___stl_sequent__TOP__Main__cpucore__EXE__alu__0(VMain_ALU* vlSelf);
VL_ATTR_COLD void VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___2(VMain_regfile* vlSelf);
VL_ATTR_COLD void VMain_Main___stl_sequent__TOP__Main__4(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__2(VMain_MEM_stage* vlSelf);
VL_ATTR_COLD void VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__5(VMain_ID_stage* vlSelf);
VL_ATTR_COLD void VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__3(VMain_EX_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__7(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___3(VMain_regfile* vlSelf);
VL_ATTR_COLD void VMain_ALU___stl_sequent__TOP__Main__cpucore__EXE__alu__1(VMain_ALU* vlSelf);
VL_ATTR_COLD void VMain_Main___stl_sequent__TOP__Main__5(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_WB_stage___stl_sequent__TOP__Main__cpucore__WB__2(VMain_WB_stage* vlSelf);
VL_ATTR_COLD void VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__4(VMain_EX_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__8(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_Main___stl_sequent__TOP__Main__6(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__6(VMain_ID_stage* vlSelf);
VL_ATTR_COLD void VMain_d_mem___stl_sequent__TOP__Main__dram__0(VMain_d_mem* vlSelf);
VL_ATTR_COLD void VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___4(VMain_regfile* vlSelf);
VL_ATTR_COLD void VMain_Main___stl_sequent__TOP__Main__7(VMain_Main* vlSelf);
VL_ATTR_COLD void VMain_Exec___stl_sequent__TOP__Main__cpucore__ID__reg___inst_exec_once__0(VMain_Exec* vlSelf);
VL_ATTR_COLD void VMain_npc_break___stl_sequent__TOP__Main__cpucore__ID__reg___npc_brk__0(VMain_npc_break* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__9(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__3(VMain_MEM_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__10(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_WB_stage___stl_sequent__TOP__Main__cpucore__WB__3(VMain_WB_stage* vlSelf);
VL_ATTR_COLD void VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__11(VMain_mycpu_top* vlSelf);
VL_ATTR_COLD void VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__7(VMain_ID_stage* vlSelf);
VL_ATTR_COLD void VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___5(VMain_regfile* vlSelf);

VL_ATTR_COLD void VMain___024root___eval_stl(VMain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMain___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VMain___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VMain_Main___stl_sequent__TOP__Main__0((&vlSymsp->TOP__Main));
        VMain_preIF___stl_sequent__TOP__Main__cpucore__pIF__0((&vlSymsp->TOP__Main__cpucore__pIF));
        VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___0((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__0((&vlSymsp->TOP__Main__cpucore));
        VMain_Difftest___stl_sequent__TOP__Main__cpucore__ID__reg___difftest__0((&vlSymsp->TOP__Main__cpucore__ID__reg___difftest));
        VMain_preIF___stl_sequent__TOP__Main__cpucore__pIF__1((&vlSymsp->TOP__Main__cpucore__pIF));
        VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__0((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_Main___stl_sequent__TOP__Main__1((&vlSymsp->TOP__Main));
        VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__0((&vlSymsp->TOP__Main__cpucore__IF));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__1((&vlSymsp->TOP__Main__cpucore));
        VMain_Main___stl_sequent__TOP__Main__2((&vlSymsp->TOP__Main));
        VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__1((&vlSymsp->TOP__Main__cpucore__IF));
        VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__1((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_i_mem___stl_sequent__TOP__Main__iram__0((&vlSymsp->TOP__Main__iram));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__2((&vlSymsp->TOP__Main__cpucore));
        VMain_Main___stl_sequent__TOP__Main__3((&vlSymsp->TOP__Main));
        VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__2((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__0((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__3((&vlSymsp->TOP__Main__cpucore));
        VMain_IF_stage___stl_sequent__TOP__Main__cpucore__IF__2((&vlSymsp->TOP__Main__cpucore__IF));
        VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__1((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__0((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__4((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__3((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__1((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_WB_stage___stl_sequent__TOP__Main__cpucore__WB__0((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__5((&vlSymsp->TOP__Main__cpucore));
        VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___1((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__2((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_WB_stage___stl_sequent__TOP__Main__cpucore__WB__1((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__4((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__6((&vlSymsp->TOP__Main__cpucore));
        VMain_ALU___stl_sequent__TOP__Main__cpucore__EXE__alu__0((&vlSymsp->TOP__Main__cpucore__EXE__alu));
        VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___2((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_Main___stl_sequent__TOP__Main__4((&vlSymsp->TOP__Main));
        VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__2((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__5((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__3((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__7((&vlSymsp->TOP__Main__cpucore));
        VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___3((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_ALU___stl_sequent__TOP__Main__cpucore__EXE__alu__1((&vlSymsp->TOP__Main__cpucore__EXE__alu));
        VMain_Main___stl_sequent__TOP__Main__5((&vlSymsp->TOP__Main));
        VMain_WB_stage___stl_sequent__TOP__Main__cpucore__WB__2((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_EX_stage___stl_sequent__TOP__Main__cpucore__EXE__4((&vlSymsp->TOP__Main__cpucore__EXE));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__8((&vlSymsp->TOP__Main__cpucore));
        VMain_Main___stl_sequent__TOP__Main__6((&vlSymsp->TOP__Main));
        VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__6((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_d_mem___stl_sequent__TOP__Main__dram__0((&vlSymsp->TOP__Main__dram));
        VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___4((&vlSymsp->TOP__Main__cpucore__ID__reg_));
        VMain_Main___stl_sequent__TOP__Main__7((&vlSymsp->TOP__Main));
        VMain_Exec___stl_sequent__TOP__Main__cpucore__ID__reg___inst_exec_once__0((&vlSymsp->TOP__Main__cpucore__ID__reg___inst_exec_once));
        VMain_npc_break___stl_sequent__TOP__Main__cpucore__ID__reg___npc_brk__0((&vlSymsp->TOP__Main__cpucore__ID__reg___npc_brk));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__9((&vlSymsp->TOP__Main__cpucore));
        VMain_MEM_stage___stl_sequent__TOP__Main__cpucore__MEM__3((&vlSymsp->TOP__Main__cpucore__MEM));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__10((&vlSymsp->TOP__Main__cpucore));
        VMain_WB_stage___stl_sequent__TOP__Main__cpucore__WB__3((&vlSymsp->TOP__Main__cpucore__WB));
        VMain_mycpu_top___stl_sequent__TOP__Main__cpucore__11((&vlSymsp->TOP__Main__cpucore));
        VMain_ID_stage___stl_sequent__TOP__Main__cpucore__ID__7((&vlSymsp->TOP__Main__cpucore__ID));
        VMain_regfile___stl_sequent__TOP__Main__cpucore__ID__reg___5((&vlSymsp->TOP__Main__cpucore__ID__reg_));
    }
}
