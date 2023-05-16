// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmem.h"
#include "Vmem__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vmem::Vmem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmem__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_r_en{vlSymsp->TOP.io_r_en}
    , io_r_wr{vlSymsp->TOP.io_r_wr}
    , io_r_wstrb{vlSymsp->TOP.io_r_wstrb}
    , io_r_addr{vlSymsp->TOP.io_r_addr}
    , io_r_wdata{vlSymsp->TOP.io_r_wdata}
    , io_w_rdata{vlSymsp->TOP.io_w_rdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmem::Vmem(const char* _vcname__)
    : Vmem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmem::~Vmem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmem___024root___eval_debug_assertions(Vmem___024root* vlSelf);
#endif  // VL_DEBUG
void Vmem___024root___eval_static(Vmem___024root* vlSelf);
void Vmem___024root___eval_initial(Vmem___024root* vlSelf);
void Vmem___024root___eval_settle(Vmem___024root* vlSelf);
void Vmem___024root___eval(Vmem___024root* vlSelf);

void Vmem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmem___024root___eval_static(&(vlSymsp->TOP));
        Vmem___024root___eval_initial(&(vlSymsp->TOP));
        Vmem___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmem::eventsPending() { return false; }

uint64_t Vmem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmem___024root___eval_final(Vmem___024root* vlSelf);

VL_ATTR_COLD void Vmem::final() {
    Vmem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmem::hierName() const { return vlSymsp->name(); }
const char* Vmem::modelName() const { return "Vmem"; }
unsigned Vmem::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmem::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmem___024root__trace_init_top(Vmem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem___024root*>(voidSelf);
    Vmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmem___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmem___024root__trace_register(Vmem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmem::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmem::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmem___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
