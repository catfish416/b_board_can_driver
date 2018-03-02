/*
 * File: SideOccupy_Fcn.c
 *
 * Code generated for Simulink model 'SideOccupy_Fcn'.
 *
 * Model version                  : 1.47
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Mon May 15 13:25:13 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SideOccupy_Fcn.h"
#include "SideOccupy_Fcn_private.h"
#include "interface.h"

/* Named constants for Chart: '<Root>/Side_Occ_Judge_Module' */
#define SideOccupy_Fcn_CurrentLateralDist_Th (3.0)
#define SideOccupy_Fcn_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define SideOccupy_Fcn_IN_StepOne      ((uint8_T)1U)
#define SideOccupy_Fcn_IN_StepTwo      ((uint8_T)1U)
#define SideOccupy_Fcn_PredictLateralDist_Th (1.0)
#define SideOccupy_Fcn_TTC_Threshold   (2.0)

/* Block signals (auto storage) */
B_SideOccupy_Fcn_T SideOccupy_Fcn_B;

/* Block states (auto storage) */
DW_SideOccupy_Fcn_T SideOccupy_Fcn_DW;

/* Real-time model */
RT_MODEL_SideOccupy_Fcn_T SideOccupy_Fcn_M_;
RT_MODEL_SideOccupy_Fcn_T *const SideOccupy_Fcn_M = &SideOccupy_Fcn_M_;

/* Forward declaration for local functions */
static void SideOccupy_Fcn_DataIni(void);
static void SideOccupy_Fcn_Inner_SdOccJudAccordMov(void);
static void SideOccupy_Fcn_Outer_SdOccJudAccordMov(void);
static void SideOccupy_Fcn_Inner_SdOccJudAccordRtLane(void);
static void SideOccupy_Fcn_Outer_SdOccJudAccordLtLane(void);
static void SideOccupy_Fcn_TS_NoLocation(void);
static void SideOccupy_Fcn_TS_Inner_WtRtLn(void);
static void SideOccupy_Fcn_TS_Outer_WtLtLn(void);

/* Start for function-call system: '<S26>/Judge_Main.InterestObjDet_WithLane' */
void SideOccupy_Fcn_Judge_MainInterestObjDet_WithLane_Start
  (B_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *localB,
   P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *localP)
{
  /* VirtualOutportStart for Outport: '<S32>/InterestFlg' */
  localB->DataTypeConversion = localP->InterestFlg_Y0;
}

/* Output and update for function-call system: '<S26>/Judge_Main.InterestObjDet_WithLane' */
void SideOccupy_Fcn_Judge_MainInterestObjDet_WithLane(real_T rtu_Rmin, real_T
  rtu_angle, real_T rtu_x, real_T rtu_Rmax,
  B_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *localB,
  P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *localP)
{
  /* Gain: '<S32>/Gain1' */
  localB->Gain1 = localP->Gain1_Gain * rtu_Rmin;

  /* Gain: '<S32>/Gain' */
  localB->Gain = localP->Gain_Gain * rtu_angle;

  /* Trigonometry: '<S32>/Trigonometric Function' */
  localB->TrigonometricFunction = cos(localB->Gain);

  /* Product: '<S32>/Product' */
  localB->Product = rtu_x * localB->TrigonometricFunction;

  /* RelationalOperator: '<S32>/Relational Operator1' */
  localB->RelationalOperator1 = (localB->Gain1 <= localB->Product);

  /* RelationalOperator: '<S32>/Relational Operator' */
  localB->RelationalOperator = (localB->Product <= rtu_Rmax);

  /* Logic: '<S32>/Logical Operator' */
  localB->LogicalOperator = (localB->RelationalOperator1 &&
    localB->RelationalOperator);

  /* DataTypeConversion: '<S32>/Data Type Conversion' */
  localB->DataTypeConversion = (int8_T)localB->LogicalOperator;
}

/* Start for function-call system: '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
void SideOccupy_Fcn_Judge_MainInterestObjDet_WithoutLane_Start
  (B_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *localB,
   P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *localP)
{
  /* VirtualOutportStart for Outport: '<S33>/InterestFlg' */
  localB->DataTypeConversion = localP->InterestFlg_Y0;
}

/* Output and update for function-call system: '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
void SideOccupy_Fcn_Judge_MainInterestObjDet_WithoutLane(real_T rtu_Radius,
  real_T rtu_Rmin, real_T rtu_x, real_T rtu_Rmax,
  B_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *localB,
  P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *localP)
{
  real_T u0;
  real_T u1;

  /* Abs: '<S33>/Abs' */
  localB->Abs = fabs(rtu_Radius);

  /* Gain: '<S33>/Gain1' */
  localB->Gain1 = localP->Gain1_Gain * rtu_Rmin;

  /* RelationalOperator: '<S33>/Relational Operator1' */
  localB->RelationalOperator1 = (localB->Gain1 <= rtu_x);

  /* MinMax: '<S33>/MinMax' */
  u0 = rtu_Rmax;
  u1 = localB->Abs;
  if ((u0 <= u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  localB->MinMax = u1;

  /* End of MinMax: '<S33>/MinMax' */

  /* RelationalOperator: '<S33>/Relational Operator' */
  localB->RelationalOperator = (rtu_x <= localB->MinMax);

  /* Logic: '<S33>/Logical Operator' */
  localB->LogicalOperator = (localB->RelationalOperator1 &&
    localB->RelationalOperator);

  /* DataTypeConversion: '<S33>/Data Type Conversion' */
  localB->DataTypeConversion = (int8_T)localB->LogicalOperator;
}

/* Start for function-call system: '<S26>/Judge_Main.TTC_Cal' */
void SideOccupy_Fcn_Judge_MainTTC_Cal_Start(B_Judge_MainTTC_Cal_SideOccupy_Fcn_T
  *localB, P_Judge_MainTTC_Cal_SideOccupy_Fcn_T *localP)
{
  /* VirtualOutportStart for Outport: '<S41>/TTC' */
  localB->Switch = localP->TTC_Y0;
}

/* Output and update for function-call system: '<S26>/Judge_Main.TTC_Cal' */
void SideOccupy_Fcn_Judge_MainTTC_Cal(real_T rtu_v, real_T rtu_x,
  B_Judge_MainTTC_Cal_SideOccupy_Fcn_T *localB,
  P_Judge_MainTTC_Cal_SideOccupy_Fcn_T *localP)
{
  real_T u0;
  real_T u1;

  /* RelationalOperator: '<S134>/Compare' incorporates:
   *  Constant: '<S134>/Constant'
   */
  localB->Compare = (rtu_v >= localP->Constant_Value_a);

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/Constant'
   */
  if (localB->Compare) {
    localB->Switch = localP->Constant_Value;
  } else {
    /* Product: '<S41>/Divide' */
    localB->Divide = 1.0 / rtu_v * rtu_x;

    /* Gain: '<S41>/Gain' */
    localB->Gain = localP->Gain_Gain * localB->Divide;

    /* MinMax: '<S41>/MinMax' incorporates:
     *  Constant: '<S41>/Constant1'
     */
    u0 = localB->Gain;
    u1 = localP->Constant1_Value;
    if ((u0 <= u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    localB->MinMax = u1;

    /* End of MinMax: '<S41>/MinMax' */
    localB->Switch = localB->MinMax;
  }

  /* End of Switch: '<S41>/Switch' */
}

/*
 * Start for function-call system:
 *    '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn'
 *    '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn'
 */
void SideOccupy_Fcn_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_Start
  (B_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
   *localB,
   P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
   *localP)
{
  /* VirtualOutportStart for Outport: '<S35>/SelectObjFlg' */
  localB->DataTypeConversion = localP->SelectObjFlg_Y0;
}

/*
 * Output and update for function-call system:
 *    '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn'
 *    '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn'
 */
void SideOccupy_Fcn_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn
  (real_T rtu_c1, real_T rtu_x, real_T rtu_c2, real_T rtu_c3, real_T rtu_y,
   real_T rtu_c0, real_T rtu_LtLnWd, real_T rtu_RtLnWd,
   B_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
   *localB,
   P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
   *localP)
{
  /* Product: '<S80>/Product' */
  localB->Product = rtu_c1 * rtu_x;

  /* Product: '<S80>/Product1' */
  localB->Product1 = rtu_c2 * rtu_x * rtu_x;

  /* Product: '<S80>/Product2' */
  localB->Product2 = rtu_c3 * rtu_x * rtu_x * rtu_x;

  /* Sum: '<S80>/Subtract' */
  localB->Subtract = ((((rtu_y + localB->Product) + localB->Product1) +
                       localB->Product2) + rtu_c0) - rtu_LtLnWd;

  /* RelationalOperator: '<S82>/Compare' incorporates:
   *  Constant: '<S82>/Constant'
   */
  localB->Compare = (localB->Subtract < localP->Constant_Value);

  /* Product: '<S81>/Product' */
  localB->Product_c = rtu_c1 * rtu_x;

  /* Product: '<S81>/Product1' */
  localB->Product1_p = rtu_c2 * rtu_x * rtu_x;

  /* Product: '<S81>/Product2' */
  localB->Product2_c = rtu_c3 * rtu_x * rtu_x * rtu_x;

  /* Sum: '<S81>/Subtract' */
  localB->Subtract_a = ((((rtu_y + localB->Product_c) + localB->Product1_p) +
    localB->Product2_c) + rtu_c0) + rtu_RtLnWd;

  /* RelationalOperator: '<S83>/Compare' incorporates:
   *  Constant: '<S83>/Constant'
   */
  localB->Compare_f = (localB->Subtract_a > localP->Constant_Value_l);

  /* Product: '<S35>/Product' */
  localB->Product_m = (uint16_T)(localB->Compare_f ? (int32_T)localB->Compare :
    0);

  /* DataTypeConversion: '<S35>/Data Type Conversion' */
  localB->DataTypeConversion = (int8_T)localB->Product_m;
}

/* Function for Chart: '<Root>/Side_Occ_Judge_Module' */
static void SideOccupy_Fcn_DataIni(void)
{
  int32_T i;

  /* Graphical Function 'DataIni': '<S26>:352' */
  /* Transition: '<S26>:1158' */
  /* Transition: '<S26>:357' */
  /* Initial Data */
  SideOccupy_Fcn_DW.Num_LF = 0.0;
  SideOccupy_Fcn_DW.Num_RF = 0.0;
  SideOccupy_Fcn_DW.Num_LR = 0.0;
  SideOccupy_Fcn_DW.Num_RR = 0.0;
  SideOccupy_Fcn_DW.Num_F = 0.0;
  SideOccupy_Fcn_DW.Num_R = 0.0;
  SideOccupy_Fcn_DW.k = 0.0;
  SideOccupy_Fcn_B.LtFrtSd_OccFlg = 0.0;

  /* Left Front Side Occupy Flag */
  SideOccupy_Fcn_B.LtRrSd_OccFlg = 0.0;

  /* Left Rear Side Occupy Flag */
  SideOccupy_Fcn_B.RtFrtSd_OccFlg = 0.0;

  /* Left Front Side Occupy Flag */
  SideOccupy_Fcn_B.RtRrSd_OccFlg = 0.0;

  /* Left Rear Side Occupy Flag */
  SideOccupy_Fcn_B.FrtCent_OccFlg = 0.0;

  /* Front Zone Occupy Flag */
  SideOccupy_Fcn_B.RrCent_OccFlg = 0.0;

  /* Rear Zone Occupy Flag */
  /* Left Front Side Occupy Index */
  /* Left Rear Side Occupy Index */
  /* Left Front Side Occupy Index */
  /* Left Rear Side Occupy Index */
  /* Front Zone Occupy Index */
  for (i = 0; i < 127; i++) {
    SideOccupy_Fcn_B.LtFrtSd_OccIndex[i] = 0.0;
    SideOccupy_Fcn_B.LtRrSd_OccIndex[i] = 0.0;
    SideOccupy_Fcn_B.RtFrtSd_OccIndex[i] = 0.0;
    SideOccupy_Fcn_B.RtRrSd_OccIndex[i] = 0.0;
    SideOccupy_Fcn_B.FrtCent_OccIndex[i] = 0.0;
    SideOccupy_Fcn_B.RrCent_OccIndex[i] = 0.0;
  }

  /* Rear Zone Occupy Index */
  memset(&SideOccupy_Fcn_B.FusObj_Select[0], 0, 3302U * sizeof(real_T));

  /* Select object output  */
  SideOccupy_Fcn_B.Num_Out_Select = 0.0;

  /* Select Object Number */
  SideOccupy_Fcn_DW.TTC_Min = 10.0;
  SideOccupy_Fcn_B.CIPO_ID = 0.0;

  /* Transition: '<S26>:358' */
}

/* Function for Chart: '<Root>/Side_Occ_Judge_Module' */
static void SideOccupy_Fcn_Inner_SdOccJudAccordMov(void)
{
  boolean_T guard1;
  boolean_T guard2;
  real_T u0;

  /* Graphical Function 'Inner_SdOccJudAccordMov': '<S26>:406' */
  /* Transition: '<S26>:647' */
  SideOccupy_Fcn_B.LtFrtSd_OccFlg = 0.0;

  /* Left Front Side Occupy Flag */
  SideOccupy_Fcn_B.LtRrSd_OccFlg = 0.0;

  /* Left Rear Side Occupy Flag */
  SideOccupy_Fcn_B.RtRrSd_OccFlg = 0.0;
  SideOccupy_Fcn_B.RtFrtSd_OccFlg = 0.0;
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:663' */
    /* Transition: '<S26>:642' */
    /* Simulink Function 'InterestObjDet_WithoutLane': '<S26>:561' */
    SideOccupy_Fcn_B.x_l = SideOccupy_Fcn_B.NE[127 + (int32_T)
      SideOccupy_Fcn_DW.k];
    SideOccupy_Fcn_B.Radius = SideOccupy_Fcn_B.Saturation2;

    /* Constant: '<Root>/Cal_SdDist_Front' */
    SideOccupy_Fcn_B.Rmax_m = SideOccupy_Fcn_P.Cal_SdDist_Front_Value;

    /* Constant: '<Root>/Cal_SdDist_Rear' */
    SideOccupy_Fcn_B.Rmin_e = SideOccupy_Fcn_P.Cal_SdDist_Rear_Value;

    /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
    SideOccupy_Fcn_Judge_MainInterestObjDet_WithoutLane(SideOccupy_Fcn_B.Radius,
      SideOccupy_Fcn_B.Rmin_e, SideOccupy_Fcn_B.x_l, SideOccupy_Fcn_B.Rmax_m,
      &SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithoutLane,
      (P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *)
      &SideOccupy_Fcn_P.Judge_MainInterestObjDet_WithoutLane);

    /* End of Outputs for SubSystem: '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
    if (SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithoutLane.DataTypeConversion
        == 1) {
      /* Transition: '<S26>:648' */
      /* Transition: '<S26>:643' */
      /* Simulink Function 'Fcn_RtSdOccJdWoLn': '<S26>:673' */
      SideOccupy_Fcn_B.x_f2 = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.y_b = SideOccupy_Fcn_B.NE[381 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.radius_e = SideOccupy_Fcn_B.Saturation2;
      SideOccupy_Fcn_B.W_c = 1.9;

      /* Constant: '<Root>/Cal_Mov_EgoLnWd' */
      SideOccupy_Fcn_B.EgoLnWd_m = SideOccupy_Fcn_P.Cal_Mov_EgoLnWd_Value;

      /* Constant: '<Root>/Cal_Mov_NextLnWd' */
      SideOccupy_Fcn_B.NextLnWd_e = SideOccupy_Fcn_P.Cal_Mov_NextLnWd_Value;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn' */
      /* Product: '<S51>/Divide' */
      SideOccupy_Fcn_B.Divide_b = SideOccupy_Fcn_B.x_f2 /
        SideOccupy_Fcn_B.radius_e;

      /* Trigonometry: '<S51>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_b;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_k = asin(u0);

      /* End of Trigonometry: '<S51>/Trigonometric Function' */

      /* Gain: '<S51>/Gain1' */
      SideOccupy_Fcn_B.Gain1_e = SideOccupy_Fcn_P.Gain1_Gain_l2 *
        SideOccupy_Fcn_B.TrigonometricFunction_k;

      /* Trigonometry: '<S51>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_o = tan(SideOccupy_Fcn_B.Gain1_e);

      /* Product: '<S51>/Divide1' */
      SideOccupy_Fcn_B.Divide1_h = SideOccupy_Fcn_B.x_f2 *
        SideOccupy_Fcn_B.TrigonometricFunction1_o;

      /* Gain: '<S51>/Gain2' */
      SideOccupy_Fcn_B.Gain2_p = SideOccupy_Fcn_P.Gain2_Gain_i *
        SideOccupy_Fcn_B.W_c;

      /* Sum: '<S51>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_i = (SideOccupy_Fcn_B.y_b +
        SideOccupy_Fcn_B.Divide1_h) + SideOccupy_Fcn_B.Gain2_p;

      /* RelationalOperator: '<S55>/Compare' incorporates:
       *  Constant: '<S55>/Constant'
       */
      SideOccupy_Fcn_B.Compare_h = (SideOccupy_Fcn_B.Subtract1_i <
        SideOccupy_Fcn_P.Constant_Value_kz);

      /* Product: '<S49>/Divide' */
      SideOccupy_Fcn_B.Divide_j = SideOccupy_Fcn_B.x_f2 /
        SideOccupy_Fcn_B.radius_e;

      /* Trigonometry: '<S49>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_j;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_i = asin(u0);

      /* End of Trigonometry: '<S49>/Trigonometric Function' */

      /* Gain: '<S49>/Gain1' */
      SideOccupy_Fcn_B.Gain1_p = SideOccupy_Fcn_P.Gain1_Gain_a4 *
        SideOccupy_Fcn_B.TrigonometricFunction_i;

      /* Trigonometry: '<S49>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_ok = tan(SideOccupy_Fcn_B.Gain1_p);

      /* Product: '<S49>/Divide1' */
      SideOccupy_Fcn_B.Divide1_o = SideOccupy_Fcn_B.x_f2 *
        SideOccupy_Fcn_B.TrigonometricFunction1_ok;

      /* Gain: '<S49>/Gain2' */
      SideOccupy_Fcn_B.Gain2_b = SideOccupy_Fcn_P.Gain2_Gain_dr *
        SideOccupy_Fcn_B.EgoLnWd_m;

      /* Sum: '<S49>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_a = ((SideOccupy_Fcn_B.y_b +
        SideOccupy_Fcn_B.Divide1_o) + SideOccupy_Fcn_B.Gain2_b) +
        SideOccupy_Fcn_B.NextLnWd_e;

      /* RelationalOperator: '<S53>/Compare' incorporates:
       *  Constant: '<S53>/Constant'
       */
      SideOccupy_Fcn_B.Compare_n = (SideOccupy_Fcn_B.Subtract1_a >
        SideOccupy_Fcn_P.Constant_Value_p);

      /* Product: '<S29>/Product' */
      SideOccupy_Fcn_B.Product_i = (uint16_T)(SideOccupy_Fcn_B.Compare_h ?
        (int32_T)SideOccupy_Fcn_B.Compare_n : 0);

      /* DataTypeConversion: '<S29>/Data Type Conversion' */
      SideOccupy_Fcn_B.DataTypeConversion_eb = (int8_T)
        SideOccupy_Fcn_B.Product_i;

      /* Product: '<S50>/Divide' */
      SideOccupy_Fcn_B.Divide_ie = SideOccupy_Fcn_B.x_f2 /
        SideOccupy_Fcn_B.radius_e;

      /* Trigonometry: '<S50>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_ie;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_n = asin(u0);

      /* End of Trigonometry: '<S50>/Trigonometric Function' */

      /* Gain: '<S50>/Gain1' */
      SideOccupy_Fcn_B.Gain1_d = SideOccupy_Fcn_P.Gain1_Gain_c *
        SideOccupy_Fcn_B.TrigonometricFunction_n;

      /* Trigonometry: '<S50>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_n = tan(SideOccupy_Fcn_B.Gain1_d);

      /* Product: '<S50>/Divide1' */
      SideOccupy_Fcn_B.Divide1_e = SideOccupy_Fcn_B.x_f2 *
        SideOccupy_Fcn_B.TrigonometricFunction1_n;

      /* Gain: '<S50>/Gain2' */
      SideOccupy_Fcn_B.Gain2_a = SideOccupy_Fcn_P.Gain2_Gain_ll *
        SideOccupy_Fcn_B.W_c;

      /* Sum: '<S50>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_g = (SideOccupy_Fcn_B.y_b +
        SideOccupy_Fcn_B.Divide1_e) - SideOccupy_Fcn_B.Gain2_a;

      /* RelationalOperator: '<S54>/Compare' incorporates:
       *  Constant: '<S54>/Constant'
       */
      SideOccupy_Fcn_B.Compare_dh = (SideOccupy_Fcn_B.Subtract1_g >
        SideOccupy_Fcn_P.Constant_Value_gt);

      /* Product: '<S48>/Divide' */
      SideOccupy_Fcn_B.Divide_dp = SideOccupy_Fcn_B.x_f2 /
        SideOccupy_Fcn_B.radius_e;

      /* Trigonometry: '<S48>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_dp;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_p = asin(u0);

      /* End of Trigonometry: '<S48>/Trigonometric Function' */

      /* Gain: '<S48>/Gain1' */
      SideOccupy_Fcn_B.Gain1_eo = SideOccupy_Fcn_P.Gain1_Gain_j *
        SideOccupy_Fcn_B.TrigonometricFunction_p;

      /* Trigonometry: '<S48>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_j = tan(SideOccupy_Fcn_B.Gain1_eo);

      /* Product: '<S48>/Divide1' */
      SideOccupy_Fcn_B.Divide1_c4 = SideOccupy_Fcn_B.x_f2 *
        SideOccupy_Fcn_B.TrigonometricFunction1_j;

      /* Gain: '<S48>/Gain2' */
      SideOccupy_Fcn_B.Gain2_m = SideOccupy_Fcn_P.Gain2_Gain_m *
        SideOccupy_Fcn_B.EgoLnWd_m;

      /* Sum: '<S48>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_d = (SideOccupy_Fcn_B.y_b +
        SideOccupy_Fcn_B.Divide1_c4) - SideOccupy_Fcn_B.Gain2_m;

      /* RelationalOperator: '<S52>/Compare' incorporates:
       *  Constant: '<S52>/Constant'
       */
      SideOccupy_Fcn_B.Compare_dm = (SideOccupy_Fcn_B.Subtract1_d <
        SideOccupy_Fcn_P.Constant_Value_px);

      /* Product: '<S29>/Product1' */
      SideOccupy_Fcn_B.Product1_g = (uint16_T)(SideOccupy_Fcn_B.Compare_dh ?
        (int32_T)SideOccupy_Fcn_B.Compare_dm : 0);

      /* Gain: '<S29>/Gain' */
      SideOccupy_Fcn_B.Gain_g = (uint32_T)SideOccupy_Fcn_P.Gain_Gain_o *
        SideOccupy_Fcn_B.Product1_g;

      /* DataTypeConversion: '<S29>/Data Type Conversion1' */
      SideOccupy_Fcn_B.DataTypeConversion1 = (int8_T)(SideOccupy_Fcn_B.Gain_g >>
        14);

      /* Logic: '<S29>/Logical Operator' */
      SideOccupy_Fcn_B.LogicalOperator = !SideOccupy_Fcn_B.Compare_h;

      /* Logic: '<S29>/Logical Operator1' */
      SideOccupy_Fcn_B.LogicalOperator1 = !SideOccupy_Fcn_B.Compare_dh;

      /* Product: '<S29>/Product2' */
      SideOccupy_Fcn_B.Product2_l = (uint16_T)(SideOccupy_Fcn_B.LogicalOperator ?
        (int32_T)SideOccupy_Fcn_B.LogicalOperator1 : 0);

      /* Gain: '<S29>/Gain1' */
      SideOccupy_Fcn_B.Gain1_e0 = (uint32_T)SideOccupy_Fcn_P.Gain1_Gain_ca *
        SideOccupy_Fcn_B.Product2_l;

      /* DataTypeConversion: '<S29>/Data Type Conversion2' */
      SideOccupy_Fcn_B.DataTypeConversion2 = (int8_T)(SideOccupy_Fcn_B.Gain1_e0 >>
        14);

      /* Sum: '<S29>/Add' */
      SideOccupy_Fcn_B.Add_o = (int8_T)((SideOccupy_Fcn_B.DataTypeConversion_eb
        + SideOccupy_Fcn_B.DataTypeConversion1) +
        SideOccupy_Fcn_B.DataTypeConversion2);

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn' */
      if (SideOccupy_Fcn_B.Add_o == 1) {
        /* Transition: '<S26>:664' */
        if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0) {
          /* Transition: '<S26>:646' */
          /* In Front Side */
          /* Transition: '<S26>:660' */
          SideOccupy_Fcn_B.RtFrtSd_OccFlg = 1.0;
          SideOccupy_Fcn_B.RtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_RF] =
            SideOccupy_Fcn_DW.k + 1.0;
          SideOccupy_Fcn_DW.Num_RF++;

          /* Right Front Zone have Obj */
          /* Transition: '<S26>:661' */
        } else {
          /* Transition: '<S26>:654' */
          SideOccupy_Fcn_B.RtRrSd_OccFlg = 1.0;
          SideOccupy_Fcn_B.RtRrSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_RR] =
            SideOccupy_Fcn_DW.k + 1.0;
          SideOccupy_Fcn_DW.Num_RR++;

          /* Right Rear Zone have Obj */
        }

        /* Transition: '<S26>:650' */
        /* Transition: '<S26>:903' */
        /* Transition: '<S26>:1233' */
        /* Transition: '<S26>:1227' */
        /* Transition: '<S26>:1228' */
      } else {
        /* Transition: '<S26>:641' */
        if (SideOccupy_Fcn_B.Add_o == 2) {
          /* Transition: '<S26>:896' */
          if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0) {
            /* Transition: '<S26>:898' */
            /* In Front Side */
            /* Transition: '<S26>:900' */
            SideOccupy_Fcn_B.LtFrtSd_OccFlg = 1.0;
            SideOccupy_Fcn_B.LtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_LF]
              = SideOccupy_Fcn_DW.k + 1.0;
            SideOccupy_Fcn_DW.Num_LF++;

            /* Right Front Zone have Obj */
            /* Transition: '<S26>:903' */
            /* Transition: '<S26>:1233' */
            /* Transition: '<S26>:1227' */
            /* Transition: '<S26>:1228' */
          } else {
            /* Transition: '<S26>:902' */
            SideOccupy_Fcn_B.LtRrSd_OccFlg = 1.0;
            SideOccupy_Fcn_B.LtRrSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_LR] =
              SideOccupy_Fcn_DW.k + 1.0;
            SideOccupy_Fcn_DW.Num_LR++;

            /* Right Rear Zone have Obj */
            /* Transition: '<S26>:1233' */
            /* Transition: '<S26>:1227' */
            /* Transition: '<S26>:1228' */
          }
        } else {
          /* Transition: '<S26>:1220' */
          if (SideOccupy_Fcn_B.Add_o == 3) {
            /* Transition: '<S26>:1226' */
            if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0)
            {
              /* Transition: '<S26>:1235' */
              /* In Front Side */
              /* Transition: '<S26>:1231' */
              SideOccupy_Fcn_B.FrtCent_OccFlg = 1.0;
              SideOccupy_Fcn_B.FrtCent_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_F]
                = SideOccupy_Fcn_DW.k + 1.0;
              SideOccupy_Fcn_DW.Num_F++;

              /* Left Rear Zone have Obj */
              /* Transition: '<S26>:1227' */
              /* Transition: '<S26>:1228' */
            } else {
              /* Transition: '<S26>:1234' */
              SideOccupy_Fcn_B.RrCent_OccFlg = 1.0;
              SideOccupy_Fcn_B.RrCent_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_R]
                = SideOccupy_Fcn_DW.k + 1.0;
              SideOccupy_Fcn_DW.Num_R++;

              /* Left Rear Zone have Obj */
              /* Transition: '<S26>:1228' */
            }
          } else {
            /* Transition: '<S26>:1223' */
          }
        }
      }

      /* Transition: '<S26>:1232' */
    } else {
      /* Transition: '<S26>:662' */
    }

    /* Transition: '<S26>:676' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:817' */
  SideOccupy_Fcn_DW.k = 0.0;
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:825' */
    guard1 = false;
    guard2 = false;
    if ((SideOccupy_Fcn_B.NE[1016 + (int32_T)SideOccupy_Fcn_DW.k] != -1.0) &&
        (SideOccupy_Fcn_B.NE[1016 + (int32_T)SideOccupy_Fcn_DW.k] != 0.0)) {
      /* Transition: '<S26>:821' */
      /* Transition: '<S26>:852' */
      guard2 = true;
    } else {
      /* Transition: '<S26>:826' */
      /* Simulink Function 'Fcn_Inner_SelectJdWoLn': '<S26>:837' */
      SideOccupy_Fcn_B.x_n = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.y_l = SideOccupy_Fcn_B.NE[381 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.radius_c = SideOccupy_Fcn_B.Saturation2;
      SideOccupy_Fcn_B.W_j = 1.9;

      /* Constant: '<Root>/Cal_Mov_EgoLnWd' */
      SideOccupy_Fcn_B.EgoLnWd_o = SideOccupy_Fcn_P.Cal_Mov_EgoLnWd_Value;

      /* Constant: '<Root>/Cal_Mov_NextLnWd' */
      SideOccupy_Fcn_B.NextLnWd_p = SideOccupy_Fcn_P.Cal_Mov_NextLnWd_Value;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn' */
      /* Product: '<S43>/Divide' */
      SideOccupy_Fcn_B.Divide_k1 = SideOccupy_Fcn_B.x_n /
        SideOccupy_Fcn_B.radius_c;

      /* Trigonometry: '<S43>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_k1;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction = asin(u0);

      /* End of Trigonometry: '<S43>/Trigonometric Function' */

      /* Gain: '<S43>/Gain1' */
      SideOccupy_Fcn_B.Gain1 = SideOccupy_Fcn_P.Gain1_Gain_d *
        SideOccupy_Fcn_B.TrigonometricFunction;

      /* Trigonometry: '<S43>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1 = tan(SideOccupy_Fcn_B.Gain1);

      /* Product: '<S43>/Divide1' */
      SideOccupy_Fcn_B.Divide1 = SideOccupy_Fcn_B.x_n *
        SideOccupy_Fcn_B.TrigonometricFunction1;

      /* Gain: '<S43>/Gain2' */
      SideOccupy_Fcn_B.Gain2 = SideOccupy_Fcn_P.Gain2_Gain_nx *
        SideOccupy_Fcn_B.EgoLnWd_o;

      /* Sum: '<S43>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1 = (SideOccupy_Fcn_B.y_l +
        SideOccupy_Fcn_B.Divide1) - SideOccupy_Fcn_B.Gain2;

      /* RelationalOperator: '<S45>/Compare' incorporates:
       *  Constant: '<S45>/Constant'
       */
      SideOccupy_Fcn_B.Compare_c = (SideOccupy_Fcn_B.Subtract1 <
        SideOccupy_Fcn_P.Constant_Value_f2);

      /* Product: '<S44>/Divide' */
      SideOccupy_Fcn_B.Divide_a = SideOccupy_Fcn_B.x_n /
        SideOccupy_Fcn_B.radius_c;

      /* Trigonometry: '<S44>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_a;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_h = asin(u0);

      /* End of Trigonometry: '<S44>/Trigonometric Function' */

      /* Gain: '<S44>/Gain1' */
      SideOccupy_Fcn_B.Gain1_f = SideOccupy_Fcn_P.Gain1_Gain_jp *
        SideOccupy_Fcn_B.TrigonometricFunction_h;

      /* Trigonometry: '<S44>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_b = tan(SideOccupy_Fcn_B.Gain1_f);

      /* Product: '<S44>/Divide1' */
      SideOccupy_Fcn_B.Divide1_c = SideOccupy_Fcn_B.x_n *
        SideOccupy_Fcn_B.TrigonometricFunction1_b;

      /* Gain: '<S44>/Gain2' */
      SideOccupy_Fcn_B.Gain2_n = SideOccupy_Fcn_P.Gain2_Gain_k *
        SideOccupy_Fcn_B.EgoLnWd_o;

      /* Sum: '<S44>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_e = ((SideOccupy_Fcn_B.y_l +
        SideOccupy_Fcn_B.Divide1_c) + SideOccupy_Fcn_B.Gain2_n) +
        SideOccupy_Fcn_B.NextLnWd_p;

      /* RelationalOperator: '<S46>/Compare' incorporates:
       *  Constant: '<S46>/Constant'
       */
      SideOccupy_Fcn_B.Compare_d = (SideOccupy_Fcn_B.Subtract1_e >
        SideOccupy_Fcn_P.Constant_Value_a);

      /* Product: '<S28>/Product' */
      SideOccupy_Fcn_B.Product_od = (uint16_T)(SideOccupy_Fcn_B.Compare_d ?
        (int32_T)SideOccupy_Fcn_B.Compare_c : 0);

      /* DataTypeConversion: '<S28>/Data Type Conversion' */
      SideOccupy_Fcn_B.DataTypeConversion_b2 = (int8_T)
        SideOccupy_Fcn_B.Product_od;

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn' */
      if (SideOccupy_Fcn_B.DataTypeConversion_b2 == 1) {
        /* Transition: '<S26>:851' */
        /* Inside Lane */
        guard2 = true;
      } else {
        /* Transition: '<S26>:839' */
        if ((SideOccupy_Fcn_B.NE[635 + (int32_T)SideOccupy_Fcn_DW.k] == 2.0) ||
            (SideOccupy_Fcn_B.NE[635 + (int32_T)SideOccupy_Fcn_DW.k] == 3.0)) {
          /* Transition: '<S26>:820' */
          /* Moving Object */
          guard1 = true;
        } else {
          /* Transition: '<S26>:842' */
        }
      }
    }

    if (guard2) {
      /* Transition: '<S26>:823' */
      guard1 = true;
    }

    if (guard1) {
      /* Transition: '<S26>:846' */
      while (SideOccupy_Fcn_DW.m < 26.0) {
        /* Transition: '<S26>:844' */
        /* Transition: '<S26>:827' */
        SideOccupy_Fcn_B.FusObj_Select[(int32_T)SideOccupy_Fcn_B.Num_Out_Select
          + 127 * (int32_T)SideOccupy_Fcn_DW.m] = SideOccupy_Fcn_B.NE[127 *
          (int32_T)SideOccupy_Fcn_DW.m + (int32_T)SideOccupy_Fcn_DW.k];

        /* Transition: '<S26>:843' */
        SideOccupy_Fcn_DW.m++;
      }

      /* Transition: '<S26>:848' */
      SideOccupy_Fcn_DW.m = 0.0;
      SideOccupy_Fcn_B.Num_Out_Select++;

      /* Transition: '<S26>:841' */
    }

    /* Transition: '<S26>:824' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:849' */
  SideOccupy_Fcn_DW.k = 0.0;
}

