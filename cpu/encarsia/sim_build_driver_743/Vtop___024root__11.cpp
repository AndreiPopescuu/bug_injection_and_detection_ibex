// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_comb__TOP__81(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__81\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___Vfuncout_64;
    ::VlWide<4>/*116:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66;
    ::QData/*38:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___Vfuncout_64 = 0;
    VL_ZERO_W(117, __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[0U] 
        = ((0xfffc0000U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[0U]) 
           | ((((0x000001c0U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00185_) 
                                << 6U)) | ((0x00000038U 
                                            & ((::IData)(
                                                         (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00186_ 
                                                          >> 0x00000020U)) 
                                               << 3U)) 
                                           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q))) 
               << 9U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_q) 
                          << 8U) | ((0x00000038U & 
                                     (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_q__05b0__05d 
                                      << 3U)) | (7U 
                                                 & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_q))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[0U] 
        = ((0xf803ffffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[0U]) 
           | (((0x000001c0U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch1_q 
                               << 6U)) | ((0x00000038U 
                                           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                              << 3U)) 
                                          | (7U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00187_))) 
              << 0x00000012U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[0U] 
        = ((0x07ffffffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[0U]) 
           | (((0x000001c0U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                               << 6U)) | ((0x00000038U 
                                           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_q 
                                              << 3U)) 
                                          | (7U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_q))) 
              << 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[1U] 
        = ((0xfffffff0U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[1U]) 
           | (((0x000001c0U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                               << 6U)) | ((0x00000038U 
                                           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_q 
                                              << 3U)) 
                                          | (7U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_q))) 
              >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[1U] 
        = (0x0000000fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[1U]);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[2U] = 0U;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[3U] 
        = (0x001fffffU & (0x00020000U | ((((0x000001c0U 
                                            & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__hart_id_i 
                                               << 6U)) 
                                           | (7U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mscratch_q)) 
                                          << 0x0000000cU) 
                                         | ((((0x00000038U 
                                               & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_q 
                                                  << 3U)) 
                                              | (7U 
                                                 & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q)) 
                                             << 6U) 
                                            | ((0x00000038U 
                                                & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_q) 
                                                   << 3U)) 
                                               | (7U 
                                                  & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_q))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07057_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07056_[3U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___Vfuncout_64 
        = (7U & (((((((((1ULL == (1ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                        | (2ULL == (2ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                       | (4ULL == (4ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                      | (8ULL == (8ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                     | (0x0000000000000010ULL == (0x0000000000000010ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                    | (0x0000000000000020ULL == (0x0000000000000020ULL 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                   | (0x0000000000000040ULL == (0x0000000000000040ULL 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                  | (0x0000000000000080ULL == (0x0000000000000080ULL 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))
                  ? ((1ULL == (1ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U]
                      : ((2ULL == (2ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                          ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                              << 0x0000001dU) | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                 >> 3U))
                          : ((4ULL == (4ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                              ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                  << 0x0000001aU) | 
                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                  >> 6U)) : ((8ULL 
                                              == (8ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                              ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                  << 0x00000017U) 
                                                 | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                    >> 9U))
                                              : ((0x0000000000000010ULL 
                                                  == 
                                                  (0x0000000000000010ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                  ? 
                                                 ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                     >> 0x0000000cU))
                                                  : 
                                                 ((0x0000000000000020ULL 
                                                   == 
                                                   (0x0000000000000020ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                   ? 
                                                  ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                    << 0x00000011U) 
                                                   | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                      >> 0x0000000fU))
                                                   : 
                                                  ((0x0000000000000040ULL 
                                                    == 
                                                    (0x0000000000000040ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                    ? 
                                                   ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                     << 0x0000000eU) 
                                                    | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                       >> 0x00000012U))
                                                    : 
                                                   ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                     << 0x0000000bU) 
                                                    | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                       >> 0x00000015U)))))))))
                  : (((((((((0x0000000000000100ULL 
                             == (0x0000000000000100ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                            | (0x0000000000000200ULL 
                               == (0x0000000000000200ULL 
                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                           | (0x0000000000000400ULL 
                              == (0x0000000000000400ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                          | (0x0000000000000800ULL 
                             == (0x0000000000000800ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                         | (0x0000000000001000ULL == 
                            (0x0000000000001000ULL 
                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                        | (0x0000000000002000ULL == 
                           (0x0000000000002000ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                       | (0x0000000000004000ULL == 
                          (0x0000000000004000ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                      | (0x0000000000008000ULL == (0x0000000000008000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))
                      ? ((0x0000000000000100ULL == 
                          (0x0000000000000100ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                          ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                              << 8U) | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                        >> 0x00000018U))
                          : ((0x0000000000000200ULL 
                              == (0x0000000000000200ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                              ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                  << 5U) | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                            >> 0x0000001bU))
                              : ((0x0000000000000400ULL 
                                  == (0x0000000000000400ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                  ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                      << 2U) | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[0U] 
                                                >> 0x0000001eU))
                                  : ((0x0000000000000800ULL 
                                      == (0x0000000000000800ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                      ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                          << 0x0000001fU) 
                                         | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                            >> 1U))
                                      : ((0x0000000000001000ULL 
                                          == (0x0000000000001000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                          ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                              << 0x0000001cU) 
                                             | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                >> 4U))
                                          : ((0x0000000000002000ULL 
                                              == (0x0000000000002000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                              ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                  << 0x00000019U) 
                                                 | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                    >> 7U))
                                              : ((0x0000000000004000ULL 
                                                  == 
                                                  (0x0000000000004000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                  ? 
                                                 ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                   << 0x00000016U) 
                                                  | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                     >> 0x0000000aU))
                                                  : 
                                                 ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                   << 0x00000013U) 
                                                  | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                     >> 0x0000000dU)))))))))
                      : (((((((((0x0000000000010000ULL 
                                 == (0x0000000000010000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                | (0x0000000000020000ULL 
                                   == (0x0000000000020000ULL 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                               | (0x0000000000040000ULL 
                                  == (0x0000000000040000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                              | (0x0000000000080000ULL 
                                 == (0x0000000000080000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                             | (0x0000000000100000ULL 
                                == (0x0000000000100000ULL 
                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                            | (0x0000000000200000ULL 
                               == (0x0000000000200000ULL 
                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                           | (0x0000000000400000ULL 
                              == (0x0000000000400000ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                          | (0x0000000000800000ULL 
                             == (0x0000000000800000ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))
                          ? ((0x0000000000010000ULL 
                              == (0x0000000000010000ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                              ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                  << 0x00000010U) | 
                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                  >> 0x00000010U)) : 
                             ((0x0000000000020000ULL 
                               == (0x0000000000020000ULL 
                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                               ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                   << 0x0000000dU) 
                                  | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                     >> 0x00000013U))
                               : ((0x0000000000040000ULL 
                                   == (0x0000000000040000ULL 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                   ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                       << 0x0000000aU) 
                                      | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                         >> 0x00000016U))
                                   : ((0x0000000000080000ULL 
                                       == (0x0000000000080000ULL 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                       ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                           << 7U) | 
                                          (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                           >> 0x00000019U))
                                       : ((0x0000000000100000ULL 
                                           == (0x0000000000100000ULL 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                           ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                               << 4U) 
                                              | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                 >> 0x0000001cU))
                                           : ((0x0000000000200000ULL 
                                               == (0x0000000000200000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                               ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                   << 1U) 
                                                  | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[1U] 
                                                     >> 0x0000001fU))
                                               : ((0x0000000000400000ULL 
                                                   == 
                                                   (0x0000000000400000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                   ? 
                                                  ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                    << 0x0000001eU) 
                                                   | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                      >> 2U))
                                                   : 
                                                  ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                    << 0x0000001bU) 
                                                   | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                      >> 5U)))))))))
                          : (((((((((0x0000000001000000ULL 
                                     == (0x0000000001000000ULL 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                    | (0x0000000002000000ULL 
                                       == (0x0000000002000000ULL 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                                   | (0x0000000004000000ULL 
                                      == (0x0000000004000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                                  | (0x0000000008000000ULL 
                                     == (0x0000000008000000ULL 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                                 | (0x0000000010000000ULL 
                                    == (0x0000000010000000ULL 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                                | (0x0000000020000000ULL 
                                   == (0x0000000020000000ULL 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                               | (0x0000000040000000ULL 
                                  == (0x0000000040000000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))) 
                              | (0x0000000080000000ULL 
                                 == (0x0000000080000000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))
                              ? ((0x0000000001000000ULL 
                                  == (0x0000000001000000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                  ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                      << 0x00000018U) 
                                     | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                        >> 8U)) : (
                                                   (0x0000000002000000ULL 
                                                    == 
                                                    (0x0000000002000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                    ? 
                                                   ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                     << 0x00000015U) 
                                                    | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                       >> 0x0000000bU))
                                                    : 
                                                   ((0x0000000004000000ULL 
                                                     == 
                                                     (0x0000000004000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                     ? 
                                                    ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                      << 0x00000012U) 
                                                     | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                        >> 0x0000000eU))
                                                     : 
                                                    ((0x0000000008000000ULL 
                                                      == 
                                                      (0x0000000008000000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                      ? 
                                                     ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                       << 0x0000000fU) 
                                                      | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                         >> 0x00000011U))
                                                      : 
                                                     ((0x0000000010000000ULL 
                                                       == 
                                                       (0x0000000010000000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                       ? 
                                                      ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                        << 0x0000000cU) 
                                                       | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                          >> 0x00000014U))
                                                       : 
                                                      ((0x0000000020000000ULL 
                                                        == 
                                                        (0x0000000020000000ULL 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                        ? 
                                                       ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                         << 9U) 
                                                        | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                           >> 0x00000017U))
                                                        : 
                                                       ((0x0000000040000000ULL 
                                                         == 
                                                         (0x0000000040000000ULL 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                         ? 
                                                        ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                          << 6U) 
                                                         | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                            >> 0x0000001aU))
                                                         : 
                                                        ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                          << 3U) 
                                                         | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[2U] 
                                                            >> 0x0000001dU)))))))))
                              : ((0x0000000100000000ULL 
                                  == (0x0000000100000000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                  ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U]
                                  : ((0x0000000200000000ULL 
                                      == (0x0000000200000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                      ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                          << 0x0000001dU) 
                                         | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                            >> 3U))
                                      : ((0x0000000400000000ULL 
                                          == (0x0000000400000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                          ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                              << 0x0000001aU) 
                                             | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                >> 6U))
                                          : ((0x0000000800000000ULL 
                                              == (0x0000000800000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                              ? ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                  << 0x00000017U) 
                                                 | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                    >> 9U))
                                              : ((0x0000001000000000ULL 
                                                  == 
                                                  (0x0000001000000000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                  ? 
                                                 ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                   << 0x00000014U) 
                                                  | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                     >> 0x0000000cU))
                                                  : 
                                                 ((0x0000002000000000ULL 
                                                   == 
                                                   (0x0000002000000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                   ? 
                                                  ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                    << 0x00000011U) 
                                                   | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                      >> 0x0000000fU))
                                                   : 
                                                  ((0x0000004000000000ULL 
                                                    == 
                                                    (0x0000004000000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))
                                                    ? 
                                                   ((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                     << 0x0000000eU) 
                                                    | (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___b_66[3U] 
                                                       >> 0x00000012U))
                                                    : 0U))))))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_Q((((::QData)((::IData)(
                                                                ((((((0x0000004000000000ULL 
                                                                      == 
                                                                      (0x0000004000000000ULL 
                                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                     << 3U) 
                                                                    | ((0x0000002000000000ULL 
                                                                        == 
                                                                        (0x0000002000000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                       << 2U)) 
                                                                   | (((0x0000001000000000ULL 
                                                                        == 
                                                                        (0x0000001000000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                       << 1U) 
                                                                      | (0x0000000800000000ULL 
                                                                         == 
                                                                         (0x0000000800000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                  << 3U) 
                                                                 | (((0x0000000400000000ULL 
                                                                      == 
                                                                      (0x0000000400000000ULL 
                                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                     << 2U) 
                                                                    | (((0x0000000200000000ULL 
                                                                         == 
                                                                         (0x0000000200000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                        << 1U) 
                                                                       | (0x0000000100000000ULL 
                                                                          == 
                                                                          (0x0000000100000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))))))) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(
                                                                 (((((((((0x0000000080000000ULL 
                                                                          == 
                                                                          (0x0000000080000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                         << 3U) 
                                                                        | ((0x0000000040000000ULL 
                                                                            == 
                                                                            (0x0000000040000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                           << 2U)) 
                                                                       | (((0x0000000020000000ULL 
                                                                            == 
                                                                            (0x0000000020000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                           << 1U) 
                                                                          | (0x0000000010000000ULL 
                                                                             == 
                                                                             (0x0000000010000000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                      << 0x0000000cU) 
                                                                     | (((((0x0000000008000000ULL 
                                                                            == 
                                                                            (0x0000000008000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                           << 3U) 
                                                                          | ((0x0000000004000000ULL 
                                                                              == 
                                                                              (0x0000000004000000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                             << 2U)) 
                                                                         | (((0x0000000002000000ULL 
                                                                              == 
                                                                              (0x0000000002000000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                             << 1U) 
                                                                            | (0x0000000001000000ULL 
                                                                               == 
                                                                               (0x0000000001000000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                        << 8U)) 
                                                                    | ((((((0x0000000000800000ULL 
                                                                            == 
                                                                            (0x0000000000800000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                           << 3U) 
                                                                          | ((0x0000000000400000ULL 
                                                                              == 
                                                                              (0x0000000000400000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                             << 2U)) 
                                                                         | (((0x0000000000200000ULL 
                                                                              == 
                                                                              (0x0000000000200000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                             << 1U) 
                                                                            | (0x0000000000100000ULL 
                                                                               == 
                                                                               (0x0000000000100000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                        << 4U) 
                                                                       | ((((0x0000000000080000ULL 
                                                                             == 
                                                                             (0x0000000000080000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000040000ULL 
                                                                               == 
                                                                               (0x0000000000040000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000020000ULL 
                                                                               == 
                                                                               (0x0000000000020000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                              << 1U) 
                                                                             | (0x0000000000010000ULL 
                                                                                == 
                                                                                (0x0000000000010000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))))) 
                                                                   << 0x00000010U) 
                                                                  | (((((((0x0000000000008000ULL 
                                                                           == 
                                                                           (0x0000000000008000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                          << 3U) 
                                                                         | ((0x0000000000004000ULL 
                                                                             == 
                                                                             (0x0000000000004000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                            << 2U)) 
                                                                        | (((0x0000000000002000ULL 
                                                                             == 
                                                                             (0x0000000000002000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                            << 1U) 
                                                                           | (0x0000000000001000ULL 
                                                                              == 
                                                                              (0x0000000000001000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                       << 0x0000000cU) 
                                                                      | (((((0x0000000000000800ULL 
                                                                             == 
                                                                             (0x0000000000000800ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000000400ULL 
                                                                               == 
                                                                               (0x0000000000000400ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000000200ULL 
                                                                               == 
                                                                               (0x0000000000000200ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                              << 1U) 
                                                                             | (0x0000000000000100ULL 
                                                                                == 
                                                                                (0x0000000000000100ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                         << 8U)) 
                                                                     | ((((((0x0000000000000080ULL 
                                                                             == 
                                                                             (0x0000000000000080ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000000040ULL 
                                                                               == 
                                                                               (0x0000000000000040ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000000020ULL 
                                                                               == 
                                                                               (0x0000000000000020ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                              << 1U) 
                                                                             | (0x0000000000000010ULL 
                                                                                == 
                                                                                (0x0000000000000010ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                         << 4U) 
                                                                        | ((((8ULL 
                                                                              == 
                                                                              (8ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                             << 3U) 
                                                                            | ((4ULL 
                                                                                == 
                                                                                (4ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                               << 2U)) 
                                                                           | (((2ULL 
                                                                                == 
                                                                                (2ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                               << 1U) 
                                                                              | (1ULL 
                                                                                == 
                                                                                (1ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))))))))))))))) {
        if ((0ULL != (((::QData)((::IData)(((((((0x0000004000000000ULL 
                                                 == 
                                                 (0x0000004000000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                << 3U) 
                                               | ((0x0000002000000000ULL 
                                                   == 
                                                   (0x0000002000000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                  << 2U)) 
                                              | (((0x0000001000000000ULL 
                                                   == 
                                                   (0x0000001000000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                  << 1U) 
                                                 | (0x0000000800000000ULL 
                                                    == 
                                                    (0x0000000800000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                             << 3U) 
                                            | (((0x0000000400000000ULL 
                                                 == 
                                                 (0x0000000400000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                << 2U) 
                                               | (((0x0000000200000000ULL 
                                                    == 
                                                    (0x0000000200000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                   << 1U) 
                                                  | (0x0000000100000000ULL 
                                                     == 
                                                     (0x0000000100000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67))))))) 
                       << 0x00000020U) | (::QData)((::IData)(
                                                             (((((((((0x0000000080000000ULL 
                                                                      == 
                                                                      (0x0000000080000000ULL 
                                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                     << 3U) 
                                                                    | ((0x0000000040000000ULL 
                                                                        == 
                                                                        (0x0000000040000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                       << 2U)) 
                                                                   | (((0x0000000020000000ULL 
                                                                        == 
                                                                        (0x0000000020000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                       << 1U) 
                                                                      | (0x0000000010000000ULL 
                                                                         == 
                                                                         (0x0000000010000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((0x0000000008000000ULL 
                                                                        == 
                                                                        (0x0000000008000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                       << 3U) 
                                                                      | ((0x0000000004000000ULL 
                                                                          == 
                                                                          (0x0000000004000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                         << 2U)) 
                                                                     | (((0x0000000002000000ULL 
                                                                          == 
                                                                          (0x0000000002000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                         << 1U) 
                                                                        | (0x0000000001000000ULL 
                                                                           == 
                                                                           (0x0000000001000000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                    << 8U)) 
                                                                | ((((((0x0000000000800000ULL 
                                                                        == 
                                                                        (0x0000000000800000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                       << 3U) 
                                                                      | ((0x0000000000400000ULL 
                                                                          == 
                                                                          (0x0000000000400000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                         << 2U)) 
                                                                     | (((0x0000000000200000ULL 
                                                                          == 
                                                                          (0x0000000000200000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                         << 1U) 
                                                                        | (0x0000000000100000ULL 
                                                                           == 
                                                                           (0x0000000000100000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                    << 4U) 
                                                                   | ((((0x0000000000080000ULL 
                                                                         == 
                                                                         (0x0000000000080000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000040000ULL 
                                                                           == 
                                                                           (0x0000000000040000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000020000ULL 
                                                                           == 
                                                                           (0x0000000000020000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                          << 1U) 
                                                                         | (0x0000000000010000ULL 
                                                                            == 
                                                                            (0x0000000000010000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))))) 
                                                               << 0x00000010U) 
                                                              | (((((((0x0000000000008000ULL 
                                                                       == 
                                                                       (0x0000000000008000ULL 
                                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                      << 3U) 
                                                                     | ((0x0000000000004000ULL 
                                                                         == 
                                                                         (0x0000000000004000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                        << 2U)) 
                                                                    | (((0x0000000000002000ULL 
                                                                         == 
                                                                         (0x0000000000002000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                        << 1U) 
                                                                       | (0x0000000000001000ULL 
                                                                          == 
                                                                          (0x0000000000001000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                   << 0x0000000cU) 
                                                                  | (((((0x0000000000000800ULL 
                                                                         == 
                                                                         (0x0000000000000800ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000000400ULL 
                                                                           == 
                                                                           (0x0000000000000400ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000000200ULL 
                                                                           == 
                                                                           (0x0000000000000200ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                          << 1U) 
                                                                         | (0x0000000000000100ULL 
                                                                            == 
                                                                            (0x0000000000000100ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                     << 8U)) 
                                                                 | ((((((0x0000000000000080ULL 
                                                                         == 
                                                                         (0x0000000000000080ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000000040ULL 
                                                                           == 
                                                                           (0x0000000000000040ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000000020ULL 
                                                                           == 
                                                                           (0x0000000000000020ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                          << 1U) 
                                                                         | (0x0000000000000010ULL 
                                                                            == 
                                                                            (0x0000000000000010ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))) 
                                                                     << 4U) 
                                                                    | ((((8ULL 
                                                                          == 
                                                                          (8ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                         << 3U) 
                                                                        | ((4ULL 
                                                                            == 
                                                                            (4ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                           << 2U)) 
                                                                       | (((2ULL 
                                                                            == 
                                                                            (2ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)) 
                                                                           << 1U) 
                                                                          | (1ULL 
                                                                             == 
                                                                             (1ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67)))))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:17086: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '39'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.cs_registers_i._12597_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',39,__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___s_67);
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 17086, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07058_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___12597___Vfuncout_64;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10223_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___07058_;
}

void Vtop___024root___nba_comb__TOP__82(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__82\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___Vfuncout_24;
    ::QData/*39:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26;
    ::QData/*39:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___Vfuncout_24 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___03573_ 
        = (((::QData)((::IData)((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__hart_id_i 
                                           >> 2U)) 
                                    | (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                                             >> 5U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_q 
                                                >> 0x00000010U)) 
                                              | (1U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mscratch_q 
                                                    >> 3U))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_q 
                                             >> 2U)) 
                                      | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q 
                                               >> 3U))) 
                                     << 2U) | ((2U 
                                                & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_q) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_q 
                                                     >> 3U))))))) 
            << 0x00000020U) | (::QData)((::IData)((
                                                   ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__irq_software_i) 
                                                    << 0x0000001fU) 
                                                   | (::IData)(
                                                               (4U 
                                                                | (((((4U 
                                                                       & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                                                                          >> 1U)) 
                                                                      | ((2U 
                                                                          & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_q 
                                                                             >> 2U)) 
                                                                         | (1U 
                                                                            & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_q 
                                                                               >> 3U)))) 
                                                                     << 8U) 
                                                                    | (((4U 
                                                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch1_q 
                                                                            >> 1U)) 
                                                                        | ((2U 
                                                                            & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                                               >> 2U)) 
                                                                           | (1U 
                                                                              & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00187_ 
                                                                                >> 3U)))) 
                                                                       << 5U)) 
                                                                   | ((((4U 
                                                                         & ((::IData)(
                                                                                (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00185_ 
                                                                                >> 3U)) 
                                                                            << 2U)) 
                                                                        | (2U 
                                                                           & ((::IData)(
                                                                                (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00186_ 
                                                                                >> 0x00000023U)) 
                                                                              << 1U))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_q__05b0__05d 
                                                                             >> 2U)) 
                                                                         | (1U 
                                                                            & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_q) 
                                                                               >> 3U)))))))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___03574_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___03573_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___Vfuncout_24 
        = (1U & (((((((((1ULL == (1ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                        | (2ULL == (2ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                       | (4ULL == (4ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                      | (8ULL == (8ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                     | (0x0000000000000010ULL == (0x0000000000000010ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                    | (0x0000000000000020ULL == (0x0000000000000020ULL 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                   | (0x0000000000000040ULL == (0x0000000000000040ULL 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                  | (0x0000000000000080ULL == (0x0000000000000080ULL 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))
                  ? ((1ULL == (1ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26)
                      : ((2ULL == (2ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                          ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                       >> 1U)) : ((4ULL 
                                                   == 
                                                   (4ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                >> 2U))
                                                   : 
                                                  ((8ULL 
                                                    == 
                                                    (8ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                 >> 3U))
                                                    : 
                                                   ((0x0000000000000010ULL 
                                                     == 
                                                     (0x0000000000000010ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                     ? (::IData)(
                                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                  >> 4U))
                                                     : 
                                                    ((0x0000000000000020ULL 
                                                      == 
                                                      (0x0000000000000020ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                      ? (::IData)(
                                                                  (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                   >> 5U))
                                                      : 
                                                     ((0x0000000000000040ULL 
                                                       == 
                                                       (0x0000000000000040ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                       ? (::IData)(
                                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                    >> 6U))
                                                       : (::IData)(
                                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                    >> 7U)))))))))
                  : (((((((((0x0000000000000100ULL 
                             == (0x0000000000000100ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                            | (0x0000000000000200ULL 
                               == (0x0000000000000200ULL 
                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                           | (0x0000000000000400ULL 
                              == (0x0000000000000400ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                          | (0x0000000000000800ULL 
                             == (0x0000000000000800ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                         | (0x0000000000001000ULL == 
                            (0x0000000000001000ULL 
                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                        | (0x0000000000002000ULL == 
                           (0x0000000000002000ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                       | (0x0000000000004000ULL == 
                          (0x0000000000004000ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                      | (0x0000000000008000ULL == (0x0000000000008000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))
                      ? ((0x0000000000000100ULL == 
                          (0x0000000000000100ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                          ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                       >> 8U)) : ((0x0000000000000200ULL 
                                                   == 
                                                   (0x0000000000000200ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                >> 9U))
                                                   : 
                                                  ((0x0000000000000400ULL 
                                                    == 
                                                    (0x0000000000000400ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                 >> 0x0aU))
                                                    : 
                                                   ((0x0000000000000800ULL 
                                                     == 
                                                     (0x0000000000000800ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                     ? (::IData)(
                                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                  >> 0x0bU))
                                                     : 
                                                    ((0x0000000000001000ULL 
                                                      == 
                                                      (0x0000000000001000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                      ? (::IData)(
                                                                  (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                   >> 0x0cU))
                                                      : 
                                                     ((0x0000000000002000ULL 
                                                       == 
                                                       (0x0000000000002000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                       ? (::IData)(
                                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                    >> 0x0dU))
                                                       : 
                                                      ((0x0000000000004000ULL 
                                                        == 
                                                        (0x0000000000004000ULL 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                        ? (::IData)(
                                                                    (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                     >> 0x0eU))
                                                        : (::IData)(
                                                                    (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                     >> 0x0fU)))))))))
                      : (((((((((0x0000000000010000ULL 
                                 == (0x0000000000010000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                | (0x0000000000020000ULL 
                                   == (0x0000000000020000ULL 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                               | (0x0000000000040000ULL 
                                  == (0x0000000000040000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                              | (0x0000000000080000ULL 
                                 == (0x0000000000080000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                             | (0x0000000000100000ULL 
                                == (0x0000000000100000ULL 
                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                            | (0x0000000000200000ULL 
                               == (0x0000000000200000ULL 
                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                           | (0x0000000000400000ULL 
                              == (0x0000000000400000ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                          | (0x0000000000800000ULL 
                             == (0x0000000000800000ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))
                          ? ((0x0000000000010000ULL 
                              == (0x0000000000010000ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                              ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                           >> 0x10U))
                              : ((0x0000000000020000ULL 
                                  == (0x0000000000020000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                  ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                               >> 0x11U))
                                  : ((0x0000000000040000ULL 
                                      == (0x0000000000040000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                      ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                   >> 0x12U))
                                      : ((0x0000000000080000ULL 
                                          == (0x0000000000080000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                          ? (::IData)(
                                                      (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                       >> 0x13U))
                                          : ((0x0000000000100000ULL 
                                              == (0x0000000000100000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                              ? (::IData)(
                                                          (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                           >> 0x14U))
                                              : ((0x0000000000200000ULL 
                                                  == 
                                                  (0x0000000000200000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                  ? (::IData)(
                                                              (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                               >> 0x15U))
                                                  : 
                                                 ((0x0000000000400000ULL 
                                                   == 
                                                   (0x0000000000400000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                >> 0x16U))
                                                   : (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                >> 0x17U)))))))))
                          : (((((((((0x0000000001000000ULL 
                                     == (0x0000000001000000ULL 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                    | (0x0000000002000000ULL 
                                       == (0x0000000002000000ULL 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                   | (0x0000000004000000ULL 
                                      == (0x0000000004000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                  | (0x0000000008000000ULL 
                                     == (0x0000000008000000ULL 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                 | (0x0000000010000000ULL 
                                    == (0x0000000010000000ULL 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                | (0x0000000020000000ULL 
                                   == (0x0000000020000000ULL 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                               | (0x0000000040000000ULL 
                                  == (0x0000000040000000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                              | (0x0000000080000000ULL 
                                 == (0x0000000080000000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))
                              ? ((0x0000000001000000ULL 
                                  == (0x0000000001000000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                  ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                               >> 0x18U))
                                  : ((0x0000000002000000ULL 
                                      == (0x0000000002000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                      ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                   >> 0x19U))
                                      : ((0x0000000004000000ULL 
                                          == (0x0000000004000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                          ? (::IData)(
                                                      (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                       >> 0x1aU))
                                          : ((0x0000000008000000ULL 
                                              == (0x0000000008000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                              ? (::IData)(
                                                          (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                           >> 0x1bU))
                                              : ((0x0000000010000000ULL 
                                                  == 
                                                  (0x0000000010000000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                  ? (::IData)(
                                                              (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                               >> 0x1cU))
                                                  : 
                                                 ((0x0000000020000000ULL 
                                                   == 
                                                   (0x0000000020000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                >> 0x1dU))
                                                   : 
                                                  ((0x0000000040000000ULL 
                                                    == 
                                                    (0x0000000040000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                 >> 0x1eU))
                                                    : (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                 >> 0x1fU)))))))))
                              : (((((((((0x0000000100000000ULL 
                                         == (0x0000000100000000ULL 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                        | (0x0000000200000000ULL 
                                           == (0x0000000200000000ULL 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                       | (0x0000000400000000ULL 
                                          == (0x0000000400000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                      | (0x0000000800000000ULL 
                                         == (0x0000000800000000ULL 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                     | (0x0000001000000000ULL 
                                        == (0x0000001000000000ULL 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                    | (0x0000002000000000ULL 
                                       == (0x0000002000000000ULL 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                   | (0x0000004000000000ULL 
                                      == (0x0000004000000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                  | (0x0000008000000000ULL 
                                     == (0x0000008000000000ULL 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))) 
                                 && (1U & ((0x0000000100000000ULL 
                                            == (0x0000000100000000ULL 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                            ? (::IData)(
                                                        (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                         >> 0x20U))
                                            : ((0x0000000200000000ULL 
                                                == 
                                                (0x0000000200000000ULL 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                ? (::IData)(
                                                            (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                             >> 0x21U))
                                                : (
                                                   (0x0000000400000000ULL 
                                                    == 
                                                    (0x0000000400000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                 >> 0x22U))
                                                    : 
                                                   ((0x0000000800000000ULL 
                                                     == 
                                                     (0x0000000800000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                     ? (::IData)(
                                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                  >> 0x23U))
                                                     : 
                                                    ((0x0000001000000000ULL 
                                                      == 
                                                      (0x0000001000000000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                      ? (::IData)(
                                                                  (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                   >> 0x24U))
                                                      : 
                                                     ((0x0000002000000000ULL 
                                                       == 
                                                       (0x0000002000000000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                       ? (::IData)(
                                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                    >> 0x25U))
                                                       : 
                                                      ((0x0000004000000000ULL 
                                                        == 
                                                        (0x0000004000000000ULL 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))
                                                        ? (::IData)(
                                                                    (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                     >> 0x26U))
                                                        : (::IData)(
                                                                    (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___b_26 
                                                                     >> 0x27U))))))))))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_Q((((::QData)((::IData)(
                                                                ((((((0x0000008000000000ULL 
                                                                      == 
                                                                      (0x0000008000000000ULL 
                                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                     << 3U) 
                                                                    | ((0x0000004000000000ULL 
                                                                        == 
                                                                        (0x0000004000000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                       << 2U)) 
                                                                   | (((0x0000002000000000ULL 
                                                                        == 
                                                                        (0x0000002000000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                       << 1U) 
                                                                      | (0x0000001000000000ULL 
                                                                         == 
                                                                         (0x0000001000000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                  << 4U) 
                                                                 | ((((0x0000000800000000ULL 
                                                                       == 
                                                                       (0x0000000800000000ULL 
                                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                      << 3U) 
                                                                     | ((0x0000000400000000ULL 
                                                                         == 
                                                                         (0x0000000400000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                        << 2U)) 
                                                                    | (((0x0000000200000000ULL 
                                                                         == 
                                                                         (0x0000000200000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                        << 1U) 
                                                                       | (0x0000000100000000ULL 
                                                                          == 
                                                                          (0x0000000100000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))))))) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(
                                                                 (((((((((0x0000000080000000ULL 
                                                                          == 
                                                                          (0x0000000080000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                         << 3U) 
                                                                        | ((0x0000000040000000ULL 
                                                                            == 
                                                                            (0x0000000040000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                           << 2U)) 
                                                                       | (((0x0000000020000000ULL 
                                                                            == 
                                                                            (0x0000000020000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                           << 1U) 
                                                                          | (0x0000000010000000ULL 
                                                                             == 
                                                                             (0x0000000010000000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                      << 0x0000000cU) 
                                                                     | (((((0x0000000008000000ULL 
                                                                            == 
                                                                            (0x0000000008000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                           << 3U) 
                                                                          | ((0x0000000004000000ULL 
                                                                              == 
                                                                              (0x0000000004000000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                             << 2U)) 
                                                                         | (((0x0000000002000000ULL 
                                                                              == 
                                                                              (0x0000000002000000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                             << 1U) 
                                                                            | (0x0000000001000000ULL 
                                                                               == 
                                                                               (0x0000000001000000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                        << 8U)) 
                                                                    | ((((((0x0000000000800000ULL 
                                                                            == 
                                                                            (0x0000000000800000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                           << 3U) 
                                                                          | ((0x0000000000400000ULL 
                                                                              == 
                                                                              (0x0000000000400000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                             << 2U)) 
                                                                         | (((0x0000000000200000ULL 
                                                                              == 
                                                                              (0x0000000000200000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                             << 1U) 
                                                                            | (0x0000000000100000ULL 
                                                                               == 
                                                                               (0x0000000000100000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                        << 4U) 
                                                                       | ((((0x0000000000080000ULL 
                                                                             == 
                                                                             (0x0000000000080000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000040000ULL 
                                                                               == 
                                                                               (0x0000000000040000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000020000ULL 
                                                                               == 
                                                                               (0x0000000000020000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                              << 1U) 
                                                                             | (0x0000000000010000ULL 
                                                                                == 
                                                                                (0x0000000000010000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))))) 
                                                                   << 0x00000010U) 
                                                                  | (((((((0x0000000000008000ULL 
                                                                           == 
                                                                           (0x0000000000008000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                          << 3U) 
                                                                         | ((0x0000000000004000ULL 
                                                                             == 
                                                                             (0x0000000000004000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                            << 2U)) 
                                                                        | (((0x0000000000002000ULL 
                                                                             == 
                                                                             (0x0000000000002000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                            << 1U) 
                                                                           | (0x0000000000001000ULL 
                                                                              == 
                                                                              (0x0000000000001000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                       << 0x0000000cU) 
                                                                      | (((((0x0000000000000800ULL 
                                                                             == 
                                                                             (0x0000000000000800ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000000400ULL 
                                                                               == 
                                                                               (0x0000000000000400ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000000200ULL 
                                                                               == 
                                                                               (0x0000000000000200ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                              << 1U) 
                                                                             | (0x0000000000000100ULL 
                                                                                == 
                                                                                (0x0000000000000100ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                         << 8U)) 
                                                                     | ((((((0x0000000000000080ULL 
                                                                             == 
                                                                             (0x0000000000000080ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000000040ULL 
                                                                               == 
                                                                               (0x0000000000000040ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000000020ULL 
                                                                               == 
                                                                               (0x0000000000000020ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                              << 1U) 
                                                                             | (0x0000000000000010ULL 
                                                                                == 
                                                                                (0x0000000000000010ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                         << 4U) 
                                                                        | ((((8ULL 
                                                                              == 
                                                                              (8ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                             << 3U) 
                                                                            | ((4ULL 
                                                                                == 
                                                                                (4ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                               << 2U)) 
                                                                           | (((2ULL 
                                                                                == 
                                                                                (2ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                               << 1U) 
                                                                              | (1ULL 
                                                                                == 
                                                                                (1ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))))))))))))))) {
        if ((0ULL != (((::QData)((::IData)(((((((0x0000008000000000ULL 
                                                 == 
                                                 (0x0000008000000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                << 3U) 
                                               | ((0x0000004000000000ULL 
                                                   == 
                                                   (0x0000004000000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                  << 2U)) 
                                              | (((0x0000002000000000ULL 
                                                   == 
                                                   (0x0000002000000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                  << 1U) 
                                                 | (0x0000001000000000ULL 
                                                    == 
                                                    (0x0000001000000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                             << 4U) 
                                            | ((((0x0000000800000000ULL 
                                                  == 
                                                  (0x0000000800000000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                 << 3U) 
                                                | ((0x0000000400000000ULL 
                                                    == 
                                                    (0x0000000400000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                   << 2U)) 
                                               | (((0x0000000200000000ULL 
                                                    == 
                                                    (0x0000000200000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                   << 1U) 
                                                  | (0x0000000100000000ULL 
                                                     == 
                                                     (0x0000000100000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27))))))) 
                       << 0x00000020U) | (::QData)((::IData)(
                                                             (((((((((0x0000000080000000ULL 
                                                                      == 
                                                                      (0x0000000080000000ULL 
                                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                     << 3U) 
                                                                    | ((0x0000000040000000ULL 
                                                                        == 
                                                                        (0x0000000040000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                       << 2U)) 
                                                                   | (((0x0000000020000000ULL 
                                                                        == 
                                                                        (0x0000000020000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                       << 1U) 
                                                                      | (0x0000000010000000ULL 
                                                                         == 
                                                                         (0x0000000010000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((0x0000000008000000ULL 
                                                                        == 
                                                                        (0x0000000008000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                       << 3U) 
                                                                      | ((0x0000000004000000ULL 
                                                                          == 
                                                                          (0x0000000004000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                         << 2U)) 
                                                                     | (((0x0000000002000000ULL 
                                                                          == 
                                                                          (0x0000000002000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                         << 1U) 
                                                                        | (0x0000000001000000ULL 
                                                                           == 
                                                                           (0x0000000001000000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                    << 8U)) 
                                                                | ((((((0x0000000000800000ULL 
                                                                        == 
                                                                        (0x0000000000800000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                       << 3U) 
                                                                      | ((0x0000000000400000ULL 
                                                                          == 
                                                                          (0x0000000000400000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                         << 2U)) 
                                                                     | (((0x0000000000200000ULL 
                                                                          == 
                                                                          (0x0000000000200000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                         << 1U) 
                                                                        | (0x0000000000100000ULL 
                                                                           == 
                                                                           (0x0000000000100000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                    << 4U) 
                                                                   | ((((0x0000000000080000ULL 
                                                                         == 
                                                                         (0x0000000000080000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000040000ULL 
                                                                           == 
                                                                           (0x0000000000040000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000020000ULL 
                                                                           == 
                                                                           (0x0000000000020000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                          << 1U) 
                                                                         | (0x0000000000010000ULL 
                                                                            == 
                                                                            (0x0000000000010000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))))) 
                                                               << 0x00000010U) 
                                                              | (((((((0x0000000000008000ULL 
                                                                       == 
                                                                       (0x0000000000008000ULL 
                                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                      << 3U) 
                                                                     | ((0x0000000000004000ULL 
                                                                         == 
                                                                         (0x0000000000004000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                        << 2U)) 
                                                                    | (((0x0000000000002000ULL 
                                                                         == 
                                                                         (0x0000000000002000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                        << 1U) 
                                                                       | (0x0000000000001000ULL 
                                                                          == 
                                                                          (0x0000000000001000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                   << 0x0000000cU) 
                                                                  | (((((0x0000000000000800ULL 
                                                                         == 
                                                                         (0x0000000000000800ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000000400ULL 
                                                                           == 
                                                                           (0x0000000000000400ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000000200ULL 
                                                                           == 
                                                                           (0x0000000000000200ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                          << 1U) 
                                                                         | (0x0000000000000100ULL 
                                                                            == 
                                                                            (0x0000000000000100ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                     << 8U)) 
                                                                 | ((((((0x0000000000000080ULL 
                                                                         == 
                                                                         (0x0000000000000080ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000000040ULL 
                                                                           == 
                                                                           (0x0000000000000040ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000000020ULL 
                                                                           == 
                                                                           (0x0000000000000020ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                          << 1U) 
                                                                         | (0x0000000000000010ULL 
                                                                            == 
                                                                            (0x0000000000000010ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))) 
                                                                     << 4U) 
                                                                    | ((((8ULL 
                                                                          == 
                                                                          (8ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                         << 3U) 
                                                                        | ((4ULL 
                                                                            == 
                                                                            (4ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                           << 2U)) 
                                                                       | (((2ULL 
                                                                            == 
                                                                            (2ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)) 
                                                                           << 1U) 
                                                                          | (1ULL 
                                                                             == 
                                                                             (1ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27)))))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:15110: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '40'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.cs_registers_i._11431_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',40,__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___s_27);
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 15110, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___03575_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___11431___Vfuncout_24;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09821_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___03575_;
}

void Vtop___024root___nba_comb__TOP__83(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__83\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___Vfuncout_144;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___b_146;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___Vfuncout_164;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___b_166;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___Vfuncout_176;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___b_178;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___Vfuncout_468;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___a_469;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___b_470;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___Vfuncout_472;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___a_473;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___b_474;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___Vfuncout_480;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___b_482;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___Vfuncout_484;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___Vfuncout_488;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___Vfuncout_144 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___b_146 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___Vfuncout_164 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___b_166 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___Vfuncout_176 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___b_178 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___Vfuncout_468 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___a_469 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___b_470 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___Vfuncout_472 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___a_473 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___b_474 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___Vfuncout_480 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___b_482 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___Vfuncout_484 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___Vfuncout_488 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00464_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00462_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00463_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09169_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00464_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00278_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00279_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00277_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00278_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00251_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00279_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00251_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00433_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_csr_insn_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00434_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00433_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_csr_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_csr_insn_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09153_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00434_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0332_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_csr_insn_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0382_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_csr_insn_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0387_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_csr_insn_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00287_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09153_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0333_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0332_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0383_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0382_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0388_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0386_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0387_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1284_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0333_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1309_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0383_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1311_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0388_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0140_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1284_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0248_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1309_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0143_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1311_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0249_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0247_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0248_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0144_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0142_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0143_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0114_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0249_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0144_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0250_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0114_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0252_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0250_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0251_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_insn_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0326_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0330_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0115_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__unused_illegal_insn_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_insn_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1167_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0327_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0326_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0331_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0330_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_perf_count_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0115_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0266_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_dret));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1281_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0327_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1283_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0331_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_perf_count_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_perf_count_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0122_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1281_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0131_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1283_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_perf_count_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_perf_count_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0123_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0121_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0122_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0132_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0130_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0131_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_perf_count_id_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0071_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0123_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0074_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0132_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0124_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0071_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0133_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0074_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0126_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0124_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0125_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0135_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0133_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0134_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0072_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0075_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0135_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0075_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0215_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0218_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_ren_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0216_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0214_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0215_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_ren_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0219_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0217_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0218_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__gen_no_regfile_ecc__02eunused_rf_ren_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_ren_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0103_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0216_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__gen_no_regfile_ecc__02eunused_rf_ren_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_ren_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0104_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0219_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_hz 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0103_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_hz 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0104_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0428_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_hz;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0429_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_hz;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0430_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0428_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0429_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1326_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0430_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0227_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1326_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0228_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0226_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0227_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0107_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0228_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0107_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0432_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0401_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0360_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0364_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0433_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0431_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0432_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0361_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0360_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0365_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0364_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1327_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0433_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1298_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0361_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1300_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0365_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0239_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1327_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0191_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1298_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0197_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1300_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0240_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0238_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0239_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0192_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0190_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0191_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0198_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0196_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0197_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0111_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0240_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0095_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0097_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0198_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_dside_wait_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0111_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0199_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0097_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_dside_wait 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_dside_wait_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1463_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1575_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1528_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1579_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1538_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1349_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1431_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1373_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1459_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1417_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1403_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1411_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1393_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1593_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1573_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1523_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1591_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1568_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1513_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1589_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1563_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1503_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1587_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1558_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1493_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1577_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1583_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1533_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1581_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1548_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1543_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1445_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1361_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1473_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1355_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1585_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1553_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1367_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1481_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1383_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0201_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0199_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0200_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dside_wait_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_dside_wait;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0734_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1463_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0970_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1575_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0876_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1528_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0978_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1579_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0896_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1538_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0488_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1349_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0664_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1431_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0536_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1373_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0724_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1459_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0634_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1417_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0602_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1403_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0620_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1411_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0580_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1393_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1593_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0966_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1573_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0866_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1523_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1591_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0956_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1568_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0844_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1513_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0998_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1589_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0946_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1563_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0822_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1503_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0994_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1587_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0936_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1558_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0800_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1493_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0974_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1577_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0986_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1583_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0886_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1533_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0982_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1581_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0916_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1548_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0906_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1543_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0694_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1445_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0512_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1361_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0756_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1473_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0500_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1355_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0990_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1585_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0926_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1553_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0524_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1367_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0774_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1481_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0558_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1383_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0098_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0201_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0867_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0866_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0865_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0801_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0800_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0799_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0695_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0694_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0693_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0098_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1522_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0867_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1492_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0801_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1444_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0695_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1595_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0137_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1111_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0149_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1107_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1103_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0053_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1522_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0052_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1492_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0055_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1444_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1595_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1112_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1111_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1110_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0150_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0148_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0149_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1108_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1107_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1106_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1104_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1103_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1102_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0959_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0053_) 
           << 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0929_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0052_) 
           << 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0879_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0055_) 
           << 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1632_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1112_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0080_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0150_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1631_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1630_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1104_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0960_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___b_178 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0959_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___Vfuncout_176 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___b_178)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___b_178) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37502: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1907_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___s_179));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37502, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0961_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1907___Vfuncout_176;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0930_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___b_166 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0929_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___Vfuncout_164 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___b_166)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___b_166) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37454: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1898_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___s_167));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37454, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0931_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1898___Vfuncout_164;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0880_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___b_146 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0879_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___Vfuncout_144 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___b_146)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___b_146) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37374: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1883_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___s_147));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37374, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0881_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1883___Vfuncout_144;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1632_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0151_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1631_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1630_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1569_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0961_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1554_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0931_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1529_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0881_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0965_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1569_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0935_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1554_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0885_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1529_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__div_en_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__mult_en_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0967_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0966_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0965_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0937_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0936_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0935_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0887_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0886_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0885_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__div_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__div_en_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__mult_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__mult_en_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1572_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0967_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1557_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0937_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1532_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0887_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___52_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__div_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___58_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__mult_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1280_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1284_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1260_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1288_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1268_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1240_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1246_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1264_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1252_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1272_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1276_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0224_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1256_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1234_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1572_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0041_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1557_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1532_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___52_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___58_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0593_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1280_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0603_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1284_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0543_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1260_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0613_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1288_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0563_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1268_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0495_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1240_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0509_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1246_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0553_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1264_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0523_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0573_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1272_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0583_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1276_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0226_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0224_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0225_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0533_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1256_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0481_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1234_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0042_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0993_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0041_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0973_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0044_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___546_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___551_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___372_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0594_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0593_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0591_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0604_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0603_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0602_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0614_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0613_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0510_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0509_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0508_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0524_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0523_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0522_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0574_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0573_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0572_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0584_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0583_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0582_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1139_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1007_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1006_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1005_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0995_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0994_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0993_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0975_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0974_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0973_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___369_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___370_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___372_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1279_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0594_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1283_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0604_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1287_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0614_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1245_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0510_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1251_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0524_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1271_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0574_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1275_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0584_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0105_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1139_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1592_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1007_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1586_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0995_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1576_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0975_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___593_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___369_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0596_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1279_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0606_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1283_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0616_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0512_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1245_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0526_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1251_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0576_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1271_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0586_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1275_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1592_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_branch_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1592_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1586_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set_raw 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1586_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1576_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_alu 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1576_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___366_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___593_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0598_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0597_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0596_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0608_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0607_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0606_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0618_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0617_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0616_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0514_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0513_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0512_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0528_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0527_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0526_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0578_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0577_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0576_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0588_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0587_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0586_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0030_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_branch 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_branch_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0393_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set_raw;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0157_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set_raw;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0414_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_alu;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1281_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0598_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1285_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0608_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1289_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0618_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1247_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0514_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1253_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0528_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1273_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0578_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1277_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0588_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__branch_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_branch;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0159_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0157_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0158_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1281_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0053_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1285_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1289_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0057_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1247_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1253_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0052_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1273_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1277_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0083_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0159_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0640_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0050_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0062_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0072_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0652_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0053_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0063_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0073_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0721_ 
        = (7U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0047_) 
                 << 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0562_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0057_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0552_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0058_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0709_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0052_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0715_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0051_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0083_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0641_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___b_470 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0640_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___a_469 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0639_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___Vfuncout_468 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___b_470)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___b_470) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471)))
                                    ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___b_470) 
                                       >> 2U) : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___a_469)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:49989: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1635_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___s_471));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 49989, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0642_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1635___Vfuncout_468;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0653_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___b_474 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0652_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___a_473 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0651_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___Vfuncout_472 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___b_474)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___b_474) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475)))
                                    ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___b_474) 
                                       >> 2U) : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___a_473)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50008: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1639_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___s_475));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50008, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0654_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1639___Vfuncout_472;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0722_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0721_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___Vfuncout_488 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491)) 
                                            && (1U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___b_490)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50097: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1662_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___s_491));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50097, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0723_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1662___Vfuncout_488;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0564_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0563_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0562_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0554_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0553_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0552_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0711_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0710_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0709_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0717_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0716_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0715_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1180_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1297_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0642_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1301_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0654_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1324_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0723_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1267_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0564_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1263_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0554_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1320_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0711_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1322_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0717_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1180_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1297_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1297_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1324_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1324_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0566_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1267_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0556_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1263_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1320_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__perf_store_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1320_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0037_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1322_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__perf_load_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1322_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0032_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_req_out 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0568_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0567_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0566_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0558_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0557_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0556_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_store 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__perf_store_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_load 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__perf_load_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___05_ = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_req_out;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1269_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0568_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1265_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0558_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mem_store_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_store;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mem_load_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_load;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1269_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1265_;
    vlSelfRef.encarsia_tb__DOT__data_req_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0691_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0044_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0067_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0076_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0083_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0087_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0679_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0045_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0068_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0077_)));
    vlSelfRef.__VprimaryPorts.data_req_o = vlSelfRef.encarsia_tb__DOT__data_req_o;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0692_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0691_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___Vfuncout_484 
        = (1U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                                 >> 4U)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487)) 
                                                && (1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___b_486))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50068: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1652_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___s_487));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50068, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0693_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1652___Vfuncout_484;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0680_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___b_482 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0679_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___Vfuncout_480 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___b_482)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___b_482) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483))) 
                                   && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___b_482) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50049: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1648_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___s_483));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50049, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0681_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1648___Vfuncout_480;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1314_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0693_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1310_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0681_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1314_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_update 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1314_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1310_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1310_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0028_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1389_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1391_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1393_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1395_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1397_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0908_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1389_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0912_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1391_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0916_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1393_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0920_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0924_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0913_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0912_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0911_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0910_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0917_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0916_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0915_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0914_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0921_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0920_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0919_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0918_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1390_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0913_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1392_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0917_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1394_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0921_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1390_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1392_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1394_;
}

void Vtop___024root___nba_comb__TOP__84(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__84\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___Vfuncout_448;
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___a_449;
    ::VlWide<6>/*169:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___Vfuncout_452;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___a_453;
    ::QData/*63:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___b_454;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___Vfuncout_456;
    ::VlWide<10>/*319:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458;
    ::SData/*9:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___Vfuncout_460;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___a_461;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___b_462;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___Vfuncout_516;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___Vfuncout_520;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___Vfuncout_524;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___Vfuncout_528;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___Vfuncout_532;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___Vfuncout_536;
    ::SData/*11:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___b_538;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___Vfuncout_448 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___a_449 = 0;
    VL_ZERO_W(170, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___Vfuncout_452 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___a_453 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___b_454 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___Vfuncout_456 = 0;
    VL_ZERO_W(320, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___Vfuncout_460 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___a_461 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___b_462 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___Vfuncout_516 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___Vfuncout_520 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___Vfuncout_524 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___Vfuncout_528 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___Vfuncout_532 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___Vfuncout_536 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___b_538 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___349_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___348_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___347_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___346_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___490_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___349_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___490_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___490_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___028_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___046_ 
        = (0x00000003ffffffffULL & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___044_ 
                                    + vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___045_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___046_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___040_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o 
                     >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___31_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___074_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___070_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_adder_result_ext;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___075_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___074_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___071_ 
        = (1U & (~ (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___070_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___32_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_result_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_ext_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___436_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___075_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___434_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___071_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_adder_result_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___32_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__unused_alu_adder_ext 
        = ((2U & ((::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_ext_i 
                             >> 0x00000021U)) << 1U)) 
           | (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_ext_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__res_adder_h 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_ext_i 
                     >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___317_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___436_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___276_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___434_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__is_equal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___434_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___47_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_adder_result_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_adder_result_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___527_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__res_adder_h;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___509_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__res_adder_h 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___320_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___319_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___318_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___317_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__is_equal_result_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__is_equal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__is_equal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___47_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__adder_result_ex_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_adder_result_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___508_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___509_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___483_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___320_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__is_equal_result_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___079_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___078_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___464_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___458_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___432_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___428_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_adder_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0907_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__adder_result_ex_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0923_ 
        = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__adder_result_ex_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_addr 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__adder_result_ex_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___555_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___508_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___483_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__is_greater_equal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___483_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_is_equal_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___440_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___079_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___462_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___463_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___464_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___465_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___456_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___457_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___458_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___459_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___430_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___431_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___432_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___433_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___426_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___427_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___428_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___429_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_addr_w_aligned 
        = (0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_addr);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset 
        = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_addr);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___098_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___555_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___080_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__is_greater_equal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___54_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_is_equal_result;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___719_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___462_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___720_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___456_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___722_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___430_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___723_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___426_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_addr_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_addr_w_aligned;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0934_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0937_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0940_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0943_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0949_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0952_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0955_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0958_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0976_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0979_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0982_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0985_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1041_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0137_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0192_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___095_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___096_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___097_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___098_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___081_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___080_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__equal_to_zero_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___54_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___108_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___719_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___101_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___720_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___275_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___722_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___276_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___723_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_addr_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0936_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0934_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0939_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0937_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0942_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0940_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0944_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0943_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0951_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0949_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0954_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0952_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0957_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0955_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0959_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0958_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0978_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0976_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0981_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0979_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0984_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0982_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0986_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0985_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1015_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1013_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1018_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1016_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1021_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1019_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1023_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1022_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1040_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1038_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1043_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1041_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1046_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1044_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1048_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1047_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0139_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0137_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0193_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0192_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___698_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___441_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___081_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___253_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__equal_to_zero_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___482_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__equal_to_zero_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___473_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__equal_to_zero_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___106_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___107_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___108_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___109_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___099_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___100_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___101_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___102_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___273_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___274_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___275_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___276_);
    vlSelfRef.encarsia_tb__DOT__data_addr_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1401_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0936_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1402_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0939_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1403_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0942_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1404_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0944_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1406_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0951_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1407_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0954_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1408_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0957_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1409_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0959_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1414_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0978_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1415_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0981_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1416_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0984_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1417_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0986_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1427_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1015_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1428_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1018_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1429_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1021_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1430_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1023_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1436_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1040_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1437_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1438_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1046_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1439_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1048_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1100_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0139_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1124_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0193_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___698_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__is_greater_equal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___698_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___277_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___440_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__is_greater_equal) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___441_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___251_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___252_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___253_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___254_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___694_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___106_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___696_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___638_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___273_;
    vlSelfRef.__VprimaryPorts.data_addr_o = vlSelfRef.encarsia_tb__DOT__data_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0932_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1404_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1403_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1402_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1401_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0947_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1409_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1408_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1407_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1406_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0974_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1417_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1416_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1415_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1414_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1011_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1430_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1429_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1428_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1427_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1036_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1439_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1438_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1437_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1436_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0150_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1100_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0147_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1124_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___047_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___519_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__is_greater_equal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___526_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__is_greater_equal;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___278_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___b_462 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___277_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___a_461 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___276_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___Vfuncout_460 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___b_462)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___b_462) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463)))
                                    ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___b_462) 
                                       >> 2U) : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___a_461)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:39880: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.alu_i._591_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___s_463));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 39880, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___279_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___591___Vfuncout_460;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___646_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___251_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___053_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___694_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___694_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___052_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___696_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_denominator_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___696_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___268_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___638_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0932_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0931_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0931_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0931_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[3U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0931_[3U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___Vfuncout_516 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___b_518[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50271: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1725_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___s_519));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50271, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0933_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1725___Vfuncout_516;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0947_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___Vfuncout_520 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                        ? 8U : 4U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                                       ? 8U : 2U)) : 
               ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                 ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                     ? 8U : 4U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                                    ? 8U : 1U))) : 
           ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
             ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                 ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                     ? 8U : 4U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                                    ? 8U : 2U)) : (
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                                                    ? 
                                                   ((1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                                                     ? 8U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))
                                                     ? 8U
                                                     : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50293: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1730_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___s_523));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50293, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0948_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1730___Vfuncout_520;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0974_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___Vfuncout_524 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                                          ? 8U : 6U))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                                          ? 8U : 3U)))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                                          ? 8U : 6U))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))
                                          ? 8U : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50319: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1739_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___s_527));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50319, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0975_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1739___Vfuncout_524;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1011_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___Vfuncout_528 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                        ? 7U : 3U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                                       ? 7U : 1U)) : 
               ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                 ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                     ? 7U : 3U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                                    ? 7U : 0U))) : 
           ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
             ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                 ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                     ? 7U : 3U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                                    ? 7U : 1U)) : (
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                                                    ? 
                                                   ((1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                                                     ? 7U
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))
                                                     ? 7U
                                                     : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50347: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1750_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___s_531));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50347, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1012_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1750___Vfuncout_528;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1036_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___Vfuncout_532 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                                          ? 8U : 0x0eU))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                                          ? 8U : 0x0fU)))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                                          ? 8U : 0x0eU))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))
                                          ? 8U : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50372: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1758_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___s_535));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50372, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1037_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1758___Vfuncout_532;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0151_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0149_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0150_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0148_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0146_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0147_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___518_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___519_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___520_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___521_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___525_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___526_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___527_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___528_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___477_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___279_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___247_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___646_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___053_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___052_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___266_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___268_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___267_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1400_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0933_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1405_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0948_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1413_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0975_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1426_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1012_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1435_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1105_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0151_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1104_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0148_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___716_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___518_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___715_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___525_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___477_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___477_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___245_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___246_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___247_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___640_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___266_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1400_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1400_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0961_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1405_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0987_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1413_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1426_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1435_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0181_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1105_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0180_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1104_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__next_quotient 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___716_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___118_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___716_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___264_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___716_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__next_remainder 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___715_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___265_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___715_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___032_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[0U] = 0U;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[1U] = 0U;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[2U] = 0U;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[3U] = 0U;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[4U] = 0U;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[5U] 
        = (::IData)((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[6U] 
        = (::IData)(((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)) 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[7U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[8U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result)) 
                      << 0x00000020U) | (::QData)((::IData)(
                                                            (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___040_ 
                                                             >> 1U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[9U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result)) 
                       << 0x00000020U) | (::QData)((::IData)(
                                                             (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___040_ 
                                                              >> 1U)))) 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__comparison_result_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___648_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___245_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___640_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0963_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0961_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0962_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0990_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0987_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0989_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1027_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1025_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1026_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1052_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1049_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1051_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0182_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0180_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0181_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___117_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___b_454 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___118_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___a_453 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___119_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___Vfuncout_452 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455)))
            ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___b_454)
            : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455)))
                ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___b_454 
                             >> 0x20U)) : __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___a_453));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:45600: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._858_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 45600, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___116_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___Vfuncout_452;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___262_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___263_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___264_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___265_);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___093_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[3U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[3U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[4U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[4U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[5U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[5U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[6U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[6U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[7U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[7U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[8U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[8U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[9U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___092_[9U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___Vfuncout_456 
        = (((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                  | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))) 
                 | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))) 
                | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))) 
               | (0x0010U == (0x0010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))) 
              | (0x0020U == (0x0020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))) 
             | (0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))) 
            | (0x0080U == (0x0080U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))))
            ? ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[0U]
                : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[1U]
                    : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[2U]
                        : ((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[3U]
                            : ((0x0010U == (0x0010U 
                                            & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[4U]
                                : ((0x0020U == (0x0020U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[5U]
                                    : ((0x0040U == 
                                        (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[6U]
                                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[7U])))))))
            : ((0x0100U == (0x0100U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[8U]
                : ((0x0200U == (0x0200U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))
                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___b_458[9U]
                    : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0200U 
                                                == 
                                                (0x0200U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                               << 4U) 
                                              | (((0x0100U 
                                                   == 
                                                   (0x0100U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                                  << 3U) 
                                                 | ((0x0080U 
                                                     == 
                                                     (0x0080U 
                                                      & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                                    << 2U))) 
                                             | (((0x0040U 
                                                  == 
                                                  (0x0040U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                                 << 1U) 
                                                | (0x0020U 
                                                   == 
                                                   (0x0020U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))))) 
                                            << 5U) 
                                           | ((((0x0010U 
                                                 == 
                                                 (0x0010U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                                << 4U) 
                                               | (((8U 
                                                    == 
                                                    (8U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      == 
                                                      (4U 
                                                       & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                                     << 2U))) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))))))))))) {
        if ((0U != ((((((0x0200U == (0x0200U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                        << 4U) | (((0x0100U == (0x0100U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                   << 3U) | ((0x0080U 
                                              == (0x0080U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                             << 2U))) 
                      | (((0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                          << 1U) | (0x0020U == (0x0020U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))))) 
                     << 5U) | ((((0x0010U == (0x0010U 
                                              & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                 << 4U) | (((8U == 
                                             (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                            << 3U) 
                                           | ((4U == 
                                               (4U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                              << 2U))) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:39787: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '10'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.alu_i._527_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',10,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___s_459));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 39787, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___094_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___527___Vfuncout_456;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__comparison_result_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___056_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___648_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_wdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1410_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0963_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1418_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0990_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1431_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1440_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1052_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1120_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0182_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___691_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___642_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___262_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___446_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___094_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_cmp_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___33_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___157_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___056_;
    vlSelfRef.encarsia_tb__DOT__data_wdata_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_wdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0088_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1410_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0992_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1418_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1431_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1440_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0490_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1120_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1120_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___691_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___691_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___257_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___642_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___446_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__result_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___446_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__branch_decision_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_cmp_result;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___155_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___156_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___157_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___158_));
    vlSelfRef.__VprimaryPorts.data_wdata_o = vlSelfRef.encarsia_tb__DOT__data_wdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0994_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0992_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0993_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1031_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1029_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1030_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1056_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1054_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1055_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0492_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0491_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0490_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0489_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1088_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__split_misaligned_access;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1092_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__split_misaligned_access;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___054_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___255_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___257_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___256_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___45_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__result_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__branch_decision 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__branch_decision_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___679_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___155_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1420_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0994_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1433_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1031_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1442_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1237_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0492_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1089_ 
        = (2U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1088_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1093_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1092_)
            ? 1U : 3U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___644_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___255_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___45_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_decision_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__branch_decision;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___679_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___679_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1420_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1433_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1442_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0494_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1237_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1453_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1089_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1454_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1093_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___644_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_result;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0825_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_decision_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0398_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_decision_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0998_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0084_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0059_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0476_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1453_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0475_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1454_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[0U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___064_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[1U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___063_) 
            << 2U) | (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___064_ 
                                >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[2U] 
        = ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___715_ 
            << 5U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___710_) 
                       << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___063_) 
                                  >> 0x0000001eU) | 
                                 ((::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___063_ 
                                             >> 0x00000020U)) 
                                  << 2U))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[3U] 
        = ((0xffffffe0U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[3U]) 
           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___715_ 
              >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[3U] 
        = ((0x0000001fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[3U]) 
           | ((::IData)((::QData)((::IData)((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_q 
                                                   >> 0x0000001eU))))) 
              << 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[4U] 
        = ((0xffffff00U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[4U]) 
           | (((::IData)((::QData)((::IData)((2U & 
                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_q 
                                               >> 0x0000001eU))))) 
               >> 0x0000001bU) | ((::IData)(((::QData)((::IData)(
                                                                 (2U 
                                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_q 
                                                                     >> 0x0000001eU)))) 
                                             >> 0x00000020U)) 
                                  << 5U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[4U] 
        = ((0x000000ffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[4U]) 
           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___062_) 
              << 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[5U] 
        = (0x000003ffU & (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___062_) 
                           >> 0x00000018U) | ((::IData)(
                                                        (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___062_ 
                                                         >> 0x00000020U)) 
                                              << 8U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___26_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___25_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___24_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___23_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0827_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0826_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0825_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1001_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1000_)
            ? 1U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0998_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1062_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1061_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1060_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1059_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0478_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0477_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0476_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0475_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___149_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[3U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[4U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[4U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[5U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___150_[5U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___a_449 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___151_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___Vfuncout_448 
        = (0x00000003ffffffffULL & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                     ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                         ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                             ? ((2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                 ? 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                   << 0x0000003eU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                      << 0x0000001eU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                        >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                   << 0x0000003cU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                      << 0x0000001cU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                        >> 4U)))))
                                             : ((2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                 ? 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                   << 0x0000003eU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                      << 0x0000001eU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                        >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[4U])) 
                                                   << 0x0000003aU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[4U])) 
                                                      << 0x0000001aU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                        >> 6U))))))
                                         : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                             ? ((2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                 ? 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                   << 0x0000003eU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                      << 0x0000001eU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                        >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                   << 0x0000003cU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                      << 0x0000001cU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                        >> 4U)))))
                                             : ((2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                 ? 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                   << 0x0000003eU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                      << 0x0000001eU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                        >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[5U])) 
                                                   << 0x00000038U) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[5U])) 
                                                      << 0x00000018U) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[4U])) 
                                                        >> 8U)))))))
                                     : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                         ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                             ? ((2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                 ? 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                   << 0x0000003eU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                      << 0x0000001eU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                        >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                   << 0x0000003cU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                      << 0x0000001cU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                        >> 4U)))))
                                             : ((2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                 ? 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                   << 0x0000003eU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                      << 0x0000001eU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                        >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[4U])) 
                                                   << 0x0000003aU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[4U])) 
                                                      << 0x0000001aU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                        >> 6U))))))
                                         : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                             ? ((2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                 ? 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                   << 0x0000003eU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                      << 0x0000001eU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                        >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                   << 0x0000003cU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[3U])) 
                                                      << 0x0000001cU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                        >> 4U)))))
                                             : ((2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                 ? 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                   << 0x0000003eU) 
                                                  | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[2U])) 
                                                      << 0x0000001eU) 
                                                     | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                        >> 2U))))
                                                 : 
                                                ((1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))
                                                  ? 
                                                 (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[1U])) 
                                                   << 0x00000020U) 
                                                  | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450[0U])))
                                                  : __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___a_449))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:45571: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._848_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 45571, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___148_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___Vfuncout_448;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___74_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___26_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1504_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0827_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1422_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1001_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1444_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1062_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1231_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0478_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___681_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___148_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__result_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___74_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0828_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1504_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1422_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1444_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0480_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1231_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___055_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___681_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_remainder_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___681_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__result_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__result_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0831_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0830_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0828_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1005_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1003_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1004_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1066_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1064_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1065_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___055_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___537_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_remainder_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__result_ex_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__result_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1506_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0831_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1424_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1005_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1446_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1066_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___535_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___536_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___537_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___538_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0832_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1506_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1424_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1446_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___713_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___535_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0835_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0834_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0832_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1070_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0046_) 
            << 8U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0078_) 
                       << 4U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0088_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[0U] 
        = (::IData)((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_denominator_d)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[1U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___713_) 
            << 2U) | (::IData)(((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_denominator_d)) 
                                >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[2U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___713_) 
            >> 0x0000001eU) | ((::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___713_ 
                                          >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1508_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0835_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1071_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___b_538 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1070_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___Vfuncout_536 
        = (0x0000000fU & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539)))
                           ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___b_538)
                           : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539)))
                               ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___b_538) 
                                  >> 4U) : ((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539)))
                                             ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___b_538) 
                                                >> 8U)
                                             : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50400: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1769_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___s_539));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50400, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1072_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1769___Vfuncout_536;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___55_[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___55_[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___55_[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0836_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1508_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1448_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___55_[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___55_[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___55_[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0839_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0838_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0836_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1448_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1448_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___12_ 
        = (0x00000003ffffffffULL & (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                     << 0x0000001eU) 
                                    | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                       >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___16_ 
        = (0x00000003ffffffffULL & (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                     << 0x00000020U) 
                                    | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U]))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1510_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0839_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0030_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___14_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___13_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___12_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___11_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___18_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___17_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___16_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___15_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0843_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1510_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_be_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___71_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___14_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___72_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___18_;
    vlSelfRef.encarsia_tb__DOT__data_be_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_be_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[0U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___72_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[1U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___71_) 
            << 2U) | (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___72_ 
                                >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[2U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___71_) 
            >> 0x0000001eU) | ((::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___71_ 
                                          >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.__VprimaryPorts.data_be_o = vlSelfRef.encarsia_tb__DOT__data_be_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0435_ 
        = (0x00000003ffffffffULL & (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U])) 
                                     << 0x00000020U) 
                                    | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[0U]))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0439_ 
        = (0x00000003ffffffffULL & (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[2U])) 
                                     << 0x0000001eU) 
                                    | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U])) 
                                       >> 2U)));
}

void Vtop___024root___nba_comb__TOP__85(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__85\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___Vfuncout_0;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3;
    ::CData/*5:0*/ __Vdfg_Regularize_21628;
    ::CData/*1:0*/ __Vdfg_Regularize_21651;
    ::IData/*31:0*/ __Vdfg_Regularize_21653;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___Vfuncout_0 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3 = 0;
    __Vdfg_Regularize_21628 = 0;
    __Vdfg_Regularize_21651 = 0;
    __Vdfg_Regularize_21653 = 0;
    __Vdfg_Regularize_21653 = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09625_) 
                                 << 0x0000001fU) | 
                                (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09985_) 
                                  << 0x00000016U) | 
                                 (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09908_) 
                                   << 0x00000015U) 
                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10065_) 
                                      << 0x00000012U) 
                                     | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10146_) 
                                         << 0x00000011U) 
                                        | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10106_) 
                                           << 0x00000010U)))))) 
                               | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10027_) 
                                      << 5U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10266_) 
                                                << 4U)) 
                                    | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09865_) 
                                        << 3U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09664_))) 
                                   << 8U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09703_) 
                                               << 7U) 
                                              | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09744_) 
                                                 << 4U)) 
                                             | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09821_) 
                                                 << 3U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10223_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00154_ 
        = __Vdfg_Regularize_21653;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_int 
        = __Vdfg_Regularize_21653;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00154_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_rdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00281_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00466_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_rdata_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_rdata;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00282_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00280_ 
           & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00281_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00467_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00465_ 
           | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00466_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00252_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00282_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09170_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00467_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00479_[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00479_[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00479_[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09170_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00479_[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09170_))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00480_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00479_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00479_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00479_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[3U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00479_[3U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___Vfuncout_0 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___b_2[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:13734: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.cs_registers_i._10469_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___s_3));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 13734, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00481_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10469___Vfuncout_0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00481_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00155_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09176_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09176_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00155_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08993_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08999_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_wdata 
        = (0x0000003fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00475_ 
        = ((0x00001ffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int) 
           | (::IData)((1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_d 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08857_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08866_ 
        = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00869_ 
        = (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00889_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01181_ 
        = (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01192_ 
        = (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00398_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00934_ 
        = (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00929_ 
        = (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00741_ 
        = (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00790_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00822_ 
        = (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08959_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08966_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00638_ 
        = (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00710_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00521_ 
        = (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08871_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08878_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08885_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08892_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08899_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08906_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08913_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08920_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08927_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08934_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01015_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0x0000000fU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01103_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01118_ 
        = (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01139_ 
        = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00406_ 
        = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00409_ 
        = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    __Vdfg_Regularize_21628 = ((0x00000020U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x0000001aU)) 
                               | (0x0000001fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01048_ 
        = ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x00000010U)) | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 0x00000015U)));
    __Vdfg_Regularize_21651 = ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      >> 2U)) | (1U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 7U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01165_ 
        = (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00401_ 
        = (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00404_ 
        = (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08993_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08999_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09023_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_no_dit__02eunused_dit 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_wdata) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_no_dummy__02eunused_dummy_en 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_wdata) 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_no_dummy__02eunused_dummy_mask 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_wdata) 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_no_icache__02eunused_icen 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_wdata));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08949_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08943_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01183_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01181_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01182_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01194_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01192_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01193_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00400_ 
        = (1U > vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00398_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08959_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08966_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08871_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08878_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08885_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08892_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08899_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08906_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08913_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08920_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08927_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08934_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01017_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01016_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01015_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01014_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01105_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01104_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01103_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01102_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01120_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01119_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01118_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01117_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00408_ 
        = (3U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00406_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00410_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00409_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00910_ 
        = __Vdfg_Regularize_21628;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00905_ 
        = __Vdfg_Regularize_21628;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00806_ 
        = __Vdfg_Regularize_21628;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00614_ 
        = __Vdfg_Regularize_21628;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00597_ 
        = __Vdfg_Regularize_21628;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01050_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01049_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01048_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01047_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_d 
        = (((::IData)(__Vdfg_Regularize_21651) << 0x00000010U) 
           | ((0x00008000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                              << 4U)) | (0x00007fffU 
                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 0x00000010U))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00993_ 
        = __Vdfg_Regularize_21651;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00403_ 
        = (3U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00401_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00405_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00404_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08949_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08943_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09499_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01183_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09503_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01194_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09131_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00400_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___30_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___33_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09437_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01017_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09469_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01105_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09475_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01120_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09140_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00408_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09141_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00410_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09449_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01050_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00995_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00994_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00993_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00992_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09138_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00403_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09139_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00405_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_data_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01188_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09499_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01199_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09503_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08867_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09131_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09437_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01110_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09469_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01125_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09475_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00389_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09140_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00390_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09141_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01055_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09449_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09017_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09429_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00995_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00386_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09138_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00387_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09139_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08868_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08867_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08866_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00391_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00389_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00390_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09429_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00388_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00386_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00387_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10389_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08868_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09127_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00391_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09126_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00388_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10389_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09484_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09127_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09494_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08955_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01141_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09484_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09494_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08955_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01142_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01139_) 
                 | (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01141_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01168_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01165_) 
                 | (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01167_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__wr_data_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09483_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01142_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09493_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01168_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01144_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09483_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01170_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09493_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01146_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01144_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01145_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01172_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01170_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01171_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09485_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01146_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09495_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01172_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01151_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09485_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01177_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09495_;
}

void Vtop___024root___nba_comb__TOP__88(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__88\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___Vfuncout_148;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___b_150;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___Vfuncout_152;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___b_154;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___Vfuncout_160;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___b_162;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___Vfuncout_172;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___b_174;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___Vfuncout_400;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___b_402;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___Vfuncout_464;
    ::SData/*14:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___Vfuncout_476;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___a_477;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___Vfuncout_148 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___b_150 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___Vfuncout_152 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___b_154 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___Vfuncout_160 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___b_162 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___Vfuncout_172 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___b_174 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___Vfuncout_400 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___b_402 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___Vfuncout_464 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___Vfuncout_476 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___a_477 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___544_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___546_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___545_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___549_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___551_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___550_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___363_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___364_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___366_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0909_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0908_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0907_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0906_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0925_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0924_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0923_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0922_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0496_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0495_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0494_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0482_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0480_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0481_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0845_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0844_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0843_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___068_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___544_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___549_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___595_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___363_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1388_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0909_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1396_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0925_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1239_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0496_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1233_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0482_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1512_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0845_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_internal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___067_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___595_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1388_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1396_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0498_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1239_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0484_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1233_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1512_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___701_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___703_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___705_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___707_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___709_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___540_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___588_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_internal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___541_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_internal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___323_ 
        = (1U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___061_) 
                 << 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0500_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0499_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0498_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0486_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0484_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0485_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0949_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0049_) 
           << 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___092_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___701_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___088_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___703_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___705_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___080_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___707_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___076_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___709_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___384_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___588_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___539_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___541_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___540_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___322_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___b_402 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___323_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___Vfuncout_400 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___b_402)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___b_402) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:45343: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._794_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 45343, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___321_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___Vfuncout_400;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1241_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0500_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1235_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0486_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0950_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___b_174 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0949_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___Vfuncout_172 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___b_174)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___b_174) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37486: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1904_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___s_175));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37486, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0951_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1904___Vfuncout_172;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___087_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___088_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___089_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___090_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___083_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___084_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___085_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___086_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___079_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___080_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___081_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___082_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___075_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___076_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___077_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___078_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___383_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___384_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___385_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___386_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___584_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___539_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___614_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___321_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1241_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1235_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1564_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0951_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___702_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___087_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___704_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___083_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___706_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___079_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___708_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___075_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___587_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___383_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___584_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___614_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___614_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0542_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0060_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0532_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0061_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0955_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1564_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___702_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___704_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___706_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___708_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___587_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_we_o 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_en));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___051_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___421_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_valid;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0544_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0543_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0542_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0541_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0534_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0533_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0532_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0531_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0957_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0956_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0955_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___57_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_we_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___419_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___421_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___420_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1259_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0544_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1255_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0534_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1567_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0957_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___57_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___586_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___419_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0546_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1259_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0536_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1255_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1567_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__valid_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___586_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0548_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0547_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0546_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0538_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0536_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0537_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___22_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___21_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___20_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___19_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___67_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__valid_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1261_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0548_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1257_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0538_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1003_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1002_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1001_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___73_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___22_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___67_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1261_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1257_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1590_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1003_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_we_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___73_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___28_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_valid;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0664_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0048_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0070_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0079_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0089_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0622_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0049_) 
             << 0x0000000cU) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0071_) 
                                << 9U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0080_) 
                                            << 6U) 
                                           | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0090_) 
                                               << 3U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0091_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1590_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1590_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_we_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_we_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___30_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___29_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___28_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___27_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0665_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0664_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___a_477 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0663_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___Vfuncout_476 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___b_478)
                                             : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___a_477))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:50027: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1643_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___s_479));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 50027, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0666_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1643___Vfuncout_476;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0623_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0622_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___Vfuncout_464 
        = (7U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                                 >> 9U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                                 >> 0x0cU)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                                 >> 9U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___b_466)
                                                 : 0U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:49964: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._1629_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___s_467));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 49964, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0624_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1629___Vfuncout_464;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0023_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_we_ex_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_we_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___75_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___30_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1305_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0666_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1291_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0624_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0163_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1329_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_we_ex_i) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1331_ 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_we_ex_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__ex_valid_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___75_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1305_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1305_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1291_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1291_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0165_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0163_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0164_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0436_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1329_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0440_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1331_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__ex_valid_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_ns;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0140_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_ns;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0437_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0436_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0435_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0434_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0441_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0440_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0439_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0438_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_valid;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0141_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0140_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0085_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1328_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0437_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1330_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0441_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0344_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0584_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0562_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0540_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1117_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1101_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0141_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1139_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1328_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1330_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0345_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0344_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0168_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0166_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0167_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0585_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0584_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0583_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0563_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0562_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0561_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0541_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0540_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0106_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___1101_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_spec_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1139_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1290_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0345_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0087_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0168_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1394_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0585_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1384_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0563_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1374_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0541_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0107_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0105_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0106_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0244_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_spec_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1375_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1290_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1385_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1290_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1395_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1290_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0527_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0087_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0587_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1394_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0565_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1384_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0543_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1374_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0093_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0107_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0970_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0244_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0529_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0528_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0527_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0526_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0589_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0588_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0587_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0567_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0566_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0565_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0545_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0544_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0543_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_done_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___0093_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0969_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0970_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1368_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0529_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1396_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0589_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1386_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0567_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1376_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0545_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_req_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_done_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0971_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0969_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0972_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0531_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1368_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0590_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1396_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0568_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1386_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0546_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1376_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_done_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_req_done;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0117_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0971_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0533_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0532_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0531_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0593_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0592_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0590_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0571_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0570_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0568_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0549_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0548_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0546_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0342_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_done_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0606_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_done_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0368_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_done_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1370_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0533_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1398_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0593_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1388_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0571_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1378_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0549_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0343_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0342_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0607_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0606_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0605_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0369_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0368_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0535_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1370_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0594_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1398_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0572_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1388_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0550_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1378_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1289_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0343_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1404_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0607_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1302_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0369_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0537_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0536_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0535_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0597_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0596_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0594_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0575_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0574_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0572_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0553_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0552_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0550_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1405_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1289_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0609_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1404_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0203_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1302_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1372_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0537_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1400_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0597_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1390_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0575_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1380_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0553_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0611_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0610_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0609_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0204_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0202_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0203_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0066_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1372_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0601_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1400_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0579_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1390_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0557_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1380_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1406_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0611_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0099_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0204_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0603_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0602_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0601_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0581_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0580_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0579_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0559_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0558_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0557_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0612_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1406_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0426_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1402_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0603_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1392_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0581_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1382_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0559_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0615_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0614_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0612_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0427_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0425_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0426_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0068_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1402_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1392_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1382_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1408_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0615_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1325_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0427_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0649_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0709_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0061_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0759_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0064_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0619_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1408_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0206_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1325_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0711_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0710_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0709_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0708_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0761_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0760_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0759_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0621_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0620_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0619_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0207_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0205_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0206_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1452_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0711_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1474_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0761_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1410_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0621_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0100_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0207_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0712_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1452_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0762_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1474_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0065_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1410_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_mem 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0100_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0715_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0714_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0713_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0712_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0765_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0764_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0762_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0623_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0065_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0402_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_mem;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0350_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_mem;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1454_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0715_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1476_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0765_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0625_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0624_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0623_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0403_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0401_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0402_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0351_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0350_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0716_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1454_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0766_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1476_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1412_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0625_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1317_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0403_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1293_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0351_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0719_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0718_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0716_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0769_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0768_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0766_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0626_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1412_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0404_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1317_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1118_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1293_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1456_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0719_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1478_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0769_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0629_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0628_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0626_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1120_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1119_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1118_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1117_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0723_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1456_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0773_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1478_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1414_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0629_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1634_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1120_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0725_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0724_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0723_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0775_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0774_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0773_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0633_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1414_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multicycle_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1634_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1458_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0725_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1480_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0775_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0635_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0634_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0633_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0169_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multicycle_done;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1458_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1480_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1416_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0635_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0171_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0169_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0170_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0889_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0054_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0066_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1416_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0088_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0171_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0890_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___b_150 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0889_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___Vfuncout_148 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___b_150)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___b_150) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37390: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1886_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___s_151));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37390, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0891_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1886___Vfuncout_148;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0653_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0060_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1345_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1357_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1351_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1363_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1534_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0891_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0480_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1345_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0504_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1357_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0492_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1351_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0516_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1363_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0895_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1534_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0481_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0480_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0478_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0505_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0504_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0502_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0493_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0492_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0490_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0517_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0516_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0514_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0897_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0896_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0895_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1344_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0481_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1356_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0505_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1350_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0493_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1362_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0517_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1537_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0897_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0483_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0507_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1356_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0495_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1350_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0519_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1362_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0043_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1537_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0485_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0484_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0483_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0509_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0508_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0507_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0497_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0496_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0495_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0521_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0520_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0519_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0977_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1346_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0485_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1358_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0509_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1352_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0497_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1364_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0521_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0979_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0978_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0977_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0976_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0487_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1346_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0511_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1358_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0499_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1352_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0523_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1364_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1578_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0979_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0489_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0488_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0487_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0513_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0512_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0511_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0501_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0500_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0499_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0525_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0524_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0523_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1578_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1578_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1348_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0489_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1360_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0513_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1354_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0501_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1366_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0525_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0032_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0136_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_raw;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1348_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0062_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1360_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1354_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1366_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0138_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0136_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0137_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0899_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0057_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0063_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0919_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0058_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0067_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0076_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0138_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0900_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___b_154 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0899_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___Vfuncout_152 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___b_154)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___b_154) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37406: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1889_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___s_155));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37406, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0901_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1889___Vfuncout_152;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0920_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___b_162 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0919_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___Vfuncout_160 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___b_162)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___b_162) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37438: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1895_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___s_163));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37438, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0921_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1895___Vfuncout_160;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0139_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0076_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1539_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0901_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1549_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0921_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0141_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0139_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0140_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0905_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1539_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0925_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1549_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0141_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0907_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0906_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0905_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0927_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0926_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0925_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0077_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1542_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0907_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1552_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0927_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1542_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1552_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_we_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0981_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0046_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0989_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0047_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___105_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_we_id_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0983_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0982_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0981_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0991_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0990_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0989_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1580_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0983_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1584_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0991_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1580_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_jump 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1580_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1584_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_multdiv 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1584_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0408_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_jump;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0253_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_multdiv;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0256_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_multdiv;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0405_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_multdiv;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0255_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0253_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0254_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0258_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0256_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0257_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0406_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0404_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0405_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0116_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0255_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0117_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0258_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1318_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0406_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_mul_wait_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_div_wait_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0117_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0407_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1318_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_mul_wait 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_mul_wait_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_div_wait 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_div_wait_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0409_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0407_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0408_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mul_wait_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_mul_wait;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__div_wait_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_div_wait;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1319_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0409_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0410_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1319_;
}

void Vtop___024root___nba_comb__TOP__89(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__89\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___Vfuncout_444;
    ::IData/*17:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___Vfuncout_444 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___481_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___483_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___482_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___472_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___474_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___473_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0400_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0398_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0399_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___560_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___481_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___561_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___472_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1316_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0400_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___478_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___560_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___469_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___561_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0803_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1316_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___477_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___478_)
            ? 6U : 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___468_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___469_)
            ? 6U : 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0805_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0804_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0803_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___717_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___477_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___718_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___468_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1494_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0805_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___243_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___717_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___244_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___718_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0806_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1494_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___241_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___242_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___243_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___244_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0809_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0808_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0806_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___650_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___241_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1496_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0809_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___237_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___650_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0810_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1496_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___235_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___237_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___236_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0813_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0812_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0810_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___652_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___235_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1498_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0813_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___652_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0814_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1498_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___177_ 
        = (0x0000262eU | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___059_) 
                           << 0x0000000fU) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___721_) 
                                              << 6U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0817_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0816_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0814_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___176_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___177_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___Vfuncout_444 
        = (7U & ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                  ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                      ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                          ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                      : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                         >> 3U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                   ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                   : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                      >> 6U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 3U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 9U))))
                          : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                      : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                         >> 3U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                   ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                   : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                      >> 6U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 3U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 0x0cU)))))
                      : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                          ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                      : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                         >> 3U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                   ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                   : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                      >> 6U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 3U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 9U))))
                          : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                      : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                         >> 3U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                   ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                   : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                      >> 6U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 3U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 0x0fU))))))
                  : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                      ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                          ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                      : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                         >> 3U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                   ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                   : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                      >> 6U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 3U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 9U))))
                          : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                      : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                         >> 3U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                   ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                   : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                      >> 6U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 3U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 0x0cU)))))
                      : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                          ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                      : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                         >> 3U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                   ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                   : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                      >> 6U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 3U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 9U))))
                          : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                      : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                         >> 3U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                   ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                   : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                      >> 6U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 
                                                    >> 3U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))
                                                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446
                                                    : 0U)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x20U 
                                              == (0x20U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                                             << 5U) 
                                            | (((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                                                << 4U) 
                                               | ((8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                                                  << 3U))) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447)))))))))))) {
        if ((0U != ((((0x20U == (0x20U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                      << 5U) | (((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                                 << 4U) | ((8U == (8U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                                           << 3U))) 
                    | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                        << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:45541: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '6'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._839_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',6,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 45541, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___175_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___Vfuncout_444;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1500_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0817_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___672_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___175_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0821_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1500_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___672_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___672_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___049_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___093_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_d;
}

void Vtop___024root___nba_comb__TOP__90(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__90\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___Vfuncout_180;
    ::QData/*63:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___b_182;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___Vfuncout_180 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___b_182 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1045_ 
        = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__result_ex_i)) 
            << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_rdata_i)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1046_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___b_182 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1045_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___Vfuncout_180 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183)))
            ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___b_182)
            : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183)))
                ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___b_182 
                             >> 0x20U)) : 0U));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37537: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1929_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___s_183));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37537, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1047_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1929___Vfuncout_180;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1612_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1047_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0031_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1612_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1612_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0031_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___109_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_id_i;
}

void Vtop___024root___nba_comb__TOP__95(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__95\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___Vfuncout_324;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___Vfuncout_324 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1045_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1044_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1043_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1042_))) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1041_) 
                       << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1040_) 
                                  << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1039_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326 
        = (0x00000066U | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0117_) 
                            << 4U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0143_) 
                                      << 3U)) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0162_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___Vfuncout_324 
        = (1U & ((0x00000040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                  ? ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                      ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 5U))))))
                      : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 6U)))))))
                  : ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                      ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 5U))))))
                      : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327)) 
                                         && (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326))))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x40U 
                                                == 
                                                (0x40U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                               << 3U) 
                                              | ((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                                 << 2U)) 
                                             | (((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                                 << 1U) 
                                                | (8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))))) 
                                            << 3U) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327)))))))))))) {
        if ((0U != ((((((0x40U == (0x40U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                        << 3U) | ((0x20U == (0x20U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                  << 2U)) | (((0x10U 
                                               == (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                              << 1U) 
                                             | (8U 
                                                == 
                                                (8U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))))) 
                     << 3U) | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                << 2U) | (((2U == (2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327))) 
                                           << 1U) | 
                                          (1U == (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:42704: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '7'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1924_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',7,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 42704, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1038_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___Vfuncout_324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_spec_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0085_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1189_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_spec_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_set_spec_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1189_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_set_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_set_spec_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_spec_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_set_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___161_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_spec_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___161_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___133_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_spec_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___133_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___231_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_spec_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_spec_i;
}

void Vtop___024root___nba_comb__TOP__96(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__96\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___Vfuncout_140;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___b_142;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___Vfuncout_156;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___b_158;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___Vfuncout_168;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___b_170;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___Vfuncout_140 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___b_142 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___Vfuncout_156 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___b_158 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___Vfuncout_168 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___b_170 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0651_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0650_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0649_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0648_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0909_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0056_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0062_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0823_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0822_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0821_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___091_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___092_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___093_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___094_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1424_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0651_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0910_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___b_158 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0909_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___Vfuncout_156 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___b_158)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___b_158) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37422: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1892_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___s_159));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37422, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0911_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1892___Vfuncout_156;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1502_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0823_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___700_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___091_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0652_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1424_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1544_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0911_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1502_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___700_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0655_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0654_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0653_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0652_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0915_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1544_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0939_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0048_) 
           << 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1426_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0655_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0917_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0916_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0915_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0940_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___b_170 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0939_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___Vfuncout_168 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___b_170)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___b_170) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37470: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1901_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___s_171));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37470, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0941_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1901___Vfuncout_168;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0656_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1426_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1547_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0917_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1559_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0941_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0659_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0658_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0656_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1547_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0945_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1559_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1428_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0659_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0985_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0045_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0947_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0946_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0945_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0663_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1428_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0987_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0986_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0985_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1562_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0947_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0665_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0664_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0663_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1582_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0987_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0037_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1562_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1430_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0665_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1582_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_branch 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1582_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0997_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1430_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0411_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_branch;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0999_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0998_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0997_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0869_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0051_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0069_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0412_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0410_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0411_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1588_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0999_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0870_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___b_142 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0869_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___Vfuncout_140 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___b_142)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___b_142) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_743.v:37358: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._1880_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___s_143));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_743.v", 37358, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0871_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1880___Vfuncout_140;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1320_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0412_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1588_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1588_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1524_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0871_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0413_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1320_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0022_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0875_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1524_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0415_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0413_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0414_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0392_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0160_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0877_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0876_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0875_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1321_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0415_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0394_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0392_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0393_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0162_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0160_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0161_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1527_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0877_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1321_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1313_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0394_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0162_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1527_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1195_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0346_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0395_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1313_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0084_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0969_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0040_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1195_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0347_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0346_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0397_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0395_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0396_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1138_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0971_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0970_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0969_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0968_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1291_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0347_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1314_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1138_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1574_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0971_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0172_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1291_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0154_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1314_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0243_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1574_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1574_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0974_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0243_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0978_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0243_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0982_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0243_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0973_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0974_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0977_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0978_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0981_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0982_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1011_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1010_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1009_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1008_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0975_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0973_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0976_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0979_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0977_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0980_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0983_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0981_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0984_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1594_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1011_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0118_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0975_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0119_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0979_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0116_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0983_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1594_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1095_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1096_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0118_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1093_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1094_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0119_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0086_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__perf_jump_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0087_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1093_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__perf_tbranch_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1093_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0037_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0086_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1190_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__perf_jump_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0087_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1191_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__perf_tbranch_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_jump_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1190_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_tbranch_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1191_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_jump 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_jump_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_tbranch 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_tbranch_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__jump_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_jump;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__branch_taken_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_tbranch;
}

void Vtop___024root___nba_comb__TOP__99(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__99\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0174_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0172_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0173_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0174_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0175_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0089_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0177_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0175_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0176_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0090_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0177_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__en_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_done;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__en_wb = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__en_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0232_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__en_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0229_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__en_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__en_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0234_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0232_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0233_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0231_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0229_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0230_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___131_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___133_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___135_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___137_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___139_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___141_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___143_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0109_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0234_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0108_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0231_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___086_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___131_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___090_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___133_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___094_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___135_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___098_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___137_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___102_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___139_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___106_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___141_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___110_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___143_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___023_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___021_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___022_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0109_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_id_done_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___087_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___086_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___085_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___084_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___091_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___090_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___089_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___088_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___095_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___094_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___093_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___092_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___099_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___098_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___097_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___096_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___103_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___102_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___101_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___100_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___107_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___106_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___105_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___104_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___023_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1196_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_id_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_id_done_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0152_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_id_done_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___130_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___087_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___132_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___091_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___134_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___136_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___138_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___103_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___140_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___107_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___072_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___010_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall_wb_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1196_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__unused_instr_id_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_id_done;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0153_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0151_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0152_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___130_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___132_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___134_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___136_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___138_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___140_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___074_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___072_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___073_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0288_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall_wb_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0153_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___126_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___074_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0288_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_en_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0081_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0261_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0246_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0232_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1258_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_en_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_op_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_en_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1253_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_en_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0296_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1258_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_op_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0293_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1253_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0298_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0296_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0297_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00284_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0295_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0293_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0294_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1267_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0298_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00285_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00283_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00284_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1266_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0295_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1603_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1267_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1599_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1267_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00253_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00285_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1611_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1266_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1605_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1266_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1609_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1266_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1601_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1266_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1603_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1599_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00286_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00253_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1611_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1605_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1609_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1601_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1019_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1018_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1017_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00288_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00286_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00287_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1039_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1038_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1037_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1598_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1019_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00254_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00288_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1608_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1598_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00254_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1608_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1023_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1022_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1020_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09584_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09586_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09588_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09590_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09502_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09506_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09515_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09520_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09592_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09600_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09602_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09618_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09620_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09610_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00325_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09598_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09524_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09542_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09546_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09578_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09582_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00341_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09562_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00332_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09538_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09604_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09606_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09550_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09554_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09612_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09566_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09608_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09428_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09440_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09444_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09448_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09456_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09460_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09464_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09468_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09472_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09474_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09478_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09482_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09492_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09558_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09622_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09510_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09488_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09614_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09616_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09570_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09574_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09624_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09432_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09436_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09452_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09498_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09596_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09534_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09594_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09529_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1041_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1600_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1023_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01770_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09584_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01774_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09586_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01778_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09588_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01782_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09590_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01189_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09502_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01200_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09506_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01314_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09515_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01417_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09520_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01786_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09592_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01802_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09600_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01806_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09602_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01838_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09618_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01842_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09620_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01822_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09610_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00327_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00325_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00326_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01798_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09598_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01428_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09524_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01656_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09542_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01667_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09546_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01755_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09578_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01766_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09582_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01711_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09562_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01645_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09538_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01810_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09604_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01814_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09606_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01678_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09550_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01689_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09554_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01826_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09612_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01722_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09566_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01818_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09608_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00990_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09428_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09440_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09444_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09448_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09456_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09460_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09464_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01100_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09468_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01111_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09472_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01115_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09474_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01126_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09478_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01137_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09482_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01163_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09492_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01700_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09558_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01846_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09622_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01211_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09510_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01152_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09488_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01830_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09614_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01834_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09616_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01733_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09570_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01744_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09574_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01850_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09624_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09432_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09436_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01056_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09452_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01178_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09498_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01794_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09596_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01634_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09534_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01790_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09594_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01531_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09529_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1600_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01315_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01313_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01314_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01418_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01416_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01417_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00268_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00327_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01429_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01428_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01427_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01657_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01656_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01655_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01668_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01667_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01666_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01756_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01755_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01754_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01767_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01766_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01765_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01646_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01645_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01644_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01679_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01678_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01677_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01690_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01689_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01688_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01723_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01722_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01721_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00991_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00989_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00990_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01035_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01034_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01033_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01046_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01044_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01045_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01079_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01078_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01077_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01090_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01089_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01088_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01101_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01100_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01099_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01116_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01114_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01115_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01138_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01137_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01136_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01164_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01163_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01162_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01701_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01700_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01699_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01212_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01211_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01210_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01734_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01733_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01732_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01745_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01744_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01743_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01635_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01633_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01634_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01532_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01530_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01531_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0059_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09514_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01315_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09519_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01418_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00328_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00268_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09523_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01429_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09541_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01657_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09545_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01668_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09577_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01756_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09581_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01767_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09537_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01646_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09549_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01679_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09553_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01690_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09565_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01723_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09427_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00991_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09443_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09447_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01046_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09459_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01079_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09463_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09467_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01101_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09473_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09481_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01138_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09491_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01164_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09557_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01701_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09509_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01212_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09569_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01734_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09573_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01745_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09533_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01635_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09528_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01532_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1027_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1026_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1025_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00184_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09514_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00183_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09519_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00330_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00328_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00329_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00188_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09523_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00194_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09541_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00193_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09545_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00205_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09577_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00204_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09581_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00199_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09537_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00192_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09549_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00190_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09553_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00210_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09565_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00208_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09509_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00198_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09569_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00201_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09573_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00202_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09533_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00203_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09528_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1602_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01769_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00184_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01773_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00183_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00269_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00330_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01785_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00188_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01801_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00194_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01805_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00193_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01837_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00205_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01841_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00204_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01797_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00199_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01809_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01813_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00190_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01825_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00210_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01845_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00208_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01829_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00198_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01833_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00201_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01793_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00202_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01789_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00203_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1602_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01771_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01769_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01770_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01775_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01773_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01774_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00269_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01787_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01786_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01785_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01803_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01802_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01801_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01807_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01806_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01805_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01839_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01838_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01837_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01843_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01842_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01841_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01799_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01798_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01797_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01811_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01810_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01809_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01815_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01814_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01813_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01827_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01826_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01825_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01847_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01846_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01845_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01831_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01830_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01829_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01835_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01834_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01833_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01795_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01793_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01794_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01791_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01789_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01790_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1031_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1030_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1028_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09583_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01771_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09585_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01775_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08956_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09591_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01787_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09599_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01803_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09601_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01807_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09617_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01839_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09619_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01843_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09597_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01799_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09603_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01811_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09605_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01815_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09611_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01827_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09621_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01847_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09613_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01831_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09615_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01835_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09595_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01795_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09593_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01791_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1604_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1031_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00146_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09583_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00145_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09585_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08956_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00153_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09591_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09591_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00161_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09599_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch1_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09599_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00160_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09601_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09601_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00173_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09617_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mscratch_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09617_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00172_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09619_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09619_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09597_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09597_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00159_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09603_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00157_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09605_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00178_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09611_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09621_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00165_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09613_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00169_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09615_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00170_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09595_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09595_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00171_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09593_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09593_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1604_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00146_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00145_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___09_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00153_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08976_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00161_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch1_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00160_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08994_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00098_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00173_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mscratch_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00097_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00172_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00167_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00865_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00159_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00733_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00159_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00873_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00157_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00749_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00157_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00885_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00178_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00782_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00178_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00722_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00178_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00946_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00176_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00941_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00176_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00830_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00176_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00698_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00176_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00898_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00893_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00798_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00626_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00505_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00922_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00917_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00814_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00650_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00537_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00170_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__unused_mhpmcounter_we_1 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__g_mcountinhibit_reduced__02eunused_mhphcounter_we 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
           >> 0x0000000dU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09099_ 
        = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09100_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09101_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09102_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09103_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09104_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09105_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09106_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09107_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09108_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09109_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09110_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00171_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__unused_mhpmcounterh_we_1 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__g_mcountinhibit_reduced__02eunused_mhphcounterh_we 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
           >> 0x0000000dU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09111_ 
        = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09112_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09113_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09114_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09115_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09116_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09117_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09118_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09119_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09120_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09121_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09122_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0050_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___09_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08976_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09000_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08994_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09024_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09018_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09175_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09067_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00736_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00735_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00733_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00752_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00751_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00749_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00724_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00723_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00722_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00944_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00943_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00941_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00700_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00699_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00698_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00628_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00627_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00626_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00508_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00507_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00505_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00652_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00651_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00650_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00540_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00539_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00537_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08961_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08968_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09100_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08873_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09101_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08880_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09102_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08887_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09103_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08894_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09104_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08901_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09105_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08908_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09106_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08915_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09107_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08922_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08929_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09109_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08936_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08962_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09111_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08969_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09112_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08874_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09113_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08881_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09114_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08888_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09115_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08895_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08902_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09117_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08909_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09118_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08916_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09119_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08923_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09120_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08930_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09121_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08937_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09122_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1043_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1042_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1041_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1040_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00476_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09175_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09301_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00736_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09309_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00752_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09295_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00724_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09405_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00944_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09283_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00700_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09247_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00628_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09187_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00508_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09259_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00652_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09203_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00540_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08961_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08968_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08873_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08880_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08887_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08894_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08901_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08908_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08915_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08922_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08929_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08936_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08962_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08969_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08874_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08881_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08888_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08895_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08902_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08909_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08916_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08923_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08930_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08937_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1610_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___3_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__wr_data_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00738_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00754_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09309_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00725_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09295_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00945_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09405_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00701_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09283_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00629_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09247_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00510_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09187_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00653_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09259_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00542_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09203_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___48_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1610_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_pipe_flush 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1610_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00728_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00727_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00725_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00948_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00947_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00946_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00945_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00704_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00703_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00701_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00632_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00631_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00629_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00512_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00511_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00510_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00656_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00655_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00653_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00544_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00543_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00542_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___31_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___46_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___35_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___14_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0026_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1145_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_pipe_flush;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09297_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00728_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09407_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00948_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09285_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00704_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09249_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00632_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09189_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00512_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09261_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00656_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09205_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00544_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1145_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00730_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09297_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00949_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09407_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00706_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09285_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00634_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09249_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00513_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09189_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00658_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09261_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00545_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09205_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___38_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0205_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00516_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00515_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00513_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00548_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00547_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00545_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___27_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___44_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___23_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___42_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0205_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09191_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00516_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09207_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00548_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0272_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00517_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09191_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00549_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09207_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req_flush_only 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0272_;
}
