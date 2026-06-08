// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline_AGEX_STAGE.h"
#include "Vpipeline__Syms.h"

VL_INLINE_OPT void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__0(Vpipeline_AGEX_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__0\n"); );
    // Init
    QData/*63:0*/ __Vdly__bp_branch_count;
    __Vdly__bp_branch_count = 0;
    QData/*63:0*/ __Vdly__bp_correct_count;
    __Vdly__bp_correct_count = 0;
    // Body
    __Vdly__bp_branch_count = vlSelf->bp_branch_count;
    __Vdly__bp_correct_count = vlSelf->bp_correct_count;
    if (vlSymsp->TOP.reset) {
        __Vdly__bp_branch_count = 0ULL;
        __Vdly__bp_correct_count = 0ULL;
    } else if (vlSelf->__PVT__btb_update_en_AGEX) {
        __Vdly__bp_branch_count = (1ULL + vlSelf->bp_branch_count);
        if (((~ (IData)(vlSelf->__PVT__from_AGEX_to_DE)) 
             & (IData)(vlSelf->__PVT__btb_update_en_AGEX))) {
            __Vdly__bp_correct_count = (1ULL + vlSelf->bp_correct_count);
        }
    }
    vlSelf->bp_branch_count = __Vdly__bp_branch_count;
    vlSelf->bp_correct_count = __Vdly__bp_correct_count;
}

VL_INLINE_OPT void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__1(Vpipeline_AGEX_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__AGEX_latch[0U] = 0U;
        vlSelf->__PVT__AGEX_latch[1U] = 0U;
        vlSelf->__PVT__AGEX_latch[2U] = 0U;
        vlSelf->__PVT__AGEX_latch[3U] = 0U;
        vlSelf->__PVT__AGEX_latch[4U] = 0U;
        vlSelf->__PVT__AGEX_latch[5U] = 0U;
    } else {
        vlSelf->__PVT__AGEX_latch[0U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__memaddr_AGEX)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__aluout_AGEX)))) 
                                          << 8U) | 
                                         (0xffU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0xbU)));
        vlSelf->__PVT__AGEX_latch[1U] = (((IData)((
                                                   ((QData)((IData)(vlSelf->__PVT__memaddr_AGEX)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->__PVT__aluout_AGEX)))) 
                                          >> 0x18U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->__PVT__memaddr_AGEX)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->__PVT__aluout_AGEX))) 
                                                     >> 0x20U)) 
                                            << 8U));
        vlSelf->__PVT__AGEX_latch[2U] = (((IData)((0x3fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                       << 0xbU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                         >> 0x15U)))) 
                                          << 8U) | 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->__PVT__memaddr_AGEX)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__aluout_AGEX))) 
                                                   >> 0x20U)) 
                                          >> 0x18U));
        vlSelf->__PVT__AGEX_latch[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           << 0x13U) 
                                          | (0x7c000U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                >> 0xdU))) 
                                         | (((IData)(
                                                     (0x3fffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                          << 0xbU) 
                                                         | ((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                            >> 0x15U)))) 
                                             >> 0x18U) 
                                            | ((IData)(
                                                       ((0x3fffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                             << 0xbU) 
                                                            | ((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                               >> 0x15U))) 
                                                        >> 0x20U)) 
                                               << 8U)));
        vlSelf->__PVT__AGEX_latch[4U] = ((0x3fffU & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0xdU)) 
                                         | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             << 0x13U) 
                                            | (0x7c000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xdU))));
        vlSelf->__PVT__AGEX_latch[5U] = ((0x3fffU & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                           >> 0xdU)) 
                                         | (0x4000U 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                               >> 0xdU)));
    }
}