/* Function for Chart: '<Root>/Side_Occ_Judge_Module' */
static void SideOccupy_Fcn_Outer_SdOccJudAccordMov(void)
{
  boolean_T guard1;
  boolean_T guard2;
  real_T u0;

  /* Graphical Function 'Outer_SdOccJudAccordMov': '<S26>:373' */
  /* Transition: '<S26>:617' */
  SideOccupy_Fcn_B.RtFrtSd_OccFlg = 0.0;

  /* Right Front Side Occupy Flag */
  SideOccupy_Fcn_B.RtRrSd_OccFlg = 0.0;

  /* Right Rear Side Occupy Flag */
  SideOccupy_Fcn_B.LtRrSd_OccFlg = 0.0;
  SideOccupy_Fcn_B.LtFrtSd_OccFlg = 0.0;
  SideOccupy_Fcn_DW.m = 0.0;
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:624' */
    /* Transition: '<S26>:622' */
    /* Simulink Function 'InterestObjDet_WithoutLane': '<S26>:561' */
    SideOccupy_Fcn_B.x_l = SideOccupy_Fcn_B.NE[127 + (int32_T)
      SideOccupy_Fcn_DW.k];
    SideOccupy_Fcn_B.Radius = SideOccupy_Fcn_B.Saturation2;

    /* Constant: '<Root>/Cal_SdDist_Front' */
    SideOccupy_Fcn_B.Rmax_m = SideOccupy_Fcn_P.Cal_SdDist_Front_Value;

    /* Constant: '<Root>/Cal_SdDist_Rear' */
    SideOccupy_Fcn_B.Rmin_e = SideOccupy_Fcn_P.Cal_SdDist_Rear_Value;

    /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
    SideOccupy_Fcn_Judge_MainInterestObjDet_WithoutLane(SideOccupy_Fcn_B.Radius,
      SideOccupy_Fcn_B.Rmin_e, SideOccupy_Fcn_B.x_l, SideOccupy_Fcn_B.Rmax_m,
      &SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithoutLane,
      (P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *)
      &SideOccupy_Fcn_P.Judge_MainInterestObjDet_WithoutLane);

    /* End of Outputs for SubSystem: '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
    if (SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithoutLane.DataTypeConversion
        == 1) {
      /* Transition: '<S26>:625' */
      /* Transition: '<S26>:633' */
      /* Simulink Function 'Fcn_LtSdOccJdWoLn': '<S26>:608' */
      SideOccupy_Fcn_B.x_o = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.y_g = SideOccupy_Fcn_B.NE[381 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.radius = SideOccupy_Fcn_B.Saturation2;
      SideOccupy_Fcn_B.W_n = 1.9;

      /* Constant: '<Root>/Cal_Mov_EgoLnWd' */
      SideOccupy_Fcn_B.EgoLnWd = SideOccupy_Fcn_P.Cal_Mov_EgoLnWd_Value;

      /* Constant: '<Root>/Cal_Mov_NextLnWd' */
      SideOccupy_Fcn_B.NextLnWd = SideOccupy_Fcn_P.Cal_Mov_NextLnWd_Value;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn' */
      /* Product: '<S87>/Divide' */
      SideOccupy_Fcn_B.Divide_p = SideOccupy_Fcn_B.x_o / SideOccupy_Fcn_B.radius;

      /* Trigonometry: '<S87>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_p;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_hs = asin(u0);

      /* End of Trigonometry: '<S87>/Trigonometric Function' */

      /* Gain: '<S87>/Gain1' */
      SideOccupy_Fcn_B.Gain1_n = SideOccupy_Fcn_P.Gain1_Gain *
        SideOccupy_Fcn_B.TrigonometricFunction_hs;

      /* Trigonometry: '<S87>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_ps = tan(SideOccupy_Fcn_B.Gain1_n);

      /* Product: '<S87>/Divide1' */
      SideOccupy_Fcn_B.Divide1_dv = SideOccupy_Fcn_B.x_o *
        SideOccupy_Fcn_B.TrigonometricFunction1_ps;

      /* Gain: '<S87>/Gain2' */
      SideOccupy_Fcn_B.Gain2_h = SideOccupy_Fcn_P.Gain2_Gain *
        SideOccupy_Fcn_B.W_n;

      /* Sum: '<S87>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_o = (SideOccupy_Fcn_B.y_g +
        SideOccupy_Fcn_B.Divide1_dv) - SideOccupy_Fcn_B.Gain2_h;

      /* RelationalOperator: '<S91>/Compare' incorporates:
       *  Constant: '<S91>/Constant'
       */
      SideOccupy_Fcn_B.Compare_ho = (SideOccupy_Fcn_B.Subtract1_o >
        SideOccupy_Fcn_P.Constant_Value_ey);

      /* Product: '<S85>/Divide' */
      SideOccupy_Fcn_B.Divide_e = SideOccupy_Fcn_B.x_o / SideOccupy_Fcn_B.radius;

      /* Trigonometry: '<S85>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_e;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_m = asin(u0);

      /* End of Trigonometry: '<S85>/Trigonometric Function' */

      /* Gain: '<S85>/Gain1' */
      SideOccupy_Fcn_B.Gain1_m = SideOccupy_Fcn_P.Gain1_Gain_a *
        SideOccupy_Fcn_B.TrigonometricFunction_m;

      /* Trigonometry: '<S85>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_l = tan(SideOccupy_Fcn_B.Gain1_m);

      /* Product: '<S85>/Divide1' */
      SideOccupy_Fcn_B.Divide1_k = SideOccupy_Fcn_B.x_o *
        SideOccupy_Fcn_B.TrigonometricFunction1_l;

      /* Gain: '<S85>/Gain2' */
      SideOccupy_Fcn_B.Gain2_n1 = SideOccupy_Fcn_P.Gain2_Gain_d *
        SideOccupy_Fcn_B.EgoLnWd;

      /* Sum: '<S85>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_j = ((SideOccupy_Fcn_B.y_g +
        SideOccupy_Fcn_B.Divide1_k) - SideOccupy_Fcn_B.Gain2_n1) -
        SideOccupy_Fcn_B.NextLnWd;

      /* RelationalOperator: '<S89>/Compare' incorporates:
       *  Constant: '<S89>/Constant'
       */
      SideOccupy_Fcn_B.Compare_cq = (SideOccupy_Fcn_B.Subtract1_j <
        SideOccupy_Fcn_P.Constant_Value_eo);

      /* Product: '<S36>/Product' */
      SideOccupy_Fcn_B.Product_mx = (uint16_T)(SideOccupy_Fcn_B.Compare_ho ?
        (int32_T)SideOccupy_Fcn_B.Compare_cq : 0);

      /* DataTypeConversion: '<S36>/Data Type Conversion' */
      SideOccupy_Fcn_B.DataTypeConversion_al = (int8_T)
        SideOccupy_Fcn_B.Product_mx;

      /* Product: '<S88>/Divide' */
      SideOccupy_Fcn_B.Divide_bs = SideOccupy_Fcn_B.x_o /
        SideOccupy_Fcn_B.radius;

      /* Trigonometry: '<S88>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_bs;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_me = asin(u0);

      /* End of Trigonometry: '<S88>/Trigonometric Function' */

      /* Gain: '<S88>/Gain1' */
      SideOccupy_Fcn_B.Gain1_h = SideOccupy_Fcn_P.Gain1_Gain_g *
        SideOccupy_Fcn_B.TrigonometricFunction_me;

      /* Trigonometry: '<S88>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_f = tan(SideOccupy_Fcn_B.Gain1_h);

      /* Product: '<S88>/Divide1' */
      SideOccupy_Fcn_B.Divide1_b = SideOccupy_Fcn_B.x_o *
        SideOccupy_Fcn_B.TrigonometricFunction1_f;

      /* Gain: '<S88>/Gain2' */
      SideOccupy_Fcn_B.Gain2_mh = SideOccupy_Fcn_P.Gain2_Gain_a *
        SideOccupy_Fcn_B.W_n;

      /* Sum: '<S88>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_h = (SideOccupy_Fcn_B.y_g +
        SideOccupy_Fcn_B.Divide1_b) + SideOccupy_Fcn_B.Gain2_mh;

      /* RelationalOperator: '<S92>/Compare' incorporates:
       *  Constant: '<S92>/Constant'
       */
      SideOccupy_Fcn_B.Compare_b = (SideOccupy_Fcn_B.Subtract1_h <
        SideOccupy_Fcn_P.Constant_Value_nc);

      /* Product: '<S86>/Divide' */
      SideOccupy_Fcn_B.Divide_m = SideOccupy_Fcn_B.x_o / SideOccupy_Fcn_B.radius;

      /* Trigonometry: '<S86>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_m;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_a = asin(u0);

      /* End of Trigonometry: '<S86>/Trigonometric Function' */

      /* Gain: '<S86>/Gain1' */
      SideOccupy_Fcn_B.Gain1_g = SideOccupy_Fcn_P.Gain1_Gain_l *
        SideOccupy_Fcn_B.TrigonometricFunction_a;

      /* Trigonometry: '<S86>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_lx = tan(SideOccupy_Fcn_B.Gain1_g);

      /* Product: '<S86>/Divide1' */
      SideOccupy_Fcn_B.Divide1_p = SideOccupy_Fcn_B.x_o *
        SideOccupy_Fcn_B.TrigonometricFunction1_lx;

      /* Gain: '<S86>/Gain2' */
      SideOccupy_Fcn_B.Gain2_bt = SideOccupy_Fcn_P.Gain2_Gain_n *
        SideOccupy_Fcn_B.EgoLnWd;

      /* Sum: '<S86>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_o3 = (SideOccupy_Fcn_B.y_g +
        SideOccupy_Fcn_B.Divide1_p) + SideOccupy_Fcn_B.Gain2_bt;

      /* RelationalOperator: '<S90>/Compare' incorporates:
       *  Constant: '<S90>/Constant'
       */
      SideOccupy_Fcn_B.Compare_l = (SideOccupy_Fcn_B.Subtract1_o3 >
        SideOccupy_Fcn_P.Constant_Value_hw);

      /* Product: '<S36>/Product1' */
      SideOccupy_Fcn_B.Product1_m = (uint16_T)(SideOccupy_Fcn_B.Compare_b ?
        (int32_T)SideOccupy_Fcn_B.Compare_l : 0);

      /* Gain: '<S36>/Gain' */
      SideOccupy_Fcn_B.Gain_f = (uint32_T)SideOccupy_Fcn_P.Gain_Gain_kk *
        SideOccupy_Fcn_B.Product1_m;

      /* DataTypeConversion: '<S36>/Data Type Conversion1' */
      SideOccupy_Fcn_B.DataTypeConversion1_n = (int8_T)(SideOccupy_Fcn_B.Gain_f >>
        14);

      /* Logic: '<S36>/Logical Operator' */
      SideOccupy_Fcn_B.LogicalOperator_m = !SideOccupy_Fcn_B.Compare_ho;

      /* Logic: '<S36>/Logical Operator1' */
      SideOccupy_Fcn_B.LogicalOperator1_b = !SideOccupy_Fcn_B.Compare_b;

      /* Product: '<S36>/Product2' */
      SideOccupy_Fcn_B.Product2_iz = (uint16_T)
        (SideOccupy_Fcn_B.LogicalOperator_m ? (int32_T)
         SideOccupy_Fcn_B.LogicalOperator1_b : 0);

      /* Gain: '<S36>/Gain1' */
      SideOccupy_Fcn_B.Gain1_m1 = (uint32_T)SideOccupy_Fcn_P.Gain1_Gain_e *
        SideOccupy_Fcn_B.Product2_iz;

      /* DataTypeConversion: '<S36>/Data Type Conversion2' */
      SideOccupy_Fcn_B.DataTypeConversion2_e = (int8_T)
        (SideOccupy_Fcn_B.Gain1_m1 >> 14);

      /* Sum: '<S36>/Add' */
      SideOccupy_Fcn_B.Add_m = (int8_T)((SideOccupy_Fcn_B.DataTypeConversion_al
        + SideOccupy_Fcn_B.DataTypeConversion1_n) +
        SideOccupy_Fcn_B.DataTypeConversion2_e);

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn' */
      if (SideOccupy_Fcn_B.Add_m == 1) {
        /* Transition: '<S26>:630' */
        if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0) {
          /* Transition: '<S26>:636' */
          /* In Front Side */
          /* Transition: '<S26>:613' */
          SideOccupy_Fcn_B.LtFrtSd_OccFlg = 1.0;
          SideOccupy_Fcn_B.LtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_LF] =
            SideOccupy_Fcn_DW.k + 1.0;
          SideOccupy_Fcn_DW.Num_LF++;

          /* Left Front Zone have Obj */
          /* Transition: '<S26>:638' */
        } else {
          /* Transition: '<S26>:631' */
          SideOccupy_Fcn_B.LtRrSd_OccFlg = 1.0;
          SideOccupy_Fcn_B.LtRrSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_LR] =
            SideOccupy_Fcn_DW.k + 1.0;
          SideOccupy_Fcn_DW.Num_LR++;

          /* Left Rear Zone have Obj */
        }

        /* Transition: '<S26>:637' */
        /* Transition: '<S26>:891' */
        /* Transition: '<S26>:1217' */
        /* Transition: '<S26>:1209' */
        /* Transition: '<S26>:1212' */
      } else {
        /* Transition: '<S26>:611' */
        if (SideOccupy_Fcn_B.Add_m == 2) {
          /* Transition: '<S26>:883' */
          if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0) {
            /* Transition: '<S26>:888' */
            /* In Front Side */
            /* Transition: '<S26>:885' */
            SideOccupy_Fcn_B.RtFrtSd_OccFlg = 1.0;
            SideOccupy_Fcn_B.RtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_RF]
              = SideOccupy_Fcn_DW.k + 1.0;
            SideOccupy_Fcn_DW.Num_RF++;

            /* Left Front Zone have Obj */
            /* Transition: '<S26>:891' */
            /* Transition: '<S26>:1217' */
            /* Transition: '<S26>:1209' */
            /* Transition: '<S26>:1212' */
          } else {
            /* Transition: '<S26>:890' */
            SideOccupy_Fcn_B.RtRrSd_OccFlg = 1.0;
            SideOccupy_Fcn_B.RtRrSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_RR] =
              SideOccupy_Fcn_DW.k + 1.0;
            SideOccupy_Fcn_DW.Num_RR++;

            /* Left Rear Zone have Obj */
            /* Transition: '<S26>:1217' */
            /* Transition: '<S26>:1209' */
            /* Transition: '<S26>:1212' */
          }
        } else {
          /* Transition: '<S26>:1219' */
          if (SideOccupy_Fcn_B.Add_m == 3) {
            /* Transition: '<S26>:1214' */
            if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0)
            {
              /* Transition: '<S26>:1213' */
              /* In Front Side */
              /* Transition: '<S26>:1204' */
              SideOccupy_Fcn_B.FrtCent_OccFlg = 1.0;
              SideOccupy_Fcn_B.FrtCent_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_F]
                = SideOccupy_Fcn_DW.k + 1.0;
              SideOccupy_Fcn_DW.Num_F++;

              /* Left Rear Zone have Obj */
              /* Transition: '<S26>:1209' */
              /* Transition: '<S26>:1212' */
            } else {
              /* Transition: '<S26>:1211' */
              SideOccupy_Fcn_B.RrCent_OccFlg = 1.0;
              SideOccupy_Fcn_B.RrCent_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_R]
                = SideOccupy_Fcn_DW.k + 1.0;
              SideOccupy_Fcn_DW.Num_R++;

              /* Left Rear Zone have Obj */
              /* Transition: '<S26>:1212' */
            }
          } else {
            /* Transition: '<S26>:1205' */
          }
        }
      }

      /* Transition: '<S26>:1210' */
    } else {
      /* Transition: '<S26>:626' */
    }

    /* Transition: '<S26>:632' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:767' */
  SideOccupy_Fcn_DW.k = 0.0;
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:781' */
    guard1 = false;
    guard2 = false;
    if ((SideOccupy_Fcn_B.NE[1016 + (int32_T)SideOccupy_Fcn_DW.k] != -1.0) &&
        (SideOccupy_Fcn_B.NE[1016 + (int32_T)SideOccupy_Fcn_DW.k] != 0.0)) {
      /* Transition: '<S26>:782' */
      /* Transition: '<S26>:792' */
      guard2 = true;
    } else {
      /* Transition: '<S26>:789' */
      /* Simulink Function 'Fcn_Outer_SelectJdWoLn': '<S26>:815' */
      SideOccupy_Fcn_B.x_ju = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.y_j = SideOccupy_Fcn_B.NE[381 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.radius_n = SideOccupy_Fcn_B.Saturation2;
      SideOccupy_Fcn_B.W_p = 1.9;

      /* Constant: '<Root>/Cal_Mov_EgoLnWd' */
      SideOccupy_Fcn_B.EgoLnWd_b = SideOccupy_Fcn_P.Cal_Mov_EgoLnWd_Value;

      /* Constant: '<Root>/Cal_Mov_NextLnWd' */
      SideOccupy_Fcn_B.NextLnWd_f = SideOccupy_Fcn_P.Cal_Mov_NextLnWd_Value;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn' */
      /* Product: '<S94>/Divide' */
      SideOccupy_Fcn_B.Divide_n = SideOccupy_Fcn_B.x_ju /
        SideOccupy_Fcn_B.radius_n;

      /* Trigonometry: '<S94>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_n;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_ig = asin(u0);

      /* End of Trigonometry: '<S94>/Trigonometric Function' */

      /* Gain: '<S94>/Gain1' */
      SideOccupy_Fcn_B.Gain1_pd = SideOccupy_Fcn_P.Gain1_Gain_f *
        SideOccupy_Fcn_B.TrigonometricFunction_ig;

      /* Trigonometry: '<S94>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_k = tan(SideOccupy_Fcn_B.Gain1_pd);

      /* Product: '<S94>/Divide1' */
      SideOccupy_Fcn_B.Divide1_d = SideOccupy_Fcn_B.x_ju *
        SideOccupy_Fcn_B.TrigonometricFunction1_k;

      /* Gain: '<S94>/Gain2' */
      SideOccupy_Fcn_B.Gain2_d = SideOccupy_Fcn_P.Gain2_Gain_b *
        SideOccupy_Fcn_B.EgoLnWd_b;

      /* Sum: '<S94>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_c = ((SideOccupy_Fcn_B.y_j +
        SideOccupy_Fcn_B.Divide1_d) - SideOccupy_Fcn_B.Gain2_d) -
        SideOccupy_Fcn_B.NextLnWd_f;

      /* RelationalOperator: '<S96>/Compare' incorporates:
       *  Constant: '<S96>/Constant'
       */
      SideOccupy_Fcn_B.Compare_dk = (SideOccupy_Fcn_B.Subtract1_c <
        SideOccupy_Fcn_P.Constant_Value_j);

      /* Product: '<S95>/Divide' */
      SideOccupy_Fcn_B.Divide_l = SideOccupy_Fcn_B.x_ju /
        SideOccupy_Fcn_B.radius_n;

      /* Trigonometry: '<S95>/Trigonometric Function' */
      u0 = SideOccupy_Fcn_B.Divide_l;
      if (u0 > 1.0) {
        u0 = 1.0;
      } else {
        if (u0 < -1.0) {
          u0 = -1.0;
        }
      }

      SideOccupy_Fcn_B.TrigonometricFunction_hh = asin(u0);

      /* End of Trigonometry: '<S95>/Trigonometric Function' */

      /* Gain: '<S95>/Gain1' */
      SideOccupy_Fcn_B.Gain1_j = SideOccupy_Fcn_P.Gain1_Gain_l1 *
        SideOccupy_Fcn_B.TrigonometricFunction_hh;

      /* Trigonometry: '<S95>/Trigonometric Function1' */
      SideOccupy_Fcn_B.TrigonometricFunction1_p = tan(SideOccupy_Fcn_B.Gain1_j);

      /* Product: '<S95>/Divide1' */
      SideOccupy_Fcn_B.Divide1_i = SideOccupy_Fcn_B.x_ju *
        SideOccupy_Fcn_B.TrigonometricFunction1_p;

      /* Gain: '<S95>/Gain2' */
      SideOccupy_Fcn_B.Gain2_j = SideOccupy_Fcn_P.Gain2_Gain_l *
        SideOccupy_Fcn_B.EgoLnWd_b;

      /* Sum: '<S95>/Subtract1' */
      SideOccupy_Fcn_B.Subtract1_ac = (SideOccupy_Fcn_B.y_j +
        SideOccupy_Fcn_B.Divide1_i) + SideOccupy_Fcn_B.Gain2_j;

      /* RelationalOperator: '<S97>/Compare' incorporates:
       *  Constant: '<S97>/Constant'
       */
      SideOccupy_Fcn_B.Compare_nt = (SideOccupy_Fcn_B.Subtract1_ac >
        SideOccupy_Fcn_P.Constant_Value_na);

      /* Product: '<S37>/Product' */
      SideOccupy_Fcn_B.Product_p = (uint16_T)(SideOccupy_Fcn_B.Compare_nt ?
        (int32_T)SideOccupy_Fcn_B.Compare_dk : 0);

      /* DataTypeConversion: '<S37>/Data Type Conversion' */
      SideOccupy_Fcn_B.DataTypeConversion_i = (int8_T)SideOccupy_Fcn_B.Product_p;

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn' */
      if (SideOccupy_Fcn_B.DataTypeConversion_i == 1) {
        /* Transition: '<S26>:791' */
        /* Inside Lane */
        guard2 = true;
      } else {
        /* Transition: '<S26>:795' */
        if ((SideOccupy_Fcn_B.NE[635 + (int32_T)SideOccupy_Fcn_DW.k] == 2.0) ||
            (SideOccupy_Fcn_B.NE[635 + (int32_T)SideOccupy_Fcn_DW.k] == 3.0)) {
          /* Transition: '<S26>:785' */
          /* Moving Object */
          guard1 = true;
        } else {
          /* Transition: '<S26>:798' */
        }
      }
    }

    if (guard2) {
      /* Transition: '<S26>:784' */
      guard1 = true;
    }

    if (guard1) {
      /* Transition: '<S26>:802' */
      while (SideOccupy_Fcn_DW.m < 26.0) {
        /* Transition: '<S26>:800' */
        /* Transition: '<S26>:788' */
        SideOccupy_Fcn_B.FusObj_Select[(int32_T)SideOccupy_Fcn_B.Num_Out_Select
          + 127 * (int32_T)SideOccupy_Fcn_DW.m] = SideOccupy_Fcn_B.NE[127 *
          (int32_T)SideOccupy_Fcn_DW.m + (int32_T)SideOccupy_Fcn_DW.k];

        /* Transition: '<S26>:799' */
        SideOccupy_Fcn_DW.m++;
      }

      /* Transition: '<S26>:804' */
      SideOccupy_Fcn_DW.m = 0.0;
      SideOccupy_Fcn_B.Num_Out_Select++;

      /* Transition: '<S26>:797' */
    }

    /* Transition: '<S26>:783' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:805' */
  SideOccupy_Fcn_DW.k = 0.0;
}

