// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__my_FE_stage__DOT__pht__v0;
    __Vdlyvdim0__my_FE_stage__DOT__pht__v0 = 0;
    IData/*31:0*/ __Vilp;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__pht__v0;
    __Vdlyvval__my_FE_stage__DOT__pht__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__pht__v0;
    __Vdlyvset__my_FE_stage__DOT__pht__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__my_FE_stage__DOT__pht__v1;
    __Vdlyvdim0__my_FE_stage__DOT__pht__v1 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__pht__v1;
    __Vdlyvval__my_FE_stage__DOT__pht__v1 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__pht__v1;
    __Vdlyvset__my_FE_stage__DOT__pht__v1 = 0;
    CData/*5:0*/ __Vdlyvdim0__my_FE_stage__DOT__btb_tag__v0;
    __Vdlyvdim0__my_FE_stage__DOT__btb_tag__v0 = 0;
    IData/*23:0*/ __Vdlyvval__my_FE_stage__DOT__btb_tag__v0;
    __Vdlyvval__my_FE_stage__DOT__btb_tag__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__btb_tag__v0;
    __Vdlyvset__my_FE_stage__DOT__btb_tag__v0 = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__inst_count_FE = 0;
    CData/*5:0*/ __Vdlyvdim0__my_FE_stage__DOT__btb_target__v0;
    __Vdlyvdim0__my_FE_stage__DOT__btb_target__v0 = 0;
    IData/*31:0*/ __Vdlyvval__my_FE_stage__DOT__btb_target__v0;
    __Vdlyvval__my_FE_stage__DOT__btb_target__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__btb_target__v0;
    __Vdlyvset__my_FE_stage__DOT__btb_target__v0 = 0;
    SData/*9:0*/ __Vdly__my_FE_stage__DOT__bhr;
    __Vdly__my_FE_stage__DOT__bhr = 0;
    // Body
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__bhr = vlSelf->__PVT__my_FE_stage__DOT__bhr;
    __Vdlyvset__my_FE_stage__DOT__btb_target__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__btb_tag__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__pht__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__pht__v1 = 0U;
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U];
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_FE_stage__DOT__j = 0x40U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->__PVT__my_FE_stage__DOT__btb_target[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->__PVT__my_FE_stage__DOT__btb_tag[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdly__my_FE_stage__DOT__bhr = 0U;
        vlSelf->__PVT__my_FE_stage__DOT__i = 0U;
        while (VL_GTS_III(32, 0x400U, vlSelf->__PVT__my_FE_stage__DOT__i)) {
            vlSelf->__PVT__my_FE_stage__DOT__pht[(0x3ffU 
                                                  & vlSelf->__PVT__my_FE_stage__DOT__i)] = 1U;
            vlSelf->__PVT__my_FE_stage__DOT__i = ((IData)(1U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__i);
        }
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] = 0U;
        vlSelf->__PVT__my_FE_stage__DOT__btb_valid = 0ULL;
        vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = 0U;
        vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = 0x200U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if ((1U & (~ (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                      >> 0xfU)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__from_DE_to_FE)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE);
            }
        }
        if ((2U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U])) {
            __Vdly__my_FE_stage__DOT__bhr = ((0x3feU 
                                              & ((IData)(vlSelf->__PVT__my_FE_stage__DOT__bhr) 
                                                 << 1U)) 
                                             | (1U 
                                                & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U]));
        }
        if ((0x2000U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U])) {
            if ((4U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U])) {
                if ((3U != vlSelf->__PVT__my_FE_stage__DOT__pht
                     [(0x3ffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                 >> 3U))])) {
                    __Vdlyvval__my_FE_stage__DOT__pht__v0 
                        = (3U & ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__pht
                                 [(0x3ffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                             >> 3U))]));
                    __Vdlyvset__my_FE_stage__DOT__pht__v0 = 1U;
                    __Vdlyvdim0__my_FE_stage__DOT__pht__v0 
                        = (0x3ffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                     >> 3U));
                }
            } else if ((0U != vlSelf->__PVT__my_FE_stage__DOT__pht
                        [(0x3ffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                    >> 3U))])) {
                __Vdlyvval__my_FE_stage__DOT__pht__v1 
                    = (3U & (vlSelf->__PVT__my_FE_stage__DOT__pht
                             [(0x3ffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                         >> 3U))] - (IData)(1U)));
                __Vdlyvset__my_FE_stage__DOT__pht__v1 = 1U;
                __Vdlyvdim0__my_FE_stage__DOT__pht__v1 
                    = (0x3ffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                 >> 3U));
            }
        }
        if ((0x8000U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U])) {
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] = 0U;
            vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                = ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                    << 0x11U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                 >> 0xfU));
        } else {
            if (vlSelf->__PVT__from_DE_to_FE) {
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
                    = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U];
            } else {
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__next_pc_FE 
                        << 0xbU) | (((IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_index_FE) 
                                     << 1U) | (IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_used_FE)));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__next_pc_FE 
                        >> 0x15U) | (vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                                     << 0xbU));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = ((vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                        >> 0x15U) | (((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                     << 0xbU));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = ((((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                        >> 0x15U) | ((IData)((((QData)((IData)(
                                                               vlSelf->__PVT__my_FE_stage__DOT__imem
                                                               [
                                                               (0x3fffU 
                                                                & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                   >> 2U))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                     << 0xbU));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                                  [
                                                  (0x3fffU 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                        >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                vlSelf->__PVT__my_FE_stage__DOT__imem
                                                                [
                                                                (0x3fffU 
                                                                 & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                    >> 2U))])) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                              >> 0x20U)) 
                                     << 0xbU));
                vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
                    = (0x800U | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__my_FE_stage__DOT__imem
                                                            [
                                                            (0x3fffU 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                >> 2U))])) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                          >> 0x20U)) 
                                 >> 0x15U));
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__from_DE_to_FE)))) {
                vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                    = vlSelf->__PVT__my_FE_stage__DOT__next_pc_FE;
            }
        }
        if ((0x4000U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])) {
            vlSelf->__PVT__my_FE_stage__DOT__btb_valid 
                = (vlSelf->__PVT__my_FE_stage__DOT__btb_valid 
                   | ((QData)((IData)(1U)) << (0x3fU 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                                  >> 0x10U))));
        }
        if (((~ (IData)(vlSelf->__PVT__from_DE_to_FE)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x12U)))));
        }
        if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0x25U)))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x20U))))) 
                   & vlSelf->__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if ((0x4000U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])) {
            __Vdlyvval__my_FE_stage__DOT__btb_target__v0 
                = ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                    << 0x12U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U] 
                                 >> 0xeU));
            __Vdlyvset__my_FE_stage__DOT__btb_target__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__btb_target__v0 
                = (0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                            >> 0x10U));
            __Vdlyvval__my_FE_stage__DOT__btb_tag__v0 
                = (0xffffffU & ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                 << 0xaU) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                             >> 0x16U)));
            __Vdlyvset__my_FE_stage__DOT__btb_tag__v0 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__btb_tag__v0 
                = (0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                            >> 0x10U));
        }
    }
    if ((0x40U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U])) {
        vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 
            = ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                << 0x18U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                             >> 8U));
        vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 
            = (0x3fffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                          >> 0xaU));
    }
    vlSelf->__PVT__my_FE_stage__DOT__bhr = __Vdly__my_FE_stage__DOT__bhr;
    if (__Vdlyvset__my_FE_stage__DOT__btb_target__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__btb_target[__Vdlyvdim0__my_FE_stage__DOT__btb_target__v0] 
            = __Vdlyvval__my_FE_stage__DOT__btb_target__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__btb_tag__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__btb_tag[__Vdlyvdim0__my_FE_stage__DOT__btb_tag__v0] 
            = __Vdlyvval__my_FE_stage__DOT__btb_tag__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__pht__v0) {
        vlSelf->__PVT__my_FE_stage__DOT__pht[__Vdlyvdim0__my_FE_stage__DOT__pht__v0] 
            = __Vdlyvval__my_FE_stage__DOT__pht__v0;
    }
    if (__Vdlyvset__my_FE_stage__DOT__pht__v1) {
        vlSelf->__PVT__my_FE_stage__DOT__pht[__Vdlyvdim0__my_FE_stage__DOT__pht__v1] 
            = __Vdlyvval__my_FE_stage__DOT__pht__v1;
    }
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelf->__PVT__my_FE_stage__DOT__pht_index_FE = 
        (0x3ffU & (((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 0xaU)) ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__bhr)));
    vlSelf->__PVT__my_FE_stage__DOT__pht_used_FE = 
        ((IData)((vlSelf->__PVT__my_FE_stage__DOT__btb_valid 
                  >> (0x3fU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 2U)))) & (vlSelf->__PVT__my_FE_stage__DOT__btb_tag
                                            [(0x3fU 
                                              & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))] 
                                            == (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                >> 8U)));
    vlSelf->__PVT__my_FE_stage__DOT__next_pc_FE = (
                                                   ((IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_used_FE) 
                                                    & (vlSelf->__PVT__my_FE_stage__DOT__pht
                                                       [vlSelf->__PVT__my_FE_stage__DOT__pht_index_FE] 
                                                       >> 1U))
                                                    ? 
                                                   vlSelf->__PVT__my_FE_stage__DOT__btb_target
                                                   [
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                       >> 2U))]
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch));
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] = 0U;
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                << 6U) | (0x3fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U]));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x3fffU 
                                                         & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                            >> 0xaU))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                        >> 8U))))) 
                                      >> 0x20U)) << 6U));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                 << 0x1eU) | (0x3fffffc0U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                             >> 2U))) 
               | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                             [(0x3fffU 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                  >> 0xaU))])) 
                             << 0x20U) | (QData)((IData)(
                                                         ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                           >> 0x20U)) >> 0x1aU));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                         >> 2U)) | ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                         >> 2U)) | ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
            = ((0x3fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                         >> 2U)) | (0x1fc0U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                               >> 2U)));
    }
    if (vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
}