VL_INLINE_OPT void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__2(Vpipeline_AGEX_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__2\n"); );
    // Init
    IData/*31:0*/ __VdfgExtracted_hf574367f__0;
    __VdfgExtracted_hf574367f__0 = 0;
    IData/*31:0*/ __VdfgExtracted_h671d3824__0;
    __VdfgExtracted_h671d3824__0 = 0;
    // Body
    vlSelf->__PVT__btb_update_en_AGEX = (IData)(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  >> 0x1bU) 
                                                 & (0U 
                                                    != 
                                                    (0x180000U 
                                                     & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]))));
    vlSelf->__VdfgExtracted_hd1356386__0 = VL_LTS_III(32, 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0xbU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x15U)), 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0xbU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x15U)));
    vlSelf->__VdfgExtracted_h7b65b0e5__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              << 0xbU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x15U)) 
                                            < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0xbU) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x15U)));
    __VdfgExtracted_h671d3824__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      << 5U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                >> 0x1bU)) 
                                    + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xbU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x15U)));
    __VdfgExtracted_hf574367f__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      << 0xbU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x15U)) 
                                    + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xbU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x15U)));
    vlSelf->__PVT__actual_taken_AGEX = (1U & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x13U) 
                                              | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x14U) 
                                                 & ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x15U)))
                                                     ? 
                                                    (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x15U)) 
                                                     == 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0x15U)))
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                          >> 0x15U)))
                                                      ? 
                                                     (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0xbU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x15U)) 
                                                      != 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0xbU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x15U)))
                                                      : 
                                                     ((0x1eU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                           >> 0x15U)))
                                                       ? (IData)(vlSelf->__VdfgExtracted_hd1356386__0)
                                                       : 
                                                      ((0x1fU 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                            >> 0x15U)))
                                                        ? 
                                                       VL_GTES_III(32, 
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                     << 0xbU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                       >> 0x15U)), 
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                     << 0xbU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                       >> 0x15U)))
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                             >> 0x15U)))
                                                         ? (IData)(vlSelf->__VdfgExtracted_h7b65b0e5__0)
                                                         : 
                                                        ((0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                              >> 0x15U))) 
                                                         && (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                               << 0xbU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                 >> 0x15U)) 
                                                             >= 
                                                             ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               << 0xbU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                 >> 0x15U))))))))))));
    if ((1U & (~ ((((((((1U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U))) 
                        | (2U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))) 
                       | (3U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))) 
                      | (4U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U)))) 
                     | (5U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))) 
                    | (6U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) 
                   | (7U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U)))) 
                  | (8U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     >> 0x15U))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x15U))) 
                            | (0xaU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x15U)))) 
                           | (0xbU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x15U)))) 
                          | (0xcU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                               >> 0x15U)))) 
                         | (0xdU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x15U)))) 
                        | (0xeU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x15U)))) 
                       | (0xfU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) 
                      | (0x10U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U))))))) {
            if (((((((((0x11U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U))) 
                       | (0x12U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x15U)))) 
                      | (0x13U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) 
                     | (0x14U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))) 
                    | (0x15U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))) 
                   | (0x16U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U)))) 
                  | ((0x19U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U))) 
                     || (0x1bU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U))))) 
                 | (0x17U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U))))) {
                if ((0x11U != (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))) {
                    if ((0x12U != (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) {
                        if ((0x13U != (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                >> 0x15U)))) {
                            if ((0x14U != (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) {
                                if ((0x15U != (0x3fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x15U)))) {
                                    if ((0x16U != (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x15U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x15U))) 
                                                    || (0x1bU 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                            >> 0x15U))))))) {
                                            vlSelf->__PVT__memaddr_AGEX 
                                                = __VdfgExtracted_hf574367f__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__memaddr_AGEX = ((0x18U 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x15U)))
                                                ? __VdfgExtracted_hf574367f__0
                                                : 0U);
            }
        }
    }
    if (((((((((1U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x15U))) | (2U == 
                                               (0x3fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x15U)))) 
              | (3U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 >> 0x15U)))) | (4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x15U)))) 
            | (5U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               >> 0x15U)))) | (6U == 
                                               (0x3fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x15U)))) 
          | (7U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                             >> 0x15U)))) | (8U == 
                                             (0x3fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x15U))))) {
        vlSelf->__PVT__aluout_AGEX = ((1U == (0x3fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x15U)))
                                       ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xbU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U)) 
                                          + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0xbU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x15U)))
                                       : ((2U == (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x15U)))
                                           ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 0xbU) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x15U)) 
                                              - ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0xbU) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x15U)))
                                           : ((3U == 
                                               (0x3fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x15U)))
                                               ? ((
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    << 0xbU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x15U)) 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0xbU) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 0x15U)))
                                               : ((4U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x15U)))
                                                   ? 
                                                  (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     << 0xbU) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x15U)) 
                                                   | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0x15U)))
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0x15U)))
                                                    ? 
                                                   (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      << 0xbU) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        >> 0x15U)) 
                                                    ^ 
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0xbU) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 0x15U)))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x15U)))
                                                     ? 
                                                    ((IData)(vlSelf->__VdfgExtracted_hd1356386__0)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                          >> 0x15U)))
                                                      ? 
                                                     ((IData)(vlSelf->__VdfgExtracted_h7b65b0e5__0)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     VL_SHIFTRS_III(32,32,5, 
                                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                      << 0xbU) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                        >> 0x15U)), 
                                                                    (0x1fU 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                        >> 0x15U))))))))));
    } else if (((((((((9U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U))) 
                      | (0xaU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))) 
                     | (0xbU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))) 
                    | (0xcU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U)))) 
                   | (0xdU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))) 
                  | (0xeU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) 
                 | (0xfU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U)))) 
                | (0x10U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U))))) {
        vlSelf->__PVT__aluout_AGEX = ((9U == (0x3fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 >> 0x15U)))
                                       ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xbU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U)) 
                                          >> (0x1fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x15U)))
                                       : ((0xaU == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x15U)))
                                           ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 0xbU) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x15U)) 
                                              << (0x1fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x15U)))
                                           : ((0xbU 
                                               == (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      >> 0x15U)))
                                               ? VL_MULS_III(32, 
                                                             ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                               << 0xbU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                 >> 0x15U)), 
                                                             ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               << 0xbU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                 >> 0x15U)))
                                               : ((0xcU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                       >> 0x15U)))
                                                   ? __VdfgExtracted_hf574367f__0
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                        >> 0x15U)))
                                                    ? 
                                                   (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      << 0xbU) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        >> 0x15U)) 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 0xbU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x15U)))
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                         >> 0x15U)))
                                                     ? 
                                                    (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       << 0xbU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x15U)) 
                                                     | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         << 0xbU) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                           >> 0x15U)))
                                                     : 
                                                    ((0xfU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                          >> 0x15U)))
                                                      ? 
                                                     (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        << 0xbU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          >> 0x15U)) 
                                                      ^ 
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        << 0xbU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x15U)))
                                                      : 
                                                     (VL_LTS_III(32, 
                                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                   << 0xbU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                     >> 0x15U)), 
                                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                   << 0xbU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                     >> 0x15U)))
                                                       ? 1U
                                                       : 0U))))))));
    } else if (((((((((0x11U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U))) 
                      | (0x12U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))) 
                     | (0x13U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U)))) 
                    | (0x14U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x15U)))) 
                   | (0x15U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x15U)))) 
                  | (0x16U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U)))) 
                 | ((0x19U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U))) 
                    || (0x1bU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U))))) 
                | (0x17U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      >> 0x15U))))) {
        if ((0x11U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                >> 0x15U)))) {
            vlSelf->__PVT__aluout_AGEX = ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             << 0xbU) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x15U)) 
                                           < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               << 0xbU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x15U)))
                                           ? 1U : 0U);
        } else if ((0x12U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__aluout_AGEX = VL_SHIFTRS_III(32,32,5, 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          << 0xbU) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            >> 0x15U)), 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            >> 0x15U)));
        } else if ((0x13U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__aluout_AGEX = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xbU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U)) 
                                          >> (0x1fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x15U)));
        } else if ((0x14U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__aluout_AGEX = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            << 0xbU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x15U)) 
                                          << (0x1fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 >> 0x15U)));
        } else if ((0x15U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__aluout_AGEX = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           << 0xbU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x15U));
        } else if ((0x16U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                       >> 0x15U)))) {
            vlSelf->__PVT__aluout_AGEX = __VdfgExtracted_h671d3824__0;
        } else if (((0x19U == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U))) 
                    || (0x1bU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U))))) {
            vlSelf->__PVT__aluout_AGEX = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 5U) | 
                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x1bU));
        }
    } else {
        vlSelf->__PVT__aluout_AGEX = ((0x18U == (0x3fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x15U)))
                                       ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           << 0xbU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x15U))
                                       : 0U);
    }
    vlSelf->__PVT__br_target_AGEX = ((0x19U == (0x3fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x15U)))
                                      ? __VdfgExtracted_h671d3824__0
                                      : ((0x1aU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x15U)))
                                          ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              << 0xbU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x15U))
                                          : ((0x1bU 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x15U)))
                                              ? (0xfffffffeU 
                                                 & __VdfgExtracted_hf574367f__0)
                                              : ((0x100000U 
                                                  & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U])
                                                  ? __VdfgExtracted_h671d3824__0
                                                  : 
                                                 ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                   << 5U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                     >> 0x1bU))))));
    vlSelf->__PVT__resolved_next_pc_AGEX = ((IData)(vlSelf->__PVT__actual_taken_AGEX)
                                             ? vlSelf->__PVT__br_target_AGEX
                                             : ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x1bU)));
    vlSelf->__PVT__from_AGEX_to_DE = ((IData)(vlSelf->__PVT__btb_update_en_AGEX) 
                                      & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 0x15U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0xbU)) 
                                         != vlSelf->__PVT__resolved_next_pc_AGEX));
    vlSelf->__PVT__from_AGEX_to_FE[0U] = (((IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                       << 5U) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                         >> 0x1bU)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__br_target_AGEX)))) 
                                           << 0xeU) 
                                          | ((((IData)(vlSelf->__PVT__btb_update_en_AGEX) 
                                               & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]) 
                                              << 0xdU) 
                                             | ((0x1ff8U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__actual_taken_AGEX) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->__PVT__btb_update_en_AGEX) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__PVT__actual_taken_AGEX))))));
    vlSelf->__PVT__from_AGEX_to_FE[1U] = (((IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                       << 5U) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                         >> 0x1bU)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->__PVT__br_target_AGEX)))) 
                                           >> 0x12U) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                          << 5U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                            >> 0x1bU)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->__PVT__br_target_AGEX))) 
                                                      >> 0x20U)) 
                                             << 0xeU));
    vlSelf->__PVT__from_AGEX_to_FE[2U] = ((vlSelf->__PVT__resolved_next_pc_AGEX 
                                           << 0xfU) 
                                          | (((IData)(vlSelf->__PVT__btb_update_en_AGEX) 
                                              << 0xeU) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                             << 5U) 
                                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                               >> 0x1bU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->__PVT__br_target_AGEX))) 
                                                         >> 0x20U)) 
                                                >> 0x12U)));
    vlSelf->__PVT__from_AGEX_to_FE[3U] = (((IData)(vlSelf->__PVT__from_AGEX_to_DE) 
                                           << 0xfU) 
                                          | (vlSelf->__PVT__resolved_next_pc_AGEX 
                                             >> 0x11U));
}