/* Function for Chart: '<Root>/Side_Occ_Judge_Module' */
static void SideOccupy_Fcn_Inner_SdOccJudAccordRtLane(void)
{
  boolean_T guard1;
  boolean_T guard2;

  /* Graphical Function 'Inner_SdOccJudAccordRtLane': '<S26>:387' */
  /* Transition: '<S26>:533' */
  SideOccupy_Fcn_B.LtFrtSd_OccFlg = 0.0;

  /* Left Front Side Occupy Flag */
  SideOccupy_Fcn_B.LtRrSd_OccFlg = 0.0;

  /* Left Rear Side Occupy Flag */
  SideOccupy_Fcn_B.RtRrSd_OccFlg = 0.0;
  SideOccupy_Fcn_B.RtFrtSd_OccFlg = 0.0;
  SideOccupy_Fcn_DW.m = 0.0;
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:540' */
    /* Transition: '<S26>:538' */
    /* Simulink Function 'InterestObjDet_WithLane': '<S26>:489' */
    SideOccupy_Fcn_B.x = SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k];
    SideOccupy_Fcn_B.angle = SideOccupy_Fcn_B.NE_ac;

    /* Constant: '<Root>/Cal_SdDist_Front' */
    SideOccupy_Fcn_B.Rmax = SideOccupy_Fcn_P.Cal_SdDist_Front_Value;

    /* Constant: '<Root>/Cal_SdDist_Rear' */
    SideOccupy_Fcn_B.Rmin = SideOccupy_Fcn_P.Cal_SdDist_Rear_Value;

    /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.InterestObjDet_WithLane' */
    SideOccupy_Fcn_Judge_MainInterestObjDet_WithLane(SideOccupy_Fcn_B.Rmin,
      SideOccupy_Fcn_B.angle, SideOccupy_Fcn_B.x, SideOccupy_Fcn_B.Rmax,
      &SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithLane,
      (P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *)
      &SideOccupy_Fcn_P.Judge_MainInterestObjDet_WithLane);

    /* End of Outputs for SubSystem: '<S26>/Judge_Main.InterestObjDet_WithLane' */
    if (SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithLane.DataTypeConversion ==
        1) {
      /* Transition: '<S26>:541' */
      /* Transition: '<S26>:549' */
      /* Simulink Function 'Fcn_RtSdOccJdWtLn': '<S26>:525' */
      SideOccupy_Fcn_B.x_j = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.y_m = SideOccupy_Fcn_B.NE[381 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.c0_o = SideOccupy_Fcn_B.NE_h;
      SideOccupy_Fcn_B.c1_c = SideOccupy_Fcn_B.NE_ac;
      SideOccupy_Fcn_B.c2_a = SideOccupy_Fcn_B.NE_n;
      SideOccupy_Fcn_B.c3_g = SideOccupy_Fcn_B.NE_kq;
      SideOccupy_Fcn_B.W_f = 1.8;

      /* Constant: '<Root>/Cal_In_RtLnWd' */
      SideOccupy_Fcn_B.RtLnWd_n = SideOccupy_Fcn_P.Cal_In_RtLnWd_Value;

      /* Constant: '<Root>/Cal_In_LtLnWd' */
      SideOccupy_Fcn_B.LtLnWd_o = SideOccupy_Fcn_P.Cal_In_LtLnWd_Value;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn' */
      /* Product: '<S60>/Product' */
      SideOccupy_Fcn_B.Product = SideOccupy_Fcn_B.c1_c * SideOccupy_Fcn_B.x_j;

      /* Product: '<S60>/Product1' */
      SideOccupy_Fcn_B.Product1 = SideOccupy_Fcn_B.c2_a * SideOccupy_Fcn_B.x_j *
        SideOccupy_Fcn_B.x_j;

      /* Product: '<S60>/Product2' */
      SideOccupy_Fcn_B.Product2 = SideOccupy_Fcn_B.c3_g * SideOccupy_Fcn_B.x_j *
        SideOccupy_Fcn_B.x_j * SideOccupy_Fcn_B.x_j;

      /* Gain: '<S60>/Gain' */
      SideOccupy_Fcn_B.Gain = SideOccupy_Fcn_P.Gain_Gain_k4 *
        SideOccupy_Fcn_B.W_f;

      /* Sum: '<S60>/Subtract' */
      SideOccupy_Fcn_B.Subtract = (((SideOccupy_Fcn_B.y_m +
        SideOccupy_Fcn_B.Product) + SideOccupy_Fcn_B.Product1) +
        SideOccupy_Fcn_B.Product2) + SideOccupy_Fcn_B.Gain;

      /* RelationalOperator: '<S64>/Compare' incorporates:
       *  Constant: '<S64>/Constant'
       */
      SideOccupy_Fcn_B.Compare_m = (SideOccupy_Fcn_B.Subtract <
        SideOccupy_Fcn_P.Constant_Value_c);

      /* Product: '<S57>/Product' */
      SideOccupy_Fcn_B.Product_n = SideOccupy_Fcn_B.c1_c * SideOccupy_Fcn_B.x_j;

      /* Product: '<S57>/Product1' */
      SideOccupy_Fcn_B.Product1_p = SideOccupy_Fcn_B.c2_a * SideOccupy_Fcn_B.x_j
        * SideOccupy_Fcn_B.x_j;

      /* Product: '<S57>/Product2' */
      SideOccupy_Fcn_B.Product2_d = SideOccupy_Fcn_B.c3_g * SideOccupy_Fcn_B.x_j
        * SideOccupy_Fcn_B.x_j * SideOccupy_Fcn_B.x_j;

      /* Sum: '<S57>/Subtract' */
      SideOccupy_Fcn_B.Subtract_e = ((((SideOccupy_Fcn_B.y_m +
        SideOccupy_Fcn_B.Product_n) + SideOccupy_Fcn_B.Product1_p) +
        SideOccupy_Fcn_B.Product2_d) + SideOccupy_Fcn_B.c0_o) +
        SideOccupy_Fcn_B.RtLnWd_n;

      /* RelationalOperator: '<S61>/Compare' incorporates:
       *  Constant: '<S61>/Constant'
       */
      SideOccupy_Fcn_B.Compare_i = (SideOccupy_Fcn_B.Subtract_e >
        SideOccupy_Fcn_P.Constant_Value_o);

      /* Product: '<S30>/Product' */
      SideOccupy_Fcn_B.Product_c = (uint16_T)(SideOccupy_Fcn_B.Compare_m ?
        (int32_T)SideOccupy_Fcn_B.Compare_i : 0);

      /* DataTypeConversion: '<S30>/Data Type Conversion' */
      SideOccupy_Fcn_B.DataTypeConversion_c = (int8_T)SideOccupy_Fcn_B.Product_c;

      /* Product: '<S59>/Product' */
      SideOccupy_Fcn_B.Product_d = SideOccupy_Fcn_B.c1_c * SideOccupy_Fcn_B.x_j;

      /* Product: '<S59>/Product1' */
      SideOccupy_Fcn_B.Product1_d = SideOccupy_Fcn_B.c2_a * SideOccupy_Fcn_B.x_j
        * SideOccupy_Fcn_B.x_j;

      /* Product: '<S59>/Product2' */
      SideOccupy_Fcn_B.Product2_p = SideOccupy_Fcn_B.c3_g * SideOccupy_Fcn_B.x_j
        * SideOccupy_Fcn_B.x_j * SideOccupy_Fcn_B.x_j;

      /* Gain: '<S59>/Gain' */
      SideOccupy_Fcn_B.Gain_i = SideOccupy_Fcn_P.Gain_Gain_dh *
        SideOccupy_Fcn_B.W_f;

      /* Sum: '<S59>/Subtract' */
      SideOccupy_Fcn_B.Subtract_n = (((SideOccupy_Fcn_B.y_m +
        SideOccupy_Fcn_B.Product_d) + SideOccupy_Fcn_B.Product1_d) +
        SideOccupy_Fcn_B.Product2_p) - SideOccupy_Fcn_B.Gain_i;

      /* RelationalOperator: '<S63>/Compare' incorporates:
       *  Constant: '<S63>/Constant'
       */
      SideOccupy_Fcn_B.Compare_ns = (SideOccupy_Fcn_B.Subtract_n >
        SideOccupy_Fcn_P.Constant_Value_m1);

      /* Product: '<S58>/Product' */
      SideOccupy_Fcn_B.Product_b = SideOccupy_Fcn_B.c1_c * SideOccupy_Fcn_B.x_j;

      /* Product: '<S58>/Product1' */
      SideOccupy_Fcn_B.Product1_l = SideOccupy_Fcn_B.c2_a * SideOccupy_Fcn_B.x_j
        * SideOccupy_Fcn_B.x_j;

      /* Product: '<S58>/Product2' */
      SideOccupy_Fcn_B.Product2_e = SideOccupy_Fcn_B.c3_g * SideOccupy_Fcn_B.x_j
        * SideOccupy_Fcn_B.x_j * SideOccupy_Fcn_B.x_j;

      /* Sum: '<S58>/Subtract' */
      SideOccupy_Fcn_B.Subtract_c = ((((SideOccupy_Fcn_B.y_m +
        SideOccupy_Fcn_B.Product_b) + SideOccupy_Fcn_B.Product1_l) +
        SideOccupy_Fcn_B.Product2_e) + SideOccupy_Fcn_B.c0_o) -
        SideOccupy_Fcn_B.LtLnWd_o;

      /* RelationalOperator: '<S62>/Compare' incorporates:
       *  Constant: '<S62>/Constant'
       */
      SideOccupy_Fcn_B.Compare_cw = (SideOccupy_Fcn_B.Subtract_c <
        SideOccupy_Fcn_P.Constant_Value_k);

      /* Product: '<S30>/Product1' */
      SideOccupy_Fcn_B.Product1_f = (uint16_T)(SideOccupy_Fcn_B.Compare_ns ?
        (int32_T)SideOccupy_Fcn_B.Compare_cw : 0);

      /* Gain: '<S30>/Gain' */
      SideOccupy_Fcn_B.Gain_jv = (uint32_T)SideOccupy_Fcn_P.Gain_Gain_mp *
        SideOccupy_Fcn_B.Product1_f;

      /* DataTypeConversion: '<S30>/Data Type Conversion1' */
      SideOccupy_Fcn_B.DataTypeConversion1_o = (int8_T)(SideOccupy_Fcn_B.Gain_jv
        >> 14);

      /* Logic: '<S30>/Logical Operator' */
      SideOccupy_Fcn_B.LogicalOperator_p = !SideOccupy_Fcn_B.Compare_m;

      /* Logic: '<S30>/Logical Operator1' */
      SideOccupy_Fcn_B.LogicalOperator1_i = !SideOccupy_Fcn_B.Compare_ns;

      /* Product: '<S30>/Product2' */
      SideOccupy_Fcn_B.Product2_b = (uint16_T)
        (SideOccupy_Fcn_B.LogicalOperator_p ? (int32_T)
         SideOccupy_Fcn_B.LogicalOperator1_i : 0);

      /* Gain: '<S30>/Gain1' */
      SideOccupy_Fcn_B.Gain1_g5 = (uint32_T)SideOccupy_Fcn_P.Gain1_Gain_gz *
        SideOccupy_Fcn_B.Product2_b;

      /* DataTypeConversion: '<S30>/Data Type Conversion2' */
      SideOccupy_Fcn_B.DataTypeConversion2_ef = (int8_T)
        (SideOccupy_Fcn_B.Gain1_g5 >> 14);

      /* Sum: '<S30>/Add' */
      SideOccupy_Fcn_B.Add_oh = (int8_T)((SideOccupy_Fcn_B.DataTypeConversion_c
        + SideOccupy_Fcn_B.DataTypeConversion1_o) +
        SideOccupy_Fcn_B.DataTypeConversion2_ef);

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn' */
      if (SideOccupy_Fcn_B.Add_oh == 1) {
        /* Transition: '<S26>:546' */
        if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0) {
          /* Transition: '<S26>:552' */
          /* In Front Side */
          /* Transition: '<S26>:530' */
          SideOccupy_Fcn_B.RtFrtSd_OccFlg = 1.0;
          SideOccupy_Fcn_B.RtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_RF] =
            SideOccupy_Fcn_DW.k + 1.0;
          SideOccupy_Fcn_DW.Num_RF++;

          /* Right Front Zone have Obj */
          /* Transition: '<S26>:554' */
        } else {
          /* Transition: '<S26>:547' */
          SideOccupy_Fcn_B.RtRrSd_OccFlg = 1.0;
          SideOccupy_Fcn_B.RtRrSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_RR] =
            SideOccupy_Fcn_DW.k + 1.0;
          SideOccupy_Fcn_DW.Num_RR++;

          /* Right Rear Zone have Obj */
        }

        /* Transition: '<S26>:553' */
        /* Transition: '<S26>:878' */
        /* Transition: '<S26>:1193' */
        /* Transition: '<S26>:1198' */
        /* Transition: '<S26>:1188' */
      } else {
        /* Transition: '<S26>:528' */
        if (SideOccupy_Fcn_B.Add_oh == 2) {
          /* Transition: '<S26>:871' */
          if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0) {
            /* Transition: '<S26>:873' */
            /* In Front Side */
            /* Transition: '<S26>:875' */
            SideOccupy_Fcn_B.LtFrtSd_OccFlg = 1.0;
            SideOccupy_Fcn_B.LtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_LF]
              = SideOccupy_Fcn_DW.k + 1.0;
            SideOccupy_Fcn_DW.Num_LF++;

            /* Left Front Zone have Obj */
            /* Transition: '<S26>:878' */
            /* Transition: '<S26>:1193' */
            /* Transition: '<S26>:1198' */
            /* Transition: '<S26>:1188' */
          } else {
            /* Transition: '<S26>:877' */
            SideOccupy_Fcn_B.LtRrSd_OccFlg = 1.0;
            SideOccupy_Fcn_B.LtRrSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_LR] =
              SideOccupy_Fcn_DW.k + 1.0;
            SideOccupy_Fcn_DW.Num_LR++;

            /* Left Rear Zone have Obj */
            /* Transition: '<S26>:1193' */
            /* Transition: '<S26>:1198' */
            /* Transition: '<S26>:1188' */
          }
        } else {
          /* Transition: '<S26>:1203' */
          if (SideOccupy_Fcn_B.Add_oh == 3) {
            /* Transition: '<S26>:1190' */
            if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0)
            {
              /* Transition: '<S26>:1195' */
              /* In Front Side */
              /* Transition: '<S26>:1200' */
              SideOccupy_Fcn_B.FrtCent_OccFlg = 1.0;
              SideOccupy_Fcn_B.FrtCent_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_F]
                = SideOccupy_Fcn_DW.k + 1.0;
              SideOccupy_Fcn_DW.Num_F++;

              /* Left Rear Zone have Obj */
              /* Transition: '<S26>:1198' */
              /* Transition: '<S26>:1188' */
            } else {
              /* Transition: '<S26>:1196' */
              SideOccupy_Fcn_B.RrCent_OccFlg = 1.0;
              SideOccupy_Fcn_B.RrCent_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_R]
                = SideOccupy_Fcn_DW.k + 1.0;
              SideOccupy_Fcn_DW.Num_R++;

              /* Left Rear Zone have Obj */
              /* Transition: '<S26>:1188' */
            }
          } else {
            /* Transition: '<S26>:1199' */
          }
        }
      }

      /* Transition: '<S26>:1192' */
    } else {
      /* Transition: '<S26>:542' */
    }

    /* Transition: '<S26>:548' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:726' */
  SideOccupy_Fcn_DW.k = 0.0;
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:740' */
    guard1 = false;
    guard2 = false;
    if ((SideOccupy_Fcn_B.NE[1016 + (int32_T)SideOccupy_Fcn_DW.k] != -1.0) &&
        (SideOccupy_Fcn_B.NE[1016 + (int32_T)SideOccupy_Fcn_DW.k] != 0.0)) {
      /* Transition: '<S26>:741' */
      /* Transition: '<S26>:751' */
      guard2 = true;
    } else {
      /* Transition: '<S26>:748' */
      /* Simulink Function 'Fcn_SelectJdWtRtLn': '<S26>:737' */
      SideOccupy_Fcn_B.x_g = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.y_k = SideOccupy_Fcn_B.NE[381 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.c0_a = SideOccupy_Fcn_B.NE_h;
      SideOccupy_Fcn_B.c1_o = SideOccupy_Fcn_B.NE_ac;
      SideOccupy_Fcn_B.c2_g = SideOccupy_Fcn_B.NE_n;
      SideOccupy_Fcn_B.c3_cb = SideOccupy_Fcn_B.NE_kq;

      /* Constant: '<Root>/Cal_In_LtLnWd' */
      SideOccupy_Fcn_B.LtLnWd_p = SideOccupy_Fcn_P.Cal_In_LtLnWd_Value;

      /* Constant: '<Root>/Cal_In_RtLnWd' */
      SideOccupy_Fcn_B.RtLnWd_m = SideOccupy_Fcn_P.Cal_In_RtLnWd_Value;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn' */
      SideOccupy_Fcn_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn
        (SideOccupy_Fcn_B.c1_o, SideOccupy_Fcn_B.x_g, SideOccupy_Fcn_B.c2_g,
         SideOccupy_Fcn_B.c3_cb, SideOccupy_Fcn_B.y_k, SideOccupy_Fcn_B.c0_a,
         SideOccupy_Fcn_B.LtLnWd_p, SideOccupy_Fcn_B.RtLnWd_m,
         &SideOccupy_Fcn_B.Judge_MainInner_SdOccJudAccordRtLaneFcn_SelectJdWtRtLn,
         (P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
          *)
         &SideOccupy_Fcn_P.Judge_MainInner_SdOccJudAccordRtLaneFcn_SelectJdWtRtLn);

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn' */
      if (SideOccupy_Fcn_B.Judge_MainInner_SdOccJudAccordRtLaneFcn_SelectJdWtRtLn.DataTypeConversion
          == 1) {
        /* Transition: '<S26>:750' */
        /* Inside Lane */
        guard2 = true;
      } else {
        /* Transition: '<S26>:754' */
        if ((SideOccupy_Fcn_B.NE[635 + (int32_T)SideOccupy_Fcn_DW.k] == 2.0) ||
            (SideOccupy_Fcn_B.NE[635 + (int32_T)SideOccupy_Fcn_DW.k] == 3.0)) {
          /* Transition: '<S26>:744' */
          /* Moving Object */
          guard1 = true;
        } else {
          /* Transition: '<S26>:757' */
        }
      }
    }

    if (guard2) {
      /* Transition: '<S26>:743' */
      guard1 = true;
    }

    if (guard1) {
      /* Transition: '<S26>:761' */
      while (SideOccupy_Fcn_DW.m < 26.0) {
        /* Transition: '<S26>:759' */
        /* Transition: '<S26>:747' */
        SideOccupy_Fcn_B.FusObj_Select[(int32_T)SideOccupy_Fcn_B.Num_Out_Select
          + 127 * (int32_T)SideOccupy_Fcn_DW.m] = SideOccupy_Fcn_B.NE[127 *
          (int32_T)SideOccupy_Fcn_DW.m + (int32_T)SideOccupy_Fcn_DW.k];

        /* Transition: '<S26>:758' */
        SideOccupy_Fcn_DW.m++;
      }

      /* Transition: '<S26>:763' */
      SideOccupy_Fcn_DW.m = 0.0;
      SideOccupy_Fcn_B.Num_Out_Select++;

      /* Transition: '<S26>:756' */
    }

    /* Transition: '<S26>:742' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:764' */
  SideOccupy_Fcn_DW.k = 0.0;
}

