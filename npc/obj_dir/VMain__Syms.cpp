// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMain__Syms.h"
#include "VMain.h"
#include "VMain___024root.h"
#include "VMain_Main.h"
#include "VMain_d_mem.h"
#include "VMain_mycpu_top.h"
#include "VMain_i_mem.h"
#include "VMain_preIF.h"
#include "VMain_IF_stage.h"
#include "VMain_ID_stage.h"
#include "VMain_EX_stage.h"
#include "VMain_MEM_stage.h"
#include "VMain_WB_stage.h"
#include "VMain_regfile.h"
#include "VMain_ALU.h"
#include "VMain_npc_break.h"
#include "VMain_Difftest.h"
#include "VMain_Exec.h"

// FUNCTIONS
VMain__Syms::~VMain__Syms()
{
}

VMain__Syms::VMain__Syms(VerilatedContext* contextp, const char* namep, VMain* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__Main{this, Verilated::catName(namep, "Main")}
    , TOP__Main__cpucore{this, Verilated::catName(namep, "Main.cpucore")}
    , TOP__Main__cpucore__EXE{this, Verilated::catName(namep, "Main.cpucore.EXE")}
    , TOP__Main__cpucore__EXE__alu{this, Verilated::catName(namep, "Main.cpucore.EXE.alu")}
    , TOP__Main__cpucore__ID{this, Verilated::catName(namep, "Main.cpucore.ID")}
    , TOP__Main__cpucore__ID__reg_{this, Verilated::catName(namep, "Main.cpucore.ID.reg_")}
    , TOP__Main__cpucore__ID__reg___difftest{this, Verilated::catName(namep, "Main.cpucore.ID.reg_.difftest")}
    , TOP__Main__cpucore__ID__reg___inst_exec_once{this, Verilated::catName(namep, "Main.cpucore.ID.reg_.inst_exec_once")}
    , TOP__Main__cpucore__ID__reg___npc_brk{this, Verilated::catName(namep, "Main.cpucore.ID.reg_.npc_brk")}
    , TOP__Main__cpucore__IF{this, Verilated::catName(namep, "Main.cpucore.IF")}
    , TOP__Main__cpucore__MEM{this, Verilated::catName(namep, "Main.cpucore.MEM")}
    , TOP__Main__cpucore__WB{this, Verilated::catName(namep, "Main.cpucore.WB")}
    , TOP__Main__cpucore__pIF{this, Verilated::catName(namep, "Main.cpucore.pIF")}
    , TOP__Main__dram{this, Verilated::catName(namep, "Main.dram")}
    , TOP__Main__iram{this, Verilated::catName(namep, "Main.iram")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__Main = &TOP__Main;
    TOP__Main.__PVT__cpucore = &TOP__Main__cpucore;
    TOP__Main__cpucore.__PVT__EXE = &TOP__Main__cpucore__EXE;
    TOP__Main__cpucore__EXE.__PVT__alu = &TOP__Main__cpucore__EXE__alu;
    TOP__Main__cpucore.__PVT__ID = &TOP__Main__cpucore__ID;
    TOP__Main__cpucore__ID.__PVT__reg_ = &TOP__Main__cpucore__ID__reg_;
    TOP__Main__cpucore__ID__reg_.__PVT__difftest = &TOP__Main__cpucore__ID__reg___difftest;
    TOP__Main__cpucore__ID__reg_.__PVT__inst_exec_once = &TOP__Main__cpucore__ID__reg___inst_exec_once;
    TOP__Main__cpucore__ID__reg_.__PVT__npc_brk = &TOP__Main__cpucore__ID__reg___npc_brk;
    TOP__Main__cpucore.__PVT__IF = &TOP__Main__cpucore__IF;
    TOP__Main__cpucore.__PVT__MEM = &TOP__Main__cpucore__MEM;
    TOP__Main__cpucore.__PVT__WB = &TOP__Main__cpucore__WB;
    TOP__Main__cpucore.__PVT__pIF = &TOP__Main__cpucore__pIF;
    TOP__Main.__PVT__dram = &TOP__Main__dram;
    TOP__Main.__PVT__iram = &TOP__Main__iram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Main.__Vconfigure(true);
    TOP__Main__cpucore.__Vconfigure(true);
    TOP__Main__cpucore__EXE.__Vconfigure(true);
    TOP__Main__cpucore__EXE__alu.__Vconfigure(true);
    TOP__Main__cpucore__ID.__Vconfigure(true);
    TOP__Main__cpucore__ID__reg_.__Vconfigure(true);
    TOP__Main__cpucore__ID__reg___difftest.__Vconfigure(true);
    TOP__Main__cpucore__ID__reg___inst_exec_once.__Vconfigure(true);
    TOP__Main__cpucore__ID__reg___npc_brk.__Vconfigure(true);
    TOP__Main__cpucore__IF.__Vconfigure(true);
    TOP__Main__cpucore__MEM.__Vconfigure(true);
    TOP__Main__cpucore__WB.__Vconfigure(true);
    TOP__Main__cpucore__pIF.__Vconfigure(true);
    TOP__Main__dram.__Vconfigure(true);
    TOP__Main__iram.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
