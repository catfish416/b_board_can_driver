/*
 * File: SideFusion_Fcn.c
 *
 * Code generated for Simulink model 'SideFusion_Fcn'.
 *
 * Model version                  : 1.39
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 13:30:46 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SideFusion_Fcn.h"
#include "SideFusion_Fcn_private.h"
#include "interface.h"

/* Named constants for Chart: '<Root>/Side_Fusion' */
#define SideFusion_F_Gating_Dist_Unused (25.0)
#define SideFusion_F_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define SideFusion_Fcn_Gating_Dist_Used (12.0)
#define SideFusion_Fcn_IN_A            ((uint8_T)1U)
#define SideFusion_Fcn_IN_B            ((uint8_T)1U)
#define SideFusion_Fcn_Ini_Asso_Ang_max (120.0)
#define SideFusion_Fcn_Ini_Asso_Dist   (4.0)
#define SideFusion_Fcn_Ini_Group_Dist  (4.0)
#define SideFusion_Fcn_RXX_SRR         (2.0)
#define SideFusion_Fcn_RYY_SRR         (2.0)
#define SideFusion_Fcn_VelSearch_Th    (15.0)
#define SideFusion_Fcn_event_LFSRR     (0)
#define SideFusion_Fcn_event_LRSRR     (2)
#define SideFusion_Fcn_event_RFSRR     (1)
#define SideFusion_Fcn_event_RRSRR     (3)
#define SideFusion_Fcn_vx_max          (15.0)
#define SideFusion_Fcn_vx_min          (0.0)
#define SideFusion_Fcn_vy_max          (15.0)
#define SideFusion_Fcn_vy_min          (0.0)
#define SideFusion__Poss_Threshold_used (0.15)

/* Block signals (auto storage) */
B_SideFusion_Fcn_T SideFusion_Fcn_B;

/* Block states (auto storage) */
DW_SideFusion_Fcn_T SideFusion_Fcn_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_SideFusion_Fcn_T SideFusion_Fcn_PrevZCX;

/* Real-time model */
RT_MODEL_SideFusion_Fcn_T SideFusion_Fcn_M_;
RT_MODEL_SideFusion_Fcn_T *const SideFusion_Fcn_M = &SideFusion_Fcn_M_;

/* Forward declaration for local functions */
static void SideFusion_Fcn_Set_Source(real_T data);
static void SideFusion_Fcn_Set_Time(real_T data);
static void SideFusion_Fcn_FusDataIni(void);
static void SideFusion_Fcn_FusTrackPredict(void);
static void SideFusion_Fcn_Measurement_Gen(void);
static void SideFusion_Fcn_Gtj_Cal(void);
static void SideFusion_Fcn_Gsum_Cal(void);
static void SideFusion_Fcn_Ptj_Cal(void);
static void SideFusion_Fcn_Pt0_Cal(void);
static void SideFusion_Fcn_Possible_Cal(void);
static void SideFusion_Fcn_Data_Gen(void);
static void SideFusion_Fcn_Bulb_Sort(void);
static void SideFusion_Fcn_Measure_Select(void);
static void SideFusion_F_Measurement_Select(void);
static void SideFusion_Fcn_Update(void);
static void SideFusion_Fcn_Tracker_Filter(void);
static void SideFusion_Fcn_Tracker_Update(void);
static real_T SideFusion_Fcn_OutLFSRRFOV(void);
static real_T SideFusion_Fcn_OutRFSRRFOV(void);
static real_T SideFusion_Fcn_OutLRSRRFOV(void);
static real_T SideFusion_Fcn_OutRRSRRFOV(void);
static void SideFusion_Fcn_ExistScoreCal(void);
static void SideFusion_Fc_Del_InternalTrack(void);
static void SideFusion_Fcn_OutputTrack(void);
static void SideFusion_Fcn_FusTrackManage(void);
static void SideFusion_Fcn_Tracker_Manager(void);
static void SideFusion_Fc_Unused_Return_Gen(void);
static void SideFusion_Fcn_LFFirstTrackGen(void);
static void SideFusion_Fcn_TrackIni(real_T ini_x, real_T ini_y);
static void SideFusion_Fcn_Ini_FifthTime_LF(void);
static void SideFusion_Fcn_Ini_ForthTime_LF(void);
static void SideFusion_Fcn_Ini_ThridTime_LF(void);
static void SideFusion_Fc_Ini_SecondTime_LF(void);
static void SideFusion_Fcn_LFSRR_Ini_Update(void);
static void SideFusion_Fcn_LFSRR_Ini(void);
static void SideFusion_Fcn_RFFirstTrackGen(void);
static void SideFusion_Fcn_Ini_FifthTime_RF(void);
static void SideFusion_Fcn_Ini_ForthTime_RF(void);
static void SideFusion_Fcn_Ini_ThridTime_RF(void);
static void SideFusion_Fc_Ini_SecondTime_RF(void);
static void SideFusion_Fcn_RFSRR_Ini_Update(void);
static void SideFusion_Fcn_RFSRR_Ini(void);
static void SideFusion_Fcn_LRFirstTrackGen(void);
static void SideFusion_Fcn_Ini_FifthTime_LR(void);
static void SideFusion_Fcn_Ini_ForthTime_LR(void);
static void SideFusion_Fcn_Ini_ThridTime_LR(void);
static void SideFusion_Fc_Ini_SecondTime_LR(void);
static void SideFusion_Fcn_LRSRR_Ini_Update(void);
static void SideFusion_Fcn_LRSRR_Ini(void);
static void SideFusion_Fcn_RRFirstTrackGen(void);
static void SideFusion_Fcn_Ini_FifthTime_RR(void);
static void SideFusion_Fcn_Ini_ForthTime_RR(void);
static void SideFusion_Fcn_Ini_ThridTime_RR(void);
static void SideFusion_Fc_Ini_SecondTime_RR(void);
static void SideFusion_Fcn_RRSRR_Ini_Update(void);
static void SideFusion_Fcn_RRSRR_Ini(void);
static void SideFusion_Fcn_Tracker_Initial(void);
static void Sid_chartstep_c4_SideFusion_Fcn(void);
real_T look1_binlcapw(real_T u0, const real_T bp0[], const real_T table[],
                      uint32_T maxIndex)
{
  real_T y;
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex;
    frac = 0.0;
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    y = (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
  }

  return y;
}

/* Start for function-call system: '<S16>/Tracker_Initial.VelocityMethod' */
void Tracker_InitialVelocityMe_Start(B_Tracker_InitialVelocityMeth_T *localB,
  P_Tracker_InitialVelocityMeth_T *localP)
{
  /* VirtualOutportStart for Outport: '<S22>/AssociationFlag' */
  localB->MultiportSwitch_a = localP->AssociationFlag_Y0;
}

/* Output and update for function-call system: '<S16>/Tracker_Initial.VelocityMethod' */
void S_Tracker_InitialVelocityMethod(real_T rtu_x_m, real_T rtu_x_t, real_T
  rtu_vx_max, real_T rtu_ts, real_T rtu_vx_min, real_T rtu_y_m, real_T rtu_y_t,
  real_T rtu_vy_max, real_T rtu_vy_min, real_T rtu_Rxx, real_T rtu_Ryy, real_T
  rtu_threshod, B_Tracker_InitialVelocityMeth_T *localB,
  P_Tracker_InitialVelocityMeth_T *localP)
{
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  real_T unnamed_idx_2;
  real_T unnamed_idx_3;
  real_T unnamed_idx_0_0;
  real_T unnamed_idx_1_0;
  real_T v1_idx_0;
  real_T v1_idx_1;

  /* Sum: '<S138>/Subtract2' */
  localB->Subtract2 = rtu_x_m - rtu_x_t;

  /* Product: '<S138>/Divide' */
  localB->Divide = rtu_vx_max * rtu_ts;

  /* Sum: '<S138>/Subtract1' */
  localB->Subtract1 = localB->Subtract2 - localB->Divide;

  /* RelationalOperator: '<S140>/Compare' incorporates:
   *  Constant: '<S140>/Constant'
   */
  localB->Compare = (uint8_T)(localB->Subtract1 >=
    localP->CompareToConstant_const);

  /* MultiPortSwitch: '<S138>/Multiport Switch' incorporates:
   *  Constant: '<S138>/Constant1'
   */
  if (localB->Compare == 0) {
    localB->MultiportSwitch = localP->Constant1_Value;
  } else {
    localB->MultiportSwitch = localB->Subtract1;
  }

  /* End of MultiPortSwitch: '<S138>/Multiport Switch' */

  /* Sum: '<S138>/Subtract3' */
  localB->Subtract3 = rtu_x_t - rtu_x_m;

  /* Product: '<S138>/Divide2' */
  localB->Divide2 = rtu_ts * rtu_vx_min;

  /* Sum: '<S138>/Subtract4' */
  localB->Subtract4 = localB->Subtract3 + localB->Divide2;

  /* RelationalOperator: '<S141>/Compare' incorporates:
   *  Constant: '<S141>/Constant'
   */
  localB->Compare_f = (uint8_T)(localB->Subtract4 >=
    localP->CompareToConstant1_const);

  /* MultiPortSwitch: '<S138>/Multiport Switch1' incorporates:
   *  Constant: '<S138>/Constant2'
   */
  if (localB->Compare_f == 0) {
    localB->MultiportSwitch1 = localP->Constant2_Value;
  } else {
    localB->MultiportSwitch1 = localB->Subtract4;
  }

  /* End of MultiPortSwitch: '<S138>/Multiport Switch1' */

  /* Sum: '<S138>/Subtract5' */
  localB->Subtract5 = localB->MultiportSwitch + localB->MultiportSwitch1;

  /* Sum: '<S139>/Subtract2' */
  localB->Subtract2_d = rtu_y_m - rtu_y_t;

  /* Product: '<S139>/Divide' */
  localB->Divide_l = rtu_vy_max * rtu_ts;

  /* Sum: '<S139>/Subtract1' */
  localB->Subtract1_e = localB->Subtract2_d - localB->Divide_l;

  /* RelationalOperator: '<S142>/Compare' incorporates:
   *  Constant: '<S142>/Constant'
   */
  localB->Compare_d = (uint8_T)(localB->Subtract1_e >=
    localP->CompareToConstant_const_j);

  /* MultiPortSwitch: '<S139>/Multiport Switch' incorporates:
   *  Constant: '<S139>/Constant1'
   */
  if (localB->Compare_d == 0) {
    localB->MultiportSwitch_d = localP->Constant1_Value_e;
  } else {
    localB->MultiportSwitch_d = localB->Subtract1_e;
  }

  /* End of MultiPortSwitch: '<S139>/Multiport Switch' */

  /* Sum: '<S139>/Subtract3' */
  localB->Subtract3_b = rtu_y_t - rtu_y_m;

  /* Product: '<S139>/Divide2' */
  localB->Divide2_m = rtu_ts * rtu_vy_min;

  /* Sum: '<S139>/Subtract4' */
  localB->Subtract4_c = localB->Subtract3_b + localB->Divide2_m;

  /* RelationalOperator: '<S143>/Compare' incorporates:
   *  Constant: '<S143>/Constant'
   */
  localB->Compare_l = (uint8_T)(localB->Subtract4_c >=
    localP->CompareToConstant1_const_n);

  /* MultiPortSwitch: '<S139>/Multiport Switch1' incorporates:
   *  Constant: '<S139>/Constant2'
   */
  if (localB->Compare_l == 0) {
    localB->MultiportSwitch1_g = localP->Constant2_Value_p;
  } else {
    localB->MultiportSwitch1_g = localB->Subtract4_c;
  }

  /* End of MultiPortSwitch: '<S139>/Multiport Switch1' */

  /* Sum: '<S139>/Subtract5' */
  localB->Subtract5_n = localB->MultiportSwitch_d + localB->MultiportSwitch1_g;

  /* SignalConversion: '<S22>/TmpSignal ConversionAtDivide1Inport3' */
  localB->ux1[0] = localB->Subtract5;
  localB->ux1[1] = localB->Subtract5_n;

  /* Math: '<S22>/Math Function1' */
  localB->ux2[0] = localB->ux1[0];
  localB->ux2[1] = localB->ux1[1];

  /* Gain: '<S137>/Gain2' */
  localB->Gain2 = localP->Gain2_Gain * rtu_Rxx;

  /* Gain: '<S137>/Gain3' incorporates:
   *  Constant: '<S22>/Constant1'
   */
  localB->Gain3 = localP->Gain3_Gain * localP->Constant1_Value_l;

  /* SignalConversion: '<S137>/TmpSignal ConversionAtMath Function2Inport1' */
  localB->TmpSignalConversionAtMathFuncti[0] = localB->Gain2;
  localB->TmpSignalConversionAtMathFuncti[1] = localB->Gain3;

  /* Math: '<S137>/Math Function2' */
  localB->MathFunction2[0] = localB->TmpSignalConversionAtMathFuncti[0];
  localB->MathFunction2[1] = localB->TmpSignalConversionAtMathFuncti[1];

  /* Gain: '<S137>/Gain' */
  localB->Gain[0] = localP->Gain_Gain[0] * localB->MathFunction2[0];
  localB->Gain[2] = localP->Gain_Gain[0] * localB->MathFunction2[1];
  localB->Gain[1] = localP->Gain_Gain[1] * localB->MathFunction2[0];
  localB->Gain[3] = localP->Gain_Gain[1] * localB->MathFunction2[1];

  /* Gain: '<S137>/Gain4' incorporates:
   *  Constant: '<S22>/Constant2'
   */
  localB->Gain4 = localP->Gain4_Gain * localP->Constant2_Value_h;

  /* Gain: '<S137>/Gain5' */
  localB->Gain5 = localP->Gain5_Gain * rtu_Ryy;

  /* SignalConversion: '<S137>/TmpSignal ConversionAtMath Function1Inport1' */
  localB->TmpSignalConversionAtMathFunc_f[0] = localB->Gain4;
  localB->TmpSignalConversionAtMathFunc_f[1] = localB->Gain5;

  /* Math: '<S137>/Math Function1' */
  localB->MathFunction1[0] = localB->TmpSignalConversionAtMathFunc_f[0];
  localB->MathFunction1[1] = localB->TmpSignalConversionAtMathFunc_f[1];

  /* Gain: '<S137>/Gain1' */
  localB->Gain1[0] = localP->Gain1_Gain[0] * localB->MathFunction1[0];
  localB->Gain1[2] = localP->Gain1_Gain[0] * localB->MathFunction1[1];
  localB->Gain1[1] = localP->Gain1_Gain[1] * localB->MathFunction1[0];
  localB->Gain1[3] = localP->Gain1_Gain[1] * localB->MathFunction1[1];

  /* Sum: '<S137>/Add' */
  localB->Add[0] = localB->Gain[0] + localB->Gain1[0];
  localB->Add[1] = localB->Gain[1] + localB->Gain1[1];
  localB->Add[2] = localB->Gain[2] + localB->Gain1[2];
  localB->Add[3] = localB->Gain[3] + localB->Gain1[3];

  /* Product: '<S22>/Divide1' */
  unnamed_idx_0 = localB->Add[0];
  unnamed_idx_1 = localB->Add[1];
  unnamed_idx_2 = localB->Add[2];
  unnamed_idx_3 = localB->Add[3];
  unnamed_idx_0_0 = localB->ux1[0];
  unnamed_idx_1_0 = localB->ux1[1];
  v1_idx_1 = unnamed_idx_0 * unnamed_idx_0_0;
  v1_idx_1 += unnamed_idx_2 * unnamed_idx_1_0;
  v1_idx_0 = v1_idx_1;
  v1_idx_1 = unnamed_idx_1 * unnamed_idx_0_0;
  v1_idx_1 += unnamed_idx_3 * unnamed_idx_1_0;
  unnamed_idx_0 = localB->ux2[0];
  unnamed_idx_1 = localB->ux2[1];
  unnamed_idx_0 *= v1_idx_0;
  unnamed_idx_0 += unnamed_idx_1 * v1_idx_1;
  localB->Divide1 = unnamed_idx_0;

  /* Sum: '<S22>/Subtract1' */
  localB->Subtract1_f = localB->Divide1 - rtu_threshod;

  /* RelationalOperator: '<S135>/Compare' incorporates:
   *  Constant: '<S135>/Constant'
   */
  localB->Compare_h = (uint8_T)(localB->Subtract1_f >=
    localP->CompareToConstant_const_g);

  /* MultiPortSwitch: '<S22>/Multiport Switch' incorporates:
   *  Constant: '<S22>/Constant3'
   *  Constant: '<S22>/Constant4'
   */
  if (localB->Compare_h == 0) {
    localB->MultiportSwitch_a = localP->Constant3_Value;
  } else {
    localB->MultiportSwitch_a = localP->Constant4_Value;
  }

  /* End of MultiPortSwitch: '<S22>/Multiport Switch' */
}

/* Start for function-call system: '<S16>/Tracker_Initial.cos_cal' */
void Si_Tracker_Initialcos_cal_Start(B_Tracker_Initialcos_cal_Side_T *localB,
  P_Tracker_Initialcos_cal_Side_T *localP)
{
  /* VirtualOutportStart for Outport: '<S23>/relative_degree' */
  localB->MultiportSwitch = localP->relative_degree_Y0;
}

/* Output and update for function-call system: '<S16>/Tracker_Initial.cos_cal' */
void SideFusi_Tracker_Initialcos_cal(real_T rtu_x1, real_T rtu_x2, real_T rtu_y1,
  real_T rtu_y2, real_T rtu_xm, real_T rtu_ym, B_Tracker_Initialcos_cal_Side_T
  *localB, P_Tracker_Initialcos_cal_Side_T *localP)
{
  real_T u0;
  real_T u1;
  real_T u2;

  /* Sum: '<S149>/Subtract2' */
  localB->Subtract2 = rtu_x1 - rtu_x2;

  /* Math: '<S149>/Math Function2' */
  localB->MathFunction2 = localB->Subtract2 * localB->Subtract2;

  /* Sum: '<S149>/Subtract3' */
  localB->Subtract3 = rtu_y1 - rtu_y2;

  /* Math: '<S149>/Math Function3' */
  localB->MathFunction3 = localB->Subtract3 * localB->Subtract3;

  /* Sum: '<S149>/Subtract4' */
  localB->Subtract4 = localB->MathFunction2 + localB->MathFunction3;

  /* Sqrt: '<S149>/Sqrt' */
  localB->Sqrt = sqrt(localB->Subtract4);

  /* RelationalOperator: '<S146>/Compare' incorporates:
   *  Constant: '<S146>/Constant'
   */
  localB->Compare = (uint8_T)(localB->Sqrt > localP->CompareToConstant1_const);

  /* Sum: '<S150>/Subtract2' */
  localB->Subtract2_j = rtu_x2 - rtu_xm;

  /* Math: '<S150>/Math Function2' */
  localB->MathFunction2_k = localB->Subtract2_j * localB->Subtract2_j;

  /* Sum: '<S150>/Subtract3' */
  localB->Subtract3_g = rtu_y2 - rtu_ym;

  /* Math: '<S150>/Math Function3' */
  localB->MathFunction3_e = localB->Subtract3_g * localB->Subtract3_g;

  /* Sum: '<S150>/Subtract4' */
  localB->Subtract4_f = localB->MathFunction2_k + localB->MathFunction3_e;

  /* Sqrt: '<S150>/Sqrt' */
  localB->Sqrt_d = sqrt(localB->Subtract4_f);

  /* RelationalOperator: '<S147>/Compare' incorporates:
   *  Constant: '<S147>/Constant'
   */
  localB->Compare_p = (uint8_T)(localB->Sqrt_d >
    localP->CompareToConstant2_const);

  /* Product: '<S144>/Divide1' */
  localB->Divide1 = (uint16_T)((uint32_T)localB->Compare * localB->Compare_p);

  /* RelationalOperator: '<S145>/Compare' incorporates:
   *  Constant: '<S145>/Constant'
   */
  localB->Compare_m = (uint8_T)(localB->Divide1 !=
    localP->CompareToConstant_const);

  /* MultiPortSwitch: '<S144>/Multiport Switch' incorporates:
   *  Constant: '<S144>/Constant4'
   */
  if (localB->Compare_m == 0) {
    localB->MultiportSwitch = localP->Constant4_Value;
  } else {
    /* Sum: '<S151>/Subtract3' */
    localB->Subtract3_n = rtu_ym - rtu_y1;

    /* Math: '<S151>/Math Function3' */
    localB->MathFunction3_d = localB->Subtract3_n * localB->Subtract3_n;

    /* Sum: '<S151>/Subtract2' */
    localB->Subtract2_m = rtu_xm - rtu_x1;

    /* Math: '<S151>/Math Function2' */
    localB->MathFunction2_d = localB->Subtract2_m * localB->Subtract2_m;

    /* Sum: '<S151>/Subtract4' */
    localB->Subtract4_f5 = localB->MathFunction2_d + localB->MathFunction3_d;

    /* Sqrt: '<S151>/Sqrt' */
    localB->Sqrt_g = sqrt(localB->Subtract4_f5);

    /* Math: '<S144>/Math Function4' */
    localB->MathFunction4 = localB->Sqrt_g * localB->Sqrt_g;

    /* Math: '<S144>/Math Function3' */
    localB->MathFunction3_d3 = localB->Sqrt_d * localB->Sqrt_d;

    /* Math: '<S144>/Math Function2' */
    localB->MathFunction2_c = localB->Sqrt * localB->Sqrt;

    /* Sum: '<S144>/Subtract2' */
    localB->Subtract2_f = (localB->MathFunction2_c + localB->MathFunction3_d3) -
      localB->MathFunction4;

    /* Product: '<S144>/Divide2' incorporates:
     *  Constant: '<S144>/Constant5'
     */
    localB->Divide2 = localB->Sqrt * localB->Sqrt_d * localP->Constant5_Value;

    /* Product: '<S144>/Divide3' */
    localB->Divide3 = localB->Subtract2_f / localB->Divide2;

    /* Trigonometry: '<S144>/Trigonometric Function1' */
    u0 = localB->Divide3;
    if (u0 > 1.0) {
      u0 = 1.0;
    } else {
      if (u0 < -1.0) {
        u0 = -1.0;
      }
    }

    localB->TrigonometricFunction1 = acos(u0);

    /* End of Trigonometry: '<S144>/Trigonometric Function1' */

    /* Gain: '<S144>/Gain' */
    localB->Gain = localP->Gain_Gain * localB->TrigonometricFunction1;

    /* Saturate: '<S144>/Saturation2' */
    u0 = localB->Gain;
    u1 = localP->Saturation2_LowerSat;
    u2 = localP->Saturation2_UpperSat;
    if (u0 > u2) {
      localB->Saturation2 = u2;
    } else if (u0 < u1) {
      localB->Saturation2 = u1;
    } else {
      localB->Saturation2 = u0;
    }

    /* End of Saturate: '<S144>/Saturation2' */
    localB->MultiportSwitch = localB->Saturation2;
  }

  /* End of MultiPortSwitch: '<S144>/Multiport Switch' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Set_Source(real_T data)
{
  /* Graphical Function 'Set_Source': '<S16>:1306' */
  /* Transition: '<S16>:1309' */
  /* Transition: '<S16>:1310' */
  SideFusion_Fcn_DW.DataSource = data;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Set_Time(real_T data)
{
  /* Graphical Function 'Set_Time': '<S16>:1300' */
  /* Transition: '<S16>:1303' */
  /* Transition: '<S16>:1304' */
  SideFusion_Fcn_DW.Sensor_sampleTime = data;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_FusDataIni(void)
{
  int32_T i;

  /* Graphical Function 'FusDataIni': '<S16>:205' */
  /* Transition: '<S16>:209' */
  /* Transition: '<S16>:210' */
  /* deltaT=0; */
  SideFusion_Fcn_B.deltaT = SideFusion_Fcn_DW.Sensor_sampleTime -
    SideFusion_Fcn_DW.LastCalTime;
  if (SideFusion_Fcn_B.deltaT > 0.08) {
    /* Transition: '<S16>:3803' */
    /* Transition: '<S16>:3805' */
    SideFusion_Fcn_B.deltaT = 0.05;

    /* if sensor sample time change,
       to ensure won't let model run over  */
    /* Transition: '<S16>:3806' */
  } else {
    /* Transition: '<S16>:3807' */
  }

  /* Transition: '<S16>:211' */
  if (SideFusion_Fcn_B.deltaT < 0.0) {
    /* Transition: '<S16>:3825' */
    /* Transition: '<S16>:3827' */
    SideFusion_Fcn_B.deltaT = 0.001;

    /* Transition: '<S16>:3829' */
  } else {
    /* Transition: '<S16>:3830' */
  }

  /* Transition: '<S16>:3832' */
  SideFusion_Fcn_DW.TrackCounter = 0.0;
  SideFusion_Fcn_DW.c = 0.0;
  SideFusion_Fcn_B.Num_Out = 0.0;
  for (i = 0; i < 1600; i++) {
    SideFusion_Fcn_DW.Gtj[i] = 0.0;
    SideFusion_Fcn_DW.Ptj[i] = 0.0;
  }

  for (i = 0; i < 40; i++) {
    SideFusion_Fcn_DW.Gtsum[i] = 0.0;
    SideFusion_Fcn_DW.Gsumj[i] = 0.0;
    SideFusion_Fcn_DW.Ptsum[i] = 0.0;
    SideFusion_Fcn_DW.Psumj[i] = 0.0;
  }

  memset(&SideFusion_Fcn_B.Measure_Data[0], 0, 240U * sizeof(real_T));
  SideFusion_Fcn_B.Measure_Num = 0.0;
  SideFusion_Fcn_DW.k = 0.0;
  SideFusion_Fcn_DW.n = 0.0;
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
  memset(&SideFusion_Fcn_B.SideFusOut[0], 0, 160U * sizeof(real_T));
  memset(&SideFusion_Fcn_DW.Returns[0], 0, 30U * sizeof(real_T));
  SideFusion_Fcn_DW.Num_Returns = 0.0;
  memset(&SideFusion_Fcn_DW.OneMeasureFlg[0], 0, 10U * sizeof(real_T));
  memset(&SideFusion_Fcn_B.FusDataInternal[0], 0, 1160U * sizeof(real_T));
  memset(&SideFusion_Fcn_DW.P_Bulb[0], 0, 160U * sizeof(real_T));
  memset(&SideFusion_Fcn_DW.UpdateTrackFlag[0], 0, 40U * sizeof(real_T));
  memset(&SideFusion_Fcn_DW.SelectMea[0], 0, 9U * sizeof(real_T));
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_FusTrackPredict(void)
{
  real_T tmp[4];
  real_T tmp_0[16];
  real_T tmp_1[4];
  real_T tmp_2[16];
  real_T v1[16];
  int32_T i;
  int32_T i_0;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  real_T unnamed_idx_2;
  real_T unnamed_idx_3;

  /* Graphical Function 'FusTrackPredict': '<S16>:329' */
  /* Transition: '<S16>:336' */
  while (SideFusion_Fcn_DW.k < SideFusion_Fcn_DW.Num_Trg) {
    /* Transition: '<S16>:337' */
    if (SideFusion_Fcn_DW.FusDataInternal_temp[(int32_T)SideFusion_Fcn_DW.k] !=
        0.0) {
      /* Transition: '<S16>:338' */
      /* Transition: '<S16>:342' */
      /* Simulink Function 'Forecast': '<S16>:385' */
      SideFusion_Fcn_B.Pre_x_e = SideFusion_Fcn_DW.FusDataInternal_temp[40 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.Pre_vx_o = SideFusion_Fcn_DW.FusDataInternal_temp[80 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.Pre_y_m = SideFusion_Fcn_DW.FusDataInternal_temp[120 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.Pre_vy_b = SideFusion_Fcn_DW.FusDataInternal_temp[160 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.deltaT_l = SideFusion_Fcn_B.deltaT;
      SideFusion_Fcn_B.pre_p11_k = SideFusion_Fcn_DW.FusDataInternal_temp[280 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p12_l = SideFusion_Fcn_DW.FusDataInternal_temp[320 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p13_d = SideFusion_Fcn_DW.FusDataInternal_temp[360 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p14_e = SideFusion_Fcn_DW.FusDataInternal_temp[400 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p21_p = SideFusion_Fcn_DW.FusDataInternal_temp[440 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p22_i = SideFusion_Fcn_DW.FusDataInternal_temp[480 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p23_f = SideFusion_Fcn_DW.FusDataInternal_temp[520 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p24_m = SideFusion_Fcn_DW.FusDataInternal_temp[560 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p31_k = SideFusion_Fcn_DW.FusDataInternal_temp[600 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p32_e = SideFusion_Fcn_DW.FusDataInternal_temp[640 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p33_e = SideFusion_Fcn_DW.FusDataInternal_temp[680 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p34_k = SideFusion_Fcn_DW.FusDataInternal_temp[720 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p41_d = SideFusion_Fcn_DW.FusDataInternal_temp[760 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p42_m = SideFusion_Fcn_DW.FusDataInternal_temp[800 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p43_d = SideFusion_Fcn_DW.FusDataInternal_temp[840 +
        (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.pre_p44_c = SideFusion_Fcn_DW.FusDataInternal_temp[880 +
        (int32_T)SideFusion_Fcn_DW.k];

      /* Outputs for Function Call SubSystem: '<S16>/FusTrackPredict.Forecast' */
      /* Abs: '<S26>/Abs' */
      SideFusion_Fcn_B.Abs_ju = fabs(SideFusion_Fcn_B.pre_p11_k);

      /* RelationalOperator: '<S33>/Compare' incorporates:
       *  Constant: '<S33>/Constant'
       */
      SideFusion_Fcn_B.Compare_e = (uint8_T)(SideFusion_Fcn_B.Abs_ju >=
        SideFusion_Fcn_P.CompareToConstant_const_d);

      /* Switch: '<S26>/Switch' incorporates:
       *  Constant: '<S26>/Constant'
       */
      if (SideFusion_Fcn_B.Compare_e >= SideFusion_Fcn_P.Switch_Threshold_f) {
        SideFusion_Fcn_B.Switch_ax = SideFusion_Fcn_B.pre_p11_k;
      } else {
        SideFusion_Fcn_B.Switch_ax = SideFusion_Fcn_P.Constant_Value_c;
      }

      /* End of Switch: '<S26>/Switch' */

      /* Abs: '<S27>/Abs' */
      SideFusion_Fcn_B.Abs_f4 = fabs(SideFusion_Fcn_B.pre_p22_i);

      /* RelationalOperator: '<S34>/Compare' incorporates:
       *  Constant: '<S34>/Constant'
       */
      SideFusion_Fcn_B.Compare_k1 = (uint8_T)(SideFusion_Fcn_B.Abs_f4 >=
        SideFusion_Fcn_P.CompareToConstant_const_fu);

      /* Switch: '<S27>/Switch' incorporates:
       *  Constant: '<S27>/Constant'
       */
      if (SideFusion_Fcn_B.Compare_k1 >= SideFusion_Fcn_P.Switch_Threshold_b) {
        SideFusion_Fcn_B.Switch_bj = SideFusion_Fcn_B.pre_p22_i;
      } else {
        SideFusion_Fcn_B.Switch_bj = SideFusion_Fcn_P.Constant_Value_m;
      }

      /* End of Switch: '<S27>/Switch' */

      /* Abs: '<S28>/Abs' */
      SideFusion_Fcn_B.Abs_kay = fabs(SideFusion_Fcn_B.pre_p33_e);

      /* RelationalOperator: '<S35>/Compare' incorporates:
       *  Constant: '<S35>/Constant'
       */
      SideFusion_Fcn_B.Compare_b = (uint8_T)(SideFusion_Fcn_B.Abs_kay >=
        SideFusion_Fcn_P.CompareToConstant_const_a);

      /* Switch: '<S28>/Switch' incorporates:
       *  Constant: '<S28>/Constant'
       */
      if (SideFusion_Fcn_B.Compare_b >= SideFusion_Fcn_P.Switch_Threshold_n) {
        SideFusion_Fcn_B.Switch_da = SideFusion_Fcn_B.pre_p33_e;
      } else {
        SideFusion_Fcn_B.Switch_da = SideFusion_Fcn_P.Constant_Value_ew;
      }

      /* End of Switch: '<S28>/Switch' */

      /* Abs: '<S29>/Abs' */
      SideFusion_Fcn_B.Abs_ir = fabs(SideFusion_Fcn_B.pre_p44_c);

      /* RelationalOperator: '<S36>/Compare' incorporates:
       *  Constant: '<S36>/Constant'
       */
      SideFusion_Fcn_B.Compare_n4 = (uint8_T)(SideFusion_Fcn_B.Abs_ir >=
        SideFusion_Fcn_P.CompareToConstant_const_m);

      /* Switch: '<S29>/Switch' incorporates:
       *  Constant: '<S29>/Constant'
       */
      if (SideFusion_Fcn_B.Compare_n4 >= SideFusion_Fcn_P.Switch_Threshold_d) {
        SideFusion_Fcn_B.Switch_o1 = SideFusion_Fcn_B.pre_p44_c;
      } else {
        SideFusion_Fcn_B.Switch_o1 = SideFusion_Fcn_P.Constant_Value_cv;
      }

      /* End of Switch: '<S29>/Switch' */

      /* SignalConversion: '<S39>/TmpSignal ConversionAtMath FunctionInport1' incorporates:
       *  Constant: '<S39>/Constant'
       *  Constant: '<S39>/Constant1'
       *  Constant: '<S39>/Constant3'
       */
      SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_k[0] =
        SideFusion_Fcn_P.Constant_Value_f;
      SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_k[1] =
        SideFusion_Fcn_B.deltaT_l;
      SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_k[2] =
        SideFusion_Fcn_P.Constant3_Value_d;
      SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_k[3] =
        SideFusion_Fcn_P.Constant1_Value_m;

      /* Math: '<S39>/Math Function' */
      SideFusion_Fcn_B.MathFunction[0] =
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_k[0];
      SideFusion_Fcn_B.MathFunction[1] =
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_k[1];
      SideFusion_Fcn_B.MathFunction[2] =
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_k[2];
      SideFusion_Fcn_B.MathFunction[3] =
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_k[3];

      /* Product: '<S39>/Product' incorporates:
       *  Constant: '<S39>/Constant2'
       */
      tmp[0] = SideFusion_Fcn_P.Constant2_Value_j[0];
      tmp[1] = SideFusion_Fcn_P.Constant2_Value_j[1];
      tmp[2] = SideFusion_Fcn_P.Constant2_Value_j[2];
      tmp[3] = SideFusion_Fcn_P.Constant2_Value_j[3];
      unnamed_idx_0 = SideFusion_Fcn_B.MathFunction[0];
      unnamed_idx_1 = SideFusion_Fcn_B.MathFunction[1];
      unnamed_idx_2 = SideFusion_Fcn_B.MathFunction[2];
      unnamed_idx_3 = SideFusion_Fcn_B.MathFunction[3];
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.Product_fr[i] = tmp[i] * unnamed_idx_0;
        SideFusion_Fcn_B.Product_fr[i + 4] = tmp[i] * unnamed_idx_1;
        SideFusion_Fcn_B.Product_fr[i + 8] = tmp[i] * unnamed_idx_2;
        SideFusion_Fcn_B.Product_fr[i + 12] = tmp[i] * unnamed_idx_3;
      }

      /* End of Product: '<S39>/Product' */

      /* SignalConversion: '<S40>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
       *  Constant: '<S40>/Constant1'
       *  Constant: '<S40>/Constant3'
       *  Constant: '<S40>/Constant4'
       *  Constant: '<S40>/Constant6'
       */
      SideFusion_Fcn_B.TmpSignalConversionAt_fzyxdb3o4[0] =
        SideFusion_Fcn_P.Constant3_Value_l;
      SideFusion_Fcn_B.TmpSignalConversionAt_fzyxdb3o4[1] =
        SideFusion_Fcn_P.Constant1_Value_c;
      SideFusion_Fcn_B.TmpSignalConversionAt_fzyxdb3o4[2] =
        SideFusion_Fcn_P.Constant6_Value;
      SideFusion_Fcn_B.TmpSignalConversionAt_fzyxdb3o4[3] =
        SideFusion_Fcn_P.Constant4_Value;

      /* Math: '<S40>/Math Function1' */
      SideFusion_Fcn_B.MathFunction1_lw[0] =
        SideFusion_Fcn_B.TmpSignalConversionAt_fzyxdb3o4[0];
      SideFusion_Fcn_B.MathFunction1_lw[1] =
        SideFusion_Fcn_B.TmpSignalConversionAt_fzyxdb3o4[1];
      SideFusion_Fcn_B.MathFunction1_lw[2] =
        SideFusion_Fcn_B.TmpSignalConversionAt_fzyxdb3o4[2];
      SideFusion_Fcn_B.MathFunction1_lw[3] =
        SideFusion_Fcn_B.TmpSignalConversionAt_fzyxdb3o4[3];

      /* Product: '<S40>/Product1' incorporates:
       *  Constant: '<S40>/Constant5'
       */
      tmp[0] = SideFusion_Fcn_P.Constant5_Value[0];
      tmp[1] = SideFusion_Fcn_P.Constant5_Value[1];
      tmp[2] = SideFusion_Fcn_P.Constant5_Value[2];
      tmp[3] = SideFusion_Fcn_P.Constant5_Value[3];
      unnamed_idx_0 = SideFusion_Fcn_B.MathFunction1_lw[0];
      unnamed_idx_1 = SideFusion_Fcn_B.MathFunction1_lw[1];
      unnamed_idx_2 = SideFusion_Fcn_B.MathFunction1_lw[2];
      unnamed_idx_3 = SideFusion_Fcn_B.MathFunction1_lw[3];
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.Product1_fb[i] = tmp[i] * unnamed_idx_0;
        SideFusion_Fcn_B.Product1_fb[i + 4] = tmp[i] * unnamed_idx_1;
        SideFusion_Fcn_B.Product1_fb[i + 8] = tmp[i] * unnamed_idx_2;
        SideFusion_Fcn_B.Product1_fb[i + 12] = tmp[i] * unnamed_idx_3;
      }

      /* End of Product: '<S40>/Product1' */

      /* SignalConversion: '<S41>/TmpSignal ConversionAtMath FunctionInport1' incorporates:
       *  Constant: '<S41>/Constant'
       *  Constant: '<S41>/Constant1'
       *  Constant: '<S41>/Constant3'
       */
      SideFusion_Fcn_B.TmpSignalConversionAtMathFun_kf[0] =
        SideFusion_Fcn_P.Constant3_Value_o;
      SideFusion_Fcn_B.TmpSignalConversionAtMathFun_kf[1] =
        SideFusion_Fcn_P.Constant1_Value_i;
      SideFusion_Fcn_B.TmpSignalConversionAtMathFun_kf[2] =
        SideFusion_Fcn_P.Constant_Value_nr;
      SideFusion_Fcn_B.TmpSignalConversionAtMathFun_kf[3] =
        SideFusion_Fcn_B.deltaT_l;

      /* Math: '<S41>/Math Function' */
      SideFusion_Fcn_B.MathFunction_n[0] =
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_kf[0];
      SideFusion_Fcn_B.MathFunction_n[1] =
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_kf[1];
      SideFusion_Fcn_B.MathFunction_n[2] =
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_kf[2];
      SideFusion_Fcn_B.MathFunction_n[3] =
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_kf[3];

      /* Product: '<S41>/Product' incorporates:
       *  Constant: '<S41>/Constant2'
       */
      tmp[0] = SideFusion_Fcn_P.Constant2_Value_o[0];
      tmp[1] = SideFusion_Fcn_P.Constant2_Value_o[1];
      tmp[2] = SideFusion_Fcn_P.Constant2_Value_o[2];
      tmp[3] = SideFusion_Fcn_P.Constant2_Value_o[3];
      unnamed_idx_0 = SideFusion_Fcn_B.MathFunction_n[0];
      unnamed_idx_1 = SideFusion_Fcn_B.MathFunction_n[1];
      unnamed_idx_2 = SideFusion_Fcn_B.MathFunction_n[2];
      unnamed_idx_3 = SideFusion_Fcn_B.MathFunction_n[3];
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.Product_hk[i] = tmp[i] * unnamed_idx_0;
        SideFusion_Fcn_B.Product_hk[i + 4] = tmp[i] * unnamed_idx_1;
        SideFusion_Fcn_B.Product_hk[i + 8] = tmp[i] * unnamed_idx_2;
        SideFusion_Fcn_B.Product_hk[i + 12] = tmp[i] * unnamed_idx_3;
      }

      /* End of Product: '<S41>/Product' */

      /* SignalConversion: '<S42>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
       *  Constant: '<S42>/Constant1'
       *  Constant: '<S42>/Constant3'
       *  Constant: '<S42>/Constant4'
       *  Constant: '<S42>/Constant6'
       */
      SideFusion_Fcn_B.TmpSignalConversionA_fzyxdb3o4n[0] =
        SideFusion_Fcn_P.Constant3_Value_m;
      SideFusion_Fcn_B.TmpSignalConversionA_fzyxdb3o4n[1] =
        SideFusion_Fcn_P.Constant1_Value_ld;
      SideFusion_Fcn_B.TmpSignalConversionA_fzyxdb3o4n[2] =
        SideFusion_Fcn_P.Constant6_Value_c;
      SideFusion_Fcn_B.TmpSignalConversionA_fzyxdb3o4n[3] =
        SideFusion_Fcn_P.Constant4_Value_c;

      /* Math: '<S42>/Math Function1' */
      SideFusion_Fcn_B.MathFunction1_fr[0] =
        SideFusion_Fcn_B.TmpSignalConversionA_fzyxdb3o4n[0];
      SideFusion_Fcn_B.MathFunction1_fr[1] =
        SideFusion_Fcn_B.TmpSignalConversionA_fzyxdb3o4n[1];
      SideFusion_Fcn_B.MathFunction1_fr[2] =
        SideFusion_Fcn_B.TmpSignalConversionA_fzyxdb3o4n[2];
      SideFusion_Fcn_B.MathFunction1_fr[3] =
        SideFusion_Fcn_B.TmpSignalConversionA_fzyxdb3o4n[3];

      /* Product: '<S42>/Product1' incorporates:
       *  Constant: '<S42>/Constant5'
       */
      tmp[0] = SideFusion_Fcn_P.Constant5_Value_n[0];
      tmp[1] = SideFusion_Fcn_P.Constant5_Value_n[1];
      tmp[2] = SideFusion_Fcn_P.Constant5_Value_n[2];
      tmp[3] = SideFusion_Fcn_P.Constant5_Value_n[3];
      unnamed_idx_0 = SideFusion_Fcn_B.MathFunction1_fr[0];
      unnamed_idx_1 = SideFusion_Fcn_B.MathFunction1_fr[1];
      unnamed_idx_2 = SideFusion_Fcn_B.MathFunction1_fr[2];
      unnamed_idx_3 = SideFusion_Fcn_B.MathFunction1_fr[3];
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.Product1_aw[i] = tmp[i] * unnamed_idx_0;
        SideFusion_Fcn_B.Product1_aw[i + 4] = tmp[i] * unnamed_idx_1;
        SideFusion_Fcn_B.Product1_aw[i + 8] = tmp[i] * unnamed_idx_2;
        SideFusion_Fcn_B.Product1_aw[i + 12] = tmp[i] * unnamed_idx_3;
      }

      /* End of Product: '<S42>/Product1' */

      /* SignalConversion: '<S32>/TmpSignal ConversionAtProductInport2' */
      SideFusion_Fcn_B.X_k4x1[0] = SideFusion_Fcn_B.Pre_x_e;
      SideFusion_Fcn_B.X_k4x1[1] = SideFusion_Fcn_B.Pre_vx_o;
      SideFusion_Fcn_B.X_k4x1[2] = SideFusion_Fcn_B.Pre_y_m;
      SideFusion_Fcn_B.X_k4x1[3] = SideFusion_Fcn_B.Pre_vy_b;
      for (i = 0; i < 16; i++) {
        /* Sum: '<S37>/Add' */
        SideFusion_Fcn_B.Add_gs[i] = ((SideFusion_Fcn_B.Product_fr[i] +
          SideFusion_Fcn_B.Product1_fb[i]) + SideFusion_Fcn_B.Product_hk[i]) +
          SideFusion_Fcn_B.Product1_aw[i];

        /* Product: '<S32>/Product' */
        tmp_0[i] = SideFusion_Fcn_B.Add_gs[i];
      }

      /* Product: '<S32>/Product' */
      tmp[0] = SideFusion_Fcn_B.X_k4x1[0];
      tmp[1] = SideFusion_Fcn_B.X_k4x1[1];
      tmp[2] = SideFusion_Fcn_B.X_k4x1[2];
      tmp[3] = SideFusion_Fcn_B.X_k4x1[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_1[i] = unnamed_idx_0;
      }

      SideFusion_Fcn_B.x_predict4x1[0] = tmp_1[0];
      SideFusion_Fcn_B.x_predict4x1[1] = tmp_1[1];
      SideFusion_Fcn_B.x_predict4x1[2] = tmp_1[2];
      SideFusion_Fcn_B.x_predict4x1[3] = tmp_1[3];

      /* SignalConversion: '<S17>/OutportBufferForRangeY' */
      SideFusion_Fcn_B.Range_Y = SideFusion_Fcn_B.x_predict4x1[2];

      /* SignalConversion: '<S17>/OutportBufferForVelX' */
      SideFusion_Fcn_B.Velocity_X = SideFusion_Fcn_B.x_predict4x1[1];

      /* SignalConversion: '<S17>/OutportBufferForVelY' */
      SideFusion_Fcn_B.Velocity_Y = SideFusion_Fcn_B.x_predict4x1[3];

      /* SignalConversion: '<S30>/TmpSignal ConversionAtMath Function2Inport1' */
      SideFusion_Fcn_B.TmpSignalConversionAtM_ppunemv5[0] =
        SideFusion_Fcn_B.Switch_ax;
      SideFusion_Fcn_B.TmpSignalConversionAtM_ppunemv5[1] =
        SideFusion_Fcn_B.pre_p12_l;
      SideFusion_Fcn_B.TmpSignalConversionAtM_ppunemv5[2] =
        SideFusion_Fcn_B.pre_p13_d;
      SideFusion_Fcn_B.TmpSignalConversionAtM_ppunemv5[3] =
        SideFusion_Fcn_B.pre_p14_e;

      /* Math: '<S30>/Math Function2' */
      SideFusion_Fcn_B.MathFunction2_o[0] =
        SideFusion_Fcn_B.TmpSignalConversionAtM_ppunemv5[0];
      SideFusion_Fcn_B.MathFunction2_o[1] =
        SideFusion_Fcn_B.TmpSignalConversionAtM_ppunemv5[1];
      SideFusion_Fcn_B.MathFunction2_o[2] =
        SideFusion_Fcn_B.TmpSignalConversionAtM_ppunemv5[2];
      SideFusion_Fcn_B.MathFunction2_o[3] =
        SideFusion_Fcn_B.TmpSignalConversionAtM_ppunemv5[3];

      /* Gain: '<S30>/Gain' */
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.Gain_b[i] = SideFusion_Fcn_P.Gain_Gain_dh[i] *
          SideFusion_Fcn_B.MathFunction2_o[0];
        SideFusion_Fcn_B.Gain_b[i + 4] = SideFusion_Fcn_P.Gain_Gain_dh[i] *
          SideFusion_Fcn_B.MathFunction2_o[1];
        SideFusion_Fcn_B.Gain_b[i + 8] = SideFusion_Fcn_P.Gain_Gain_dh[i] *
          SideFusion_Fcn_B.MathFunction2_o[2];
        SideFusion_Fcn_B.Gain_b[i + 12] = SideFusion_Fcn_P.Gain_Gain_dh[i] *
          SideFusion_Fcn_B.MathFunction2_o[3];
      }

      /* End of Gain: '<S30>/Gain' */

      /* SignalConversion: '<S30>/TmpSignal ConversionAtMath Function1Inport1' */
      SideFusion_Fcn_B.TmpSignalConversion_fzyxdb3o4nr[0] =
        SideFusion_Fcn_B.pre_p21_p;
      SideFusion_Fcn_B.TmpSignalConversion_fzyxdb3o4nr[1] =
        SideFusion_Fcn_B.Switch_bj;
      SideFusion_Fcn_B.TmpSignalConversion_fzyxdb3o4nr[2] =
        SideFusion_Fcn_B.pre_p23_f;
      SideFusion_Fcn_B.TmpSignalConversion_fzyxdb3o4nr[3] =
        SideFusion_Fcn_B.pre_p24_m;

      /* Math: '<S30>/Math Function1' */
      SideFusion_Fcn_B.MathFunction1_pj[0] =
        SideFusion_Fcn_B.TmpSignalConversion_fzyxdb3o4nr[0];
      SideFusion_Fcn_B.MathFunction1_pj[1] =
        SideFusion_Fcn_B.TmpSignalConversion_fzyxdb3o4nr[1];
      SideFusion_Fcn_B.MathFunction1_pj[2] =
        SideFusion_Fcn_B.TmpSignalConversion_fzyxdb3o4nr[2];
      SideFusion_Fcn_B.MathFunction1_pj[3] =
        SideFusion_Fcn_B.TmpSignalConversion_fzyxdb3o4nr[3];

      /* Gain: '<S30>/Gain1' */
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.Gain1_fr[i] = SideFusion_Fcn_P.Gain1_Gain_j[i] *
          SideFusion_Fcn_B.MathFunction1_pj[0];
        SideFusion_Fcn_B.Gain1_fr[i + 4] = SideFusion_Fcn_P.Gain1_Gain_j[i] *
          SideFusion_Fcn_B.MathFunction1_pj[1];
        SideFusion_Fcn_B.Gain1_fr[i + 8] = SideFusion_Fcn_P.Gain1_Gain_j[i] *
          SideFusion_Fcn_B.MathFunction1_pj[2];
        SideFusion_Fcn_B.Gain1_fr[i + 12] = SideFusion_Fcn_P.Gain1_Gain_j[i] *
          SideFusion_Fcn_B.MathFunction1_pj[3];
      }

      /* End of Gain: '<S30>/Gain1' */

      /* SignalConversion: '<S30>/TmpSignal ConversionAtMath Function4Inport1' */
      SideFusion_Fcn_B.TmpSignalConversionAtMat_fjui3t[0] =
        SideFusion_Fcn_B.pre_p31_k;
      SideFusion_Fcn_B.TmpSignalConversionAtMat_fjui3t[1] =
        SideFusion_Fcn_B.pre_p32_e;
      SideFusion_Fcn_B.TmpSignalConversionAtMat_fjui3t[2] =
        SideFusion_Fcn_B.Switch_da;
      SideFusion_Fcn_B.TmpSignalConversionAtMat_fjui3t[3] =
        SideFusion_Fcn_B.pre_p34_k;

      /* Math: '<S30>/Math Function4' */
      SideFusion_Fcn_B.MathFunction4_k[0] =
        SideFusion_Fcn_B.TmpSignalConversionAtMat_fjui3t[0];
      SideFusion_Fcn_B.MathFunction4_k[1] =
        SideFusion_Fcn_B.TmpSignalConversionAtMat_fjui3t[1];
      SideFusion_Fcn_B.MathFunction4_k[2] =
        SideFusion_Fcn_B.TmpSignalConversionAtMat_fjui3t[2];
      SideFusion_Fcn_B.MathFunction4_k[3] =
        SideFusion_Fcn_B.TmpSignalConversionAtMat_fjui3t[3];

      /* Gain: '<S30>/Gain2' */
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.Gain2_ot[i] = SideFusion_Fcn_P.Gain2_Gain_a[i] *
          SideFusion_Fcn_B.MathFunction4_k[0];
        SideFusion_Fcn_B.Gain2_ot[i + 4] = SideFusion_Fcn_P.Gain2_Gain_a[i] *
          SideFusion_Fcn_B.MathFunction4_k[1];
        SideFusion_Fcn_B.Gain2_ot[i + 8] = SideFusion_Fcn_P.Gain2_Gain_a[i] *
          SideFusion_Fcn_B.MathFunction4_k[2];
        SideFusion_Fcn_B.Gain2_ot[i + 12] = SideFusion_Fcn_P.Gain2_Gain_a[i] *
          SideFusion_Fcn_B.MathFunction4_k[3];
      }

      /* End of Gain: '<S30>/Gain2' */

      /* SignalConversion: '<S30>/TmpSignal ConversionAtMath Function3Inport1' */
      SideFusion_Fcn_B.TmpSignalConversionAtMath_ewmt4[0] =
        SideFusion_Fcn_B.pre_p41_d;
      SideFusion_Fcn_B.TmpSignalConversionAtMath_ewmt4[1] =
        SideFusion_Fcn_B.pre_p42_m;
      SideFusion_Fcn_B.TmpSignalConversionAtMath_ewmt4[2] =
        SideFusion_Fcn_B.pre_p43_d;
      SideFusion_Fcn_B.TmpSignalConversionAtMath_ewmt4[3] =
        SideFusion_Fcn_B.Switch_o1;

      /* Math: '<S30>/Math Function3' */
      SideFusion_Fcn_B.MathFunction3_ir[0] =
        SideFusion_Fcn_B.TmpSignalConversionAtMath_ewmt4[0];
      SideFusion_Fcn_B.MathFunction3_ir[1] =
        SideFusion_Fcn_B.TmpSignalConversionAtMath_ewmt4[1];
      SideFusion_Fcn_B.MathFunction3_ir[2] =
        SideFusion_Fcn_B.TmpSignalConversionAtMath_ewmt4[2];
      SideFusion_Fcn_B.MathFunction3_ir[3] =
        SideFusion_Fcn_B.TmpSignalConversionAtMath_ewmt4[3];

      /* Gain: '<S30>/Gain3' */
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.Gain3_h[i] = SideFusion_Fcn_P.Gain3_Gain_i[i] *
          SideFusion_Fcn_B.MathFunction3_ir[0];
        SideFusion_Fcn_B.Gain3_h[i + 4] = SideFusion_Fcn_P.Gain3_Gain_i[i] *
          SideFusion_Fcn_B.MathFunction3_ir[1];
        SideFusion_Fcn_B.Gain3_h[i + 8] = SideFusion_Fcn_P.Gain3_Gain_i[i] *
          SideFusion_Fcn_B.MathFunction3_ir[2];
        SideFusion_Fcn_B.Gain3_h[i + 12] = SideFusion_Fcn_P.Gain3_Gain_i[i] *
          SideFusion_Fcn_B.MathFunction3_ir[3];
      }

      /* End of Gain: '<S30>/Gain3' */

      /* Sum: '<S30>/Add' */
      for (i = 0; i < 16; i++) {
        SideFusion_Fcn_B.Add_n1[i] = ((SideFusion_Fcn_B.Gain_b[i] +
          SideFusion_Fcn_B.Gain1_fr[i]) + SideFusion_Fcn_B.Gain2_ot[i]) +
          SideFusion_Fcn_B.Gain3_h[i];
      }

      /* End of Sum: '<S30>/Add' */

      /* Math: '<S32>/Math Function' */
      for (i = 0; i < 4; i++) {
        SideFusion_Fcn_B.MathFunction_a[i << 2] = SideFusion_Fcn_B.Add_gs[i];
        SideFusion_Fcn_B.MathFunction_a[1 + (i << 2)] =
          SideFusion_Fcn_B.Add_gs[i + 4];
        SideFusion_Fcn_B.MathFunction_a[2 + (i << 2)] =
          SideFusion_Fcn_B.Add_gs[i + 8];
        SideFusion_Fcn_B.MathFunction_a[3 + (i << 2)] =
          SideFusion_Fcn_B.Add_gs[i + 12];
      }

      /* End of Math: '<S32>/Math Function' */

      /* Product: '<S32>/Product1' */
      for (i = 0; i < 16; i++) {
        tmp_0[i] = SideFusion_Fcn_B.Add_n1[i];
        tmp_2[i] = SideFusion_Fcn_B.MathFunction_a[i];
      }

      for (i = 0; i < 4; i++) {
        for (i_0 = 0; i_0 < 4; i_0++) {
          v1[i + (i_0 << 2)] = 0.0;
          v1[i + (i_0 << 2)] += tmp_2[i_0 << 2] * tmp_0[i];
          v1[i + (i_0 << 2)] += tmp_2[(i_0 << 2) + 1] * tmp_0[i + 4];
          v1[i + (i_0 << 2)] += tmp_2[(i_0 << 2) + 2] * tmp_0[i + 8];
          v1[i + (i_0 << 2)] += tmp_2[(i_0 << 2) + 3] * tmp_0[i + 12];
        }
      }

      memcpy(&tmp_0[0], &SideFusion_Fcn_B.Add_gs[0], sizeof(real_T) << 4U);
      for (i = 0; i < 4; i++) {
        for (i_0 = 0; i_0 < 4; i_0++) {
          SideFusion_Fcn_B.P_predict[i + (i_0 << 2)] = 0.0;
          SideFusion_Fcn_B.P_predict[i + (i_0 << 2)] += v1[i_0 << 2] * tmp_0[i];
          SideFusion_Fcn_B.P_predict[i + (i_0 << 2)] += v1[(i_0 << 2) + 1] *
            tmp_0[i + 4];
          SideFusion_Fcn_B.P_predict[i + (i_0 << 2)] += v1[(i_0 << 2) + 2] *
            tmp_0[i + 8];
          SideFusion_Fcn_B.P_predict[i + (i_0 << 2)] += v1[(i_0 << 2) + 3] *
            tmp_0[i + 12];
        }
      }

      for (i = 0; i < 16; i++) {
        /* Sum: '<S32>/Subtract2' incorporates:
         *  Constant: '<S32>/Q'
         */
        SideFusion_Fcn_B.P_predict_o[i] = SideFusion_Fcn_B.P_predict[i] +
          SideFusion_Fcn_P.Q_Value[i];

        /* Product: '<S17>/Product' */
        tmp_0[i] = SideFusion_Fcn_B.P_predict_o[i];
      }

      /* End of Product: '<S32>/Product1' */

      /* Product: '<S17>/Product' incorporates:
       *  Constant: '<S17>/Constant'
       */
      tmp[0] = SideFusion_Fcn_P.Constant_Value_h[0];
      tmp[1] = SideFusion_Fcn_P.Constant_Value_h[1];
      tmp[2] = SideFusion_Fcn_P.Constant_Value_h[2];
      tmp[3] = SideFusion_Fcn_P.Constant_Value_h[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_1[i] = unnamed_idx_0;
      }

      SideFusion_Fcn_B.Product_k[0] = tmp_1[0];
      SideFusion_Fcn_B.Product_k[1] = tmp_1[1];
      SideFusion_Fcn_B.Product_k[2] = tmp_1[2];
      SideFusion_Fcn_B.Product_k[3] = tmp_1[3];

      /* Product: '<S17>/Product1' incorporates:
       *  Constant: '<S17>/Constant1'
       */
      memcpy(&tmp_0[0], &SideFusion_Fcn_B.P_predict_o[0], sizeof(real_T) << 4U);
      tmp[0] = SideFusion_Fcn_P.Constant1_Value_l[0];
      tmp[1] = SideFusion_Fcn_P.Constant1_Value_l[1];
      tmp[2] = SideFusion_Fcn_P.Constant1_Value_l[2];
      tmp[3] = SideFusion_Fcn_P.Constant1_Value_l[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_1[i] = unnamed_idx_0;
      }

      SideFusion_Fcn_B.Product1_ef[0] = tmp_1[0];
      SideFusion_Fcn_B.Product1_ef[1] = tmp_1[1];
      SideFusion_Fcn_B.Product1_ef[2] = tmp_1[2];
      SideFusion_Fcn_B.Product1_ef[3] = tmp_1[3];

      /* End of Product: '<S17>/Product1' */

      /* Product: '<S17>/Product2' incorporates:
       *  Constant: '<S17>/Constant2'
       */
      memcpy(&tmp_0[0], &SideFusion_Fcn_B.P_predict_o[0], sizeof(real_T) << 4U);
      tmp[0] = SideFusion_Fcn_P.Constant2_Value_c[0];
      tmp[1] = SideFusion_Fcn_P.Constant2_Value_c[1];
      tmp[2] = SideFusion_Fcn_P.Constant2_Value_c[2];
      tmp[3] = SideFusion_Fcn_P.Constant2_Value_c[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_1[i] = unnamed_idx_0;
      }

      SideFusion_Fcn_B.Product2_d[0] = tmp_1[0];
      SideFusion_Fcn_B.Product2_d[1] = tmp_1[1];
      SideFusion_Fcn_B.Product2_d[2] = tmp_1[2];
      SideFusion_Fcn_B.Product2_d[3] = tmp_1[3];

      /* End of Product: '<S17>/Product2' */

      /* Product: '<S17>/Product3' incorporates:
       *  Constant: '<S17>/Constant3'
       */
      memcpy(&tmp_0[0], &SideFusion_Fcn_B.P_predict_o[0], sizeof(real_T) << 4U);
      tmp[0] = SideFusion_Fcn_P.Constant3_Value_n[0];
      tmp[1] = SideFusion_Fcn_P.Constant3_Value_n[1];
      tmp[2] = SideFusion_Fcn_P.Constant3_Value_n[2];
      tmp[3] = SideFusion_Fcn_P.Constant3_Value_n[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_1[i] = unnamed_idx_0;
      }

      SideFusion_Fcn_B.Product3_d[0] = tmp_1[0];
      SideFusion_Fcn_B.Product3_d[1] = tmp_1[1];
      SideFusion_Fcn_B.Product3_d[2] = tmp_1[2];
      SideFusion_Fcn_B.Product3_d[3] = tmp_1[3];

      /* End of Product: '<S17>/Product3' */

      /* Saturate: '<S17>/Saturation' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product_k[0];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation_LowerSat_m;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation_UpperSat_n;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation' */

      /* Saturate: '<S17>/Saturation1' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product_k[1];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation1_LowerSat_o;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation1_UpperSat_f;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation1 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation1 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation1 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation1' */

      /* Saturate: '<S17>/Saturation10' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product2_d[2];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation10_LowerSat_j;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation10_UpperSat_a;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation10 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation10 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation10 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation10' */

      /* Saturate: '<S17>/Saturation11' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product2_d[3];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation11_LowerSat_f;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation11_UpperSat_a;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation11 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation11 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation11 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation11' */

      /* Saturate: '<S17>/Saturation12' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product3_d[2];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation12_LowerSat_c;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation12_UpperSat_i;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation12 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation12 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation12 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation12' */

      /* Saturate: '<S17>/Saturation13' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product3_d[3];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation13_LowerSat_g;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation13_UpperSat_c;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation13 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation13 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation13 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation13' */

      /* Saturate: '<S17>/Saturation14' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product3_d[0];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation14_LowerSat_i;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation14_UpperSat_b;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation14 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation14 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation14 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation14' */

      /* Saturate: '<S17>/Saturation15' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product3_d[1];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation15_LowerSat_d;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation15_UpperSat_k;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation15 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation15 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation15 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation15' */

      /* Saturate: '<S17>/Saturation2' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product_k[2];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation2_LowerSat_n;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation2_UpperSat_n;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation2 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation2 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation2 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation2' */

      /* Saturate: '<S17>/Saturation3' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product_k[3];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation3_LowerSat_l;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation3_UpperSat_o;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation3 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation3 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation3 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation3' */

      /* Saturate: '<S17>/Saturation4' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product1_ef[0];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation4_LowerSat_d;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation4_UpperSat_h;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation4 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation4 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation4 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation4' */

      /* Saturate: '<S17>/Saturation5' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product1_ef[1];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation5_LowerSat_o;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation5_UpperSat_f;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation5 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation5 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation5 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation5' */

      /* Saturate: '<S17>/Saturation6' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product1_ef[2];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation6_LowerSat_g;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation6_UpperSat_n;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation6 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation6 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation6 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation6' */

      /* Saturate: '<S17>/Saturation7' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product1_ef[3];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation7_LowerSat_p;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation7_UpperSat_b;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation7 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation7 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation7 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation7' */

      /* Saturate: '<S17>/Saturation8' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product2_d[0];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation8_LowerSat_a;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation8_UpperSat_h;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation8 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation8 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation8 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation8' */

      /* Saturate: '<S17>/Saturation9' */
      unnamed_idx_0 = SideFusion_Fcn_B.Product2_d[1];
      unnamed_idx_1 = SideFusion_Fcn_P.Saturation9_LowerSat_f;
      unnamed_idx_2 = SideFusion_Fcn_P.Saturation9_UpperSat_g;
      if (unnamed_idx_0 > unnamed_idx_2) {
        SideFusion_Fcn_B.Saturation9 = unnamed_idx_2;
      } else if (unnamed_idx_0 < unnamed_idx_1) {
        SideFusion_Fcn_B.Saturation9 = unnamed_idx_1;
      } else {
        SideFusion_Fcn_B.Saturation9 = unnamed_idx_0;
      }

      /* End of Saturate: '<S17>/Saturation9' */
      /* End of Outputs for SubSystem: '<S16>/FusTrackPredict.Forecast' */
      SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.x_predict4x1[0];
      SideFusion_Fcn_B.FusDataInternal[80 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Velocity_X;
      SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Range_Y;
      SideFusion_Fcn_B.FusDataInternal[160 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Velocity_Y;
      SideFusion_Fcn_B.FusDataInternal[280 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation;
      SideFusion_Fcn_B.FusDataInternal[320 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation4;
      SideFusion_Fcn_B.FusDataInternal[360 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation8;
      SideFusion_Fcn_B.FusDataInternal[400 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation14;
      SideFusion_Fcn_B.FusDataInternal[440 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation1;
      SideFusion_Fcn_B.FusDataInternal[480 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation5;
      SideFusion_Fcn_B.FusDataInternal[520 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation9;
      SideFusion_Fcn_B.FusDataInternal[560 + (int32_T)SideFusion_Fcn_DW.k] =
        SideFusion_Fcn_B.Saturation15;
      SideFusion_Fcn_B.FusDataInternal[600 + (int32_T)SideFusion_Fcn_DW.k] =
        SideFusion_Fcn_B.Saturation2;
      SideFusion_Fcn_B.FusDataInternal[640 + (int32_T)SideFusion_Fcn_DW.k] =
        SideFusion_Fcn_B.Saturation6;
      SideFusion_Fcn_B.FusDataInternal[680 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation10;
      SideFusion_Fcn_B.FusDataInternal[720 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation12;
      SideFusion_Fcn_B.FusDataInternal[760 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation3;
      SideFusion_Fcn_B.FusDataInternal[800 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation7;
      SideFusion_Fcn_B.FusDataInternal[840 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation11;
      SideFusion_Fcn_B.FusDataInternal[880 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_B.Saturation13;

      /* All fusion targets forecast,after this step, target number in FusDataInternal is the same as last calculation, but forecast with delta time */
      SideFusion_Fcn_B.FusDataInternal[(int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[(int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.FusDataInternal[200 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[200 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.FusDataInternal[240 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[240 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.FusDataInternal[920 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.FusDataInternal[960 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[960 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.FusDataInternal[1000 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[1000 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.FusDataInternal[1040 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[1040 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.FusDataInternal[1080 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[1080 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.FusDataInternal[1120 + (int32_T)SideFusion_Fcn_DW.n] =
        SideFusion_Fcn_DW.FusDataInternal_temp[1120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.n++;

      /* Transition: '<S16>:343' */
    } else {
      /* Transition: '<S16>:341' */
    }

    /* Transition: '<S16>:339' */
    SideFusion_Fcn_DW.k++;
  }

  /* Transition: '<S16>:340' */
  SideFusion_Fcn_DW.Num_Trg = SideFusion_Fcn_DW.n;
  SideFusion_Fcn_DW.n = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Measurement_Gen(void)
{
  /* Graphical Function 'Measurement_Gen': '<S16>:260' */
  /* Transition: '<S16>:264' */
  memset(&SideFusion_Fcn_DW.FusDataInternal_temp[0], 0, 1160U * sizeof(real_T));
  SideFusion_Fcn_DW.k = 0.0;

  /* Description: This model is used for generated measurement and the number of measurement [ID, X, Y, MoveInfo, RangeRate] */
  if (SideFusion_Fcn_DW.DataSource == 1.0) {
    /* Transition: '<S16>:1330' */
    while (SideFusion_Fcn_DW.k < 10.0) {
      /* Transition: '<S16>:1326' */
      if (SideFusion_Fcn_B.NE[(int32_T)SideFusion_Fcn_DW.k] != 0.0) {
        /* Transition: '<S16>:1324' */
        /* Transition: '<S16>:1323' */
        SideFusion_Fcn_B.Measure_Data[(int32_T)SideFusion_Fcn_B.Measure_Num] =
          SideFusion_Fcn_B.NE[(int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[40 + (int32_T)SideFusion_Fcn_B.Measure_Num]
          = SideFusion_Fcn_B.NE[10 + (int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[80 + (int32_T)SideFusion_Fcn_B.Measure_Num]
          = SideFusion_Fcn_B.NE[20 + (int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[120 + (int32_T)
          SideFusion_Fcn_B.Measure_Num] = SideFusion_Fcn_B.NE[30 + (int32_T)
          SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[200 + (int32_T)
          SideFusion_Fcn_B.Measure_Num] = SideFusion_Fcn_B.NE[40 + (int32_T)
          SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Num++;

        /* Transition: '<S16>:1328' */
      } else {
        /* Transition: '<S16>:1322' */
      }

      /* Transition: '<S16>:1325' */
      SideFusion_Fcn_DW.k++;
    }

    /* Transition: '<S16>:1332' */
    /* Transition: '<S16>:1334' */
  } else {
    /* Transition: '<S16>:283' */
  }

  /* Transition: '<S16>:1350' */
  SideFusion_Fcn_DW.k = 0.0;
  if (SideFusion_Fcn_DW.DataSource == 2.0) {
    /* Transition: '<S16>:1345' */
    while (SideFusion_Fcn_DW.k < 10.0) {
      /* Transition: '<S16>:1340' */
      if (SideFusion_Fcn_B.NE_f[(int32_T)SideFusion_Fcn_DW.k] != 0.0) {
        /* Transition: '<S16>:1343' */
        /* Transition: '<S16>:1341' */
        SideFusion_Fcn_B.Measure_Data[(int32_T)SideFusion_Fcn_B.Measure_Num] =
          SideFusion_Fcn_B.NE_f[(int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[40 + (int32_T)SideFusion_Fcn_B.Measure_Num]
          = SideFusion_Fcn_B.NE_f[10 + (int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[80 + (int32_T)SideFusion_Fcn_B.Measure_Num]
          = SideFusion_Fcn_B.NE_f[20 + (int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[120 + (int32_T)
          SideFusion_Fcn_B.Measure_Num] = SideFusion_Fcn_B.NE_f[30 + (int32_T)
          SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[200 + (int32_T)
          SideFusion_Fcn_B.Measure_Num] = SideFusion_Fcn_B.NE_f[40 + (int32_T)
          SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Num++;

        /* Transition: '<S16>:1335' */
      } else {
        /* Transition: '<S16>:1342' */
      }

      /* Transition: '<S16>:1344' */
      SideFusion_Fcn_DW.k++;
    }

    /* Transition: '<S16>:1346' */
    /* Transition: '<S16>:1347' */
  } else {
    /* Transition: '<S16>:287' */
  }

  /* Transition: '<S16>:1362' */
  SideFusion_Fcn_DW.k = 0.0;
  if (SideFusion_Fcn_DW.DataSource == 3.0) {
    /* Transition: '<S16>:1363' */
    while (SideFusion_Fcn_DW.k < 10.0) {
      /* Transition: '<S16>:1358' */
      if (SideFusion_Fcn_B.NE_j[(int32_T)SideFusion_Fcn_DW.k] != 0.0) {
        /* Transition: '<S16>:1360' */
        /* Transition: '<S16>:1355' */
        SideFusion_Fcn_B.Measure_Data[(int32_T)SideFusion_Fcn_B.Measure_Num] =
          SideFusion_Fcn_B.NE_j[(int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[40 + (int32_T)SideFusion_Fcn_B.Measure_Num]
          = SideFusion_Fcn_B.NE_j[10 + (int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[80 + (int32_T)SideFusion_Fcn_B.Measure_Num]
          = SideFusion_Fcn_B.NE_j[20 + (int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[120 + (int32_T)
          SideFusion_Fcn_B.Measure_Num] = SideFusion_Fcn_B.NE_j[30 + (int32_T)
          SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[200 + (int32_T)
          SideFusion_Fcn_B.Measure_Num] = SideFusion_Fcn_B.NE_j[40 + (int32_T)
          SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Num++;

        /* Transition: '<S16>:1357' */
      } else {
        /* Transition: '<S16>:1359' */
      }

      /* Transition: '<S16>:1361' */
      SideFusion_Fcn_DW.k++;
    }

    /* Transition: '<S16>:1365' */
    /* Transition: '<S16>:1364' */
  } else {
    /* Transition: '<S16>:303' */
  }

  /* Transition: '<S16>:1369' */
  SideFusion_Fcn_DW.k = 0.0;
  if (SideFusion_Fcn_DW.DataSource == 4.0) {
    /* Transition: '<S16>:1383' */
    while (SideFusion_Fcn_DW.k < 10.0) {
      /* Transition: '<S16>:1379' */
      if (SideFusion_Fcn_B.NE_jr[(int32_T)SideFusion_Fcn_DW.k] != 0.0) {
        /* Transition: '<S16>:1377' */
        /* Transition: '<S16>:1373' */
        SideFusion_Fcn_B.Measure_Data[(int32_T)SideFusion_Fcn_B.Measure_Num] =
          SideFusion_Fcn_B.NE_jr[(int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[40 + (int32_T)SideFusion_Fcn_B.Measure_Num]
          = SideFusion_Fcn_B.NE_jr[10 + (int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[80 + (int32_T)SideFusion_Fcn_B.Measure_Num]
          = SideFusion_Fcn_B.NE_jr[20 + (int32_T)SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[120 + (int32_T)
          SideFusion_Fcn_B.Measure_Num] = SideFusion_Fcn_B.NE_jr[30 + (int32_T)
          SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Data[200 + (int32_T)
          SideFusion_Fcn_B.Measure_Num] = SideFusion_Fcn_B.NE_jr[40 + (int32_T)
          SideFusion_Fcn_DW.k];
        SideFusion_Fcn_B.Measure_Num++;

        /* Transition: '<S16>:1374' */
      } else {
        /* Transition: '<S16>:1375' */
      }

      /* Transition: '<S16>:1376' */
      SideFusion_Fcn_DW.k++;
    }

    /* Transition: '<S16>:1380' */
    /* Transition: '<S16>:1382' */
  } else {
    /* Transition: '<S16>:319' */
  }

  /* Transition: '<S16>:327' */
  SideFusion_Fcn_DW.k = 0.0;
}

void rt_mldivide_U1d3x3_U2d_9O8lG8ax(const real_T u0[9], const real_T u1[3],
  real_T y[3])
{
  real_T u0_0[9];
  real_T u1_0[3];
  int32_T ONE;
  int32_T THREE;
  int32_T r1;
  int32_T r2;
  real_T maxval;
  real_T a21;
  real_T d;
  real_T y_0;
  real_T y_idx_2;
  memcpy(&u0_0[0], &u0[0], 9U * sizeof(real_T));
  u1_0[0] = u1[0];
  u1_0[1] = u1[1];
  u1_0[2] = u1[2];
  THREE = 2;
  r1 = 0;
  r2 = 1;
  a21 = u0_0[0];
  y_0 = fabs(a21);
  maxval = y_0;
  a21 = u0_0[1];
  y_0 = fabs(a21);
  a21 = y_0;
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }

  a21 = u0_0[2];
  y_0 = fabs(a21);
  d = y_0;
  if (d > maxval) {
    r1 = 2;
    r2 = 1;
    THREE = 0;
  }

  a21 = u0_0[r2];
  y_0 = u0_0[r1];
  a21 /= y_0;
  u0_0[r2] = a21;
  a21 = u0_0[THREE];
  y_0 = u0_0[r1];
  a21 /= y_0;
  u0_0[THREE] = a21;
  u0_0[3 + r2] -= u0_0[3 + r1] * u0_0[r2];
  u0_0[3 + THREE] -= u0_0[3 + r1] * u0_0[THREE];
  u0_0[6 + r2] -= u0_0[6 + r1] * u0_0[r2];
  u0_0[6 + THREE] -= u0_0[6 + r1] * u0_0[THREE];
  a21 = u0_0[3 + THREE];
  y_0 = fabs(a21);
  d = y_0;
  a21 = u0_0[3 + r2];
  y_0 = fabs(a21);
  a21 = y_0;
  if (d > a21) {
    ONE = r2 + 1;
    r2 = THREE;
    THREE = ONE - 1;
  }

  a21 = u0_0[3 + THREE];
  y_0 = u0_0[3 + r2];
  a21 /= y_0;
  u0_0[3 + THREE] = a21;
  u0_0[6 + THREE] -= u0_0[3 + THREE] * u0_0[6 + r2];
  maxval = u1_0[r1];
  d = u1_0[r2] - maxval * u0_0[r2];
  y_idx_2 = (u1_0[THREE] - maxval * u0_0[THREE]) - u0_0[3 + THREE] * d;
  a21 = y_idx_2;
  y_0 = u0_0[6 + THREE];
  a21 /= y_0;
  y_idx_2 = a21;
  maxval -= u0_0[6 + r1] * y_idx_2;
  d -= u0_0[6 + r2] * y_idx_2;
  a21 = d;
  y_0 = u0_0[3 + r2];
  a21 /= y_0;
  d = a21;
  maxval -= u0_0[3 + r1] * d;
  a21 = maxval;
  y_0 = u0_0[r1];
  a21 /= y_0;
  maxval = a21;
  y[0] = maxval;
  y[1] = d;
  y[2] = y_idx_2;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Gtj_Cal(void)
{
  real_T tmp[9];
  real_T v1[3];
  int32_T i;
  real_T v1_0;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  real_T unnamed_idx_2;

  /* Graphical Function 'Gtj_Cal': '<S16>:411' */
  /* Transition: '<S16>:3628' */
  if (SideFusion_Fcn_DW.DataSource == 1.0) {
    /* Transition: '<S16>:3620' */
    /* LF SRR */
    while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
      /* Transition: '<S16>:419' */
      while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
        /* Transition: '<S16>:420' */
        /* Transition: '<S16>:425' */
        /* Simulink Function 'G_cal_LF': '<S16>:3617' */
        SideFusion_Fcn_B.xt_o = SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.vxt = SideFusion_Fcn_B.FusDataInternal[80 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.yt_f = SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.vyt = SideFusion_Fcn_B.FusDataInternal[160 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.xj = SideFusion_Fcn_B.Measure_Data[40 + (int32_T)
          SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.yj = SideFusion_Fcn_B.Measure_Data[80 + (int32_T)
          SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.rangerate = SideFusion_Fcn_B.Measure_Data[200 +
          (int32_T)SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.InstallAng = -0.47100000000000003;
        SideFusion_Fcn_B.P11 = SideFusion_Fcn_B.FusDataInternal[280 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P13 = SideFusion_Fcn_B.FusDataInternal[360 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P31 = SideFusion_Fcn_B.FusDataInternal[600 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P33 = SideFusion_Fcn_B.FusDataInternal[680 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.R11 = SideFusion_Fcn_RXX_SRR;
        SideFusion_Fcn_B.R12 = 0.0;
        SideFusion_Fcn_B.R13 = 0.0;
        SideFusion_Fcn_B.R21 = 0.0;
        SideFusion_Fcn_B.R22 = SideFusion_Fcn_RYY_SRR;
        SideFusion_Fcn_B.R23 = 0.0;
        SideFusion_Fcn_B.R31 = 0.0;
        SideFusion_Fcn_B.R32 = 0.0;
        SideFusion_Fcn_B.R33 = 1.0;

        /* Outputs for Function Call SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_LF' */
        /* Abs: '<S45>/Abs' */
        SideFusion_Fcn_B.Abs_j4 = fabs(SideFusion_Fcn_B.P11);

        /* RelationalOperator: '<S61>/Compare' incorporates:
         *  Constant: '<S61>/Constant'
         */
        SideFusion_Fcn_B.Compare_di = (uint8_T)(SideFusion_Fcn_B.Abs_j4 >=
          SideFusion_Fcn_P.CompareToConstant_const_f1);

        /* Switch: '<S45>/Switch' incorporates:
         *  Constant: '<S45>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_di >= SideFusion_Fcn_P.Switch_Threshold_i)
        {
          SideFusion_Fcn_B.Switch_e = SideFusion_Fcn_B.P11;
        } else {
          SideFusion_Fcn_B.Switch_e = SideFusion_Fcn_P.Constant_Value_b;
        }

        /* End of Switch: '<S45>/Switch' */

        /* SignalConversion: '<S50>/TmpSignal ConversionAtMath Function2Inport1' incorporates:
         *  Constant: '<S18>/Constant'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMat_ppunem[0] =
          SideFusion_Fcn_B.Switch_e;
        SideFusion_Fcn_B.TmpSignalConversionAtMat_ppunem[1] =
          SideFusion_Fcn_B.P13;
        SideFusion_Fcn_B.TmpSignalConversionAtMat_ppunem[2] =
          SideFusion_Fcn_P.Constant_Value_is;

        /* Math: '<S50>/Math Function2' */
        SideFusion_Fcn_B.MathFunction2_br[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMat_ppunem[0];
        SideFusion_Fcn_B.MathFunction2_br[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMat_ppunem[1];
        SideFusion_Fcn_B.MathFunction2_br[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMat_ppunem[2];

        /* Gain: '<S50>/Gain' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain_o[i] = SideFusion_Fcn_P.Gain_Gain_a[i] *
            SideFusion_Fcn_B.MathFunction2_br[0];
          SideFusion_Fcn_B.Gain_o[i + 3] = SideFusion_Fcn_P.Gain_Gain_a[i] *
            SideFusion_Fcn_B.MathFunction2_br[1];
          SideFusion_Fcn_B.Gain_o[i + 6] = SideFusion_Fcn_P.Gain_Gain_a[i] *
            SideFusion_Fcn_B.MathFunction2_br[2];
        }

        /* End of Gain: '<S50>/Gain' */

        /* Abs: '<S46>/Abs' */
        SideFusion_Fcn_B.Abs_b3 = fabs(SideFusion_Fcn_B.P31);

        /* RelationalOperator: '<S62>/Compare' incorporates:
         *  Constant: '<S62>/Constant'
         */
        SideFusion_Fcn_B.Compare_n2 = (uint8_T)(SideFusion_Fcn_B.Abs_b3 >=
          SideFusion_Fcn_P.CompareToConstant_const_c);

        /* Switch: '<S46>/Switch' incorporates:
         *  Constant: '<S46>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_n2 >= SideFusion_Fcn_P.Switch_Threshold_bd)
        {
          SideFusion_Fcn_B.Switch_k = SideFusion_Fcn_B.P31;
        } else {
          SideFusion_Fcn_B.Switch_k = SideFusion_Fcn_P.Constant_Value_mh;
        }

        /* End of Switch: '<S46>/Switch' */

        /* Abs: '<S47>/Abs' */
        SideFusion_Fcn_B.Abs_e = fabs(SideFusion_Fcn_B.P33);

        /* RelationalOperator: '<S63>/Compare' incorporates:
         *  Constant: '<S63>/Constant'
         */
        SideFusion_Fcn_B.Compare_m0 = (uint8_T)(SideFusion_Fcn_B.Abs_e >=
          SideFusion_Fcn_P.CompareToConstant_const_n);

        /* Switch: '<S47>/Switch' incorporates:
         *  Constant: '<S47>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_m0 >= SideFusion_Fcn_P.Switch_Threshold_j)
        {
          SideFusion_Fcn_B.Switch_m5 = SideFusion_Fcn_B.P33;
        } else {
          SideFusion_Fcn_B.Switch_m5 = SideFusion_Fcn_P.Constant_Value_fd;
        }

        /* End of Switch: '<S47>/Switch' */

        /* SignalConversion: '<S50>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
         *  Constant: '<S18>/Constant1'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMa_fzyxdb3[0] =
          SideFusion_Fcn_B.Switch_k;
        SideFusion_Fcn_B.TmpSignalConversionAtMa_fzyxdb3[1] =
          SideFusion_Fcn_B.Switch_m5;
        SideFusion_Fcn_B.TmpSignalConversionAtMa_fzyxdb3[2] =
          SideFusion_Fcn_P.Constant1_Value_e;

        /* Math: '<S50>/Math Function1' */
        SideFusion_Fcn_B.MathFunction1_p5[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMa_fzyxdb3[0];
        SideFusion_Fcn_B.MathFunction1_p5[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMa_fzyxdb3[1];
        SideFusion_Fcn_B.MathFunction1_p5[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMa_fzyxdb3[2];

        /* Gain: '<S50>/Gain1' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain1_p[i] = SideFusion_Fcn_P.Gain1_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction1_p5[0];
          SideFusion_Fcn_B.Gain1_p[i + 3] = SideFusion_Fcn_P.Gain1_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction1_p5[1];
          SideFusion_Fcn_B.Gain1_p[i + 6] = SideFusion_Fcn_P.Gain1_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction1_p5[2];
        }

        /* End of Gain: '<S50>/Gain1' */

        /* SignalConversion: '<S50>/TmpSignal ConversionAtMath Function4Inport1' incorporates:
         *  Constant: '<S18>/Constant2'
         *  Constant: '<S18>/Constant3'
         *  Constant: '<S18>/Constant4'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMath_fjui3[0] =
          SideFusion_Fcn_P.Constant2_Value_d;
        SideFusion_Fcn_B.TmpSignalConversionAtMath_fjui3[1] =
          SideFusion_Fcn_P.Constant3_Value_j;
        SideFusion_Fcn_B.TmpSignalConversionAtMath_fjui3[2] =
          SideFusion_Fcn_P.Constant4_Value_b;

        /* Math: '<S50>/Math Function4' */
        SideFusion_Fcn_B.MathFunction4_f[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_fjui3[0];
        SideFusion_Fcn_B.MathFunction4_f[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_fjui3[1];
        SideFusion_Fcn_B.MathFunction4_f[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_fjui3[2];

        /* Gain: '<S50>/Gain2' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain2_n[i] = SideFusion_Fcn_P.Gain2_Gain_i[i] *
            SideFusion_Fcn_B.MathFunction4_f[0];
          SideFusion_Fcn_B.Gain2_n[i + 3] = SideFusion_Fcn_P.Gain2_Gain_i[i] *
            SideFusion_Fcn_B.MathFunction4_f[1];
          SideFusion_Fcn_B.Gain2_n[i + 6] = SideFusion_Fcn_P.Gain2_Gain_i[i] *
            SideFusion_Fcn_B.MathFunction4_f[2];
        }

        /* End of Gain: '<S50>/Gain2' */

        /* Sum: '<S50>/Add' */
        for (i = 0; i < 9; i++) {
          SideFusion_Fcn_B.Add_b1[i] = (SideFusion_Fcn_B.Gain_o[i] +
            SideFusion_Fcn_B.Gain1_p[i]) + SideFusion_Fcn_B.Gain2_n[i];
        }

        /* End of Sum: '<S50>/Add' */

        /* Abs: '<S48>/Abs' */
        SideFusion_Fcn_B.Abs_jx = fabs(SideFusion_Fcn_B.R11);

        /* RelationalOperator: '<S64>/Compare' incorporates:
         *  Constant: '<S64>/Constant'
         */
        SideFusion_Fcn_B.Compare_nr = (uint8_T)(SideFusion_Fcn_B.Abs_jx >=
          SideFusion_Fcn_P.CompareToConstant_const_b);

        /* Switch: '<S48>/Switch' incorporates:
         *  Constant: '<S48>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_nr >= SideFusion_Fcn_P.Switch_Threshold_p)
        {
          SideFusion_Fcn_B.Switch_ol = SideFusion_Fcn_B.R11;
        } else {
          SideFusion_Fcn_B.Switch_ol = SideFusion_Fcn_P.Constant_Value_lj;
        }

        /* End of Switch: '<S48>/Switch' */

        /* SignalConversion: '<S51>/TmpSignal ConversionAtMath Function3Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_ewmt[0] =
          SideFusion_Fcn_B.Switch_ol;
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_ewmt[1] =
          SideFusion_Fcn_B.R12;
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_ewmt[2] =
          SideFusion_Fcn_B.R13;

        /* Math: '<S51>/Math Function3' */
        SideFusion_Fcn_B.MathFunction3_g[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_ewmt[0];
        SideFusion_Fcn_B.MathFunction3_g[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_ewmt[1];
        SideFusion_Fcn_B.MathFunction3_g[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_ewmt[2];

        /* Gain: '<S51>/Gain3' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain3_e2[i] = SideFusion_Fcn_P.Gain3_Gain_o[i] *
            SideFusion_Fcn_B.MathFunction3_g[0];
          SideFusion_Fcn_B.Gain3_e2[i + 3] = SideFusion_Fcn_P.Gain3_Gain_o[i] *
            SideFusion_Fcn_B.MathFunction3_g[1];
          SideFusion_Fcn_B.Gain3_e2[i + 6] = SideFusion_Fcn_P.Gain3_Gain_o[i] *
            SideFusion_Fcn_B.MathFunction3_g[2];
        }

        /* End of Gain: '<S51>/Gain3' */

        /* Abs: '<S49>/Abs' */
        SideFusion_Fcn_B.Abs_l = fabs(SideFusion_Fcn_B.R22);

        /* RelationalOperator: '<S65>/Compare' incorporates:
         *  Constant: '<S65>/Constant'
         */
        SideFusion_Fcn_B.Compare_lb = (uint8_T)(SideFusion_Fcn_B.Abs_l >=
          SideFusion_Fcn_P.CompareToConstant_const_i);

        /* Switch: '<S49>/Switch' incorporates:
         *  Constant: '<S49>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_lb >= SideFusion_Fcn_P.Switch_Threshold_id)
        {
          SideFusion_Fcn_B.Switch_f = SideFusion_Fcn_B.R22;
        } else {
          SideFusion_Fcn_B.Switch_f = SideFusion_Fcn_P.Constant_Value_iu;
        }

        /* End of Switch: '<S49>/Switch' */

        /* SignalConversion: '<S51>/TmpSignal ConversionAtMath Function1Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtM_fzyxdb3o[0] =
          SideFusion_Fcn_B.R21;
        SideFusion_Fcn_B.TmpSignalConversionAtM_fzyxdb3o[1] =
          SideFusion_Fcn_B.Switch_f;
        SideFusion_Fcn_B.TmpSignalConversionAtM_fzyxdb3o[2] =
          SideFusion_Fcn_B.R23;

        /* Math: '<S51>/Math Function1' */
        SideFusion_Fcn_B.MathFunction1_gi[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtM_fzyxdb3o[0];
        SideFusion_Fcn_B.MathFunction1_gi[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtM_fzyxdb3o[1];
        SideFusion_Fcn_B.MathFunction1_gi[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtM_fzyxdb3o[2];

        /* Gain: '<S51>/Gain1' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain1_j[i] = SideFusion_Fcn_P.Gain1_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction1_gi[0];
          SideFusion_Fcn_B.Gain1_j[i + 3] = SideFusion_Fcn_P.Gain1_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction1_gi[1];
          SideFusion_Fcn_B.Gain1_j[i + 6] = SideFusion_Fcn_P.Gain1_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction1_gi[2];
        }

        /* End of Gain: '<S51>/Gain1' */

        /* SignalConversion: '<S51>/TmpSignal ConversionAtMath Function2Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMa_ppunemv[0] =
          SideFusion_Fcn_B.R31;
        SideFusion_Fcn_B.TmpSignalConversionAtMa_ppunemv[1] =
          SideFusion_Fcn_B.R32;
        SideFusion_Fcn_B.TmpSignalConversionAtMa_ppunemv[2] =
          SideFusion_Fcn_B.R33;

        /* Math: '<S51>/Math Function2' */
        SideFusion_Fcn_B.MathFunction2_ap[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMa_ppunemv[0];
        SideFusion_Fcn_B.MathFunction2_ap[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMa_ppunemv[1];
        SideFusion_Fcn_B.MathFunction2_ap[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMa_ppunemv[2];

        /* Gain: '<S51>/Gain2' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain2_ca[i] = SideFusion_Fcn_P.Gain2_Gain_d[i] *
            SideFusion_Fcn_B.MathFunction2_ap[0];
          SideFusion_Fcn_B.Gain2_ca[i + 3] = SideFusion_Fcn_P.Gain2_Gain_d[i] *
            SideFusion_Fcn_B.MathFunction2_ap[1];
          SideFusion_Fcn_B.Gain2_ca[i + 6] = SideFusion_Fcn_P.Gain2_Gain_d[i] *
            SideFusion_Fcn_B.MathFunction2_ap[2];
        }

        for (i = 0; i < 9; i++) {
          /* Sum: '<S51>/Add' */
          SideFusion_Fcn_B.Add_gr[i] = (SideFusion_Fcn_B.Gain3_e2[i] +
            SideFusion_Fcn_B.Gain1_j[i]) + SideFusion_Fcn_B.Gain2_ca[i];

          /* Sum: '<S18>/Subtract1' */
          SideFusion_Fcn_B.Stj3x3_c[i] = SideFusion_Fcn_B.Add_b1[i] +
            SideFusion_Fcn_B.Add_gr[i];

          /* Product: '<S52>/Product1' */
          tmp[i] = SideFusion_Fcn_B.Stj3x3_c[i];
        }

        /* End of Gain: '<S51>/Gain2' */

        /* Product: '<S52>/Product1' incorporates:
         *  Constant: '<S52>/Constant'
         */
        unnamed_idx_0 = SideFusion_Fcn_P.Constant_Value_nrp[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant_Value_nrp[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant_Value_nrp[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product1_o3[0] = v1[0];
        SideFusion_Fcn_B.Product1_o3[1] = v1[1];
        SideFusion_Fcn_B.Product1_o3[2] = v1[2];

        /* Product: '<S52>/Product2' incorporates:
         *  Constant: '<S52>/Constant1'
         */
        memcpy(&tmp[0], &SideFusion_Fcn_B.Stj3x3_c[0], 9U * sizeof(real_T));
        unnamed_idx_0 = SideFusion_Fcn_P.Constant1_Value_h[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant1_Value_h[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant1_Value_h[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product2_i[0] = v1[0];
        SideFusion_Fcn_B.Product2_i[1] = v1[1];
        SideFusion_Fcn_B.Product2_i[2] = v1[2];

        /* End of Product: '<S52>/Product2' */

        /* Product: '<S52>/Product3' incorporates:
         *  Constant: '<S52>/Constant2'
         */
        memcpy(&tmp[0], &SideFusion_Fcn_B.Stj3x3_c[0], 9U * sizeof(real_T));
        unnamed_idx_0 = SideFusion_Fcn_P.Constant2_Value_p[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant2_Value_p[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant2_Value_p[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product3_g[0] = v1[0];
        SideFusion_Fcn_B.Product3_g[1] = v1[1];
        SideFusion_Fcn_B.Product3_g[2] = v1[2];

        /* End of Product: '<S52>/Product3' */

        /* Product: '<S43>/Divide1' */
        SideFusion_Fcn_B.Divide1_o = SideFusion_Fcn_B.Product1_o3[0] *
          SideFusion_Fcn_B.Product2_i[1] * SideFusion_Fcn_B.Product3_g[2];

        /* Product: '<S43>/Divide2' */
        SideFusion_Fcn_B.Divide2_d = SideFusion_Fcn_B.Product1_o3[1] *
          SideFusion_Fcn_B.Product2_i[0] * SideFusion_Fcn_B.Product3_g[2];

        /* Sum: '<S43>/Subtract3' */
        SideFusion_Fcn_B.Subtract3_g = SideFusion_Fcn_B.Divide1_o -
          SideFusion_Fcn_B.Divide2_d;

        /* Product: '<S43>/Divide3' incorporates:
         *  Constant: '<S43>/Constant'
         */
        SideFusion_Fcn_B.Divide3_g = SideFusion_Fcn_B.Subtract3_g *
          SideFusion_Fcn_P.Constant_Value_n3;

        /* Math: '<S43>/Sqrt1'
         *
         * About '<S43>/Sqrt1':
         *  Operator: sqrt
         */
        unnamed_idx_0 = SideFusion_Fcn_B.Divide3_g;
        if (unnamed_idx_0 < 0.0) {
          SideFusion_Fcn_B.Sqrt1_p = -sqrt(fabs(unnamed_idx_0));
        } else {
          SideFusion_Fcn_B.Sqrt1_p = sqrt(unnamed_idx_0);
        }

        /* End of Math: '<S43>/Sqrt1' */

        /* Gain: '<S58>/Gain1' incorporates:
         *  Constant: '<S44>/Constant5'
         */
        SideFusion_Fcn_B.Gain1_as = SideFusion_Fcn_P.Gain1_Gain_c *
          SideFusion_Fcn_P.Constant5_Value_h;

        /* Sum: '<S58>/Add' */
        SideFusion_Fcn_B.Add_lk = SideFusion_Fcn_B.yt_f -
          SideFusion_Fcn_B.Gain1_as;

        /* Trigonometry: '<S58>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_ah = sin
          (SideFusion_Fcn_B.InstallAng);

        /* Product: '<S58>/Product' */
        SideFusion_Fcn_B.Product_m5 = SideFusion_Fcn_B.Add_lk *
          SideFusion_Fcn_B.TrigonometricFunction_ah;

        /* Trigonometry: '<S58>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_fk = cos
          (SideFusion_Fcn_B.InstallAng);

        /* Product: '<S58>/Product1' */
        SideFusion_Fcn_B.Product1_bn = SideFusion_Fcn_B.xt_o *
          SideFusion_Fcn_B.TrigonometricFunction1_fk;

        /* Sum: '<S58>/Add1' */
        SideFusion_Fcn_B.Add1_d = SideFusion_Fcn_B.Product_m5 +
          SideFusion_Fcn_B.Product1_bn;

        /* Gain: '<S59>/Gain1' incorporates:
         *  Constant: '<S44>/Constant5'
         */
        SideFusion_Fcn_B.Gain1_h = SideFusion_Fcn_P.Gain1_Gain_p *
          SideFusion_Fcn_P.Constant5_Value_h;

        /* Sum: '<S59>/Add' */
        SideFusion_Fcn_B.Add_k = SideFusion_Fcn_B.yt_f -
          SideFusion_Fcn_B.Gain1_h;

        /* Trigonometry: '<S59>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_p2 = cos
          (SideFusion_Fcn_B.InstallAng);

        /* Product: '<S59>/Product' */
        SideFusion_Fcn_B.Product_jz = SideFusion_Fcn_B.Add_k *
          SideFusion_Fcn_B.TrigonometricFunction_p2;

        /* Trigonometry: '<S59>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_p = sin
          (SideFusion_Fcn_B.InstallAng);

        /* Product: '<S59>/Product1' */
        SideFusion_Fcn_B.Product1_fj = SideFusion_Fcn_B.xt_o *
          SideFusion_Fcn_B.TrigonometricFunction1_p;

        /* Sum: '<S59>/Add1' */
        SideFusion_Fcn_B.Add1_aj = SideFusion_Fcn_B.Product_jz -
          SideFusion_Fcn_B.Product1_fj;

        /* Abs: '<S57>/Abs' */
        SideFusion_Fcn_B.Abs_i = fabs(SideFusion_Fcn_B.Add1_aj);

        /* RelationalOperator: '<S60>/Compare' incorporates:
         *  Constant: '<S60>/Constant'
         */
        SideFusion_Fcn_B.Compare_f1 = (uint8_T)(SideFusion_Fcn_B.Abs_i >=
          SideFusion_Fcn_P.CompareToConstant_const_p);

        /* Switch: '<S57>/Switch' incorporates:
         *  Constant: '<S57>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_f1 >= SideFusion_Fcn_P.Switch_Threshold_m)
        {
          SideFusion_Fcn_B.Switch_g = SideFusion_Fcn_B.Add1_aj;
        } else {
          SideFusion_Fcn_B.Switch_g = SideFusion_Fcn_P.Constant_Value_mz;
        }

        /* End of Switch: '<S57>/Switch' */

        /* Product: '<S53>/Divide' */
        SideFusion_Fcn_B.Divide_dc = SideFusion_Fcn_B.Add1_d /
          SideFusion_Fcn_B.Switch_g;

        /* Trigonometry: '<S53>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_po = atan
          (SideFusion_Fcn_B.Divide_dc);

        /* Constant: '<S44>/Constant6' */
        SideFusion_Fcn_B.L_g = SideFusion_Fcn_P.Constant6_Value_k;

        /* Trigonometry: '<S56>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_g = cos
          (SideFusion_Fcn_B.InstallAng);

        /* Product: '<S56>/Product' */
        SideFusion_Fcn_B.Product_fm = SideFusion_Fcn_B.vyt *
          SideFusion_Fcn_B.TrigonometricFunction_g;

        /* Trigonometry: '<S56>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_a0 = sin
          (SideFusion_Fcn_B.InstallAng);

        /* Product: '<S56>/Product1' */
        SideFusion_Fcn_B.Product1_dk = SideFusion_Fcn_B.vxt *
          SideFusion_Fcn_B.TrigonometricFunction1_a0;

        /* Sum: '<S56>/Add1' */
        SideFusion_Fcn_B.Add1_bi = SideFusion_Fcn_B.Product_fm -
          SideFusion_Fcn_B.Product1_dk;

        /* Trigonometry: '<S54>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_d = cos
          (SideFusion_Fcn_B.TrigonometricFunction_po);

        /* Product: '<S54>/Product' */
        SideFusion_Fcn_B.Product_d = SideFusion_Fcn_B.Add1_bi *
          SideFusion_Fcn_B.TrigonometricFunction_d;

        /* Trigonometry: '<S55>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_lb = sin
          (SideFusion_Fcn_B.InstallAng);

        /* Product: '<S55>/Product' */
        SideFusion_Fcn_B.Product_pu = SideFusion_Fcn_B.vyt *
          SideFusion_Fcn_B.TrigonometricFunction_lb;

        /* Trigonometry: '<S55>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_hw = cos
          (SideFusion_Fcn_B.InstallAng);

        /* Product: '<S55>/Product1' */
        SideFusion_Fcn_B.Product1_ok = SideFusion_Fcn_B.vxt *
          SideFusion_Fcn_B.TrigonometricFunction1_hw;

        /* Sum: '<S55>/Add1' */
        SideFusion_Fcn_B.Add1_dn = SideFusion_Fcn_B.Product_pu +
          SideFusion_Fcn_B.Product1_ok;

        /* Trigonometry: '<S54>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_m4 = sin
          (SideFusion_Fcn_B.TrigonometricFunction_po);

        /* Product: '<S54>/Product1' */
        SideFusion_Fcn_B.Product1_cf = SideFusion_Fcn_B.Add1_dn *
          SideFusion_Fcn_B.TrigonometricFunction1_m4;

        /* Sum: '<S54>/Add1' */
        SideFusion_Fcn_B.Add1_pb = SideFusion_Fcn_B.Product_d +
          SideFusion_Fcn_B.Product1_cf;

        /* Sum: '<S18>/Subtract2' */
        SideFusion_Fcn_B.Vtj3x1_nr[0] = SideFusion_Fcn_B.xt_o -
          SideFusion_Fcn_B.xj;
        SideFusion_Fcn_B.Vtj3x1_nr[1] = SideFusion_Fcn_B.yt_f -
          SideFusion_Fcn_B.yj;
        SideFusion_Fcn_B.Vtj3x1_nr[2] = SideFusion_Fcn_B.Add1_pb -
          SideFusion_Fcn_B.rangerate;

        /* Math: '<S18>/Math Function2' */
        SideFusion_Fcn_B.Vtj1x3_i[0] = SideFusion_Fcn_B.Vtj3x1_nr[0];
        SideFusion_Fcn_B.Vtj1x3_i[1] = SideFusion_Fcn_B.Vtj3x1_nr[1];
        SideFusion_Fcn_B.Vtj1x3_i[2] = SideFusion_Fcn_B.Vtj3x1_nr[2];

        /* Product: '<S18>/Divide' */
        rt_mldivide_U1d3x3_U2d_9O8lG8ax(SideFusion_Fcn_B.Stj3x3_c,
          SideFusion_Fcn_B.Vtj3x1_nr, v1);
        unnamed_idx_0 = SideFusion_Fcn_B.Vtj1x3_i[0];
        unnamed_idx_1 = SideFusion_Fcn_B.Vtj1x3_i[1];
        unnamed_idx_2 = SideFusion_Fcn_B.Vtj1x3_i[2];
        unnamed_idx_0 *= v1[0];
        unnamed_idx_0 += unnamed_idx_1 * v1[1];
        unnamed_idx_0 += unnamed_idx_2 * v1[2];
        SideFusion_Fcn_B.Divide_n = unnamed_idx_0;

        /* Gain: '<S18>/Gain' */
        SideFusion_Fcn_B.Gain_e = SideFusion_Fcn_P.Gain_Gain_f *
          SideFusion_Fcn_B.Divide_n;

        /* Math: '<S18>/Math Function1'
         *
         * About '<S18>/Math Function1':
         *  Operator: exp
         */
        SideFusion_Fcn_B.MathFunction1_l = exp(SideFusion_Fcn_B.Gain_e);

        /* Product: '<S18>/Divide1' */
        SideFusion_Fcn_B.Gtj_e = SideFusion_Fcn_B.MathFunction1_l /
          SideFusion_Fcn_B.Sqrt1_p;

        /* End of Outputs for SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_LF' */
        SideFusion_Fcn_DW.Gtj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
          SideFusion_Fcn_DW.j] = SideFusion_Fcn_B.Gtj_e;
        SideFusion_Fcn_DW.dtj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
          SideFusion_Fcn_DW.j] = SideFusion_Fcn_B.Divide_n;

        /* Transition: '<S16>:422' */
        SideFusion_Fcn_DW.j++;
      }

      /* Transition: '<S16>:424' */
      /* Transition: '<S16>:421' */
      SideFusion_Fcn_DW.t++;
      SideFusion_Fcn_DW.j = 0.0;
    }

    /* Transition: '<S16>:3618' */
    /* Transition: '<S16>:3624' */
  } else {
    /* Transition: '<S16>:3622' */
  }

  /* Transition: '<S16>:3623' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
  if (SideFusion_Fcn_DW.DataSource == 2.0) {
    /* Transition: '<S16>:3648' */
    /* RF SRR */
    while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
      /* Transition: '<S16>:3635' */
      while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
        /* Transition: '<S16>:3637' */
        /* Transition: '<S16>:3638' */
        /* Simulink Function 'G_cal_RF': '<S16>:3698' */
        SideFusion_Fcn_B.xt_h = SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.vxt_e = SideFusion_Fcn_B.FusDataInternal[80 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.yt_b = SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.vyt_g = SideFusion_Fcn_B.FusDataInternal[160 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.xj_k = SideFusion_Fcn_B.Measure_Data[40 + (int32_T)
          SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.yj_b = SideFusion_Fcn_B.Measure_Data[80 + (int32_T)
          SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.rangerate_e = SideFusion_Fcn_B.Measure_Data[200 +
          (int32_T)SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.InstallAng_l = -1.0466666666666666;
        SideFusion_Fcn_B.P11_f = SideFusion_Fcn_B.FusDataInternal[280 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P13_h = SideFusion_Fcn_B.FusDataInternal[360 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P31_e = SideFusion_Fcn_B.FusDataInternal[600 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P33_d = SideFusion_Fcn_B.FusDataInternal[680 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.R11_i = SideFusion_Fcn_RXX_SRR;
        SideFusion_Fcn_B.R12_d = 0.0;
        SideFusion_Fcn_B.R13_k = 0.0;
        SideFusion_Fcn_B.R21_e = 0.0;
        SideFusion_Fcn_B.R22_l = SideFusion_Fcn_RYY_SRR;
        SideFusion_Fcn_B.R23_e = 0.0;
        SideFusion_Fcn_B.R31_e = 0.0;
        SideFusion_Fcn_B.R32_k = 0.0;
        SideFusion_Fcn_B.R33_d = 1.0;

        /* Outputs for Function Call SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_RF' */
        /* Abs: '<S91>/Abs' */
        SideFusion_Fcn_B.Abs_kb = fabs(SideFusion_Fcn_B.P11_f);

        /* RelationalOperator: '<S107>/Compare' incorporates:
         *  Constant: '<S107>/Constant'
         */
        SideFusion_Fcn_B.Compare_da = (uint8_T)(SideFusion_Fcn_B.Abs_kb >=
          SideFusion_Fcn_P.CompareToConstant_const_az);

        /* Switch: '<S91>/Switch' incorporates:
         *  Constant: '<S91>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_da >= SideFusion_Fcn_P.Switch_Threshold_ci)
        {
          SideFusion_Fcn_B.Switch_ao = SideFusion_Fcn_B.P11_f;
        } else {
          SideFusion_Fcn_B.Switch_ao = SideFusion_Fcn_P.Constant_Value_o;
        }

        /* End of Switch: '<S91>/Switch' */

        /* SignalConversion: '<S96>/TmpSignal ConversionAtMath Function2Inport1' incorporates:
         *  Constant: '<S20>/Constant'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_ppun[0] =
          SideFusion_Fcn_B.Switch_ao;
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_ppun[1] =
          SideFusion_Fcn_B.P13_h;
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_ppun[2] =
          SideFusion_Fcn_P.Constant_Value_j;

        /* Math: '<S96>/Math Function2' */
        SideFusion_Fcn_B.MathFunction2_b[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_ppun[0];
        SideFusion_Fcn_B.MathFunction2_b[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_ppun[1];
        SideFusion_Fcn_B.MathFunction2_b[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_ppun[2];

        /* Gain: '<S96>/Gain' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain_g[i] = SideFusion_Fcn_P.Gain_Gain_d5[i] *
            SideFusion_Fcn_B.MathFunction2_b[0];
          SideFusion_Fcn_B.Gain_g[i + 3] = SideFusion_Fcn_P.Gain_Gain_d5[i] *
            SideFusion_Fcn_B.MathFunction2_b[1];
          SideFusion_Fcn_B.Gain_g[i + 6] = SideFusion_Fcn_P.Gain_Gain_d5[i] *
            SideFusion_Fcn_B.MathFunction2_b[2];
        }

        /* End of Gain: '<S96>/Gain' */

        /* Abs: '<S92>/Abs' */
        SideFusion_Fcn_B.Abs_m = fabs(SideFusion_Fcn_B.P31_e);

        /* RelationalOperator: '<S108>/Compare' incorporates:
         *  Constant: '<S108>/Constant'
         */
        SideFusion_Fcn_B.Compare_a5 = (uint8_T)(SideFusion_Fcn_B.Abs_m >=
          SideFusion_Fcn_P.CompareToConstant_const_h);

        /* Switch: '<S92>/Switch' incorporates:
         *  Constant: '<S92>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_a5 >= SideFusion_Fcn_P.Switch_Threshold_mn)
        {
          SideFusion_Fcn_B.Switch_m = SideFusion_Fcn_B.P31_e;
        } else {
          SideFusion_Fcn_B.Switch_m = SideFusion_Fcn_P.Constant_Value_lt;
        }

        /* End of Switch: '<S92>/Switch' */

        /* Abs: '<S93>/Abs' */
        SideFusion_Fcn_B.Abs_fe = fabs(SideFusion_Fcn_B.P33_d);

        /* RelationalOperator: '<S109>/Compare' incorporates:
         *  Constant: '<S109>/Constant'
         */
        SideFusion_Fcn_B.Compare_h = (uint8_T)(SideFusion_Fcn_B.Abs_fe >=
          SideFusion_Fcn_P.CompareToConstant_const_l);

        /* Switch: '<S93>/Switch' incorporates:
         *  Constant: '<S93>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_h >= SideFusion_Fcn_P.Switch_Threshold_gm)
        {
          SideFusion_Fcn_B.Switch_bq = SideFusion_Fcn_B.P33_d;
        } else {
          SideFusion_Fcn_B.Switch_bq = SideFusion_Fcn_P.Constant_Value_bz;
        }

        /* End of Switch: '<S93>/Switch' */

        /* SignalConversion: '<S96>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
         *  Constant: '<S20>/Constant1'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMath_fzyxd[0] =
          SideFusion_Fcn_B.Switch_m;
        SideFusion_Fcn_B.TmpSignalConversionAtMath_fzyxd[1] =
          SideFusion_Fcn_B.Switch_bq;
        SideFusion_Fcn_B.TmpSignalConversionAtMath_fzyxd[2] =
          SideFusion_Fcn_P.Constant1_Value_co;

        /* Math: '<S96>/Math Function1' */
        SideFusion_Fcn_B.MathFunction1_m[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_fzyxd[0];
        SideFusion_Fcn_B.MathFunction1_m[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_fzyxd[1];
        SideFusion_Fcn_B.MathFunction1_m[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_fzyxd[2];

        /* Gain: '<S96>/Gain1' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain1_m[i] = SideFusion_Fcn_P.Gain1_Gain_n[i] *
            SideFusion_Fcn_B.MathFunction1_m[0];
          SideFusion_Fcn_B.Gain1_m[i + 3] = SideFusion_Fcn_P.Gain1_Gain_n[i] *
            SideFusion_Fcn_B.MathFunction1_m[1];
          SideFusion_Fcn_B.Gain1_m[i + 6] = SideFusion_Fcn_P.Gain1_Gain_n[i] *
            SideFusion_Fcn_B.MathFunction1_m[2];
        }

        /* End of Gain: '<S96>/Gain1' */

        /* SignalConversion: '<S96>/TmpSignal ConversionAtMath Function4Inport1' incorporates:
         *  Constant: '<S20>/Constant2'
         *  Constant: '<S20>/Constant3'
         *  Constant: '<S20>/Constant4'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_fjui[0] =
          SideFusion_Fcn_P.Constant2_Value_h;
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_fjui[1] =
          SideFusion_Fcn_P.Constant3_Value_k;
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_fjui[2] =
          SideFusion_Fcn_P.Constant4_Value_cm;

        /* Math: '<S96>/Math Function4' */
        SideFusion_Fcn_B.MathFunction4_h[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_fjui[0];
        SideFusion_Fcn_B.MathFunction4_h[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_fjui[1];
        SideFusion_Fcn_B.MathFunction4_h[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_fjui[2];

        /* Gain: '<S96>/Gain2' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain2_fx[i] = SideFusion_Fcn_P.Gain2_Gain_l[i] *
            SideFusion_Fcn_B.MathFunction4_h[0];
          SideFusion_Fcn_B.Gain2_fx[i + 3] = SideFusion_Fcn_P.Gain2_Gain_l[i] *
            SideFusion_Fcn_B.MathFunction4_h[1];
          SideFusion_Fcn_B.Gain2_fx[i + 6] = SideFusion_Fcn_P.Gain2_Gain_l[i] *
            SideFusion_Fcn_B.MathFunction4_h[2];
        }

        /* End of Gain: '<S96>/Gain2' */

        /* Sum: '<S96>/Add' */
        for (i = 0; i < 9; i++) {
          SideFusion_Fcn_B.Add_b[i] = (SideFusion_Fcn_B.Gain_g[i] +
            SideFusion_Fcn_B.Gain1_m[i]) + SideFusion_Fcn_B.Gain2_fx[i];
        }

        /* End of Sum: '<S96>/Add' */

        /* Abs: '<S94>/Abs' */
        SideFusion_Fcn_B.Abs_j = fabs(SideFusion_Fcn_B.R11_i);

        /* RelationalOperator: '<S110>/Compare' incorporates:
         *  Constant: '<S110>/Constant'
         */
        SideFusion_Fcn_B.Compare_p = (uint8_T)(SideFusion_Fcn_B.Abs_j >=
          SideFusion_Fcn_P.CompareToConstant_const_mk);

        /* Switch: '<S94>/Switch' incorporates:
         *  Constant: '<S94>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_p >= SideFusion_Fcn_P.Switch_Threshold_g0)
        {
          SideFusion_Fcn_B.Switch_mv = SideFusion_Fcn_B.R11_i;
        } else {
          SideFusion_Fcn_B.Switch_mv = SideFusion_Fcn_P.Constant_Value_iv;
        }

        /* End of Switch: '<S94>/Switch' */

        /* SignalConversion: '<S97>/TmpSignal ConversionAtMath Function3Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ewm[0] =
          SideFusion_Fcn_B.Switch_mv;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ewm[1] =
          SideFusion_Fcn_B.R12_d;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ewm[2] =
          SideFusion_Fcn_B.R13_k;

        /* Math: '<S97>/Math Function3' */
        SideFusion_Fcn_B.MathFunction3_i[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ewm[0];
        SideFusion_Fcn_B.MathFunction3_i[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ewm[1];
        SideFusion_Fcn_B.MathFunction3_i[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ewm[2];

        /* Gain: '<S97>/Gain3' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain3_p[i] = SideFusion_Fcn_P.Gain3_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction3_i[0];
          SideFusion_Fcn_B.Gain3_p[i + 3] = SideFusion_Fcn_P.Gain3_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction3_i[1];
          SideFusion_Fcn_B.Gain3_p[i + 6] = SideFusion_Fcn_P.Gain3_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction3_i[2];
        }

        /* End of Gain: '<S97>/Gain3' */

        /* Abs: '<S95>/Abs' */
        SideFusion_Fcn_B.Abs_ka = fabs(SideFusion_Fcn_B.R22_l);

        /* RelationalOperator: '<S111>/Compare' incorporates:
         *  Constant: '<S111>/Constant'
         */
        SideFusion_Fcn_B.Compare_i = (uint8_T)(SideFusion_Fcn_B.Abs_ka >=
          SideFusion_Fcn_P.CompareToConstant_const_j);

        /* Switch: '<S95>/Switch' incorporates:
         *  Constant: '<S95>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_i >= SideFusion_Fcn_P.Switch_Threshold_pz)
        {
          SideFusion_Fcn_B.Switch_ae = SideFusion_Fcn_B.R22_l;
        } else {
          SideFusion_Fcn_B.Switch_ae = SideFusion_Fcn_P.Constant_Value_fs;
        }

        /* End of Switch: '<S95>/Switch' */

        /* SignalConversion: '<S97>/TmpSignal ConversionAtMath Function1Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMat_fzyxdb[0] =
          SideFusion_Fcn_B.R21_e;
        SideFusion_Fcn_B.TmpSignalConversionAtMat_fzyxdb[1] =
          SideFusion_Fcn_B.Switch_ae;
        SideFusion_Fcn_B.TmpSignalConversionAtMat_fzyxdb[2] =
          SideFusion_Fcn_B.R23_e;

        /* Math: '<S97>/Math Function1' */
        SideFusion_Fcn_B.MathFunction1_h[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMat_fzyxdb[0];
        SideFusion_Fcn_B.MathFunction1_h[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMat_fzyxdb[1];
        SideFusion_Fcn_B.MathFunction1_h[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMat_fzyxdb[2];

        /* Gain: '<S97>/Gain1' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain1_c[i] = SideFusion_Fcn_P.Gain1_Gain_e[i] *
            SideFusion_Fcn_B.MathFunction1_h[0];
          SideFusion_Fcn_B.Gain1_c[i + 3] = SideFusion_Fcn_P.Gain1_Gain_e[i] *
            SideFusion_Fcn_B.MathFunction1_h[1];
          SideFusion_Fcn_B.Gain1_c[i + 6] = SideFusion_Fcn_P.Gain1_Gain_e[i] *
            SideFusion_Fcn_B.MathFunction1_h[2];
        }

        /* End of Gain: '<S97>/Gain1' */

        /* SignalConversion: '<S97>/TmpSignal ConversionAtMath Function2Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMath_ppune[0] =
          SideFusion_Fcn_B.R31_e;
        SideFusion_Fcn_B.TmpSignalConversionAtMath_ppune[1] =
          SideFusion_Fcn_B.R32_k;
        SideFusion_Fcn_B.TmpSignalConversionAtMath_ppune[2] =
          SideFusion_Fcn_B.R33_d;

        /* Math: '<S97>/Math Function2' */
        SideFusion_Fcn_B.MathFunction2_hx[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_ppune[0];
        SideFusion_Fcn_B.MathFunction2_hx[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_ppune[1];
        SideFusion_Fcn_B.MathFunction2_hx[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMath_ppune[2];

        /* Gain: '<S97>/Gain2' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain2_o[i] = SideFusion_Fcn_P.Gain2_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction2_hx[0];
          SideFusion_Fcn_B.Gain2_o[i + 3] = SideFusion_Fcn_P.Gain2_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction2_hx[1];
          SideFusion_Fcn_B.Gain2_o[i + 6] = SideFusion_Fcn_P.Gain2_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction2_hx[2];
        }

        for (i = 0; i < 9; i++) {
          /* Sum: '<S97>/Add' */
          SideFusion_Fcn_B.Add_g[i] = (SideFusion_Fcn_B.Gain3_p[i] +
            SideFusion_Fcn_B.Gain1_c[i]) + SideFusion_Fcn_B.Gain2_o[i];

          /* Sum: '<S20>/Subtract1' */
          SideFusion_Fcn_B.Stj3x3_f[i] = SideFusion_Fcn_B.Add_b[i] +
            SideFusion_Fcn_B.Add_g[i];

          /* Product: '<S98>/Product1' */
          tmp[i] = SideFusion_Fcn_B.Stj3x3_f[i];
        }

        /* End of Gain: '<S97>/Gain2' */

        /* Product: '<S98>/Product1' incorporates:
         *  Constant: '<S98>/Constant'
         */
        unnamed_idx_0 = SideFusion_Fcn_P.Constant_Value_d[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant_Value_d[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant_Value_d[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product1_l[0] = v1[0];
        SideFusion_Fcn_B.Product1_l[1] = v1[1];
        SideFusion_Fcn_B.Product1_l[2] = v1[2];

        /* Product: '<S98>/Product2' incorporates:
         *  Constant: '<S98>/Constant1'
         */
        memcpy(&tmp[0], &SideFusion_Fcn_B.Stj3x3_f[0], 9U * sizeof(real_T));
        unnamed_idx_0 = SideFusion_Fcn_P.Constant1_Value_io[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant1_Value_io[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant1_Value_io[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product2_b[0] = v1[0];
        SideFusion_Fcn_B.Product2_b[1] = v1[1];
        SideFusion_Fcn_B.Product2_b[2] = v1[2];

        /* End of Product: '<S98>/Product2' */

        /* Product: '<S98>/Product3' incorporates:
         *  Constant: '<S98>/Constant2'
         */
        memcpy(&tmp[0], &SideFusion_Fcn_B.Stj3x3_f[0], 9U * sizeof(real_T));
        unnamed_idx_0 = SideFusion_Fcn_P.Constant2_Value_a[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant2_Value_a[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant2_Value_a[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product3_o[0] = v1[0];
        SideFusion_Fcn_B.Product3_o[1] = v1[1];
        SideFusion_Fcn_B.Product3_o[2] = v1[2];

        /* End of Product: '<S98>/Product3' */

        /* Product: '<S89>/Divide1' */
        SideFusion_Fcn_B.Divide1_b0 = SideFusion_Fcn_B.Product1_l[0] *
          SideFusion_Fcn_B.Product2_b[1] * SideFusion_Fcn_B.Product3_o[2];

        /* Product: '<S89>/Divide2' */
        SideFusion_Fcn_B.Divide2_e = SideFusion_Fcn_B.Product1_l[1] *
          SideFusion_Fcn_B.Product2_b[0] * SideFusion_Fcn_B.Product3_o[2];

        /* Sum: '<S89>/Subtract3' */
        SideFusion_Fcn_B.Subtract3_e = SideFusion_Fcn_B.Divide1_b0 -
          SideFusion_Fcn_B.Divide2_e;

        /* Product: '<S89>/Divide3' incorporates:
         *  Constant: '<S89>/Constant'
         */
        SideFusion_Fcn_B.Divide3_k = SideFusion_Fcn_B.Subtract3_e *
          SideFusion_Fcn_P.Constant_Value_p;

        /* Math: '<S89>/Sqrt1'
         *
         * About '<S89>/Sqrt1':
         *  Operator: sqrt
         */
        unnamed_idx_0 = SideFusion_Fcn_B.Divide3_k;
        if (unnamed_idx_0 < 0.0) {
          SideFusion_Fcn_B.Sqrt1_j = -sqrt(fabs(unnamed_idx_0));
        } else {
          SideFusion_Fcn_B.Sqrt1_j = sqrt(unnamed_idx_0);
        }

        /* End of Math: '<S89>/Sqrt1' */

        /* Gain: '<S104>/Gain1' incorporates:
         *  Constant: '<S90>/Constant5'
         */
        SideFusion_Fcn_B.Gain1_k = SideFusion_Fcn_P.Gain1_Gain_a *
          SideFusion_Fcn_P.Constant5_Value_p;

        /* Sum: '<S104>/Add' */
        SideFusion_Fcn_B.Add_gv = SideFusion_Fcn_B.yt_b +
          SideFusion_Fcn_B.Gain1_k;

        /* Trigonometry: '<S104>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_l = cos
          (SideFusion_Fcn_B.InstallAng_l);

        /* Product: '<S104>/Product' */
        SideFusion_Fcn_B.Product_gz = SideFusion_Fcn_B.Add_gv *
          SideFusion_Fcn_B.TrigonometricFunction_l;

        /* Trigonometry: '<S104>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_d = sin
          (SideFusion_Fcn_B.InstallAng_l);

        /* Product: '<S104>/Product1' */
        SideFusion_Fcn_B.Product1_h = SideFusion_Fcn_B.xt_h *
          SideFusion_Fcn_B.TrigonometricFunction1_d;

        /* Sum: '<S104>/Add1' */
        SideFusion_Fcn_B.Add1_b = SideFusion_Fcn_B.Product_gz -
          SideFusion_Fcn_B.Product1_h;

        /* Gain: '<S105>/Gain1' incorporates:
         *  Constant: '<S90>/Constant5'
         */
        SideFusion_Fcn_B.Gain1_i = SideFusion_Fcn_P.Gain1_Gain_cw *
          SideFusion_Fcn_P.Constant5_Value_p;

        /* Sum: '<S105>/Add' */
        SideFusion_Fcn_B.Add_eq = SideFusion_Fcn_B.yt_b +
          SideFusion_Fcn_B.Gain1_i;

        /* Trigonometry: '<S105>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_jt = sin
          (SideFusion_Fcn_B.InstallAng_l);

        /* Product: '<S105>/Product' */
        SideFusion_Fcn_B.Product_j = SideFusion_Fcn_B.Add_eq *
          SideFusion_Fcn_B.TrigonometricFunction_jt;

        /* Trigonometry: '<S105>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_dl = cos
          (SideFusion_Fcn_B.InstallAng_l);

        /* Product: '<S105>/Product1' */
        SideFusion_Fcn_B.Product1_b = SideFusion_Fcn_B.xt_h *
          SideFusion_Fcn_B.TrigonometricFunction1_dl;

        /* Sum: '<S105>/Add1' */
        SideFusion_Fcn_B.Add1_bw = SideFusion_Fcn_B.Product_j +
          SideFusion_Fcn_B.Product1_b;

        /* Abs: '<S103>/Abs' */
        SideFusion_Fcn_B.Abs_h = fabs(SideFusion_Fcn_B.Add1_bw);

        /* RelationalOperator: '<S106>/Compare' incorporates:
         *  Constant: '<S106>/Constant'
         */
        SideFusion_Fcn_B.Compare_f = (uint8_T)(SideFusion_Fcn_B.Abs_h >=
          SideFusion_Fcn_P.CompareToConstant_const_j4);

        /* Switch: '<S103>/Switch' incorporates:
         *  Constant: '<S103>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_f >= SideFusion_Fcn_P.Switch_Threshold_k) {
          SideFusion_Fcn_B.Switch_lk = SideFusion_Fcn_B.Add1_bw;
        } else {
          SideFusion_Fcn_B.Switch_lk = SideFusion_Fcn_P.Constant_Value_lk;
        }

        /* End of Switch: '<S103>/Switch' */

        /* Product: '<S99>/Divide' */
        SideFusion_Fcn_B.Divide_p = SideFusion_Fcn_B.Add1_b /
          SideFusion_Fcn_B.Switch_lk;

        /* Trigonometry: '<S99>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_hy = atan
          (SideFusion_Fcn_B.Divide_p);

        /* Constant: '<S90>/Constant6' */
        SideFusion_Fcn_B.L = SideFusion_Fcn_P.Constant6_Value_g;

        /* Trigonometry: '<S102>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_n = sin
          (SideFusion_Fcn_B.InstallAng_l);

        /* Product: '<S102>/Product' */
        SideFusion_Fcn_B.Product_c = SideFusion_Fcn_B.vyt_g *
          SideFusion_Fcn_B.TrigonometricFunction_n;

        /* Trigonometry: '<S102>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_a3 = cos
          (SideFusion_Fcn_B.InstallAng_l);

        /* Product: '<S102>/Product1' */
        SideFusion_Fcn_B.Product1_c = SideFusion_Fcn_B.vxt_e *
          SideFusion_Fcn_B.TrigonometricFunction1_a3;

        /* Sum: '<S102>/Add1' */
        SideFusion_Fcn_B.Add1_k = SideFusion_Fcn_B.Product_c +
          SideFusion_Fcn_B.Product1_c;

        /* Trigonometry: '<S100>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_e = cos
          (SideFusion_Fcn_B.TrigonometricFunction_hy);

        /* Product: '<S100>/Product' */
        SideFusion_Fcn_B.Product_p = SideFusion_Fcn_B.Add1_k *
          SideFusion_Fcn_B.TrigonometricFunction_e;

        /* Trigonometry: '<S101>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_p0 = cos
          (SideFusion_Fcn_B.InstallAng_l);

        /* Product: '<S101>/Product' */
        SideFusion_Fcn_B.Product_hn = SideFusion_Fcn_B.vyt_g *
          SideFusion_Fcn_B.TrigonometricFunction_p0;

        /* Trigonometry: '<S101>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_kq = sin
          (SideFusion_Fcn_B.InstallAng_l);

        /* Product: '<S101>/Product1' */
        SideFusion_Fcn_B.Product1_et = SideFusion_Fcn_B.vxt_e *
          SideFusion_Fcn_B.TrigonometricFunction1_kq;

        /* Sum: '<S101>/Add1' */
        SideFusion_Fcn_B.Add1_f = SideFusion_Fcn_B.Product_hn -
          SideFusion_Fcn_B.Product1_et;

        /* Trigonometry: '<S100>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_ob = sin
          (SideFusion_Fcn_B.TrigonometricFunction_hy);

        /* Product: '<S100>/Product1' */
        SideFusion_Fcn_B.Product1_pk = SideFusion_Fcn_B.Add1_f *
          SideFusion_Fcn_B.TrigonometricFunction1_ob;

        /* Sum: '<S100>/Add1' */
        SideFusion_Fcn_B.Add1_ar = SideFusion_Fcn_B.Product_p +
          SideFusion_Fcn_B.Product1_pk;

        /* Sum: '<S20>/Subtract2' */
        SideFusion_Fcn_B.Vtj3x1_i[0] = SideFusion_Fcn_B.xt_h -
          SideFusion_Fcn_B.xj_k;
        SideFusion_Fcn_B.Vtj3x1_i[1] = SideFusion_Fcn_B.yt_b -
          SideFusion_Fcn_B.yj_b;
        SideFusion_Fcn_B.Vtj3x1_i[2] = SideFusion_Fcn_B.Add1_ar -
          SideFusion_Fcn_B.rangerate_e;

        /* Math: '<S20>/Math Function2' */
        SideFusion_Fcn_B.Vtj1x3_g[0] = SideFusion_Fcn_B.Vtj3x1_i[0];
        SideFusion_Fcn_B.Vtj1x3_g[1] = SideFusion_Fcn_B.Vtj3x1_i[1];
        SideFusion_Fcn_B.Vtj1x3_g[2] = SideFusion_Fcn_B.Vtj3x1_i[2];

        /* Product: '<S20>/Divide' */
        rt_mldivide_U1d3x3_U2d_9O8lG8ax(SideFusion_Fcn_B.Stj3x3_f,
          SideFusion_Fcn_B.Vtj3x1_i, v1);
        unnamed_idx_0 = SideFusion_Fcn_B.Vtj1x3_g[0];
        unnamed_idx_1 = SideFusion_Fcn_B.Vtj1x3_g[1];
        unnamed_idx_2 = SideFusion_Fcn_B.Vtj1x3_g[2];
        unnamed_idx_0 *= v1[0];
        unnamed_idx_0 += unnamed_idx_1 * v1[1];
        unnamed_idx_0 += unnamed_idx_2 * v1[2];
        SideFusion_Fcn_B.Divide_k = unnamed_idx_0;

        /* Gain: '<S20>/Gain' */
        SideFusion_Fcn_B.Gain_p = SideFusion_Fcn_P.Gain_Gain_dl *
          SideFusion_Fcn_B.Divide_k;

        /* Math: '<S20>/Math Function1'
         *
         * About '<S20>/Math Function1':
         *  Operator: exp
         */
        SideFusion_Fcn_B.MathFunction1_f = exp(SideFusion_Fcn_B.Gain_p);

        /* Product: '<S20>/Divide1' */
        SideFusion_Fcn_B.Gtj_a = SideFusion_Fcn_B.MathFunction1_f /
          SideFusion_Fcn_B.Sqrt1_j;

        /* End of Outputs for SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_RF' */
        SideFusion_Fcn_DW.Gtj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
          SideFusion_Fcn_DW.j] = SideFusion_Fcn_B.Gtj_a;
        SideFusion_Fcn_DW.dtj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
          SideFusion_Fcn_DW.j] = SideFusion_Fcn_B.Divide_k;

        /* Transition: '<S16>:3647' */
        SideFusion_Fcn_DW.j++;
      }

      /* Transition: '<S16>:3644' */
      /* Transition: '<S16>:3636' */
      SideFusion_Fcn_DW.t++;
      SideFusion_Fcn_DW.j = 0.0;
    }

    /* Transition: '<S16>:3641' */
    /* Transition: '<S16>:3645' */
  } else {
    /* Transition: '<S16>:3700' */
  }

  /* Transition: '<S16>:3703' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
  if (SideFusion_Fcn_DW.DataSource == 3.0) {
    /* Transition: '<S16>:3705' */
    /* LR SRR */
    while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
      /* Transition: '<S16>:3712' */
      while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
        /* Transition: '<S16>:3704' */
        /* Transition: '<S16>:3706' */
        /* Simulink Function 'G_cal_LR': '<S16>:3743' */
        SideFusion_Fcn_B.xt_c = SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.vxt_b = SideFusion_Fcn_B.FusDataInternal[80 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.yt_j = SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.vyt_o = SideFusion_Fcn_B.FusDataInternal[160 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.xj_n = SideFusion_Fcn_B.Measure_Data[40 + (int32_T)
          SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.yj_b5 = SideFusion_Fcn_B.Measure_Data[80 + (int32_T)
          SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.rangerate_n = SideFusion_Fcn_B.Measure_Data[200 +
          (int32_T)SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.InstallAng_n = 0.59311111111111114;
        SideFusion_Fcn_B.P11_fw = SideFusion_Fcn_B.FusDataInternal[280 +
          (int32_T)SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P13_hu = SideFusion_Fcn_B.FusDataInternal[360 +
          (int32_T)SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P31_l = SideFusion_Fcn_B.FusDataInternal[600 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P33_a = SideFusion_Fcn_B.FusDataInternal[680 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.R11_l = SideFusion_Fcn_RXX_SRR;
        SideFusion_Fcn_B.R12_i = 0.0;
        SideFusion_Fcn_B.R13_f = 0.0;
        SideFusion_Fcn_B.R21_i = 0.0;
        SideFusion_Fcn_B.R22_f = SideFusion_Fcn_RYY_SRR;
        SideFusion_Fcn_B.R23_e2 = 0.0;
        SideFusion_Fcn_B.R31_g = 0.0;
        SideFusion_Fcn_B.R32_p = 0.0;
        SideFusion_Fcn_B.R33_m = 1.0;

        /* Outputs for Function Call SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_LR' */
        /* Abs: '<S68>/Abs' */
        SideFusion_Fcn_B.Abs_db = fabs(SideFusion_Fcn_B.P11_fw);

        /* RelationalOperator: '<S84>/Compare' incorporates:
         *  Constant: '<S84>/Constant'
         */
        SideFusion_Fcn_B.Compare_d = (uint8_T)(SideFusion_Fcn_B.Abs_db >=
          SideFusion_Fcn_P.CompareToConstant_const_a4);

        /* Switch: '<S68>/Switch' incorporates:
         *  Constant: '<S68>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_d >= SideFusion_Fcn_P.Switch_Threshold_dw)
        {
          SideFusion_Fcn_B.Switch_c = SideFusion_Fcn_B.P11_fw;
        } else {
          SideFusion_Fcn_B.Switch_c = SideFusion_Fcn_P.Constant_Value_dy;
        }

        /* End of Switch: '<S68>/Switch' */

        /* SignalConversion: '<S73>/TmpSignal ConversionAtMath Function2Inport1' incorporates:
         *  Constant: '<S19>/Constant'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_pp[0] =
          SideFusion_Fcn_B.Switch_c;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_pp[1] =
          SideFusion_Fcn_B.P13_hu;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_pp[2] =
          SideFusion_Fcn_P.Constant_Value_dq;

        /* Math: '<S73>/Math Function2' */
        SideFusion_Fcn_B.MathFunction2_h[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_pp[0];
        SideFusion_Fcn_B.MathFunction2_h[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_pp[1];
        SideFusion_Fcn_B.MathFunction2_h[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_pp[2];

        /* Gain: '<S73>/Gain' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain_m[i] = SideFusion_Fcn_P.Gain_Gain_m[i] *
            SideFusion_Fcn_B.MathFunction2_h[0];
          SideFusion_Fcn_B.Gain_m[i + 3] = SideFusion_Fcn_P.Gain_Gain_m[i] *
            SideFusion_Fcn_B.MathFunction2_h[1];
          SideFusion_Fcn_B.Gain_m[i + 6] = SideFusion_Fcn_P.Gain_Gain_m[i] *
            SideFusion_Fcn_B.MathFunction2_h[2];
        }

        /* End of Gain: '<S73>/Gain' */

        /* Abs: '<S69>/Abs' */
        SideFusion_Fcn_B.Abs_dy = fabs(SideFusion_Fcn_B.P31_l);

        /* RelationalOperator: '<S85>/Compare' incorporates:
         *  Constant: '<S85>/Constant'
         */
        SideFusion_Fcn_B.Compare_cm = (uint8_T)(SideFusion_Fcn_B.Abs_dy >=
          SideFusion_Fcn_P.CompareToConstant_const_l0);

        /* Switch: '<S69>/Switch' incorporates:
         *  Constant: '<S69>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_cm >= SideFusion_Fcn_P.Switch_Threshold_e)
        {
          SideFusion_Fcn_B.Switch_d = SideFusion_Fcn_B.P31_l;
        } else {
          SideFusion_Fcn_B.Switch_d = SideFusion_Fcn_P.Constant_Value_mq;
        }

        /* End of Switch: '<S69>/Switch' */

        /* Abs: '<S70>/Abs' */
        SideFusion_Fcn_B.Abs_b = fabs(SideFusion_Fcn_B.P33_a);

        /* RelationalOperator: '<S86>/Compare' incorporates:
         *  Constant: '<S86>/Constant'
         */
        SideFusion_Fcn_B.Compare_m = (uint8_T)(SideFusion_Fcn_B.Abs_b >=
          SideFusion_Fcn_P.CompareToConstant_const_js);

        /* Switch: '<S70>/Switch' incorporates:
         *  Constant: '<S70>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_m >= SideFusion_Fcn_P.Switch_Threshold_fn)
        {
          SideFusion_Fcn_B.Switch_nb = SideFusion_Fcn_B.P33_a;
        } else {
          SideFusion_Fcn_B.Switch_nb = SideFusion_Fcn_P.Constant_Value_mb;
        }

        /* End of Switch: '<S70>/Switch' */

        /* SignalConversion: '<S73>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
         *  Constant: '<S19>/Constant1'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fzy[0] =
          SideFusion_Fcn_B.Switch_d;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fzy[1] =
          SideFusion_Fcn_B.Switch_nb;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fzy[2] =
          SideFusion_Fcn_P.Constant1_Value_k;

        /* Math: '<S73>/Math Function1' */
        SideFusion_Fcn_B.MathFunction1_d[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fzy[0];
        SideFusion_Fcn_B.MathFunction1_d[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fzy[1];
        SideFusion_Fcn_B.MathFunction1_d[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fzy[2];

        /* Gain: '<S73>/Gain1' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain1_e[i] = SideFusion_Fcn_P.Gain1_Gain_cm[i] *
            SideFusion_Fcn_B.MathFunction1_d[0];
          SideFusion_Fcn_B.Gain1_e[i + 3] = SideFusion_Fcn_P.Gain1_Gain_cm[i] *
            SideFusion_Fcn_B.MathFunction1_d[1];
          SideFusion_Fcn_B.Gain1_e[i + 6] = SideFusion_Fcn_P.Gain1_Gain_cm[i] *
            SideFusion_Fcn_B.MathFunction1_d[2];
        }

        /* End of Gain: '<S73>/Gain1' */

        /* SignalConversion: '<S73>/TmpSignal ConversionAtMath Function4Inport1' incorporates:
         *  Constant: '<S19>/Constant2'
         *  Constant: '<S19>/Constant3'
         *  Constant: '<S19>/Constant4'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fju[0] =
          SideFusion_Fcn_P.Constant2_Value_k;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fju[1] =
          SideFusion_Fcn_P.Constant3_Value_h;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fju[2] =
          SideFusion_Fcn_P.Constant4_Value_d;

        /* Math: '<S73>/Math Function4' */
        SideFusion_Fcn_B.MathFunction4_a[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fju[0];
        SideFusion_Fcn_B.MathFunction4_a[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fju[1];
        SideFusion_Fcn_B.MathFunction4_a[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_fju[2];

        /* Gain: '<S73>/Gain2' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain2_c[i] = SideFusion_Fcn_P.Gain2_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction4_a[0];
          SideFusion_Fcn_B.Gain2_c[i + 3] = SideFusion_Fcn_P.Gain2_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction4_a[1];
          SideFusion_Fcn_B.Gain2_c[i + 6] = SideFusion_Fcn_P.Gain2_Gain_b[i] *
            SideFusion_Fcn_B.MathFunction4_a[2];
        }

        /* End of Gain: '<S73>/Gain2' */

        /* Sum: '<S73>/Add' */
        for (i = 0; i < 9; i++) {
          SideFusion_Fcn_B.Add_em[i] = (SideFusion_Fcn_B.Gain_m[i] +
            SideFusion_Fcn_B.Gain1_e[i]) + SideFusion_Fcn_B.Gain2_c[i];
        }

        /* End of Sum: '<S73>/Add' */

        /* Abs: '<S71>/Abs' */
        SideFusion_Fcn_B.Abs_o2 = fabs(SideFusion_Fcn_B.R11_l);

        /* RelationalOperator: '<S87>/Compare' incorporates:
         *  Constant: '<S87>/Constant'
         */
        SideFusion_Fcn_B.Compare_k = (uint8_T)(SideFusion_Fcn_B.Abs_o2 >=
          SideFusion_Fcn_P.CompareToConstant_const_jf);

        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S71>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_k >= SideFusion_Fcn_P.Switch_Threshold_dh)
        {
          SideFusion_Fcn_B.Switch_a = SideFusion_Fcn_B.R11_l;
        } else {
          SideFusion_Fcn_B.Switch_a = SideFusion_Fcn_P.Constant_Value_m0;
        }

        /* End of Switch: '<S71>/Switch' */

        /* SignalConversion: '<S74>/TmpSignal ConversionAtMath Function3Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_ew[0] =
          SideFusion_Fcn_B.Switch_a;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_ew[1] =
          SideFusion_Fcn_B.R12_i;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_ew[2] =
          SideFusion_Fcn_B.R13_f;

        /* Math: '<S74>/Math Function3' */
        SideFusion_Fcn_B.MathFunction3_p[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_ew[0];
        SideFusion_Fcn_B.MathFunction3_p[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_ew[1];
        SideFusion_Fcn_B.MathFunction3_p[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_ew[2];

        /* Gain: '<S74>/Gain3' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain3_e[i] = SideFusion_Fcn_P.Gain3_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction3_p[0];
          SideFusion_Fcn_B.Gain3_e[i + 3] = SideFusion_Fcn_P.Gain3_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction3_p[1];
          SideFusion_Fcn_B.Gain3_e[i + 6] = SideFusion_Fcn_P.Gain3_Gain_k[i] *
            SideFusion_Fcn_B.MathFunction3_p[2];
        }

        /* End of Gain: '<S74>/Gain3' */

        /* Abs: '<S72>/Abs' */
        SideFusion_Fcn_B.Abs_oa = fabs(SideFusion_Fcn_B.R22_f);

        /* RelationalOperator: '<S88>/Compare' incorporates:
         *  Constant: '<S88>/Constant'
         */
        SideFusion_Fcn_B.Compare_n = (uint8_T)(SideFusion_Fcn_B.Abs_oa >=
          SideFusion_Fcn_P.CompareToConstant_const_ck);

        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S72>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_n >= SideFusion_Fcn_P.Switch_Threshold_n1)
        {
          SideFusion_Fcn_B.Switch_i = SideFusion_Fcn_B.R22_f;
        } else {
          SideFusion_Fcn_B.Switch_i = SideFusion_Fcn_P.Constant_Value_c3;
        }

        /* End of Switch: '<S72>/Switch' */

        /* SignalConversion: '<S74>/TmpSignal ConversionAtMath Function1Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_fzyx[0] =
          SideFusion_Fcn_B.R21_i;
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_fzyx[1] =
          SideFusion_Fcn_B.Switch_i;
        SideFusion_Fcn_B.TmpSignalConversionAtMathF_fzyx[2] =
          SideFusion_Fcn_B.R23_e2;

        /* Math: '<S74>/Math Function1' */
        SideFusion_Fcn_B.MathFunction1_g[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_fzyx[0];
        SideFusion_Fcn_B.MathFunction1_g[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_fzyx[1];
        SideFusion_Fcn_B.MathFunction1_g[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathF_fzyx[2];

        /* Gain: '<S74>/Gain1' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain1_d[i] = SideFusion_Fcn_P.Gain1_Gain_f[i] *
            SideFusion_Fcn_B.MathFunction1_g[0];
          SideFusion_Fcn_B.Gain1_d[i + 3] = SideFusion_Fcn_P.Gain1_Gain_f[i] *
            SideFusion_Fcn_B.MathFunction1_g[1];
          SideFusion_Fcn_B.Gain1_d[i + 6] = SideFusion_Fcn_P.Gain1_Gain_f[i] *
            SideFusion_Fcn_B.MathFunction1_g[2];
        }

        /* End of Gain: '<S74>/Gain1' */

        /* SignalConversion: '<S74>/TmpSignal ConversionAtMath Function2Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ppu[0] =
          SideFusion_Fcn_B.R31_g;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ppu[1] =
          SideFusion_Fcn_B.R32_p;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ppu[2] =
          SideFusion_Fcn_B.R33_m;

        /* Math: '<S74>/Math Function2' */
        SideFusion_Fcn_B.MathFunction2_he[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ppu[0];
        SideFusion_Fcn_B.MathFunction2_he[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ppu[1];
        SideFusion_Fcn_B.MathFunction2_he[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFu_ppu[2];

        /* Gain: '<S74>/Gain2' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain2_f[i] = SideFusion_Fcn_P.Gain2_Gain_j[i] *
            SideFusion_Fcn_B.MathFunction2_he[0];
          SideFusion_Fcn_B.Gain2_f[i + 3] = SideFusion_Fcn_P.Gain2_Gain_j[i] *
            SideFusion_Fcn_B.MathFunction2_he[1];
          SideFusion_Fcn_B.Gain2_f[i + 6] = SideFusion_Fcn_P.Gain2_Gain_j[i] *
            SideFusion_Fcn_B.MathFunction2_he[2];
        }

        for (i = 0; i < 9; i++) {
          /* Sum: '<S74>/Add' */
          SideFusion_Fcn_B.Add_l[i] = (SideFusion_Fcn_B.Gain3_e[i] +
            SideFusion_Fcn_B.Gain1_d[i]) + SideFusion_Fcn_B.Gain2_f[i];

          /* Sum: '<S19>/Subtract1' */
          SideFusion_Fcn_B.Stj3x3_a[i] = SideFusion_Fcn_B.Add_em[i] +
            SideFusion_Fcn_B.Add_l[i];

          /* Product: '<S75>/Product1' */
          tmp[i] = SideFusion_Fcn_B.Stj3x3_a[i];
        }

        /* End of Gain: '<S74>/Gain2' */

        /* Product: '<S75>/Product1' incorporates:
         *  Constant: '<S75>/Constant'
         */
        unnamed_idx_0 = SideFusion_Fcn_P.Constant_Value_a[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant_Value_a[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant_Value_a[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product1_a[0] = v1[0];
        SideFusion_Fcn_B.Product1_a[1] = v1[1];
        SideFusion_Fcn_B.Product1_a[2] = v1[2];

        /* Product: '<S75>/Product2' incorporates:
         *  Constant: '<S75>/Constant1'
         */
        memcpy(&tmp[0], &SideFusion_Fcn_B.Stj3x3_a[0], 9U * sizeof(real_T));
        unnamed_idx_0 = SideFusion_Fcn_P.Constant1_Value_n[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant1_Value_n[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant1_Value_n[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product2_h[0] = v1[0];
        SideFusion_Fcn_B.Product2_h[1] = v1[1];
        SideFusion_Fcn_B.Product2_h[2] = v1[2];

        /* End of Product: '<S75>/Product2' */

        /* Product: '<S75>/Product3' incorporates:
         *  Constant: '<S75>/Constant2'
         */
        memcpy(&tmp[0], &SideFusion_Fcn_B.Stj3x3_a[0], 9U * sizeof(real_T));
        unnamed_idx_0 = SideFusion_Fcn_P.Constant2_Value_f[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant2_Value_f[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant2_Value_f[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product3_l[0] = v1[0];
        SideFusion_Fcn_B.Product3_l[1] = v1[1];
        SideFusion_Fcn_B.Product3_l[2] = v1[2];

        /* End of Product: '<S75>/Product3' */

        /* Product: '<S66>/Divide1' */
        SideFusion_Fcn_B.Divide1_b = SideFusion_Fcn_B.Product1_a[0] *
          SideFusion_Fcn_B.Product2_h[1] * SideFusion_Fcn_B.Product3_l[2];

        /* Product: '<S66>/Divide2' */
        SideFusion_Fcn_B.Divide2_m = SideFusion_Fcn_B.Product1_a[1] *
          SideFusion_Fcn_B.Product2_h[0] * SideFusion_Fcn_B.Product3_l[2];

        /* Sum: '<S66>/Subtract3' */
        SideFusion_Fcn_B.Subtract3_j = SideFusion_Fcn_B.Divide1_b -
          SideFusion_Fcn_B.Divide2_m;

        /* Product: '<S66>/Divide3' incorporates:
         *  Constant: '<S66>/Constant'
         */
        SideFusion_Fcn_B.Divide3_i = SideFusion_Fcn_B.Subtract3_j *
          SideFusion_Fcn_P.Constant_Value_ik;

        /* Math: '<S66>/Sqrt1'
         *
         * About '<S66>/Sqrt1':
         *  Operator: sqrt
         */
        unnamed_idx_0 = SideFusion_Fcn_B.Divide3_i;
        if (unnamed_idx_0 < 0.0) {
          SideFusion_Fcn_B.Sqrt1_k = -sqrt(fabs(unnamed_idx_0));
        } else {
          SideFusion_Fcn_B.Sqrt1_k = sqrt(unnamed_idx_0);
        }

        /* End of Math: '<S66>/Sqrt1' */

        /* Gain: '<S81>/Gain1' incorporates:
         *  Constant: '<S67>/Constant5'
         */
        SideFusion_Fcn_B.Gain1_g = SideFusion_Fcn_P.Gain1_Gain_c0 *
          SideFusion_Fcn_P.Constant5_Value_b;

        /* Sum: '<S81>/Add' */
        SideFusion_Fcn_B.Add_n = SideFusion_Fcn_B.yt_j -
          SideFusion_Fcn_B.Gain1_g;

        /* Trigonometry: '<S81>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_p = sin
          (SideFusion_Fcn_B.InstallAng_n);

        /* Product: '<S81>/Product' */
        SideFusion_Fcn_B.Product_mi = SideFusion_Fcn_B.Add_n *
          SideFusion_Fcn_B.TrigonometricFunction_p;

        /* Sum: '<S81>/Add2' incorporates:
         *  Constant: '<S67>/Constant6'
         */
        SideFusion_Fcn_B.Add2_n = SideFusion_Fcn_P.Constant6_Value_l +
          SideFusion_Fcn_B.xt_c;

        /* Trigonometry: '<S81>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_f3 = cos
          (SideFusion_Fcn_B.InstallAng_n);

        /* Product: '<S81>/Product1' */
        SideFusion_Fcn_B.Product1_f = SideFusion_Fcn_B.Add2_n *
          SideFusion_Fcn_B.TrigonometricFunction1_f3;

        /* Sum: '<S81>/Add1' */
        SideFusion_Fcn_B.Add1_o0 = SideFusion_Fcn_B.Product_mi +
          SideFusion_Fcn_B.Product1_f;

        /* Gain: '<S82>/Gain1' incorporates:
         *  Constant: '<S67>/Constant5'
         */
        SideFusion_Fcn_B.Gain1_g1 = SideFusion_Fcn_P.Gain1_Gain_m *
          SideFusion_Fcn_P.Constant5_Value_b;

        /* Sum: '<S82>/Add' */
        SideFusion_Fcn_B.Add_i = SideFusion_Fcn_B.yt_j -
          SideFusion_Fcn_B.Gain1_g1;

        /* Trigonometry: '<S82>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_am = cos
          (SideFusion_Fcn_B.InstallAng_n);

        /* Product: '<S82>/Product' */
        SideFusion_Fcn_B.Product_n = SideFusion_Fcn_B.Add_i *
          SideFusion_Fcn_B.TrigonometricFunction_am;

        /* Sum: '<S82>/Add2' incorporates:
         *  Constant: '<S67>/Constant6'
         */
        SideFusion_Fcn_B.Add2_c = SideFusion_Fcn_P.Constant6_Value_l +
          SideFusion_Fcn_B.xt_c;

        /* Trigonometry: '<S82>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_a = sin
          (SideFusion_Fcn_B.InstallAng_n);

        /* Product: '<S82>/Product1' */
        SideFusion_Fcn_B.Product1_or = SideFusion_Fcn_B.Add2_c *
          SideFusion_Fcn_B.TrigonometricFunction1_a;

        /* Sum: '<S82>/Add1' */
        SideFusion_Fcn_B.Add1_p = SideFusion_Fcn_B.Product_n -
          SideFusion_Fcn_B.Product1_or;

        /* Abs: '<S80>/Abs' */
        SideFusion_Fcn_B.Abs_dc = fabs(SideFusion_Fcn_B.Add1_p);

        /* RelationalOperator: '<S83>/Compare' incorporates:
         *  Constant: '<S83>/Constant'
         */
        SideFusion_Fcn_B.Compare_lq = (uint8_T)(SideFusion_Fcn_B.Abs_dc >=
          SideFusion_Fcn_P.CompareToConstant_const_e5);

        /* Switch: '<S80>/Switch' incorporates:
         *  Constant: '<S80>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_lq >= SideFusion_Fcn_P.Switch_Threshold_h)
        {
          SideFusion_Fcn_B.Switch_l = SideFusion_Fcn_B.Add1_p;
        } else {
          SideFusion_Fcn_B.Switch_l = SideFusion_Fcn_P.Constant_Value_km;
        }

        /* End of Switch: '<S80>/Switch' */

        /* Product: '<S76>/Divide' */
        SideFusion_Fcn_B.Divide_h = SideFusion_Fcn_B.Add1_o0 /
          SideFusion_Fcn_B.Switch_l;

        /* Trigonometry: '<S76>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_m = atan
          (SideFusion_Fcn_B.Divide_h);

        /* Trigonometry: '<S79>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_o = cos
          (SideFusion_Fcn_B.InstallAng_n);

        /* Product: '<S79>/Product' */
        SideFusion_Fcn_B.Product_g = SideFusion_Fcn_B.vyt_o *
          SideFusion_Fcn_B.TrigonometricFunction_o;

        /* Trigonometry: '<S79>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_by = sin
          (SideFusion_Fcn_B.InstallAng_n);

        /* Product: '<S79>/Product1' */
        SideFusion_Fcn_B.Product1_g = SideFusion_Fcn_B.vxt_b *
          SideFusion_Fcn_B.TrigonometricFunction1_by;

        /* Sum: '<S79>/Add1' */
        SideFusion_Fcn_B.Add1_j = SideFusion_Fcn_B.Product_g -
          SideFusion_Fcn_B.Product1_g;

        /* Trigonometry: '<S77>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_j = cos
          (SideFusion_Fcn_B.TrigonometricFunction_m);

        /* Product: '<S77>/Product' */
        SideFusion_Fcn_B.Product_a = SideFusion_Fcn_B.Add1_j *
          SideFusion_Fcn_B.TrigonometricFunction_j;

        /* Trigonometry: '<S78>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_hz = sin
          (SideFusion_Fcn_B.InstallAng_n);

        /* Product: '<S78>/Product' */
        SideFusion_Fcn_B.Product_f = SideFusion_Fcn_B.vyt_o *
          SideFusion_Fcn_B.TrigonometricFunction_hz;

        /* Trigonometry: '<S78>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_k = cos
          (SideFusion_Fcn_B.InstallAng_n);

        /* Product: '<S78>/Product1' */
        SideFusion_Fcn_B.Product1_fo = SideFusion_Fcn_B.vxt_b *
          SideFusion_Fcn_B.TrigonometricFunction1_k;

        /* Sum: '<S78>/Add1' */
        SideFusion_Fcn_B.Add1_i = SideFusion_Fcn_B.Product_f +
          SideFusion_Fcn_B.Product1_fo;

        /* Trigonometry: '<S77>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_o = sin
          (SideFusion_Fcn_B.TrigonometricFunction_m);

        /* Product: '<S77>/Product1' */
        SideFusion_Fcn_B.Product1_m = SideFusion_Fcn_B.Add1_i *
          SideFusion_Fcn_B.TrigonometricFunction1_o;

        /* Sum: '<S77>/Add1' */
        SideFusion_Fcn_B.Add1_of = SideFusion_Fcn_B.Product_a +
          SideFusion_Fcn_B.Product1_m;

        /* Sum: '<S19>/Subtract2' */
        SideFusion_Fcn_B.Vtj3x1_n[0] = SideFusion_Fcn_B.xt_c -
          SideFusion_Fcn_B.xj_n;
        SideFusion_Fcn_B.Vtj3x1_n[1] = SideFusion_Fcn_B.yt_j -
          SideFusion_Fcn_B.yj_b5;
        SideFusion_Fcn_B.Vtj3x1_n[2] = SideFusion_Fcn_B.Add1_of -
          SideFusion_Fcn_B.rangerate_n;

        /* Math: '<S19>/Math Function2' */
        SideFusion_Fcn_B.Vtj1x3_h[0] = SideFusion_Fcn_B.Vtj3x1_n[0];
        SideFusion_Fcn_B.Vtj1x3_h[1] = SideFusion_Fcn_B.Vtj3x1_n[1];
        SideFusion_Fcn_B.Vtj1x3_h[2] = SideFusion_Fcn_B.Vtj3x1_n[2];

        /* Product: '<S19>/Divide' */
        rt_mldivide_U1d3x3_U2d_9O8lG8ax(SideFusion_Fcn_B.Stj3x3_a,
          SideFusion_Fcn_B.Vtj3x1_n, v1);
        unnamed_idx_0 = SideFusion_Fcn_B.Vtj1x3_h[0];
        unnamed_idx_1 = SideFusion_Fcn_B.Vtj1x3_h[1];
        unnamed_idx_2 = SideFusion_Fcn_B.Vtj1x3_h[2];
        unnamed_idx_0 *= v1[0];
        unnamed_idx_0 += unnamed_idx_1 * v1[1];
        unnamed_idx_0 += unnamed_idx_2 * v1[2];
        SideFusion_Fcn_B.Divide_d = unnamed_idx_0;

        /* Gain: '<S19>/Gain' */
        SideFusion_Fcn_B.Gain_h = SideFusion_Fcn_P.Gain_Gain_j *
          SideFusion_Fcn_B.Divide_d;

        /* Math: '<S19>/Math Function1'
         *
         * About '<S19>/Math Function1':
         *  Operator: exp
         */
        SideFusion_Fcn_B.MathFunction1_dn = exp(SideFusion_Fcn_B.Gain_h);

        /* Product: '<S19>/Divide1' */
        SideFusion_Fcn_B.Gtj_d = SideFusion_Fcn_B.MathFunction1_dn /
          SideFusion_Fcn_B.Sqrt1_k;

        /* End of Outputs for SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_LR' */
        SideFusion_Fcn_DW.Gtj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
          SideFusion_Fcn_DW.j] = SideFusion_Fcn_B.Gtj_d;
        SideFusion_Fcn_DW.dtj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
          SideFusion_Fcn_DW.j] = SideFusion_Fcn_B.Divide_d;

        /* Transition: '<S16>:3718' */
        SideFusion_Fcn_DW.j++;
      }

      /* Transition: '<S16>:3719' */
      /* Transition: '<S16>:3702' */
      SideFusion_Fcn_DW.t++;
      SideFusion_Fcn_DW.j = 0.0;
    }

    /* Transition: '<S16>:3709' */
    /* Transition: '<S16>:3707' */
  } else {
    /* Transition: '<S16>:3701' */
  }

  /* Transition: '<S16>:3753' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
  if (SideFusion_Fcn_DW.DataSource == 4.0) {
    /* Transition: '<S16>:3750' */
    /* RR SRR */
    while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
      /* Transition: '<S16>:3746' */
      while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
        /* Transition: '<S16>:3751' */
        /* Transition: '<S16>:3745' */
        /* Simulink Function 'G_cal_RR': '<S16>:3786' */
        SideFusion_Fcn_B.xt_oq = SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.vxt_bp = SideFusion_Fcn_B.FusDataInternal[80 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.yt_fi = SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.vyt_f = SideFusion_Fcn_B.FusDataInternal[160 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.xj_c = SideFusion_Fcn_B.Measure_Data[40 + (int32_T)
          SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.yj_k = SideFusion_Fcn_B.Measure_Data[80 + (int32_T)
          SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.rangerate_h = SideFusion_Fcn_B.Measure_Data[200 +
          (int32_T)SideFusion_Fcn_DW.j];
        SideFusion_Fcn_B.InstallAng_c = -0.59311111111111114;
        SideFusion_Fcn_B.P11_g = SideFusion_Fcn_B.FusDataInternal[280 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P13_c = SideFusion_Fcn_B.FusDataInternal[360 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P31_h = SideFusion_Fcn_B.FusDataInternal[600 + (int32_T)
          SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.P33_a1 = SideFusion_Fcn_B.FusDataInternal[680 +
          (int32_T)SideFusion_Fcn_DW.t];
        SideFusion_Fcn_B.R11_c = SideFusion_Fcn_RXX_SRR;
        SideFusion_Fcn_B.R12_l = 0.0;
        SideFusion_Fcn_B.R13_f2 = 0.0;
        SideFusion_Fcn_B.R21_f = 0.0;
        SideFusion_Fcn_B.R22_n = SideFusion_Fcn_RYY_SRR;
        SideFusion_Fcn_B.R23_m = 0.0;
        SideFusion_Fcn_B.R31_n = 0.0;
        SideFusion_Fcn_B.R32_e = 0.0;
        SideFusion_Fcn_B.R33_c = 1.0;

        /* Outputs for Function Call SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_RR' */
        /* Abs: '<S114>/Abs' */
        SideFusion_Fcn_B.Abs = fabs(SideFusion_Fcn_B.P11_g);

        /* RelationalOperator: '<S130>/Compare' incorporates:
         *  Constant: '<S130>/Constant'
         */
        SideFusion_Fcn_B.Compare = (uint8_T)(SideFusion_Fcn_B.Abs >=
          SideFusion_Fcn_P.CompareToConstant_const_d4);

        /* Switch: '<S114>/Switch' incorporates:
         *  Constant: '<S114>/Constant'
         */
        if (SideFusion_Fcn_B.Compare >= SideFusion_Fcn_P.Switch_Threshold_de) {
          SideFusion_Fcn_B.Switch = SideFusion_Fcn_B.P11_g;
        } else {
          SideFusion_Fcn_B.Switch = SideFusion_Fcn_P.Constant_Value_ivz;
        }

        /* End of Switch: '<S114>/Switch' */

        /* SignalConversion: '<S119>/TmpSignal ConversionAtMath Function2Inport1' incorporates:
         *  Constant: '<S21>/Constant'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFuncti[0] =
          SideFusion_Fcn_B.Switch;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFuncti[1] =
          SideFusion_Fcn_B.P13_c;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFuncti[2] =
          SideFusion_Fcn_P.Constant_Value_ib;

        /* Math: '<S119>/Math Function2' */
        SideFusion_Fcn_B.MathFunction2[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFuncti[0];
        SideFusion_Fcn_B.MathFunction2[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFuncti[1];
        SideFusion_Fcn_B.MathFunction2[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFuncti[2];

        /* Gain: '<S119>/Gain' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain[i] = SideFusion_Fcn_P.Gain_Gain_l[i] *
            SideFusion_Fcn_B.MathFunction2[0];
          SideFusion_Fcn_B.Gain[i + 3] = SideFusion_Fcn_P.Gain_Gain_l[i] *
            SideFusion_Fcn_B.MathFunction2[1];
          SideFusion_Fcn_B.Gain[i + 6] = SideFusion_Fcn_P.Gain_Gain_l[i] *
            SideFusion_Fcn_B.MathFunction2[2];
        }

        /* End of Gain: '<S119>/Gain' */

        /* Abs: '<S115>/Abs' */
        SideFusion_Fcn_B.Abs_k = fabs(SideFusion_Fcn_B.P31_h);

        /* RelationalOperator: '<S131>/Compare' incorporates:
         *  Constant: '<S131>/Constant'
         */
        SideFusion_Fcn_B.Compare_a = (uint8_T)(SideFusion_Fcn_B.Abs_k >=
          SideFusion_Fcn_P.CompareToConstant_const_jo);

        /* Switch: '<S115>/Switch' incorporates:
         *  Constant: '<S115>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_a >= SideFusion_Fcn_P.Switch_Threshold_iq)
        {
          SideFusion_Fcn_B.Switch_b = SideFusion_Fcn_B.P31_h;
        } else {
          SideFusion_Fcn_B.Switch_b = SideFusion_Fcn_P.Constant_Value_hn;
        }

        /* End of Switch: '<S115>/Switch' */

        /* Abs: '<S116>/Abs' */
        SideFusion_Fcn_B.Abs_o = fabs(SideFusion_Fcn_B.P33_a1);

        /* RelationalOperator: '<S132>/Compare' incorporates:
         *  Constant: '<S132>/Constant'
         */
        SideFusion_Fcn_B.Compare_l = (uint8_T)(SideFusion_Fcn_B.Abs_o >=
          SideFusion_Fcn_P.CompareToConstant_const_nu);

        /* Switch: '<S116>/Switch' incorporates:
         *  Constant: '<S116>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_l >= SideFusion_Fcn_P.Switch_Threshold_dhc)
        {
          SideFusion_Fcn_B.Switch_o = SideFusion_Fcn_B.P33_a1;
        } else {
          SideFusion_Fcn_B.Switch_o = SideFusion_Fcn_P.Constant_Value_mr;
        }

        /* End of Switch: '<S116>/Switch' */

        /* SignalConversion: '<S119>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
         *  Constant: '<S21>/Constant1'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_f[0] =
          SideFusion_Fcn_B.Switch_b;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_f[1] =
          SideFusion_Fcn_B.Switch_o;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_f[2] =
          SideFusion_Fcn_P.Constant1_Value_o;

        /* Math: '<S119>/Math Function1' */
        SideFusion_Fcn_B.MathFunction1[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_f[0];
        SideFusion_Fcn_B.MathFunction1[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_f[1];
        SideFusion_Fcn_B.MathFunction1[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_f[2];

        /* Gain: '<S119>/Gain1' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain1[i] = SideFusion_Fcn_P.Gain1_Gain_o[i] *
            SideFusion_Fcn_B.MathFunction1[0];
          SideFusion_Fcn_B.Gain1[i + 3] = SideFusion_Fcn_P.Gain1_Gain_o[i] *
            SideFusion_Fcn_B.MathFunction1[1];
          SideFusion_Fcn_B.Gain1[i + 6] = SideFusion_Fcn_P.Gain1_Gain_o[i] *
            SideFusion_Fcn_B.MathFunction1[2];
        }

        /* End of Gain: '<S119>/Gain1' */

        /* SignalConversion: '<S119>/TmpSignal ConversionAtMath Function4Inport1' incorporates:
         *  Constant: '<S21>/Constant2'
         *  Constant: '<S21>/Constant3'
         *  Constant: '<S21>/Constant4'
         */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fj[0] =
          SideFusion_Fcn_P.Constant2_Value_b;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fj[1] =
          SideFusion_Fcn_P.Constant3_Value_b;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fj[2] =
          SideFusion_Fcn_P.Constant4_Value_l;

        /* Math: '<S119>/Math Function4' */
        SideFusion_Fcn_B.MathFunction4[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fj[0];
        SideFusion_Fcn_B.MathFunction4[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fj[1];
        SideFusion_Fcn_B.MathFunction4[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fj[2];

        /* Gain: '<S119>/Gain2' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain2[i] = SideFusion_Fcn_P.Gain2_Gain_f[i] *
            SideFusion_Fcn_B.MathFunction4[0];
          SideFusion_Fcn_B.Gain2[i + 3] = SideFusion_Fcn_P.Gain2_Gain_f[i] *
            SideFusion_Fcn_B.MathFunction4[1];
          SideFusion_Fcn_B.Gain2[i + 6] = SideFusion_Fcn_P.Gain2_Gain_f[i] *
            SideFusion_Fcn_B.MathFunction4[2];
        }

        /* End of Gain: '<S119>/Gain2' */

        /* Sum: '<S119>/Add' */
        for (i = 0; i < 9; i++) {
          SideFusion_Fcn_B.Add[i] = (SideFusion_Fcn_B.Gain[i] +
            SideFusion_Fcn_B.Gain1[i]) + SideFusion_Fcn_B.Gain2[i];
        }

        /* End of Sum: '<S119>/Add' */

        /* Abs: '<S117>/Abs' */
        SideFusion_Fcn_B.Abs_f = fabs(SideFusion_Fcn_B.R11_c);

        /* RelationalOperator: '<S133>/Compare' incorporates:
         *  Constant: '<S133>/Constant'
         */
        SideFusion_Fcn_B.Compare_ly = (uint8_T)(SideFusion_Fcn_B.Abs_f >=
          SideFusion_Fcn_P.CompareToConstant_const_mx);

        /* Switch: '<S117>/Switch' incorporates:
         *  Constant: '<S117>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_ly >= SideFusion_Fcn_P.Switch_Threshold_l)
        {
          SideFusion_Fcn_B.Switch_bp = SideFusion_Fcn_B.R11_c;
        } else {
          SideFusion_Fcn_B.Switch_bp = SideFusion_Fcn_P.Constant_Value_bu;
        }

        /* End of Switch: '<S117>/Switch' */

        /* SignalConversion: '<S120>/TmpSignal ConversionAtMath Function3Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_e[0] =
          SideFusion_Fcn_B.Switch_bp;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_e[1] =
          SideFusion_Fcn_B.R12_l;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_e[2] =
          SideFusion_Fcn_B.R13_f2;

        /* Math: '<S120>/Math Function3' */
        SideFusion_Fcn_B.MathFunction3[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_e[0];
        SideFusion_Fcn_B.MathFunction3[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_e[1];
        SideFusion_Fcn_B.MathFunction3[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_e[2];

        /* Gain: '<S120>/Gain3' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain3[i] = SideFusion_Fcn_P.Gain3_Gain_b1[i] *
            SideFusion_Fcn_B.MathFunction3[0];
          SideFusion_Fcn_B.Gain3[i + 3] = SideFusion_Fcn_P.Gain3_Gain_b1[i] *
            SideFusion_Fcn_B.MathFunction3[1];
          SideFusion_Fcn_B.Gain3[i + 6] = SideFusion_Fcn_P.Gain3_Gain_b1[i] *
            SideFusion_Fcn_B.MathFunction3[2];
        }

        /* End of Gain: '<S120>/Gain3' */

        /* Abs: '<S118>/Abs' */
        SideFusion_Fcn_B.Abs_fa = fabs(SideFusion_Fcn_B.R22_n);

        /* RelationalOperator: '<S134>/Compare' incorporates:
         *  Constant: '<S134>/Constant'
         */
        SideFusion_Fcn_B.Compare_lc = (uint8_T)(SideFusion_Fcn_B.Abs_fa >=
          SideFusion_Fcn_P.CompareToConstant_const_o);

        /* Switch: '<S118>/Switch' incorporates:
         *  Constant: '<S118>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_lc >= SideFusion_Fcn_P.Switch_Threshold_o)
        {
          SideFusion_Fcn_B.Switch_p = SideFusion_Fcn_B.R22_n;
        } else {
          SideFusion_Fcn_B.Switch_p = SideFusion_Fcn_P.Constant_Value_mp;
        }

        /* End of Switch: '<S118>/Switch' */

        /* SignalConversion: '<S120>/TmpSignal ConversionAtMath Function1Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fz[0] =
          SideFusion_Fcn_B.R21_f;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fz[1] =
          SideFusion_Fcn_B.Switch_p;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fz[2] =
          SideFusion_Fcn_B.R23_m;

        /* Math: '<S120>/Math Function1' */
        SideFusion_Fcn_B.MathFunction1_p[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fz[0];
        SideFusion_Fcn_B.MathFunction1_p[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fz[1];
        SideFusion_Fcn_B.MathFunction1_p[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFun_fz[2];

        /* Gain: '<S120>/Gain1' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain1_a[i] = SideFusion_Fcn_P.Gain1_Gain_n1[i] *
            SideFusion_Fcn_B.MathFunction1_p[0];
          SideFusion_Fcn_B.Gain1_a[i + 3] = SideFusion_Fcn_P.Gain1_Gain_n1[i] *
            SideFusion_Fcn_B.MathFunction1_p[1];
          SideFusion_Fcn_B.Gain1_a[i + 6] = SideFusion_Fcn_P.Gain1_Gain_n1[i] *
            SideFusion_Fcn_B.MathFunction1_p[2];
        }

        /* End of Gain: '<S120>/Gain1' */

        /* SignalConversion: '<S120>/TmpSignal ConversionAtMath Function2Inport1' */
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_p[0] =
          SideFusion_Fcn_B.R31_n;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_p[1] =
          SideFusion_Fcn_B.R32_e;
        SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_p[2] =
          SideFusion_Fcn_B.R33_c;

        /* Math: '<S120>/Math Function2' */
        SideFusion_Fcn_B.MathFunction2_a[0] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_p[0];
        SideFusion_Fcn_B.MathFunction2_a[1] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_p[1];
        SideFusion_Fcn_B.MathFunction2_a[2] =
          SideFusion_Fcn_B.TmpSignalConversionAtMathFunc_p[2];

        /* Gain: '<S120>/Gain2' */
        for (i = 0; i < 3; i++) {
          SideFusion_Fcn_B.Gain2_m[i] = SideFusion_Fcn_P.Gain2_Gain_a2[i] *
            SideFusion_Fcn_B.MathFunction2_a[0];
          SideFusion_Fcn_B.Gain2_m[i + 3] = SideFusion_Fcn_P.Gain2_Gain_a2[i] *
            SideFusion_Fcn_B.MathFunction2_a[1];
          SideFusion_Fcn_B.Gain2_m[i + 6] = SideFusion_Fcn_P.Gain2_Gain_a2[i] *
            SideFusion_Fcn_B.MathFunction2_a[2];
        }

        for (i = 0; i < 9; i++) {
          /* Sum: '<S120>/Add' */
          SideFusion_Fcn_B.Add_f[i] = (SideFusion_Fcn_B.Gain3[i] +
            SideFusion_Fcn_B.Gain1_a[i]) + SideFusion_Fcn_B.Gain2_m[i];

          /* Sum: '<S21>/Subtract1' */
          SideFusion_Fcn_B.Stj3x3[i] = SideFusion_Fcn_B.Add[i] +
            SideFusion_Fcn_B.Add_f[i];

          /* Product: '<S121>/Product1' */
          tmp[i] = SideFusion_Fcn_B.Stj3x3[i];
        }

        /* End of Gain: '<S120>/Gain2' */

        /* Product: '<S121>/Product1' incorporates:
         *  Constant: '<S121>/Constant'
         */
        unnamed_idx_0 = SideFusion_Fcn_P.Constant_Value_ltu[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant_Value_ltu[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant_Value_ltu[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product1[0] = v1[0];
        SideFusion_Fcn_B.Product1[1] = v1[1];
        SideFusion_Fcn_B.Product1[2] = v1[2];

        /* Product: '<S121>/Product2' incorporates:
         *  Constant: '<S121>/Constant1'
         */
        memcpy(&tmp[0], &SideFusion_Fcn_B.Stj3x3[0], 9U * sizeof(real_T));
        unnamed_idx_0 = SideFusion_Fcn_P.Constant1_Value_f[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant1_Value_f[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant1_Value_f[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product2[0] = v1[0];
        SideFusion_Fcn_B.Product2[1] = v1[1];
        SideFusion_Fcn_B.Product2[2] = v1[2];

        /* End of Product: '<S121>/Product2' */

        /* Product: '<S121>/Product3' incorporates:
         *  Constant: '<S121>/Constant2'
         */
        memcpy(&tmp[0], &SideFusion_Fcn_B.Stj3x3[0], 9U * sizeof(real_T));
        unnamed_idx_0 = SideFusion_Fcn_P.Constant2_Value_g[0];
        unnamed_idx_1 = SideFusion_Fcn_P.Constant2_Value_g[1];
        unnamed_idx_2 = SideFusion_Fcn_P.Constant2_Value_g[2];
        for (i = 0; i < 3; i++) {
          v1_0 = tmp[i] * unnamed_idx_0;
          v1_0 += tmp[i + 3] * unnamed_idx_1;
          v1_0 += tmp[i + 6] * unnamed_idx_2;
          v1[i] = v1_0;
        }

        SideFusion_Fcn_B.Product3[0] = v1[0];
        SideFusion_Fcn_B.Product3[1] = v1[1];
        SideFusion_Fcn_B.Product3[2] = v1[2];

        /* End of Product: '<S121>/Product3' */

        /* Product: '<S112>/Divide1' */
        SideFusion_Fcn_B.Divide1 = SideFusion_Fcn_B.Product1[0] *
          SideFusion_Fcn_B.Product2[1] * SideFusion_Fcn_B.Product3[2];

        /* Product: '<S112>/Divide2' */
        SideFusion_Fcn_B.Divide2 = SideFusion_Fcn_B.Product1[1] *
          SideFusion_Fcn_B.Product2[0] * SideFusion_Fcn_B.Product3[2];

        /* Sum: '<S112>/Subtract3' */
        SideFusion_Fcn_B.Subtract3 = SideFusion_Fcn_B.Divide1 -
          SideFusion_Fcn_B.Divide2;

        /* Product: '<S112>/Divide3' incorporates:
         *  Constant: '<S112>/Constant'
         */
        SideFusion_Fcn_B.Divide3 = SideFusion_Fcn_B.Subtract3 *
          SideFusion_Fcn_P.Constant_Value_c4;

        /* Math: '<S112>/Sqrt1'
         *
         * About '<S112>/Sqrt1':
         *  Operator: sqrt
         */
        unnamed_idx_0 = SideFusion_Fcn_B.Divide3;
        if (unnamed_idx_0 < 0.0) {
          SideFusion_Fcn_B.Sqrt1 = -sqrt(fabs(unnamed_idx_0));
        } else {
          SideFusion_Fcn_B.Sqrt1 = sqrt(unnamed_idx_0);
        }

        /* End of Math: '<S112>/Sqrt1' */

        /* Gain: '<S127>/Gain1' incorporates:
         *  Constant: '<S113>/Constant5'
         */
        SideFusion_Fcn_B.Gain1_o = SideFusion_Fcn_P.Gain1_Gain_gx *
          SideFusion_Fcn_P.Constant5_Value_c;

        /* Sum: '<S127>/Add' */
        SideFusion_Fcn_B.Add_j = SideFusion_Fcn_B.yt_fi +
          SideFusion_Fcn_B.Gain1_o;

        /* Trigonometry: '<S127>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction = sin
          (SideFusion_Fcn_B.InstallAng_c);

        /* Product: '<S127>/Product' */
        SideFusion_Fcn_B.Product = SideFusion_Fcn_B.Add_j *
          SideFusion_Fcn_B.TrigonometricFunction;

        /* Sum: '<S127>/Add2' incorporates:
         *  Constant: '<S113>/Constant6'
         */
        SideFusion_Fcn_B.Add2 = SideFusion_Fcn_P.Constant6_Value_d +
          SideFusion_Fcn_B.xt_oq;

        /* Trigonometry: '<S127>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1 = cos
          (SideFusion_Fcn_B.InstallAng_c);

        /* Product: '<S127>/Product1' */
        SideFusion_Fcn_B.Product1_o = SideFusion_Fcn_B.Add2 *
          SideFusion_Fcn_B.TrigonometricFunction1;

        /* Sum: '<S127>/Add1' */
        SideFusion_Fcn_B.Add1 = SideFusion_Fcn_B.Product +
          SideFusion_Fcn_B.Product1_o;

        /* Gain: '<S128>/Gain1' incorporates:
         *  Constant: '<S113>/Constant5'
         */
        SideFusion_Fcn_B.Gain1_f = SideFusion_Fcn_P.Gain1_Gain_d *
          SideFusion_Fcn_P.Constant5_Value_c;

        /* Sum: '<S128>/Add' */
        SideFusion_Fcn_B.Add_e = SideFusion_Fcn_B.yt_fi +
          SideFusion_Fcn_B.Gain1_f;

        /* Trigonometry: '<S128>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_a = cos
          (SideFusion_Fcn_B.InstallAng_c);

        /* Product: '<S128>/Product' */
        SideFusion_Fcn_B.Product_h = SideFusion_Fcn_B.Add_e *
          SideFusion_Fcn_B.TrigonometricFunction_a;

        /* Sum: '<S128>/Add2' incorporates:
         *  Constant: '<S113>/Constant6'
         */
        SideFusion_Fcn_B.Add2_f = SideFusion_Fcn_P.Constant6_Value_d +
          SideFusion_Fcn_B.xt_oq;

        /* Trigonometry: '<S128>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_b = sin
          (SideFusion_Fcn_B.InstallAng_c);

        /* Product: '<S128>/Product1' */
        SideFusion_Fcn_B.Product1_p = SideFusion_Fcn_B.Add2_f *
          SideFusion_Fcn_B.TrigonometricFunction1_b;

        /* Sum: '<S128>/Add1' */
        SideFusion_Fcn_B.Add1_m = SideFusion_Fcn_B.Product1_p -
          SideFusion_Fcn_B.Product_h;

        /* Abs: '<S126>/Abs' */
        SideFusion_Fcn_B.Abs_d = fabs(SideFusion_Fcn_B.Add1_m);

        /* RelationalOperator: '<S129>/Compare' incorporates:
         *  Constant: '<S129>/Constant'
         */
        SideFusion_Fcn_B.Compare_c = (uint8_T)(SideFusion_Fcn_B.Abs_d >=
          SideFusion_Fcn_P.CompareToConstant_const_ds);

        /* Switch: '<S126>/Switch' incorporates:
         *  Constant: '<S126>/Constant'
         */
        if (SideFusion_Fcn_B.Compare_c >= SideFusion_Fcn_P.Switch_Threshold_ij)
        {
          SideFusion_Fcn_B.Switch_n = SideFusion_Fcn_B.Add1_m;
        } else {
          SideFusion_Fcn_B.Switch_n = SideFusion_Fcn_P.Constant_Value_ng;
        }

        /* End of Switch: '<S126>/Switch' */

        /* Product: '<S122>/Divide' */
        SideFusion_Fcn_B.Divide = SideFusion_Fcn_B.Add1 /
          SideFusion_Fcn_B.Switch_n;

        /* Trigonometry: '<S122>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_h = atan(SideFusion_Fcn_B.Divide);

        /* Trigonometry: '<S125>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_i = cos
          (SideFusion_Fcn_B.InstallAng_c);

        /* Product: '<S125>/Product' */
        SideFusion_Fcn_B.Product_o = SideFusion_Fcn_B.vyt_f *
          SideFusion_Fcn_B.TrigonometricFunction_i;

        /* Trigonometry: '<S125>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_h = sin
          (SideFusion_Fcn_B.InstallAng_c);

        /* Product: '<S125>/Product1' */
        SideFusion_Fcn_B.Product1_d = SideFusion_Fcn_B.vxt_bp *
          SideFusion_Fcn_B.TrigonometricFunction1_h;

        /* Sum: '<S125>/Add1' */
        SideFusion_Fcn_B.Add1_e = SideFusion_Fcn_B.Product1_d -
          SideFusion_Fcn_B.Product_o;

        /* Trigonometry: '<S123>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_f = cos
          (SideFusion_Fcn_B.TrigonometricFunction_h);

        /* Product: '<S123>/Product' */
        SideFusion_Fcn_B.Product_m = SideFusion_Fcn_B.Add1_e *
          SideFusion_Fcn_B.TrigonometricFunction_f;

        /* Trigonometry: '<S124>/Trigonometric Function' */
        SideFusion_Fcn_B.TrigonometricFunction_it = sin
          (SideFusion_Fcn_B.InstallAng_c);

        /* Product: '<S124>/Product' */
        SideFusion_Fcn_B.Product_i = SideFusion_Fcn_B.vyt_f *
          SideFusion_Fcn_B.TrigonometricFunction_it;

        /* Trigonometry: '<S124>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_m = cos
          (SideFusion_Fcn_B.InstallAng_c);

        /* Product: '<S124>/Product1' */
        SideFusion_Fcn_B.Product1_e = SideFusion_Fcn_B.vxt_bp *
          SideFusion_Fcn_B.TrigonometricFunction1_m;

        /* Sum: '<S124>/Add1' */
        SideFusion_Fcn_B.Add1_a = SideFusion_Fcn_B.Product_i +
          SideFusion_Fcn_B.Product1_e;

        /* Trigonometry: '<S123>/Trigonometric Function1' */
        SideFusion_Fcn_B.TrigonometricFunction1_f = sin
          (SideFusion_Fcn_B.TrigonometricFunction_h);

        /* Product: '<S123>/Product1' */
        SideFusion_Fcn_B.Product1_i = SideFusion_Fcn_B.Add1_a *
          SideFusion_Fcn_B.TrigonometricFunction1_f;

        /* Sum: '<S123>/Add1' */
        SideFusion_Fcn_B.Add1_o = SideFusion_Fcn_B.Product_m +
          SideFusion_Fcn_B.Product1_i;

        /* Sum: '<S21>/Subtract2' */
        SideFusion_Fcn_B.Vtj3x1[0] = SideFusion_Fcn_B.xt_oq -
          SideFusion_Fcn_B.xj_c;
        SideFusion_Fcn_B.Vtj3x1[1] = SideFusion_Fcn_B.yt_fi -
          SideFusion_Fcn_B.yj_k;
        SideFusion_Fcn_B.Vtj3x1[2] = SideFusion_Fcn_B.Add1_o -
          SideFusion_Fcn_B.rangerate_h;

        /* Math: '<S21>/Math Function2' */
        SideFusion_Fcn_B.Vtj1x3[0] = SideFusion_Fcn_B.Vtj3x1[0];
        SideFusion_Fcn_B.Vtj1x3[1] = SideFusion_Fcn_B.Vtj3x1[1];
        SideFusion_Fcn_B.Vtj1x3[2] = SideFusion_Fcn_B.Vtj3x1[2];

        /* Product: '<S21>/Divide' */
        rt_mldivide_U1d3x3_U2d_9O8lG8ax(SideFusion_Fcn_B.Stj3x3,
          SideFusion_Fcn_B.Vtj3x1, v1);
        unnamed_idx_0 = SideFusion_Fcn_B.Vtj1x3[0];
        unnamed_idx_1 = SideFusion_Fcn_B.Vtj1x3[1];
        unnamed_idx_2 = SideFusion_Fcn_B.Vtj1x3[2];
        unnamed_idx_0 *= v1[0];
        unnamed_idx_0 += unnamed_idx_1 * v1[1];
        unnamed_idx_0 += unnamed_idx_2 * v1[2];
        SideFusion_Fcn_B.Divide_e = unnamed_idx_0;

        /* Gain: '<S21>/Gain' */
        SideFusion_Fcn_B.Gain_l = SideFusion_Fcn_P.Gain_Gain_n *
          SideFusion_Fcn_B.Divide_e;

        /* Math: '<S21>/Math Function1'
         *
         * About '<S21>/Math Function1':
         *  Operator: exp
         */
        SideFusion_Fcn_B.MathFunction1_c = exp(SideFusion_Fcn_B.Gain_l);

        /* Product: '<S21>/Divide1' */
        SideFusion_Fcn_B.Gtj = SideFusion_Fcn_B.MathFunction1_c /
          SideFusion_Fcn_B.Sqrt1;

        /* End of Outputs for SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_RR' */
        SideFusion_Fcn_DW.Gtj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
          SideFusion_Fcn_DW.j] = SideFusion_Fcn_B.Gtj;
        SideFusion_Fcn_DW.dtj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
          SideFusion_Fcn_DW.j] = SideFusion_Fcn_B.Divide_e;

        /* Transition: '<S16>:3752' */
        SideFusion_Fcn_DW.j++;
      }

      /* Transition: '<S16>:3748' */
      /* Transition: '<S16>:3760' */
      SideFusion_Fcn_DW.t++;
      SideFusion_Fcn_DW.j = 0.0;
    }

    /* Transition: '<S16>:3758' */
    /* Transition: '<S16>:3744' */
  } else {
    /* Transition: '<S16>:3747' */
  }

  /* Transition: '<S16>:3788' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Gsum_Cal(void)
{
  /* Graphical Function 'Gsum_Cal': '<S16>:432' */
  /* Transition: '<S16>:439' */
  while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
    /* Transition: '<S16>:448' */
    while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
      /* Transition: '<S16>:450' */
      /* Transition: '<S16>:455' */
      SideFusion_Fcn_DW.Gtsum[(int32_T)SideFusion_Fcn_DW.t] +=
        SideFusion_Fcn_DW.Gtj[40 * (int32_T)SideFusion_Fcn_DW.j + (int32_T)
        SideFusion_Fcn_DW.t];

      /* Transition: '<S16>:456' */
      SideFusion_Fcn_DW.j++;
    }

    /* Transition: '<S16>:452' */
    /* Transition: '<S16>:453' */
    SideFusion_Fcn_DW.t++;
    SideFusion_Fcn_DW.j = 0.0;
  }

  /* Transition: '<S16>:457' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
    /* Transition: '<S16>:463' */
    while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
      /* Transition: '<S16>:458' */
      /* Transition: '<S16>:459' */
      SideFusion_Fcn_DW.Gsumj[(int32_T)SideFusion_Fcn_DW.j] +=
        SideFusion_Fcn_DW.Gtj[40 * (int32_T)SideFusion_Fcn_DW.j + (int32_T)
        SideFusion_Fcn_DW.t];

      /* Transition: '<S16>:461' */
      SideFusion_Fcn_DW.t++;
    }

    /* Transition: '<S16>:460' */
    /* Transition: '<S16>:462' */
    SideFusion_Fcn_DW.j++;
    SideFusion_Fcn_DW.t = 0.0;
  }

  /* Transition: '<S16>:469' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ptj_Cal(void)
{
  /* Graphical Function 'Ptj_Cal': '<S16>:470' */
  /* Transition: '<S16>:511' */
  while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
    /* Transition: '<S16>:509' */
    while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
      /* Transition: '<S16>:508' */
      /* Transition: '<S16>:507' */
      SideFusion_Fcn_DW.Ptj[(int32_T)SideFusion_Fcn_DW.t + 40 * (int32_T)
        SideFusion_Fcn_DW.j] = SideFusion_Fcn_DW.Gtj[40 * (int32_T)
        SideFusion_Fcn_DW.j + (int32_T)SideFusion_Fcn_DW.t] /
        ((SideFusion_Fcn_DW.Gtsum[(int32_T)SideFusion_Fcn_DW.t] +
          SideFusion_Fcn_DW.Gsumj[(int32_T)SideFusion_Fcn_DW.j]) -
         SideFusion_Fcn_DW.Gtj[40 * (int32_T)SideFusion_Fcn_DW.j + (int32_T)
         SideFusion_Fcn_DW.t]);

      /* calculate track t with all tracklet possible */
      /* Transition: '<S16>:503' */
      SideFusion_Fcn_DW.j++;
    }

    /* Transition: '<S16>:504' */
    /* Transition: '<S16>:501' */
    SideFusion_Fcn_DW.t++;
    SideFusion_Fcn_DW.j = 0.0;
  }

  /* Transition: '<S16>:513' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;

  /* Transition: '<S16>:519' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Pt0_Cal(void)
{
  /* Graphical Function 'Pt0_Cal': '<S16>:522' */
  /* Transition: '<S16>:530' */
  while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
    /* Transition: '<S16>:531' */
    while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
      /* Transition: '<S16>:532' */
      /* Transition: '<S16>:537' */
      SideFusion_Fcn_DW.Ptsum[(int32_T)SideFusion_Fcn_DW.t] +=
        SideFusion_Fcn_DW.Ptj[40 * (int32_T)SideFusion_Fcn_DW.j + (int32_T)
        SideFusion_Fcn_DW.t];

      /* calculate sum of  track t with all tracklet possible */
      /* Transition: '<S16>:534' */
      SideFusion_Fcn_DW.j++;
    }

    /* Transition: '<S16>:536' */
    /* Transition: '<S16>:533' */
    SideFusion_Fcn_DW.t++;
    SideFusion_Fcn_DW.j = 0.0;
  }

  /* Transition: '<S16>:535' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
    /* Transition: '<S16>:548' */
    while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
      /* Transition: '<S16>:541' */
      /* Transition: '<S16>:542' */
      SideFusion_Fcn_DW.Psumj[(int32_T)SideFusion_Fcn_DW.t] +=
        SideFusion_Fcn_DW.Ptj[40 * (int32_T)SideFusion_Fcn_DW.j + (int32_T)
        SideFusion_Fcn_DW.t];

      /* calculate sum of  tracklet j with all tracker possible */
      /* Transition: '<S16>:547' */
      SideFusion_Fcn_DW.t++;
    }

    /* Transition: '<S16>:543' */
    /* Transition: '<S16>:549' */
    SideFusion_Fcn_DW.j++;
    SideFusion_Fcn_DW.t = 0.0;
  }

  /* Transition: '<S16>:552' */
  SideFusion_Fcn_DW.t = 0.0;
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Possible_Cal(void)
{
  /* Graphical Function 'Possible_Cal': '<S16>:388' */
  /* Transition: '<S16>:426' */
  /* Transition: '<S16>:429' */
  SideFusion_Fcn_Gtj_Cal();
  SideFusion_Fcn_Gsum_Cal();
  SideFusion_Fcn_Ptj_Cal();
  SideFusion_Fcn_Pt0_Cal();

  /* Transition: '<S16>:516' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Data_Gen(void)
{
  real_T u0;

  /* Graphical Function 'Data_Gen': '<S16>:647' */
  /* Transition: '<S16>:652' */
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
    /* Transition: '<S16>:654' */
    /* Transition: '<S16>:3809' */
    /* Simulink Function 'Angle_Detect': '<S16>:3810' */
    SideFusion_Fcn_B.xt = SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.yt = SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.xc = SideFusion_Fcn_B.Measure_Data[40 + (int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.yc = SideFusion_Fcn_B.Measure_Data[80 + (int32_T)
      SideFusion_Fcn_DW.j];

    /* Outputs for Function Call SubSystem: '<S16>/Tracker_Update.Tracker_Filter.Measurement_Select.Data_Gen.Angle_Detect' */
    /* Product: '<S153>/Product' */
    SideFusion_Fcn_B.Product_e = SideFusion_Fcn_B.xt * SideFusion_Fcn_B.xc;

    /* Product: '<S153>/Product1' */
    SideFusion_Fcn_B.Product1_ik = SideFusion_Fcn_B.yt * SideFusion_Fcn_B.yc;

    /* Sum: '<S153>/Add' */
    SideFusion_Fcn_B.Add_in = SideFusion_Fcn_B.Product_e +
      SideFusion_Fcn_B.Product1_ik;

    /* Product: '<S153>/Product2' */
    SideFusion_Fcn_B.Product2_n = SideFusion_Fcn_B.xt * SideFusion_Fcn_B.xt;

    /* Product: '<S153>/Product3' */
    SideFusion_Fcn_B.Product3_j = SideFusion_Fcn_B.yt * SideFusion_Fcn_B.yt;

    /* Sum: '<S153>/Add1' */
    SideFusion_Fcn_B.Add1_oq = SideFusion_Fcn_B.Product2_n +
      SideFusion_Fcn_B.Product3_j;

    /* Sqrt: '<S153>/Sqrt' */
    SideFusion_Fcn_B.Sqrt = sqrt(SideFusion_Fcn_B.Add1_oq);

    /* Product: '<S153>/Product4' */
    SideFusion_Fcn_B.Product4_d = SideFusion_Fcn_B.xc * SideFusion_Fcn_B.xc;

    /* Product: '<S153>/Product5' */
    SideFusion_Fcn_B.Product5 = SideFusion_Fcn_B.yc * SideFusion_Fcn_B.yc;

    /* Sum: '<S153>/Add2' */
    SideFusion_Fcn_B.Add2_p = SideFusion_Fcn_B.Product4_d +
      SideFusion_Fcn_B.Product5;

    /* Sqrt: '<S153>/Sqrt1' */
    SideFusion_Fcn_B.Sqrt1_f = sqrt(SideFusion_Fcn_B.Add2_p);

    /* Product: '<S153>/Product6' */
    SideFusion_Fcn_B.Product6 = SideFusion_Fcn_B.Sqrt * SideFusion_Fcn_B.Sqrt1_f;

    /* Product: '<S153>/Divide' */
    SideFusion_Fcn_B.Divide_p2 = SideFusion_Fcn_B.Add_in /
      SideFusion_Fcn_B.Product6;

    /* Trigonometry: '<S153>/Trigonometric Function' */
    u0 = SideFusion_Fcn_B.Divide_p2;
    if (u0 > 1.0) {
      u0 = 1.0;
    } else {
      if (u0 < -1.0) {
        u0 = -1.0;
      }
    }

    SideFusion_Fcn_B.TrigonometricFunction_mx = acos(u0);

    /* End of Trigonometry: '<S153>/Trigonometric Function' */

    /* Gain: '<S153>/rad->deg' */
    SideFusion_Fcn_B.raddeg = SideFusion_Fcn_P.raddeg_Gain *
      SideFusion_Fcn_B.TrigonometricFunction_mx;

    /* Product: '<S154>/Product2' */
    SideFusion_Fcn_B.Product2_i0 = SideFusion_Fcn_B.xt * SideFusion_Fcn_B.xt;

    /* Product: '<S154>/Product3' */
    SideFusion_Fcn_B.Product3_c = SideFusion_Fcn_B.yt * SideFusion_Fcn_B.yt;

    /* Sum: '<S154>/Add1' */
    SideFusion_Fcn_B.Add1_n = SideFusion_Fcn_B.Product2_i0 +
      SideFusion_Fcn_B.Product3_c;

    /* Sqrt: '<S154>/Sqrt' */
    SideFusion_Fcn_B.Sqrt_a = sqrt(SideFusion_Fcn_B.Add1_n);

    /* Lookup_n-D: '<S154>/Range_AngleTable' */
    SideFusion_Fcn_B.Range_AngleTable = look1_binlcapw(SideFusion_Fcn_B.Sqrt_a,
      SideFusion_Fcn_P.Range_AngleTable_bp01Data,
      SideFusion_Fcn_P.Range_AngleTable_tableData, 5U);

    /* Sum: '<S24>/Add1' */
    SideFusion_Fcn_B.Add1_c = SideFusion_Fcn_B.Range_AngleTable -
      SideFusion_Fcn_B.raddeg;

    /* RelationalOperator: '<S152>/Compare' incorporates:
     *  Constant: '<S152>/Constant'
     */
    SideFusion_Fcn_B.Compare_d2 = (uint8_T)(SideFusion_Fcn_B.Add1_c >=
      SideFusion_Fcn_P.Constant_Value);

    /* End of Outputs for SubSystem: '<S16>/Tracker_Update.Tracker_Filter.Measurement_Select.Data_Gen.Angle_Detect' */
    /* Judge weather the angle of tracker and
       tracklet is between a threshod, is flag equal to 1, then take the data to P_Bulb */
    if (SideFusion_Fcn_B.Compare_d2 == 1) {
      /* Transition: '<S16>:3818' */
      /* Transition: '<S16>:657' */
      SideFusion_Fcn_DW.P_Bulb[(int32_T)SideFusion_Fcn_DW.j] =
        SideFusion_Fcn_DW.Ptj[40 * (int32_T)SideFusion_Fcn_DW.j + (int32_T)
        SideFusion_Fcn_DW.t];
      SideFusion_Fcn_DW.P_Bulb[40 + (int32_T)SideFusion_Fcn_DW.j] =
        SideFusion_Fcn_B.Measure_Data[40 + (int32_T)SideFusion_Fcn_DW.j] -
        SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)SideFusion_Fcn_DW.t];
      SideFusion_Fcn_DW.P_Bulb[80 + (int32_T)SideFusion_Fcn_DW.j] =
        SideFusion_Fcn_B.Measure_Data[80 + (int32_T)SideFusion_Fcn_DW.j] -
        SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)SideFusion_Fcn_DW.t];
      SideFusion_Fcn_DW.P_Bulb[120 + (int32_T)SideFusion_Fcn_DW.j] =
        SideFusion_Fcn_DW.j;

      /* Used to define the measurement is used */
      /* Transition: '<S16>:3820' */
    } else {
      /* Transition: '<S16>:3821' */
    }

    /* Transition: '<S16>:660' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:662' */
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Bulb_Sort(void)
{
  real_T P_Bulbtemp0;
  real_T P_Bulbtemp1;
  real_T P_Bulbtemp2;
  real_T P_Bulbtemp3;
  int32_T LoopFlg;

  /* Graphical Function 'Bulb_Sort': '<S16>:637' */
  /* Transition: '<S16>:641' */
  LoopFlg = 1;
  while (LoopFlg == 1) {
    /* Transition: '<S16>:642' */
    if (SideFusion_Fcn_B.Measure_Num > 2.0) {
      /* Transition: '<S16>:2801' */
      /* Transition: '<S16>:2814' */
      LoopFlg = 0;
      while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num - 1.0) {
        /* Transition: '<S16>:2792' */
        if (SideFusion_Fcn_DW.P_Bulb[(int32_T)SideFusion_Fcn_DW.j] >
            SideFusion_Fcn_DW.P_Bulb[(int32_T)(SideFusion_Fcn_DW.j + 1.0)]) {
          /* Transition: '<S16>:2795' */
          /* Transition: '<S16>:2798' */
          P_Bulbtemp0 = SideFusion_Fcn_DW.P_Bulb[(int32_T)SideFusion_Fcn_DW.j];
          P_Bulbtemp1 = SideFusion_Fcn_DW.P_Bulb[40 + (int32_T)
            SideFusion_Fcn_DW.j];
          P_Bulbtemp2 = SideFusion_Fcn_DW.P_Bulb[80 + (int32_T)
            SideFusion_Fcn_DW.j];
          P_Bulbtemp3 = SideFusion_Fcn_DW.P_Bulb[120 + (int32_T)
            SideFusion_Fcn_DW.j];
          SideFusion_Fcn_DW.P_Bulb[(int32_T)SideFusion_Fcn_DW.j] =
            SideFusion_Fcn_DW.P_Bulb[(int32_T)(SideFusion_Fcn_DW.j + 1.0)];
          SideFusion_Fcn_DW.P_Bulb[40 + (int32_T)SideFusion_Fcn_DW.j] =
            SideFusion_Fcn_DW.P_Bulb[(int32_T)(SideFusion_Fcn_DW.j + 1.0) + 40];
          SideFusion_Fcn_DW.P_Bulb[80 + (int32_T)SideFusion_Fcn_DW.j] =
            SideFusion_Fcn_DW.P_Bulb[(int32_T)(SideFusion_Fcn_DW.j + 1.0) + 80];
          SideFusion_Fcn_DW.P_Bulb[120 + (int32_T)SideFusion_Fcn_DW.j] =
            SideFusion_Fcn_DW.P_Bulb[(int32_T)(SideFusion_Fcn_DW.j + 1.0) + 120];
          SideFusion_Fcn_DW.P_Bulb[(int32_T)(SideFusion_Fcn_DW.j + 1.0)] =
            P_Bulbtemp0;
          SideFusion_Fcn_DW.P_Bulb[40 + (int32_T)(SideFusion_Fcn_DW.j + 1.0)] =
            P_Bulbtemp1;
          SideFusion_Fcn_DW.P_Bulb[80 + (int32_T)(SideFusion_Fcn_DW.j + 1.0)] =
            P_Bulbtemp2;
          SideFusion_Fcn_DW.P_Bulb[120 + (int32_T)(SideFusion_Fcn_DW.j + 1.0)] =
            P_Bulbtemp3;
          LoopFlg = 1;

          /* Transition: '<S16>:2799' */
        } else {
          /* Transition: '<S16>:2797' */
        }

        /* Transition: '<S16>:2796' */
        SideFusion_Fcn_DW.j++;
      }

      /* Transition: '<S16>:2803' */
      /* Transition: '<S16>:2811' */
      /* Transition: '<S16>:2810' */
      /* Transition: '<S16>:2819' */
    } else {
      /* Transition: '<S16>:2816' */
      if (SideFusion_Fcn_B.Measure_Num > 1.0) {
        /* Transition: '<S16>:676' */
        if (SideFusion_Fcn_DW.P_Bulb[0] > SideFusion_Fcn_DW.P_Bulb[1]) {
          /* Transition: '<S16>:2806' */
          /* Transition: '<S16>:2812' */
          P_Bulbtemp0 = SideFusion_Fcn_DW.P_Bulb[0];
          P_Bulbtemp1 = SideFusion_Fcn_DW.P_Bulb[40];
          P_Bulbtemp2 = SideFusion_Fcn_DW.P_Bulb[80];
          P_Bulbtemp3 = SideFusion_Fcn_DW.P_Bulb[120];
          SideFusion_Fcn_DW.P_Bulb[0] = SideFusion_Fcn_DW.P_Bulb[1];
          SideFusion_Fcn_DW.P_Bulb[40] = SideFusion_Fcn_DW.P_Bulb[41];
          SideFusion_Fcn_DW.P_Bulb[80] = SideFusion_Fcn_DW.P_Bulb[81];
          SideFusion_Fcn_DW.P_Bulb[120] = SideFusion_Fcn_DW.P_Bulb[121];
          SideFusion_Fcn_DW.P_Bulb[1] = P_Bulbtemp0;
          SideFusion_Fcn_DW.P_Bulb[41] = P_Bulbtemp1;
          SideFusion_Fcn_DW.P_Bulb[81] = P_Bulbtemp2;
          SideFusion_Fcn_DW.P_Bulb[121] = P_Bulbtemp3;
          LoopFlg = 0;

          /* Transition: '<S16>:2810' */
          /* Transition: '<S16>:2819' */
        } else {
          /* Transition: '<S16>:2807' */
          LoopFlg = 0;

          /* Transition: '<S16>:2819' */
        }
      } else {
        /* Transition: '<S16>:2818' */
        LoopFlg = 0;
      }
    }

    /* Transition: '<S16>:677' */
    SideFusion_Fcn_DW.j = 0.0;
  }

  /* Transition: '<S16>:680' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Measure_Select(void)
{
  /* Graphical Function 'Measure_Select': '<S16>:681' */
  /* Transition: '<S16>:3194' */
  SideFusion_Fcn_DW.mk = 0.0;
  if (SideFusion_Fcn_B.Measure_Num > 2.0) {
    /* Transition: '<S16>:2831' */
    while (SideFusion_Fcn_DW.k < 3.0) {
      /* Transition: '<S16>:2827' */
      if ((SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num -
             1.0) - SideFusion_Fcn_DW.k)] > SideFusion__Poss_Threshold_used) &&
          (SideFusion_Fcn_DW.dtj[(int32_T)SideFusion_Fcn_DW.P_Bulb[(int32_T)
           ((SideFusion_Fcn_B.Measure_Num - 1.0) - SideFusion_Fcn_DW.k) + 120] *
           40 + (int32_T)SideFusion_Fcn_DW.t] < SideFusion_Fcn_Gating_Dist_Used))
      {
        /* Transition: '<S16>:2824' */
        /* Transition: '<S16>:2823' */
        SideFusion_Fcn_DW.SelectMea[(int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k)];
        SideFusion_Fcn_DW.SelectMea[3 + (int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k) + 40];
        SideFusion_Fcn_DW.SelectMea[6 + (int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k) + 80];
        SideFusion_Fcn_B.Measure_Data[160 + (int32_T)SideFusion_Fcn_DW.P_Bulb
          [120 + (int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0) -
                           SideFusion_Fcn_DW.k)]] = 1.0;

        /* Means that the measurement is used */
        SideFusion_Fcn_DW.mk++;

        /* Transition: '<S16>:2820' */
      } else {
        /* Transition: '<S16>:2822' */
      }

      /* Transition: '<S16>:2828' */
      SideFusion_Fcn_DW.k++;
    }

    /* Transition: '<S16>:2833' */
    /* Transition: '<S16>:2834' */
  } else {
    /* Transition: '<S16>:716' */
  }

  /* Transition: '<S16>:2836' */
  SideFusion_Fcn_DW.k = 0.0;
  if (SideFusion_Fcn_B.Measure_Num == 2.0) {
    /* Transition: '<S16>:2838' */
    while (SideFusion_Fcn_DW.k < 2.0) {
      /* Transition: '<S16>:2845' */
      if ((SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num -
             1.0) - SideFusion_Fcn_DW.k)] > SideFusion__Poss_Threshold_used) &&
          (SideFusion_Fcn_DW.dtj[(int32_T)SideFusion_Fcn_DW.P_Bulb[(int32_T)
           ((SideFusion_Fcn_B.Measure_Num - 1.0) - SideFusion_Fcn_DW.k) + 120] *
           40 + (int32_T)SideFusion_Fcn_DW.t] < SideFusion_Fcn_Gating_Dist_Used))
      {
        /* Transition: '<S16>:2842' */
        /* Transition: '<S16>:2843' */
        SideFusion_Fcn_DW.SelectMea[(int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k)];
        SideFusion_Fcn_DW.SelectMea[3 + (int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k) + 40];
        SideFusion_Fcn_DW.SelectMea[6 + (int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k) + 80];
        SideFusion_Fcn_B.Measure_Data[160 + (int32_T)SideFusion_Fcn_DW.P_Bulb
          [120 + (int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0) -
                           SideFusion_Fcn_DW.k)]] = 1.0;

        /* Means that the measurement is used */
        SideFusion_Fcn_DW.mk++;

        /* Transition: '<S16>:2840' */
      } else {
        /* Transition: '<S16>:2841' */
      }

      /* Transition: '<S16>:2848' */
      SideFusion_Fcn_DW.k++;
    }

    /* Transition: '<S16>:2851' */
    /* Transition: '<S16>:2855' */
  } else {
    /* Transition: '<S16>:2854' */
  }

  /* Transition: '<S16>:2874' */
  SideFusion_Fcn_DW.k = 0.0;
  if (SideFusion_Fcn_B.Measure_Num == 1.0) {
    /* Transition: '<S16>:2858' */
    while (SideFusion_Fcn_DW.k < 1.0) {
      /* Transition: '<S16>:2857' */
      if ((SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num -
             1.0) - SideFusion_Fcn_DW.k)] > SideFusion__Poss_Threshold_used) &&
          (SideFusion_Fcn_DW.dtj[(int32_T)SideFusion_Fcn_DW.P_Bulb[(int32_T)
           ((SideFusion_Fcn_B.Measure_Num - 1.0) - SideFusion_Fcn_DW.k) + 120] *
           40 + (int32_T)SideFusion_Fcn_DW.t] < SideFusion_Fcn_Gating_Dist_Used))
      {
        /* Transition: '<S16>:2856' */
        /* Transition: '<S16>:2859' */
        SideFusion_Fcn_DW.SelectMea[(int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k)];
        SideFusion_Fcn_DW.SelectMea[3 + (int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k) + 40];
        SideFusion_Fcn_DW.SelectMea[6 + (int32_T)SideFusion_Fcn_DW.k] =
          SideFusion_Fcn_DW.P_Bulb[(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0)
          - SideFusion_Fcn_DW.k) + 80];
        SideFusion_Fcn_B.Measure_Data[160 + (int32_T)SideFusion_Fcn_DW.P_Bulb
          [120 + (int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0) -
                           SideFusion_Fcn_DW.k)]] = 1.0;

        /* Means that the measurement is used */
        SideFusion_Fcn_DW.mk++;

        /* Transition: '<S16>:2862' */
      } else {
        /* Transition: '<S16>:2864' */
      }

      /* Transition: '<S16>:2860' */
      SideFusion_Fcn_DW.k++;
    }

    /* Transition: '<S16>:2863' */
    /* Transition: '<S16>:2869' */
  } else {
    /* Transition: '<S16>:2870' */
  }

  /* Transition: '<S16>:2876' */
  SideFusion_Fcn_DW.k = 0.0;

  /* Transition: '<S16>:3174' */
  if (SideFusion_Fcn_DW.mk == 1.0) {
    /* Transition: '<S16>:3176' */
    /* means that the tracker
       only has one measurement  */
    if (SideFusion_Fcn_DW.OneMeasureFlg[(int32_T)SideFusion_Fcn_DW.P_Bulb
        [(int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0) - SideFusion_Fcn_DW.k) +
        120]] == 1.0) {
      /* Transition: '<S16>:3178' */
      /* Means that the measurement has used for another tracker
         and this tracker only has one measurement */
      /* Transition: '<S16>:3180' */
      SideFusion_Fcn_DW.mk = 0.0;

      /* Means that no measurement here */
      /* Transition: '<S16>:3183' */
    } else {
      /* Transition: '<S16>:3182' */
      SideFusion_Fcn_DW.OneMeasureFlg[(int32_T)SideFusion_Fcn_DW.P_Bulb[120 +
        (int32_T)((SideFusion_Fcn_B.Measure_Num - 1.0) - SideFusion_Fcn_DW.k)]] =
        1.0;

      /* Means that this measurement has used for another track and the track
         only has one measurement */
    }

    /* Transition: '<S16>:3186' */
  } else {
    /* Transition: '<S16>:3185' */
  }

  /* Transition: '<S16>:3188' */
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_B.Measure_Num) {
    /* Transition: '<S16>:3281' */
    if (SideFusion_Fcn_DW.dtj[40 * (int32_T)SideFusion_Fcn_DW.j + (int32_T)
        SideFusion_Fcn_DW.t] < SideFusion_F_Gating_Dist_Unused) {
      /* Transition: '<S16>:3283' */
      /* Transition: '<S16>:3285' */
      SideFusion_Fcn_B.Measure_Data[160 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

      /* if measurement j is inside the tracker t gating range, the measurement is marked used */
      /* Transition: '<S16>:3288' */
    } else {
      /* Transition: '<S16>:3287' */
    }

    /* Transition: '<S16>:3289' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:3291' */
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_F_Measurement_Select(void)
{
  /* Graphical Function 'Measurement_Select': '<S16>:629' */
  /* Transition: '<S16>:632' */
  memset(&SideFusion_Fcn_DW.SelectMea[0], 0, 9U * sizeof(real_T));

  /* This Step is to select measurements to update the tracker, the measurement used */
  /* Transition: '<S16>:636' */
  SideFusion_Fcn_Data_Gen();
  SideFusion_Fcn_Bulb_Sort();
  SideFusion_Fcn_Measure_Select();
}

void rt_mrdivide_U1d4x2_U2d_sN1aAFUT(const real_T u0[8], const real_T u1[4],
  real_T y[8])
{
  real_T u0_0[8];
  real_T u1_0[4];
  int32_T TWO;
  int32_T r1;
  real_T a21;
  real_T a22;
  real_T x;
  real_T y_0;
  memcpy(&u0_0[0], &u0[0], sizeof(real_T) << 3U);
  u1_0[0] = u1[0];
  u1_0[1] = u1[1];
  u1_0[2] = u1[2];
  u1_0[3] = u1[3];
  TWO = 1;
  x = u1_0[1];
  y_0 = fabs(x);
  a21 = y_0;
  x = u1_0[0];
  y_0 = fabs(x);
  x = y_0;
  if (a21 > x) {
    r1 = 1;
    TWO = 0;
  } else {
    r1 = 0;
  }

  x = u1_0[TWO];
  y_0 = u1_0[r1];
  a21 = x / y_0;
  a22 = u1_0[2 + TWO] - u1_0[2 + r1] * a21;
  x = u0_0[0];
  y_0 = u1_0[r1];
  x /= y_0;
  y[r1 << 2] = x;
  x = u0_0[4] - y[r1 << 2] * u1_0[2 + r1];
  x /= a22;
  y[TWO << 2] = x;
  y[r1 << 2] -= y[TWO << 2] * a21;
  x = u0_0[1];
  y_0 = u1_0[r1];
  x /= y_0;
  y[1 + (r1 << 2)] = x;
  x = u0_0[5] - y[(r1 << 2) + 1] * u1_0[2 + r1];
  x /= a22;
  y[1 + (TWO << 2)] = x;
  y[1 + (r1 << 2)] -= y[(TWO << 2) + 1] * a21;
  x = u0_0[2];
  y_0 = u1_0[r1];
  x /= y_0;
  y[2 + (r1 << 2)] = x;
  x = u0_0[6] - y[(r1 << 2) + 2] * u1_0[2 + r1];
  x /= a22;
  y[2 + (TWO << 2)] = x;
  y[2 + (r1 << 2)] -= y[(TWO << 2) + 2] * a21;
  x = u0_0[3];
  y_0 = u1_0[r1];
  x /= y_0;
  y[3 + (r1 << 2)] = x;
  x = u0_0[7] - y[(r1 << 2) + 3] * u1_0[2 + r1];
  x /= a22;
  y[3 + (TWO << 2)] = x;
  y[3 + (r1 << 2)] -= y[(TWO << 2) + 3] * a21;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Update(void)
{
  real_T tmp[16];
  real_T tmp_0[8];
  real_T tmp_1[8];
  real_T tmp_2[4];
  real_T tmp_3[16];
  real_T v1[8];
  real_T v1_0[8];
  int32_T i;
  int32_T i_0;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  real_T u0;
  real_T u1;
  real_T u2;

  /* Graphical Function 'Update': '<S16>:717' */
  /* Transition: '<S16>:720' */
  if (SideFusion_Fcn_DW.mk > 0.0) {
    /* Transition: '<S16>:769' */
    /* Exist Measurement can update Tracker */
    /* Transition: '<S16>:772' */
    SideFusion_Fcn_DW.UpdateTrackFlag[(int32_T)SideFusion_Fcn_DW.t] = 1.0;

    /* Simulink Function 'Update': '<S16>:815' */
    SideFusion_Fcn_B.Pre_x = SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.Pre_vx = SideFusion_Fcn_B.FusDataInternal[80 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.Pre_y = SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.Pre_vy = SideFusion_Fcn_B.FusDataInternal[160 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p11 = SideFusion_Fcn_B.FusDataInternal[280 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p12 = SideFusion_Fcn_B.FusDataInternal[320 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p13 = SideFusion_Fcn_B.FusDataInternal[360 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p14 = SideFusion_Fcn_B.FusDataInternal[400 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p21 = SideFusion_Fcn_B.FusDataInternal[440 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p22 = SideFusion_Fcn_B.FusDataInternal[480 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p23 = SideFusion_Fcn_B.FusDataInternal[520 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p24 = SideFusion_Fcn_B.FusDataInternal[560 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p31 = SideFusion_Fcn_B.FusDataInternal[600 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p32 = SideFusion_Fcn_B.FusDataInternal[640 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p33 = SideFusion_Fcn_B.FusDataInternal[680 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p34 = SideFusion_Fcn_B.FusDataInternal[720 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p41 = SideFusion_Fcn_B.FusDataInternal[760 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p42 = SideFusion_Fcn_B.FusDataInternal[800 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p43 = SideFusion_Fcn_B.FusDataInternal[840 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.pre_p44 = SideFusion_Fcn_B.FusDataInternal[880 + (int32_T)
      SideFusion_Fcn_DW.t];
    SideFusion_Fcn_B.mk = SideFusion_Fcn_DW.mk;
    SideFusion_Fcn_B.m00 = SideFusion_Fcn_DW.SelectMea[0];
    SideFusion_Fcn_B.m01 = SideFusion_Fcn_DW.SelectMea[3];
    SideFusion_Fcn_B.m2 = SideFusion_Fcn_DW.SelectMea[6];
    SideFusion_Fcn_B.m10 = SideFusion_Fcn_DW.SelectMea[1];
    SideFusion_Fcn_B.m11 = SideFusion_Fcn_DW.SelectMea[4];
    SideFusion_Fcn_B.m12 = SideFusion_Fcn_DW.SelectMea[7];
    SideFusion_Fcn_B.m20 = SideFusion_Fcn_DW.SelectMea[2];
    SideFusion_Fcn_B.m21 = SideFusion_Fcn_DW.SelectMea[5];
    SideFusion_Fcn_B.m22 = SideFusion_Fcn_DW.SelectMea[8];
    SideFusion_Fcn_B.Pt0 = 1.0 - SideFusion_Fcn_DW.Ptsum[(int32_T)
      SideFusion_Fcn_DW.t];

    /* Outputs for Function Call SubSystem: '<S16>/Tracker_Update.Tracker_Filter.Update.Update' */
    /* Saturate: '<S159>/Saturation' */
    u0 = SideFusion_Fcn_B.pre_p11;
    u1 = SideFusion_Fcn_P.Saturation_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation_p = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation_p = u1;
    } else {
      SideFusion_Fcn_B.Saturation_p = u0;
    }

    /* End of Saturate: '<S159>/Saturation' */

    /* Abs: '<S169>/Abs' */
    SideFusion_Fcn_B.Abs_b2 = fabs(SideFusion_Fcn_B.Saturation_p);

    /* RelationalOperator: '<S177>/Compare' incorporates:
     *  Constant: '<S177>/Constant'
     */
    SideFusion_Fcn_B.Compare_bu = (uint8_T)(SideFusion_Fcn_B.Abs_b2 >=
      SideFusion_Fcn_P.CompareToConstant_const);

    /* Switch: '<S169>/Switch' incorporates:
     *  Constant: '<S169>/Constant'
     */
    if (SideFusion_Fcn_B.Compare_bu >= SideFusion_Fcn_P.Switch_Threshold) {
      SideFusion_Fcn_B.Switch_iv = SideFusion_Fcn_B.Saturation_p;
    } else {
      SideFusion_Fcn_B.Switch_iv = SideFusion_Fcn_P.Constant_Value_l;
    }

    /* End of Switch: '<S169>/Switch' */

    /* Saturate: '<S159>/Saturation1' */
    u0 = SideFusion_Fcn_B.pre_p12;
    u1 = SideFusion_Fcn_P.Saturation1_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation1_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation1_d = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation1_d = u1;
    } else {
      SideFusion_Fcn_B.Saturation1_d = u0;
    }

    /* End of Saturate: '<S159>/Saturation1' */

    /* Saturate: '<S159>/Saturation2' */
    u0 = SideFusion_Fcn_B.pre_p13;
    u1 = SideFusion_Fcn_P.Saturation2_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation2_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation2_p = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation2_p = u1;
    } else {
      SideFusion_Fcn_B.Saturation2_p = u0;
    }

    /* End of Saturate: '<S159>/Saturation2' */

    /* Saturate: '<S159>/Saturation3' */
    u0 = SideFusion_Fcn_B.pre_p14;
    u1 = SideFusion_Fcn_P.Saturation3_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation3_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation3_a = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation3_a = u1;
    } else {
      SideFusion_Fcn_B.Saturation3_a = u0;
    }

    /* End of Saturate: '<S159>/Saturation3' */

    /* SignalConversion: '<S173>/TmpSignal ConversionAtMath Function2Inport1' */
    SideFusion_Fcn_B.TmpSignalConversionAt_ppunemv5r[0] =
      SideFusion_Fcn_B.Switch_iv;
    SideFusion_Fcn_B.TmpSignalConversionAt_ppunemv5r[1] =
      SideFusion_Fcn_B.Saturation1_d;
    SideFusion_Fcn_B.TmpSignalConversionAt_ppunemv5r[2] =
      SideFusion_Fcn_B.Saturation2_p;
    SideFusion_Fcn_B.TmpSignalConversionAt_ppunemv5r[3] =
      SideFusion_Fcn_B.Saturation3_a;

    /* Math: '<S173>/Math Function2' */
    SideFusion_Fcn_B.MathFunction2_c[0] =
      SideFusion_Fcn_B.TmpSignalConversionAt_ppunemv5r[0];
    SideFusion_Fcn_B.MathFunction2_c[1] =
      SideFusion_Fcn_B.TmpSignalConversionAt_ppunemv5r[1];
    SideFusion_Fcn_B.MathFunction2_c[2] =
      SideFusion_Fcn_B.TmpSignalConversionAt_ppunemv5r[2];
    SideFusion_Fcn_B.MathFunction2_c[3] =
      SideFusion_Fcn_B.TmpSignalConversionAt_ppunemv5r[3];

    /* Gain: '<S173>/Gain' */
    for (i = 0; i < 4; i++) {
      SideFusion_Fcn_B.Gain_i[i] = SideFusion_Fcn_P.Gain_Gain[i] *
        SideFusion_Fcn_B.MathFunction2_c[0];
      SideFusion_Fcn_B.Gain_i[i + 4] = SideFusion_Fcn_P.Gain_Gain[i] *
        SideFusion_Fcn_B.MathFunction2_c[1];
      SideFusion_Fcn_B.Gain_i[i + 8] = SideFusion_Fcn_P.Gain_Gain[i] *
        SideFusion_Fcn_B.MathFunction2_c[2];
      SideFusion_Fcn_B.Gain_i[i + 12] = SideFusion_Fcn_P.Gain_Gain[i] *
        SideFusion_Fcn_B.MathFunction2_c[3];
    }

    /* End of Gain: '<S173>/Gain' */

    /* Saturate: '<S159>/Saturation4' */
    u0 = SideFusion_Fcn_B.pre_p21;
    u1 = SideFusion_Fcn_P.Saturation4_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation4_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation4_l = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation4_l = u1;
    } else {
      SideFusion_Fcn_B.Saturation4_l = u0;
    }

    /* End of Saturate: '<S159>/Saturation4' */

    /* Saturate: '<S159>/Saturation5' */
    u0 = SideFusion_Fcn_B.pre_p22;
    u1 = SideFusion_Fcn_P.Saturation5_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation5_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation5_h = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation5_h = u1;
    } else {
      SideFusion_Fcn_B.Saturation5_h = u0;
    }

    /* End of Saturate: '<S159>/Saturation5' */

    /* Abs: '<S170>/Abs' */
    SideFusion_Fcn_B.Abs_kf = fabs(SideFusion_Fcn_B.Saturation5_h);

    /* RelationalOperator: '<S178>/Compare' incorporates:
     *  Constant: '<S178>/Constant'
     */
    SideFusion_Fcn_B.Compare_mt = (uint8_T)(SideFusion_Fcn_B.Abs_kf >=
      SideFusion_Fcn_P.CompareToConstant_const_e);

    /* Switch: '<S170>/Switch' incorporates:
     *  Constant: '<S170>/Constant'
     */
    if (SideFusion_Fcn_B.Compare_mt >= SideFusion_Fcn_P.Switch_Threshold_c) {
      SideFusion_Fcn_B.Switch_i5 = SideFusion_Fcn_B.Saturation5_h;
    } else {
      SideFusion_Fcn_B.Switch_i5 = SideFusion_Fcn_P.Constant_Value_n;
    }

    /* End of Switch: '<S170>/Switch' */

    /* Saturate: '<S159>/Saturation6' */
    u0 = SideFusion_Fcn_B.pre_p23;
    u1 = SideFusion_Fcn_P.Saturation6_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation6_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation6_a = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation6_a = u1;
    } else {
      SideFusion_Fcn_B.Saturation6_a = u0;
    }

    /* End of Saturate: '<S159>/Saturation6' */

    /* Saturate: '<S159>/Saturation7' */
    u0 = SideFusion_Fcn_B.pre_p24;
    u1 = SideFusion_Fcn_P.Saturation7_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation7_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation7_b = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation7_b = u1;
    } else {
      SideFusion_Fcn_B.Saturation7_b = u0;
    }

    /* End of Saturate: '<S159>/Saturation7' */

    /* SignalConversion: '<S173>/TmpSignal ConversionAtMath Function1Inport1' */
    SideFusion_Fcn_B.TmpSignalConversio_fzyxdb3o4nro[0] =
      SideFusion_Fcn_B.Saturation4_l;
    SideFusion_Fcn_B.TmpSignalConversio_fzyxdb3o4nro[1] =
      SideFusion_Fcn_B.Switch_i5;
    SideFusion_Fcn_B.TmpSignalConversio_fzyxdb3o4nro[2] =
      SideFusion_Fcn_B.Saturation6_a;
    SideFusion_Fcn_B.TmpSignalConversio_fzyxdb3o4nro[3] =
      SideFusion_Fcn_B.Saturation7_b;

    /* Math: '<S173>/Math Function1' */
    SideFusion_Fcn_B.MathFunction1_b[0] =
      SideFusion_Fcn_B.TmpSignalConversio_fzyxdb3o4nro[0];
    SideFusion_Fcn_B.MathFunction1_b[1] =
      SideFusion_Fcn_B.TmpSignalConversio_fzyxdb3o4nro[1];
    SideFusion_Fcn_B.MathFunction1_b[2] =
      SideFusion_Fcn_B.TmpSignalConversio_fzyxdb3o4nro[2];
    SideFusion_Fcn_B.MathFunction1_b[3] =
      SideFusion_Fcn_B.TmpSignalConversio_fzyxdb3o4nro[3];

    /* Gain: '<S173>/Gain1' */
    for (i = 0; i < 4; i++) {
      SideFusion_Fcn_B.Gain1_ko[i] = SideFusion_Fcn_P.Gain1_Gain[i] *
        SideFusion_Fcn_B.MathFunction1_b[0];
      SideFusion_Fcn_B.Gain1_ko[i + 4] = SideFusion_Fcn_P.Gain1_Gain[i] *
        SideFusion_Fcn_B.MathFunction1_b[1];
      SideFusion_Fcn_B.Gain1_ko[i + 8] = SideFusion_Fcn_P.Gain1_Gain[i] *
        SideFusion_Fcn_B.MathFunction1_b[2];
      SideFusion_Fcn_B.Gain1_ko[i + 12] = SideFusion_Fcn_P.Gain1_Gain[i] *
        SideFusion_Fcn_B.MathFunction1_b[3];
    }

    /* End of Gain: '<S173>/Gain1' */

    /* Saturate: '<S159>/Saturation8' */
    u0 = SideFusion_Fcn_B.pre_p31;
    u1 = SideFusion_Fcn_P.Saturation8_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation8_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation8_i = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation8_i = u1;
    } else {
      SideFusion_Fcn_B.Saturation8_i = u0;
    }

    /* End of Saturate: '<S159>/Saturation8' */

    /* Saturate: '<S159>/Saturation9' */
    u0 = SideFusion_Fcn_B.pre_p32;
    u1 = SideFusion_Fcn_P.Saturation9_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation9_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation9_f = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation9_f = u1;
    } else {
      SideFusion_Fcn_B.Saturation9_f = u0;
    }

    /* End of Saturate: '<S159>/Saturation9' */

    /* Saturate: '<S159>/Saturation10' */
    u0 = SideFusion_Fcn_B.pre_p33;
    u1 = SideFusion_Fcn_P.Saturation10_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation10_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation10_a = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation10_a = u1;
    } else {
      SideFusion_Fcn_B.Saturation10_a = u0;
    }

    /* End of Saturate: '<S159>/Saturation10' */

    /* Abs: '<S171>/Abs' */
    SideFusion_Fcn_B.Abs_oh = fabs(SideFusion_Fcn_B.Saturation10_a);

    /* RelationalOperator: '<S179>/Compare' incorporates:
     *  Constant: '<S179>/Constant'
     */
    SideFusion_Fcn_B.Compare_bh = (uint8_T)(SideFusion_Fcn_B.Abs_oh >=
      SideFusion_Fcn_P.CompareToConstant_const_ec);

    /* Switch: '<S171>/Switch' incorporates:
     *  Constant: '<S171>/Constant'
     */
    if (SideFusion_Fcn_B.Compare_bh >= SideFusion_Fcn_P.Switch_Threshold_g) {
      SideFusion_Fcn_B.Switch_bd = SideFusion_Fcn_B.Saturation10_a;
    } else {
      SideFusion_Fcn_B.Switch_bd = SideFusion_Fcn_P.Constant_Value_e;
    }

    /* End of Switch: '<S171>/Switch' */

    /* Saturate: '<S159>/Saturation11' */
    u0 = SideFusion_Fcn_B.pre_p34;
    u1 = SideFusion_Fcn_P.Saturation11_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation11_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation11_j = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation11_j = u1;
    } else {
      SideFusion_Fcn_B.Saturation11_j = u0;
    }

    /* End of Saturate: '<S159>/Saturation11' */

    /* SignalConversion: '<S173>/TmpSignal ConversionAtMath Function4Inport1' */
    SideFusion_Fcn_B.TmpSignalConversionAtMa_fjui3tr[0] =
      SideFusion_Fcn_B.Saturation8_i;
    SideFusion_Fcn_B.TmpSignalConversionAtMa_fjui3tr[1] =
      SideFusion_Fcn_B.Saturation9_f;
    SideFusion_Fcn_B.TmpSignalConversionAtMa_fjui3tr[2] =
      SideFusion_Fcn_B.Switch_bd;
    SideFusion_Fcn_B.TmpSignalConversionAtMa_fjui3tr[3] =
      SideFusion_Fcn_B.Saturation11_j;

    /* Math: '<S173>/Math Function4' */
    SideFusion_Fcn_B.MathFunction4_m[0] =
      SideFusion_Fcn_B.TmpSignalConversionAtMa_fjui3tr[0];
    SideFusion_Fcn_B.MathFunction4_m[1] =
      SideFusion_Fcn_B.TmpSignalConversionAtMa_fjui3tr[1];
    SideFusion_Fcn_B.MathFunction4_m[2] =
      SideFusion_Fcn_B.TmpSignalConversionAtMa_fjui3tr[2];
    SideFusion_Fcn_B.MathFunction4_m[3] =
      SideFusion_Fcn_B.TmpSignalConversionAtMa_fjui3tr[3];

    /* Gain: '<S173>/Gain2' */
    for (i = 0; i < 4; i++) {
      SideFusion_Fcn_B.Gain2_d[i] = SideFusion_Fcn_P.Gain2_Gain[i] *
        SideFusion_Fcn_B.MathFunction4_m[0];
      SideFusion_Fcn_B.Gain2_d[i + 4] = SideFusion_Fcn_P.Gain2_Gain[i] *
        SideFusion_Fcn_B.MathFunction4_m[1];
      SideFusion_Fcn_B.Gain2_d[i + 8] = SideFusion_Fcn_P.Gain2_Gain[i] *
        SideFusion_Fcn_B.MathFunction4_m[2];
      SideFusion_Fcn_B.Gain2_d[i + 12] = SideFusion_Fcn_P.Gain2_Gain[i] *
        SideFusion_Fcn_B.MathFunction4_m[3];
    }

    /* End of Gain: '<S173>/Gain2' */

    /* Saturate: '<S159>/Saturation14' */
    u0 = SideFusion_Fcn_B.pre_p41;
    u1 = SideFusion_Fcn_P.Saturation14_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation14_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation14_p = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation14_p = u1;
    } else {
      SideFusion_Fcn_B.Saturation14_p = u0;
    }

    /* End of Saturate: '<S159>/Saturation14' */

    /* Saturate: '<S159>/Saturation15' */
    u0 = SideFusion_Fcn_B.pre_p42;
    u1 = SideFusion_Fcn_P.Saturation15_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation15_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation15_l = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation15_l = u1;
    } else {
      SideFusion_Fcn_B.Saturation15_l = u0;
    }

    /* End of Saturate: '<S159>/Saturation15' */

    /* Saturate: '<S159>/Saturation12' */
    u0 = SideFusion_Fcn_B.pre_p43;
    u1 = SideFusion_Fcn_P.Saturation12_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation12_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation12_i = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation12_i = u1;
    } else {
      SideFusion_Fcn_B.Saturation12_i = u0;
    }

    /* End of Saturate: '<S159>/Saturation12' */

    /* Saturate: '<S159>/Saturation13' */
    u0 = SideFusion_Fcn_B.pre_p44;
    u1 = SideFusion_Fcn_P.Saturation13_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation13_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation13_e = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation13_e = u1;
    } else {
      SideFusion_Fcn_B.Saturation13_e = u0;
    }

    /* End of Saturate: '<S159>/Saturation13' */

    /* Abs: '<S172>/Abs' */
    SideFusion_Fcn_B.Abs_n = fabs(SideFusion_Fcn_B.Saturation13_e);

    /* RelationalOperator: '<S180>/Compare' incorporates:
     *  Constant: '<S180>/Constant'
     */
    SideFusion_Fcn_B.Compare_p2 = (uint8_T)(SideFusion_Fcn_B.Abs_n >=
      SideFusion_Fcn_P.CompareToConstant_const_f);

    /* Switch: '<S172>/Switch' incorporates:
     *  Constant: '<S172>/Constant'
     */
    if (SideFusion_Fcn_B.Compare_p2 >= SideFusion_Fcn_P.Switch_Threshold_ce) {
      SideFusion_Fcn_B.Switch_aa = SideFusion_Fcn_B.Saturation13_e;
    } else {
      SideFusion_Fcn_B.Switch_aa = SideFusion_Fcn_P.Constant_Value_i;
    }

    /* End of Switch: '<S172>/Switch' */

    /* SignalConversion: '<S173>/TmpSignal ConversionAtMath Function3Inport1' */
    SideFusion_Fcn_B.TmpSignalConversionAtMat_ewmt4t[0] =
      SideFusion_Fcn_B.Saturation14_p;
    SideFusion_Fcn_B.TmpSignalConversionAtMat_ewmt4t[1] =
      SideFusion_Fcn_B.Saturation15_l;
    SideFusion_Fcn_B.TmpSignalConversionAtMat_ewmt4t[2] =
      SideFusion_Fcn_B.Saturation12_i;
    SideFusion_Fcn_B.TmpSignalConversionAtMat_ewmt4t[3] =
      SideFusion_Fcn_B.Switch_aa;

    /* Math: '<S173>/Math Function3' */
    SideFusion_Fcn_B.MathFunction3_k[0] =
      SideFusion_Fcn_B.TmpSignalConversionAtMat_ewmt4t[0];
    SideFusion_Fcn_B.MathFunction3_k[1] =
      SideFusion_Fcn_B.TmpSignalConversionAtMat_ewmt4t[1];
    SideFusion_Fcn_B.MathFunction3_k[2] =
      SideFusion_Fcn_B.TmpSignalConversionAtMat_ewmt4t[2];
    SideFusion_Fcn_B.MathFunction3_k[3] =
      SideFusion_Fcn_B.TmpSignalConversionAtMat_ewmt4t[3];

    /* Gain: '<S173>/Gain3' */
    for (i = 0; i < 4; i++) {
      SideFusion_Fcn_B.Gain3_c[i] = SideFusion_Fcn_P.Gain3_Gain[i] *
        SideFusion_Fcn_B.MathFunction3_k[0];
      SideFusion_Fcn_B.Gain3_c[i + 4] = SideFusion_Fcn_P.Gain3_Gain[i] *
        SideFusion_Fcn_B.MathFunction3_k[1];
      SideFusion_Fcn_B.Gain3_c[i + 8] = SideFusion_Fcn_P.Gain3_Gain[i] *
        SideFusion_Fcn_B.MathFunction3_k[2];
      SideFusion_Fcn_B.Gain3_c[i + 12] = SideFusion_Fcn_P.Gain3_Gain[i] *
        SideFusion_Fcn_B.MathFunction3_k[3];
    }

    /* End of Gain: '<S173>/Gain3' */

    /* Sum: '<S173>/Add' */
    for (i = 0; i < 16; i++) {
      SideFusion_Fcn_B.Add_o[i] = ((SideFusion_Fcn_B.Gain_i[i] +
        SideFusion_Fcn_B.Gain1_ko[i]) + SideFusion_Fcn_B.Gain2_d[i]) +
        SideFusion_Fcn_B.Gain3_c[i];
    }

    /* End of Sum: '<S173>/Add' */

    /* Math: '<S160>/Math Function1' incorporates:
     *  Constant: '<S159>/H'
     */
    for (i = 0; i < 2; i++) {
      SideFusion_Fcn_B.uX2[i << 2] = SideFusion_Fcn_P.H_Value[i];
      SideFusion_Fcn_B.uX2[1 + (i << 2)] = SideFusion_Fcn_P.H_Value[i + 2];
      SideFusion_Fcn_B.uX2[2 + (i << 2)] = SideFusion_Fcn_P.H_Value[i + 4];
      SideFusion_Fcn_B.uX2[3 + (i << 2)] = SideFusion_Fcn_P.H_Value[i + 6];
    }

    /* End of Math: '<S160>/Math Function1' */

    /* Math: '<S161>/Math Function' incorporates:
     *  Constant: '<S159>/H'
     */
    for (i = 0; i < 2; i++) {
      SideFusion_Fcn_B.HT4x2[i << 2] = SideFusion_Fcn_P.H_Value[i];
      SideFusion_Fcn_B.HT4x2[1 + (i << 2)] = SideFusion_Fcn_P.H_Value[i + 2];
      SideFusion_Fcn_B.HT4x2[2 + (i << 2)] = SideFusion_Fcn_P.H_Value[i + 4];
      SideFusion_Fcn_B.HT4x2[3 + (i << 2)] = SideFusion_Fcn_P.H_Value[i + 6];
    }

    /* End of Math: '<S161>/Math Function' */

    /* Product: '<S161>/Product4' incorporates:
     *  Constant: '<S159>/H'
     */
    memcpy(&tmp[0], &SideFusion_Fcn_B.Add_o[0], sizeof(real_T) << 4U);
    memcpy(&tmp_0[0], &SideFusion_Fcn_B.HT4x2[0], sizeof(real_T) << 3U);
    for (i = 0; i < 4; i++) {
      for (i_0 = 0; i_0 < 2; i_0++) {
        v1[i + (i_0 << 2)] = 0.0;
        v1[i + (i_0 << 2)] += tmp_0[i_0 << 2] * tmp[i];
        v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 1] * tmp[i + 4];
        v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 2] * tmp[i + 8];
        v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 3] * tmp[i + 12];
      }
    }

    memcpy(&tmp_1[0], &SideFusion_Fcn_P.H_Value[0], sizeof(real_T) << 3U);
    for (i = 0; i < 2; i++) {
      for (i_0 = 0; i_0 < 2; i_0++) {
        SideFusion_Fcn_B.Product4[i + (i_0 << 1)] = 0.0;
        SideFusion_Fcn_B.Product4[i + (i_0 << 1)] += v1[i_0 << 2] * tmp_1[i];
        SideFusion_Fcn_B.Product4[i + (i_0 << 1)] += v1[(i_0 << 2) + 1] *
          tmp_1[i + 2];
        SideFusion_Fcn_B.Product4[i + (i_0 << 1)] += v1[(i_0 << 2) + 2] *
          tmp_1[i + 4];
        SideFusion_Fcn_B.Product4[i + (i_0 << 1)] += v1[(i_0 << 2) + 3] *
          tmp_1[i + 6];
      }
    }

    /* End of Product: '<S161>/Product4' */

    /* SignalConversion: '<S175>/TmpSignal ConversionAtMath Function2Inport1' incorporates:
     *  Constant: '<S159>/R11'
     *  Constant: '<S159>/R12'
     */
    SideFusion_Fcn_B.TmpSignalConversionA_ppunemv5r4[0] =
      SideFusion_Fcn_P.R11_Value;
    SideFusion_Fcn_B.TmpSignalConversionA_ppunemv5r4[1] =
      SideFusion_Fcn_P.R12_Value;

    /* Math: '<S175>/Math Function2' */
    SideFusion_Fcn_B.MathFunction2_ht[0] =
      SideFusion_Fcn_B.TmpSignalConversionA_ppunemv5r4[0];
    SideFusion_Fcn_B.MathFunction2_ht[1] =
      SideFusion_Fcn_B.TmpSignalConversionA_ppunemv5r4[1];

    /* Gain: '<S175>/Gain' */
    SideFusion_Fcn_B.Gain_f[0] = SideFusion_Fcn_P.Gain_Gain_d[0] *
      SideFusion_Fcn_B.MathFunction2_ht[0];
    SideFusion_Fcn_B.Gain_f[2] = SideFusion_Fcn_P.Gain_Gain_d[0] *
      SideFusion_Fcn_B.MathFunction2_ht[1];
    SideFusion_Fcn_B.Gain_f[1] = SideFusion_Fcn_P.Gain_Gain_d[1] *
      SideFusion_Fcn_B.MathFunction2_ht[0];
    SideFusion_Fcn_B.Gain_f[3] = SideFusion_Fcn_P.Gain_Gain_d[1] *
      SideFusion_Fcn_B.MathFunction2_ht[1];

    /* SignalConversion: '<S175>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
     *  Constant: '<S159>/R21'
     *  Constant: '<S159>/R22'
     */
    SideFusion_Fcn_B.TmpSignalConversi_fzyxdb3o4nrow[0] =
      SideFusion_Fcn_P.R21_Value;
    SideFusion_Fcn_B.TmpSignalConversi_fzyxdb3o4nrow[1] =
      SideFusion_Fcn_P.R22_Value;

    /* Math: '<S175>/Math Function1' */
    SideFusion_Fcn_B.MathFunction1_cz[0] =
      SideFusion_Fcn_B.TmpSignalConversi_fzyxdb3o4nrow[0];
    SideFusion_Fcn_B.MathFunction1_cz[1] =
      SideFusion_Fcn_B.TmpSignalConversi_fzyxdb3o4nrow[1];

    /* Gain: '<S175>/Gain1' */
    SideFusion_Fcn_B.Gain1_ga[0] = SideFusion_Fcn_P.Gain1_Gain_g[0] *
      SideFusion_Fcn_B.MathFunction1_cz[0];
    SideFusion_Fcn_B.Gain1_ga[2] = SideFusion_Fcn_P.Gain1_Gain_g[0] *
      SideFusion_Fcn_B.MathFunction1_cz[1];
    SideFusion_Fcn_B.Gain1_ga[1] = SideFusion_Fcn_P.Gain1_Gain_g[1] *
      SideFusion_Fcn_B.MathFunction1_cz[0];
    SideFusion_Fcn_B.Gain1_ga[3] = SideFusion_Fcn_P.Gain1_Gain_g[1] *
      SideFusion_Fcn_B.MathFunction1_cz[1];

    /* Sum: '<S175>/Add' */
    SideFusion_Fcn_B.Add_d[0] = SideFusion_Fcn_B.Gain_f[0] +
      SideFusion_Fcn_B.Gain1_ga[0];
    SideFusion_Fcn_B.Add_d[1] = SideFusion_Fcn_B.Gain_f[1] +
      SideFusion_Fcn_B.Gain1_ga[1];
    SideFusion_Fcn_B.Add_d[2] = SideFusion_Fcn_B.Gain_f[2] +
      SideFusion_Fcn_B.Gain1_ga[2];
    SideFusion_Fcn_B.Add_d[3] = SideFusion_Fcn_B.Gain_f[3] +
      SideFusion_Fcn_B.Gain1_ga[3];

    /* Sum: '<S161>/Subtract2' */
    SideFusion_Fcn_B.S2x2[0] = SideFusion_Fcn_B.Product4[0] +
      SideFusion_Fcn_B.Add_d[0];
    SideFusion_Fcn_B.S2x2[1] = SideFusion_Fcn_B.Product4[1] +
      SideFusion_Fcn_B.Add_d[1];
    SideFusion_Fcn_B.S2x2[2] = SideFusion_Fcn_B.Product4[2] +
      SideFusion_Fcn_B.Add_d[2];
    SideFusion_Fcn_B.S2x2[3] = SideFusion_Fcn_B.Product4[3] +
      SideFusion_Fcn_B.Add_d[3];

    /* Product: '<S160>/Divide' */
    memcpy(&tmp[0], &SideFusion_Fcn_B.Add_o[0], sizeof(real_T) << 4U);
    rt_mrdivide_U1d4x2_U2d_sN1aAFUT(SideFusion_Fcn_B.uX2, SideFusion_Fcn_B.S2x2,
      tmp_0);
    for (i = 0; i < 4; i++) {
      for (i_0 = 0; i_0 < 2; i_0++) {
        SideFusion_Fcn_B.K4X2[i + (i_0 << 2)] = 0.0;
        SideFusion_Fcn_B.K4X2[i + (i_0 << 2)] += tmp_0[i_0 << 2] * tmp[i];
        SideFusion_Fcn_B.K4X2[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 1] * tmp[i +
          4];
        SideFusion_Fcn_B.K4X2[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 2] * tmp[i +
          8];
        SideFusion_Fcn_B.K4X2[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 3] * tmp[i +
          12];
      }
    }

    /* End of Product: '<S160>/Divide' */

    /* SignalConversion: '<S166>/TmpSignal ConversionAtDivide6Inport1' */
    SideFusion_Fcn_B.Vt32X1[0] = SideFusion_Fcn_B.m21;
    SideFusion_Fcn_B.Vt32X1[1] = SideFusion_Fcn_B.m22;

    /* Product: '<S163>/Divide' */
    SideFusion_Fcn_B.Divide_o[0] = SideFusion_Fcn_B.m20 *
      SideFusion_Fcn_B.Vt32X1[0];
    SideFusion_Fcn_B.Divide_o[1] = SideFusion_Fcn_B.m20 *
      SideFusion_Fcn_B.Vt32X1[1];

    /* SignalConversion: '<S166>/TmpSignal ConversionAtDivide4Inport1' */
    SideFusion_Fcn_B.Vt22X1[0] = SideFusion_Fcn_B.m11;
    SideFusion_Fcn_B.Vt22X1[1] = SideFusion_Fcn_B.m12;

    /* Product: '<S163>/Divide1' */
    SideFusion_Fcn_B.Divide1_a[0] = SideFusion_Fcn_B.m10 *
      SideFusion_Fcn_B.Vt22X1[0];
    SideFusion_Fcn_B.Divide1_a[1] = SideFusion_Fcn_B.m10 *
      SideFusion_Fcn_B.Vt22X1[1];

    /* SignalConversion: '<S166>/TmpSignal ConversionAtDivide3Inport1' */
    SideFusion_Fcn_B.Vt12X1[0] = SideFusion_Fcn_B.m01;
    SideFusion_Fcn_B.Vt12X1[1] = SideFusion_Fcn_B.m2;

    /* Product: '<S163>/Divide2' */
    SideFusion_Fcn_B.Divide2_i[0] = SideFusion_Fcn_B.m00 *
      SideFusion_Fcn_B.Vt12X1[0];
    SideFusion_Fcn_B.Divide2_i[1] = SideFusion_Fcn_B.m00 *
      SideFusion_Fcn_B.Vt12X1[1];

    /* Sum: '<S163>/Subtract2' */
    SideFusion_Fcn_B.V2X1[0] = (SideFusion_Fcn_B.Divide2_i[0] +
      SideFusion_Fcn_B.Divide1_a[0]) + SideFusion_Fcn_B.Divide_o[0];
    SideFusion_Fcn_B.V2X1[1] = (SideFusion_Fcn_B.Divide2_i[1] +
      SideFusion_Fcn_B.Divide1_a[1]) + SideFusion_Fcn_B.Divide_o[1];

    /* Math: '<S166>/Math Function1' */
    SideFusion_Fcn_B.uX2_f[0] = SideFusion_Fcn_B.Vt12X1[0];
    SideFusion_Fcn_B.uX2_f[1] = SideFusion_Fcn_B.Vt12X1[1];

    /* Product: '<S166>/Divide3' */
    unnamed_idx_0 = SideFusion_Fcn_B.Vt12X1[0];
    unnamed_idx_1 = SideFusion_Fcn_B.Vt12X1[1];
    u0 = SideFusion_Fcn_B.uX2_f[0];
    u1 = SideFusion_Fcn_B.uX2_f[1];
    SideFusion_Fcn_B.uX2_d[0] = unnamed_idx_0 * u0;
    SideFusion_Fcn_B.uX2_d[2] = unnamed_idx_0 * u1;
    SideFusion_Fcn_B.uX2_d[1] = unnamed_idx_1 * u0;
    SideFusion_Fcn_B.uX2_d[3] = unnamed_idx_1 * u1;

    /* Product: '<S166>/Divide1' */
    SideFusion_Fcn_B.Divide1_k[0] = SideFusion_Fcn_B.m00 *
      SideFusion_Fcn_B.uX2_d[0];
    SideFusion_Fcn_B.Divide1_k[1] = SideFusion_Fcn_B.m00 *
      SideFusion_Fcn_B.uX2_d[1];
    SideFusion_Fcn_B.Divide1_k[2] = SideFusion_Fcn_B.m00 *
      SideFusion_Fcn_B.uX2_d[2];
    SideFusion_Fcn_B.Divide1_k[3] = SideFusion_Fcn_B.m00 *
      SideFusion_Fcn_B.uX2_d[3];

    /* Math: '<S166>/Math Function2' */
    SideFusion_Fcn_B.uX2_a[0] = SideFusion_Fcn_B.Vt22X1[0];
    SideFusion_Fcn_B.uX2_a[1] = SideFusion_Fcn_B.Vt22X1[1];

    /* Product: '<S166>/Divide4' */
    unnamed_idx_0 = SideFusion_Fcn_B.Vt22X1[0];
    unnamed_idx_1 = SideFusion_Fcn_B.Vt22X1[1];
    u0 = SideFusion_Fcn_B.uX2_a[0];
    u1 = SideFusion_Fcn_B.uX2_a[1];
    SideFusion_Fcn_B.uX2_m[0] = unnamed_idx_0 * u0;
    SideFusion_Fcn_B.uX2_m[2] = unnamed_idx_0 * u1;
    SideFusion_Fcn_B.uX2_m[1] = unnamed_idx_1 * u0;
    SideFusion_Fcn_B.uX2_m[3] = unnamed_idx_1 * u1;

    /* Product: '<S166>/Divide2' */
    SideFusion_Fcn_B.Divide2_eu[0] = SideFusion_Fcn_B.m10 *
      SideFusion_Fcn_B.uX2_m[0];
    SideFusion_Fcn_B.Divide2_eu[1] = SideFusion_Fcn_B.m10 *
      SideFusion_Fcn_B.uX2_m[1];
    SideFusion_Fcn_B.Divide2_eu[2] = SideFusion_Fcn_B.m10 *
      SideFusion_Fcn_B.uX2_m[2];
    SideFusion_Fcn_B.Divide2_eu[3] = SideFusion_Fcn_B.m10 *
      SideFusion_Fcn_B.uX2_m[3];

    /* Math: '<S166>/Math Function3' */
    SideFusion_Fcn_B.uX2_n[0] = SideFusion_Fcn_B.Vt32X1[0];
    SideFusion_Fcn_B.uX2_n[1] = SideFusion_Fcn_B.Vt32X1[1];

    /* Product: '<S166>/Divide6' */
    unnamed_idx_0 = SideFusion_Fcn_B.Vt32X1[0];
    unnamed_idx_1 = SideFusion_Fcn_B.Vt32X1[1];
    u0 = SideFusion_Fcn_B.uX2_n[0];
    u1 = SideFusion_Fcn_B.uX2_n[1];
    SideFusion_Fcn_B.uX2_e[0] = unnamed_idx_0 * u0;
    SideFusion_Fcn_B.uX2_e[2] = unnamed_idx_0 * u1;
    SideFusion_Fcn_B.uX2_e[1] = unnamed_idx_1 * u0;
    SideFusion_Fcn_B.uX2_e[3] = unnamed_idx_1 * u1;

    /* Product: '<S166>/Divide5' */
    SideFusion_Fcn_B.Divide5[0] = SideFusion_Fcn_B.m20 * SideFusion_Fcn_B.uX2_e
      [0];
    SideFusion_Fcn_B.Divide5[1] = SideFusion_Fcn_B.m20 * SideFusion_Fcn_B.uX2_e
      [1];
    SideFusion_Fcn_B.Divide5[2] = SideFusion_Fcn_B.m20 * SideFusion_Fcn_B.uX2_e
      [2];
    SideFusion_Fcn_B.Divide5[3] = SideFusion_Fcn_B.m20 * SideFusion_Fcn_B.uX2_e
      [3];

    /* Sum: '<S166>/Subtract2' */
    SideFusion_Fcn_B.uX2_o[0] = (SideFusion_Fcn_B.Divide1_k[0] +
      SideFusion_Fcn_B.Divide2_eu[0]) + SideFusion_Fcn_B.Divide5[0];
    SideFusion_Fcn_B.uX2_o[1] = (SideFusion_Fcn_B.Divide1_k[1] +
      SideFusion_Fcn_B.Divide2_eu[1]) + SideFusion_Fcn_B.Divide5[1];
    SideFusion_Fcn_B.uX2_o[2] = (SideFusion_Fcn_B.Divide1_k[2] +
      SideFusion_Fcn_B.Divide2_eu[2]) + SideFusion_Fcn_B.Divide5[2];
    SideFusion_Fcn_B.uX2_o[3] = (SideFusion_Fcn_B.Divide1_k[3] +
      SideFusion_Fcn_B.Divide2_eu[3]) + SideFusion_Fcn_B.Divide5[3];

    /* Math: '<S166>/Math Function4' */
    SideFusion_Fcn_B.uX2_j[0] = SideFusion_Fcn_B.V2X1[0];
    SideFusion_Fcn_B.uX2_j[1] = SideFusion_Fcn_B.V2X1[1];

    /* Product: '<S166>/Divide7' */
    unnamed_idx_0 = SideFusion_Fcn_B.V2X1[0];
    unnamed_idx_1 = SideFusion_Fcn_B.V2X1[1];
    u0 = SideFusion_Fcn_B.uX2_j[0];
    u1 = SideFusion_Fcn_B.uX2_j[1];
    SideFusion_Fcn_B.uX2_c[0] = unnamed_idx_0 * u0;
    SideFusion_Fcn_B.uX2_c[2] = unnamed_idx_0 * u1;
    SideFusion_Fcn_B.uX2_c[1] = unnamed_idx_1 * u0;
    SideFusion_Fcn_B.uX2_c[3] = unnamed_idx_1 * u1;

    /* Sum: '<S166>/Subtract1' */
    SideFusion_Fcn_B.uX2_p[0] = SideFusion_Fcn_B.uX2_o[0] -
      SideFusion_Fcn_B.uX2_c[0];
    SideFusion_Fcn_B.uX2_p[1] = SideFusion_Fcn_B.uX2_o[1] -
      SideFusion_Fcn_B.uX2_c[1];
    SideFusion_Fcn_B.uX2_p[2] = SideFusion_Fcn_B.uX2_o[2] -
      SideFusion_Fcn_B.uX2_c[2];
    SideFusion_Fcn_B.uX2_p[3] = SideFusion_Fcn_B.uX2_o[3] -
      SideFusion_Fcn_B.uX2_c[3];

    /* Math: '<S166>/Math Function5' */
    for (i = 0; i < 4; i++) {
      SideFusion_Fcn_B.uX4[i << 1] = SideFusion_Fcn_B.K4X2[i];
      SideFusion_Fcn_B.uX4[1 + (i << 1)] = SideFusion_Fcn_B.K4X2[i + 4];
    }

    /* End of Math: '<S166>/Math Function5' */

    /* Product: '<S166>/Divide8' */
    tmp_2[0] = SideFusion_Fcn_B.uX2_p[0];
    tmp_2[1] = SideFusion_Fcn_B.uX2_p[1];
    tmp_2[2] = SideFusion_Fcn_B.uX2_p[2];
    tmp_2[3] = SideFusion_Fcn_B.uX2_p[3];
    memcpy(&tmp_1[0], &SideFusion_Fcn_B.uX4[0], sizeof(real_T) << 3U);
    for (i = 0; i < 2; i++) {
      for (i_0 = 0; i_0 < 4; i_0++) {
        v1_0[i + (i_0 << 1)] = 0.0;
        v1_0[i + (i_0 << 1)] += tmp_1[i_0 << 1] * tmp_2[i];
        v1_0[i + (i_0 << 1)] += tmp_1[(i_0 << 1) + 1] * tmp_2[i + 2];
      }
    }

    memcpy(&tmp_0[0], &SideFusion_Fcn_B.K4X2[0], sizeof(real_T) << 3U);
    for (i = 0; i < 4; i++) {
      for (i_0 = 0; i_0 < 4; i_0++) {
        SideFusion_Fcn_B.uX4_f[i + (i_0 << 2)] = 0.0;
        SideFusion_Fcn_B.uX4_f[i + (i_0 << 2)] += v1_0[i_0 << 1] * tmp_0[i];
        SideFusion_Fcn_B.uX4_f[i + (i_0 << 2)] += v1_0[(i_0 << 1) + 1] * tmp_0[i
          + 4];
      }
    }

    /* End of Product: '<S166>/Divide8' */

    /* Product: '<S167>/Divide8' */
    for (i = 0; i < 16; i++) {
      SideFusion_Fcn_B.uX4_fi[i] = SideFusion_Fcn_B.Pt0 *
        SideFusion_Fcn_B.Add_o[i];
    }

    /* End of Product: '<S167>/Divide8' */

    /* Sum: '<S168>/Subtract1' incorporates:
     *  Constant: '<S168>/Constant_1'
     */
    SideFusion_Fcn_B.Subtract1 = SideFusion_Fcn_P.Constant_1_Value -
      SideFusion_Fcn_B.Pt0;

    /* Product: '<S168>/Divide1' incorporates:
     *  Constant: '<S159>/H'
     */
    for (i = 0; i < 8; i++) {
      tmp_0[i] = SideFusion_Fcn_B.K4X2[i];
      tmp_1[i] = SideFusion_Fcn_P.H_Value[i];
    }

    for (i = 0; i < 4; i++) {
      for (i_0 = 0; i_0 < 4; i_0++) {
        SideFusion_Fcn_B.uX4_k[i + (i_0 << 2)] = 0.0;
        SideFusion_Fcn_B.uX4_k[i + (i_0 << 2)] += tmp_1[i_0 << 1] * tmp_0[i];
        SideFusion_Fcn_B.uX4_k[i + (i_0 << 2)] += tmp_1[(i_0 << 1) + 1] *
          tmp_0[i + 4];
      }
    }

    for (i = 0; i < 16; i++) {
      /* Sum: '<S168>/Subtract2' incorporates:
       *  Constant: '<S168>/I'
       */
      SideFusion_Fcn_B.ux4[i] = SideFusion_Fcn_P.I_Value[i] -
        SideFusion_Fcn_B.uX4_k[i];

      /* Product: '<S168>/Divide2' */
      tmp[i] = SideFusion_Fcn_B.ux4[i];
      tmp_3[i] = SideFusion_Fcn_B.Add_o[i];
    }

    /* End of Product: '<S168>/Divide1' */

    /* Product: '<S168>/Divide2' */
    for (i = 0; i < 4; i++) {
      for (i_0 = 0; i_0 < 4; i_0++) {
        SideFusion_Fcn_B.uX4_o[i + (i_0 << 2)] = 0.0;
        SideFusion_Fcn_B.uX4_o[i + (i_0 << 2)] += tmp_3[i_0 << 2] * tmp[i];
        SideFusion_Fcn_B.uX4_o[i + (i_0 << 2)] += tmp_3[(i_0 << 2) + 1] * tmp[i
          + 4];
        SideFusion_Fcn_B.uX4_o[i + (i_0 << 2)] += tmp_3[(i_0 << 2) + 2] * tmp[i
          + 8];
        SideFusion_Fcn_B.uX4_o[i + (i_0 << 2)] += tmp_3[(i_0 << 2) + 3] * tmp[i
          + 12];
      }
    }

    for (i = 0; i < 16; i++) {
      /* Product: '<S168>/Divide3' */
      SideFusion_Fcn_B.uX4_e[i] = SideFusion_Fcn_B.Subtract1 *
        SideFusion_Fcn_B.uX4_o[i];

      /* Sum: '<S164>/Subtract1' */
      SideFusion_Fcn_B.Subtract1_m[i] = (SideFusion_Fcn_B.uX4_f[i] +
        SideFusion_Fcn_B.uX4_fi[i]) + SideFusion_Fcn_B.uX4_e[i];

      /* Product: '<S158>/Product' */
      tmp[i] = SideFusion_Fcn_B.Subtract1_m[i];
    }

    /* Product: '<S158>/Product' incorporates:
     *  Constant: '<S158>/Constant'
     */
    unnamed_idx_0 = SideFusion_Fcn_P.Constant_Value_k[0];
    unnamed_idx_1 = SideFusion_Fcn_P.Constant_Value_k[1];
    u0 = SideFusion_Fcn_P.Constant_Value_k[2];
    u1 = SideFusion_Fcn_P.Constant_Value_k[3];
    for (i = 0; i < 4; i++) {
      u2 = tmp[i] * unnamed_idx_0;
      u2 += tmp[i + 4] * unnamed_idx_1;
      u2 += tmp[i + 8] * u0;
      u2 += tmp[i + 12] * u1;
      tmp_2[i] = u2;
    }

    SideFusion_Fcn_B.Product_oz[0] = tmp_2[0];
    SideFusion_Fcn_B.Product_oz[1] = tmp_2[1];
    SideFusion_Fcn_B.Product_oz[2] = tmp_2[2];
    SideFusion_Fcn_B.Product_oz[3] = tmp_2[3];

    /* Saturate: '<S156>/Saturation' */
    u0 = SideFusion_Fcn_B.Product_oz[0];
    u1 = SideFusion_Fcn_P.Saturation_LowerSat_g;
    u2 = SideFusion_Fcn_P.Saturation_UpperSat_c;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation_c = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation_c = u1;
    } else {
      SideFusion_Fcn_B.Saturation_c = u0;
    }

    /* End of Saturate: '<S156>/Saturation' */

    /* Product: '<S158>/Product1' incorporates:
     *  Constant: '<S158>/Constant1'
     */
    memcpy(&tmp[0], &SideFusion_Fcn_B.Subtract1_m[0], sizeof(real_T) << 4U);
    unnamed_idx_0 = SideFusion_Fcn_P.Constant1_Value[0];
    unnamed_idx_1 = SideFusion_Fcn_P.Constant1_Value[1];
    u0 = SideFusion_Fcn_P.Constant1_Value[2];
    u1 = SideFusion_Fcn_P.Constant1_Value[3];
    for (i = 0; i < 4; i++) {
      u2 = tmp[i] * unnamed_idx_0;
      u2 += tmp[i + 4] * unnamed_idx_1;
      u2 += tmp[i + 8] * u0;
      u2 += tmp[i + 12] * u1;
      tmp_2[i] = u2;
    }

    SideFusion_Fcn_B.Product1_b4[0] = tmp_2[0];
    SideFusion_Fcn_B.Product1_b4[1] = tmp_2[1];
    SideFusion_Fcn_B.Product1_b4[2] = tmp_2[2];
    SideFusion_Fcn_B.Product1_b4[3] = tmp_2[3];

    /* End of Product: '<S158>/Product1' */

    /* Saturate: '<S156>/Saturation1' */
    u0 = SideFusion_Fcn_B.Product1_b4[0];
    u1 = SideFusion_Fcn_P.Saturation1_LowerSat_k;
    u2 = SideFusion_Fcn_P.Saturation1_UpperSat_e;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation1_c = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation1_c = u1;
    } else {
      SideFusion_Fcn_B.Saturation1_c = u0;
    }

    /* End of Saturate: '<S156>/Saturation1' */

    /* Product: '<S158>/Product2' incorporates:
     *  Constant: '<S158>/Constant2'
     */
    memcpy(&tmp[0], &SideFusion_Fcn_B.Subtract1_m[0], sizeof(real_T) << 4U);
    unnamed_idx_0 = SideFusion_Fcn_P.Constant2_Value[0];
    unnamed_idx_1 = SideFusion_Fcn_P.Constant2_Value[1];
    u0 = SideFusion_Fcn_P.Constant2_Value[2];
    u1 = SideFusion_Fcn_P.Constant2_Value[3];
    for (i = 0; i < 4; i++) {
      u2 = tmp[i] * unnamed_idx_0;
      u2 += tmp[i + 4] * unnamed_idx_1;
      u2 += tmp[i + 8] * u0;
      u2 += tmp[i + 12] * u1;
      tmp_2[i] = u2;
    }

    SideFusion_Fcn_B.Product2_hf[0] = tmp_2[0];
    SideFusion_Fcn_B.Product2_hf[1] = tmp_2[1];
    SideFusion_Fcn_B.Product2_hf[2] = tmp_2[2];
    SideFusion_Fcn_B.Product2_hf[3] = tmp_2[3];

    /* End of Product: '<S158>/Product2' */

    /* Saturate: '<S156>/Saturation10' */
    u0 = SideFusion_Fcn_B.Product2_hf[2];
    u1 = SideFusion_Fcn_P.Saturation10_LowerSat_n;
    u2 = SideFusion_Fcn_P.Saturation10_UpperSat_c;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation10_p = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation10_p = u1;
    } else {
      SideFusion_Fcn_B.Saturation10_p = u0;
    }

    /* End of Saturate: '<S156>/Saturation10' */

    /* Product: '<S158>/Product3' incorporates:
     *  Constant: '<S158>/Constant3'
     */
    memcpy(&tmp[0], &SideFusion_Fcn_B.Subtract1_m[0], sizeof(real_T) << 4U);
    unnamed_idx_0 = SideFusion_Fcn_P.Constant3_Value[0];
    unnamed_idx_1 = SideFusion_Fcn_P.Constant3_Value[1];
    u0 = SideFusion_Fcn_P.Constant3_Value[2];
    u1 = SideFusion_Fcn_P.Constant3_Value[3];
    for (i = 0; i < 4; i++) {
      u2 = tmp[i] * unnamed_idx_0;
      u2 += tmp[i + 4] * unnamed_idx_1;
      u2 += tmp[i + 8] * u0;
      u2 += tmp[i + 12] * u1;
      tmp_2[i] = u2;
    }

    SideFusion_Fcn_B.Product3_m[0] = tmp_2[0];
    SideFusion_Fcn_B.Product3_m[1] = tmp_2[1];
    SideFusion_Fcn_B.Product3_m[2] = tmp_2[2];
    SideFusion_Fcn_B.Product3_m[3] = tmp_2[3];

    /* End of Product: '<S158>/Product3' */

    /* Saturate: '<S156>/Saturation11' */
    u0 = SideFusion_Fcn_B.Product3_m[2];
    u1 = SideFusion_Fcn_P.Saturation11_LowerSat_p;
    u2 = SideFusion_Fcn_P.Saturation11_UpperSat_g;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation11_e = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation11_e = u1;
    } else {
      SideFusion_Fcn_B.Saturation11_e = u0;
    }

    /* End of Saturate: '<S156>/Saturation11' */

    /* Saturate: '<S156>/Saturation12' */
    u0 = SideFusion_Fcn_B.Product_oz[3];
    u1 = SideFusion_Fcn_P.Saturation12_LowerSat_n;
    u2 = SideFusion_Fcn_P.Saturation12_UpperSat_j;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation12_g = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation12_g = u1;
    } else {
      SideFusion_Fcn_B.Saturation12_g = u0;
    }

    /* End of Saturate: '<S156>/Saturation12' */

    /* Saturate: '<S156>/Saturation13' */
    u0 = SideFusion_Fcn_B.Product1_b4[3];
    u1 = SideFusion_Fcn_P.Saturation13_LowerSat_k;
    u2 = SideFusion_Fcn_P.Saturation13_UpperSat_m;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation13_h = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation13_h = u1;
    } else {
      SideFusion_Fcn_B.Saturation13_h = u0;
    }

    /* End of Saturate: '<S156>/Saturation13' */

    /* Saturate: '<S156>/Saturation14' */
    u0 = SideFusion_Fcn_B.Product2_hf[3];
    u1 = SideFusion_Fcn_P.Saturation14_LowerSat_f;
    u2 = SideFusion_Fcn_P.Saturation14_UpperSat_i;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation14_e = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation14_e = u1;
    } else {
      SideFusion_Fcn_B.Saturation14_e = u0;
    }

    /* End of Saturate: '<S156>/Saturation14' */

    /* Saturate: '<S156>/Saturation16' */
    u0 = SideFusion_Fcn_B.Product3_m[3];
    u1 = SideFusion_Fcn_P.Saturation16_LowerSat;
    u2 = SideFusion_Fcn_P.Saturation16_UpperSat;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation16 = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation16 = u1;
    } else {
      SideFusion_Fcn_B.Saturation16 = u0;
    }

    /* End of Saturate: '<S156>/Saturation16' */

    /* Saturate: '<S156>/Saturation2' */
    u0 = SideFusion_Fcn_B.Product2_hf[0];
    u1 = SideFusion_Fcn_P.Saturation2_LowerSat_g;
    u2 = SideFusion_Fcn_P.Saturation2_UpperSat_h;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation2_j = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation2_j = u1;
    } else {
      SideFusion_Fcn_B.Saturation2_j = u0;
    }

    /* End of Saturate: '<S156>/Saturation2' */

    /* Saturate: '<S156>/Saturation3' */
    u0 = SideFusion_Fcn_B.Product3_m[0];
    u1 = SideFusion_Fcn_P.Saturation3_LowerSat_i;
    u2 = SideFusion_Fcn_P.Saturation3_UpperSat_l;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation3_h = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation3_h = u1;
    } else {
      SideFusion_Fcn_B.Saturation3_h = u0;
    }

    /* End of Saturate: '<S156>/Saturation3' */

    /* Saturate: '<S156>/Saturation4' */
    u0 = SideFusion_Fcn_B.Product_oz[1];
    u1 = SideFusion_Fcn_P.Saturation4_LowerSat_g;
    u2 = SideFusion_Fcn_P.Saturation4_UpperSat_p;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation4_j = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation4_j = u1;
    } else {
      SideFusion_Fcn_B.Saturation4_j = u0;
    }

    /* End of Saturate: '<S156>/Saturation4' */

    /* Saturate: '<S156>/Saturation5' */
    u0 = SideFusion_Fcn_B.Product1_b4[1];
    u1 = SideFusion_Fcn_P.Saturation5_LowerSat_i;
    u2 = SideFusion_Fcn_P.Saturation5_UpperSat_g;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation5_o = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation5_o = u1;
    } else {
      SideFusion_Fcn_B.Saturation5_o = u0;
    }

    /* End of Saturate: '<S156>/Saturation5' */

    /* Saturate: '<S156>/Saturation6' */
    u0 = SideFusion_Fcn_B.Product2_hf[1];
    u1 = SideFusion_Fcn_P.Saturation6_LowerSat_m;
    u2 = SideFusion_Fcn_P.Saturation6_UpperSat_c;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation6_o = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation6_o = u1;
    } else {
      SideFusion_Fcn_B.Saturation6_o = u0;
    }

    /* End of Saturate: '<S156>/Saturation6' */

    /* Saturate: '<S156>/Saturation7' */
    u0 = SideFusion_Fcn_B.Product3_m[1];
    u1 = SideFusion_Fcn_P.Saturation7_LowerSat_n;
    u2 = SideFusion_Fcn_P.Saturation7_UpperSat_o;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation7_d = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation7_d = u1;
    } else {
      SideFusion_Fcn_B.Saturation7_d = u0;
    }

    /* End of Saturate: '<S156>/Saturation7' */

    /* Saturate: '<S156>/Saturation8' */
    u0 = SideFusion_Fcn_B.Product_oz[2];
    u1 = SideFusion_Fcn_P.Saturation8_LowerSat_h;
    u2 = SideFusion_Fcn_P.Saturation8_UpperSat_f;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation8_l = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation8_l = u1;
    } else {
      SideFusion_Fcn_B.Saturation8_l = u0;
    }

    /* End of Saturate: '<S156>/Saturation8' */

    /* Saturate: '<S156>/Saturation9' */
    u0 = SideFusion_Fcn_B.Product1_b4[2];
    u1 = SideFusion_Fcn_P.Saturation9_LowerSat_n;
    u2 = SideFusion_Fcn_P.Saturation9_UpperSat_h;
    if (u0 > u2) {
      SideFusion_Fcn_B.Saturation9_m = u2;
    } else if (u0 < u1) {
      SideFusion_Fcn_B.Saturation9_m = u1;
    } else {
      SideFusion_Fcn_B.Saturation9_m = u0;
    }

    /* End of Saturate: '<S156>/Saturation9' */

    /* Product: '<S165>/Divide3' */
    memcpy(&tmp_0[0], &SideFusion_Fcn_B.K4X2[0], sizeof(real_T) << 3U);
    unnamed_idx_0 = SideFusion_Fcn_B.V2X1[0];
    unnamed_idx_1 = SideFusion_Fcn_B.V2X1[1];
    for (i = 0; i < 4; i++) {
      u2 = tmp_0[i] * unnamed_idx_0;
      u2 += tmp_0[i + 4] * unnamed_idx_1;
      tmp_2[i] = u2;
    }

    SideFusion_Fcn_B.uX1[0] = tmp_2[0];
    SideFusion_Fcn_B.uX1[1] = tmp_2[1];
    SideFusion_Fcn_B.uX1[2] = tmp_2[2];
    SideFusion_Fcn_B.uX1[3] = tmp_2[3];

    /* End of Product: '<S165>/Divide3' */

    /* Sum: '<S165>/Subtract1' */
    SideFusion_Fcn_B.Subtract1_b[0] = SideFusion_Fcn_B.Pre_x +
      SideFusion_Fcn_B.uX1[0];
    SideFusion_Fcn_B.Subtract1_b[1] = SideFusion_Fcn_B.Pre_vx +
      SideFusion_Fcn_B.uX1[1];
    SideFusion_Fcn_B.Subtract1_b[2] = SideFusion_Fcn_B.Pre_y +
      SideFusion_Fcn_B.uX1[2];
    SideFusion_Fcn_B.Subtract1_b[3] = SideFusion_Fcn_B.Pre_vy +
      SideFusion_Fcn_B.uX1[3];

    /* SignalConversion: '<S25>/OutportBufferForRangeY' */
    SideFusion_Fcn_B.OutportBufferForRangeY = SideFusion_Fcn_B.Subtract1_b[2];

    /* SignalConversion: '<S25>/OutportBufferForVelX' */
    SideFusion_Fcn_B.OutportBufferForVelX = SideFusion_Fcn_B.Subtract1_b[1];

    /* SignalConversion: '<S25>/OutportBufferForVelY' */
    SideFusion_Fcn_B.OutportBufferForVelY = SideFusion_Fcn_B.Subtract1_b[3];

    /* End of Outputs for SubSystem: '<S16>/Tracker_Update.Tracker_Filter.Update.Update' */
    SideFusion_Fcn_DW.FusDataInternal_temp[40 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Subtract1_b[0];
    SideFusion_Fcn_DW.FusDataInternal_temp[80 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.OutportBufferForVelX;
    SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.OutportBufferForRangeY;
    SideFusion_Fcn_DW.FusDataInternal_temp[160 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.OutportBufferForVelY;
    SideFusion_Fcn_DW.FusDataInternal_temp[280 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation_c;
    SideFusion_Fcn_DW.FusDataInternal_temp[320 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation1_c;
    SideFusion_Fcn_DW.FusDataInternal_temp[360 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation2_j;
    SideFusion_Fcn_DW.FusDataInternal_temp[400 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation3_h;
    SideFusion_Fcn_DW.FusDataInternal_temp[440 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation4_j;
    SideFusion_Fcn_DW.FusDataInternal_temp[480 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation5_o;
    SideFusion_Fcn_DW.FusDataInternal_temp[520 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation6_o;
    SideFusion_Fcn_DW.FusDataInternal_temp[560 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation7_d;
    SideFusion_Fcn_DW.FusDataInternal_temp[600 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation8_l;
    SideFusion_Fcn_DW.FusDataInternal_temp[640 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation9_m;
    SideFusion_Fcn_DW.FusDataInternal_temp[680 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation10_p;
    SideFusion_Fcn_DW.FusDataInternal_temp[720 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation11_e;
    SideFusion_Fcn_DW.FusDataInternal_temp[760 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation12_g;
    SideFusion_Fcn_DW.FusDataInternal_temp[800 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation13_h;
    SideFusion_Fcn_DW.FusDataInternal_temp[840 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation14_e;
    SideFusion_Fcn_DW.FusDataInternal_temp[880 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.Saturation16;
    SideFusion_Fcn_DW.FusDataInternal_temp[(int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[(int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[200 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[200 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[240 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[240 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[920 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[960 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[960 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[1000 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[1000 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[1040 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[1040 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[1080 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[1080 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[1120 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[1120 + (int32_T)SideFusion_Fcn_DW.t];
    if (SideFusion_Fcn_DW.DataSource == 1.0) {
      /* Transition: '<S16>:3845' */
      /* Transition: '<S16>:3847' */
      SideFusion_Fcn_DW.FusDataInternal_temp[1000 + (int32_T)SideFusion_Fcn_DW.t]
        = 1.0;

      /* Transition: '<S16>:3859' */
      /* Transition: '<S16>:3860' */
      /* Transition: '<S16>:3864' */
    } else {
      /* Transition: '<S16>:3849' */
      if (SideFusion_Fcn_DW.DataSource == 2.0) {
        /* Transition: '<S16>:3852' */
        /* Transition: '<S16>:3858' */
        SideFusion_Fcn_DW.FusDataInternal_temp[1040 + (int32_T)
          SideFusion_Fcn_DW.t] = 1.0;

        /* Transition: '<S16>:3860' */
        /* Transition: '<S16>:3864' */
      } else {
        /* Transition: '<S16>:3854' */
        if (SideFusion_Fcn_DW.DataSource == 3.0) {
          /* Transition: '<S16>:3856' */
          /* Transition: '<S16>:3862' */
          SideFusion_Fcn_DW.FusDataInternal_temp[1080 + (int32_T)
            SideFusion_Fcn_DW.t] = 1.0;

          /* Transition: '<S16>:3864' */
        } else {
          /* Transition: '<S16>:3863' */
          SideFusion_Fcn_DW.FusDataInternal_temp[1120 + (int32_T)
            SideFusion_Fcn_DW.t] = 1.0;
        }
      }
    }

    /* Transition: '<S16>:3882' */
    /* Transition: '<S16>:3867' */
    /* Transition: '<S16>:3877' */
    /* Transition: '<S16>:3872' */
  } else {
    /* Transition: '<S16>:721' */
    SideFusion_Fcn_DW.UpdateTrackFlag[(int32_T)SideFusion_Fcn_DW.t] = 0.0;

    /* Could not find measurement to update tracker */
    SideFusion_Fcn_DW.FusDataInternal_temp[(int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[(int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[40 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[40 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[80 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[80 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[120 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[160 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[160 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[200 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[200 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[240 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[240 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[280 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[280 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[320 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[320 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[360 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[360 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[400 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[400 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[440 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[440 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[480 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[480 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[520 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[520 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[560 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[560 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[600 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[600 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[640 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[640 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[680 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[680 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[720 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[720 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[760 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[760 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[800 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[800 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[840 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[840 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[880 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[880 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[920 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[960 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[960 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[1000 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[1000 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[1040 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[1040 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[1080 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[1080 + (int32_T)SideFusion_Fcn_DW.t];
    SideFusion_Fcn_DW.FusDataInternal_temp[1120 + (int32_T)SideFusion_Fcn_DW.t] =
      SideFusion_Fcn_B.FusDataInternal[1120 + (int32_T)SideFusion_Fcn_DW.t];
    if (SideFusion_Fcn_DW.DataSource == 1.0) {
      /* Transition: '<S16>:3874' */
      /* Transition: '<S16>:3866' */
      SideFusion_Fcn_DW.FusDataInternal_temp[1000 + (int32_T)SideFusion_Fcn_DW.t]
        = 0.0;

      /* Transition: '<S16>:3867' */
      /* Transition: '<S16>:3877' */
      /* Transition: '<S16>:3872' */
    } else {
      /* Transition: '<S16>:3887' */
      if (SideFusion_Fcn_DW.DataSource == 2.0) {
        /* Transition: '<S16>:3881' */
        /* Transition: '<S16>:3869' */
        SideFusion_Fcn_DW.FusDataInternal_temp[1040 + (int32_T)
          SideFusion_Fcn_DW.t] = 0.0;

        /* Transition: '<S16>:3877' */
        /* Transition: '<S16>:3872' */
      } else {
        /* Transition: '<S16>:3885' */
        if (SideFusion_Fcn_DW.DataSource == 3.0) {
          /* Transition: '<S16>:3879' */
          /* Transition: '<S16>:3870' */
          SideFusion_Fcn_DW.FusDataInternal_temp[1080 + (int32_T)
            SideFusion_Fcn_DW.t] = 0.0;

          /* Transition: '<S16>:3872' */
        } else {
          /* Transition: '<S16>:3868' */
          SideFusion_Fcn_DW.FusDataInternal_temp[1120 + (int32_T)
            SideFusion_Fcn_DW.t] = 0.0;
        }
      }
    }
  }

  /* Transition: '<S16>:826' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Tracker_Filter(void)
{
  /* Graphical Function 'Tracker_Filter': '<S16>:615' */
  /* Transition: '<S16>:625' */
  /* Transition: '<S16>:628' */
  SideFusion_F_Measurement_Select();
  SideFusion_Fcn_Update();
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Tracker_Update(void)
{
  /* Graphical Function 'Tracker_Update': '<S16>:553' */
  /* Transition: '<S16>:606' */
  while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
    /* Transition: '<S16>:609' */
    /* Transition: '<S16>:611' */
    SideFusion_Fcn_Tracker_Filter();

    /* Transition: '<S16>:612' */
    SideFusion_Fcn_DW.t++;
  }

  /* Transition: '<S16>:614' */
  SideFusion_Fcn_DW.t = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static real_T SideFusion_Fcn_OutLFSRRFOV(void)
{
  real_T OutLFSRRFOV;

  /* Graphical Function 'OutLFSRRFOV': '<S16>:1393' */
  /* Transition: '<S16>:1402' */
  if (((SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.t] - 0.95) - SideFusion_Fcn_DW.FusDataInternal_temp[40
       + (int32_T)SideFusion_Fcn_DW.t] * -0.2679 > 0.0) &&
      ((SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.t] - 0.95) - (-SideFusion_Fcn_DW.FusDataInternal_temp
        [40 + (int32_T)SideFusion_Fcn_DW.t]) > 0.0)) {
    /* Transition: '<S16>:1412' */
    /* Transition: '<S16>:1407' */
    OutLFSRRFOV = 0.0;

    /* Transition: '<S16>:1410' */
  } else {
    /* Transition: '<S16>:1409' */
    OutLFSRRFOV = 1.0;
  }

  /* Transition: '<S16>:1411' */
  return OutLFSRRFOV;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static real_T SideFusion_Fcn_OutRFSRRFOV(void)
{
  real_T OutRFSRRFOV;

  /* Graphical Function 'OutRFSRRFOV': '<S16>:1422' */
  /* Transition: '<S16>:1428' */
  if (((SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.t] + 0.95) - SideFusion_Fcn_DW.FusDataInternal_temp[40
       + (int32_T)SideFusion_Fcn_DW.t] * 0.2679 < 0.0) &&
      ((SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.t] + 0.95) - SideFusion_Fcn_DW.FusDataInternal_temp[40
       + (int32_T)SideFusion_Fcn_DW.t] < 0.0)) {
    /* Transition: '<S16>:1429' */
    /* Transition: '<S16>:1431' */
    OutRFSRRFOV = 0.0;

    /* Transition: '<S16>:1432' */
  } else {
    /* Transition: '<S16>:1430' */
    OutRFSRRFOV = 1.0;
  }

  /* Transition: '<S16>:1433' */
  return OutRFSRRFOV;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static real_T SideFusion_Fcn_OutLRSRRFOV(void)
{
  real_T OutLRSRRFOV;

  /* Graphical Function 'OutLRSRRFOV': '<S16>:1443' */
  /* Transition: '<S16>:1449' */
  if (((SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.t] - 0.95) - (SideFusion_Fcn_DW.FusDataInternal_temp
        [40 + (int32_T)SideFusion_Fcn_DW.t] + 5.2) * 0.2679 > 0.0) &&
      ((SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.t] - 0.95) - (SideFusion_Fcn_DW.FusDataInternal_temp
        [40 + (int32_T)SideFusion_Fcn_DW.t] + 5.2) > 0.0)) {
    /* Transition: '<S16>:1450' */
    /* Transition: '<S16>:1452' */
    OutLRSRRFOV = 0.0;

    /* Transition: '<S16>:1453' */
  } else {
    /* Transition: '<S16>:1451' */
    OutLRSRRFOV = 1.0;
  }

  /* Transition: '<S16>:1454' */
  return OutLRSRRFOV;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static real_T SideFusion_Fcn_OutRRSRRFOV(void)
{
  real_T OutRRSRRFOV;

  /* Graphical Function 'OutRRSRRFOV': '<S16>:1467' */
  /* Transition: '<S16>:1473' */
  if (((SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.t] + 0.95) - (SideFusion_Fcn_DW.FusDataInternal_temp
        [40 + (int32_T)SideFusion_Fcn_DW.t] + 5.2) * -0.2679 < 0.0) &&
      ((SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.t] + 0.95) -
       (-(SideFusion_Fcn_DW.FusDataInternal_temp[40 + (int32_T)
          SideFusion_Fcn_DW.t] + 5.2)) < 0.0)) {
    /* Transition: '<S16>:1474' */
    /* Transition: '<S16>:1476' */
    OutRRSRRFOV = 0.0;

    /* Transition: '<S16>:1477' */
  } else {
    /* Transition: '<S16>:1475' */
    OutRRSRRFOV = 1.0;
  }

  /* Transition: '<S16>:1478' */
  return OutRRSRRFOV;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_ExistScoreCal(void)
{
  /* Graphical Function 'ExistScoreCal': '<S16>:972' */
  /* Transition: '<S16>:993' */
  if (SideFusion_Fcn_DW.UpdateTrackFlag[(int32_T)SideFusion_Fcn_DW.t] == 1.0) {
    /* Transition: '<S16>:994' */
    /* Transition: '<S16>:995' */
    SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)SideFusion_Fcn_DW.t] +=
      5.0;
    if (SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)
        SideFusion_Fcn_DW.t] > 18.0) {
      /* Transition: '<S16>:1009' */
      /* Transition: '<S16>:1011' */
      SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)SideFusion_Fcn_DW.t]
        = 18.0;

      /* Transition: '<S16>:1014' */
    } else {
      /* Transition: '<S16>:1010' */
    }

    /* Transition: '<S16>:1012' */
    /* Transition: '<S16>:1419' */
    /* Transition: '<S16>:1439' */
    /* Transition: '<S16>:1460' */
    /* Transition: '<S16>:1464' */
  } else {
    /* Transition: '<S16>:1386' */
    if ((!((SideFusion_Fcn_DW.DataSource == 1.0) && (SideFusion_Fcn_OutLFSRRFOV()
           == 1.0) && ((SideFusion_Fcn_DW.FusDataInternal_temp[1040 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0) ||
                       (SideFusion_Fcn_DW.FusDataInternal_temp[1080 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0) ||
                       (SideFusion_Fcn_DW.FusDataInternal_temp[1120 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0)))) &&
        (!((SideFusion_Fcn_DW.DataSource == 2.0) && (SideFusion_Fcn_OutRFSRRFOV()
           == 1.0) && ((SideFusion_Fcn_DW.FusDataInternal_temp[1000 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0) ||
                       (SideFusion_Fcn_DW.FusDataInternal_temp[1080 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0) ||
                       (SideFusion_Fcn_DW.FusDataInternal_temp[1120 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0)))) &&
        (!((SideFusion_Fcn_DW.DataSource == 3.0) && (SideFusion_Fcn_OutLRSRRFOV()
           == 1.0) && ((SideFusion_Fcn_DW.FusDataInternal_temp[1000 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0) ||
                       (SideFusion_Fcn_DW.FusDataInternal_temp[1040 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0) ||
                       (SideFusion_Fcn_DW.FusDataInternal_temp[1120 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0)))) &&
        (!((SideFusion_Fcn_DW.DataSource == 4.0) && (SideFusion_Fcn_OutRRSRRFOV()
           == 1.0) && ((SideFusion_Fcn_DW.FusDataInternal_temp[1000 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0) ||
                       (SideFusion_Fcn_DW.FusDataInternal_temp[1040 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0) ||
                       (SideFusion_Fcn_DW.FusDataInternal_temp[1080 + (int32_T)
                        SideFusion_Fcn_DW.t] != 0.0))))) {
      /* Transition: '<S16>:1414' */
      /* Transition: '<S16>:1434' */
      /* Transition: '<S16>:1457' */
      /* Transition: '<S16>:1463' */
      SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)SideFusion_Fcn_DW.t]
        -= 9.0;
    } else {
      /* Transition: '<S16>:1388' */
      /* Source is LFSRR and out of FOV */
      /* Transition: '<S16>:1390' */
      /* Transition: '<S16>:1419' */
      /* Transition: '<S16>:1439' */
      /* Transition: '<S16>:1460' */
      /* Transition: '<S16>:1464' */
      /* Transition: '<S16>:1416' */
      /* Source is RFSRR and out of FOV */
      /* Transition: '<S16>:1418' */
      /* Transition: '<S16>:1439' */
      /* Transition: '<S16>:1460' */
      /* Transition: '<S16>:1464' */
      /* Transition: '<S16>:1435' */
      /* Source is LRSRR and out of FOV */
      /* Transition: '<S16>:1440' */
      /* Transition: '<S16>:1460' */
      /* Transition: '<S16>:1464' */
      /* Transition: '<S16>:1455' */
      /* Source is RRSRR and out of FOV */
      /* Transition: '<S16>:1461' */
      /* Transition: '<S16>:1464' */
    }
  }

  /* Transition: '<S16>:996' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fc_Del_InternalTrack(void)
{
  /* Graphical Function 'Del_InternalTrack': '<S16>:1219' */
  /* Transition: '<S16>:1224' */
  SideFusion_Fcn_DW.IDUsedFlag[(int32_T)SideFusion_Fcn_DW.FusDataInternal_temp
    [(int32_T)SideFusion_Fcn_DW.t]] = 0.0;

  /* Reflash ID Used Flag */
  while (SideFusion_Fcn_DW.c < 28.0) {
    /* Transition: '<S16>:1225' */
    /* Transition: '<S16>:1228' */
    SideFusion_Fcn_DW.FusDataInternal_temp[(int32_T)SideFusion_Fcn_DW.t + 40 *
      (int32_T)SideFusion_Fcn_DW.c] = 0.0;

    /* Transition: '<S16>:1226' */
    SideFusion_Fcn_DW.c++;
  }

  /* Transition: '<S16>:1227' */
  SideFusion_Fcn_DW.c = 0.0;
  SideFusion_Fcn_DW.TrackCounter++;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_OutputTrack(void)
{
  boolean_T guard1 = false;

  /* Graphical Function 'OutputTrack': '<S16>:1186' */
  /* Transition: '<S16>:1201' */
  if (SideFusion_Fcn_DW.FusDataInternal_temp[960 + (int32_T)SideFusion_Fcn_DW.t]
      == 0.0) {
    /* Transition: '<S16>:1202' */
    /* Not a confirmed track */
    if (SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)
        SideFusion_Fcn_DW.t] < 15.0) {
      /* Transition: '<S16>:1203' */
      /* Transition: '<S16>:1206' */
      SideFusion_Fcn_DW.TrackCounter++;

      /* Transition: '<S16>:1217' */
    } else {
      /* Transition: '<S16>:1205' */
      SideFusion_Fcn_DW.FusDataInternal_temp[960 + (int32_T)SideFusion_Fcn_DW.t]
        = 1.0;

      /* New confirmed track */
      /* Transition: '<S16>:1207' */
      guard1 = true;
    }
  } else {
    /* Transition: '<S16>:1204' */
    guard1 = true;
  }

  if (guard1) {
    /* Transition: '<S16>:1208' */
    SideFusion_Fcn_B.SideFusOut[(int32_T)SideFusion_Fcn_B.Num_Out] =
      SideFusion_Fcn_DW.FusDataInternal_temp[(int32_T)SideFusion_Fcn_DW.t];

    /* ID */
    SideFusion_Fcn_B.SideFusOut[40 + (int32_T)SideFusion_Fcn_B.Num_Out] =
      SideFusion_Fcn_DW.FusDataInternal_temp[40 + (int32_T)SideFusion_Fcn_DW.t];

    /* Range X */
    SideFusion_Fcn_B.SideFusOut[80 + (int32_T)SideFusion_Fcn_B.Num_Out] =
      SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)SideFusion_Fcn_DW.t];

    /* Range Y */
    SideFusion_Fcn_B.SideFusOut[120 + (int32_T)SideFusion_Fcn_B.Num_Out] =
      SideFusion_Fcn_DW.FusDataInternal_temp[200 + (int32_T)SideFusion_Fcn_DW.t];

    /*  Move Info
       Select outputs signals from Internal to output */
    SideFusion_Fcn_DW.TrackCounter++;
    SideFusion_Fcn_B.Num_Out++;

    /* Transition: '<S16>:1216' */
  }

  /* Transition: '<S16>:1218' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_FusTrackManage(void)
{
  /* Graphical Function 'FusTrackManage': '<S16>:958' */
  /* Transition: '<S16>:965' */
  /* Transition: '<S16>:966' */
  SideFusion_Fcn_ExistScoreCal();
  if (SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)SideFusion_Fcn_DW.t]
      > 0.0) {
    /* Transition: '<S16>:967' */
    /* Marks >=0 */
    /* Transition: '<S16>:969' */
    SideFusion_Fcn_OutputTrack();

    /* Transition: '<S16>:970' */
  } else {
    /* Transition: '<S16>:968' */
    SideFusion_Fc_Del_InternalTrack();
  }

  /* Transition: '<S16>:971' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Tracker_Manager(void)
{
  /* Graphical Function 'Tracker_Manager': '<S16>:828' */
  /* Transition: '<S16>:833' */
  while (SideFusion_Fcn_DW.t < SideFusion_Fcn_DW.Num_Trg) {
    /* Transition: '<S16>:834' */
    /* Transition: '<S16>:837' */
    SideFusion_Fcn_FusTrackManage();

    /* Transition: '<S16>:835' */
    SideFusion_Fcn_DW.t++;
  }

  /* Transition: '<S16>:836' */
  SideFusion_Fcn_DW.t = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fc_Unused_Return_Gen(void)
{
  /* Graphical Function 'Unused_Return_Gen': '<S16>:1655' */
  /* Transition: '<S16>:1659' */
  SideFusion_Fcn_DW.Num_Returns = 0.0;
  while (SideFusion_Fcn_DW.k < SideFusion_Fcn_B.Measure_Num) {
    /* Transition: '<S16>:1663' */
    if (SideFusion_Fcn_B.Measure_Data[160 + (int32_T)SideFusion_Fcn_DW.k] == 0.0)
    {
      /* Transition: '<S16>:1665' */
      /* Transition: '<S16>:1667' */
      SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.Num_Returns] =
        SideFusion_Fcn_B.Measure_Data[40 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.Num_Returns] =
        SideFusion_Fcn_B.Measure_Data[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.Num_Returns] =
        SideFusion_Fcn_B.Measure_Data[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Num_Returns++;

      /* Transition: '<S16>:1673' */
    } else {
      /* Transition: '<S16>:1671' */
    }

    /* Transition: '<S16>:1672' */
    SideFusion_Fcn_DW.k++;
  }

  /* Transition: '<S16>:1675' */
  SideFusion_Fcn_DW.k = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_LFFirstTrackGen(void)
{
  real_T Group_X;
  real_T Group_Y;

  /* Graphical Function 'LFFirstTrackGen': '<S16>:1842' */
  /* Transition: '<S16>:3323' */
  if (SideFusion_Fcn_DW.Num_Returns > 1.0) {
    /* Transition: '<S16>:3325' */
    /* Two return, begine compare */
    /* Transition: '<S16>:3307' */
    SideFusion_Fcn_DW.j = 1.0;
    while (SideFusion_Fcn_DW.k < SideFusion_Fcn_DW.Num_Returns - 1.0) {
      /* Transition: '<S16>:3308' */
      if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.k] == 0.0) {
        /* Transition: '<S16>:3302' */
        while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
          /* Transition: '<S16>:3310' */
          if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] ==
              0.0) {
            /* Transition: '<S16>:3319' */
            if ((SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) *
                (SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
                (SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
                (SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) <=
                SideFusion_Fcn_Ini_Group_Dist) {
              /* Transition: '<S16>:3317' */
              /* Transition: '<S16>:3329' */
              SideFusion_Fcn_DW.Group_Data[(int32_T)SideFusion_Fcn_DW.Group_Num]
                = SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
              SideFusion_Fcn_DW.Group_Data[10 + (int32_T)
                SideFusion_Fcn_DW.Group_Num] = SideFusion_Fcn_DW.Returns[10 +
                (int32_T)SideFusion_Fcn_DW.j];
              SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;
              SideFusion_Fcn_DW.Group_Num++;

              /* Transition: '<S16>:3331' */
            } else {
              /* Transition: '<S16>:3332' */
            }

            /* Transition: '<S16>:3333' */
          } else {
            /* Transition: '<S16>:3321' */
          }

          /* Transition: '<S16>:3313' */
          SideFusion_Fcn_DW.j++;
        }

        /* Transition: '<S16>:3315' */
        Group_X = SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k];
        Group_Y = SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k];
        if (SideFusion_Fcn_DW.Group_Num > 0.0) {
          /* Transition: '<S16>:3335' */
          /* There exist more than one near unused returns */
          while (SideFusion_Fcn_DW.n < SideFusion_Fcn_DW.Group_Num) {
            /* Transition: '<S16>:3343' */
            /* Transition: '<S16>:3345' */
            Group_X += SideFusion_Fcn_DW.Group_Data[(int32_T)SideFusion_Fcn_DW.n];
            Group_Y += SideFusion_Fcn_DW.Group_Data[10 + (int32_T)
              SideFusion_Fcn_DW.n];

            /* Transition: '<S16>:3346' */
            SideFusion_Fcn_DW.n++;
          }

          /* Transition: '<S16>:3348' */
          SideFusion_Fcn_DW.n = 0.0;
          Group_X /= SideFusion_Fcn_DW.Group_Num + 1.0;
          Group_Y /= SideFusion_Fcn_DW.Group_Num + 1.0;

          /* Transition: '<S16>:3351' */
        } else {
          /* Transition: '<S16>:3350' */
        }

        /* Transition: '<S16>:3337' */
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[(int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = Group_X;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[20 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = Group_Y;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[40 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 1.0;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[60 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 1.0;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[80 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = Group_X;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[100 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = Group_Y;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[120 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[140 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[160 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[180 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[200 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[220 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New++;

        /* Transition: '<S16>:3353' */
        /* Transition: '<S16>:3354' */
      } else {
        /* Transition: '<S16>:3298' */
      }

      /* Transition: '<S16>:3295' */
      SideFusion_Fcn_DW.k++;
      SideFusion_Fcn_DW.j = SideFusion_Fcn_DW.k + 1.0;
      SideFusion_Fcn_DW.Group_Num = 0.0;
      memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
    }

    /* Transition: '<S16>:3306' */
    SideFusion_Fcn_DW.k = 0.0;
    SideFusion_Fcn_DW.j = 0.0;

    /* Transition: '<S16>:3355' */
    /* Transition: '<S16>:3362' */
  } else {
    /* Transition: '<S16>:3357' */
    if ((SideFusion_Fcn_DW.Num_Returns == 1.0) && (SideFusion_Fcn_DW.Returns[20]
         == 0.0)) {
      /* Transition: '<S16>:3359' */
      /* One return, no need to compare */
      /* Transition: '<S16>:3361' */
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[0];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[10];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 1.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 1.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[0];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[10];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New++;

      /* Transition: '<S16>:3362' */
    } else {
      /* Transition: '<S16>:3327' */
    }
  }

  /* Transition: '<S16>:3364' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_TrackIni(real_T ini_x, real_T ini_y)
{
  int32_T LoopError;
  int32_T exitg1;

  /* Graphical Function 'TrackIni': '<S16>:2715' */
  /* Transition: '<S16>:2740' */
  LoopError = 0;

  /* Transition: '<S16>:2778' */
  do {
    exitg1 = 0;

    /* Transition: '<S16>:2745' */
    SideFusion_Fcn_DW.LastFusID++;
    if (!(SideFusion_Fcn_DW.LastFusID < 127.0)) {
      /* Transition: '<S16>:2753' */
      SideFusion_Fcn_DW.LastFusID = 1.0;

      /* Transition: '<S16>:2755' */
    } else {
      /* Transition: '<S16>:2746' */
      /* Transition: '<S16>:2754' */
    }

    /* Transition: '<S16>:2756' */
    if (SideFusion_Fcn_DW.IDUsedFlag[(int32_T)SideFusion_Fcn_DW.LastFusID] ==
        0.0) {
      /* Transition: '<S16>:2759' */
      /* Transition: '<S16>:2762' */
      SideFusion_Fcn_DW.IDUsedFlag[(int32_T)SideFusion_Fcn_DW.LastFusID] = 1.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[(int32_T)
        SideFusion_Fcn_DW.TrackCounter] = SideFusion_Fcn_DW.LastFusID;
      SideFusion_Fcn_DW.FusDataInternal_temp[40 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = ini_x;
      SideFusion_Fcn_DW.FusDataInternal_temp[80 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[120 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = ini_y;
      SideFusion_Fcn_DW.FusDataInternal_temp[160 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[200 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[240 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[280 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = SideFusion_Fcn_RXX_SRR;
      SideFusion_Fcn_DW.FusDataInternal_temp[320 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[360 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[400 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[440 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[480 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 2.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[520 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[560 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[600 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[640 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[680 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = SideFusion_Fcn_RYY_SRR;
      SideFusion_Fcn_DW.FusDataInternal_temp[720 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[760 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[800 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[840 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[880 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 2.0;
      SideFusion_Fcn_DW.FusDataInternal_temp[920 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 5.0;

      /* FusMark */
      SideFusion_Fcn_DW.FusDataInternal_temp[960 + (int32_T)
        SideFusion_Fcn_DW.TrackCounter] = 0.0;

      /* Confrimed Flag */
      SideFusion_Fcn_DW.TrackCounter++;

      /* Transition: '<S16>:2770' */
      exitg1 = 1;
    } else if ((LoopError < 126) && (SideFusion_Fcn_DW.IDUsedFlag[(int32_T)
                SideFusion_Fcn_DW.LastFusID] == 1.0)) {
      /* Transition: '<S16>:2758' */
      /* Transition: '<S16>:2752' */
      LoopError++;
    } else {
      /* Transition: '<S16>:2761' */
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* Transition: '<S16>:2784' */
  /* Transition: '<S16>:2786' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_FifthTime_LF(void)
{
  real_T x_5_predict;
  real_T y_5_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_FifthTime_LF': '<S16>:1968' */
  /* Transition: '<S16>:2092' */
  Min_Distance_IniTrack = 9.0;
  x_5_predict = (SideFusion_Fcn_B.Ini_Tracker_LFSRR[200 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_B.Ini_Tracker_LFSRR[160 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  y_5_predict = (SideFusion_Fcn_B.Ini_Tracker_LFSRR[220 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_B.Ini_Tracker_LFSRR[180 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2085' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2891' */
      /* Transition: '<S16>:2081' */
      RelativeDist = (y_5_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_5_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_5_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_5_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[160 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[180 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[200 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[220 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:2975' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:2989' */
          /* Transition: '<S16>:2982' */
          /* Transition: '<S16>:2983' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:2980' */
            /* Transition: '<S16>:2972' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:2976' */
          } else {
            /* Transition: '<S16>:2978' */
          }

          /* Transition: '<S16>:2974' */
        } else {
          /* Transition: '<S16>:2988' */
          /* Transition: '<S16>:2984' */
        }

        /* Transition: '<S16>:2986' */
      } else {
        /* Transition: '<S16>:2090' */
      }

      /* Transition: '<S16>:2893' */
    } else {
      /* Transition: '<S16>:2894' */
    }

    /* Transition: '<S16>:2079' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2086' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2088' */
    /* Means that the tracker k found measurement */
    /* Transition: '<S16>:2117' */
    SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

    /* Which means that the return is used */
    SideFusion_Fcn_TrackIni(SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn],
      SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn]);

    /* Transition: '<S16>:2120' */
  } else {
    /* Transition: '<S16>:2116' */
    /* cound not found, and enter 5 searches means that could not found once before, so delete  */
  }

  /* Transition: '<S16>:2101' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_ForthTime_LF(void)
{
  real_T x_4_predict;
  real_T y_4_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_ForthTime_LF': '<S16>:1820' */
  /* Transition: '<S16>:2045' */
  Min_Distance_IniTrack = 9.0;
  x_4_predict = (SideFusion_Fcn_B.Ini_Tracker_LFSRR[160 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  y_4_predict = (SideFusion_Fcn_B.Ini_Tracker_LFSRR[180 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2040' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2886' */
      /* Transition: '<S16>:2035' */
      RelativeDist = (y_4_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_4_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_4_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_4_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[160 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[180 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:2955' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:2969' */
          /* Transition: '<S16>:2962' */
          /* Transition: '<S16>:2963' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:2960' */
            /* Transition: '<S16>:2952' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:2956' */
          } else {
            /* Transition: '<S16>:2958' */
          }

          /* Transition: '<S16>:2954' */
        } else {
          /* Transition: '<S16>:2968' */
          /* Transition: '<S16>:2964' */
        }

        /* Transition: '<S16>:2966' */
      } else {
        /* Transition: '<S16>:2046' */
      }

      /* Transition: '<S16>:2889' */
    } else {
      /* Transition: '<S16>:2888' */
    }

    /* Transition: '<S16>:2041' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2042' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2048' */
    /* Means that the tracker k found measurement */
    if (SideFusion_Fcn_B.Ini_Tracker_LFSRR[60 + (int32_T)SideFusion_Fcn_DW.k] ==
        3.0) {
      /* Transition: '<S16>:2066' */
      /* Has found measurement 4 times and begin ini */
      /* Transition: '<S16>:2069' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_TrackIni(SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn],
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn]);

      /* Transition: '<S16>:2070' */
    } else {
      /* Transition: '<S16>:2050' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 4.0;

      /* Tracker counter */
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 3.0;

      /* Association counter */
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[180 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn];
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New++;
    }

    /* Transition: '<S16>:2056' */
    /* Transition: '<S16>:2077' */
  } else {
    /* Transition: '<S16>:2072' */
    if (SideFusion_Fcn_B.Ini_Tracker_LFSRR[60 + (int32_T)SideFusion_Fcn_DW.k] ==
        3.0) {
      /* Transition: '<S16>:2074' */
      /* Has found measurement 3 times before */
      /* Transition: '<S16>:2076' */
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = x_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = y_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 4.0;

      /* Tracker counter */
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 3.0;

      /* Association counter */
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[180 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = x_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = y_4_predict;
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New++;

      /* Transition: '<S16>:2077' */
    } else {
      /* Transition: '<S16>:2055' */
      /* Cound not found measurement twice,
         So not transfer tracker k to new list */
    }
  }

  /* Transition: '<S16>:2051' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_ThridTime_LF(void)
{
  real_T x_3_predict;
  real_T y_3_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_ThridTime_LF': '<S16>:1819' */
  /* Transition: '<S16>:1981' */
  Min_Distance_IniTrack = 9.0;
  x_3_predict = SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)
    SideFusion_Fcn_DW.k] * 2.0 - SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 +
    (int32_T)SideFusion_Fcn_DW.k];

  /* Use two point to predict next point based constant velocity */
  y_3_predict = SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)
    SideFusion_Fcn_DW.k] * 2.0 - SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 +
    (int32_T)SideFusion_Fcn_DW.k];

  /* Use two point to predict next point based constant velocity */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:1979' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2879' */
      /* Transition: '<S16>:1980' */
      RelativeDist = (y_3_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_3_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_3_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_3_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:2002' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:2943' */
          /* Transition: '<S16>:2947' */
          /* Transition: '<S16>:2948' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:2014' */
            /* Transition: '<S16>:2019' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:2022' */
          } else {
            /* Transition: '<S16>:2021' */
          }

          /* Transition: '<S16>:2023' */
        } else {
          /* Transition: '<S16>:2945' */
          /* Transition: '<S16>:2950' */
        }

        /* Transition: '<S16>:2951' */
      } else {
        /* Transition: '<S16>:2004' */
      }

      /* Transition: '<S16>:2884' */
    } else {
      /* Transition: '<S16>:2883' */
    }

    /* Transition: '<S16>:2005' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:1983' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2026' */
    /* Means that the tracker k found measurement */
    /* Transition: '<S16>:2028' */
    SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

    /* Which means that the return is used */
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[(int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = SideFusion_Fcn_DW.Returns
      [(int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[20 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = SideFusion_Fcn_DW.Returns
      [10 + (int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[40 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 3.0;

    /* Tracker counter */
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[60 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 3.0;

    /* Association counter */
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[80 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
      SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[100 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
      SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[120 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
      SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[140 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
      SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[160 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = SideFusion_Fcn_DW.Returns
      [(int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[180 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = SideFusion_Fcn_DW.Returns
      [10 + (int32_T)Updatereturn];
    SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New++;

    /* Transition: '<S16>:2031' */
  } else {
    /* Transition: '<S16>:2030' */
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[(int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = x_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[20 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = y_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[40 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 3.0;

    /* Tracker counter */
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[60 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 2.0;

    /* Association counter */
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[80 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
      SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[100 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
      SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[120 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
      SideFusion_Fcn_B.Ini_Tracker_LFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[140 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
      SideFusion_Fcn_B.Ini_Tracker_LFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[160 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = x_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[180 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = y_3_predict;
    SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New++;
  }

  /* Transition: '<S16>:2033' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fc_Ini_SecondTime_LF(void)
{
  real_T hoistedGlobal;
  real_T AssoFlgtm[10];

  /* Graphical Function 'Ini_SecondTime_LF': '<S16>:1788' */
  /* Transition: '<S16>:1822' */
  memset(&AssoFlgtm[0], 0, 10U * sizeof(real_T));
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:1895' */
    /* Transition: '<S16>:1897' */
    hoistedGlobal = SideFusion_Fcn_DW.j;

    /* Simulink Function 'VelocityMethod': '<S16>:1923' */
    SideFusion_Fcn_B.x_t = SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 + (int32_T)
      SideFusion_Fcn_DW.k];
    SideFusion_Fcn_B.y_t = SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 + (int32_T)
      SideFusion_Fcn_DW.k];
    SideFusion_Fcn_B.x_m = SideFusion_Fcn_DW.Returns[(int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.y_m = SideFusion_Fcn_DW.Returns[10 + (int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.vx_max = SideFusion_Fcn_vx_max;
    SideFusion_Fcn_B.vx_min = SideFusion_Fcn_vx_min;
    SideFusion_Fcn_B.vy_max = SideFusion_Fcn_vy_max;
    SideFusion_Fcn_B.vy_min = SideFusion_Fcn_vy_min;
    SideFusion_Fcn_B.Rxx = SideFusion_Fcn_RXX_SRR;
    SideFusion_Fcn_B.Ryy = SideFusion_Fcn_RYY_SRR;
    SideFusion_Fcn_B.threshod = SideFusion_Fcn_VelSearch_Th;
    SideFusion_Fcn_B.ts = 0.04;

    /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.VelocityMethod' */
    S_Tracker_InitialVelocityMethod(SideFusion_Fcn_B.x_m, SideFusion_Fcn_B.x_t,
      SideFusion_Fcn_B.vx_max, SideFusion_Fcn_B.ts, SideFusion_Fcn_B.vx_min,
      SideFusion_Fcn_B.y_m, SideFusion_Fcn_B.y_t, SideFusion_Fcn_B.vy_max,
      SideFusion_Fcn_B.vy_min, SideFusion_Fcn_B.Rxx, SideFusion_Fcn_B.Ryy,
      SideFusion_Fcn_B.threshod, &SideFusion_Fcn_B.Tracker_InitialVelocityMethod,
                                    (P_Tracker_InitialVelocityMeth_T *)
      &SideFusion_Fcn_P.Tracker_InitialVelocityMethod);

    /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.VelocityMethod' */
    AssoFlgtm[(int32_T)hoistedGlobal] =
      SideFusion_Fcn_B.Tracker_InitialVelocityMethod.MultiportSwitch_a;

    /* Velocity Association method */
    /* Transition: '<S16>:1929' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:1931' */
  SideFusion_Fcn_DW.j = 0.0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:1937' */
    if (AssoFlgtm[(int32_T)SideFusion_Fcn_DW.j] == 1.0) {
      /* Transition: '<S16>:1939' */
      /* Transition: '<S16>:1944' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 2.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] = 2.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_B.Ini_Tracker_LFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New++;

      /* Transition: '<S16>:1945' */
    } else {
      /* Transition: '<S16>:1941' */
    }

    /* Transition: '<S16>:1942' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:1975' */
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_LFSRR_Ini_Update(void)
{
  /* Graphical Function 'LFSRR_Ini_Update': '<S16>:1746' */
  /* Transition: '<S16>:1753' */
  if (SideFusion_Fcn_B.Ini_Tracker_LFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      4.0) {
    /* Transition: '<S16>:1761' */
    /* This Tracker has updated forth and find fifth measurement */
    /* Transition: '<S16>:1763' */
    SideFusion_Fcn_Ini_FifthTime_LF();

    /* Transition: '<S16>:1766' */
  } else {
    /* Transition: '<S16>:1765' */
  }

  /* Transition: '<S16>:1775' */
  if (SideFusion_Fcn_B.Ini_Tracker_LFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      3.0) {
    /* Transition: '<S16>:1767' */
    /* This Tracker has updated thrid and find forth measurement */
    /* Transition: '<S16>:1773' */
    SideFusion_Fcn_Ini_ForthTime_LF();

    /* Transition: '<S16>:1769' */
  } else {
    /* Transition: '<S16>:1768' */
  }

  /* Transition: '<S16>:1784' */
  if (SideFusion_Fcn_B.Ini_Tracker_LFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      2.0) {
    /* Transition: '<S16>:1781' */
    /* This Tracker has updated once and find thrid measurement */
    /* Transition: '<S16>:1777' */
    SideFusion_Fcn_Ini_ThridTime_LF();

    /* Transition: '<S16>:1782' */
  } else {
    /* Transition: '<S16>:1776' */
  }

  /* Transition: '<S16>:1786' */
  if (SideFusion_Fcn_B.Ini_Tracker_LFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      1.0) {
    /* Transition: '<S16>:1959' */
    /* This Tracker is first initial and use velocity to find next measurements */
    /* Transition: '<S16>:1960' */
    SideFusion_Fc_Ini_SecondTime_LF();

    /* Transition: '<S16>:1963' */
  } else {
    /* Transition: '<S16>:1961' */
  }

  /* Transition: '<S16>:1962' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_LFSRR_Ini(void)
{
  int32_T i;

  /* Graphical Function 'LFSRR_Ini': '<S16>:1681' */
  /* Transition: '<S16>:1729' */
  SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New = 0.0;
  for (i = 0; i < 280; i++) {
    SideFusion_Fcn_B.Ini_Tracker_LFSRR[i] =
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[i];
    SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[i] = 0.0;
  }

  memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
  SideFusion_Fcn_DW.Group_Num = 0.0;
  while (SideFusion_Fcn_DW.k < 20.0) {
    /* Transition: '<S16>:1731' */
    if (SideFusion_Fcn_B.Ini_Tracker_LFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] >
        0.0) {
      /* Transition: '<S16>:1737' */
      /* Transition: '<S16>:1739' */
      SideFusion_Fcn_LFSRR_Ini_Update();

      /* Transition: '<S16>:1743' */
    } else {
      /* Transition: '<S16>:1741' */
    }

    /* Transition: '<S16>:1742' */
    SideFusion_Fcn_DW.k++;
  }

  /* Transition: '<S16>:1745' */
  SideFusion_Fcn_DW.k = 0.0;

  /* Transition: '<S16>:1893' */
  SideFusion_Fcn_LFFirstTrackGen();
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_RFFirstTrackGen(void)
{
  real_T Group_X;
  real_T Group_Y;

  /* Graphical Function 'RFFirstTrackGen': '<S16>:3375' */
  /* Transition: '<S16>:3402' */
  if (SideFusion_Fcn_DW.Num_Returns > 1.0) {
    /* Transition: '<S16>:3403' */
    /* Two return, begine compare */
    /* Transition: '<S16>:3405' */
    SideFusion_Fcn_DW.j = 1.0;
    while (SideFusion_Fcn_DW.k < SideFusion_Fcn_DW.Num_Returns - 1.0) {
      /* Transition: '<S16>:3410' */
      if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.k] == 0.0) {
        /* Transition: '<S16>:3408' */
        while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
          /* Transition: '<S16>:3409' */
          if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] ==
              0.0) {
            /* Transition: '<S16>:3407' */
            if ((SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) *
                (SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
                (SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
                (SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) <=
                SideFusion_Fcn_Ini_Group_Dist) {
              /* Transition: '<S16>:3406' */
              /* Transition: '<S16>:3413' */
              SideFusion_Fcn_DW.Group_Data[(int32_T)SideFusion_Fcn_DW.Group_Num]
                = SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
              SideFusion_Fcn_DW.Group_Data[10 + (int32_T)
                SideFusion_Fcn_DW.Group_Num] = SideFusion_Fcn_DW.Returns[10 +
                (int32_T)SideFusion_Fcn_DW.j];
              SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;
              SideFusion_Fcn_DW.Group_Num++;

              /* Transition: '<S16>:3423' */
            } else {
              /* Transition: '<S16>:3412' */
            }

            /* Transition: '<S16>:3422' */
          } else {
            /* Transition: '<S16>:3417' */
          }

          /* Transition: '<S16>:3411' */
          SideFusion_Fcn_DW.j++;
        }

        /* Transition: '<S16>:3416' */
        Group_X = SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k];
        Group_Y = SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k];
        if (SideFusion_Fcn_DW.Group_Num > 0.0) {
          /* Transition: '<S16>:3424' */
          /* There exist more than one near unused returns */
          while (SideFusion_Fcn_DW.n < SideFusion_Fcn_DW.Group_Num) {
            /* Transition: '<S16>:3425' */
            /* Transition: '<S16>:3430' */
            Group_X += SideFusion_Fcn_DW.Group_Data[(int32_T)SideFusion_Fcn_DW.n];
            Group_Y += SideFusion_Fcn_DW.Group_Data[10 + (int32_T)
              SideFusion_Fcn_DW.n];

            /* Transition: '<S16>:3426' */
            SideFusion_Fcn_DW.n++;
          }

          /* Transition: '<S16>:3429' */
          SideFusion_Fcn_DW.n = 0.0;
          Group_X /= SideFusion_Fcn_DW.Group_Num + 1.0;
          Group_Y /= SideFusion_Fcn_DW.Group_Num + 1.0;

          /* Transition: '<S16>:3431' */
        } else {
          /* Transition: '<S16>:3428' */
        }

        /* Transition: '<S16>:3432' */
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[(int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = Group_X;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[20 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = Group_Y;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[40 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 1.0;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[60 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 1.0;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[80 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = Group_X;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[100 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = Group_Y;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[120 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[140 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[160 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[180 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[200 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[220 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New++;

        /* Transition: '<S16>:3435' */
        /* Transition: '<S16>:3427' */
      } else {
        /* Transition: '<S16>:3415' */
      }

      /* Transition: '<S16>:3414' */
      SideFusion_Fcn_DW.k++;
      SideFusion_Fcn_DW.j = SideFusion_Fcn_DW.k + 1.0;
      SideFusion_Fcn_DW.Group_Num = 0.0;
      memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
    }

    /* Transition: '<S16>:3418' */
    SideFusion_Fcn_DW.k = 0.0;
    SideFusion_Fcn_DW.j = 0.0;

    /* Transition: '<S16>:3434' */
    /* Transition: '<S16>:3433' */
  } else {
    /* Transition: '<S16>:3404' */
    if ((SideFusion_Fcn_DW.Num_Returns == 1.0) && (SideFusion_Fcn_DW.Returns[20]
         == 0.0)) {
      /* Transition: '<S16>:3419' */
      /* One return, no need to compare */
      /* Transition: '<S16>:3421' */
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[0];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[10];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 1.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 1.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[0];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[10];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 0.0;
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New++;

      /* Transition: '<S16>:3433' */
    } else {
      /* Transition: '<S16>:3420' */
    }
  }

  /* Transition: '<S16>:3436' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_FifthTime_RF(void)
{
  real_T x_5_predict;
  real_T y_5_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_FifthTime_RF': '<S16>:2176' */
  /* Transition: '<S16>:2190' */
  Min_Distance_IniTrack = 9.0;
  x_5_predict = (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[200 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_RFSRR[160 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  y_5_predict = (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[220 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_RFSRR[180 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2191' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2906' */
      /* Transition: '<S16>:2193' */
      RelativeDist = (y_5_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_5_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_5_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_5_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[160 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[180 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[200 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[220 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:3035' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3049' */
          /* Transition: '<S16>:3042' */
          /* Transition: '<S16>:3043' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3040' */
            /* Transition: '<S16>:3032' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:3036' */
          } else {
            /* Transition: '<S16>:3038' */
          }

          /* Transition: '<S16>:3034' */
        } else {
          /* Transition: '<S16>:3048' */
          /* Transition: '<S16>:3044' */
        }

        /* Transition: '<S16>:3046' */
      } else {
        /* Transition: '<S16>:2197' */
      }

      /* Transition: '<S16>:2909' */
    } else {
      /* Transition: '<S16>:2908' */
    }

    /* Transition: '<S16>:2192' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2194' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2202' */
    /* Means that the tracker k found measurement */
    /* Transition: '<S16>:2204' */
    SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

    /* Which means that the return is used */
    SideFusion_Fcn_TrackIni(SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn],
      SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn]);

    /* Transition: '<S16>:2205' */
  } else {
    /* Transition: '<S16>:2203' */
    /* cound not found, and enter 5 searches means that could not found once before, so delete  */
  }

  /* Transition: '<S16>:2206' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_ForthTime_RF(void)
{
  real_T x_4_predict;
  real_T y_4_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_ForthTime_RF': '<S16>:2207' */
  /* Transition: '<S16>:2226' */
  Min_Distance_IniTrack = 9.0;
  x_4_predict = (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[160 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  y_4_predict = (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[180 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2227' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2901' */
      /* Transition: '<S16>:2229' */
      RelativeDist = (y_4_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_4_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_4_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_4_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[160 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[180 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:3015' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3029' */
          /* Transition: '<S16>:3022' */
          /* Transition: '<S16>:3023' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3020' */
            /* Transition: '<S16>:3012' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:3016' */
          } else {
            /* Transition: '<S16>:3018' */
          }

          /* Transition: '<S16>:3014' */
        } else {
          /* Transition: '<S16>:3028' */
          /* Transition: '<S16>:3024' */
        }

        /* Transition: '<S16>:3026' */
      } else {
        /* Transition: '<S16>:2233' */
      }

      /* Transition: '<S16>:2904' */
    } else {
      /* Transition: '<S16>:2903' */
    }

    /* Transition: '<S16>:2228' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2230' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2238' */
    /* Means that the tracker k found measurement */
    if (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[60 + (int32_T)SideFusion_Fcn_DW.k] ==
        3.0) {
      /* Transition: '<S16>:2239' */
      /* Has found measurement 4 times and begin ini */
      /* Transition: '<S16>:2242' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_TrackIni(SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn],
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn]);

      /* Transition: '<S16>:2248' */
    } else {
      /* Transition: '<S16>:2241' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 4.0;

      /* Tracker counter */
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 3.0;

      /* Association counter */
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[180 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn];
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New++;
    }

    /* Transition: '<S16>:2247' */
    /* Transition: '<S16>:2246' */
  } else {
    /* Transition: '<S16>:2240' */
    if (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[60 + (int32_T)SideFusion_Fcn_DW.k] ==
        3.0) {
      /* Transition: '<S16>:2243' */
      /* Has found measurement 3 times before */
      /* Transition: '<S16>:2244' */
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = x_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = y_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 4.0;

      /* Tracker counter */
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 3.0;

      /* Association counter */
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[180 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = x_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = y_4_predict;
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New++;

      /* Transition: '<S16>:2246' */
    } else {
      /* Transition: '<S16>:2245' */
      /* Cound not found measurement twice,
         So not transfer tracker k to new list */
    }
  }

  /* Transition: '<S16>:2249' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_ThridTime_RF(void)
{
  real_T x_3_predict;
  real_T y_3_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_ThridTime_RF': '<S16>:2250' */
  /* Transition: '<S16>:2264' */
  Min_Distance_IniTrack = 9.0;
  x_3_predict = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)
    SideFusion_Fcn_DW.k] * 2.0 - SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 +
    (int32_T)SideFusion_Fcn_DW.k];

  /* Use two point to predict next point based constant velocity */
  y_3_predict = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)
    SideFusion_Fcn_DW.k] * 2.0 - SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 +
    (int32_T)SideFusion_Fcn_DW.k];

  /* Use two point to predict next point based constant velocity */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2265' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2896' */
      /* Transition: '<S16>:2267' */
      RelativeDist = (y_3_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_3_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_3_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_3_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:2995' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3009' */
          /* Transition: '<S16>:3002' */
          /* Transition: '<S16>:3003' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3000' */
            /* Transition: '<S16>:2992' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:2996' */
          } else {
            /* Transition: '<S16>:2998' */
          }

          /* Transition: '<S16>:2994' */
        } else {
          /* Transition: '<S16>:3008' */
          /* Transition: '<S16>:3004' */
        }

        /* Transition: '<S16>:3006' */
      } else {
        /* Transition: '<S16>:2271' */
      }

      /* Transition: '<S16>:2899' */
    } else {
      /* Transition: '<S16>:2898' */
    }

    /* Transition: '<S16>:2266' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2268' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2276' */
    /* Means that the tracker k found measurement */
    /* Transition: '<S16>:2278' */
    SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

    /* Which means that the return is used */
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[(int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = SideFusion_Fcn_DW.Returns
      [(int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[20 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = SideFusion_Fcn_DW.Returns
      [10 + (int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[40 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 3.0;

    /* Tracker counter */
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[60 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 3.0;

    /* Association counter */
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[80 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[100 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[120 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[140 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[160 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = SideFusion_Fcn_DW.Returns
      [(int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[180 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = SideFusion_Fcn_DW.Returns
      [10 + (int32_T)Updatereturn];
    SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New++;

    /* Transition: '<S16>:2279' */
  } else {
    /* Transition: '<S16>:2277' */
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[(int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = x_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[20 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = y_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[40 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 3.0;

    /* Tracker counter */
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[60 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 2.0;

    /* Association counter */
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[80 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[100 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[120 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[140 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[160 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = x_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[180 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = y_3_predict;
    SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New++;
  }

  /* Transition: '<S16>:2280' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fc_Ini_SecondTime_RF(void)
{
  real_T hoistedGlobal;
  real_T AssoFlgtm[10];

  /* Graphical Function 'Ini_SecondTime_RF': '<S16>:2281' */
  /* Transition: '<S16>:2291' */
  memset(&AssoFlgtm[0], 0, 10U * sizeof(real_T));
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2292' */
    /* Transition: '<S16>:2295' */
    hoistedGlobal = SideFusion_Fcn_DW.j;

    /* Simulink Function 'VelocityMethod': '<S16>:1923' */
    SideFusion_Fcn_B.x_t = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 + (int32_T)
      SideFusion_Fcn_DW.k];
    SideFusion_Fcn_B.y_t = SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 + (int32_T)
      SideFusion_Fcn_DW.k];
    SideFusion_Fcn_B.x_m = SideFusion_Fcn_DW.Returns[(int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.y_m = SideFusion_Fcn_DW.Returns[10 + (int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.vx_max = SideFusion_Fcn_vx_max;
    SideFusion_Fcn_B.vx_min = SideFusion_Fcn_vx_min;
    SideFusion_Fcn_B.vy_max = SideFusion_Fcn_vy_max;
    SideFusion_Fcn_B.vy_min = SideFusion_Fcn_vy_min;
    SideFusion_Fcn_B.Rxx = SideFusion_Fcn_RXX_SRR;
    SideFusion_Fcn_B.Ryy = SideFusion_Fcn_RYY_SRR;
    SideFusion_Fcn_B.threshod = SideFusion_Fcn_VelSearch_Th;
    SideFusion_Fcn_B.ts = 0.04;

    /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.VelocityMethod' */
    S_Tracker_InitialVelocityMethod(SideFusion_Fcn_B.x_m, SideFusion_Fcn_B.x_t,
      SideFusion_Fcn_B.vx_max, SideFusion_Fcn_B.ts, SideFusion_Fcn_B.vx_min,
      SideFusion_Fcn_B.y_m, SideFusion_Fcn_B.y_t, SideFusion_Fcn_B.vy_max,
      SideFusion_Fcn_B.vy_min, SideFusion_Fcn_B.Rxx, SideFusion_Fcn_B.Ryy,
      SideFusion_Fcn_B.threshod, &SideFusion_Fcn_B.Tracker_InitialVelocityMethod,
                                    (P_Tracker_InitialVelocityMeth_T *)
      &SideFusion_Fcn_P.Tracker_InitialVelocityMethod);

    /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.VelocityMethod' */
    AssoFlgtm[(int32_T)hoistedGlobal] =
      SideFusion_Fcn_B.Tracker_InitialVelocityMethod.MultiportSwitch_a;

    /* Velocity Association method */
    /* Transition: '<S16>:2293' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2294' */
  SideFusion_Fcn_DW.j = 0.0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2296' */
    if (AssoFlgtm[(int32_T)SideFusion_Fcn_DW.j] == 1.0) {
      /* Transition: '<S16>:2297' */
      /* Transition: '<S16>:2301' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 2.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] = 2.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RFSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New++;

      /* Transition: '<S16>:2302' */
    } else {
      /* Transition: '<S16>:2300' */
    }

    /* Transition: '<S16>:2298' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2299' */
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_RFSRR_Ini_Update(void)
{
  /* Graphical Function 'RFSRR_Ini_Update': '<S16>:2136' */
  /* Transition: '<S16>:2154' */
  if (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      4.0) {
    /* Transition: '<S16>:2155' */
    /* This Tracker has updated forth and find fifth measurement */
    /* Transition: '<S16>:2157' */
    SideFusion_Fcn_Ini_FifthTime_RF();

    /* Transition: '<S16>:2158' */
  } else {
    /* Transition: '<S16>:2156' */
  }

  /* Transition: '<S16>:2159' */
  if (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      3.0) {
    /* Transition: '<S16>:2160' */
    /* This Tracker has updated thrid and find forth measurement */
    /* Transition: '<S16>:2162' */
    SideFusion_Fcn_Ini_ForthTime_RF();

    /* Transition: '<S16>:2163' */
  } else {
    /* Transition: '<S16>:2161' */
  }

  /* Transition: '<S16>:2164' */
  if (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      2.0) {
    /* Transition: '<S16>:2165' */
    /* This Tracker has updated once and find thrid measurement */
    /* Transition: '<S16>:2167' */
    SideFusion_Fcn_Ini_ThridTime_RF();

    /* Transition: '<S16>:2168' */
  } else {
    /* Transition: '<S16>:2166' */
  }

  /* Transition: '<S16>:2169' */
  if (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      1.0) {
    /* Transition: '<S16>:2170' */
    /* This Tracker is first initial and use velocity to find next measurements */
    /* Transition: '<S16>:2172' */
    SideFusion_Fc_Ini_SecondTime_RF();

    /* Transition: '<S16>:2173' */
  } else {
    /* Transition: '<S16>:2171' */
  }

  /* Transition: '<S16>:2174' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_RFSRR_Ini(void)
{
  int32_T i;

  /* Graphical Function 'RFSRR_Ini': '<S16>:1705' */
  /* Transition: '<S16>:2317' */
  SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New = 0.0;
  for (i = 0; i < 280; i++) {
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR[i] =
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[i];
    SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[i] = 0.0;
  }

  memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
  SideFusion_Fcn_DW.Group_Num = 0.0;
  while (SideFusion_Fcn_DW.k < 20.0) {
    /* Transition: '<S16>:2310' */
    if (SideFusion_Fcn_DW.Ini_Tracker_RFSRR[40 + (int32_T)SideFusion_Fcn_DW.k] >
        0.0) {
      /* Transition: '<S16>:2313' */
      /* Transition: '<S16>:2306' */
      SideFusion_Fcn_RFSRR_Ini_Update();

      /* Transition: '<S16>:2303' */
    } else {
      /* Transition: '<S16>:2305' */
    }

    /* Transition: '<S16>:2316' */
    SideFusion_Fcn_DW.k++;
  }

  /* Transition: '<S16>:2309' */
  SideFusion_Fcn_DW.k = 0.0;

  /* Transition: '<S16>:2304' */
  SideFusion_Fcn_RFFirstTrackGen();
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_LRFirstTrackGen(void)
{
  real_T Group_X;
  real_T Group_Y;

  /* Graphical Function 'LRFirstTrackGen': '<S16>:3437' */
  /* Transition: '<S16>:3464' */
  if (SideFusion_Fcn_DW.Num_Returns > 1.0) {
    /* Transition: '<S16>:3465' */
    /* Two return, begine compare */
    /* Transition: '<S16>:3467' */
    SideFusion_Fcn_DW.j = 1.0;
    while (SideFusion_Fcn_DW.k < SideFusion_Fcn_DW.Num_Returns - 1.0) {
      /* Transition: '<S16>:3472' */
      if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.k] == 0.0) {
        /* Transition: '<S16>:3470' */
        while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
          /* Transition: '<S16>:3471' */
          if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] ==
              0.0) {
            /* Transition: '<S16>:3469' */
            if ((SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) *
                (SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
                (SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
                (SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) <=
                SideFusion_Fcn_Ini_Group_Dist) {
              /* Transition: '<S16>:3468' */
              /* Transition: '<S16>:3475' */
              SideFusion_Fcn_DW.Group_Data[(int32_T)SideFusion_Fcn_DW.Group_Num]
                = SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
              SideFusion_Fcn_DW.Group_Data[10 + (int32_T)
                SideFusion_Fcn_DW.Group_Num] = SideFusion_Fcn_DW.Returns[10 +
                (int32_T)SideFusion_Fcn_DW.j];
              SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;
              SideFusion_Fcn_DW.Group_Num++;

              /* Transition: '<S16>:3485' */
            } else {
              /* Transition: '<S16>:3474' */
            }

            /* Transition: '<S16>:3484' */
          } else {
            /* Transition: '<S16>:3479' */
          }

          /* Transition: '<S16>:3473' */
          SideFusion_Fcn_DW.j++;
        }

        /* Transition: '<S16>:3478' */
        Group_X = SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k];
        Group_Y = SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k];
        if (SideFusion_Fcn_DW.Group_Num > 0.0) {
          /* Transition: '<S16>:3486' */
          /* There exist more than one near unused returns */
          while (SideFusion_Fcn_DW.n < SideFusion_Fcn_DW.Group_Num) {
            /* Transition: '<S16>:3487' */
            /* Transition: '<S16>:3492' */
            Group_X += SideFusion_Fcn_DW.Group_Data[(int32_T)SideFusion_Fcn_DW.n];
            Group_Y += SideFusion_Fcn_DW.Group_Data[10 + (int32_T)
              SideFusion_Fcn_DW.n];

            /* Transition: '<S16>:3488' */
            SideFusion_Fcn_DW.n++;
          }

          /* Transition: '<S16>:3491' */
          SideFusion_Fcn_DW.n = 0.0;
          Group_X /= SideFusion_Fcn_DW.Group_Num + 1.0;
          Group_Y /= SideFusion_Fcn_DW.Group_Num + 1.0;

          /* Transition: '<S16>:3493' */
        } else {
          /* Transition: '<S16>:3490' */
        }

        /* Transition: '<S16>:3494' */
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[(int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = Group_X;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[20 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = Group_Y;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[40 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 1.0;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[60 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 1.0;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[80 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = Group_X;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[100 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = Group_Y;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[120 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[140 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[160 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[180 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[200 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[220 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New++;

        /* Transition: '<S16>:3497' */
        /* Transition: '<S16>:3489' */
      } else {
        /* Transition: '<S16>:3477' */
      }

      /* Transition: '<S16>:3476' */
      SideFusion_Fcn_DW.k++;
      SideFusion_Fcn_DW.j = SideFusion_Fcn_DW.k + 1.0;
      SideFusion_Fcn_DW.Group_Num = 0.0;
      memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
    }

    /* Transition: '<S16>:3480' */
    SideFusion_Fcn_DW.k = 0.0;
    SideFusion_Fcn_DW.j = 0.0;

    /* Transition: '<S16>:3496' */
    /* Transition: '<S16>:3495' */
  } else {
    /* Transition: '<S16>:3466' */
    if ((SideFusion_Fcn_DW.Num_Returns == 1.0) && (SideFusion_Fcn_DW.Returns[20]
         == 0.0)) {
      /* Transition: '<S16>:3481' */
      /* One return, no need to compare */
      /* Transition: '<S16>:3483' */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[0];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[10];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 1.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 1.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[0];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[10];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New++;

      /* Transition: '<S16>:3495' */
    } else {
      /* Transition: '<S16>:3482' */
    }
  }

  /* Transition: '<S16>:3498' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_FifthTime_LR(void)
{
  real_T x_5_predict;
  real_T y_5_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_FifthTime_LR': '<S16>:2386' */
  /* Transition: '<S16>:2400' */
  Min_Distance_IniTrack = 9.0;
  x_5_predict = (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[200 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_LRSRR[160 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  y_5_predict = (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[220 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_LRSRR[180 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2401' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2921' */
      /* Transition: '<S16>:2403' */
      RelativeDist = (y_5_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_5_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_5_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_5_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[160 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[180 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[200 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[220 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:3095' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3109' */
          /* Transition: '<S16>:3102' */
          /* Transition: '<S16>:3103' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3100' */
            /* Transition: '<S16>:3092' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:3096' */
          } else {
            /* Transition: '<S16>:3098' */
          }

          /* Transition: '<S16>:3094' */
        } else {
          /* Transition: '<S16>:3108' */
          /* Transition: '<S16>:3104' */
        }

        /* Transition: '<S16>:3106' */
      } else {
        /* Transition: '<S16>:2407' */
      }

      /* Transition: '<S16>:2924' */
    } else {
      /* Transition: '<S16>:2923' */
    }

    /* Transition: '<S16>:2402' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2404' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2412' */
    /* Means that the tracker k found measurement */
    /* Transition: '<S16>:2414' */
    SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

    /* Which means that the return is used */
    SideFusion_Fcn_TrackIni(SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn],
      SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn]);

    /* Transition: '<S16>:2415' */
  } else {
    /* Transition: '<S16>:2413' */
    /* cound not found, and enter 5 searches means that could not found once before, so delete  */
  }

  /* Transition: '<S16>:2416' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_ForthTime_LR(void)
{
  real_T x_4_predict;
  real_T y_4_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_ForthTime_LR': '<S16>:2417' */
  /* Transition: '<S16>:2436' */
  Min_Distance_IniTrack = 9.0;
  x_4_predict = (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[160 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  y_4_predict = (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[180 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2437' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2916' */
      /* Transition: '<S16>:2439' */
      RelativeDist = (y_4_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_4_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_4_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_4_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[160 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[180 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:3075' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3089' */
          /* Transition: '<S16>:3082' */
          /* Transition: '<S16>:3083' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3080' */
            /* Transition: '<S16>:3072' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:3076' */
          } else {
            /* Transition: '<S16>:3078' */
          }

          /* Transition: '<S16>:3074' */
        } else {
          /* Transition: '<S16>:3088' */
          /* Transition: '<S16>:3084' */
        }

        /* Transition: '<S16>:3086' */
      } else {
        /* Transition: '<S16>:2443' */
      }

      /* Transition: '<S16>:2918' */
    } else {
      /* Transition: '<S16>:2919' */
    }

    /* Transition: '<S16>:2438' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2440' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2448' */
    /* Means that the tracker k found measurement */
    if (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[60 + (int32_T)SideFusion_Fcn_DW.k] ==
        3.0) {
      /* Transition: '<S16>:2449' */
      /* Has found measurement 4 times and begin ini */
      /* Transition: '<S16>:2452' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_TrackIni(SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn],
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn]);

      /* Transition: '<S16>:2458' */
    } else {
      /* Transition: '<S16>:2451' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 4.0;

      /* Tracker counter */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 3.0;

      /* Association counter */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[180 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn];
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New++;
    }

    /* Transition: '<S16>:2457' */
    /* Transition: '<S16>:2456' */
  } else {
    /* Transition: '<S16>:2450' */
    if (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[60 + (int32_T)SideFusion_Fcn_DW.k] ==
        3.0) {
      /* Transition: '<S16>:2453' */
      /* Has found measurement 3 times before */
      /* Transition: '<S16>:2454' */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = x_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = y_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 4.0;

      /* Tracker counter */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 3.0;

      /* Association counter */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[180 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = x_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = y_4_predict;
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New++;

      /* Transition: '<S16>:2456' */
    } else {
      /* Transition: '<S16>:2455' */
      /* Cound not found measurement twice,
         So not transfer tracker k to new list */
    }
  }

  /* Transition: '<S16>:2459' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_ThridTime_LR(void)
{
  real_T x_3_predict;
  real_T y_3_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_ThridTime_LR': '<S16>:2460' */
  /* Transition: '<S16>:2474' */
  Min_Distance_IniTrack = 9.0;
  x_3_predict = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)
    SideFusion_Fcn_DW.k] * 2.0 - SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 +
    (int32_T)SideFusion_Fcn_DW.k];

  /* Use two point to predict next point based constant velocity */
  y_3_predict = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)
    SideFusion_Fcn_DW.k] * 2.0 - SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 +
    (int32_T)SideFusion_Fcn_DW.k];

  /* Use two point to predict next point based constant velocity */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2475' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2911' */
      /* Transition: '<S16>:2477' */
      RelativeDist = (y_3_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_3_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_3_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_3_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:3055' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3069' */
          /* Transition: '<S16>:3062' */
          /* Transition: '<S16>:3063' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3060' */
            /* Transition: '<S16>:3052' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:3056' */
          } else {
            /* Transition: '<S16>:3058' */
          }

          /* Transition: '<S16>:3054' */
        } else {
          /* Transition: '<S16>:3068' */
          /* Transition: '<S16>:3064' */
        }

        /* Transition: '<S16>:3066' */
      } else {
        /* Transition: '<S16>:2481' */
      }

      /* Transition: '<S16>:2914' */
    } else {
      /* Transition: '<S16>:2913' */
    }

    /* Transition: '<S16>:2476' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2478' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2486' */
    /* Means that the tracker k found measurement */
    /* Transition: '<S16>:2488' */
    SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

    /* Which means that the return is used */
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[(int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = SideFusion_Fcn_DW.Returns
      [(int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[20 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = SideFusion_Fcn_DW.Returns
      [10 + (int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[40 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 3.0;

    /* Tracker counter */
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[60 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 3.0;

    /* Association counter */
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[80 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[100 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[120 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[140 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[160 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = SideFusion_Fcn_DW.Returns
      [(int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[180 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = SideFusion_Fcn_DW.Returns
      [10 + (int32_T)Updatereturn];
    SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New++;

    /* Transition: '<S16>:2489' */
  } else {
    /* Transition: '<S16>:2487' */
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[(int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = x_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[20 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = y_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[40 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 3.0;

    /* Tracker counter */
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[60 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 2.0;

    /* Association counter */
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[80 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[100 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[120 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[140 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[160 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = x_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[180 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = y_3_predict;
    SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New++;
  }

  /* Transition: '<S16>:2490' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fc_Ini_SecondTime_LR(void)
{
  real_T hoistedGlobal;
  real_T AssoFlgtm[10];

  /* Graphical Function 'Ini_SecondTime_LR': '<S16>:2491' */
  /* Transition: '<S16>:2501' */
  memset(&AssoFlgtm[0], 0, 10U * sizeof(real_T));
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2502' */
    /* Transition: '<S16>:2505' */
    hoistedGlobal = SideFusion_Fcn_DW.j;

    /* Simulink Function 'VelocityMethod': '<S16>:1923' */
    SideFusion_Fcn_B.x_t = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)
      SideFusion_Fcn_DW.k];
    SideFusion_Fcn_B.y_t = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 + (int32_T)
      SideFusion_Fcn_DW.k];
    SideFusion_Fcn_B.x_m = SideFusion_Fcn_DW.Returns[(int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.y_m = SideFusion_Fcn_DW.Returns[10 + (int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.vx_max = SideFusion_Fcn_vx_max;
    SideFusion_Fcn_B.vx_min = SideFusion_Fcn_vx_min;
    SideFusion_Fcn_B.vy_max = SideFusion_Fcn_vy_max;
    SideFusion_Fcn_B.vy_min = SideFusion_Fcn_vy_min;
    SideFusion_Fcn_B.Rxx = SideFusion_Fcn_RXX_SRR;
    SideFusion_Fcn_B.Ryy = SideFusion_Fcn_RYY_SRR;
    SideFusion_Fcn_B.threshod = SideFusion_Fcn_VelSearch_Th;
    SideFusion_Fcn_B.ts = 0.04;

    /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.VelocityMethod' */
    S_Tracker_InitialVelocityMethod(SideFusion_Fcn_B.x_m, SideFusion_Fcn_B.x_t,
      SideFusion_Fcn_B.vx_max, SideFusion_Fcn_B.ts, SideFusion_Fcn_B.vx_min,
      SideFusion_Fcn_B.y_m, SideFusion_Fcn_B.y_t, SideFusion_Fcn_B.vy_max,
      SideFusion_Fcn_B.vy_min, SideFusion_Fcn_B.Rxx, SideFusion_Fcn_B.Ryy,
      SideFusion_Fcn_B.threshod, &SideFusion_Fcn_B.Tracker_InitialVelocityMethod,
                                    (P_Tracker_InitialVelocityMeth_T *)
      &SideFusion_Fcn_P.Tracker_InitialVelocityMethod);

    /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.VelocityMethod' */
    AssoFlgtm[(int32_T)hoistedGlobal] =
      SideFusion_Fcn_B.Tracker_InitialVelocityMethod.MultiportSwitch_a;

    /* Velocity Association method */
    /* Transition: '<S16>:2503' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2504' */
  SideFusion_Fcn_DW.j = 0.0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2506' */
    if (AssoFlgtm[(int32_T)SideFusion_Fcn_DW.j] == 1.0) {
      /* Transition: '<S16>:2507' */
      /* Transition: '<S16>:2511' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 2.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] = 2.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_LRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New++;

      /* Transition: '<S16>:2512' */
    } else {
      /* Transition: '<S16>:2510' */
    }

    /* Transition: '<S16>:2508' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2509' */
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_LRSRR_Ini_Update(void)
{
  /* Graphical Function 'LRSRR_Ini_Update': '<S16>:2346' */
  /* Transition: '<S16>:2364' */
  if (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      4.0) {
    /* Transition: '<S16>:2365' */
    /* This Tracker has updated forth and find fifth measurement */
    /* Transition: '<S16>:2367' */
    SideFusion_Fcn_Ini_FifthTime_LR();

    /* Transition: '<S16>:2368' */
  } else {
    /* Transition: '<S16>:2366' */
  }

  /* Transition: '<S16>:2369' */
  if (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      3.0) {
    /* Transition: '<S16>:2370' */
    /* This Tracker has updated thrid and find forth measurement */
    /* Transition: '<S16>:2372' */
    SideFusion_Fcn_Ini_ForthTime_LR();

    /* Transition: '<S16>:2373' */
  } else {
    /* Transition: '<S16>:2371' */
  }

  /* Transition: '<S16>:2374' */
  if (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      2.0) {
    /* Transition: '<S16>:2375' */
    /* This Tracker has updated once and find thrid measurement */
    /* Transition: '<S16>:2377' */
    SideFusion_Fcn_Ini_ThridTime_LR();

    /* Transition: '<S16>:2378' */
  } else {
    /* Transition: '<S16>:2376' */
  }

  /* Transition: '<S16>:2379' */
  if (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      1.0) {
    /* Transition: '<S16>:2380' */
    /* This Tracker is first initial and use velocity to find next measurements */
    /* Transition: '<S16>:2382' */
    SideFusion_Fc_Ini_SecondTime_LR();

    /* Transition: '<S16>:2383' */
  } else {
    /* Transition: '<S16>:2381' */
  }

  /* Transition: '<S16>:2384' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_LRSRR_Ini(void)
{
  int32_T i;

  /* Graphical Function 'LRSRR_Ini': '<S16>:1715' */
  /* Transition: '<S16>:2324' */
  SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New = 0.0;
  for (i = 0; i < 280; i++) {
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR[i] =
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[i];
    SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[i] = 0.0;
  }

  memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
  SideFusion_Fcn_DW.Group_Num = 0.0;
  while (SideFusion_Fcn_DW.k < 20.0) {
    /* Transition: '<S16>:2327' */
    if (SideFusion_Fcn_DW.Ini_Tracker_LRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] >
        0.0) {
      /* Transition: '<S16>:2323' */
      /* Transition: '<S16>:2344' */
      SideFusion_Fcn_LRSRR_Ini_Update();

      /* Transition: '<S16>:2345' */
    } else {
      /* Transition: '<S16>:2319' */
    }

    /* Transition: '<S16>:2513' */
    SideFusion_Fcn_DW.k++;
  }

  /* Transition: '<S16>:2326' */
  SideFusion_Fcn_DW.k = 0.0;

  /* Transition: '<S16>:2321' */
  SideFusion_Fcn_LRFirstTrackGen();
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_RRFirstTrackGen(void)
{
  real_T Group_X;
  real_T Group_Y;

  /* Graphical Function 'RRFirstTrackGen': '<S16>:3499' */
  /* Transition: '<S16>:3526' */
  if (SideFusion_Fcn_DW.Num_Returns > 1.0) {
    /* Transition: '<S16>:3527' */
    /* Two return, begine compare */
    /* Transition: '<S16>:3529' */
    SideFusion_Fcn_DW.j = 1.0;
    while (SideFusion_Fcn_DW.k < SideFusion_Fcn_DW.Num_Returns - 1.0) {
      /* Transition: '<S16>:3534' */
      if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.k] == 0.0) {
        /* Transition: '<S16>:3532' */
        while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
          /* Transition: '<S16>:3533' */
          if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] ==
              0.0) {
            /* Transition: '<S16>:3531' */
            if ((SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) *
                (SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
                (SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
                (SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k] -
                 SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) <=
                SideFusion_Fcn_Ini_Group_Dist) {
              /* Transition: '<S16>:3530' */
              /* Transition: '<S16>:3537' */
              SideFusion_Fcn_DW.Group_Data[(int32_T)SideFusion_Fcn_DW.Group_Num]
                = SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
              SideFusion_Fcn_DW.Group_Data[10 + (int32_T)
                SideFusion_Fcn_DW.Group_Num] = SideFusion_Fcn_DW.Returns[10 +
                (int32_T)SideFusion_Fcn_DW.j];
              SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;
              SideFusion_Fcn_DW.Group_Num++;

              /* Transition: '<S16>:3547' */
            } else {
              /* Transition: '<S16>:3536' */
            }

            /* Transition: '<S16>:3546' */
          } else {
            /* Transition: '<S16>:3541' */
          }

          /* Transition: '<S16>:3535' */
          SideFusion_Fcn_DW.j++;
        }

        /* Transition: '<S16>:3540' */
        Group_X = SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.k];
        Group_Y = SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.k];
        if (SideFusion_Fcn_DW.Group_Num > 0.0) {
          /* Transition: '<S16>:3548' */
          /* There exist more than one near unused returns */
          while (SideFusion_Fcn_DW.n < SideFusion_Fcn_DW.Group_Num) {
            /* Transition: '<S16>:3549' */
            /* Transition: '<S16>:3554' */
            Group_X += SideFusion_Fcn_DW.Group_Data[(int32_T)SideFusion_Fcn_DW.n];
            Group_Y += SideFusion_Fcn_DW.Group_Data[10 + (int32_T)
              SideFusion_Fcn_DW.n];

            /* Transition: '<S16>:3550' */
            SideFusion_Fcn_DW.n++;
          }

          /* Transition: '<S16>:3553' */
          SideFusion_Fcn_DW.n = 0.0;
          Group_X /= SideFusion_Fcn_DW.Group_Num + 1.0;
          Group_Y /= SideFusion_Fcn_DW.Group_Num + 1.0;

          /* Transition: '<S16>:3555' */
        } else {
          /* Transition: '<S16>:3552' */
        }

        /* Transition: '<S16>:3556' */
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[(int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = Group_X;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[20 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = Group_Y;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[40 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 1.0;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[60 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 1.0;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[80 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = Group_X;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[100 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = Group_Y;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[120 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[140 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[160 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[180 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[200 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[220 + (int32_T)
          SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New++;

        /* Transition: '<S16>:3559' */
        /* Transition: '<S16>:3551' */
      } else {
        /* Transition: '<S16>:3539' */
      }

      /* Transition: '<S16>:3538' */
      SideFusion_Fcn_DW.k++;
      SideFusion_Fcn_DW.j = SideFusion_Fcn_DW.k + 1.0;
      SideFusion_Fcn_DW.Group_Num = 0.0;
      memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
    }

    /* Transition: '<S16>:3542' */
    SideFusion_Fcn_DW.k = 0.0;
    SideFusion_Fcn_DW.j = 0.0;

    /* Transition: '<S16>:3558' */
    /* Transition: '<S16>:3557' */
  } else {
    /* Transition: '<S16>:3528' */
    if ((SideFusion_Fcn_DW.Num_Returns == 1.0) && (SideFusion_Fcn_DW.Returns[20]
         == 0.0)) {
      /* Transition: '<S16>:3543' */
      /* One return, no need to compare */
      /* Transition: '<S16>:3545' */
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[0];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[10];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 1.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 1.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[0];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[10];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 0.0;
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New++;

      /* Transition: '<S16>:3557' */
    } else {
      /* Transition: '<S16>:3544' */
    }
  }

  /* Transition: '<S16>:3560' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_FifthTime_RR(void)
{
  real_T x_5_predict;
  real_T y_5_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_FifthTime_RR': '<S16>:2565' */
  /* Transition: '<S16>:2579' */
  Min_Distance_IniTrack = 9.0;
  x_5_predict = (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[200 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_RRSRR[160 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  y_5_predict = (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[220 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_RRSRR[180 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2580' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2936' */
      /* Transition: '<S16>:2582' */
      RelativeDist = (y_5_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_5_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_5_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_5_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[160 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[180 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[200 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[220 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:3155' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3169' */
          /* Transition: '<S16>:3162' */
          /* Transition: '<S16>:3163' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3160' */
            /* Transition: '<S16>:3152' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:3156' */
          } else {
            /* Transition: '<S16>:3158' */
          }

          /* Transition: '<S16>:3154' */
        } else {
          /* Transition: '<S16>:3168' */
          /* Transition: '<S16>:3164' */
        }

        /* Transition: '<S16>:3166' */
      } else {
        /* Transition: '<S16>:2586' */
      }

      /* Transition: '<S16>:2938' */
    } else {
      /* Transition: '<S16>:2939' */
    }

    /* Transition: '<S16>:2581' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2583' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2591' */
    /* Means that the tracker k found measurement */
    /* Transition: '<S16>:2593' */
    SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

    /* Which means that the return is used */
    SideFusion_Fcn_TrackIni(SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn],
      SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn]);

    /* Transition: '<S16>:2594' */
  } else {
    /* Transition: '<S16>:2592' */
    /* cound not found, and enter 5 searches means that could not found once before, so delete  */
  }

  /* Transition: '<S16>:2595' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_ForthTime_RR(void)
{
  real_T x_4_predict;
  real_T y_4_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_ForthTime_RR': '<S16>:2596' */
  /* Transition: '<S16>:2615' */
  Min_Distance_IniTrack = 9.0;
  x_4_predict = (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[160 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  y_4_predict = (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[180 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0 -
                 SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)
                 SideFusion_Fcn_DW.k] * 3.0) +
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];

  /* Use three point to predict next point based constant acc */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2616' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2931' */
      /* Transition: '<S16>:2618' */
      RelativeDist = (y_4_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_4_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_4_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_4_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[160 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[180 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:3135' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3149' */
          /* Transition: '<S16>:3142' */
          /* Transition: '<S16>:3143' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3140' */
            /* Transition: '<S16>:3132' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:3136' */
          } else {
            /* Transition: '<S16>:3138' */
          }

          /* Transition: '<S16>:3134' */
        } else {
          /* Transition: '<S16>:3148' */
          /* Transition: '<S16>:3144' */
        }

        /* Transition: '<S16>:3146' */
      } else {
        /* Transition: '<S16>:2622' */
      }

      /* Transition: '<S16>:2934' */
    } else {
      /* Transition: '<S16>:2933' */
    }

    /* Transition: '<S16>:2617' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2619' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2627' */
    /* Means that the tracker k found measurement */
    if (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[60 + (int32_T)SideFusion_Fcn_DW.k] ==
        3.0) {
      /* Transition: '<S16>:2628' */
      /* Has found measurement 4 times and begin ini */
      /* Transition: '<S16>:2631' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_TrackIni(SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn],
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn]);

      /* Transition: '<S16>:2637' */
    } else {
      /* Transition: '<S16>:2630' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 4.0;

      /* Tracker counter */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 3.0;

      /* Association counter */
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[180 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)Updatereturn];
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)Updatereturn];
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New++;
    }

    /* Transition: '<S16>:2636' */
    /* Transition: '<S16>:2635' */
  } else {
    /* Transition: '<S16>:2629' */
    if (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[60 + (int32_T)SideFusion_Fcn_DW.k] ==
        3.0) {
      /* Transition: '<S16>:2632' */
      /* Has found measurement 3 times before */
      /* Transition: '<S16>:2633' */
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = x_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = y_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 4.0;

      /* Tracker counter */
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 3.0;

      /* Association counter */
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[160 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[160 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[180 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[180 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[200 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = x_4_predict;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[220 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = y_4_predict;
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New++;

      /* Transition: '<S16>:2635' */
    } else {
      /* Transition: '<S16>:2634' */
      /* Cound not found measurement twice,
         So not transfer tracker k to new list */
    }
  }

  /* Transition: '<S16>:2638' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Ini_ThridTime_RR(void)
{
  real_T x_3_predict;
  real_T y_3_predict;
  real_T Min_Distance_IniTrack;
  real_T RelativeDist;
  int32_T Ini_Tracker_UpdateFlg;
  real_T Updatereturn;

  /* Graphical Function 'Ini_ThridTime_RR': '<S16>:2639' */
  /* Transition: '<S16>:2653' */
  Min_Distance_IniTrack = 9.0;
  x_3_predict = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)
    SideFusion_Fcn_DW.k] * 2.0 - SideFusion_Fcn_DW.Ini_Tracker_RRSRR[80 +
    (int32_T)SideFusion_Fcn_DW.k];

  /* Use two point to predict next point based constant velocity */
  y_3_predict = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)
    SideFusion_Fcn_DW.k] * 2.0 - SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 +
    (int32_T)SideFusion_Fcn_DW.k];

  /* Use two point to predict next point based constant velocity */
  Updatereturn = 0.0;
  Ini_Tracker_UpdateFlg = 0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2654' */
    if (SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] == 0.0) {
      /* Transition: '<S16>:2926' */
      /* Transition: '<S16>:2656' */
      RelativeDist = (y_3_predict - SideFusion_Fcn_DW.Returns[10 + (int32_T)
                      SideFusion_Fcn_DW.j]) * (y_3_predict -
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j]) +
        (x_3_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]) *
        (x_3_predict - SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j]);

      /* Simulink Function 'cos_cal': '<S16>:1999' */
      SideFusion_Fcn_B.x1 = SideFusion_Fcn_DW.Ini_Tracker_LRSRR[80 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y1 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.x2 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.y2 = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)
        SideFusion_Fcn_DW.k];
      SideFusion_Fcn_B.xm = SideFusion_Fcn_DW.Returns[(int32_T)
        SideFusion_Fcn_DW.j];
      SideFusion_Fcn_B.ym = SideFusion_Fcn_DW.Returns[10 + (int32_T)
        SideFusion_Fcn_DW.j];

      /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      SideFusi_Tracker_Initialcos_cal(SideFusion_Fcn_B.x1, SideFusion_Fcn_B.x2,
        SideFusion_Fcn_B.y1, SideFusion_Fcn_B.y2, SideFusion_Fcn_B.xm,
        SideFusion_Fcn_B.ym, &SideFusion_Fcn_B.Tracker_Initialcos_cal,
        (P_Tracker_Initialcos_cal_Side_T *)
        &SideFusion_Fcn_P.Tracker_Initialcos_cal);

      /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.cos_cal' */
      if (RelativeDist < SideFusion_Fcn_Ini_Asso_Dist) {
        /* Transition: '<S16>:3115' */
        if ((RelativeDist < 0.1) ||
            ((SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch >
              SideFusion_Fcn_Ini_Asso_Ang_max) ||
             (SideFusion_Fcn_B.Tracker_Initialcos_cal.MultiportSwitch <
              SideFusion_Fcn_Ini_Asso_Ang_max))) {
          /* Transition: '<S16>:3129' */
          /* Transition: '<S16>:3122' */
          /* Transition: '<S16>:3123' */
          if (RelativeDist < Min_Distance_IniTrack) {
            /* Transition: '<S16>:3120' */
            /* Transition: '<S16>:3112' */
            Updatereturn = SideFusion_Fcn_DW.j;
            Ini_Tracker_UpdateFlg = 1;
            Min_Distance_IniTrack = RelativeDist;
            SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

            /* Transition: '<S16>:3116' */
          } else {
            /* Transition: '<S16>:3118' */
          }

          /* Transition: '<S16>:3114' */
        } else {
          /* Transition: '<S16>:3128' */
          /* Transition: '<S16>:3124' */
        }

        /* Transition: '<S16>:3126' */
      } else {
        /* Transition: '<S16>:2660' */
      }

      /* Transition: '<S16>:2928' */
    } else {
      /* Transition: '<S16>:2929' */
    }

    /* Transition: '<S16>:2655' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2657' */
  SideFusion_Fcn_DW.j = 0.0;
  if (Ini_Tracker_UpdateFlg == 1) {
    /* Transition: '<S16>:2665' */
    /* Means that the tracker k found measurement */
    /* Transition: '<S16>:2667' */
    SideFusion_Fcn_DW.Returns[20 + (int32_T)Updatereturn] = 1.0;

    /* Which means that the return is used */
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[(int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = SideFusion_Fcn_DW.Returns
      [(int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[20 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = SideFusion_Fcn_DW.Returns
      [10 + (int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[40 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 3.0;

    /* Tracker counter */
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[60 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 3.0;

    /* Association counter */
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[80 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[100 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[120 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[140 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[160 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = SideFusion_Fcn_DW.Returns
      [(int32_T)Updatereturn];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[180 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = SideFusion_Fcn_DW.Returns
      [10 + (int32_T)Updatereturn];
    SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New++;

    /* Transition: '<S16>:2668' */
  } else {
    /* Transition: '<S16>:2666' */
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[(int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = x_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[20 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = y_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[40 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 3.0;

    /* Tracker counter */
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[60 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 2.0;

    /* Association counter */
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[80 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[100 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[120 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[120 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[140 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[140 + (int32_T)SideFusion_Fcn_DW.k];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[160 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = x_3_predict;
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[180 + (int32_T)
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = y_3_predict;
    SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New++;
  }

  /* Transition: '<S16>:2669' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fc_Ini_SecondTime_RR(void)
{
  real_T hoistedGlobal;
  real_T AssoFlgtm[10];

  /* Graphical Function 'Ini_SecondTime_RR': '<S16>:2670' */
  /* Transition: '<S16>:2680' */
  memset(&AssoFlgtm[0], 0, 10U * sizeof(real_T));
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2681' */
    /* Transition: '<S16>:2684' */
    hoistedGlobal = SideFusion_Fcn_DW.j;

    /* Simulink Function 'VelocityMethod': '<S16>:1923' */
    SideFusion_Fcn_B.x_t = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[80 + (int32_T)
      SideFusion_Fcn_DW.k];
    SideFusion_Fcn_B.y_t = SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 + (int32_T)
      SideFusion_Fcn_DW.k];
    SideFusion_Fcn_B.x_m = SideFusion_Fcn_DW.Returns[(int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.y_m = SideFusion_Fcn_DW.Returns[10 + (int32_T)
      SideFusion_Fcn_DW.j];
    SideFusion_Fcn_B.vx_max = SideFusion_Fcn_vx_max;
    SideFusion_Fcn_B.vx_min = SideFusion_Fcn_vx_min;
    SideFusion_Fcn_B.vy_max = SideFusion_Fcn_vy_max;
    SideFusion_Fcn_B.vy_min = SideFusion_Fcn_vy_min;
    SideFusion_Fcn_B.Rxx = SideFusion_Fcn_RXX_SRR;
    SideFusion_Fcn_B.Ryy = SideFusion_Fcn_RYY_SRR;
    SideFusion_Fcn_B.threshod = SideFusion_Fcn_VelSearch_Th;
    SideFusion_Fcn_B.ts = 0.04;

    /* Outputs for Function Call SubSystem: '<S16>/Tracker_Initial.VelocityMethod' */
    S_Tracker_InitialVelocityMethod(SideFusion_Fcn_B.x_m, SideFusion_Fcn_B.x_t,
      SideFusion_Fcn_B.vx_max, SideFusion_Fcn_B.ts, SideFusion_Fcn_B.vx_min,
      SideFusion_Fcn_B.y_m, SideFusion_Fcn_B.y_t, SideFusion_Fcn_B.vy_max,
      SideFusion_Fcn_B.vy_min, SideFusion_Fcn_B.Rxx, SideFusion_Fcn_B.Ryy,
      SideFusion_Fcn_B.threshod, &SideFusion_Fcn_B.Tracker_InitialVelocityMethod,
                                    (P_Tracker_InitialVelocityMeth_T *)
      &SideFusion_Fcn_P.Tracker_InitialVelocityMethod);

    /* End of Outputs for SubSystem: '<S16>/Tracker_Initial.VelocityMethod' */
    AssoFlgtm[(int32_T)hoistedGlobal] =
      SideFusion_Fcn_B.Tracker_InitialVelocityMethod.MultiportSwitch_a;

    /* Velocity Association method */
    /* Transition: '<S16>:2682' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2683' */
  SideFusion_Fcn_DW.j = 0.0;
  while (SideFusion_Fcn_DW.j < SideFusion_Fcn_DW.Num_Returns) {
    /* Transition: '<S16>:2685' */
    if (AssoFlgtm[(int32_T)SideFusion_Fcn_DW.j] == 1.0) {
      /* Transition: '<S16>:2686' */
      /* Transition: '<S16>:2690' */
      SideFusion_Fcn_DW.Returns[20 + (int32_T)SideFusion_Fcn_DW.j] = 1.0;

      /* Which means that the return is used */
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[(int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[20 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[40 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 2.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[60 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] = 2.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[80 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[80 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[100 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Ini_Tracker_RRSRR[100 + (int32_T)SideFusion_Fcn_DW.k];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[120 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[(int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[140 + (int32_T)
        SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New] =
        SideFusion_Fcn_DW.Returns[10 + (int32_T)SideFusion_Fcn_DW.j];
      SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New++;

      /* Transition: '<S16>:2691' */
    } else {
      /* Transition: '<S16>:2689' */
    }

    /* Transition: '<S16>:2687' */
    SideFusion_Fcn_DW.j++;
  }

  /* Transition: '<S16>:2688' */
  SideFusion_Fcn_DW.j = 0.0;
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_RRSRR_Ini_Update(void)
{
  /* Graphical Function 'RRSRR_Ini_Update': '<S16>:2525' */
  /* Transition: '<S16>:2543' */
  if (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      4.0) {
    /* Transition: '<S16>:2544' */
    /* This Tracker has updated forth and find fifth measurement */
    /* Transition: '<S16>:2546' */
    SideFusion_Fcn_Ini_FifthTime_RR();

    /* Transition: '<S16>:2547' */
  } else {
    /* Transition: '<S16>:2545' */
  }

  /* Transition: '<S16>:2548' */
  if (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      3.0) {
    /* Transition: '<S16>:2549' */
    /* This Tracker has updated thrid and find forth measurement */
    /* Transition: '<S16>:2551' */
    SideFusion_Fcn_Ini_ForthTime_RR();

    /* Transition: '<S16>:2552' */
  } else {
    /* Transition: '<S16>:2550' */
  }

  /* Transition: '<S16>:2553' */
  if (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      2.0) {
    /* Transition: '<S16>:2554' */
    /* This Tracker has updated once and find thrid measurement */
    /* Transition: '<S16>:2556' */
    SideFusion_Fcn_Ini_ThridTime_RR();

    /* Transition: '<S16>:2557' */
  } else {
    /* Transition: '<S16>:2555' */
  }

  /* Transition: '<S16>:2558' */
  if (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] ==
      1.0) {
    /* Transition: '<S16>:2559' */
    /* This Tracker is first initial and use velocity to find next measurements */
    /* Transition: '<S16>:2561' */
    SideFusion_Fc_Ini_SecondTime_RR();

    /* Transition: '<S16>:2562' */
  } else {
    /* Transition: '<S16>:2560' */
  }

  /* Transition: '<S16>:2563' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_RRSRR_Ini(void)
{
  int32_T i;

  /* Graphical Function 'RRSRR_Ini': '<S16>:1727' */
  /* Transition: '<S16>:2522' */
  SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New = 0.0;
  for (i = 0; i < 280; i++) {
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR[i] =
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[i];
    SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[i] = 0.0;
  }

  memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
  SideFusion_Fcn_DW.Group_Num = 0.0;
  while (SideFusion_Fcn_DW.k < 20.0) {
    /* Transition: '<S16>:2714' */
    if (SideFusion_Fcn_DW.Ini_Tracker_RRSRR[40 + (int32_T)SideFusion_Fcn_DW.k] >
        0.0) {
      /* Transition: '<S16>:2713' */
      /* Transition: '<S16>:2520' */
      SideFusion_Fcn_RRSRR_Ini_Update();

      /* Transition: '<S16>:2521' */
    } else {
      /* Transition: '<S16>:2523' */
    }

    /* Transition: '<S16>:2695' */
    SideFusion_Fcn_DW.k++;
  }

  /* Transition: '<S16>:2697' */
  SideFusion_Fcn_DW.k = 0.0;

  /* Transition: '<S16>:2693' */
  SideFusion_Fcn_RRFirstTrackGen();
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void SideFusion_Fcn_Tracker_Initial(void)
{
  /* Graphical Function 'Tracker_Initial': '<S16>:1485' */
  /* Transition: '<S16>:1490' */
  SideFusion_Fc_Unused_Return_Gen();

  /* Select Unused returns for Tracker initial */
  if (SideFusion_Fcn_DW.DataSource == 1.0) {
    /* Transition: '<S16>:1677' */
    /* Transition: '<S16>:1679' */
    SideFusion_Fcn_LFSRR_Ini();

    /* Transition: '<S16>:1680' */
  } else {
    /* Transition: '<S16>:1493' */
  }

  /* Transition: '<S16>:1697' */
  if (SideFusion_Fcn_DW.DataSource == 2.0) {
    /* Transition: '<S16>:1699' */
    /* Transition: '<S16>:1701' */
    SideFusion_Fcn_RFSRR_Ini();

    /* Transition: '<S16>:1703' */
  } else {
    /* Transition: '<S16>:1704' */
  }

  /* Transition: '<S16>:1707' */
  if (SideFusion_Fcn_DW.DataSource == 3.0) {
    /* Transition: '<S16>:1711' */
    /* Transition: '<S16>:1706' */
    SideFusion_Fcn_LRSRR_Ini();

    /* Transition: '<S16>:1708' */
  } else {
    /* Transition: '<S16>:1710' */
  }

  /* Transition: '<S16>:1724' */
  if (SideFusion_Fcn_DW.DataSource == 4.0) {
    /* Transition: '<S16>:1716' */
    /* Transition: '<S16>:1721' */
    SideFusion_Fcn_RRSRR_Ini();

    /* Transition: '<S16>:1717' */
  } else {
    /* Transition: '<S16>:1722' */
  }

  /* Transition: '<S16>:1726' */
}

/* Function for Chart: '<Root>/Side_Fusion' */
static void Sid_chartstep_c4_SideFusion_Fcn(void)
{
  /* During: Side_Fusion */
  if (SideFusion_Fcn_DW.is_active_c4_SideFusion_Fcn == 0U) {
    /* Entry: Side_Fusion */
    SideFusion_Fcn_DW.is_active_c4_SideFusion_Fcn = 1U;

    /* Entry Internal: Side_Fusion */
    SideFusion_Fcn_DW.is_active_DataSet = 1U;

    /* Entry Internal 'DataSet': '<S16>:1231' */
    /* Transition: '<S16>:1243' */
    SideFusion_Fcn_DW.is_DataSet = SideFusion_Fcn_IN_A;
    SideFusion_Fcn_DW.is_active_Fusion_Main = 1U;

    /* Entry Internal 'Fusion_Main': '<S16>:1280' */
    /* Transition: '<S16>:1278' */
    SideFusion_Fcn_DW.is_Fusion_Main = SideFusion_Fcn_IN_B;
  } else {
    /* During 'DataSet': '<S16>:1231' */
    /* During 'A': '<S16>:1230' */
    /* Transition: '<S16>:1246' */
    /* Left Front SRR_Update */
    if (SideFusion_Fcn_DW.sfEvent == SideFusion_Fcn_event_LFSRR) {
      /* Transition: '<S16>:1247' */
      /* Transition: '<S16>:1244' */
      SideFusion_Fcn_Set_Source(1.0);
      SideFusion_Fcn_Set_Time(SideFusion_Fcn_B.NE_i);

      /* Transition: '<S16>:1253' */
      /* Transition: '<S16>:1257' */
      /* Transition: '<S16>:1256' */
      /* Transition: '<S16>:1266' */
    } else {
      /* Transition: '<S16>:1248' */
      /* Right Front SRR Update */
      if (SideFusion_Fcn_DW.sfEvent == SideFusion_Fcn_event_RFSRR) {
        /* Transition: '<S16>:1245' */
        /* Transition: '<S16>:1250' */
        SideFusion_Fcn_Set_Source(2.0);
        SideFusion_Fcn_Set_Time(SideFusion_Fcn_B.NE_o);

        /* Transition: '<S16>:1257' */
        /* Transition: '<S16>:1256' */
        /* Transition: '<S16>:1266' */
      } else {
        /* Transition: '<S16>:1249' */
        /* Left Rear SRR_Update */
        if (SideFusion_Fcn_DW.sfEvent == SideFusion_Fcn_event_LRSRR) {
          /* Transition: '<S16>:1251' */
          /* Transition: '<S16>:1254' */
          SideFusion_Fcn_Set_Source(3.0);
          SideFusion_Fcn_Set_Time(SideFusion_Fcn_B.NE_oq);

          /* Transition: '<S16>:1256' */
          /* Transition: '<S16>:1266' */
        } else {
          /* Transition: '<S16>:1252' */
          /* Right Rear SRR_Update */
          if (SideFusion_Fcn_DW.sfEvent == SideFusion_Fcn_event_RRSRR) {
            /* Transition: '<S16>:1263' */
            /* Transition: '<S16>:1265' */
            SideFusion_Fcn_Set_Source(4.0);
            SideFusion_Fcn_Set_Time(SideFusion_Fcn_B.NE_or);

            /* Transition: '<S16>:1266' */
          } else {
            /* Transition: '<S16>:1255' */
          }
        }
      }
    }

    /* Transition: '<S16>:1229' */
    /* Entry Internal 'DataSet': '<S16>:1231' */
    /* Transition: '<S16>:1243' */
    SideFusion_Fcn_DW.is_DataSet = SideFusion_Fcn_IN_A;

    /* During 'Fusion_Main': '<S16>:1280' */
    /* During 'B': '<S16>:1277' */
    /* Transition: '<S16>:201' */
    /* Transition: '<S16>:3823' */
    SideFusion_Fcn_FusDataIni();

    /* Transition: '<S16>:204' */
    SideFusion_Fcn_FusTrackPredict();
    SideFusion_Fcn_Measurement_Gen();
    SideFusion_Fcn_Possible_Cal();
    SideFusion_Fcn_Tracker_Update();
    SideFusion_Fcn_Tracker_Manager();
    SideFusion_Fcn_Tracker_Initial();

    /* Transition: '<S16>:1312' */
    SideFusion_Fcn_DW.LastCalTime = SideFusion_Fcn_DW.Sensor_sampleTime;
    SideFusion_Fcn_DW.Num_Trg = SideFusion_Fcn_DW.TrackCounter;
    if (SideFusion_Fcn_DW.GlobalFusTrgCount > 3.0) {
      /* Transition: '<S16>:1293' */
      /* Transition: '<S16>:1295' */
      SideFusion_Fcn_DW.GlobalFusTrgCount = 0.0;
      if (SideFusion_Fcn_B.Global_Fus_Event == 1.0) {
        /* Transition: '<S16>:3564' */
        /* Transition: '<S16>:3566' */
        SideFusion_Fcn_B.Global_Fus_Event = 0.0;
        SideFusion_Fcn_B.Fus_Time = SideFusion_Fcn_DW.Sensor_sampleTime;

        /* Transition: '<S16>:3568' */
      } else {
        /* Transition: '<S16>:3567' */
        SideFusion_Fcn_B.Global_Fus_Event = 1.0;
        SideFusion_Fcn_B.Fus_Time = SideFusion_Fcn_DW.Sensor_sampleTime;
      }

      /* Transition: '<S16>:1297' */
    } else {
      /* Transition: '<S16>:1287' */
      SideFusion_Fcn_DW.GlobalFusTrgCount++;
    }

    /* Transition: '<S16>:1298' */
    if (SideFusion_Fcn_B.RollCnt >= 3.0) {
      /* Transition: '<S16>:3797' */
      /* Transition: '<S16>:3795' */
      SideFusion_Fcn_B.RollCnt = 0.0;

      /* Transition: '<S16>:3796' */
    } else {
      /* Transition: '<S16>:3790' */
      SideFusion_Fcn_B.RollCnt++;
    }

    /* Transition: '<S16>:3791' */
    /* Entry Internal 'Fusion_Main': '<S16>:1280' */
    /* Transition: '<S16>:1278' */
    SideFusion_Fcn_DW.is_Fusion_Main = SideFusion_Fcn_IN_B;
  }
}

/* Model step function */
void SideFusion_Fcn_step(void)
{
  int32_T i;
  boolean_T tmp;
  uint16_T unnamed_idx_0;
  uint16_T unnamed_idx_1;
  uint16_T unnamed_idx_2;
  uint16_T unnamed_idx_3;
  int8_T rtTempZCSig_idx_0;
  int8_T rtTempZCSig_idx_1;
  int8_T rtTempZCSig_idx_2;
  int8_T rtTempZCSig_idx_3;
  ZCEventType zcEvent_idx_0;
  ZCEventType zcEvent_idx_1;
  ZCEventType zcEvent_idx_2;
  ZCEventType zcEvent_idx_3;
  real_T tmp_0;

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LFSRR_RxTime_Local'
   */
  SideFusion_Fcn_B.DataTypeConversion_d = Get_LFSRR_RxTime_Local();

  /* Gain: '<S3>/N->E' */
  SideFusion_Fcn_B.NE_i = SideFusion_Fcn_P.NE_Gain_d *
    SideFusion_Fcn_B.DataTypeConversion_d;

  /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RFSRR_RxTime_Local'
   */
  SideFusion_Fcn_B.DataTypeConversion_c = Get_RFSRR_RxTime_Local();

  /* Gain: '<S7>/N->E' */
  SideFusion_Fcn_B.NE_o = SideFusion_Fcn_P.NE_Gain_m *
    SideFusion_Fcn_B.DataTypeConversion_c;

  /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LRSRR_RxTime_Local'
   */
  SideFusion_Fcn_B.DataTypeConversion_g = Get_LRSRR_RxTime_Local();

  /* Gain: '<S5>/N->E' */
  SideFusion_Fcn_B.NE_oq = SideFusion_Fcn_P.NE_Gain_h *
    SideFusion_Fcn_B.DataTypeConversion_g;
  for (i = 0; i < 50; i++) {
    /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/LFSRR_ObjData_Input'
     */
    SideFusion_Fcn_B.DataTypeConversion[i] = Get_LFSRR_ObjData_Input( i );

    /* Gain: '<S2>/N->E' */
    SideFusion_Fcn_B.NE[i] = SideFusion_Fcn_P.NE_Gain *
      SideFusion_Fcn_B.DataTypeConversion[i];

    /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/RFSRR_ObjData_Input'
     */
    SideFusion_Fcn_B.DataTypeConversion_f[i] = Get_RFSRR_ObjData_Input( i );

    /* Gain: '<S6>/N->E' */
    SideFusion_Fcn_B.NE_f[i] = SideFusion_Fcn_P.NE_Gain_j *
      SideFusion_Fcn_B.DataTypeConversion_f[i];

    /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/LRSRR_ObjData_Input'
     */
    SideFusion_Fcn_B.DataTypeConversion_fz[i] = Get_LRSRR_ObjData_Input( i );

    /* Gain: '<S4>/N->E' */
    SideFusion_Fcn_B.NE_j[i] = SideFusion_Fcn_P.NE_Gain_i *
      SideFusion_Fcn_B.DataTypeConversion_fz[i];

    /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/RRSRR_ObjData_Input'
     */
    SideFusion_Fcn_B.DataTypeConversion_ff[i] = Get_RRSRR_ObjData_Input( i );

    /* Gain: '<S8>/N->E' */
    SideFusion_Fcn_B.NE_jr[i] = SideFusion_Fcn_P.NE_Gain_n *
      SideFusion_Fcn_B.DataTypeConversion_ff[i];
  }

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RRSRR_RxTime_Local'
   */
  SideFusion_Fcn_B.DataTypeConversion_fc = Get_RRSRR_RxTime_Local();

  /* Gain: '<S9>/N->E' */
  SideFusion_Fcn_B.NE_or = SideFusion_Fcn_P.NE_Gain_o *
    SideFusion_Fcn_B.DataTypeConversion_fc;

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Side_Fus_LFSRR_Trigger'
   */
  SideFusion_Fcn_B.DataTypeConversion_f1 = Get_Side_Fus_LFSRR_Trigger();

  /* Gain: '<S12>/N->E' */
  SideFusion_Fcn_B.NE_g = (uint16_T)((uint32_T)SideFusion_Fcn_P.NE_Gain_j2 *
    SideFusion_Fcn_B.DataTypeConversion_f1);

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Side_Fus_RFSRR_Trigger'
   */
  SideFusion_Fcn_B.DataTypeConversion_o = Get_Side_Fus_RFSRR_Trigger();

  /* Gain: '<S14>/N->E' */
  SideFusion_Fcn_B.NE_h = (uint16_T)((uint32_T)SideFusion_Fcn_P.NE_Gain_g *
    SideFusion_Fcn_B.DataTypeConversion_o);

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Side_Fus_LRSRR_Trigger'
   */
  SideFusion_Fcn_B.DataTypeConversion_dx = Get_Side_Fus_LRSRR_Trigger();

  /* Gain: '<S13>/N->E' */
  SideFusion_Fcn_B.NE_jx = (uint16_T)((uint32_T)SideFusion_Fcn_P.NE_Gain_c *
    SideFusion_Fcn_B.DataTypeConversion_dx);

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Side_Fus_RRSRR_Trigger'
   */
  SideFusion_Fcn_B.DataTypeConversion_b = Get_Side_Fus_RRSRR_Trigger();

  /* Gain: '<S15>/N->E' */
  SideFusion_Fcn_B.NE_n = (uint16_T)((uint32_T)SideFusion_Fcn_P.NE_Gain_nv *
    SideFusion_Fcn_B.DataTypeConversion_b);

  /* Chart: '<Root>/Side_Fusion' incorporates:
   *  TriggerPort: '<S16>/ input events '
   */
  unnamed_idx_0 = SideFusion_Fcn_B.NE_g;
  unnamed_idx_1 = SideFusion_Fcn_B.NE_h;
  unnamed_idx_2 = SideFusion_Fcn_B.NE_jx;
  unnamed_idx_3 = SideFusion_Fcn_B.NE_n;
  rtTempZCSig_idx_0 = ( (unnamed_idx_0) > (0) );
  rtTempZCSig_idx_1 = ( (unnamed_idx_1) > (0) );
  rtTempZCSig_idx_2 = ( (unnamed_idx_2) > (0) );
  rtTempZCSig_idx_3 = ( (unnamed_idx_3) > (0) );
  zcEvent_idx_0 = rt_I32ZCFcn(ANY_ZERO_CROSSING,
    &SideFusion_Fcn_PrevZCX.Side_Fusion_Trig_ZCE[0],
                              (rtTempZCSig_idx_0));
  zcEvent_idx_1 = rt_I32ZCFcn(ANY_ZERO_CROSSING,
    &SideFusion_Fcn_PrevZCX.Side_Fusion_Trig_ZCE[1],
                              (rtTempZCSig_idx_1));
  zcEvent_idx_2 = rt_I32ZCFcn(ANY_ZERO_CROSSING,
    &SideFusion_Fcn_PrevZCX.Side_Fusion_Trig_ZCE[2],
                              (rtTempZCSig_idx_2));
  zcEvent_idx_3 = rt_I32ZCFcn(ANY_ZERO_CROSSING,
    &SideFusion_Fcn_PrevZCX.Side_Fusion_Trig_ZCE[3],
                              (rtTempZCSig_idx_3));
  tmp = (zcEvent_idx_0 != NO_ZCEVENT);
  tmp = (tmp || (zcEvent_idx_1 != NO_ZCEVENT));
  tmp = (tmp || (zcEvent_idx_2 != NO_ZCEVENT));
  tmp = (tmp || (zcEvent_idx_3 != NO_ZCEVENT));
  if (tmp) {
    SideFusion_Fcn_B.inputevents[0] = (int8_T)zcEvent_idx_0;
    SideFusion_Fcn_B.inputevents[1] = (int8_T)zcEvent_idx_1;
    SideFusion_Fcn_B.inputevents[2] = (int8_T)zcEvent_idx_2;
    SideFusion_Fcn_B.inputevents[3] = (int8_T)zcEvent_idx_3;

    /* Gateway: Side_Fusion */
    if (SideFusion_Fcn_B.inputevents[0U] != 0) {
      /* Event: '<S16>:1258' */
      SideFusion_Fcn_DW.sfEvent = SideFusion_Fcn_event_LFSRR;
      Sid_chartstep_c4_SideFusion_Fcn();
    }

    if (SideFusion_Fcn_B.inputevents[1U] != 0) {
      /* Event: '<S16>:1259' */
      SideFusion_Fcn_DW.sfEvent = SideFusion_Fcn_event_RFSRR;
      Sid_chartstep_c4_SideFusion_Fcn();
    }

    if (SideFusion_Fcn_B.inputevents[2U] != 0) {
      /* Event: '<S16>:1260' */
      SideFusion_Fcn_DW.sfEvent = SideFusion_Fcn_event_LRSRR;
      Sid_chartstep_c4_SideFusion_Fcn();
    }

    if (SideFusion_Fcn_B.inputevents[3U] != 0) {
      /* Event: '<S16>:1261' */
      SideFusion_Fcn_DW.sfEvent = SideFusion_Fcn_event_RRSRR;
      Sid_chartstep_c4_SideFusion_Fcn();
    }
  }

  for (i = 0; i < 160; i++) {
    /* Gain: '<S10>/E->N' */
    SideFusion_Fcn_B.EN[i] = SideFusion_Fcn_P.EN_Gain *
      SideFusion_Fcn_B.SideFusOut[i];

    /* DataTypeConversion: '<S10>/Data Type Conversion' */
    Set_SideFus_Data( i , SideFusion_Fcn_B.EN[i]);
  }

  /* Gain: '<S11>/E->N' */
  SideFusion_Fcn_B.EN_b = SideFusion_Fcn_P.EN_Gain_i * SideFusion_Fcn_B.Fus_Time;

  /* DataTypeConversion: '<S11>/Data Type Conversion' */
  Set_SideFus_Time(SideFusion_Fcn_B.EN_b);

  /* Gain: '<S1>/E->N' */
  SideFusion_Fcn_B.EN_m = SideFusion_Fcn_P.EN_Gain_a *
    SideFusion_Fcn_B.Global_Fus_Event;

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  tmp_0 = floor(SideFusion_Fcn_B.EN_m);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 256.0);
  }

  Set_Global_Trigger_SideFus((uint8_T)(tmp_0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
                              (uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0));

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */
}

/* Model initialize function */
void SideFusion_Fcn_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(SideFusion_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &SideFusion_Fcn_B), 0,
                sizeof(B_SideFusion_Fcn_T));

  /* states (dwork) */
  (void) memset((void *)&SideFusion_Fcn_DW, 0,
                sizeof(DW_SideFusion_Fcn_T));

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/Tracker_Update.Tracker_Filter.Measurement_Select.Data_Gen.Angle_Detect'
   */
  /* VirtualOutportStart for Outport: '<S24>/AngAssFlg' */
  SideFusion_Fcn_B.Compare_d2 = SideFusion_Fcn_P.AngAssFlg_Y0;

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/Tracker_Update.Tracker_Filter.Update.Update'
   */
  /* VirtualOutportStart for Outport: '<S25>/RangeX' */
  SideFusion_Fcn_B.Subtract1_b[0] = SideFusion_Fcn_P.RangeX_Y0;

  /* VirtualOutportStart for Outport: '<S25>/VelX' */
  SideFusion_Fcn_B.OutportBufferForVelX = SideFusion_Fcn_P.VelX_Y0;

  /* VirtualOutportStart for Outport: '<S25>/RangeY' */
  SideFusion_Fcn_B.OutportBufferForRangeY = SideFusion_Fcn_P.RangeY_Y0;

  /* VirtualOutportStart for Outport: '<S25>/VelY' */
  SideFusion_Fcn_B.OutportBufferForVelY = SideFusion_Fcn_P.VelY_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P11' */
  SideFusion_Fcn_B.Saturation_c = SideFusion_Fcn_P.P11_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P12' */
  SideFusion_Fcn_B.Saturation1_c = SideFusion_Fcn_P.P12_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P13' */
  SideFusion_Fcn_B.Saturation2_j = SideFusion_Fcn_P.P13_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P14' */
  SideFusion_Fcn_B.Saturation3_h = SideFusion_Fcn_P.P14_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P21' */
  SideFusion_Fcn_B.Saturation4_j = SideFusion_Fcn_P.P21_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P22' */
  SideFusion_Fcn_B.Saturation5_o = SideFusion_Fcn_P.P22_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P23' */
  SideFusion_Fcn_B.Saturation6_o = SideFusion_Fcn_P.P23_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P24' */
  SideFusion_Fcn_B.Saturation7_d = SideFusion_Fcn_P.P24_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P31' */
  SideFusion_Fcn_B.Saturation8_l = SideFusion_Fcn_P.P31_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P32' */
  SideFusion_Fcn_B.Saturation9_m = SideFusion_Fcn_P.P32_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P33' */
  SideFusion_Fcn_B.Saturation10_p = SideFusion_Fcn_P.P33_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P34' */
  SideFusion_Fcn_B.Saturation11_e = SideFusion_Fcn_P.P34_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P41' */
  SideFusion_Fcn_B.Saturation12_g = SideFusion_Fcn_P.P41_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P42' */
  SideFusion_Fcn_B.Saturation13_h = SideFusion_Fcn_P.P42_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P43' */
  SideFusion_Fcn_B.Saturation14_e = SideFusion_Fcn_P.P43_Y0;

  /* VirtualOutportStart for Outport: '<S25>/P44' */
  SideFusion_Fcn_B.Saturation16 = SideFusion_Fcn_P.P44_Y0;

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/FusTrackPredict.Forecast'
   */
  /* VirtualOutportStart for Outport: '<S17>/RangeX' */
  SideFusion_Fcn_B.x_predict4x1[0] = SideFusion_Fcn_P.RangeX_Y0_f;

  /* VirtualOutportStart for Outport: '<S17>/VelX' */
  SideFusion_Fcn_B.Velocity_X = SideFusion_Fcn_P.VelX_Y0_l;

  /* VirtualOutportStart for Outport: '<S17>/RangeY' */
  SideFusion_Fcn_B.Range_Y = SideFusion_Fcn_P.RangeY_Y0_j;

  /* VirtualOutportStart for Outport: '<S17>/VelY' */
  SideFusion_Fcn_B.Velocity_Y = SideFusion_Fcn_P.VelY_Y0_a;

  /* VirtualOutportStart for Outport: '<S17>/P11' */
  SideFusion_Fcn_B.Saturation = SideFusion_Fcn_P.P11_Y0_b;

  /* VirtualOutportStart for Outport: '<S17>/P12' */
  SideFusion_Fcn_B.Saturation4 = SideFusion_Fcn_P.P12_Y0_m;

  /* VirtualOutportStart for Outport: '<S17>/P13' */
  SideFusion_Fcn_B.Saturation8 = SideFusion_Fcn_P.P13_Y0_m;

  /* VirtualOutportStart for Outport: '<S17>/P14' */
  SideFusion_Fcn_B.Saturation14 = SideFusion_Fcn_P.P14_Y0_f;

  /* VirtualOutportStart for Outport: '<S17>/P21' */
  SideFusion_Fcn_B.Saturation1 = SideFusion_Fcn_P.P21_Y0_k;

  /* VirtualOutportStart for Outport: '<S17>/P22' */
  SideFusion_Fcn_B.Saturation5 = SideFusion_Fcn_P.P22_Y0_d;

  /* VirtualOutportStart for Outport: '<S17>/P23' */
  SideFusion_Fcn_B.Saturation9 = SideFusion_Fcn_P.P23_Y0_a;

  /* VirtualOutportStart for Outport: '<S17>/P24' */
  SideFusion_Fcn_B.Saturation15 = SideFusion_Fcn_P.P24_Y0_j;

  /* VirtualOutportStart for Outport: '<S17>/P31' */
  SideFusion_Fcn_B.Saturation2 = SideFusion_Fcn_P.P31_Y0_b;

  /* VirtualOutportStart for Outport: '<S17>/P32' */
  SideFusion_Fcn_B.Saturation6 = SideFusion_Fcn_P.P32_Y0_j;

  /* VirtualOutportStart for Outport: '<S17>/P33' */
  SideFusion_Fcn_B.Saturation10 = SideFusion_Fcn_P.P33_Y0_n;

  /* VirtualOutportStart for Outport: '<S17>/P34' */
  SideFusion_Fcn_B.Saturation12 = SideFusion_Fcn_P.P34_Y0_b;

  /* VirtualOutportStart for Outport: '<S17>/P41' */
  SideFusion_Fcn_B.Saturation3 = SideFusion_Fcn_P.P41_Y0_h;

  /* VirtualOutportStart for Outport: '<S17>/P42' */
  SideFusion_Fcn_B.Saturation7 = SideFusion_Fcn_P.P42_Y0_h;

  /* VirtualOutportStart for Outport: '<S17>/P43' */
  SideFusion_Fcn_B.Saturation11 = SideFusion_Fcn_P.P43_Y0_e;

  /* VirtualOutportStart for Outport: '<S17>/P44' */
  SideFusion_Fcn_B.Saturation13 = SideFusion_Fcn_P.P44_Y0_b;

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/Tracker_Initial.VelocityMethod'
   */
  Tracker_InitialVelocityMe_Start
    (&SideFusion_Fcn_B.Tracker_InitialVelocityMethod,
     (P_Tracker_InitialVelocityMeth_T *)
     &SideFusion_Fcn_P.Tracker_InitialVelocityMethod);

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/Tracker_Initial.cos_cal'
   */
  Si_Tracker_Initialcos_cal_Start(&SideFusion_Fcn_B.Tracker_Initialcos_cal,
    (P_Tracker_Initialcos_cal_Side_T *)&SideFusion_Fcn_P.Tracker_Initialcos_cal);

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_LF'
   */
  /* VirtualOutportStart for Outport: '<S18>/Gtj' */
  SideFusion_Fcn_B.Gtj_e = SideFusion_Fcn_P.Gtj_Y0;

  /* VirtualOutportStart for Outport: '<S18>/dtj' */
  SideFusion_Fcn_B.Divide_n = SideFusion_Fcn_P.dtj_Y0;

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_RF'
   */
  /* VirtualOutportStart for Outport: '<S20>/Gtj' */
  SideFusion_Fcn_B.Gtj_a = SideFusion_Fcn_P.Gtj_Y0_g;

  /* VirtualOutportStart for Outport: '<S20>/dtj' */
  SideFusion_Fcn_B.Divide_k = SideFusion_Fcn_P.dtj_Y0_p;

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_LR'
   */
  /* VirtualOutportStart for Outport: '<S19>/Gtj' */
  SideFusion_Fcn_B.Gtj_d = SideFusion_Fcn_P.Gtj_Y0_d;

  /* VirtualOutportStart for Outport: '<S19>/dtj' */
  SideFusion_Fcn_B.Divide_d = SideFusion_Fcn_P.dtj_Y0_p5;

  /* Start for Chart: '<Root>/Side_Fusion' incorporates:
   *  Start for SubSystem: '<S16>/Possible_Cal.Gtj_Cal.G_cal_RR'
   */
  /* VirtualOutportStart for Outport: '<S21>/Gtj' */
  SideFusion_Fcn_B.Gtj = SideFusion_Fcn_P.Gtj_Y0_l;

  /* VirtualOutportStart for Outport: '<S21>/dtj' */
  SideFusion_Fcn_B.Divide_e = SideFusion_Fcn_P.dtj_Y0_d;
  SideFusion_Fcn_PrevZCX.Side_Fusion_Trig_ZCE[0] = UNINITIALIZED_ZCSIG;
  SideFusion_Fcn_PrevZCX.Side_Fusion_Trig_ZCE[1] = UNINITIALIZED_ZCSIG;
  SideFusion_Fcn_PrevZCX.Side_Fusion_Trig_ZCE[2] = UNINITIALIZED_ZCSIG;
  SideFusion_Fcn_PrevZCX.Side_Fusion_Trig_ZCE[3] = UNINITIALIZED_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for Chart: '<Root>/Side_Fusion' */
    SideFusion_Fcn_DW.is_active_DataSet = 0U;
    SideFusion_Fcn_DW.is_DataSet = SideFusion_F_IN_NO_ACTIVE_CHILD;
    SideFusion_Fcn_DW.is_active_Fusion_Main = 0U;
    SideFusion_Fcn_DW.is_Fusion_Main = SideFusion_F_IN_NO_ACTIVE_CHILD;
    SideFusion_Fcn_DW.is_active_c4_SideFusion_Fcn = 0U;
    for (i = 0; i < 1600; i++) {
      SideFusion_Fcn_DW.Gtj[i] = 0.0;
      SideFusion_Fcn_DW.Ptj[i] = 0.0;
    }

    SideFusion_Fcn_DW.k = 0.0;
    memset(&SideFusion_Fcn_DW.FusDataInternal_temp[0], 0, 1160U * sizeof(real_T));
    SideFusion_Fcn_DW.n = 0.0;
    SideFusion_Fcn_DW.t = 0.0;
    SideFusion_Fcn_DW.j = 0.0;
    for (i = 0; i < 40; i++) {
      SideFusion_Fcn_DW.Gtsum[i] = 0.0;
      SideFusion_Fcn_DW.Gsumj[i] = 0.0;
      SideFusion_Fcn_DW.Ptsum[i] = 0.0;
      SideFusion_Fcn_DW.Psumj[i] = 0.0;
    }

    memset(&SideFusion_Fcn_DW.P_Bulb[0], 0, 160U * sizeof(real_T));
    memset(&SideFusion_Fcn_DW.SelectMea[0], 0, 9U * sizeof(real_T));
    memset(&SideFusion_Fcn_DW.UpdateTrackFlag[0], 0, 40U * sizeof(real_T));
    SideFusion_Fcn_DW.GlobalFusTrgCount = 0.0;
    SideFusion_Fcn_DW.Sensor_sampleTime = 0.0;
    SideFusion_Fcn_DW.LastCalTime = 0.0;
    SideFusion_Fcn_DW.Num_Trg = 0.0;
    SideFusion_Fcn_DW.TrackCounter = 0.0;
    SideFusion_Fcn_DW.c = 0.0;
    SideFusion_Fcn_DW.Num_Returns = 0.0;
    memset(&SideFusion_Fcn_DW.Returns[0], 0, 30U * sizeof(real_T));
    for (i = 0; i < 280; i++) {
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR[i] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR[i] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR[i] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LFSRR_New[i] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_LRSRR_New[i] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RFSRR_New[i] = 0.0;
      SideFusion_Fcn_DW.Ini_Tracker_RRSRR_New[i] = 0.0;
    }

    SideFusion_Fcn_DW.Num_Ini_Tracker_LFSRR_New = 0.0;
    SideFusion_Fcn_DW.Num_Ini_Tracker_LRSRR_New = 0.0;
    SideFusion_Fcn_DW.Num_Ini_Tracker_RFSRR_New = 0.0;
    SideFusion_Fcn_DW.Num_Ini_Tracker_RRSRR_New = 0.0;
    SideFusion_Fcn_DW.LastFusID = 0.0;
    memset(&SideFusion_Fcn_DW.IDUsedFlag[0], 0, 127U * sizeof(real_T));
    SideFusion_Fcn_DW.DataSource = 0.0;
    SideFusion_Fcn_DW.mk = 0.0;
    memset(&SideFusion_Fcn_DW.OneMeasureFlg[0], 0, 10U * sizeof(real_T));
    memset(&SideFusion_Fcn_DW.Group_Data[0], 0, 20U * sizeof(real_T));
    SideFusion_Fcn_DW.Group_Num = 0.0;
    memset(&SideFusion_Fcn_DW.dtj[0], 0, 1600U * sizeof(real_T));
    memset(&SideFusion_Fcn_B.FusDataInternal[0], 0, 1160U * sizeof(real_T));
    SideFusion_Fcn_B.deltaT = 0.0;
    memset(&SideFusion_Fcn_B.Measure_Data[0], 0, 240U * sizeof(real_T));
    SideFusion_Fcn_B.Measure_Num = 0.0;
    memset(&SideFusion_Fcn_B.SideFusOut[0], 0, 160U * sizeof(real_T));
    SideFusion_Fcn_B.Num_Out = 0.0;
    memset(&SideFusion_Fcn_B.Ini_Tracker_LFSRR[0], 0, 280U * sizeof(real_T));
    SideFusion_Fcn_B.Global_Fus_Event = 0.0;
    SideFusion_Fcn_B.Fus_Time = 0.0;
    SideFusion_Fcn_B.RollCnt = 0.0;

    /* End of InitializeConditions for Chart: '<Root>/Side_Fusion' */
  }
}

/* Model terminate function */
void SideFusion_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