/* Function for Chart: '<Root>/Side_Occ_Judge_Module' */
static void SideOccupy_Fcn_Outer_SdOccJudAccordLtLane(void)
{
  boolean_T guard1;
  boolean_T guard2;

  /* Graphical Function 'Outer_SdOccJudAccordLtLane': '<S26>:380' */
  /* Transition: '<S26>:384' */
  SideOccupy_Fcn_B.RtFrtSd_OccFlg = 0.0;

  /* Right Front Side Occupy Flag */
  SideOccupy_Fcn_B.RtRrSd_OccFlg = 0.0;

  /* Right Rear Side Occupy Flag */
  SideOccupy_Fcn_B.LtRrSd_OccFlg = 0.0;
  SideOccupy_Fcn_B.LtFrtSd_OccFlg = 0.0;
  SideOccupy_Fcn_DW.m = 0.0;
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:425' */
    /* Transition: '<S26>:427' */
    /* Simulink Function 'InterestObjDet_WithLane': '<S26>:489' */
    SideOccupy_Fcn_B.x = SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k];
    SideOccupy_Fcn_B.angle = SideOccupy_Fcn_B.NE_e;

    /* Constant: '<Root>/Cal_SdDist_Front' */
    SideOccupy_Fcn_B.Rmax = SideOccupy_Fcn_P.Cal_SdDist_Front_Value;

    /* Constant: '<Root>/Cal_SdDist_Rear' */
    SideOccupy_Fcn_B.Rmin = SideOccupy_Fcn_P.Cal_SdDist_Rear_Value;

    /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.InterestObjDet_WithLane' */
    SideOccupy_Fcn_Judge_MainInterestObjDet_WithLane(SideOccupy_Fcn_B.Rmin,
      SideOccupy_Fcn_B.angle, SideOccupy_Fcn_B.x, SideOccupy_Fcn_B.Rmax,
      &SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithLane,
      (P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *)
      &SideOccupy_Fcn_P.Judge_MainInterestObjDet_WithLane);

    /* End of Outputs for SubSystem: '<S26>/Judge_Main.InterestObjDet_WithLane' */
    if (SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithLane.DataTypeConversion ==
        1) {
      /* Transition: '<S26>:468' */
      /* Transition: '<S26>:503' */
      /* Simulink Function 'Fcn_LtSdOccJdWtLn': '<S26>:490' */
      SideOccupy_Fcn_B.x_fn = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.y = SideOccupy_Fcn_B.NE[381 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.c0_j = SideOccupy_Fcn_B.NE_o;
      SideOccupy_Fcn_B.c1_f = SideOccupy_Fcn_B.NE_e;
      SideOccupy_Fcn_B.c2_n = SideOccupy_Fcn_B.NE_a;
      SideOccupy_Fcn_B.c3 = SideOccupy_Fcn_B.NE_i;
      SideOccupy_Fcn_B.W = 1.8;

      /* Constant: '<Root>/Cal_Out_LtLnWd' */
      SideOccupy_Fcn_B.LtLnWd = SideOccupy_Fcn_P.Cal_Out_LtLnWd_Value;

      /* Constant: '<Root>/Cal_Out_RtLnWd' */
      SideOccupy_Fcn_B.RtLnWd = SideOccupy_Fcn_P.Cal_Out_RtLnWd_Value;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn' */
      /* Product: '<S73>/Product' */
      SideOccupy_Fcn_B.Product_o = SideOccupy_Fcn_B.c1_f * SideOccupy_Fcn_B.x_fn;

      /* Product: '<S73>/Product1' */
      SideOccupy_Fcn_B.Product1_dl = SideOccupy_Fcn_B.c2_n *
        SideOccupy_Fcn_B.x_fn * SideOccupy_Fcn_B.x_fn;

      /* Product: '<S73>/Product2' */
      SideOccupy_Fcn_B.Product2_i = SideOccupy_Fcn_B.c3 * SideOccupy_Fcn_B.x_fn *
        SideOccupy_Fcn_B.x_fn * SideOccupy_Fcn_B.x_fn;

      /* Gain: '<S73>/Gain' */
      SideOccupy_Fcn_B.Gain_l = SideOccupy_Fcn_P.Gain_Gain_d *
        SideOccupy_Fcn_B.W;

      /* Sum: '<S73>/Subtract' */
      SideOccupy_Fcn_B.Subtract_o = (((SideOccupy_Fcn_B.y +
        SideOccupy_Fcn_B.Product_o) + SideOccupy_Fcn_B.Product1_dl) +
        SideOccupy_Fcn_B.Product2_i) - SideOccupy_Fcn_B.Gain_l;

      /* RelationalOperator: '<S77>/Compare' incorporates:
       *  Constant: '<S77>/Constant'
       */
      SideOccupy_Fcn_B.Compare_f = (SideOccupy_Fcn_B.Subtract_o >
        SideOccupy_Fcn_P.Constant_Value_h);

      /* Product: '<S71>/Product' */
      SideOccupy_Fcn_B.Product_a = SideOccupy_Fcn_B.c1_f * SideOccupy_Fcn_B.x_fn;

      /* Product: '<S71>/Product1' */
      SideOccupy_Fcn_B.Product1_b = SideOccupy_Fcn_B.c2_n *
        SideOccupy_Fcn_B.x_fn * SideOccupy_Fcn_B.x_fn;

      /* Product: '<S71>/Product2' */
      SideOccupy_Fcn_B.Product2_g = SideOccupy_Fcn_B.c3 * SideOccupy_Fcn_B.x_fn *
        SideOccupy_Fcn_B.x_fn * SideOccupy_Fcn_B.x_fn;

      /* Sum: '<S71>/Subtract' */
      SideOccupy_Fcn_B.Subtract_f = ((((SideOccupy_Fcn_B.y +
        SideOccupy_Fcn_B.Product_a) + SideOccupy_Fcn_B.Product1_b) +
        SideOccupy_Fcn_B.Product2_g) + SideOccupy_Fcn_B.c0_j) -
        SideOccupy_Fcn_B.LtLnWd;

      /* RelationalOperator: '<S75>/Compare' incorporates:
       *  Constant: '<S75>/Constant'
       */
      SideOccupy_Fcn_B.Compare_hr = (SideOccupy_Fcn_B.Subtract_f <
        SideOccupy_Fcn_P.Constant_Value_fd);

      /* Product: '<S34>/Product' */
      SideOccupy_Fcn_B.Product_f = (uint16_T)(SideOccupy_Fcn_B.Compare_f ?
        (int32_T)SideOccupy_Fcn_B.Compare_hr : 0);

      /* DataTypeConversion: '<S34>/Data Type Conversion' */
      SideOccupy_Fcn_B.DataTypeConversion_k1 = (int8_T)
        SideOccupy_Fcn_B.Product_f;

      /* Product: '<S74>/Product' */
      SideOccupy_Fcn_B.Product_e = SideOccupy_Fcn_B.c1_f * SideOccupy_Fcn_B.x_fn;

      /* Product: '<S74>/Product1' */
      SideOccupy_Fcn_B.Product1_pa = SideOccupy_Fcn_B.c2_n *
        SideOccupy_Fcn_B.x_fn * SideOccupy_Fcn_B.x_fn;

      /* Product: '<S74>/Product2' */
      SideOccupy_Fcn_B.Product2_h = SideOccupy_Fcn_B.c3 * SideOccupy_Fcn_B.x_fn *
        SideOccupy_Fcn_B.x_fn * SideOccupy_Fcn_B.x_fn;

      /* Gain: '<S74>/Gain' */
      SideOccupy_Fcn_B.Gain_p = SideOccupy_Fcn_P.Gain_Gain_di *
        SideOccupy_Fcn_B.W;

      /* Sum: '<S74>/Subtract' */
      SideOccupy_Fcn_B.Subtract_g = (((SideOccupy_Fcn_B.y +
        SideOccupy_Fcn_B.Product_e) + SideOccupy_Fcn_B.Product1_pa) +
        SideOccupy_Fcn_B.Product2_h) + SideOccupy_Fcn_B.Gain_p;

      /* RelationalOperator: '<S78>/Compare' incorporates:
       *  Constant: '<S78>/Constant'
       */
      SideOccupy_Fcn_B.Compare_bh = (SideOccupy_Fcn_B.Subtract_g <
        SideOccupy_Fcn_P.Constant_Value_l);

      /* Product: '<S72>/Product' */
      SideOccupy_Fcn_B.Product_m = SideOccupy_Fcn_B.c1_f * SideOccupy_Fcn_B.x_fn;

      /* Product: '<S72>/Product1' */
      SideOccupy_Fcn_B.Product1_k = SideOccupy_Fcn_B.c2_n *
        SideOccupy_Fcn_B.x_fn * SideOccupy_Fcn_B.x_fn;

      /* Product: '<S72>/Product2' */
      SideOccupy_Fcn_B.Product2_m = SideOccupy_Fcn_B.c3 * SideOccupy_Fcn_B.x_fn *
        SideOccupy_Fcn_B.x_fn * SideOccupy_Fcn_B.x_fn;

      /* Sum: '<S72>/Subtract' */
      SideOccupy_Fcn_B.Subtract_nb = ((((SideOccupy_Fcn_B.y +
        SideOccupy_Fcn_B.Product_m) + SideOccupy_Fcn_B.Product1_k) +
        SideOccupy_Fcn_B.Product2_m) + SideOccupy_Fcn_B.c0_j) +
        SideOccupy_Fcn_B.RtLnWd;

      /* RelationalOperator: '<S76>/Compare' incorporates:
       *  Constant: '<S76>/Constant'
       */
      SideOccupy_Fcn_B.Compare_o = (SideOccupy_Fcn_B.Subtract_nb >
        SideOccupy_Fcn_P.Constant_Value_bo);

      /* Product: '<S34>/Product1' */
      SideOccupy_Fcn_B.Product1_ad = (uint16_T)(SideOccupy_Fcn_B.Compare_bh ?
        (int32_T)SideOccupy_Fcn_B.Compare_o : 0);

      /* Gain: '<S34>/Gain' */
      SideOccupy_Fcn_B.Gain_gk = (uint32_T)SideOccupy_Fcn_P.Gain_Gain_i5 *
        SideOccupy_Fcn_B.Product1_ad;

      /* DataTypeConversion: '<S34>/Data Type Conversion1' */
      SideOccupy_Fcn_B.DataTypeConversion1_f = (int8_T)(SideOccupy_Fcn_B.Gain_gk
        >> 14);

      /* Logic: '<S34>/Logical Operator' */
      SideOccupy_Fcn_B.LogicalOperator_o = !SideOccupy_Fcn_B.Compare_f;

      /* Logic: '<S34>/Logical Operator1' */
      SideOccupy_Fcn_B.LogicalOperator1_n = !SideOccupy_Fcn_B.Compare_bh;

      /* Product: '<S34>/Product2' */
      SideOccupy_Fcn_B.Product2_gd = (uint16_T)
        (SideOccupy_Fcn_B.LogicalOperator_o ? (int32_T)
         SideOccupy_Fcn_B.LogicalOperator1_n : 0);

      /* Gain: '<S34>/Gain1' */
      SideOccupy_Fcn_B.Gain1_ge = (uint32_T)SideOccupy_Fcn_P.Gain1_Gain_h *
        SideOccupy_Fcn_B.Product2_gd;

      /* DataTypeConversion: '<S34>/Data Type Conversion2' */
      SideOccupy_Fcn_B.DataTypeConversion2_k = (int8_T)
        (SideOccupy_Fcn_B.Gain1_ge >> 14);

      /* Sum: '<S34>/Add' */
      SideOccupy_Fcn_B.Add_l0 = (int8_T)((SideOccupy_Fcn_B.DataTypeConversion_k1
        + SideOccupy_Fcn_B.DataTypeConversion1_f) +
        SideOccupy_Fcn_B.DataTypeConversion2_k);

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn' */
      if (SideOccupy_Fcn_B.Add_l0 == 1) {
        /* Transition: '<S26>:506' */
        if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0) {
          /* Transition: '<S26>:509' */
          /* In Front Side */
          /* Transition: '<S26>:513' */
          SideOccupy_Fcn_B.LtFrtSd_OccFlg = 1.0;
          SideOccupy_Fcn_B.LtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_LF] =
            SideOccupy_Fcn_DW.k + 1.0;
          SideOccupy_Fcn_DW.Num_LF++;

          /* Left Front Zone have Obj */
          /* Transition: '<S26>:514' */
        } else {
          /* Transition: '<S26>:511' */
          SideOccupy_Fcn_B.LtRrSd_OccFlg = 1.0;
          SideOccupy_Fcn_B.LtRrSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_LR] =
            SideOccupy_Fcn_DW.k + 1.0;
          SideOccupy_Fcn_DW.Num_LR++;

          /* Left Rear Zone have Obj */
        }

        /* Transition: '<S26>:515' */
        /* Transition: '<S26>:864' */
        /* Transition: '<S26>:866' */
        /* Transition: '<S26>:1168' */
        /* Transition: '<S26>:1169' */
      } else {
        /* Transition: '<S26>:507' */
        if (SideOccupy_Fcn_B.Add_l0 == 2) {
          /* Transition: '<S26>:858' */
          if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0) {
            /* Transition: '<S26>:860' */
            /* In Front Side */
            /* Transition: '<S26>:862' */
            SideOccupy_Fcn_B.RtFrtSd_OccFlg = 1.0;
            SideOccupy_Fcn_B.RtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_RF]
              = SideOccupy_Fcn_DW.k + 1.0;
            SideOccupy_Fcn_DW.Num_RF++;

            /* Right Front Zone have Obj */
            /* Transition: '<S26>:864' */
            /* Transition: '<S26>:866' */
            /* Transition: '<S26>:1168' */
            /* Transition: '<S26>:1169' */
          } else {
            /* Transition: '<S26>:865' */
            SideOccupy_Fcn_B.RtRrSd_OccFlg = 1.0;
            SideOccupy_Fcn_B.RtFrtSd_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_RR]
              = SideOccupy_Fcn_DW.k + 1.0;
            SideOccupy_Fcn_DW.Num_RR++;

            /* Left Rear Zone have Obj */
            /* Transition: '<S26>:866' */
            /* Transition: '<S26>:1168' */
            /* Transition: '<S26>:1169' */
          }
        } else {
          /* Transition: '<S26>:867' */
          if (SideOccupy_Fcn_B.Add_l0 == 3) {
            /* Transition: '<S26>:1161' */
            if (SideOccupy_Fcn_B.NE[127 + (int32_T)SideOccupy_Fcn_DW.k] >= 0.0)
            {
              /* Transition: '<S26>:1163' */
              /* In Front Side */
              /* Transition: '<S26>:1165' */
              SideOccupy_Fcn_B.FrtCent_OccFlg = 1.0;
              SideOccupy_Fcn_B.FrtCent_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_F]
                = SideOccupy_Fcn_DW.k + 1.0;
              SideOccupy_Fcn_DW.Num_F++;

              /* Left Rear Zone have Obj */
              /* Transition: '<S26>:1168' */
              /* Transition: '<S26>:1169' */
            } else {
              /* Transition: '<S26>:1167' */
              SideOccupy_Fcn_B.RrCent_OccFlg = 1.0;
              SideOccupy_Fcn_B.RrCent_OccIndex[(int32_T)SideOccupy_Fcn_DW.Num_R]
                = SideOccupy_Fcn_DW.k + 1.0;
              SideOccupy_Fcn_DW.Num_R++;

              /* Left Rear Zone have Obj */
              /* Transition: '<S26>:1169' */
            }
          } else {
            /* Transition: '<S26>:1170' */
          }
        }
      }

      /* Transition: '<S26>:501' */
    } else {
      /* Transition: '<S26>:469' */
    }

    /* Transition: '<S26>:451' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:385' */
  SideOccupy_Fcn_DW.k = 0.0;
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:692' */
    guard1 = false;
    guard2 = false;
    if ((SideOccupy_Fcn_B.NE[1016 + (int32_T)SideOccupy_Fcn_DW.k] != -1.0) &&
        (SideOccupy_Fcn_B.NE[1016 + (int32_T)SideOccupy_Fcn_DW.k] != 0.0)) {
      /* Transition: '<S26>:694' */
      /* Transition: '<S26>:699' */
      guard2 = true;
    } else {
      /* Transition: '<S26>:700' */
      /* Simulink Function 'Fcn_SelectJdWtLtLn': '<S26>:690' */
      SideOccupy_Fcn_B.x_b = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.y_i = SideOccupy_Fcn_B.NE[381 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.c0_b = SideOccupy_Fcn_B.NE_o;
      SideOccupy_Fcn_B.c1_fo = SideOccupy_Fcn_B.NE_e;
      SideOccupy_Fcn_B.c2_d = SideOccupy_Fcn_B.NE_a;
      SideOccupy_Fcn_B.c3_c = SideOccupy_Fcn_B.NE_i;

      /* Constant: '<Root>/Cal_Out_LtLnWd' */
      SideOccupy_Fcn_B.LtLnWd_m = SideOccupy_Fcn_P.Cal_Out_LtLnWd_Value;

      /* Constant: '<Root>/Cal_Out_RtLnWd' */
      SideOccupy_Fcn_B.RtLnWd_j = SideOccupy_Fcn_P.Cal_Out_RtLnWd_Value;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn' */
      SideOccupy_Fcn_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn
        (SideOccupy_Fcn_B.c1_fo, SideOccupy_Fcn_B.x_b, SideOccupy_Fcn_B.c2_d,
         SideOccupy_Fcn_B.c3_c, SideOccupy_Fcn_B.y_i, SideOccupy_Fcn_B.c0_b,
         SideOccupy_Fcn_B.LtLnWd_m, SideOccupy_Fcn_B.RtLnWd_j,
         &SideOccupy_Fcn_B.Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn,
         (P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
          *)
         &SideOccupy_Fcn_P.Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn);

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn' */
      if (SideOccupy_Fcn_B.Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn.DataTypeConversion
          == 1) {
        /* Transition: '<S26>:701' */
        /* Inside Lane */
        guard2 = true;
      } else {
        /* Transition: '<S26>:706' */
        if ((SideOccupy_Fcn_B.NE[635 + (int32_T)SideOccupy_Fcn_DW.k] == 2.0) ||
            (SideOccupy_Fcn_B.NE[635 + (int32_T)SideOccupy_Fcn_DW.k] == 3.0)) {
          /* Transition: '<S26>:711' */
          /* Moving Object */
          guard1 = true;
        } else {
          /* Transition: '<S26>:713' */
        }
      }
    }

    if (guard2) {
      /* Transition: '<S26>:710' */
      guard1 = true;
    }

    if (guard1) {
      /* Transition: '<S26>:718' */
      while (SideOccupy_Fcn_DW.m < 26.0) {
        /* Transition: '<S26>:720' */
        /* Transition: '<S26>:723' */
        SideOccupy_Fcn_B.FusObj_Select[(int32_T)SideOccupy_Fcn_B.Num_Out_Select
          + 127 * (int32_T)SideOccupy_Fcn_DW.m] = SideOccupy_Fcn_B.NE[127 *
          (int32_T)SideOccupy_Fcn_DW.m + (int32_T)SideOccupy_Fcn_DW.k];

        /* Transition: '<S26>:724' */
        SideOccupy_Fcn_DW.m++;
      }

      /* Transition: '<S26>:725' */
      SideOccupy_Fcn_DW.m = 0.0;
      SideOccupy_Fcn_B.Num_Out_Select++;

      /* Transition: '<S26>:714' */
    }

    /* Transition: '<S26>:707' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:716' */
  SideOccupy_Fcn_DW.k = 0.0;
}

