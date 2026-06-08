// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline_pipeline.h"

extern const VlWide<23>/*735:0*/ Vpipeline__ConstPool__CONST_hdc87810a_0;

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(23, Vpipeline__ConstPool__CONST_hdc87810a_0)
                 ,  &(vlSelf->__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    vlSelf->my_DE_stage__DOT____Vxrand_h8d967414__0 
        = (7U & VL_RAND_RESET_I(3));
    vlSelf->my_DE_stage__DOT____Vxrand_h8d9668fa__0 
        = (0xfU & VL_RAND_RESET_I(4));
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(23, Vpipeline__ConstPool__CONST_hdc87810a_0)
                 ,  &(vlSelf->__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_hedfdecc6_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_hca12deac_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
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
    // Body
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h7117cccf__0 
        = (((- (IData)((1U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                              >> 0xaU)))) << 0xbU) 
           | (0x7ffU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                         << 1U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 0x1fU))));
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

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__from_DE_to_FE = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(172, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__bhr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__pht[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__btb_target[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__btb_tag[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->__PVT__my_FE_stage__DOT__btb_valid = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__my_FE_stage__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pht_index_FE = VL_RAND_RESET_I(10);
    vlSelf->__PVT__my_FE_stage__DOT__pht_used_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__next_pc_FE = VL_RAND_RESET_I(32);
    vlSelf->my_DE_stage__DOT____Vxrand_h8d967414__0 = VL_RAND_RESET_I(3);
    vlSelf->my_DE_stage__DOT____Vxrand_h8d9668fa__0 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(284, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_RAND_RESET_I(32);
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h7117cccf__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(173, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    VL_RAND_RESET_W(172, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0;
}
