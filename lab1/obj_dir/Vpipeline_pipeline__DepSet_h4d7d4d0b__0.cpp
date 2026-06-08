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
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__inst_count_FE = 0;
    SData/*13:0*/ __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0;
    __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    __Vdlyvval__my_MEM_stage__DOT__dmem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__my_MEM_stage__DOT__dmem__v0;
    __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0;
    // Body
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
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
    __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = 0U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if ((1U & (~ (IData)(vlSelf->__PVT__from_AGEX_to_DE)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__from_DE_to_FE)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE);
            }
        }
        if (vlSelf->__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        } else if (vlSelf->__PVT__from_DE_to_FE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
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
        } else {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = ((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                            [(0x3fffU 
                                              & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))])) 
                            << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__imem
                                             [(0x3fffU 
                                               & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                  >> 2U))])) 
                             << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                           >> 0x20U));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 1U;
        }
        if (((~ (IData)(vlSelf->__PVT__from_DE_to_FE)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 7U)))));
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
    if ((0x40U & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])) {
        __Vdlyvval__my_MEM_stage__DOT__dmem__v0 = (
                                                   ((~ vlSelf->__PVT__my_MEM_stage__DOT__store_mask_MEM) 
                                                    & vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM) 
                                                   | vlSelf->__PVT__my_MEM_stage__DOT__store_data_aligned_MEM);
        __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 
            (0x3fffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                        >> 0xaU));
    }
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    if (__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
}