/* Function for Chart: '<Root>/Side_Occ_Judge_Module' */
static void SideOccupy_Fcn_TS_NoLocation(void)
{
  real_T TTC_Obj;

  /* Graphical Function 'TS_NoLocation': '<S26>:912' */
  /* Transition: '<S26>:999' */
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:1001' */
    /* Transition: '<S26>:1003' */
    /* Simulink Function 'TTC_Cal': '<S26>:911' */
    SideOccupy_Fcn_B.x_f = SideOccupy_Fcn_B.NE[127 + (int32_T)
      SideOccupy_Fcn_DW.k];
    SideOccupy_Fcn_B.v = SideOccupy_Fcn_B.NE[254 + (int32_T)SideOccupy_Fcn_DW.k];

    /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.TTC_Cal' */
    SideOccupy_Fcn_Judge_MainTTC_Cal(SideOccupy_Fcn_B.v, SideOccupy_Fcn_B.x_f,
      &SideOccupy_Fcn_B.Judge_MainTTC_Cal, (P_Judge_MainTTC_Cal_SideOccupy_Fcn_T
      *)&SideOccupy_Fcn_P.Judge_MainTTC_Cal);

    /* End of Outputs for SubSystem: '<S26>/Judge_Main.TTC_Cal' */
    TTC_Obj = SideOccupy_Fcn_B.Judge_MainTTC_Cal.Switch;
    if (SideOccupy_Fcn_B.Judge_MainTTC_Cal.Switch < SideOccupy_Fcn_TTC_Threshold)
    {
      /* Transition: '<S26>:1007' */
      /* Transition: '<S26>:1020' */
      /* Simulink Function 'PredictPthAcMov': '<S26>:1014' */
      SideOccupy_Fcn_B.x_la = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.r = SideOccupy_Fcn_B.Saturation2;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.PredictPthAcMov' */
      /* Abs: '<S115>/Abs' */
      SideOccupy_Fcn_B.Abs_o = fabs(SideOccupy_Fcn_B.r);

      /* RelationalOperator: '<S116>/Compare' incorporates:
       *  Constant: '<S116>/Constant'
       */
      SideOccupy_Fcn_B.Compare_j = (SideOccupy_Fcn_B.Abs_o <=
        SideOccupy_Fcn_P.CompareToConstant_const);

      /* Switch: '<S115>/Switch' incorporates:
       *  Constant: '<S115>/Constant'
       */
      if (SideOccupy_Fcn_B.Compare_j) {
        SideOccupy_Fcn_B.Switch_b = SideOccupy_Fcn_P.Constant_Value;
      } else {
        SideOccupy_Fcn_B.Switch_b = SideOccupy_Fcn_B.r;
      }

      /* End of Switch: '<S115>/Switch' */

      /* Gain: '<S39>/Gain' */
      SideOccupy_Fcn_B.Gain_a = SideOccupy_Fcn_P.Gain_Gain *
        SideOccupy_Fcn_B.Switch_b;

      /* Product: '<S39>/Divide' */
      SideOccupy_Fcn_B.Divide_aa = 1.0 / SideOccupy_Fcn_B.Gain_a *
        SideOccupy_Fcn_B.x_la * SideOccupy_Fcn_B.x_la;

      /* End of Outputs for SubSystem: '<S26>/Judge_Main.PredictPthAcMov' */
      if ((SideOccupy_Fcn_B.Divide_aa - SideOccupy_Fcn_B.NE[381 + (int32_T)
           SideOccupy_Fcn_DW.k] < SideOccupy_Fcn_CurrentLateralDist_Th) &&
          (SideOccupy_Fcn_B.Divide_aa - SideOccupy_Fcn_B.NE[381 + (int32_T)
           SideOccupy_Fcn_DW.k] > -3.0)) {
        /* Transition: '<S26>:1023' */
        /* Judge weather the object current close to path */
        if ((SideOccupy_Fcn_B.Divide_aa - (SideOccupy_Fcn_B.NE[508 + (int32_T)
              SideOccupy_Fcn_DW.k] * TTC_Obj + SideOccupy_Fcn_B.NE[381 +
              (int32_T)SideOccupy_Fcn_DW.k]) <
             SideOccupy_Fcn_PredictLateralDist_Th) &&
            (SideOccupy_Fcn_B.Divide_aa - (SideOccupy_Fcn_B.NE[508 + (int32_T)
              SideOccupy_Fcn_DW.k] * TTC_Obj + SideOccupy_Fcn_B.NE[381 +
              (int32_T)SideOccupy_Fcn_DW.k]) > -1.0)) {
          /* Transition: '<S26>:1030' */
          /* Judge after TTC, weather this target close to path */
          if (TTC_Obj < SideOccupy_Fcn_DW.TTC_Min) {
            /* Transition: '<S26>:1036' */
            /* Transition: '<S26>:1038' */
            SideOccupy_Fcn_B.CIPO_ID = SideOccupy_Fcn_B.NE[(int32_T)
              SideOccupy_Fcn_DW.k];
            SideOccupy_Fcn_DW.TTC_Min = TTC_Obj;

            /* Transition: '<S26>:1042' */
          } else {
            /* Transition: '<S26>:1041' */
          }

          /* Transition: '<S26>:1043' */
        } else {
          /* Transition: '<S26>:1032' */
        }

        /* Transition: '<S26>:1033' */
      } else {
        /* Transition: '<S26>:1027' */
      }

      /* Transition: '<S26>:1028' */
    } else {
      /* Transition: '<S26>:1009' */
    }

    /* Transition: '<S26>:1010' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:1045' */
  SideOccupy_Fcn_DW.k = 0.0;
}

