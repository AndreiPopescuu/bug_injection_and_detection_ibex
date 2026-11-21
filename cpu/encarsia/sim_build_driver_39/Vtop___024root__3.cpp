// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___ico_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___Vfuncout_0;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___Vfuncout_76;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___a_77;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___Vfuncout_80;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___Vfuncout_140;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___b_142;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___Vfuncout_144;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___b_146;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___Vfuncout_148;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___b_150;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___Vfuncout_152;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___b_154;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___Vfuncout_156;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___b_158;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___Vfuncout_160;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___b_162;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___Vfuncout_164;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___b_166;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___Vfuncout_168;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___b_170;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___Vfuncout_172;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___b_174;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___Vfuncout_176;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___b_178;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___Vfuncout_180;
    ::QData/*63:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___b_182;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___Vfuncout_320;
    ::QData/*39:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322;
    ::SData/*9:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___Vfuncout_324;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___Vfuncout_328;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___Vfuncout_340;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___Vfuncout_344;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___Vfuncout_356;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___Vfuncout_360;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___Vfuncout_376;
    ::SData/*11:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379;
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___Vfuncout_396;
    ::VlWide<3>/*67:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___Vfuncout_400;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___b_402;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___Vfuncout_444;
    ::IData/*17:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447;
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___Vfuncout_448;
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___a_449;
    ::VlWide<6>/*169:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___Vfuncout_452;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___a_453;
    ::QData/*63:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___b_454;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___Vfuncout_464;
    ::SData/*14:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___Vfuncout_468;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___a_469;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___b_470;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___Vfuncout_472;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___a_473;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___b_474;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___Vfuncout_476;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___a_477;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___Vfuncout_480;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___b_482;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___Vfuncout_484;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___Vfuncout_488;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___Vfuncout_528;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___Vfuncout_532;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___Vfuncout_536;
    ::SData/*11:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___b_538;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539;
    ::CData/*0:0*/ __Vdfg_Regularize_11342;
    ::CData/*1:0*/ __Vdfg_Regularize_11368;
    ::IData/*31:0*/ __Vdfg_Regularize_11404;
    ::CData/*3:0*/ __Vdfg_Regularize_11405;
    ::QData/*63:0*/ __Vdfg_Regularize_11406;
    ::QData/*63:0*/ __Vdfg_Regularize_11407;
    ::QData/*63:0*/ __Vdfg_Regularize_11408;
    ::QData/*63:0*/ __Vdfg_Regularize_11409;
    ::QData/*63:0*/ __Vdfg_Regularize_11410;
    ::QData/*63:0*/ __Vdfg_Regularize_11411;
    ::QData/*63:0*/ __Vdfg_Regularize_11412;
    ::QData/*63:0*/ __Vdfg_Regularize_11413;
    ::QData/*63:0*/ __Vdfg_Regularize_11414;
    ::QData/*63:0*/ __Vdfg_Regularize_11415;
    ::QData/*63:0*/ __Vdfg_Regularize_11416;
    ::QData/*63:0*/ __Vdfg_Regularize_11417;
    ::CData/*2:0*/ __Vdfg_Regularize_11418;
    ::IData/*31:0*/ __Vdfg_Regularize_11429;
    ::CData/*0:0*/ __Vdfg_Regularize_11430;
    ::CData/*0:0*/ __Vdfg_Regularize_11431;
    ::CData/*0:0*/ __Vdfg_Regularize_11432;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___Vfuncout_0 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___Vfuncout_76 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___a_77 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___Vfuncout_80 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___Vfuncout_140 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___b_142 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___Vfuncout_144 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___b_146 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___Vfuncout_148 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___b_150 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___Vfuncout_152 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___b_154 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___Vfuncout_156 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___b_158 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___Vfuncout_160 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___b_162 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___Vfuncout_164 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___b_166 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___Vfuncout_168 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___b_170 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___Vfuncout_172 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___b_174 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___Vfuncout_176 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___b_178 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___Vfuncout_180 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___b_182 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___Vfuncout_320 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___Vfuncout_324 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___b_326 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___Vfuncout_328 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___Vfuncout_340 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___Vfuncout_344 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___Vfuncout_356 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___Vfuncout_360 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___Vfuncout_376 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___Vfuncout_396 = 0;
    VL_ZERO_W(68, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___Vfuncout_400 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___b_402 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___Vfuncout_444 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___b_446 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___Vfuncout_448 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___a_449 = 0;
    VL_ZERO_W(170, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___b_450);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___Vfuncout_452 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___a_453 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___b_454 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___Vfuncout_464 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___Vfuncout_468 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___a_469 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___b_470 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___Vfuncout_472 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___a_473 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___b_474 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___Vfuncout_476 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___a_477 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___Vfuncout_480 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___b_482 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___Vfuncout_484 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___Vfuncout_488 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___Vfuncout_528 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___Vfuncout_532 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___Vfuncout_536 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___b_538 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539 = 0;
    __Vdfg_Regularize_11342 = 0;
    __Vdfg_Regularize_11368 = 0;
    __Vdfg_Regularize_11404 = 0;
    __Vdfg_Regularize_11405 = 0;
    __Vdfg_Regularize_11406 = 0;
    __Vdfg_Regularize_11407 = 0;
    __Vdfg_Regularize_11408 = 0;
    __Vdfg_Regularize_11409 = 0;
    __Vdfg_Regularize_11410 = 0;
    __Vdfg_Regularize_11411 = 0;
    __Vdfg_Regularize_11412 = 0;
    __Vdfg_Regularize_11413 = 0;
    __Vdfg_Regularize_11414 = 0;
    __Vdfg_Regularize_11415 = 0;
    __Vdfg_Regularize_11416 = 0;
    __Vdfg_Regularize_11417 = 0;
    __Vdfg_Regularize_11418 = 0;
    __Vdfg_Regularize_11429 = 0;
    __Vdfg_Regularize_11430 = 0;
    __Vdfg_Regularize_11431 = 0;
    __Vdfg_Regularize_11432 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___417_ 
        = vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___743___Vfuncout_524;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___434_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___433_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___432_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___431_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___Vfuncout_528 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                        ? 7U : 3U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                                       ? 7U : 1U)) : 
               ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                 ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                     ? 7U : 3U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                                    ? 7U : 0U))) : 
           ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
             ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                 ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                     ? 7U : 3U) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                                    ? 7U : 1U)) : (
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                                                    ? 
                                                   ((1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                                                     ? 7U
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))
                                                     ? 7U
                                                     : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22432: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._754_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___s_531));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22432, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___430_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___754___Vfuncout_528;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___443_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___442_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___441_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___440_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___Vfuncout_532 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                                          ? 8U : 0x0eU))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                                          ? 8U : 0x0fU)))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                                          ? 8U : 0x0eU))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                        ? 8U : 0x0cU) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))
                                          ? 8U : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22457: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._762_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___s_535));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22457, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___439_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___762___Vfuncout_532;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___109_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___103_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___104_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___108_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___102_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___128_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0152_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1537_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0148_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1531_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0150_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1525_;
    __Vdfg_Regularize_11404 = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0841_) 
                                 << 0x0000001fU) | 
                                (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1201_) 
                                  << 0x00000016U) | 
                                 (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1124_) 
                                   << 0x00000015U) 
                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1281_) 
                                      << 0x00000012U) 
                                     | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1362_) 
                                         << 0x00000011U) 
                                        | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1322_) 
                                           << 0x00000010U)))))) 
                               | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1243_) 
                                      << 5U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1482_) 
                                                << 4U)) 
                                    | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1081_) 
                                        << 3U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0880_))) 
                                   << 8U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0919_) 
                                               << 7U) 
                                              | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0960_) 
                                                 << 4U)) 
                                             | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1037_) 
                                                 << 3U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1439_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0385_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0384_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_priv));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___328_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___Vfuncout_396 
        = (0x00000003ffffffffULL & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399)))
                                     ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[1U])) 
                                         << 0x00000020U) 
                                        | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[0U])))
                                     : ((2U == (2U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399)))
                                         ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[2U])) 
                                             << 0x0000003eU) 
                                            | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[2U])) 
                                                << 0x0000001eU) 
                                               | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[1U])) 
                                                  >> 2U)))
                                         : 0ULL)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19067: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._792_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19067, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___327_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___Vfuncout_396;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0237_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0230_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0551_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0549_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0552_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0637_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0635_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0638_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0579_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0580_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0577_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0621_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0619_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0622_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0593_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0594_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0591_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0607_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0608_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0605_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0565_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0566_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0563_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0537_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0538_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0535_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1210_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1208_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1211_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___698_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__is_greater_equal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___698_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__result_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__branch_decision_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_cmp_result;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___247_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___646_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___478_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___560_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___469_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___561_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___694_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___106_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___696_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___638_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___273_;
    vlSelfRef.encarsia_tb__DOT__data_addr_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___404_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___404_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___414_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___409_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___416_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___422_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___417_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___435_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___430_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___444_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___439_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___124_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___108_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___109_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0152_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0148_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0150_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0154_ 
        = __Vdfg_Regularize_11404;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_int 
        = __Vdfg_Regularize_11404;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0251_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_access_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0385_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___611_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___327_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0231_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0237_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0553_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0551_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0554_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0639_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0640_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1349_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0637_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0581_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0582_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0579_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0623_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0621_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0624_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0595_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0596_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0593_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0609_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0610_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0607_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0567_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0568_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0565_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0539_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0540_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0537_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1210_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___047_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___519_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__is_greater_equal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___526_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__is_greater_equal;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__branch_decision 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__branch_decision_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___245_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___246_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___247_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___477_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___478_)
            ? 6U : 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___468_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___469_)
            ? 6U : 1U);
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
    vlSelfRef.__VprimaryPorts.data_addr_o = vlSelfRef.encarsia_tb__DOT__data_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___088_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___414_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___424_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___422_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___425_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___437_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___435_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___438_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___446_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___444_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___447_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___241_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___242_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___124_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___124_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0154_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0251_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___611_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___611_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0404_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0231_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0555_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0553_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0556_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0641_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0642_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1348_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0639_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0583_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0584_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0581_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0625_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0623_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0626_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0597_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0598_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0595_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0611_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0612_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0609_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0569_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0570_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0567_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0541_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0542_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0539_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1212_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1213_)
            ? 4U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0049_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___518_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___519_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___520_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___521_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___525_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___526_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___527_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___528_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_decision_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__branch_decision;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___648_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___245_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___717_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___477_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___718_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___468_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___053_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___052_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___266_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___268_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___267_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_wdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___424_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___437_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___446_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___457_ 
        = (2U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__split_misaligned_access))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___458_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__split_misaligned_access)
            ? 1U : 3U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_rdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0252_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_o 
           & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0368_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0386_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i 
           | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_rdata_o);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0369_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_insn_o)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_csr_insn_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___048_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___532_ 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_d);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___538_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0557_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0555_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0558_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0643_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0641_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0644_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0585_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0583_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0586_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0627_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0625_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0628_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0599_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0597_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0600_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0613_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0611_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0614_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0571_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0569_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0572_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0543_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0541_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0544_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1214_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1212_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1215_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___716_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___518_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___715_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___525_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___371_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_decision_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___372_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___183_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_ind_timing_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_decision_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___056_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___648_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___243_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___717_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___244_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___718_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___640_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___266_;
    vlSelfRef.encarsia_tb__DOT__data_wdata_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_wdata_o;
    if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q) {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___426_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___448_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___069_;
    } else {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___426_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___084_;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___448_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___059_;
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___235_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___236_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___457_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___458_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_rdata_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_rdata;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0396_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0395_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0394_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0393_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0252_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0386_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0386_))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___Vfuncout_0 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___b_2[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:3852: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.cs_registers_i._1685_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___s_3));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 3852, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0392_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1685___Vfuncout_0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_csr_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_csr_insn_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___529_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___530_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___531_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___532_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0559_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0557_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0560_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0645_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0643_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0646_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0587_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0585_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0588_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0629_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0627_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0630_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0601_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0599_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0602_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0615_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0613_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0616_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0573_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0571_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0574_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0545_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0543_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0546_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1216_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1214_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1217_))))));
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___373_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___374_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___371_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___361_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___183_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___362_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___157_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___241_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___242_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___243_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___244_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___640_;
    vlSelfRef.__VprimaryPorts.data_wdata_o = vlSelfRef.encarsia_tb__DOT__data_wdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___428_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___426_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___429_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___450_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___448_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___451_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0155_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0392_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0392_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___151_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_csr_insn_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___176_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_csr_insn_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___178_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_csr_insn_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___714_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___529_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0559_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0123_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0645_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0177_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0587_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0198_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0629_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0185_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0601_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0184_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0615_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0573_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0155_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0545_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1218_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1216_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1219_))))));
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
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19339: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._858_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___s_455));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19339, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___116_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___858___Vfuncout_452;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___262_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___263_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___264_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___265_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___375_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___376_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___373_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___363_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___364_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___361_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___155_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___156_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___157_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___158_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___650_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___241_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___428_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___450_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0155_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_d 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_wdata 
        = (0x0000003fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0347_ 
        = (1U > vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0715_ 
        = (3U & ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x0000000bU) & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0716_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0719_ 
        = (3U & ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x0000000bU) & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0720_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0411_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0412_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_q
            : (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0653_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0654_)
                  ? (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 0x0000000fU) : (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                                        >> 0x0000000fU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0685_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0686_)
                  ? (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 2U) : (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                               >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0691_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0692_)
                  ? (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                     >> 0x0000000cU) : (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                                        >> 0x0000000cU)));
    vlSelfRef.__Vdfg_Regularize_11334 = ((0x00000020U 
                                          & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x0000001aU)) 
                                         | (0x0000001fU 
                                            & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0356_ 
        = (3U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0357_ 
        = (0U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0665_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0666_)
                  ? ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                            >> 0x00000010U)) | (1U 
                                                & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 0x00000015U)))
                  : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q)));
    __Vdfg_Regularize_11368 = ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      >> 2U)) | (1U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 7U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0354_ 
        = (3U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x0000000bU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0355_ 
        = (0U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                        >> 0x0000000bU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___114_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___113_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___176_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___078_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___178_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_result_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___714_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0675_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0676_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0050_)
            : 5U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0751_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0123_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0752_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0699_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0700_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0177_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0651_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0652_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0198_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0649_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0711_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0712_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0185_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0723_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0724_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0184_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0687_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0688_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0176_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0663_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0664_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0155_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1220_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1218_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1221_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___691_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___642_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___262_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___377_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___375_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___365_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___366_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___363_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___679_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___155_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___237_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___650_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___456_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___455_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___454_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___b_538 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___046_) 
            << 8U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___078_) 
                       << 4U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___088_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___Vfuncout_536 
        = (0x0000000fU & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539)))
                           ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___b_538)
                           : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539)))
                               ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___b_538) 
                                  >> 4U) : ((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539)))
                                             ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___b_538) 
                                                >> 8U)
                                             : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22485: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._773_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___s_539));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22485, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___452_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___773___Vfuncout_536;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_d;
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1605_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0347_) 
           & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0413_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0411_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0414_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0449_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0450_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_q)
            : (::IData)(vlSelfRef.__Vdfg_Regularize_11334));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0343_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0356_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0357_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_d 
        = (((::IData)(__Vdfg_Regularize_11368) << 0x00000010U) 
           | ((0x00008000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                              << 4U)) | (0x00007fffU 
                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 0x00000010U))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0645_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0646_)
                  ? (::IData)(__Vdfg_Regularize_11368)
                  : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                     >> 4U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0342_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0354_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0355_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___115_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___114_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___177_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_result_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0677_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0678_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0675_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0753_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0751_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0754_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0701_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0702_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0699_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0653_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0654_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1350_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0651_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0713_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0711_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0714_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0725_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0723_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0726_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0689_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0687_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0690_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0665_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0663_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0666_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1222_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1220_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1223_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___691_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___691_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___257_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___642_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___367_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___365_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___679_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___679_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___235_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___237_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___236_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___452_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___452_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1605_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0415_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0413_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0416_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0451_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0449_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0452_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0700_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0343_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0710_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0342_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_perf_count_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___115_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_insn_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___148_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___150_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_o)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0679_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0680_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0677_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0092_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0753_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0703_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0704_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0701_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0655_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0656_)
            ? 2U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0653_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0715_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0713_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0716_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0727_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0725_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0728_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0691_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0689_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0692_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0667_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0665_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0668_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1224_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1222_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1225_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___054_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___255_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___257_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___256_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___652_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___235_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___030_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0453_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0451_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0454_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0699_ 
        = (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                 | (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0700_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0709_ 
        = (3U & ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x0000000bU) | (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0710_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_perf_count_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_perf_count_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__unused_illegal_insn_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_insn_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0266_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_dret));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___071_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___070_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___148_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___074_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___073_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___150_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___07_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_sel)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_result
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_result);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__result_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___07_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0681_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0682_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0679_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1097_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0092_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1098_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0705_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0706_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0703_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0657_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0658_)
            ? 1U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0655_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0717_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0715_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0718_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0729_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0727_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0730_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0693_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0691_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0694_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0669_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0667_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0670_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1226_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1224_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1227_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___644_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___255_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___652_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_be_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0701_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0699_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0702_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0711_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0709_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0712_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_perf_count_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_perf_count_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0267_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0266_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_umode));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___072_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___071_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___075_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___074_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__result_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__result_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0683_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0681_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0684_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1097_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mtval_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1097_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0707_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0705_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0708_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0659_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0657_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0660_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0719_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0717_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0720_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0731_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0729_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0732_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0695_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0693_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0696_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0671_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0669_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0672_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1228_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1226_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1229_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___644_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___177_ 
        = (0x0000262eU | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___059_) 
                           << 0x0000000fU) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___721_) 
                                              << 6U)));
    vlSelfRef.encarsia_tb__DOT__data_be_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_be_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0210_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0267_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0250_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___075_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__result_ex_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__result_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0685_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0683_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0686_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0059_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mtval_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mtval_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0709_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0707_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0710_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0661_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0659_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0662_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0721_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0719_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0722_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0733_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0731_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0734_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0697_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0695_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0698_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0673_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0671_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0674_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1230_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1228_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1231_))))));
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
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19280: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '6'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._839_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',6,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___s_447));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19280, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___175_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___839___Vfuncout_444;
    vlSelfRef.__VprimaryPorts.data_be_o = vlSelfRef.encarsia_tb__DOT__data_be_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0210_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0210_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___103_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_wb_match) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___104_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_wb_match) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___481_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___480_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___b_182 
        = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__result_ex_i)) 
            << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_rdata_i)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___Vfuncout_180 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183)))
            ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___b_182)
            : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183)))
                ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___b_182 
                             >> 0x20U)) : 0U));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13245: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._796_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___s_183));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13245, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___479_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___796___Vfuncout_180;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0685_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtval 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mtval_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0166_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0709_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0193_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0661_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0175_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0721_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0174_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0733_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0165_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0697_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0135_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0673_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1232_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1230_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1233_))))));
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
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19310: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._848_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___s_451));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19310, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___148_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___848___Vfuncout_448;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___672_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___175_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0269_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0268_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_ren_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_hz 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___103_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_ren_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_hz 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___104_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___031_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___479_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___479_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtval_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtval;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0759_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0760_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0166_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0763_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0193_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0764_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0767_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0768_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0175_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0191_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0771_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0772_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0174_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0190_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0755_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0756_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0165_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0743_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0744_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0135_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1232_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___681_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___148_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___672_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___672_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0270_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0269_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__gen_no_regfile_ecc__02eunused_rf_ren_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_ren_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__gen_no_regfile_ecc__02eunused_rf_ren_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_ren_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___193_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_hz) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_hz));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___031_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0761_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0759_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0762_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0765_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0763_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0766_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0769_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0767_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0770_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0773_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0771_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0774_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0757_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0755_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0758_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0745_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0743_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0746_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1234_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1235_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0047_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___055_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___681_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_remainder_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___681_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___049_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___093_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0211_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0270_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0251_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___107_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__outstanding_load_wb_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___193_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0505_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtval_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0507_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0505_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0508_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0127_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0761_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0187_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0765_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0162_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0769_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0161_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0773_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0147_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0757_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0108_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0745_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1236_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1234_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1237_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___055_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___537_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_remainder_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0211_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0211_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___107_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1112_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1111_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0096_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0127_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___Vfuncout_360 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16742: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1996_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16742, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1110_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___Vfuncout_360;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1103_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1102_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1101_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1100_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358 
        = (4U | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0095_) 
                  << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0126_) 
                             << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0147_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___Vfuncout_356 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359)) 
                                            && (1U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16714: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1985_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16714, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1099_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___Vfuncout_356;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1077_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1076_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1075_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1074_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1073_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342 
        = (0x0000001eU | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0108_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___Vfuncout_340 
        = (1U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 4U)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343)) 
                                                && (1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16621: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1958_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16621, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1072_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___Vfuncout_340;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1238_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1236_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1239_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___535_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___536_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___537_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___538_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0274_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0273_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___194_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02eoutstanding_memory_access) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___165_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___167_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0062_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0075_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1240_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1238_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1241_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___713_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___535_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0275_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0274_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___111_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___110_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___194_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___095_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___094_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___165_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___097_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___096_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___167_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0063_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0062_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0075_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1242_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1240_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1243_))))));
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req_pc_change 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0275_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_dside_wait_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___111_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___098_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___097_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___168_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_cause 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__flush_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1244_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1242_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1245_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_d_o[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_dside_wait 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_dside_wait_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___330_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___442_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___395_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___446_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___405_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___216_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___298_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___284_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___240_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___326_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___270_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___278_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___260_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___458_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___435_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___380_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___460_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___440_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___390_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___456_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___430_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___370_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___454_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___425_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___360_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___444_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___450_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___400_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___448_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___415_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___410_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___312_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___228_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___340_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___222_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___452_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___420_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___234_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___348_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___250_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___098_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_cause;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___159_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__flush_id)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1246_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1244_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1247_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___04_ 
        = (0x00000003ffffffffULL & ((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                      << 0x0000003eU) 
                                     | (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[2U])) 
                                         << 0x0000001eU) 
                                        | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                           >> 2U))) 
                                    & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_sel)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___05_ 
        = (0x00000003ffffffffULL & ((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U])) 
                                      << 0x00000020U) 
                                     | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U]))) 
                                    & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_sel)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dside_wait_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_dside_wait;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___379_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___377_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___380_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___389_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___387_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___390_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___369_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___367_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___370_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___359_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___357_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___360_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___311_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___309_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___312_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___339_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___337_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___340_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___462_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___499_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___080_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_access_o) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___498_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___497_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___079_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0576_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_id_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0640_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0586_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0596_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0608_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0620_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0638_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0584_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0588_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0594_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0602_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0614_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0626_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0590_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0592_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0402_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0448_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0524_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0548_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0556_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0564_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0520_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0528_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0544_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0552_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0560_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0568_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0532_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0536_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0418_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0456_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0462_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0474_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0510_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0410_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0426_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0468_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0480_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0504_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0516_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0434_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0442_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0582_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0540_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0572_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0486_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0492_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0498_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0632_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0580_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1248_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1246_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1249_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[0U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___05_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[1U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___04_) 
            << 2U) | (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___05_ 
                                >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[2U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___04_) 
            >> 0x0000001eU) | ((::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___04_ 
                                          >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___379_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___053_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___389_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___369_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___052_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___359_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___055_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___311_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___056_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___339_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___499_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___498_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___497_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0575_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0576_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_id_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0573_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0637_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0635_) 
                 | (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0638_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0417_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0415_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0418_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0455_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0453_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0456_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0509_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0507_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0510_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0433_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0431_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0434_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0441_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0442_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0439_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0485_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0483_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0486_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1250_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1248_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1251_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_d_o[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___433_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___432_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___b_174 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___049_) 
           << 1U);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___Vfuncout_172 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___b_174)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___b_174) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13194: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._771_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___s_175));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13194, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___431_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___771___Vfuncout_172;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___438_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___437_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___b_178 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___053_) 
           << 1U);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___Vfuncout_176 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___b_178)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___b_178) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13210: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._774_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___s_179));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13210, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___436_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___774___Vfuncout_176;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___428_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___427_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___b_170 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___048_) 
           << 1U);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___Vfuncout_168 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___b_170)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___b_170) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13178: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._768_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___s_171));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13178, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___426_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___768___Vfuncout_168;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___423_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___422_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___b_166 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___052_) 
           << 1U);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___Vfuncout_164 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___b_166)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___b_166) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13162: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._765_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___s_167));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13162, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___421_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___765___Vfuncout_164;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___398_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___397_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___b_146 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___055_) 
           << 1U);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___Vfuncout_144 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___b_146)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___b_146) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13082: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._750_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___s_147));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13082, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___396_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___750___Vfuncout_144;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0577_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0578_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_if_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0575_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0180_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0637_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0637_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0232_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0417_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0230_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0455_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0225_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0509_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0248_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0441_) 
            << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0433_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0222_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0485_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1252_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1250_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1253_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_d_ex[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___434_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___431_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___435_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___439_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___436_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___440_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___429_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___426_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___430_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___424_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___421_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___425_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___399_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___396_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___400_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__div_en_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__mult_en_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0579_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0577_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0580_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0141_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0180_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0142_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_if_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0615_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0616_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0232_
            : (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0603_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0604_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0230_)
            : (::IData)(vlSelfRef.__Vdfg_Regularize_11334));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0545_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0546_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0225_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0537_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0538_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0222_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___434_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___439_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___037_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___429_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___041_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___424_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__div_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__div_en_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__mult_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__mult_en_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0195_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0579_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__priv_mode_if 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_if_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0617_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0618_)
            ? (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0615_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0605_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0606_)
            ? (::IData)(vlSelfRef.__Vdfg_Regularize_11334)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0603_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0547_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0545_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0548_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0539_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0537_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0540_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1254_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1255_)
            ? 6U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0045_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___457_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___458_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___038_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___459_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___460_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___042_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___455_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___456_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___037_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___453_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___454_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___041_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___443_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___444_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___044_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__div_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__mult_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___284_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___288_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___264_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___292_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___272_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___244_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___250_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___268_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___256_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___276_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___280_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___143_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___129_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___260_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___238_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0639_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0640_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0195_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_id_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0521_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0522_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0195_
            : (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__g_no_pmp__02eunused_priv_lvl_if 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__priv_mode_if;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0209_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0547_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0206_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0539_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1256_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1254_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1257_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___457_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___457_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___459_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_branch_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___459_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___455_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___455_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___453_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set_raw 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___453_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___443_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_alu 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___443_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___546_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___551_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___372_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___283_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___284_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___287_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_pmp_err_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___288_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___291_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___292_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___243_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___241_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___244_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___249_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___247_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___250_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___255_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___253_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___256_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___275_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_we_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___276_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___279_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___131_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___280_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___237_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___235_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___238_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0639_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0162_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0639_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0523_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0521_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0524_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0469_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)
            ? (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0195_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0471_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0469_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0472_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0595_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0596_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0209_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0581_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0582_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0206_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1258_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1256_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1259_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___023_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___030_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_branch 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_branch_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___022_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___083_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set_raw) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___153_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___544_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___546_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___545_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___549_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___551_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___550_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___369_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___370_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___372_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___285_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___283_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___286_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___289_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___287_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___290_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___293_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___291_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___294_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___245_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___243_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___246_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___251_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___249_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___252_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___257_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___255_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___258_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___277_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___275_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___278_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___281_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___279_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___282_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___239_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___237_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___240_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0162_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0191_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0523_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0473_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0471_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0474_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0177_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0595_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0595_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0174_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0581_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0581_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1260_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1258_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1261_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___085_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw_spec) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___155_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__branch_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_branch;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___180_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set_raw) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___084_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_raw) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___154_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___083_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___068_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___544_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___549_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___593_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___369_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___285_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___053_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___289_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___293_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___245_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___057_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___251_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___257_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___052_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___277_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___281_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___239_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0585_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0586_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0191_
            : (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0220_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0473_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0105_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0177_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0101_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0174_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1262_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1260_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1263_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___085_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___181_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___180_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___084_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_en_internal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_en_internal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___067_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___366_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___593_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___304_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___303_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___302_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___b_470 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___050_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___062_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___072_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___a_469 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_q;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___Vfuncout_468 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___b_470)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___b_470) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471)))
                                    ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___b_470) 
                                       >> 2U) : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___a_469)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22074: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._639_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___s_471));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22074, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___301_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___639___Vfuncout_468;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___308_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___307_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___306_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___b_474 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___053_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___063_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___073_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___a_473 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___Vfuncout_472 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___b_474)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___b_474) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475)))
                                    ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___b_474) 
                                       >> 2U) : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___a_473)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22093: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._643_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___s_475));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22093, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___305_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___643___Vfuncout_472;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___332_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___331_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___330_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___329_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490 
        = (7U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___047_) 
                 << 3U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___Vfuncout_488 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491)) 
                                            && (1U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___b_490)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22182: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._666_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___s_491));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22182, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___328_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___666___Vfuncout_488;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___263_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___264_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___060_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___271_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___272_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___057_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___267_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___268_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___058_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___324_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___325_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___052_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___326_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___327_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___051_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___259_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___260_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___061_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0158_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0585_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0585_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0561_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0562_)
            ? (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0220_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1264_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1262_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1265_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_spec_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_set;
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___363_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___364_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___366_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___305_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___305_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___328_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___328_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___265_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___263_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___266_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___273_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___271_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___274_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___269_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___267_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___270_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___324_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__perf_store_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___324_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___037_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___326_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__perf_load_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___326_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___261_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___259_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___262_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0158_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0563_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0561_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0564_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___3_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__wr_data_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___3_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_data_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1266_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1264_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1267_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0244_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_spec_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0243_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i));
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___595_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___363_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___032_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_req_out 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___265_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___273_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___269_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_store 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__perf_store_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_load 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__perf_load_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___261_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0200_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0563_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1268_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1266_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1269_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0970_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0244_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0974_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0243_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0978_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0243_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0982_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0243_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___091_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___092_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___093_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___094_));
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___595_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___05_ = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_req_out;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___313_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___312_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___311_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___310_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___048_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___070_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___079_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___089_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___a_477 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___Vfuncout_476 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___b_478)
                                             : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___a_477))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22112: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._647_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___s_479));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22112, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___309_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___647___Vfuncout_476;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___323_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___322_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___321_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___320_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___319_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___044_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___067_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___076_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___083_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___087_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___Vfuncout_484 
        = (1U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                                 >> 4U)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487)) 
                                                && (1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___b_486))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22153: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._656_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___s_487));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22153, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___318_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___656___Vfuncout_484;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___317_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___316_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___315_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___b_482 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___045_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___068_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___077_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___Vfuncout_480 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___b_482)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___b_482) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483))) 
                                   && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___b_482) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22134: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._652_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___s_483));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22134, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___314_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___652___Vfuncout_480;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mem_store_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_store;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mem_load_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_load;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___300_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___299_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___298_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___297_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___296_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___049_) 
             << 0x0000000cU) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___071_) 
                                << 9U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___080_) 
                                            << 6U) 
                                           | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___090_) 
                                               << 3U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___091_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___Vfuncout_464 
        = (7U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                                 >> 9U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                                 >> 0x0cU)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                                 >> 9U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___b_466)
                                                 : 0U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22049: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._633_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___s_467));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22049, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___295_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___633___Vfuncout_464;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0619_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0620_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0200_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0617_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1270_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1268_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1271_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0969_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0970_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0973_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__jump_set_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0974_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0977_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__branch_set_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0978_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0981_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0982_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___700_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___091_;
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___323_ 
        = (1U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___061_) 
                 << 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___309_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___309_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___318_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_update 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___318_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___314_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___314_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___295_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___295_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0168_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0619_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0619_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0199_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1270_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0971_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0969_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0972_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0975_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0973_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0976_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0979_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0977_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0980_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0983_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0981_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0984_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___700_;
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
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19082: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._794_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___s_403));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19082, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___321_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___794___Vfuncout_400;
    vlSelfRef.encarsia_tb__DOT__data_req_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___028_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___393_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___395_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___397_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___399_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___401_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ctrl_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_ns;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___105_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_ns))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0168_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1272_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1273_)
            ? 7U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0199_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0117_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0971_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0118_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0975_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0119_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0979_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0116_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0983_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_we_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___614_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___321_;
    vlSelfRef.__VprimaryPorts.data_req_o = vlSelfRef.encarsia_tb__DOT__data_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___392_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___393_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__adder_result_ex_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_last_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___394_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___395_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_we_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___396_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___397_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_sign_ext_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___398_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___399_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_type_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___400_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___401_)
                  ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__adder_result_ex_i
                  : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___093_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___143_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___105_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1274_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1272_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1275_))))));
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
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16499: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '7'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1924_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',7,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___s_327));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16499, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1038_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1924___Vfuncout_324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1095_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1096_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0118_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1093_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1094_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0119_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1053_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1052_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1051_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1050_))) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1049_) 
                       << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1048_) 
                                  << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1047_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330 
        = (0x00000066U | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0116_) 
                            << 4U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0142_) 
                                      << 3U)) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0161_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___Vfuncout_328 
        = (1U & ((0x00000040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                  ? ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                      ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 5U))))))
                      : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 6U)))))))
                  : ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                      ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 5U))))))
                      : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331)) 
                                         && (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___b_330))))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x40U 
                                                == 
                                                (0x40U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                               << 3U) 
                                              | ((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                                 << 2U)) 
                                             | (((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                                 << 1U) 
                                                | (8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))))) 
                                            << 3U) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331)))))))))))) {
        if ((0U != ((((((0x40U == (0x40U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                        << 3U) | ((0x20U == (0x20U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                  << 2U)) | (((0x10U 
                                               == (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                              << 1U) 
                                             | (8U 
                                                == 
                                                (8U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))))) 
                     << 3U) | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                << 2U) | (((2U == (2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331))) 
                                           << 1U) | 
                                          (1U == (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16530: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '7'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1932_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',7,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16530, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1046_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___Vfuncout_328;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___06_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_imd_val_we) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_sel))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___614_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___614_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___392_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___394_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___396_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___398_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___400_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_done_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___093_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1276_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1274_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1277_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_spec_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0086_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__perf_jump_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0087_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1093_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__perf_tbranch_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1093_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1046_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1046_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_we_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___051_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___421_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_valid;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_req_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_req_done_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1278_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1276_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1279_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0085_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_set_spec_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_spec_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0037_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0086_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_jump_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__perf_jump_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0087_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_tbranch_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__perf_tbranch_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0084_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_set_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_we_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_we_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___419_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___421_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___420_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_done_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_req_done;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1280_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1278_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1281_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_set_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_set_spec_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_jump 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_jump_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_tbranch 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_tbranch_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_set 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_set_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_we_ex_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_we_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___586_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___419_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___156_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_done_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___271_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_done_i)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___169_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_done_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1282_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1280_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1283_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_spec_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_set_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__jump_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_jump;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__branch_taken_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_tbranch;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_set;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___196_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_we_ex_i) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___198_ 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_we_ex_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__valid_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___586_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___272_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___156_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___273_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___271_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___274_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___099_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_dec) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___169_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1284_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1282_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1285_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_spec_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___026_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___029_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___016_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___023_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_set_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___195_ 
        = (0x00000003ffffffffULL & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___196_)
                                     ? (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U])) 
                                         << 0x00000020U) 
                                        | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[0U])))
                                     : (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                         << 0x00000020U) 
                                        | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[0U])))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___197_ 
        = (0x00000003ffffffffULL & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___198_)
                                     ? (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[2U])) 
                                         << 0x0000003eU) 
                                        | (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[2U])) 
                                            << 0x0000001eU) 
                                           | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_d_ex_i[1U])) 
                                              >> 2U)))
                                     : (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                                         << 0x0000003eU) 
                                        | (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[2U])) 
                                            << 0x0000001eU) 
                                           | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[1U])) 
                                              >> 2U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__valid_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___08_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_sel)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_valid)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___01_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___275_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___273_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___192_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___099_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02eoutstanding_memory_access));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1286_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1284_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1287_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_spec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_init_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___016_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___032_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___195_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___197_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___277_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___275_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___278_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___100_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___192_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0194_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1286_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_spec_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_spec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtvec_init 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_init_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__ex_valid_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___08_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___065_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___277_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_mem 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___100_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1288_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1289_)
            ? 8U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0194_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtvec_init_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtvec_init;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___038_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___051_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_mispredict_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__ex_valid_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___279_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___280_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___065_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___184_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_mem) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_ld_hz));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___160_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_mem)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1290_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1288_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1291_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1603_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtvec_init_i)
            ? (1U | (0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__boot_addr_i))
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0775_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtvec_init_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0776_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___008_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_spec_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___038_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___051_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_valid;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___281_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___279_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1292_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1290_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1293_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0107_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1603_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1603_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_suppress 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___008_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___022_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___030_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___058_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_clear 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___054_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_ready));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___157_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___261_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    __Vdfg_Regularize_11430 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i) 
                               & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___241_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___501_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_dec)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___160_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ex_valid_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___283_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___281_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___284_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1294_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1292_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1295_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___039_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_suppress)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___058_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_clear;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___242_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___157_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___252_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___157_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___262_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___157_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___263_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___261_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___264_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___087_ 
        = __Vdfg_Regularize_11430;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___251_ 
        = __Vdfg_Regularize_11430;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___243_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___241_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___244_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multicycle_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___501_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___283_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1296_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1294_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1297_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___009_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__req_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___039_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___059_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___060_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___064_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___265_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___266_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___263_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___235_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___236_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___087_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___253_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___251_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___254_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___245_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___246_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___243_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___088_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ready_wb_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multicycle_done));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1298_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1296_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1299_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___010_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___009_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___054_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___267_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___265_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___237_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___235_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___238_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___255_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___256_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___253_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___247_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___245_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___212_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___224_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___218_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___230_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1300_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1298_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1301_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___011_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___010_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___040_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___269_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___267_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___270_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___239_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___237_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___240_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___257_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___255_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___249_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___247_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___250_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___211_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___212_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___223_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___224_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___217_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___218_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_in_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___229_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___230_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0189_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1300_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___011_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___068_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___269_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___066_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___239_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___259_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___257_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___260_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___249_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___213_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___211_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___214_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___225_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___223_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___226_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___219_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___217_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___220_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___231_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___229_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___232_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1302_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1303_)
            ? 9U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0189_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___018_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___045_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___015_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___042_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___017_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___044_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___055_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___291_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___292_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___068_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___289_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___259_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___341_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___342_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___064_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___215_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___213_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___216_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___227_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___225_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___228_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___221_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___219_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___222_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___233_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___231_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___234_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1304_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1302_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1305_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___016_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___015_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___043_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___059_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___017_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___055_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___293_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___294_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___060_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___291_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___319_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___320_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___061_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___317_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___343_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___344_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___341_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___215_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___062_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___221_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___233_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1306_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1304_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1307_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___016_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___059_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___013_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___041_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___023_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___046_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___031_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___047_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    __Vdfg_Regularize_11342 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req) 
                               & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__gnt_or_pmp_err));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___295_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___293_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___321_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___322_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___319_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___345_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___343_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___413_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___412_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___b_158 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___056_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___062_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___Vfuncout_156 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___b_158)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___b_158) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13130: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._759_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___s_159));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13130, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___411_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___759___Vfuncout_156;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___408_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___407_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___b_154 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___063_);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___Vfuncout_152 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___b_154)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___b_154) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13114: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._756_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___s_155));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13114, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___406_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___756___Vfuncout_152;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1308_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1306_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1309_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___071_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___013_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___013_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___024_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_pmp_err_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___023_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___032_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_pmp_err_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___031_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___050_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_req_o) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___073_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___019_ 
        = __Vdfg_Regularize_11342;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___025_ 
        = __Vdfg_Regularize_11342;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___020_ 
        = __Vdfg_Regularize_11342;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___027_ 
        = __Vdfg_Regularize_11342;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___297_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___295_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___298_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___323_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___321_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___347_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___345_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___348_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___414_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___411_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___415_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___409_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___406_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___410_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1310_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1308_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1311_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___063_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___024_) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___033_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___032_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_out 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___050_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___060_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___019_) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___026_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___025_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___021_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___020_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_d));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___028_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_d) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___027_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___297_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___325_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___323_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___326_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___347_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___414_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___409_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1312_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1310_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1313_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___067_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___033_) 
           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_q) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___04_ = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_out;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__prefetch_busy 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___064_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___026_) 
           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___061_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___021_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___022_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___029_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___028_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___393_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___392_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___b_142 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___051_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___069_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___Vfuncout_140 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___b_142)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___b_142) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13066: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._747_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___s_143));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13066, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___391_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___747___Vfuncout_140;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___325_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___418_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___417_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___b_162 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___058_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___067_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___Vfuncout_160 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___b_162)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___b_162) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13146: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._762_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___s_163));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13146, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___416_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___762___Vfuncout_160;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___449_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___450_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___045_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___447_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___448_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___046_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0182_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1312_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_n 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___067_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___063_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___04_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__prefetch_busy;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_n 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___064_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___060_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___062_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___061_) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___065_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___029_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___030_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___394_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___391_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___395_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___403_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___402_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___b_150 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___054_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___066_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___Vfuncout_148 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___b_150)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___b_150) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13098: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._753_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___s_151));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13098, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___401_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___753___Vfuncout_148;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___419_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___416_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___420_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___449_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_branch 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___449_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___447_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_jump 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___447_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1314_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1315_)
            ? 0x0aU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0182_));
    vlSelfRef.encarsia_tb__DOT__instr_req_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_busy 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___066_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___065_) 
           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_q) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___394_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___404_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___401_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___405_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___419_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1316_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1314_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1317_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___081_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rvalid_or_pmp_err)
            ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_n) 
               >> 1U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_n));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_s 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___081_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___081_;
    vlSelfRef.__VprimaryPorts.instr_req_o = vlSelfRef.encarsia_tb__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___09_ = 
        ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ctrl_busy) 
         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_busy));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___079_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rvalid_or_pmp_err)
            ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_n) 
               >> 1U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_n));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_s 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___079_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___079_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_n 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___066_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___062_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___080_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rvalid_or_pmp_err)
            ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_n) 
               >> 1U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_n));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___441_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___442_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___040_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___043_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___404_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___451_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___452_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___047_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1318_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1316_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1319_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___10_ = 
        ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT___09_) 
         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_busy));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___441_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___441_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___445_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___446_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___043_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___451_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_multdiv 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___451_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1320_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1318_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1321_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__core_busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_s 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___461_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___462_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_d)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___445_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___445_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___116_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_multdiv) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___117_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_multdiv) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___185_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_multdiv) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___184_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1322_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1320_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1323_))))));
    vlSelfRef.encarsia_tb__DOT__core_busy_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__core_busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___461_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___032_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___076_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_raw) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_mul_wait_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_div_wait_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___117_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___186_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___185_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_jump));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0172_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1322_;
    vlSelfRef.__VprimaryPorts.core_busy_o = vlSelfRef.encarsia_tb__DOT__core_busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___077_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___076_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___151_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_mul_wait 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_mul_wait_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_div_wait 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__perf_div_wait_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___187_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___186_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_branch));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1324_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1325_)
            ? 0x0bU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0172_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___077_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mul_wait_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_mul_wait;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__div_wait_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_div_wait;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___188_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___187_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1326_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1324_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1327_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___188_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1328_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1326_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1329_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_we_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___158_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_id)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1330_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1328_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1331_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___089_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___158_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___159_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0158_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1330_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___090_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_executing) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___089_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1332_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1333_)
            ? 0x0cU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0158_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1334_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1332_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1335_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__en_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_done;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1336_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1334_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1337_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__en_wb = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__en_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___109_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__en_wb_o) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___171_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___108_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ready_wb_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__en_wb_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0139_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1336_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__en_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___109_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_id_done_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1338_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1339_)
            ? 0x0dU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0139_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___34_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___36_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___38_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___40_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___42_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___44_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___46_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__ready_wb_o) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__en_wb_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall_wb_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__stall_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_id_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_id_done_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___081_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_id_done_o) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___080_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1340_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1338_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1341_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___33_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___34_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_type_wb_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_instr_type_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___35_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___36_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_perf_count_id_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_count_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___37_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___38_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_is_compressed_id_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_compressed_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___39_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___40_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__pc_id_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_pc_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___41_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___42_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_waddr_id_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_waddr_wb_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___43_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___44_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_we_id_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_we_wb_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___45_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___46_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_id_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_wdata_wb_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___29_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___10_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___11_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0288_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall_wb_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall_id_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__unused_instr_id_done 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_id_done;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_en_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___081_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0113_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1340_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___33_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___35_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___03_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___37_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___06_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___39_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___41_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___43_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___45_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___29_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___29_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0288_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___125_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_en_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_op_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_en_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___120_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_en_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1342_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1343_)
            ? 0x0eU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0113_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0261_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0246_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0232_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___134_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___125_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___146_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_op_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___133_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___120_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___140_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1342_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1342_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0224_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0245_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0246_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___470_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___134_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___466_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___134_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0253_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_en_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___478_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___133_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___472_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___133_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___476_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___133_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___468_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___133_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0081_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0857_ 
        = ((0x00000030U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id)) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0858_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0865_ 
        = ((0x00000030U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id)) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0866_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0849_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0850_)
            ? (0x00000030U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id))
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0170_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0966_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0224_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___465_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___463_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___466_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0254_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0253_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0369_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___475_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___473_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___476_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0859_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0857_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0860_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0867_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0865_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0868_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0851_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0849_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0852_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0965_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0966_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___467_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___468_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___465_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0254_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___475_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0861_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0859_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0862_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0869_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0867_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0870_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0853_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0851_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0854_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0967_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0965_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0968_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___467_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0800_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0802_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0804_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0806_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0718_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0722_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0731_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0736_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0268_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0270_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0285_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0808_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0816_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0818_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0834_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0836_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0826_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0273_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0287_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0740_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0758_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0762_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0794_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0798_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0778_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0814_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0754_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0820_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0822_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0766_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0770_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0828_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0782_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0824_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0838_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0726_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0644_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0656_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0660_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0664_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0672_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0676_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0680_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0684_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0688_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0690_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0694_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0698_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0708_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0774_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0704_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0830_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0832_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0786_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0790_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0840_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0648_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0652_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0668_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0714_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0812_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0750_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0810_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0745_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0863_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0861_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0864_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0871_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0869_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0872_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0855_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0853_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0856_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0156_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0967_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___469_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___470_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___059_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0717_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0715_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0718_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0721_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0719_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0722_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0730_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0727_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0731_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0735_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0732_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0736_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0269_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0268_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0284_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0271_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0270_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0274_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0273_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0739_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0737_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0740_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0757_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0755_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0758_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0761_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0759_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0762_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0793_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0791_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0794_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0797_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0795_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0798_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0777_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0775_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0778_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0753_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0751_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0754_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0765_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0763_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0766_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0769_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0767_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0770_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0781_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0779_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0782_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0725_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0723_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0726_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0643_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0641_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0644_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0655_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0653_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0656_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0659_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0657_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0660_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0663_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0661_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0664_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0675_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0673_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0676_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0679_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0677_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0680_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0683_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0681_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0684_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0687_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0685_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0688_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0689_ 
        = (7U & ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                  >> 6U) & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0690_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0693_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0691_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0694_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0697_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0695_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0698_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0707_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0705_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0708_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0773_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0771_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0774_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0703_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0701_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0704_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0785_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0783_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0786_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0789_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0787_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0790_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0647_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0645_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0648_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0667_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0665_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0668_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0713_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0711_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0714_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0749_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0746_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0750_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0744_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0741_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0745_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0163_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0863_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0164_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0871_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0154_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0855_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0929_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0930_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___471_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___472_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___469_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0212_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0717_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0213_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0721_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0184_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0730_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0183_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0735_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0269_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0272_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0271_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0286_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0275_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0274_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0288_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0188_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0739_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0194_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0757_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0193_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0761_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0205_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0793_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0204_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0797_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0211_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0777_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0199_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0753_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0192_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0765_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0190_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0769_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0210_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0781_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0208_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0725_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0214_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0703_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0198_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0785_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0201_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0789_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0223_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0713_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0202_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0749_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0203_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0744_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0891_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0163_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0892_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0885_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0164_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0886_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0879_ 
        = (0x0000003fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0154_) 
                          | (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0880_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0931_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0932_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0929_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___471_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0805_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0212_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0806_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0803_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0213_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0804_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0799_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0184_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0800_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0801_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0183_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0802_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0272_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0275_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0807_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0808_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0188_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0815_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0816_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0194_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0817_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0818_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0193_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0833_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0834_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0205_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0835_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0836_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0204_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0825_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0826_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0211_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtvec_init_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0813_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0814_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0199_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0819_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0820_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0192_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0821_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0822_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0190_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0827_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0828_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0210_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0837_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0838_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0208_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0669_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0670_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0214_)
                  : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0829_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0830_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0198_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0831_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0832_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0201_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0649_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0650_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0223_)
                  : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                     >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0811_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0202_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0812_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0809_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0203_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0810_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0893_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0891_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0894_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0887_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0885_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0888_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0881_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0879_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0882_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___477_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___478_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___039_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___050_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0181_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0805_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0182_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0803_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0146_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0799_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0145_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0801_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0340_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0153_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0807_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0807_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0161_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0815_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch1_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0815_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0160_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0817_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0817_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0173_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0833_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mscratch_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0833_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0172_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0835_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0835_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0179_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0825_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0825_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0813_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0813_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0159_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0819_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0157_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0821_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0178_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0827_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0837_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0671_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0669_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0672_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0165_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0829_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0169_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0831_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0651_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0649_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0652_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0170_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0811_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0811_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0171_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0809_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0809_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0895_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0893_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0896_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0889_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0887_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0890_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0883_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0881_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0884_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___477_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_pipe_flush 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___477_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0143_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0181_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0144_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0182_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0146_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0145_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___3_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__wr_data_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0340_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0153_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0161_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch1_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0160_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0098_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0173_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mscratch_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0097_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0172_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0108_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0167_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0283_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0517_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0518_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0159_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0525_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0526_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0157_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0511_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0178_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0621_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0176_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0622_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0499_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0176_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0189_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0643_) 
             << 0x0000001cU) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0663_) 
                                << 0x00000010U)) | 
           ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0655_) 
                << 6U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0659_) 
                           << 5U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0693_) 
                                     << 3U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0697_) 
                                                  << 2U) 
                                                 | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0773_) 
                                                     << 1U) 
                                                    | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0707_)))) 
             << 9U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0689_) 
                         << 6U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0675_) 
                                    << 5U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0679_) 
                                              << 4U))) 
                       | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0683_) 
                           << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0687_) 
                                      << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0671_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0463_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0165_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0403_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0404_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0165_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0475_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0169_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0419_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0420_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0169_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0207_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0647_) 
            << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0651_) 
                       << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0667_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0170_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__unused_mhpmcounter_we_1 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__g_mcountinhibit_reduced__02eunused_mhphcounter_we 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
           >> 0x0000000dU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0317_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0318_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0319_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0320_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0321_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0322_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0323_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0324_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0325_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0326_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0315_ 
        = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0316_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0171_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__unused_mhpmcounterh_we_1 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__g_mcountinhibit_reduced__02eunused_mhphcounterh_we 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
           >> 0x0000000dU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0327_ 
        = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0328_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0329_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0330_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0331_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0332_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0333_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0334_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0335_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0336_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0337_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0338_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0144_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0895_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0145_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0889_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0134_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0883_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___026_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_pipe_flush;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___3_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_data_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_en_i;
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0391_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0283_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0519_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0517_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0520_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0527_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0525_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0528_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0513_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0514_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0511_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0623_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0624_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0176_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0621_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0501_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0502_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0499_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0823_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0824_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0189_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0465_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0466_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0463_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0405_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0403_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0406_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0477_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0478_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0475_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0421_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0419_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0422_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0839_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0840_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0207_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0317_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0318_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0319_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0320_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0321_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0322_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0323_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0324_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0325_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0326_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0315_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0316_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0327_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0328_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0329_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0330_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0331_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0332_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0333_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0334_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0335_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0336_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0337_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0338_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0901_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0144_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0902_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0897_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0145_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0898_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0909_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0134_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0910_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0205_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___3_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__wr_data_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0390_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0391_)
            ? ((0x00001ffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int) 
               | (::IData)((1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int)))
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0229_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0519_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0228_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0527_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0515_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0513_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0516_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0503_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0501_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0504_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0823_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0467_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0465_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0468_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0407_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0408_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0405_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0479_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0477_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0480_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0423_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0424_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0421_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0839_;
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___18_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___20_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___10_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counterh_we_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_we_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0903_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0901_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0904_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0899_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0897_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0900_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0911_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0909_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0912_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0205_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0166_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0390_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0390_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0583_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0584_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0229_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0159_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0587_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0588_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0228_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0157_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0242_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0515_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0241_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0503_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_ 
        = ((0x000001ffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_) 
           | (0xfffffe00U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_ 
        = ((0xffffffc3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_) 
           | (0x0000003cU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0529_ 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0530_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_cause_i)
                  : (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_ 
                     >> 6U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0533_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0534_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_q)
                  : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0238_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0467_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0409_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0410_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0407_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0239_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0479_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0425_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0426_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0423_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0397_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0398_)
                  ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                     >> 4U) : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                               >> 5U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0443_ 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0444_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0248_)
                  : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                     >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0627_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
              >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___17_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___18_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_i
            : (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                         >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___20_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___17_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___18_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_i
            : (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                         >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___20_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___04_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___16_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___14_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0121_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0903_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0122_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0899_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0106_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0911_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0229_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0272_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0166_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0216_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0583_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0583_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0215_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0587_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0587_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0541_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0542_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0178_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0242_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0565_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0566_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0176_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0241_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0531_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0529_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0532_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0535_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0533_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0536_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0549_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0550_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0165_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0238_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0244_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0409_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0557_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0558_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0169_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0239_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0245_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0425_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0399_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0400_)
                  ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                     >> 5U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0397_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0445_ 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0446_)
                  ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                     >> 2U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0443_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0629_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0630_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0627_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0487_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)
                  ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                     >> 2U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0489_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0487_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0490_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0493_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)
                  ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                     >> 4U) : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                               >> 5U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0495_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0496_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0493_));
    __Vdfg_Regularize_11417 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___19_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___11_ 
           & (- (::QData)((::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___14_)))))));
    __Vdfg_Regularize_11416 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___19_)));
    __Vdfg_Regularize_11415 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11414 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11413 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11412 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11411 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11410 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11409 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11408 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11407 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_11406 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1070_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0121_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1071_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1068_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0122_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1069_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1124_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1123_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0106_) 
            << 6U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0187_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___Vfuncout_376 
        = (0x0000003fU & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379)))
                           ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378)
                           : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379)))
                               ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378) 
                                  >> 6U) : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16806: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._2008_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16806, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1122_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___Vfuncout_376;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0408_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0229_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req_flush_only 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0272_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0216_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0215_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0543_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0541_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0544_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0567_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0565_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0568_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0247_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0531_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0243_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0535_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0551_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0549_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0552_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0597_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0598_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0244_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0165_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0559_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0557_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0560_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0609_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0610_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0245_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0169_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0631_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0629_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0632_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0491_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0489_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0492_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0497_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0495_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0498_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = __Vdfg_Regularize_11417;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___06_ 
        = __Vdfg_Regularize_11417;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = __Vdfg_Regularize_11416;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___06_ 
        = __Vdfg_Regularize_11416;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11415;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11415;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11414;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11414;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11413;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11413;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11412;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11412;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11411;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11411;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11410;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11410;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11409;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11409;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11408;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11408;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11407;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11407;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_11406;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_11406;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0090_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0091_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0073_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1122_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1122_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0407_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0408_)
            ? 7U : 5U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0276_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req_pc_change) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req_flush_only));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0236_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0543_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0235_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0567_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0589_ 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0590_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0247_)
                  : (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_ 
                     >> 6U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0591_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0592_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0243_)
                  : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0231_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0551_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0599_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0600_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0165_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0597_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0233_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0559_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0611_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0612_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0169_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0609_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0246_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0631_) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0497_) 
                       << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0491_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___16_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___06_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0043_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0091_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0073_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__exc_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0409_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0407_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0410_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0276_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0593_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0594_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0236_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0178_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0625_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0626_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0235_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0623_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0237_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0589_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0227_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0591_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_d 
        = ((0xfffffe00U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0823_) 
           | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0589_) 
               << 6U) | ((0x0000003cU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0823_) 
                         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0591_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0601_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0602_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0231_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0599_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0613_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0614_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0233_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0611_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0569_ 
        = (0x0000000fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0570_)
                           ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                              >> 2U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0246_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__exc_cause 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__exc_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0411_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0409_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0412_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0992_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0988_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0996_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0233_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0226_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0593_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0593_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0224_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0625_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0625_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_ 
        = ((0xfffffe3fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_) 
           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0237_) 
              << 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_ 
        = ((0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0227_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0219_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0601_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0601_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0221_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0613_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0613_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0571_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0569_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0572_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mcause_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__exc_cause;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0457_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)
            ? (::IData)(vlSelfRef.__Vdfg_Regularize_11334)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mcause_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_cause 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__exc_cause;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0413_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0411_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0414_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0987_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0985_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0988_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0995_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0996_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0225_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0232_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0233_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0106_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0104_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0224_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0219_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0221_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0240_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0571_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__irq_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_cause;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0415_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0413_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0416_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0989_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0987_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0990_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0997_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0995_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0998_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0225_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0234_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0401_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0402_)
                  ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0240_) 
                     >> 3U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0399_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0447_ 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0448_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0240_)
                  : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0445_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0459_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0457_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0460_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__unused_irq_bit 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__irq_id) 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___015_ 
        = ((0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i) 
           + (::IData)((0x0000007cU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__irq_id) 
                                       << 2U))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0417_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0415_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0418_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0186_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0989_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0120_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0997_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0962_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0954_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0942_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0958_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0948_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0934_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q);
    __Vdfg_Regularize_11405 = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0401_) 
                                << 3U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0447_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0461_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0459_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0462_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___060_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___059_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___058_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___057_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U] = 0x1a110808U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U] = 0x1a110800U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[2U] 
        = (::IData)((((::QData)((::IData)((0xfffffffcU 
                                           & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i))) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___015_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[3U] 
        = (::IData)(((((::QData)((::IData)((0xfffffffcU 
                                            & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i))) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___015_))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___Vfuncout_80 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:1505: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i._099_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 1505, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___056_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___Vfuncout_80;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0056_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0417_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0991_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0992_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0186_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1078_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1079_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0120_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0933_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0931_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0934_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0234_ 
        = __Vdfg_Regularize_11405;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_d 
        = (((::IData)(__Vdfg_Regularize_11405) << 2U) 
           | (3U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0839_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0218_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0461_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0419_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0420_)
            ? 2U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0056_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0993_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0991_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0994_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0088_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__retain_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0935_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0933_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0936_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0103_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0234_) 
            << 2U) | (3U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0553_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0554_)
            ? (::IData)(vlSelfRef.__Vdfg_Regularize_11334)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0218_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___013_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___055_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___054_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___053_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___052_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_depc_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mepc_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_target_ex_i)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_target_ex_i)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___a_77 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__boot_addr_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___Vfuncout_76 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___b_78[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___a_77))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:1483: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i._094_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___s_79));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 1483, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___051_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___094___Vfuncout_76;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0421_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0419_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0422_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0178_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0993_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0289_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0263_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__retain_id)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0188_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0935_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___3_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__wr_data_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0555_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0553_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0556_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___051_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr_n 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___051_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0423_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0421_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0424_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0937_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0938_)
            ? 7U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0178_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0264_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0289_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0945_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0946_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0188_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0197_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0555_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___014_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__unused_fetch_addr_n0 
        = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr_n);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_i 
        = (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr_n);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0425_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0423_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0426_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0939_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0937_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0940_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0290_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0264_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0947_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0945_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0948_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0607_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0608_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0197_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0605_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___075_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_i)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___074_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___082_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___077_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_spec_i)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___076_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0427_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0425_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0428_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0941_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0939_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0942_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0290_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0949_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0947_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0950_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0164_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0607_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0607_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___075_ 
           + (::IData)(((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___018_) 
                        << 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_addr 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___078_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___077_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0055_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0427_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0943_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0941_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0944_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0181_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0949_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0164_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___068_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___069_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_addr;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___070_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___071_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___078_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0469_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0470_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0055_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0943_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___152_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_clear 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0957_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0958_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0181_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___3_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__wr_data_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__unused_addr_in 
        = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___109_ 
        = (0x7fffffffU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i)
                           ? (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i 
                              >> 1U) : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_next));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_w_aligned 
        = (0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0471_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0469_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0472_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0951_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0952_)
            ? 8U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0044_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___082_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___181_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___152_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_clear_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_clear;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0959_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0957_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0960_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___109_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_w_aligned;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0473_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0471_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0474_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0953_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0951_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0954_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___030_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_clear_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0171_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0959_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_addr_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0475_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0473_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0476_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0955_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0953_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0956_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___020_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___030_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1085_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1084_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1083_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1082_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1081_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346 
        = (0x00000019U | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0136_) 
                           << 2U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0171_) 
                                     << 1U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___Vfuncout_344 
        = (1U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 4U)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347)) 
                                                && (1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16648: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1966_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16648, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1080_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___Vfuncout_344;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_addr_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0475_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0197_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0955_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0076_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__halt_if 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1080_;
    vlSelfRef.encarsia_tb__DOT__instr_addr_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0521_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0522_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0054_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0961_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0962_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0197_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0178_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0076_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0262_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__halt_if)));
    vlSelfRef.__VprimaryPorts.instr_addr_o = vlSelfRef.encarsia_tb__DOT__instr_addr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0523_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0521_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0524_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0963_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0961_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0964_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0218_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0261_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0262_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0525_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0523_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0526_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0192_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0963_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0219_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0218_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0263_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0052_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0525_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0219_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0747_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0748_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0048_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0052_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_in_ready_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0749_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0747_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0750_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1015_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1016_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_in_ready 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_in_ready_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0749_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1017_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1015_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1018_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___03_ = 
        ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_in_ready) 
         & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT___06_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__id_in_ready_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_in_ready;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0403_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0404_)
            ? 8U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0046_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0129_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1017_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_iside_wait 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___03_;
    __Vdfg_Regularize_11432 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__id_in_ready_i) 
                               & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_valid));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__id_in_ready_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0405_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0403_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0406_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1011_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1012_)
            ? 7U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0129_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__iside_wait_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_iside_wait;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___018_ 
        = __Vdfg_Regularize_11432;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___021_ 
        = __Vdfg_Regularize_11432;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_ready 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___022_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0057_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0405_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1013_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1011_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1014_))));
    __Vdfg_Regularize_11429 = (::IData)((1U | (((((
                                                   ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__div_wait_i) 
                                                    << 3U) 
                                                   | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mul_wait_i) 
                                                      << 2U)) 
                                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__instr_ret_compressed_i) 
                                                      << 1U) 
                                                     | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__branch_taken_i))) 
                                                 << 9U) 
                                                | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__branch_i) 
                                                    << 8U) 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__jump_i) 
                                                       << 7U) 
                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mem_store_i) 
                                                         << 6U)))) 
                                               | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mem_load_i) 
                                                    << 5U) 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__iside_wait_i) 
                                                       << 4U) 
                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dside_wait_i) 
                                                         << 3U))) 
                                                  | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__instr_ret_i) 
                                                     << 2U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___019_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___018_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___029_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___021_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___021_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__ready_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_ready;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0149_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1013_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0062_ 
        = __Vdfg_Regularize_11429;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = __Vdfg_Regularize_11429;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___019_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___020_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_ready_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__ready_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1003_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1004_)
            ? 8U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0149_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__unused_mhpmcounter_incr_1 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__g_mcountinhibit_reduced__02eunused_mhphcounter_incr 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
           >> 0x0000000dU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0257_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0371_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0258_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0372_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0259_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0373_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0260_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0374_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0261_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0375_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0262_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0376_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0263_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0377_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0264_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0378_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0265_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0379_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0266_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0380_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0267_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0381_) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
              >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    __Vdfg_Regularize_11431 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o) 
                               & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_ready_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1005_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1003_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1006_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0292_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0257_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0293_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0258_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0294_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0259_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0295_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0260_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0296_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0261_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0297_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0262_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0298_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0263_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0299_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0264_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0300_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0265_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0301_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0266_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0302_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0267_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___035_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___036_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_id_o);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___037_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___038_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_insn)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_insn_id_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___039_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___040_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_err_plus2)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_fetch_err_plus2_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___041_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___042_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_err)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_fetch_err_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___043_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___044_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed_id_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___045_ 
        = (0x0000ffffU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___046_)
                           ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_rdata
                           : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_c_id_o)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___047_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___048_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_decompressed
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_alu_id_o);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___049_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___050_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_decompressed
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_id_o);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___027_ 
        = __Vdfg_Regularize_11431;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___028_ 
        = __Vdfg_Regularize_11431;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1005_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0292_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0293_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0294_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0295_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0296_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0297_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0298_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0299_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0300_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0302_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___041_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___045_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___047_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___049_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___069_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___027_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___029_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___028_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___070_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1037_) 
               << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1036_) 
                          << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1035_) 
                                    << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1034_) 
                                                 << 1U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1033_))) 
            << 5U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1032_) 
                        << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1031_) 
                                   << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1030_) 
                                             << 2U))) 
                      | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1029_) 
                          << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1028_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
        = (((::QData)((::IData)((0x00014300U | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0100_) 
                                                 << 4U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0167_))))) 
            << 0x00000014U) | (::QData)((::IData)((0x00005550U 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0192_) 
                                                       << 0x00000010U) 
                                                      | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0057_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___Vfuncout_320 
        = (0x0000000fU & (((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                 | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                                | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                               | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                              | (0x0010U == (0x0010U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                             | (0x0020U == (0x0020U 
                                            & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                            | (0x0040U == (0x0040U 
                                           & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                           | (0x0080U == (0x0080U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))))
                           ? ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                               ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322)
                               : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                   ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                >> 4U))
                                   : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                       ? (::IData)(
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                    >> 8U))
                                       : ((8U == (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                           ? (::IData)(
                                                       (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                        >> 0x0cU))
                                           : ((0x0010U 
                                               == (0x0010U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                               ? (::IData)(
                                                           (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                            >> 0x10U))
                                               : ((0x0020U 
                                                   == 
                                                   (0x0020U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                                >> 0x14U))
                                                   : 
                                                  ((0x0040U 
                                                    == 
                                                    (0x0040U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                                 >> 0x18U))
                                                    : (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                                 >> 0x1cU)))))))))
                           : ((0x0100U == (0x0100U 
                                           & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                               ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                            >> 0x20U))
                               : ((0x0200U == (0x0200U 
                                               & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                   ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                >> 0x24U))
                                   : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0200U 
                                                == 
                                                (0x0200U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                               << 4U) 
                                              | (((0x0100U 
                                                   == 
                                                   (0x0100U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                  << 3U) 
                                                 | ((0x0080U 
                                                     == 
                                                     (0x0080U 
                                                      & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                    << 2U))) 
                                             | (((0x0040U 
                                                  == 
                                                  (0x0040U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                 << 1U) 
                                                | (0x0020U 
                                                   == 
                                                   (0x0020U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))))) 
                                            << 5U) 
                                           | ((((0x0010U 
                                                 == 
                                                 (0x0010U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                << 4U) 
                                               | (((8U 
                                                    == 
                                                    (8U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      == 
                                                      (4U 
                                                       & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                     << 2U))) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))))))))))) {
        if ((0U != ((((((0x0200U == (0x0200U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                        << 4U) | (((0x0100U == (0x0100U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                   << 3U) | ((0x0080U 
                                              == (0x0080U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                             << 2U))) 
                      | (((0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                          << 1U) | (0x0020U == (0x0020U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))))) 
                     << 5U) | ((((0x0010U == (0x0010U 
                                              & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                 << 4U) | (((8U == 
                                             (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                            << 3U) 
                                           | ((4U == 
                                               (4U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                              << 2U))) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16459: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '10'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1913_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',10,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16459, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1027_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___Vfuncout_320;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___08_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_en;
    if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___110_ 
            = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                     >> 1U));
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___111_ 
            = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                     >> 2U));
    } else {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___110_ 
            = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed));
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___111_ 
            = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                     >> 1U));
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___116_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
              >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___035_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___038_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
              >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___061_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___062_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0067_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___11_ 
           & (- (::QData)((::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___14_)))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___088_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___089_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___109_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___116_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___111_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___110_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___037_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___036_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___061_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___040_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___039_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___062_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___033_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___059_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_popped));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___034_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___060_) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___043_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___064_) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
              >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___073_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___035_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___037_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___074_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___038_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___040_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___16_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___06_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    __Vdfg_Regularize_11418 = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___043_) 
                                << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___034_) 
                                           << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___033_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___044_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___074_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___073_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = __Vdfg_Regularize_11418;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___011_ 
        = __Vdfg_Regularize_11418;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___077_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en) 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___079_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en) 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___081_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___083_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___085_ 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___087_ 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___076_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___077_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i)
                  : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                     >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___078_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___079_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___080_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___081_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___115_)
                  : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                     >> 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___082_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___083_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___113_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___084_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___085_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___114_)
                  : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___086_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___087_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___112_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___076_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___084_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___086_;
}