extern const VlWide<8>/*255:0*/ Vpipeline__ConstPool__CONST_hee2f1268_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vpipeline__ConstPool__TABLE_h1c5560ad_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vpipeline__ConstPool__TABLE_hd262ec57_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline__ConstPool__TABLE_h05ab1873_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline__ConstPool__TABLE_h5e98038d_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h2475eb3f__0;
    my_DE_stage__DOT____VdfgTmp_h2475eb3f__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hd134232b__0;
    my_DE_stage__DOT____VdfgTmp_hd134232b__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_hca4719a4__0;
    my_DE_stage__DOT____VdfgTmp_hca4719a4__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h20e5acf0__0;
    my_DE_stage__DOT____VdfgTmp_h20e5acf0__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h671d3824__0;
    my_AGEX_stage__DOT____VdfgExtracted_h671d3824__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgTmp_he7eac30e__0;
    my_AGEX_stage__DOT____VdfgTmp_he7eac30e__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgTmp_he7d7f008__0;
    my_AGEX_stage__DOT____VdfgTmp_he7d7f008__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_18;
    // Body
    __Vtemp_5[0U] = (IData)((((QData)((IData)(((0x25U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                    >> 8U)))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__my_MEM_stage__DOT__byte_data_MEM) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->__PVT__my_MEM_stage__DOT__byte_data_MEM))
                                                : (
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                        >> 8U)))
                                                    ? (IData)(vlSelf->__PVT__my_MEM_stage__DOT__byte_data_MEM)
                                                    : 
                                                   ((0x26U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                         >> 8U)))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__my_MEM_stage__DOT__halfword_data_MEM) 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->__PVT__my_MEM_stage__DOT__halfword_data_MEM))
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                          >> 8U)))
                                                      ? (IData)(vlSelf->__PVT__my_MEM_stage__DOT__halfword_data_MEM)
                                                      : vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM)))))) 
                              << 7U) | (QData)((IData)(
                                                       ((0x40U 
                                                         & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                            >> 1U)) 
                                                        | (0x3fU 
                                                           & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]))))));
    __Vtemp_5[1U] = (((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                       << 0x1fU) | (0x7fffff80U & (
                                                   vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                   >> 1U))) 
                     | (IData)(((((QData)((IData)((
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                        >> 8U)))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__my_MEM_stage__DOT__byte_data_MEM) 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__PVT__my_MEM_stage__DOT__byte_data_MEM))
                                                    : 
                                                   ((0x27U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                         >> 8U)))
                                                     ? (IData)(vlSelf->__PVT__my_MEM_stage__DOT__byte_data_MEM)
                                                     : 
                                                    ((0x26U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                          >> 8U)))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__my_MEM_stage__DOT__halfword_data_MEM) 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelf->__PVT__my_MEM_stage__DOT__halfword_data_MEM))
                                                      : 
                                                     ((0x28U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                           >> 8U)))
                                                       ? (IData)(vlSelf->__PVT__my_MEM_stage__DOT__halfword_data_MEM)
                                                       : vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM)))))) 
                                  << 7U) | (QData)((IData)(
                                                           ((0x40U 
                                                             & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 1U)) 
                                                            | (0x3fU 
                                                               & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]))))) 
                                >> 0x20U)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] = 0U;
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] = 0U;
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = __Vtemp_5[0U];
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = __Vtemp_5[1U];
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = ((0x7fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                         >> 1U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     << 0x1fU) | (0x7fffff80U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                     >> 1U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x7fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                         >> 1U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                     << 0x1fU) | (0x7fffff80U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                     >> 1U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x7fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                         >> 1U)) | ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                     << 0x1fU) | (0x7fffff80U 
                                                  & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                     >> 1U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
            = ((0x7fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                         >> 1U)) | (0x3f80U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                               >> 1U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = ((0xffffff00U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                               << 1U)) | (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                           << 7U) | 
                                          (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__wr_mem_AGEX) 
                                            << 6U) 
                                           | (0x3fU 
                                              & vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U]))));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = (((0xfeU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                          << 1U)) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x1fU)) | ((IData)(
                                                           (((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                                                                | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                                                                ? vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                                                : 0U))))) 
                                                   << 8U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                          << 0x20U) | (QData)((IData)(
                                                      (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                                        | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                                        ? vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                        : 0U))))) 
                >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                                                      | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                                                      ? vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                                      : 0U)))) 
                                      >> 0x20U)) << 8U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                             vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                               >> 7U)))) 
                << 8U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX)) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__rd_mem_AGEX) 
                                                                   | (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__wr_mem_AGEX))
                                                                   ? vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                                   : 0U)))) 
                                   >> 0x20U)) >> 0x18U));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((0xffffc000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 1U)) | (((IData)(
                                                   (0x3fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                          >> 7U)))) 
                                           >> 0x18U) 
                                          | ((IData)(
                                                     ((0x3fffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                           << 0x19U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                             >> 7U))) 
                                                      >> 0x20U)) 
                                             << 8U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
            = (((0x3ffeU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                            << 1U)) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x1fU)) | 
               (0xffffc000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 1U)));
        vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
            = (((0x3ffeU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            << 1U)) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                       >> 0x1fU)) | 
               (0x4000U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                           << 1U)));
    }
    if ((0x29U == (0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                            >> 8U)))) {
        vlSelf->__PVT__my_MEM_stage__DOT__store_mask_MEM 
            = ((IData)(0xffU) << (0x18U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 5U)));
        vlSelf->__PVT__my_MEM_stage__DOT__store_data_aligned_MEM 
            = ((0xffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                         >> 8U)) << (0x18U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              >> 5U)));
    } else if ((0x2aU == (0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   >> 8U)))) {
        vlSelf->__PVT__my_MEM_stage__DOT__store_mask_MEM 
            = ((IData)(0xffffU) << (0x10U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 5U)));
        vlSelf->__PVT__my_MEM_stage__DOT__store_data_aligned_MEM 
            = ((0xffffU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                           >> 8U)) << (0x10U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                >> 5U)));
    } else if ((0x18U == (0x3fU & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   >> 8U)))) {
        vlSelf->__PVT__my_MEM_stage__DOT__store_mask_MEM = 0xffffffffU;
        vlSelf->__PVT__my_MEM_stage__DOT__store_data_aligned_MEM 
            = ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                << 0x18U) | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                             >> 8U));
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__store_mask_MEM = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__store_data_aligned_MEM 
            = ((vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                << 0x18U) | (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                             >> 8U));
    }
    vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM = 
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[(0x3fffU 
                                                & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                   >> 0xaU))];
    __Vtemp_18[0U] = ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                       ? (((- (IData)((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x1fU))) 
                           << 0xbU) | (0x7ffU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x14U)))
                       : ((5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                           ? (((- (IData)((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 7U)))))
                           : ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? (((- (IData)((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x1fU))) 
                                   << 0xbU) | ((0x7e0U 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 7U))))
                               : ((3U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? (0xfffff000U & 
                                      vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])
                                   : ((2U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                                             | ((0x800U 
                                                 & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x14U)))))
                                       : 0U)))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[7U];
    } else if (vlSelf->__PVT__from_DE_to_FE) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hee2f1268_0[7U];
    } else {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = ((__Vtemp_18[0U] << 7U) | (((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           & ((0x1cU 
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
                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))))) 
                                          << 6U) | 
                                         (((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                           << 5U) | 
                                          (0x1fU & 
                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 7U)))));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = ((__Vtemp_18[0U] >> 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__regs
                                            [(0x1fU 
                                              & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x14U))] 
                                            << 7U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__regs
                [(0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                           >> 0x14U))] >> 0x19U) | 
               ((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->__PVT__my_DE_stage__DOT__regs
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0xfU))])))) 
                << 7U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->__PVT__my_DE_stage__DOT__regs
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0xfU))])))) 
                >> 0x19U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                    [
                                                                    (0x1fU 
                                                                     & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0xfU))]))) 
                                      >> 0x20U)) << 7U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                << 0xdU) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                             << 7U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                   [
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0xfU))]))) 
                                                >> 0x20U)) 
                                       >> 0x19U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                >> 0x13U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                             << 0xdU));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                >> 0x13U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                             << 0xdU));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                >> 0x13U) | (0x2000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0xdU)));
    }
    vlSelf->__PVT__my_MEM_stage__DOT__byte_data_MEM 
        = (0xffU & ((0U == (3U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                  >> 8U))) ? vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM
                     : ((1U == (3U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      >> 8U))) ? (vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM 
                                                  >> 8U)
                         : ((2U == (3U & (vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                          >> 8U))) ? 
                            (vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM 
                             >> 0x10U) : (vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM 
                                          >> 0x18U)))));
    vlSelf->__PVT__my_MEM_stage__DOT__halfword_data_MEM 
        = (0xffffU & ((0x200U & vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch[1U])
                       ? (vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM 
                          >> 0x10U) : vlSelf->__PVT__my_MEM_stage__DOT__rd_val_MEM));
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
    my_DE_stage__DOT____VdfgTmp_h2475eb3f__0 = (IData)(
                                                       (0x33U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgTmp_hd134232b__0 = (IData)(
                                                       (0x5033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgTmp_hca4719a4__0 = (IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0xfe007000U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgTmp_h20e5acf0__0 = (IData)(
                                                       (0x5013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])));
    vlSelf->__PVT__my_AGEX_stage__DOT__rd_mem_AGEX 
        = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            >> 0xdU) & ((0x25U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U))) 
                        | ((0x26U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 7U))) 
                           | ((0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U))) 
                              | ((0x27U == (0x3fU & 
                                            (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 7U))) 
                                 | (0x28U == (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 7U))))))));
    vlSelf->__PVT__my_AGEX_stage__DOT__wr_mem_AGEX 
        = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            >> 0xdU) & ((0x29U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U))) 
                        | ((0x2aU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 7U))) 
                           | (0x18U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 7U))))));
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                          >> 7U)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 0x19U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 7U)));
    my_AGEX_stage__DOT____VdfgExtracted_h671d3824__0 
        = (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
             << 0x13U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                          >> 0xdU)) + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0x19U) | 
                                       (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 7U)));
    vlSelf->__PVT__my_AGEX_stage__DOT__is_branch_AGEX 
        = ((0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 7U))) | ((0x1dU == 
                                            (0x3fU 
                                             & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 7U))) 
                                           | ((0x1eU 
                                               == (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U))) 
                                              | ((0x1fU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U))) 
                                                 | ((0x20U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 7U))) 
                                                    | (0x21U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 7U))))))));
    my_AGEX_stage__DOT____VdfgTmp_he7eac30e__0 = VL_LTS_III(32, 
                                                            ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              << 0x19U) 
                                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                >> 7U)), 
                                                            ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              << 0x19U) 
                                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 7U)));
    my_AGEX_stage__DOT____VdfgTmp_he7d7f008__0 = ((
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x19U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 7U)) 
                                                  < 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x19U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 7U)));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h2475eb3f__0) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x19U)))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h2475eb3f__0) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x19U)))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          (0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           (0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            (0x4033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             (0x2033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              (0x3033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_hd134232b__0) 
                                                        & (0x20U 
                                                           == 
                                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x19U)))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_hd134232b__0) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x19U)))
                                                         ? 9U
                                                         : 
                                                        (((0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                          & (IData)(my_DE_stage__DOT____VdfgTmp_hca4719a4__0))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h2475eb3f__0) 
                                                           & (1U 
                                                              == 
                                                              (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x19U)))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x13U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x7013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x6013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x4013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x2013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x3013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h20e5acf0__0) 
                                                                  & (0x20U 
                                                                     == 
                                                                     (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x19U)))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_h20e5acf0__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x19U)))
                                                                   ? 0x13U
                                                                   : 
                                                                  (((0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                    & (IData)(my_DE_stage__DOT____VdfgTmp_hca4719a4__0))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (3U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                       ? 0x25U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                        ? 0x26U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x27U
                                                                          : 
                                                                         ((IData)(
                                                                                (0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                           ? 0x28U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x18U
                                                                            : 
                                                                           ((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x29U
                                                                             : 
                                                                            ((IData)(
                                                                                (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x2aU
                                                                              : 
                                                                             ((0x6fU 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U]))
                                                                               ? 0x19U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x1bU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x6063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x2bU))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX 
        = (((((((((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 7U))) | (2U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 7U)))) 
                 | (3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 7U)))) | (4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 7U)))) 
               | (5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 7U)))) | (6U == 
                                               (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 7U)))) 
             | (7U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 7U)))) | (8U == 
                                             (0x3fU 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 7U))))
            ? ((1U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                >> 7U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x19U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 7U)) 
                                            + ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x19U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 7U)))
                : ((2U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 7U))) ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x19U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 7U)) 
                                                - (
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x19U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 7U)))
                    : ((3U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 7U))) ? 
                       (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                          << 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 7U)) & ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 7U)))
                        : ((4U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))
                            ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 7U)) 
                               | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 7U)))
                            : ((5U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 7U)))
                                ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 7U)) 
                                   ^ ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0x19U) | 
                                      (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 7U))) : (
                                                   (6U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 7U)))
                                                    ? (IData)(my_AGEX_stage__DOT____VdfgTmp_he7eac30e__0)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 7U)))
                                                     ? (IData)(my_AGEX_stage__DOT____VdfgTmp_he7d7f008__0)
                                                     : 
                                                    VL_SHIFTRS_III(32,32,5, 
                                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                     << 0x19U) 
                                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                       >> 7U)), 
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                       >> 7U))))))))))
            : (((((((((9U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 7U))) | (0xaU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 7U)))) 
                     | (0xbU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 7U)))) 
                    | (0xcU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 7U)))) 
                   | (0xdU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 7U)))) | 
                  (0xeU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 7U)))) | (0xfU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 7U)))) 
                | (0x10U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 7U)))) ? (
                                                   (9U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 7U)))
                                                    ? 
                                                   (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0x19U) 
                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 7U)) 
                                                    >> 
                                                    (0x1fU 
                                                     & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 7U)))
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 7U)))
                                                     ? 
                                                    (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0x19U) 
                                                      | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 7U)) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 7U)))
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          >> 7U)))
                                                      ? 
                                                     (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0x19U) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 7U)) 
                                                      * 
                                                      ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 0x19U) 
                                                       | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 7U)))
                                                      : 
                                                     ((0xcU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           >> 7U)))
                                                       ? vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                                       : 
                                                      ((0xdU 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            >> 7U)))
                                                        ? 
                                                       (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          << 0x19U) 
                                                         | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            >> 7U)) 
                                                        & ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            << 0x19U) 
                                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                              >> 7U)))
                                                        : 
                                                       ((0xeU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             >> 7U)))
                                                         ? 
                                                        (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           << 0x19U) 
                                                          | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             >> 7U)) 
                                                         | ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                             << 0x19U) 
                                                            | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                               >> 7U)))
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                              >> 7U)))
                                                          ? 
                                                         (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            << 0x19U) 
                                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              >> 7U)) 
                                                          ^ 
                                                          ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            << 0x19U) 
                                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                              >> 7U)))
                                                          : 
                                                         VL_LTS_III(32, 
                                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      << 0x19U) 
                                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                        >> 7U)), 
                                                                    ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                      << 0x19U) 
                                                                     | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                        >> 7U))))))))))
                : (((((((((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U))) 
                          | (0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 7U)))) 
                         | (0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 7U)))) 
                        | (0x14U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U)))) 
                       | (0x15U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 7U)))) 
                      | (0x16U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))) 
                     | (0x17U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 7U)))) 
                    | ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 7U))) 
                       || (0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 7U)))))
                    ? ((0x11U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 7U)))
                        ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 7U)) < 
                           ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                             << 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 7U))) : 
                       ((0x12U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))
                         ? VL_SHIFTRS_III(32,32,5, 
                                          ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x19U) 
                                           | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 7U)), 
                                          (0x1fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 7U)))
                         : ((0x13U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 7U)))
                             ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x19U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 7U)) 
                                >> (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 7U)))
                             : ((0x14U == (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))
                                 ? (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0x19U) | (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 7U)) 
                                    << (0x1fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 7U)))
                                 : ((0x15U == (0x3fU 
                                               & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 7U)))
                                     ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         << 0x19U) 
                                        | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 7U)) : 
                                    ((0x16U == (0x3fU 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 7U)))
                                      ? my_AGEX_stage__DOT____VdfgExtracted_h671d3824__0
                                      : ((0x17U == 
                                          (0x3fU & 
                                           (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 7U)))
                                          ? vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0
                                          : ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x13U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0xdU)))))))))
                    : 0U)));
    vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX 
        = ((0x1cU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               >> 7U))) ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xdU) 
                                           & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0x19U) 
                                               | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 7U)) 
                                              == ((
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 7U))))
            : ((0x1dU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 7U))) ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                >> 0xdU) 
                                               & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x19U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 7U)) 
                                                  != 
                                                  ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x19U) 
                                                   | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 7U))))
                : ((0x1eU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 7U))) ? (
                                                   (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xdU) 
                                                   & (IData)(my_AGEX_stage__DOT____VdfgTmp_he7eac30e__0))
                    : ((0x1fU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 7U)))
                        ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                            >> 0xdU) & VL_GTES_III(32, 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x19U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 7U)), 
                                                   ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x19U) 
                                                    | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 7U))))
                        : ((0x20U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 7U)))
                            ? ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                >> 0xdU) & (IData)(my_AGEX_stage__DOT____VdfgTmp_he7d7f008__0))
                            : ((0x21U == (0x3fU & (
                                                   vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 7U))) 
                               && ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                    >> 0xdU) & (((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x19U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 7U)) 
                                                >= 
                                                ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 0x19U) 
                                                 | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 7U))))))))));
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vpipeline__ConstPool__TABLE_h1c5560ad_0[__Vtableidx1];
    __Vtableidx2 = vlSelf->__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__writes_rd_instr 
        = Vpipeline__ConstPool__TABLE_hd262ec57_0[__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                     << 1U) | (1U & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U]));
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vpipeline__ConstPool__TABLE_h05ab1873_0
        [__Vtableidx3];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vpipeline__ConstPool__TABLE_h5e98038d_0
        [__Vtableidx3];
    vlSelf->__PVT__my_AGEX_stage__DOT__br_taken_AGEX = 0U;
    vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
        = ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            << 0x13U) | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                         >> 0xdU));
    if (((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__is_branch_AGEX) 
         & (IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_cond_AGEX))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__br_taken_AGEX = 1U;
        vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
            = my_AGEX_stage__DOT____VdfgExtracted_h671d3824__0;
    } else if ((0x19U == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 7U)))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__br_taken_AGEX 
            = (1U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                     >> 0xdU));
        vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
            = my_AGEX_stage__DOT____VdfgExtracted_h671d3824__0;
    } else if ((0x1bU == (0x3fU & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 7U)))) {
        vlSelf->__PVT__my_AGEX_stage__DOT__br_taken_AGEX 
            = (1U & (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
                     >> 0xdU));
        vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
            = (0xfffffffeU & vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hf574367f__0);
    }
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  & ((IData)(vlSelf->__PVT__my_DE_stage__DOT__writes_rd_instr) 
                                                     & (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 7U)))));
    vlSelf->__PVT__from_AGEX_to_DE = ((IData)(vlSelf->__PVT__my_AGEX_stage__DOT__br_taken_AGEX) 
                                      & (vlSelf->__PVT__my_AGEX_stage__DOT__br_target_AGEX 
                                         != ((vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x13U) 
                                             | (vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0xdU))));
    vlSelf->__PVT__from_DE_to_FE = ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     & (((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                         & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                            >> (0x1fU 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0xfU)))) 
                                        | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                           & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                              >> (0x1fU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x14U)))))) 
                                    | (IData)(vlSelf->__PVT__from_AGEX_to_DE));
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
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