/* Function for Chart: '<Root>/Side_Occ_Judge_Module' */
static void SideOccupy_Fcn_TS_Inner_WtRtLn(void)
{
  real_T TTC_Obj;
  real_T u0;
  real_T u1;

  /* Graphical Function 'TS_Inner_WtRtLn': '<S26>:1103' */
  /* Transition: '<S26>:1118' */
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:1119' */
    /* Transition: '<S26>:1122' */
    /* Simulink Function 'TTC_Cal': '<S26>:911' */
    SideOccupy_Fcn_B.x_f = SideOccupy_Fcn_B.NE[127 + (int32_T)
      SideOccupy_Fcn_DW.k];
    SideOccupy_Fcn_B.v = SideOccupy_Fcn_B.NE[254 + (int32_T)SideOccupy_Fcn_DW.k];

    /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.TTC_Cal' */
    SideOccupy_Fcn_Judge_MainTTC_Cal(SideOccupy_Fcn_B.v, SideOccupy_Fcn_B.x_f,
      &SideOccupy_Fcn_B.Judge_MainTTC_Cal, (P_Judge_MainTTC_Cal_SideOccupy_Fcn_T
      *)&SideOccupy_Fcn_P.Judge_MainTTC_Cal);

    /* End of Outputs for SubSystem: '<S26>/Judge_Main.TTC_Cal' */
    TTC_Obj = SideOccupy_Fcn_B.Judge_MainTTC_Cal.Switch;
    if (SideOccupy_Fcn_B.Judge_MainTTC_Cal.Switch < SideOccupy_Fcn_TTC_Threshold)
    {
      /* Transition: '<S26>:1123' */
      /* Transition: '<S26>:1125' */
      /* Simulink Function 'PredictPthAcRtLn': '<S26>:1143' */
      SideOccupy_Fcn_B.x_fc = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.r_h = SideOccupy_Fcn_B.Saturation2;
      SideOccupy_Fcn_B.c0_n = SideOccupy_Fcn_B.NE_h;
      SideOccupy_Fcn_B.c1_i = SideOccupy_Fcn_B.NE_ac;
      SideOccupy_Fcn_B.c2_j = SideOccupy_Fcn_B.NE_n;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.PredictPthAcRtLn' */
      /* Abs: '<S124>/Abs' */
      SideOccupy_Fcn_B.Abs = fabs(SideOccupy_Fcn_B.r_h);

      /* RelationalOperator: '<S129>/Compare' incorporates:
       *  Constant: '<S129>/Constant'
       */
      SideOccupy_Fcn_B.Compare_cd = (SideOccupy_Fcn_B.Abs <=
        SideOccupy_Fcn_P.CompareToConstant_const_b);

      /* Switch: '<S124>/Switch' incorporates:
       *  Constant: '<S124>/Constant'
       */
      if (SideOccupy_Fcn_B.Compare_cd) {
        SideOccupy_Fcn_B.Switch = SideOccupy_Fcn_P.Constant_Value_nb;
      } else {
        SideOccupy_Fcn_B.Switch = SideOccupy_Fcn_B.r_h;
      }

      /* End of Switch: '<S124>/Switch' */

      /* Gain: '<S125>/Gain' */
      SideOccupy_Fcn_B.Gain_lu = SideOccupy_Fcn_P.Gain_Gain_k *
        SideOccupy_Fcn_B.Switch;

      /* Product: '<S125>/Divide' incorporates:
       *  Constant: '<S125>/Constant'
       */
      SideOccupy_Fcn_B.Divide_lk = 1.0 / SideOccupy_Fcn_B.Gain_lu *
        SideOccupy_Fcn_P.Constant_Value_f;

      /* Sum: '<S125>/Add' */
      SideOccupy_Fcn_B.Add_d = SideOccupy_Fcn_B.c2_j -
        SideOccupy_Fcn_B.Divide_lk;

      /* Product: '<S127>/Divide' */
      SideOccupy_Fcn_B.Divide_c = SideOccupy_Fcn_B.c1_i * SideOccupy_Fcn_B.c1_i;

      /* Gain: '<S128>/Gain' incorporates:
       *  Constant: '<S117>/Constant'
       */
      SideOccupy_Fcn_B.Gain_m = SideOccupy_Fcn_P.Gain_Gain_b *
        SideOccupy_Fcn_P.Constant_Value_ij;

      /* Sum: '<S128>/Subtract' */
      SideOccupy_Fcn_B.Subtract_i = SideOccupy_Fcn_B.c0_n -
        SideOccupy_Fcn_B.Gain_m;

      /* Product: '<S127>/Divide1' */
      SideOccupy_Fcn_B.Divide1_ef = SideOccupy_Fcn_B.Add_d *
        SideOccupy_Fcn_B.Subtract_i;

      /* Gain: '<S127>/Gain' */
      SideOccupy_Fcn_B.Gain_it = SideOccupy_Fcn_P.Gain_Gain_b3 *
        SideOccupy_Fcn_B.Divide1_ef;

      /* Sum: '<S127>/Subtract' */
      SideOccupy_Fcn_B.Subtract_l = SideOccupy_Fcn_B.Divide_c -
        SideOccupy_Fcn_B.Gain_it;

      /* Switch: '<S123>/Switch' incorporates:
       *  Constant: '<S123>/Constant'
       */
      if (SideOccupy_Fcn_B.Subtract_l >= SideOccupy_Fcn_P.Switch_Threshold_h) {
        /* Gain: '<S133>/Gain' */
        SideOccupy_Fcn_B.Gain_ir = SideOccupy_Fcn_P.Gain_Gain_nu *
          SideOccupy_Fcn_B.Add_d;

        /* Sqrt: '<S133>/Sqrt' */
        SideOccupy_Fcn_B.Sqrt = sqrt(SideOccupy_Fcn_B.Subtract_l);

        /* Sum: '<S133>/Add' */
        SideOccupy_Fcn_B.Add_p = SideOccupy_Fcn_B.Sqrt - SideOccupy_Fcn_B.c1_i;

        /* Product: '<S133>/Divide' */
        SideOccupy_Fcn_B.Divide_du = SideOccupy_Fcn_B.Add_p /
          SideOccupy_Fcn_B.Gain_ir;

        /* Gain: '<S132>/Gain' */
        SideOccupy_Fcn_B.Gain_d = SideOccupy_Fcn_P.Gain_Gain_m *
          SideOccupy_Fcn_B.Add_d;

        /* Sqrt: '<S132>/Sqrt' */
        SideOccupy_Fcn_B.Sqrt_d = sqrt(SideOccupy_Fcn_B.Subtract_l);

        /* Sum: '<S132>/Add' */
        SideOccupy_Fcn_B.Add_h = (0.0 - SideOccupy_Fcn_B.c1_i) -
          SideOccupy_Fcn_B.Sqrt_d;

        /* Product: '<S132>/Divide' */
        SideOccupy_Fcn_B.Divide_a2 = SideOccupy_Fcn_B.Add_h /
          SideOccupy_Fcn_B.Gain_d;

        /* MinMax: '<S123>/MinMax' */
        u0 = SideOccupy_Fcn_B.Divide_a2;
        u1 = SideOccupy_Fcn_B.Divide_du;
        if ((u0 >= u1) || rtIsNaN(u1)) {
          u1 = u0;
        }

        SideOccupy_Fcn_B.MinMax = u1;

        /* End of MinMax: '<S123>/MinMax' */
        SideOccupy_Fcn_B.Switch_o = SideOccupy_Fcn_B.MinMax;
      } else {
        SideOccupy_Fcn_B.Switch_o = SideOccupy_Fcn_P.Constant_Value_g;
      }

      /* End of Switch: '<S123>/Switch' */

      /* RelationalOperator: '<S118>/Compare' incorporates:
       *  Constant: '<S118>/Constant'
       */
      SideOccupy_Fcn_B.Compare_dkg = (SideOccupy_Fcn_B.Switch_o >
        SideOccupy_Fcn_P.CompareToConstant_const_j);

      /* Abs: '<S130>/Abs' */
      SideOccupy_Fcn_B.Abs_k = fabs(SideOccupy_Fcn_B.Switch);

      /* RelationalOperator: '<S131>/Compare' incorporates:
       *  Constant: '<S131>/Constant'
       */
      SideOccupy_Fcn_B.Compare_hov = (SideOccupy_Fcn_B.Abs_k <=
        SideOccupy_Fcn_P.CompareToConstant_const_jm);

      /* Switch: '<S130>/Switch' incorporates:
       *  Constant: '<S130>/Constant'
       */
      if (SideOccupy_Fcn_B.Compare_hov) {
        SideOccupy_Fcn_B.Switch_h = SideOccupy_Fcn_P.Constant_Value_b;
      } else {
        SideOccupy_Fcn_B.Switch_h = SideOccupy_Fcn_B.Switch;
      }

      /* End of Switch: '<S130>/Switch' */

      /* Gain: '<S122>/Gain' */
      SideOccupy_Fcn_B.Gain_j = SideOccupy_Fcn_P.Gain_Gain_jp *
        SideOccupy_Fcn_B.Switch_h;

      /* Product: '<S122>/Divide' */
      SideOccupy_Fcn_B.Divide_a5 = 1.0 / SideOccupy_Fcn_B.Gain_j *
        SideOccupy_Fcn_B.x_fc * SideOccupy_Fcn_B.x_fc;

      /* Switch: '<S40>/Switch' */
      if (SideOccupy_Fcn_B.Compare_dkg) {
        /* Sum: '<S40>/Subtract' */
        SideOccupy_Fcn_B.Subtract_e5 = SideOccupy_Fcn_B.x_fc -
          SideOccupy_Fcn_B.Switch_o;

        /* Switch: '<S40>/Switch1' */
        if (SideOccupy_Fcn_B.Subtract_e5 > SideOccupy_Fcn_P.Switch1_Threshold_p)
        {
          /* Product: '<S121>/Product1' */
          SideOccupy_Fcn_B.Product1_ps = SideOccupy_Fcn_B.c2_j *
            SideOccupy_Fcn_B.x_fc * SideOccupy_Fcn_B.x_fc;

          /* Product: '<S121>/Product' */
          SideOccupy_Fcn_B.Product_aq = SideOccupy_Fcn_B.c1_i *
            SideOccupy_Fcn_B.x_fc;

          /* Gain: '<S121>/Gain' incorporates:
           *  Constant: '<S117>/Constant'
           */
          SideOccupy_Fcn_B.Gain_im = SideOccupy_Fcn_P.Gain_Gain_ni *
            SideOccupy_Fcn_P.Constant_Value_ij;

          /* Sum: '<S121>/Subtract' */
          SideOccupy_Fcn_B.Subtract_m = (((0.0 - SideOccupy_Fcn_B.c0_n) -
            SideOccupy_Fcn_B.Product_aq) - SideOccupy_Fcn_B.Product1_ps) -
            SideOccupy_Fcn_B.Gain_im;
          SideOccupy_Fcn_B.Switch1 = SideOccupy_Fcn_B.Subtract_m;
        } else {
          SideOccupy_Fcn_B.Switch1 = SideOccupy_Fcn_B.Divide_a5;
        }

        /* End of Switch: '<S40>/Switch1' */
        SideOccupy_Fcn_B.Switch_c = SideOccupy_Fcn_B.Switch1;
      } else {
        /* Abs: '<S40>/Abs' */
        SideOccupy_Fcn_B.Abs_n = fabs(SideOccupy_Fcn_B.c1_i);

        /* RelationalOperator: '<S119>/Compare' incorporates:
         *  Constant: '<S119>/Constant'
         */
        SideOccupy_Fcn_B.Compare_mk = (SideOccupy_Fcn_B.Abs_n >=
          SideOccupy_Fcn_P.CompareToConstant1_const_o);

        /* Switch: '<S40>/Switch2' */
        if (SideOccupy_Fcn_B.Compare_mk) {
          SideOccupy_Fcn_B.Switch2 = SideOccupy_Fcn_B.Divide_a5;
        } else {
          /* Product: '<S120>/Product1' */
          SideOccupy_Fcn_B.Product1_j = SideOccupy_Fcn_B.c2_j *
            SideOccupy_Fcn_B.x_fc * SideOccupy_Fcn_B.x_fc;

          /* Product: '<S120>/Product' */
          SideOccupy_Fcn_B.Product_g = SideOccupy_Fcn_B.c1_i *
            SideOccupy_Fcn_B.x_fc;

          /* Sum: '<S120>/Subtract' */
          SideOccupy_Fcn_B.Subtract_nt = (0.0 - SideOccupy_Fcn_B.Product_g) -
            SideOccupy_Fcn_B.Product1_j;
          SideOccupy_Fcn_B.Switch2 = SideOccupy_Fcn_B.Subtract_nt;
        }

        /* End of Switch: '<S40>/Switch2' */
        SideOccupy_Fcn_B.Switch_c = SideOccupy_Fcn_B.Switch2;
      }

      /* End of Switch: '<S40>/Switch' */
      /* End of Outputs for SubSystem: '<S26>/Judge_Main.PredictPthAcRtLn' */
      if ((SideOccupy_Fcn_B.Switch_c - SideOccupy_Fcn_B.NE[381 + (int32_T)
           SideOccupy_Fcn_DW.k] < SideOccupy_Fcn_CurrentLateralDist_Th) &&
          (SideOccupy_Fcn_B.Switch_c - SideOccupy_Fcn_B.NE[381 + (int32_T)
           SideOccupy_Fcn_DW.k] > -3.0)) {
        /* Transition: '<S26>:1126' */
        /* Judge weather the object current close to path */
        if ((SideOccupy_Fcn_B.Switch_c - (SideOccupy_Fcn_B.NE[508 + (int32_T)
              SideOccupy_Fcn_DW.k] * TTC_Obj + SideOccupy_Fcn_B.NE[381 +
              (int32_T)SideOccupy_Fcn_DW.k]) <
             SideOccupy_Fcn_PredictLateralDist_Th) && (SideOccupy_Fcn_B.Switch_c
             - (SideOccupy_Fcn_B.NE[508 + (int32_T)SideOccupy_Fcn_DW.k] *
                TTC_Obj + SideOccupy_Fcn_B.NE[381 + (int32_T)SideOccupy_Fcn_DW.k])
             > -1.0)) {
          /* Transition: '<S26>:1127' */
          /* Judge after TTC, weather this target close to path */
          if (TTC_Obj < SideOccupy_Fcn_DW.TTC_Min) {
            /* Transition: '<S26>:1128' */
            /* Transition: '<S26>:1132' */
            SideOccupy_Fcn_B.CIPO_ID = SideOccupy_Fcn_B.NE[(int32_T)
              SideOccupy_Fcn_DW.k];
            SideOccupy_Fcn_DW.TTC_Min = TTC_Obj;

            /* Transition: '<S26>:1136' */
          } else {
            /* Transition: '<S26>:1131' */
          }

          /* Transition: '<S26>:1135' */
        } else {
          /* Transition: '<S26>:1130' */
        }

        /* Transition: '<S26>:1134' */
      } else {
        /* Transition: '<S26>:1129' */
      }

      /* Transition: '<S26>:1133' */
    } else {
      /* Transition: '<S26>:1124' */
    }

    /* Transition: '<S26>:1120' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:1121' */
  SideOccupy_Fcn_DW.k = 0.0;
}

