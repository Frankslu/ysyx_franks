// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VGCD.h"
#include "VGCD__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VGCD::VGCD(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VGCD__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_loadingValues{vlSymsp->TOP.io_loadingValues}
    , io_outputValid{vlSymsp->TOP.io_outputValid}
    , io_value1{vlSymsp->TOP.io_value1}
    , io_value2{vlSymsp->TOP.io_value2}
    , io_outputGCD{vlSymsp->TOP.io_outputGCD}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VGCD::VGCD(const char* _vcname__)
    : VGCD(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VGCD::~VGCD() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VGCD___024root___eval_debug_assertions(VGCD___024root* vlSelf);
#endif  // VL_DEBUG
void VGCD___024root___eval_static(VGCD___024root* vlSelf);
void VGCD___024root___eval_initial(VGCD___024root* vlSelf);
void VGCD___024root___eval_settle(VGCD___024root* vlSelf);
void VGCD___024root___eval(VGCD___024root* vlSelf);

void VGCD::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGCD::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VGCD___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VGCD___024root___eval_static(&(vlSymsp->TOP));
        VGCD___024root___eval_initial(&(vlSymsp->TOP));
        VGCD___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VGCD___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VGCD::eventsPending() { return false; }

uint64_t VGCD::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VGCD::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VGCD___024root___eval_final(VGCD___024root* vlSelf);

VL_ATTR_COLD void VGCD::final() {
    VGCD___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VGCD::hierName() const { return vlSymsp->name(); }
const char* VGCD::modelName() const { return "VGCD"; }
unsigned VGCD::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VGCD::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VGCD___024root__trace_init_top(VGCD___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VGCD___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VGCD___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VGCD___024root__trace_register(VGCD___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VGCD::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VGCD::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VGCD___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