extern const VlWide<9>/*287:0*/ Vpipeline__ConstPool__CONST_hf857ef52_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_hedfdecc6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_hca12deac_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hb3817b4b__0;
    my_DE_stage__DOT____VdfgTmp_hb3817b4b__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h7ec02157__0;
    my_DE_stage__DOT____VdfgTmp_h7ec02157__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h79c2b08c__0;
    my_DE_stage__DOT____VdfgTmp_h79c2b08c__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h1d4e38a4__0;
    my_DE_stage__DOT____VdfgTmp_h1d4e38a4__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_6;
    // Body
    __Vtemp_5[0U] = ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                      ? vlSelf->my_DE_stage__DOT____VdfgExtracted_h7117cccf__0
                      : ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                          ? vlSelf->my_DE_stage__DOT____VdfgExtracted_h7117cccf__0
                          : ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                              ? (((- (IData)((1U & 
                                              (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                               >> 0xaU)))) 
                                  << 0xbU) | ((0x7e0U 
                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                  << 1U)) 
                                              | (0x1fU 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0x12U))))
                              : ((5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     >> 0xaU)))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 7U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                         << 1U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0x12U)))))
                                  : ((3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? (0xfffff000U 
                                         & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 0x15U) 
                                            | (0x1ff000U 
                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0xbU))))
                                      : ((2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             >> 0xaU)))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 0xbU)) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0x14U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                         << 1U)))))
                                          : 0U))))));
    __Vtemp_6[0U] = (IData)((((QData)((IData)(((0x1cU 
                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                               | ((0x1dU 
                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0x1eU 
                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | ((0x1fU 
                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | ((0x20U 
                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                           | (0x21U 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                              << 0x34U) | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x12U)))) 
                                                        << 0x2bU) 
                                                       | (0x7ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))));
    __Vtemp_6[1U] = ((__Vtemp_5[0U] << 0x15U) | (IData)(
                                                        ((((QData)((IData)(
                                                                           ((0x1cU 
                                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1dU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                           << 0x34U) 
                                                          | (((QData)((IData)(
                                                                              ((0x19U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                    << 0x31U) 
                                                                   | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                       << 0x30U) 
                                                                      | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x12U)))) 
                                                                          << 0x2bU) 
                                                                         | (0x7ffffffffffULL 
                                                                            & (((QData)((IData)(
                                                                                vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))) 
                                                         >> 0x20U)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[8U];
    } else if (vlSelf->__PVT__from_DE_to_FE) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vpipeline__ConstPool__CONST_hf857ef52_0[8U];
    } else {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = __Vtemp_6[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = __Vtemp_6[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = ((__Vtemp_5[0U] >> 0xbU) | (vlSelf->__PVT__my_DE_stage__DOT__regs
                                          [(0x1fU & 
                                            ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                              << 1U) 
                                             | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x1fU)))] 
                                          << 0x15U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__regs
                [(0x1fU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                            << 1U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 0x1fU)))] 
                >> 0xbU) | ((IData)((((QData)((IData)(
                                                      ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                        << 0x15U) 
                                                       | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                          >> 0xbU)))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                  [
                                                                  (0x1fU 
                                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 0x1aU))])))) 
                            << 0x15U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = (((IData)((((QData)((IData)(((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            << 0x15U) 
                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              >> 0xbU)))) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->__PVT__my_DE_stage__DOT__regs
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0x1aU))])))) 
                >> 0xbU) | ((IData)(((((QData)((IData)(
                                                       ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                         << 0x15U) 
                                                        | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                           >> 0xbU)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                   [
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0x1aU))]))) 
                                     >> 0x20U)) << 0x15U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = ((0xf8000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x10U)) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                                              << 0x15U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                             << 0x15U) 
                                                                            | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               >> 0xbU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                            [
                                                                            (0x1fU 
                                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1aU))]))) 
                                                         >> 0x20U)) 
                                                >> 0xbU)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = (((0x7ff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                             >> 0x10U)) 
               | (0xf8000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 << 0x10U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = (((0x7ff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x10U)) 
               | (0xf8000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0x10U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = (((0x7ff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                               << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x10U)) 
               | (0x8000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                << 0x10U)));
    }
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U];
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h7117cccf__0 
        = (((- (IData)((1U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                              >> 0xaU)))) << 0xbU) 
           | (0x7ffU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                         << 1U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 0x1fU))));
    my_DE_stage__DOT____VdfgTmp_hb3817b4b__0 = (IData)(
                                                       (0x19800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h7ec02157__0 = (IData)(
                                                       (0x2819800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h79c2b08c__0 = (IData)(
                                                       ((0x800000U 
                                                         == 
                                                         (0x3800000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                        & (0U 
                                                           == 
                                                           (0x7f0U 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))));
    my_DE_stage__DOT____VdfgTmp_h1d4e38a4__0 = (IData)(
                                                       (0x2809800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_hb3817b4b__0) 
                                                 & (0U 
                                                    == 
                                                    (0x7f0U 
                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_hb3817b4b__0) 
                                                  & (0x200U 
                                                     == 
                                                     (0x7f0U 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          ((0x3819800U 
                                                            == 
                                                            (0x383f800U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                           & (0U 
                                                              == 
                                                              (0x7f0U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           ((0x3019800U 
                                                             == 
                                                             (0x383f800U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                            & (0U 
                                                               == 
                                                               (0x7f0U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            ((0x2019800U 
                                                              == 
                                                              (0x383f800U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0x7f0U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             ((0x1019800U 
                                                               == 
                                                               (0x383f800U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x7f0U 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              ((0x1819800U 
                                                                == 
                                                                (0x383f800U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x7f0U 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_h7ec02157__0) 
                                                        & (0x200U 
                                                           == 
                                                           (0x7f0U 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_h7ec02157__0) 
                                                         & (0U 
                                                            == 
                                                            (0x7f0U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x19800U 
                                                                   == 
                                                                   (0x3f800U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_h79c2b08c__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_hb3817b4b__0) 
                                                           & (0x10U 
                                                              == 
                                                              (0x7f0U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x9800U 
                                                                    == 
                                                                    (0x383f800U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x3809800U 
                                                                     == 
                                                                     (0x383f800U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x3009800U 
                                                                      == 
                                                                      (0x383f800U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x2009800U 
                                                                       == 
                                                                       (0x383f800U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x1009800U 
                                                                        == 
                                                                        (0x383f800U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x1809800U 
                                                                         == 
                                                                         (0x383f800U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h1d4e38a4__0) 
                                                                  & (0x200U 
                                                                     == 
                                                                     (0x7f0U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_h1d4e38a4__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x7f0U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x9800U 
                                                                             == 
                                                                             (0x3f800U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_h79c2b08c__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 0xbU)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 0xbU)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x1001800U 
                                                                               == 
                                                                               (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x1011800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0xbU)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x33800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0x31800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x2031800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x2831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x3031800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x3831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x1039800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x839800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelf->my_DE_stage__DOT____Vxrand_h8d967414__0;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = ((
                                                   (0x22U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((3U 
                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | ((4U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                               | ((5U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                  | ((6U 
                                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                     | ((7U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                        | ((8U 
                                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((9U 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | ((0xaU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xbU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xcU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xeU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x14U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x15U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x16U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x17U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x19U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x12U))));
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = vlSelf->my_DE_stage__DOT____Vxrand_h8d9668fa__0;
    if ((((((((((((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0xaU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0xbU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if ((((((((((((0x22U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | (0x23U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (0xcU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0xdU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0xeU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0xfU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x10U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x11U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x17U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x1aU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vpipeline__ConstPool__TABLE_hedfdecc6_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vpipeline__ConstPool__TABLE_hca12deac_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__3(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__3\n"); );
    // Body
    vlSelf->__PVT__from_DE_to_FE = ((((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                      & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                         >> (0x1fU 
                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x1aU)))) 
                                     | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                        & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x1fU 
                                               & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 1U) 
                                                  | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x1fU)))))) 
                                    | (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__from_AGEX_to_DE));
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__4(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__4\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v0;
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__regs__v32;
    __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__regs__v32;
    __Vdlyvval__my_DE_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v32;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x25U)))) {
        __Vdlyvval__my_DE_stage__DOT__regs__v32 = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        __Vdlyvset__my_DE_stage__DOT__regs__v32 = 1U;
        __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 
            (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x20U)));
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xaU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xbU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xcU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xdU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xeU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xfU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v32) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vdlyvdim0__my_DE_stage__DOT__regs__v32] 
            = __Vdlyvval__my_DE_stage__DOT__regs__v32;
    }
}