/* Function for Chart: '<Root>/Side_Occ_Judge_Module' */
static void SideOccupy_Fcn_TS_Outer_WtLtLn(void)
{
  real_T TTC_Obj;
  real_T u0;
  real_T u1;

  /* Graphical Function 'TS_Outer_WtLtLn': '<S26>:1062' */
  /* Transition: '<S26>:1077' */
  while (SideOccupy_Fcn_DW.k < SideOccupy_Fcn_B.NE_k) {
    /* Transition: '<S26>:1078' */
    /* Transition: '<S26>:1081' */
    /* Simulink Function 'TTC_Cal': '<S26>:911' */
    SideOccupy_Fcn_B.x_f = SideOccupy_Fcn_B.NE[127 + (int32_T)
      SideOccupy_Fcn_DW.k];
    SideOccupy_Fcn_B.v = SideOccupy_Fcn_B.NE[254 + (int32_T)SideOccupy_Fcn_DW.k];

    /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.TTC_Cal' */
    SideOccupy_Fcn_Judge_MainTTC_Cal(SideOccupy_Fcn_B.v, SideOccupy_Fcn_B.x_f,
      &SideOccupy_Fcn_B.Judge_MainTTC_Cal, (P_Judge_MainTTC_Cal_SideOccupy_Fcn_T
      *)&SideOccupy_Fcn_P.Judge_MainTTC_Cal);

    /* End of Outputs for SubSystem: '<S26>/Judge_Main.TTC_Cal' */
    TTC_Obj = SideOccupy_Fcn_B.Judge_MainTTC_Cal.Switch;
    if (SideOccupy_Fcn_B.Judge_MainTTC_Cal.Switch < SideOccupy_Fcn_TTC_Threshold)
    {
      /* Transition: '<S26>:1082' */
      /* Transition: '<S26>:1084' */
      /* Simulink Function 'PredictPthAcLtLn': '<S26>:1099' */
      SideOccupy_Fcn_B.x_e = SideOccupy_Fcn_B.NE[127 + (int32_T)
        SideOccupy_Fcn_DW.k];
      SideOccupy_Fcn_B.r_c = SideOccupy_Fcn_B.Saturation2;
      SideOccupy_Fcn_B.c0 = SideOccupy_Fcn_B.NE_o;
      SideOccupy_Fcn_B.c1 = SideOccupy_Fcn_B.NE_e;
      SideOccupy_Fcn_B.c2 = SideOccupy_Fcn_B.NE_a;

      /* Outputs for Function Call SubSystem: '<S26>/Judge_Main.PredictPthAcLtLn' */
      /* Abs: '<S105>/Abs' */
      SideOccupy_Fcn_B.Abs_p = fabs(SideOccupy_Fcn_B.r_c);

      /* RelationalOperator: '<S110>/Compare' incorporates:
       *  Constant: '<S110>/Constant'
       */
      SideOccupy_Fcn_B.Compare_p = (SideOccupy_Fcn_B.Abs_p <=
        SideOccupy_Fcn_P.CompareToConstant_const_h);

      /* Switch: '<S105>/Switch' incorporates:
       *  Constant: '<S105>/Constant'
       */
      if (SideOccupy_Fcn_B.Compare_p) {
        SideOccupy_Fcn_B.Switch_k = SideOccupy_Fcn_P.Constant_Value_m;
      } else {
        SideOccupy_Fcn_B.Switch_k = SideOccupy_Fcn_B.r_c;
      }

      /* End of Switch: '<S105>/Switch' */

      /* Gain: '<S106>/Gain' */
      SideOccupy_Fcn_B.Gain_c = SideOccupy_Fcn_P.Gain_Gain_p *
        SideOccupy_Fcn_B.Switch_k;

      /* Product: '<S106>/Divide' incorporates:
       *  Constant: '<S106>/Constant'
       */
      SideOccupy_Fcn_B.Divide_e2 = 1.0 / SideOccupy_Fcn_B.Gain_c *
        SideOccupy_Fcn_P.Constant_Value_mt;

      /* Sum: '<S106>/Add' */
      SideOccupy_Fcn_B.Add_k = SideOccupy_Fcn_B.Divide_e2 + SideOccupy_Fcn_B.c2;

      /* Product: '<S108>/Divide' */
      SideOccupy_Fcn_B.Divide_km = SideOccupy_Fcn_B.c1 * SideOccupy_Fcn_B.c1;

      /* Gain: '<S109>/Gain' incorporates:
       *  Constant: '<S98>/Constant'
       */
      SideOccupy_Fcn_B.Gain_jy = SideOccupy_Fcn_P.Gain_Gain_e *
        SideOccupy_Fcn_P.Constant_Value_i;

      /* Sum: '<S109>/Subtract' */
      SideOccupy_Fcn_B.Subtract_my = SideOccupy_Fcn_B.c0 -
        SideOccupy_Fcn_B.Gain_jy;

      /* Product: '<S108>/Divide1' */
      SideOccupy_Fcn_B.Divide1_ku = SideOccupy_Fcn_B.Add_k *
        SideOccupy_Fcn_B.Subtract_my;

      /* Gain: '<S108>/Gain' */
      SideOccupy_Fcn_B.Gain_n = SideOccupy_Fcn_P.Gain_Gain_a *
        SideOccupy_Fcn_B.Divide1_ku;

      /* Sum: '<S108>/Subtract' */
      SideOccupy_Fcn_B.Subtract_cn = SideOccupy_Fcn_B.Divide_km -
        SideOccupy_Fcn_B.Gain_n;

      /* Switch: '<S104>/Switch' incorporates:
       *  Constant: '<S104>/Constant'
       */
      if (SideOccupy_Fcn_B.Subtract_cn >= SideOccupy_Fcn_P.Switch_Threshold) {
        /* Gain: '<S114>/Gain' */
        SideOccupy_Fcn_B.Gain_id = SideOccupy_Fcn_P.Gain_Gain_n *
          SideOccupy_Fcn_B.Add_k;

        /* Sqrt: '<S114>/Sqrt' */
        SideOccupy_Fcn_B.Sqrt_da = sqrt(SideOccupy_Fcn_B.Subtract_cn);

        /* Sum: '<S114>/Add' */
        SideOccupy_Fcn_B.Add_f = SideOccupy_Fcn_B.Sqrt_da - SideOccupy_Fcn_B.c1;

        /* Product: '<S114>/Divide' */
        SideOccupy_Fcn_B.Divide_ev = SideOccupy_Fcn_B.Add_f /
          SideOccupy_Fcn_B.Gain_id;

        /* Gain: '<S113>/Gain' */
        SideOccupy_Fcn_B.Gain_c3 = SideOccupy_Fcn_P.Gain_Gain_j *
          SideOccupy_Fcn_B.Add_k;

        /* Sqrt: '<S113>/Sqrt' */
        SideOccupy_Fcn_B.Sqrt_i = sqrt(SideOccupy_Fcn_B.Subtract_cn);

        /* Sum: '<S113>/Add' */
        SideOccupy_Fcn_B.Add_l = (0.0 - SideOccupy_Fcn_B.c1) -
          SideOccupy_Fcn_B.Sqrt_i;

        /* Product: '<S113>/Divide' */
        SideOccupy_Fcn_B.Divide_nm = SideOccupy_Fcn_B.Add_l /
          SideOccupy_Fcn_B.Gain_c3;

        /* MinMax: '<S104>/MinMax' */
        u0 = SideOccupy_Fcn_B.Divide_nm;
        u1 = SideOccupy_Fcn_B.Divide_ev;
        if ((u0 >= u1) || rtIsNaN(u1)) {
          u1 = u0;
        }

        SideOccupy_Fcn_B.MinMax_h = u1;

        /* End of MinMax: '<S104>/MinMax' */
        SideOccupy_Fcn_B.Switch_d = SideOccupy_Fcn_B.MinMax_h;
      } else {
        SideOccupy_Fcn_B.Switch_d = SideOccupy_Fcn_P.Constant_Value_e;
      }

      /* End of Switch: '<S104>/Switch' */

      /* RelationalOperator: '<S99>/Compare' incorporates:
       *  Constant: '<S99>/Constant'
       */
      SideOccupy_Fcn_B.Compare_g = (SideOccupy_Fcn_B.Switch_d >
        SideOccupy_Fcn_P.CompareToConstant_const_o);

      /* Abs: '<S111>/Abs' */
      SideOccupy_Fcn_B.Abs_g = fabs(SideOccupy_Fcn_B.Switch_k);

      /* RelationalOperator: '<S112>/Compare' incorporates:
       *  Constant: '<S112>/Constant'
       */
      SideOccupy_Fcn_B.Compare_bz = (SideOccupy_Fcn_B.Abs_g <=
        SideOccupy_Fcn_P.CompareToConstant_const_e);

      /* Switch: '<S111>/Switch' incorporates:
       *  Constant: '<S111>/Constant'
       */
      if (SideOccupy_Fcn_B.Compare_bz) {
        SideOccupy_Fcn_B.Switch_g = SideOccupy_Fcn_P.Constant_Value_n;
      } else {
        SideOccupy_Fcn_B.Switch_g = SideOccupy_Fcn_B.Switch_k;
      }

      /* End of Switch: '<S111>/Switch' */

      /* Gain: '<S103>/Gain' */
      SideOccupy_Fcn_B.Gain_j2 = SideOccupy_Fcn_P.Gain_Gain_f *
        SideOccupy_Fcn_B.Switch_g;

      /* Product: '<S103>/Divide' */
      SideOccupy_Fcn_B.Divide_ab = 1.0 / SideOccupy_Fcn_B.Gain_j2 *
        SideOccupy_Fcn_B.x_e * SideOccupy_Fcn_B.x_e;

      /* Switch: '<S38>/Switch' */
      if (SideOccupy_Fcn_B.Compare_g) {
        /* Sum: '<S38>/Subtract' */
        SideOccupy_Fcn_B.Subtract_mc = SideOccupy_Fcn_B.x_e -
          SideOccupy_Fcn_B.Switch_d;

        /* Switch: '<S38>/Switch1' */
        if (SideOccupy_Fcn_B.Subtract_mc > SideOccupy_Fcn_P.Switch1_Threshold) {
          /* Product: '<S102>/Product1' */
          SideOccupy_Fcn_B.Product1_a = SideOccupy_Fcn_B.c2 *
            SideOccupy_Fcn_B.x_e * SideOccupy_Fcn_B.x_e;

          /* Product: '<S102>/Product' */
          SideOccupy_Fcn_B.Product_h = SideOccupy_Fcn_B.c1 *
            SideOccupy_Fcn_B.x_e;

          /* Gain: '<S102>/Gain' incorporates:
           *  Constant: '<S98>/Constant'
           */
          SideOccupy_Fcn_B.Gain_h = SideOccupy_Fcn_P.Gain_Gain_i *
            SideOccupy_Fcn_P.Constant_Value_i;

          /* Sum: '<S102>/Subtract' */
          SideOccupy_Fcn_B.Subtract_h = ((SideOccupy_Fcn_B.Gain_h -
            SideOccupy_Fcn_B.c0) - SideOccupy_Fcn_B.Product_h) -
            SideOccupy_Fcn_B.Product1_a;
          SideOccupy_Fcn_B.Switch1_i = SideOccupy_Fcn_B.Subtract_h;
        } else {
          SideOccupy_Fcn_B.Switch1_i = SideOccupy_Fcn_B.Divide_ab;
        }

        /* End of Switch: '<S38>/Switch1' */
        SideOccupy_Fcn_B.Switch_a = SideOccupy_Fcn_B.Switch1_i;
      } else {
        /* Abs: '<S38>/Abs' */
        SideOccupy_Fcn_B.Abs_i = fabs(SideOccupy_Fcn_B.c1);

        /* RelationalOperator: '<S100>/Compare' incorporates:
         *  Constant: '<S100>/Constant'
         */
        SideOccupy_Fcn_B.Compare_k = (SideOccupy_Fcn_B.Abs_i >=
          SideOccupy_Fcn_P.CompareToConstant1_const);

        /* Switch: '<S38>/Switch2' */
        if (SideOccupy_Fcn_B.Compare_k) {
          SideOccupy_Fcn_B.Switch2_f = SideOccupy_Fcn_B.Divide_ab;
        } else {
          /* Product: '<S101>/Product1' */
          SideOccupy_Fcn_B.Product1_pb = SideOccupy_Fcn_B.c2 *
            SideOccupy_Fcn_B.x_e * SideOccupy_Fcn_B.x_e;

          /* Product: '<S101>/Product' */
          SideOccupy_Fcn_B.Product_m1 = SideOccupy_Fcn_B.c1 *
            SideOccupy_Fcn_B.x_e;

          /* Sum: '<S101>/Subtract' */
          SideOccupy_Fcn_B.Subtract_ef = (0.0 - SideOccupy_Fcn_B.Product_m1) -
            SideOccupy_Fcn_B.Product1_pb;
          SideOccupy_Fcn_B.Switch2_f = SideOccupy_Fcn_B.Subtract_ef;
        }

        /* End of Switch: '<S38>/Switch2' */
        SideOccupy_Fcn_B.Switch_a = SideOccupy_Fcn_B.Switch2_f;
      }

      /* End of Switch: '<S38>/Switch' */
      /* End of Outputs for SubSystem: '<S26>/Judge_Main.PredictPthAcLtLn' */
      if ((SideOccupy_Fcn_B.Switch_a - SideOccupy_Fcn_B.NE[381 + (int32_T)
           SideOccupy_Fcn_DW.k] < SideOccupy_Fcn_CurrentLateralDist_Th) &&
          (SideOccupy_Fcn_B.Switch_a - SideOccupy_Fcn_B.NE[381 + (int32_T)
           SideOccupy_Fcn_DW.k] > -3.0)) {
        /* Transition: '<S26>:1085' */
        /* Judge weather the object current close to path */
        if ((SideOccupy_Fcn_B.Switch_a - (SideOccupy_Fcn_B.NE[508 + (int32_T)
              SideOccupy_Fcn_DW.k] * TTC_Obj + SideOccupy_Fcn_B.NE[381 +
              (int32_T)SideOccupy_Fcn_DW.k]) <
             SideOccupy_Fcn_PredictLateralDist_Th) && (SideOccupy_Fcn_B.Switch_a
             - (SideOccupy_Fcn_B.NE[508 + (int32_T)SideOccupy_Fcn_DW.k] *
                TTC_Obj + SideOccupy_Fcn_B.NE[381 + (int32_T)SideOccupy_Fcn_DW.k])
             > -1.0)) {
          /* Transition: '<S26>:1086' */
          /* Judge after TTC, weather this target close to path */
          if (TTC_Obj < SideOccupy_Fcn_DW.TTC_Min) {
            /* Transition: '<S26>:1087' */
            /* Transition: '<S26>:1091' */
            SideOccupy_Fcn_B.CIPO_ID = SideOccupy_Fcn_B.NE[(int32_T)
              SideOccupy_Fcn_DW.k];
            SideOccupy_Fcn_DW.TTC_Min = TTC_Obj;

            /* Transition: '<S26>:1095' */
          } else {
            /* Transition: '<S26>:1090' */
          }

          /* Transition: '<S26>:1094' */
        } else {
          /* Transition: '<S26>:1089' */
        }

        /* Transition: '<S26>:1093' */
      } else {
        /* Transition: '<S26>:1088' */
      }

      /* Transition: '<S26>:1092' */
    } else {
      /* Transition: '<S26>:1083' */
    }

    /* Transition: '<S26>:1079' */
    SideOccupy_Fcn_DW.k++;
  }

  /* Transition: '<S26>:1080' */
  SideOccupy_Fcn_DW.k = 0.0;
}

