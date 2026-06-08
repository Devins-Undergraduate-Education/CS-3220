// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_burst.h for the primary calling header

#include "Vtb_axi4_ram_burst__pch.h"
#include "Vtb_axi4_ram_burst__Syms.h"
#include "Vtb_axi4_ram_burst___024root.h"

VL_ATTR_COLD void Vtb_axi4_ram_burst_tb_axi4_ram_burst___eval_static__TOP__tb_axi4_ram_burst(Vtb_axi4_ram_burst_tb_axi4_ram_burst* vlSelf);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root___eval_static(Vtb_axi4_ram_burst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root___eval_static\n"); );
    // Body
    Vtb_axi4_ram_burst_tb_axi4_ram_burst___eval_static__TOP__tb_axi4_ram_burst((&vlSymsp->TOP__tb_axi4_ram_burst));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_axi4_ram_burst_tb_axi4_ram_burst___eval_initial__TOP__tb_axi4_ram_burst(Vtb_axi4_ram_burst_tb_axi4_ram_burst* vlSelf);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root___eval_initial(Vtb_axi4_ram_burst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root___eval_initial\n"); );
    // Body
    Vtb_axi4_ram_burst_tb_axi4_ram_burst___eval_initial__TOP__tb_axi4_ram_burst((&vlSymsp->TOP__tb_axi4_ram_burst));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst___024root___dump_triggers__stl(Vtb_axi4_ram_burst___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root___eval_triggers__stl(Vtb_axi4_ram_burst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi4_ram_burst___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_axi4_ram_burst_tb_axi4_ram_burst___stl_sequent__TOP__tb_axi4_ram_burst__0(Vtb_axi4_ram_burst_tb_axi4_ram_burst* vlSelf);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root___eval_stl(Vtb_axi4_ram_burst___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tb_axi4_ram_burst___stl_sequent__TOP__tb_axi4_ram_burst__0((&vlSymsp->TOP__tb_axi4_ram_burst));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}