/* Model step function */
void SideOccupy_Fcn_step(void)
{
  real_T tmp[127];
  real_T tmp_0[6];
  int32_T i;
  int32_T i_0;
  real_T u0;
  real_T u1;
  real_T u2;

  for (i = 0; i < 3302; i++) {
    /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/Global_FusObj'
     */ 
    SideOccupy_Fcn_B.DataTypeConversion[i] = Get_Global_FusObj( i );
   
    /* Gain: '<S3>/N->E' */
    SideOccupy_Fcn_B.NE[i] = SideOccupy_Fcn_P.NE_Gain_n *
      SideOccupy_Fcn_B.DataTypeConversion[i];
  }


  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Global_FusObj_Num'
   */
  SideOccupy_Fcn_B.DataTypeConversion_d = (real_T)Get_Global_FusObj_Num();

  /* Gain: '<S4>/N->E' */
  SideOccupy_Fcn_B.NE_k = SideOccupy_Fcn_P.NE_Gain_ee *
    SideOccupy_Fcn_B.DataTypeConversion_d;

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Ego_Lane'
   */
  SideOccupy_Fcn_B.DataTypeConversion_n = (real_T)Get_Ego_Lane_Position();

  /* Gain: '<S2>/N->E' */
  SideOccupy_Fcn_B.NE_k5 = SideOccupy_Fcn_P.NE_Gain_nl *
    SideOccupy_Fcn_B.DataTypeConversion_n;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/VehSpd'
   */
  SideOccupy_Fcn_B.DataTypeConversion_e = (real_T)Get_VehSpdAvgDrvn();

  /* Gain: '<S18>/N->kph' */
  SideOccupy_Fcn_B.Nkph = SideOccupy_Fcn_P.Nkph_Gain *
    SideOccupy_Fcn_B.DataTypeConversion_e;

  /* Gain: '<S18>/kph->mps' */
  SideOccupy_Fcn_B.kphmps = SideOccupy_Fcn_P.kphmps_Gain * SideOccupy_Fcn_B.Nkph;

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
   */
  SideOccupy_Fcn_B.Compare = (uint8_T)(SideOccupy_Fcn_B.kphmps <
    SideOccupy_Fcn_P.CompareToConstant_const_bt);

  /* MultiPortSwitch: '<S1>/Multiport Switch' */
  if (SideOccupy_Fcn_B.Compare == 0) {
    /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/YawRate'
     */
    SideOccupy_Fcn_B.DataTypeConversion_ks = (real_T)Get_VehDynYawRate();

    /* Gain: '<S19>/N->E' */
    SideOccupy_Fcn_B.NE_hx = SideOccupy_Fcn_P.NE_Gain_e *
      SideOccupy_Fcn_B.DataTypeConversion_ks;

    /* Gain: '<S19>/degps->radps' */
    SideOccupy_Fcn_B.degpsradps = SideOccupy_Fcn_P.degpsradps_Gain *
      SideOccupy_Fcn_B.NE_hx;

    /* Product: '<S1>/Divide2' */
    SideOccupy_Fcn_B.Divide2 = 1.0 / SideOccupy_Fcn_B.kphmps *
      SideOccupy_Fcn_B.degpsradps;
    SideOccupy_Fcn_B.VehiclePathCurvature1m = SideOccupy_Fcn_B.Divide2;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/StrWhAng'
     */
    SideOccupy_Fcn_B.DataTypeConversion_pd = (real_T)Get_StrWhAng();

    /* Gain: '<S17>/N->E' */
    SideOccupy_Fcn_B.NE_i3 = SideOccupy_Fcn_P.NE_Gain *
      SideOccupy_Fcn_B.DataTypeConversion_pd;

    /* Gain: '<S17>/deg->rad' */
    SideOccupy_Fcn_B.degrad = SideOccupy_Fcn_P.degrad_Gain *
      SideOccupy_Fcn_B.NE_i3;

    /* Trigonometry: '<S1>/Trigonometric Function' */
    SideOccupy_Fcn_B.TrigonometricFunction_d = sin(SideOccupy_Fcn_B.degrad);

    /* Product: '<S1>/Divide1' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    SideOccupy_Fcn_B.Divide1_l = SideOccupy_Fcn_B.TrigonometricFunction_d /
      SideOccupy_Fcn_P.Constant1_Value;
    SideOccupy_Fcn_B.VehiclePathCurvature1m = SideOccupy_Fcn_B.Divide1_l;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch' */

  /* Product: '<S1>/Divide' incorporates:
   *  Constant: '<S1>/Constant'
   */
  SideOccupy_Fcn_B.Divide = SideOccupy_Fcn_P.Constant_Value_nr /
    SideOccupy_Fcn_B.VehiclePathCurvature1m;

  /* Saturate: '<S1>/Saturation2' */
  u0 = SideOccupy_Fcn_B.Divide;
  u1 = SideOccupy_Fcn_P.Saturation2_LowerSat;
  u2 = SideOccupy_Fcn_P.Saturation2_UpperSat;
  if (u0 > u2) {
    SideOccupy_Fcn_B.Saturation2 = u2;
  } else if (u0 < u1) {
    SideOccupy_Fcn_B.Saturation2 = u1;
  } else {
    SideOccupy_Fcn_B.Saturation2 = u0;
  }

  /* End of Saturate: '<S1>/Saturation2' */

  /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Left_Lane_A_Lane_Lane_Model_C0'
   */
  SideOccupy_Fcn_B.DataTypeConversion_nd = (real_T)
    Get_Fus_Left_Lane_A_Lane_Lane_Model_C0();

  /* Gain: '<S5>/N->E' */
  SideOccupy_Fcn_B.NE_o = SideOccupy_Fcn_P.NE_Gain_f *
    SideOccupy_Fcn_B.DataTypeConversion_nd;

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Left_Lane_B_Lane_Model_C1'
   */
  SideOccupy_Fcn_B.DataTypeConversion_dc = (real_T)
    Get_Fus_Left_Lane_B_Lane_Model_C1();

  /* Gain: '<S6>/N->E' */
  SideOccupy_Fcn_B.NE_e = SideOccupy_Fcn_P.NE_Gain_j *
    SideOccupy_Fcn_B.DataTypeConversion_dc;

  /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Left_Lane_A_Lane_Lane_Model_C2'
   */
  SideOccupy_Fcn_B.DataTypeConversion_k = (real_T)
    Get_Fus_Left_Lane_A_Lane_Lane_Model_C2();

  /* Gain: '<S7>/N->E' */
  SideOccupy_Fcn_B.NE_a = SideOccupy_Fcn_P.NE_Gain_g *
    SideOccupy_Fcn_B.DataTypeConversion_k;

  /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Left_Lane_A_Lane_Lane_Model_C3'
   */
  SideOccupy_Fcn_B.DataTypeConversion_p = (real_T)
    Get_Fus_Left_Lane_A_Lane_Lane_Model_C3();

  /* Gain: '<S8>/N->E' */
  SideOccupy_Fcn_B.NE_i = SideOccupy_Fcn_P.NE_Gain_a *
    SideOccupy_Fcn_B.DataTypeConversion_p;

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Left_Lane_A_Lane_Quality'
   */
  SideOccupy_Fcn_B.DataTypeConversion_kl = (real_T)
    Get_Fus_Left_Lane_A_Lane_Quality();

  /* Gain: '<S9>/N->E' */
  SideOccupy_Fcn_B.NE_c = SideOccupy_Fcn_P.NE_Gain_i *
    SideOccupy_Fcn_B.DataTypeConversion_kl;

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Rt_Lane_A_Lane_Lane_Model_C0'
   */
  SideOccupy_Fcn_B.DataTypeConversion_b = (real_T)
    Get_Fus_Rt_Lane_A_Lane_Lane_Model_C0();

  /* Gain: '<S10>/N->E' */
  SideOccupy_Fcn_B.NE_h = SideOccupy_Fcn_P.NE_Gain_p *
    SideOccupy_Fcn_B.DataTypeConversion_b;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Rt_Lane_B_Lane_Model_C1'
   */
  SideOccupy_Fcn_B.DataTypeConversion_o = (real_T)
    Get_Fus_Rt_Lane_B_Lane_Model_C1();

  /* Gain: '<S11>/N->E' */
  SideOccupy_Fcn_B.NE_ac = SideOccupy_Fcn_P.NE_Gain_ah *
    SideOccupy_Fcn_B.DataTypeConversion_o;

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Rt_Lane_A_Lane_Lane_Model_C2'
   */
  SideOccupy_Fcn_B.DataTypeConversion_l = (real_T)
    Get_Fus_Rt_Lane_A_Lane_Lane_Model_C2();

  /* Gain: '<S12>/N->E' */
  SideOccupy_Fcn_B.NE_n = SideOccupy_Fcn_P.NE_Gain_pv *
    SideOccupy_Fcn_B.DataTypeConversion_l;

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Rt_Lane_A_Lane_Lane_Model_C3'
   */
  SideOccupy_Fcn_B.DataTypeConversion_nf = (real_T)
    Get_Fus_Rt_Lane_A_Lane_Lane_Model_C3();

  /* Gain: '<S13>/N->E' */
  SideOccupy_Fcn_B.NE_kq = SideOccupy_Fcn_P.NE_Gain_if *
    SideOccupy_Fcn_B.DataTypeConversion_nf;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LKA_Rt_Lane_A_Lane_Quality'
   */
  SideOccupy_Fcn_B.DataTypeConversion_a = (real_T)Get_Fus_Rt_Lane_A_Lane_Quality
    ();

  /* Gain: '<S14>/N->E' */
  SideOccupy_Fcn_B.NE_m = SideOccupy_Fcn_P.NE_Gain_h *
    SideOccupy_Fcn_B.DataTypeConversion_a;

  /* Chart: '<Root>/Side_Occ_Judge_Module' */
  /* Gateway: Side_Occ_Judge_Module */
  /* During: Side_Occ_Judge_Module */
  if (SideOccupy_Fcn_DW.is_active_c127_SideOccupy_Fcn == 0U) {
    /* Entry: Side_Occ_Judge_Module */
    SideOccupy_Fcn_DW.is_active_c127_SideOccupy_Fcn = 1U;

    /* Entry Internal: Side_Occ_Judge_Module */
    SideOccupy_Fcn_DW.is_active_StatusJudge = 1U;

    /* Entry Internal 'StatusJudge': '<S26>:345' */
    SideOccupy_Fcn_DW.is_StatusJudge = SideOccupy_Fcn_IN_StepOne;
    SideOccupy_Fcn_DW.is_active_Judge_Main = 1U;

    /* Entry 'Judge_Main': '<S26>:394' */
    /* Entry Internal 'Judge_Main': '<S26>:394' */
    SideOccupy_Fcn_DW.is_Judge_Main = SideOccupy_Fcn_IN_StepTwo;
  } else {
    /* During 'StatusJudge': '<S26>:345' */
    /* During 'StepOne': '<S26>:314' */
    /* Transition: '<S26>:316' */
    if (SideOccupy_Fcn_B.NE_k5 == 2.0) {
      /* Transition: '<S26>:318' */
      /* Outer Lane */
      /* Transition: '<S26>:320' */
      if (SideOccupy_Fcn_B.NE_c >= 3.0) {
        /* Transition: '<S26>:322' */
        /* Transition: '<S26>:324' */
        i = 1;

        /* Means that the left lane is available
           and judge position according lane */
        /* Transition: '<S26>:337' */
      } else {
        /* Transition: '<S26>:326' */
        i = 3;

        /* Means that the left lane is unavailable
           Position judge according moving */
      }

      /* Transition: '<S26>:338' */
      /* Transition: '<S26>:339' */
      /* Transition: '<S26>:342' */
    } else {
      /* Transition: '<S26>:328' */
      if (SideOccupy_Fcn_B.NE_k5 == 1.0) {
        /* Transition: '<S26>:330' */
        /* Inner Lane */
        if (SideOccupy_Fcn_B.NE_m >= 3.0) {
          /* Transition: '<S26>:332' */
          /* Transition: '<S26>:334' */
          i = 2;

          /* Means that the right lane is available
             and judge position according lane */
          /* Transition: '<S26>:339' */
          /* Transition: '<S26>:342' */
        } else {
          /* Transition: '<S26>:336' */
          i = 4;

          /* Means that the left lane is unavailable
             Position judge according moving */
          /* Transition: '<S26>:342' */
        }
      } else {
        /* Transition: '<S26>:341' */
        i = 5;
      }
    }

    /* Transition: '<S26>:344' */
    /* Entry Internal 'StatusJudge': '<S26>:345' */
    SideOccupy_Fcn_DW.is_StatusJudge = SideOccupy_Fcn_IN_StepOne;

    /* During 'Judge_Main': '<S26>:394' */
    /* During 'StepTwo': '<S26>:346' */
    /* Transition: '<S26>:348' */
    SideOccupy_Fcn_DataIni();
    if (i == 1) {
      /* Transition: '<S26>:350' */
      /* Judge Flag By Left Lane */
      /* Transition: '<S26>:360' */
      SideOccupy_Fcn_Outer_SdOccJudAccordLtLane();

      /* Transition: '<S26>:370' */
      /* Transition: '<S26>:369' */
      /* Transition: '<S26>:415' */
      /* Transition: '<S26>:418' */
    } else {
      /* Transition: '<S26>:362' */
      if (i == 2) {
        /* Transition: '<S26>:364' */
        /* Judge Flag By Right Lane */
        /* Transition: '<S26>:366' */
        SideOccupy_Fcn_Inner_SdOccJudAccordRtLane();

        /* Transition: '<S26>:369' */
        /* Transition: '<S26>:415' */
        /* Transition: '<S26>:418' */
      } else {
        /* Transition: '<S26>:368' */
        if (i == 3) {
          /* Transition: '<S26>:399' */
          /* Outer Lane judge by Moving */
          /* Transition: '<S26>:401' */
          SideOccupy_Fcn_Outer_SdOccJudAccordMov();

          /* Transition: '<S26>:415' */
          /* Transition: '<S26>:418' */
        } else {
          /* Transition: '<S26>:403' */
          if (i == 4) {
            /* Transition: '<S26>:405' */
            /* Inner Lane judge by Moving */
            /* Transition: '<S26>:414' */
            SideOccupy_Fcn_Inner_SdOccJudAccordMov();

            /* Transition: '<S26>:418' */
          } else {
            /* Transition: '<S26>:417' */
            SideOccupy_Fcn_B.LtFrtSd_OccFlg = 0.0;
            SideOccupy_Fcn_B.LtRrSd_OccFlg = 0.0;
            SideOccupy_Fcn_B.RtFrtSd_OccFlg = 0.0;
            SideOccupy_Fcn_B.RtRrSd_OccFlg = 0.0;
            SideOccupy_Fcn_B.Num_Out_Select = SideOccupy_Fcn_B.NE_k;
            memcpy(&SideOccupy_Fcn_B.FusObj_Select[0], &SideOccupy_Fcn_B.NE[0],
                   3302U * sizeof(real_T));
          }
        }
      }
    }

    /* Transition: '<S26>:1048' */
    if ((i == 1) || (i == 2)) {
      /* Transition: '<S26>:1050' */
      if (i == 1) {
        /* Transition: '<S26>:1055' */
        /* Transition: '<S26>:1060' */
        SideOccupy_Fcn_TS_Outer_WtLtLn();

        /* Transition: '<S26>:1061' */
      } else {
        /* Transition: '<S26>:1057' */
        SideOccupy_Fcn_TS_Inner_WtRtLn();
      }

      /* Transition: '<S26>:1058' */
    } else {
      /* Transition: '<S26>:1052' */
      SideOccupy_Fcn_TS_NoLocation();
    }

    /* Transition: '<S26>:1053' */
    /* Transition: '<S26>:419' */
    /* Entry Internal 'Judge_Main': '<S26>:394' */
    SideOccupy_Fcn_DW.is_Judge_Main = SideOccupy_Fcn_IN_StepTwo;
  }

  /* End of Chart: '<Root>/Side_Occ_Judge_Module' */

  /* Gain: '<S16>/E->N' */
  SideOccupy_Fcn_B.EN[0] = SideOccupy_Fcn_P.EN_Gain *
    SideOccupy_Fcn_B.LtFrtSd_OccFlg;
  SideOccupy_Fcn_B.EN[1] = SideOccupy_Fcn_P.EN_Gain *
    SideOccupy_Fcn_B.LtRrSd_OccFlg;
  SideOccupy_Fcn_B.EN[2] = SideOccupy_Fcn_P.EN_Gain *
    SideOccupy_Fcn_B.RtFrtSd_OccFlg;
  SideOccupy_Fcn_B.EN[3] = SideOccupy_Fcn_P.EN_Gain *
    SideOccupy_Fcn_B.RtRrSd_OccFlg;

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  Set_Side_Occ_Flg( 0 , SideOccupy_Fcn_B.EN[0]);
  Set_Side_Occ_Flg( 1 , SideOccupy_Fcn_B.EN[1]);
  Set_Side_Occ_Flg( 2 , SideOccupy_Fcn_B.EN[2]);
  Set_Side_Occ_Flg( 3 , SideOccupy_Fcn_B.EN[3]);

  /* Math: '<S20>/Math Function6' incorporates:
   *  Constant: '<S20>/Constant4'
   */
  for (i = 0; i < 6; i++) {
    SideOccupy_Fcn_B.MathFunction6[i] = SideOccupy_Fcn_P.Constant4_Value[i];
  }

  /* End of Math: '<S20>/Math Function6' */

  /* Product: '<S20>/Divide' */
  memcpy(&tmp[0], &SideOccupy_Fcn_B.LtFrtSd_OccIndex[0], 127U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    tmp_0[i] = SideOccupy_Fcn_B.MathFunction6[i];
  }

  for (i = 0; i < 127; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      SideOccupy_Fcn_B.Divide_i[i + 127 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<S20>/Divide' */

  /* Math: '<S21>/Math Function6' incorporates:
   *  Constant: '<S21>/Constant4'
   */
  for (i = 0; i < 6; i++) {
    SideOccupy_Fcn_B.MathFunction6_e[i] = SideOccupy_Fcn_P.Constant4_Value_i[i];
  }

  /* End of Math: '<S21>/Math Function6' */

  /* Product: '<S21>/Divide' */
  memcpy(&tmp[0], &SideOccupy_Fcn_B.LtRrSd_OccIndex[0], 127U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    tmp_0[i] = SideOccupy_Fcn_B.MathFunction6_e[i];
  }

  for (i = 0; i < 127; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      SideOccupy_Fcn_B.Divide_k[i + 127 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<S21>/Divide' */

  /* Math: '<S22>/Math Function6' incorporates:
   *  Constant: '<S22>/Constant4'
   */
  for (i = 0; i < 6; i++) {
    SideOccupy_Fcn_B.MathFunction6_o[i] = SideOccupy_Fcn_P.Constant4_Value_g[i];
  }

  /* End of Math: '<S22>/Math Function6' */

  /* Product: '<S22>/Divide' */
  memcpy(&tmp[0], &SideOccupy_Fcn_B.RtFrtSd_OccIndex[0], 127U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    tmp_0[i] = SideOccupy_Fcn_B.MathFunction6_o[i];
  }

  for (i = 0; i < 127; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      SideOccupy_Fcn_B.Divide_d[i + 127 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<S22>/Divide' */

  /* Math: '<S23>/Math Function6' incorporates:
   *  Constant: '<S23>/Constant4'
   */
  for (i = 0; i < 6; i++) {
    SideOccupy_Fcn_B.MathFunction6_b[i] = SideOccupy_Fcn_P.Constant4_Value_d[i];
  }

  /* End of Math: '<S23>/Math Function6' */

  /* Product: '<S23>/Divide' */
  memcpy(&tmp[0], &SideOccupy_Fcn_B.RtRrSd_OccIndex[0], 127U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    tmp_0[i] = SideOccupy_Fcn_B.MathFunction6_b[i];
  }

  for (i = 0; i < 127; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      SideOccupy_Fcn_B.Divide_h[i + 127 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<S23>/Divide' */

  /* Math: '<S24>/Math Function6' incorporates:
   *  Constant: '<S24>/Constant4'
   */
  for (i = 0; i < 6; i++) {
    SideOccupy_Fcn_B.MathFunction6_c[i] = SideOccupy_Fcn_P.Constant4_Value_o[i];
  }

  /* End of Math: '<S24>/Math Function6' */

  /* Product: '<S24>/Divide' */
  memcpy(&tmp[0], &SideOccupy_Fcn_B.FrtCent_OccIndex[0], 127U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    tmp_0[i] = SideOccupy_Fcn_B.MathFunction6_c[i];
  }

  for (i = 0; i < 127; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      SideOccupy_Fcn_B.Divide_o[i + 127 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<S24>/Divide' */

  /* Math: '<S25>/Math Function6' incorporates:
   *  Constant: '<S25>/Constant4'
   */
  for (i = 0; i < 6; i++) {
    SideOccupy_Fcn_B.MathFunction6_i[i] = SideOccupy_Fcn_P.Constant4_Value_b[i];
  }

  /* End of Math: '<S25>/Math Function6' */

  /* Product: '<S25>/Divide' */
  memcpy(&tmp[0], &SideOccupy_Fcn_B.RrCent_OccIndex[0], 127U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    tmp_0[i] = SideOccupy_Fcn_B.MathFunction6_i[i];
  }

  for (i = 0; i < 127; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      SideOccupy_Fcn_B.Divide_iq[i + 127 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<S25>/Divide' */

  /* Sum: '<Root>/Add' */
  for (i = 0; i < 762; i++) {
    SideOccupy_Fcn_B.Add[i] = ((((SideOccupy_Fcn_B.Divide_i[i] +
      SideOccupy_Fcn_B.Divide_k[i]) + SideOccupy_Fcn_B.Divide_d[i]) +
      SideOccupy_Fcn_B.Divide_h[i]) + SideOccupy_Fcn_B.Divide_o[i]) +
      SideOccupy_Fcn_B.Divide_iq[i];
  }

  /* End of Sum: '<Root>/Add' */

  /* Math: '<Root>/Math Function6' */
  for (i = 0; i < 127; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      SideOccupy_Fcn_B.MathFunction6_in[i_0 + 6 * i] = SideOccupy_Fcn_B.Add[127 *
        i_0 + i];
    }
  }
  for (i = 0; i < 762; i++) {
    /* Gain: '<S15>/E->N' */
    SideOccupy_Fcn_B.EN_f[i] = SideOccupy_Fcn_P.EN_Gain_i *
      SideOccupy_Fcn_B.MathFunction6_in[i];

    /* DataTypeConversion: '<S15>/Data Type Conversion' */
  
    	Set_Side_Index( i , SideOccupy_Fcn_B.EN_f[i]);
    	
  }

				     
  /* End of Math: '<Root>/Math Function6' */
}

/* Model initialize function */
void SideOccupy_Fcn_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(SideOccupy_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &SideOccupy_Fcn_B), 0,
                sizeof(B_SideOccupy_Fcn_T));

  /* states (dwork) */
  (void) memset((void *)&SideOccupy_Fcn_DW, 0,
                sizeof(DW_SideOccupy_Fcn_T));

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.InterestObjDet_WithLane'
   */
  SideOccupy_Fcn_Judge_MainInterestObjDet_WithLane_Start
    (&SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithLane,
     (P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *)
     &SideOccupy_Fcn_P.Judge_MainInterestObjDet_WithLane);

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.InterestObjDet_WithoutLane'
   */
  SideOccupy_Fcn_Judge_MainInterestObjDet_WithoutLane_Start
    (&SideOccupy_Fcn_B.Judge_MainInterestObjDet_WithoutLane,
     (P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *)
     &SideOccupy_Fcn_P.Judge_MainInterestObjDet_WithoutLane);

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.TTC_Cal'
   */
  SideOccupy_Fcn_Judge_MainTTC_Cal_Start(&SideOccupy_Fcn_B.Judge_MainTTC_Cal,
    (P_Judge_MainTTC_Cal_SideOccupy_Fcn_T *)&SideOccupy_Fcn_P.Judge_MainTTC_Cal);

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.PredictPthAcMov'
   */
  /* VirtualOutportStart for Outport: '<S39>/y' */
  SideOccupy_Fcn_B.Divide_aa = SideOccupy_Fcn_P.y_Y0;

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.PredictPthAcLtLn'
   */
  /* VirtualOutportStart for Outport: '<S38>/y' */
  SideOccupy_Fcn_B.Switch_a = SideOccupy_Fcn_P.y_Y0_d;

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.PredictPthAcRtLn'
   */
  /* VirtualOutportStart for Outport: '<S40>/y' */
  SideOccupy_Fcn_B.Switch_c = SideOccupy_Fcn_P.y_Y0_f;

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn'
   */
  /* VirtualOutportStart for Outport: '<S34>/InLtSideFlg' */
  SideOccupy_Fcn_B.Add_l0 = SideOccupy_Fcn_P.InLtSideFlg_Y0;

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn'
   */
  SideOccupy_Fcn_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_Start
    (&SideOccupy_Fcn_B.Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn,
     (P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T *)
     &SideOccupy_Fcn_P.Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn);

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn'
   */
  /* VirtualOutportStart for Outport: '<S30>/InRtSideFlg' */
  SideOccupy_Fcn_B.Add_oh = SideOccupy_Fcn_P.InRtSideFlg_Y0;

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn'
   */
  SideOccupy_Fcn_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_Start
    (&SideOccupy_Fcn_B.Judge_MainInner_SdOccJudAccordRtLaneFcn_SelectJdWtRtLn,
     (P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T *)
     &SideOccupy_Fcn_P.Judge_MainInner_SdOccJudAccordRtLaneFcn_SelectJdWtRtLn);

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn'
   */
  /* VirtualOutportStart for Outport: '<S36>/InLtSideFlg' */
  SideOccupy_Fcn_B.Add_m = SideOccupy_Fcn_P.InLtSideFlg_Y0_c;

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn'
   */
  /* VirtualOutportStart for Outport: '<S37>/SelectObjFlg' */
  SideOccupy_Fcn_B.DataTypeConversion_i = SideOccupy_Fcn_P.SelectObjFlg_Y0;

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn'
   */
  /* VirtualOutportStart for Outport: '<S29>/InRtSideFlg' */
  SideOccupy_Fcn_B.Add_o = SideOccupy_Fcn_P.InRtSideFlg_Y0_f;

  /* Start for Chart: '<Root>/Side_Occ_Judge_Module' incorporates:
   *  Start for SubSystem: '<S26>/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn'
   */
  /* VirtualOutportStart for Outport: '<S28>/SelectObjFlg' */
  SideOccupy_Fcn_B.DataTypeConversion_b2 = SideOccupy_Fcn_P.SelectObjFlg_Y0_c;

  {
    int32_T i;

    /* InitializeConditions for Chart: '<Root>/Side_Occ_Judge_Module' */
    SideOccupy_Fcn_DW.is_active_Judge_Main = 0U;
    SideOccupy_Fcn_DW.is_Judge_Main = SideOccupy_Fcn_IN_NO_ACTIVE_CHILD;
    SideOccupy_Fcn_DW.is_active_StatusJudge = 0U;
    SideOccupy_Fcn_DW.is_StatusJudge = SideOccupy_Fcn_IN_NO_ACTIVE_CHILD;
    SideOccupy_Fcn_DW.is_active_c127_SideOccupy_Fcn = 0U;
    SideOccupy_Fcn_DW.k = 0.0;
    SideOccupy_Fcn_DW.m = 0.0;
    SideOccupy_Fcn_DW.TTC_Min = 10.0;
    SideOccupy_Fcn_DW.Num_LF = 0.0;
    SideOccupy_Fcn_DW.Num_LR = 0.0;
    SideOccupy_Fcn_DW.Num_RF = 0.0;
    SideOccupy_Fcn_DW.Num_RR = 0.0;
    SideOccupy_Fcn_DW.Num_F = 0.0;
    SideOccupy_Fcn_DW.Num_R = 0.0;
    SideOccupy_Fcn_B.LtFrtSd_OccFlg = 0.0;
    SideOccupy_Fcn_B.LtRrSd_OccFlg = 0.0;
    SideOccupy_Fcn_B.RtFrtSd_OccFlg = 0.0;
    SideOccupy_Fcn_B.RtRrSd_OccFlg = 0.0;
    SideOccupy_Fcn_B.FrtCent_OccFlg = 0.0;
    SideOccupy_Fcn_B.RrCent_OccFlg = 0.0;
    memset(&SideOccupy_Fcn_B.FusObj_Select[0], 0, 3302U * sizeof(real_T));
    SideOccupy_Fcn_B.Num_Out_Select = 0.0;
    SideOccupy_Fcn_B.CIPO_ID = 0.0;
    for (i = 0; i < 127; i++) {
      SideOccupy_Fcn_B.LtFrtSd_OccIndex[i] = 0.0;
      SideOccupy_Fcn_B.LtRrSd_OccIndex[i] = 0.0;
      SideOccupy_Fcn_B.RtFrtSd_OccIndex[i] = 0.0;
      SideOccupy_Fcn_B.RtRrSd_OccIndex[i] = 0.0;
      SideOccupy_Fcn_B.FrtCent_OccIndex[i] = 0.0;
      SideOccupy_Fcn_B.RrCent_OccIndex[i] = 0.0;
    }

    /* End of InitializeConditions for Chart: '<Root>/Side_Occ_Judge_Module' */
  }
}

/* Model terminate function */
void SideOccupy_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
