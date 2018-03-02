/*
 * File: SRR_Driver_Fcn_20ms.c
 *
 * Code generated for Simulink model 'SRR_Driver_Fcn_20ms'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 19:36:53 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRR_Driver_Fcn_20ms.h"
#include "SRR_Driver_Fcn_20ms_private.h"
#include "interface.h"

/* Block signals (auto storage) */
B_SRR_Driver_Fcn_20ms_T SRR_Driver_Fcn_20ms_B;

/* Block states (auto storage) */
DW_SRR_Driver_Fcn_20ms_T SRR_Driver_Fcn_20ms_DW;

/* Real-time model */
RT_MODEL_SRR_Driver_Fcn_20ms_T SRR_Driver_Fcn_20ms_M_;
RT_MODEL_SRR_Driver_Fcn_20ms_T *const SRR_Driver_Fcn_20ms_M =
  &SRR_Driver_Fcn_20ms_M_;



/**add by wjr*/
static void  Set_Vpath_TrnCtrLngOfstV_306(uint8_T Value)
{
     Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfstV(Value);
     Put_F_Vehicle_Path_Estimate_RR_Vpath_TrnCtrLngOfstV(Value);
     Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfstV(Value);
     Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfstV(Value);
}
static void Set_Vpath_CurvatureV_306(uint8_T Value)
{
      Put_F_Vehicle_Path_Estimate_LR_Vpath_CurvatureV(Value);
     Put_F_Vehicle_Path_Estimate_RR_Vpath_CurvatureV(Value);
     Put_F_Vehicle_Path_Estimate_LF_Vpath_CurvatureV(Value);
     Put_F_Vehicle_Path_Estimate_RF_Vpath_CurvatureV(Value);
}
static void Set_Vpath_RollingCount_306(uint8_T Value)
{
    Put_F_Vehicle_Path_Estimate_LR_Vpath_RollingCount(Value);
     Put_F_Vehicle_Path_Estimate_RR_Vpath_RollingCount(Value);
     Put_F_Vehicle_Path_Estimate_LF_Vpath_RollingCount(Value);
     Put_F_Vehicle_Path_Estimate_RF_Vpath_RollingCount(Value);
}
static void Set_Vpath_TrnCtrLngOfst_306(uint8_T Value)
{
     Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfst(Value);
     Put_F_Vehicle_Path_Estimate_RR_Vpath_TrnCtrLngOfst(Value);
     Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfst(Value);
     Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfst(Value);
}
static void  Set_Vpath_TrnCtrLatOfst_306(uint16 Value)
{
     Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLatOfst(Value);
     Put_F_Vehicle_Path_Estimate_RR_Vpath_TrnCtrLatOfst(Value);
     Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLatOfst(Value);
     Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLatOfst(Value);
}
static void Set_Vpath_Curvature_306(uint16 Value)
{
     Put_F_Vehicle_Path_Estimate_LR_Vpath_Curvature(Value);
     Put_F_Vehicle_Path_Estimate_RR_Vpath_Curvature(Value);
     Put_F_Vehicle_Path_Estimate_LF_Vpath_Curvature(Value);
     Put_F_Vehicle_Path_Estimate_RF_Vpath_Curvature(Value);
}
static void Set_Vpath_Checksum_306(uint16 Value)
{
     Put_F_Vehicle_Path_Estimate_LR_Vpath_Checksum(Value);
     Put_F_Vehicle_Path_Estimate_RR_Vpath_Checksum(Value);
     Put_F_Vehicle_Path_Estimate_LF_Vpath_Checksum(Value);
     Put_F_Vehicle_Path_Estimate_RF_Vpath_Checksum(Value);
}

static void Set_Vpath_Data2TravlDirctn_308(uint8_T Value)
{
    Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2TravlDirctn(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2TravlDirctn(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2TravlDirctn(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2TravlDirctn(Value);
}
static void Set_Vpath_Data2LongVel_308(uint16 Value)
{
     Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVel(Value);
     Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVel(Value);
     Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVel(Value);
     Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2LongVel(Value);
}
static void Set_Vpath_Data2LongVelV_308(uint8_T Value)
{
    Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVelV(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVelV(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVelV(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2LongVelV(Value);
}
static void Set_Vpath_Data2LatVelV_308(uint8_T Value)
{
    Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVelV(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVelV(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVelV(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2LatVelV(Value);;
}
static void Set_Vpath_Data2LatVel_308(uint8_T Value)
{
    Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVel(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVel(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVel(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2LatVel(Value);
}
static void Set_Vpath_Data2YawRate_308(uint16 Value)
{
    Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRate(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRate(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRate(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2YawRate(Value);
}
static void Set_Vpath_Data2YawRateV_308(uint8_T Value)
{

     Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRateV(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRateV(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRateV(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2YawRateV(Value);
}
static void Set_Vpath_Data2ModeInfo_308(uint8_T Value)
{
    Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2ModeInfo(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2ModeInfo(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2ModeInfo(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2ModeInfo(Value);
}
static void Set_Vpath_Data2RollCnt_308(uint8_T Value)
{
   Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2RollCnt(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2RollCnt(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2RollCnt(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath_Data2RollCnt(Value);
}
static void Set_Vpath2_Checksum_308(uint16 Value)
{
    Put_F_Vehicle_Path_Data_2_LR_Vpath2_Checksum(Value);
    Put_F_Vehicle_Path_Data_2_LF_Vpath2_Checksum(Value);
    Put_F_Vehicle_Path_Data_2_RF_Vpath2_Checksum(Value);
    Put_F_Vehicle_Path_Data_2_RR_Vpath2_Checksum(Value);
}

/*end by wjr*/


/*
 * Output and update for atomic system:
 *    '<S32>/Atomic Subsystem'
 *    '<S33>/Atomic Subsystem'
 *    '<S34>/Atomic Subsystem'
 */
void SRR_Driver_Fcn__AtomicSubsystem(real_T rtu_In1,
  B_AtomicSubsystem_SRR_Driver__T *localB, P_AtomicSubsystem_SRR_Driver__T
  *localP)
{
  /* Switch: '<S38>/Switch' incorporates:
   *  Constant: '<S38>/TestData'
   *  Constant: '<S38>/TestFlag[0_test|1_model]'
   */
  if (localP->TestFlag0_test1_model_Value >= localP->Switch_Threshold) {
    localB->Switch = rtu_In1;
  } else {
    localB->Switch = localP->TestData_Value;
  }

  /* End of Switch: '<S38>/Switch' */
}

/* Model step function */
void SRR_Driver_Fcn_20ms_step(void)
{
  int32_T cal_2;
  int32_T cal_3;
  int32_T cal_4;
  real_T tmp[4];
  real_T v1[4];
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  real_T v1_idx_0;
  real_T v1_idx_1;
  int32_T i;
  int32_T tmp_0;
  real_T u0;
  real_T u1;
  real_T u2;

  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/VehSpd'
   */
  SRR_Driver_Fcn_20ms_B.DataTypeConversion = (real_T)Get_VehSpdAvgDrvn();

  /* Gain: '<S4>/N->kph' */
  SRR_Driver_Fcn_20ms_B.Nkph = SRR_Driver_Fcn_20ms_P.Nkph_Gain *
    SRR_Driver_Fcn_20ms_B.DataTypeConversion;

  /* Gain: '<S4>/kph->mps' */
  SRR_Driver_Fcn_20ms_B.kphmps = SRR_Driver_Fcn_20ms_P.kphmps_Gain *
    SRR_Driver_Fcn_20ms_B.Nkph;

  /* Saturate: '<S26>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.kphmps;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.LongVelms = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.LongVelms = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.LongVelms = u0;
  }

  /* End of Saturate: '<S26>/Saturation' */

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/YawRate'
   */
  SRR_Driver_Fcn_20ms_B.DataTypeConversion_d = (real_T)Get_VehDynYawRate();

  /* Gain: '<S22>/N->E' */
  SRR_Driver_Fcn_20ms_B.NE = SRR_Driver_Fcn_20ms_P.NE_Gain *
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_d;

  /* Gain: '<S22>/degps->radps' */
  SRR_Driver_Fcn_20ms_B.degpsradps = SRR_Driver_Fcn_20ms_P.degpsradps_Gain *
    SRR_Driver_Fcn_20ms_B.NE;

  /* Memory: '<S49>/Memory2' */
  SRR_Driver_Fcn_20ms_B.LatVelms = SRR_Driver_Fcn_20ms_DW.Memory2_PreviousInput;

  /* Switch: '<S49>/Switch' incorporates:
   *  Constant: '<S49>/Zero'
   */
  if (SRR_Driver_Fcn_20ms_B.LongVelms > SRR_Driver_Fcn_20ms_P.Switch_Threshold_n)
  {
    SRR_Driver_Fcn_20ms_B.LatVelms_j = SRR_Driver_Fcn_20ms_B.LatVelms;
  } else {
    SRR_Driver_Fcn_20ms_B.LatVelms_j = SRR_Driver_Fcn_20ms_P.Zero_Value;
  }

  /* End of Switch: '<S49>/Switch' */

  /* Product: '<S42>/Divide4' */
  SRR_Driver_Fcn_20ms_B.SlipAngrad = SRR_Driver_Fcn_20ms_B.LatVelms_j /
    SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Outputs for Atomic SubSystem: '<S29>/Atomic Subsystem' */
  /* Switch: '<S35>/Switch' incorporates:
   *  Constant: '<S35>/TestData'
   *  Constant: '<S35>/TestFlag[0_test|1_model]'
   */
  if (SRR_Driver_Fcn_20ms_P.TestFlag0_test1_model_Value >=
      SRR_Driver_Fcn_20ms_P.Switch_Threshold) {
    /* RelationalOperator: '<S64>/Compare' incorporates:
     *  Constant: '<S64>/Constant'
     */
    SRR_Driver_Fcn_20ms_B.Compare_e = (uint8_T)(SRR_Driver_Fcn_20ms_B.LongVelms >
      SRR_Driver_Fcn_20ms_P.CompareToConstant_const);

    /* MultiPortSwitch: '<S43>/Multiport Switch' incorporates:
     *  Constant: '<S43>/Constant'
     */
    if (SRR_Driver_Fcn_20ms_B.Compare_e == 0) {
      SRR_Driver_Fcn_20ms_B.VehiclePathTurnCenterLongitudin =
        SRR_Driver_Fcn_20ms_P.Constant_Value;
    } else {
      /* Trigonometry: '<S43>/Trigonometric Function1' */
      SRR_Driver_Fcn_20ms_B.TrigonometricFunction1 = sin
        (SRR_Driver_Fcn_20ms_B.SlipAngrad);

      /* Gain: '<S43>/Gain1' */
      SRR_Driver_Fcn_20ms_B.Gain1_gs = SRR_Driver_Fcn_20ms_P.Gain1_Gain *
        SRR_Driver_Fcn_20ms_B.TrigonometricFunction1;

      /* Product: '<S65>/Divide1' */
      SRR_Driver_Fcn_20ms_B.R_h = 1.0 / SRR_Driver_Fcn_20ms_B.degpsradps *
        SRR_Driver_Fcn_20ms_B.LongVelms;

      /* Saturate: '<S65>/Saturation1' */
      u0 = SRR_Driver_Fcn_20ms_B.R_h;
      u1 = SRR_Driver_Fcn_20ms_P.Saturation1_LowerSat;
      u2 = SRR_Driver_Fcn_20ms_P.Saturation1_UpperSat;
      if (u0 > u2) {
        SRR_Driver_Fcn_20ms_B.Saturation1_p = u2;
      } else if (u0 < u1) {
        SRR_Driver_Fcn_20ms_B.Saturation1_p = u1;
      } else {
        SRR_Driver_Fcn_20ms_B.Saturation1_p = u0;
      }

      /* End of Saturate: '<S65>/Saturation1' */

      /* Product: '<S43>/Product1' */
      SRR_Driver_Fcn_20ms_B.Product1_l = SRR_Driver_Fcn_20ms_B.Saturation1_p *
        SRR_Driver_Fcn_20ms_B.Gain1_gs;
      SRR_Driver_Fcn_20ms_B.VehiclePathTurnCenterLongitudin =
        SRR_Driver_Fcn_20ms_B.Product1_l;
    }

    /* End of MultiPortSwitch: '<S43>/Multiport Switch' */
    SRR_Driver_Fcn_20ms_B.Switch_i =
      SRR_Driver_Fcn_20ms_B.VehiclePathTurnCenterLongitudin;
  } else {
    SRR_Driver_Fcn_20ms_B.Switch_i = SRR_Driver_Fcn_20ms_P.TestData_Value;
  }

  /* End of Switch: '<S35>/Switch' */
  /* End of Outputs for SubSystem: '<S29>/Atomic Subsystem' */

  /* Saturate: '<S29>/Saturation2' */
  u0 = SRR_Driver_Fcn_20ms_B.Switch_i;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation2_LowerSat_o;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation2_UpperSat_m;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation2 = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation2 = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation2 = u0;
  }

  /* End of Saturate: '<S29>/Saturation2' */

  /* Gain: '<S29>/Gain' */
  SRR_Driver_Fcn_20ms_B.Gain = SRR_Driver_Fcn_20ms_P.Gain_Gain_k *
    SRR_Driver_Fcn_20ms_B.Saturation2;

  /* DataTypeConversion: '<S29>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.Gain);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  SRR_Driver_Fcn_20ms_B.DataTypeConversion_jz = (int8_T)(u0 < 0.0 ? (int32_T)
    (int8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(int8_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S29>/Data Type Conversion' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/StrWhAng'
   */
  SRR_Driver_Fcn_20ms_B.DataTypeConversion_f = (real_T)Get_StrWhAng();

  /* Gain: '<S1>/N->E' */
  SRR_Driver_Fcn_20ms_B.NE_d = SRR_Driver_Fcn_20ms_P.NE_Gain_d *
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_f;

  /* Gain: '<S1>/deg->rad' */
  SRR_Driver_Fcn_20ms_B.degrad = SRR_Driver_Fcn_20ms_P.degrad_Gain *
    SRR_Driver_Fcn_20ms_B.NE_d;

  /* Gain: '<S26>/Gain1' */
  SRR_Driver_Fcn_20ms_B.StrTireAngrad = SRR_Driver_Fcn_20ms_P.Gain1_Gain_i *
    SRR_Driver_Fcn_20ms_B.degrad;

  /* Outputs for Atomic SubSystem: '<S30>/Atomic Subsystem' */
  /* Switch: '<S36>/Switch' incorporates:
   *  Constant: '<S36>/TestData'
   *  Constant: '<S36>/TestFlag[0_test|1_model]'
   */
  if (SRR_Driver_Fcn_20ms_P.TestFlag0_test1_model_Value_g >=
      SRR_Driver_Fcn_20ms_P.Switch_Threshold_k) {
    /* Trigonometry: '<S41>/Trigonometric Function' */
    SRR_Driver_Fcn_20ms_B.TrigonometricFunction_d = cos
      (SRR_Driver_Fcn_20ms_B.SlipAngrad);

    /* Gain: '<S41>/Gain' */
    SRR_Driver_Fcn_20ms_B.Gain_ak = SRR_Driver_Fcn_20ms_P.Gain_Gain *
      SRR_Driver_Fcn_20ms_B.TrigonometricFunction_d;

    /* RelationalOperator: '<S46>/Compare' incorporates:
     *  Constant: '<S46>/Constant'
     */
    SRR_Driver_Fcn_20ms_B.Compare_d = (uint8_T)(SRR_Driver_Fcn_20ms_B.LongVelms >
      SRR_Driver_Fcn_20ms_P.CompareToConstant_const_d);

    /* MultiPortSwitch: '<S41>/Multiport Switch' */
    if (SRR_Driver_Fcn_20ms_B.Compare_d == 0) {
      /* Trigonometry: '<S48>/Trigonometric Function' */
      SRR_Driver_Fcn_20ms_B.TrigonometricFunction_a = sin
        (SRR_Driver_Fcn_20ms_B.StrTireAngrad);

      /* Product: '<S48>/Divide' incorporates:
       *  Constant: '<S48>/Constant'
       */
      SRR_Driver_Fcn_20ms_B.Divide_c = SRR_Driver_Fcn_20ms_P.Constant_Value_d /
        SRR_Driver_Fcn_20ms_B.TrigonometricFunction_a;

      /* Saturate: '<S48>/Saturation2' */
      u0 = SRR_Driver_Fcn_20ms_B.Divide_c;
      u1 = SRR_Driver_Fcn_20ms_P.Saturation2_LowerSat;
      u2 = SRR_Driver_Fcn_20ms_P.Saturation2_UpperSat;
      if (u0 > u2) {
        SRR_Driver_Fcn_20ms_B.Saturation2_p = u2;
      } else if (u0 < u1) {
        SRR_Driver_Fcn_20ms_B.Saturation2_p = u1;
      } else {
        SRR_Driver_Fcn_20ms_B.Saturation2_p = u0;
      }

      /* End of Saturate: '<S48>/Saturation2' */
      SRR_Driver_Fcn_20ms_B.MultiportSwitch =
        SRR_Driver_Fcn_20ms_B.Saturation2_p;
    } else {
      /* Product: '<S47>/Divide1' */
      SRR_Driver_Fcn_20ms_B.R = 1.0 / SRR_Driver_Fcn_20ms_B.degpsradps *
        SRR_Driver_Fcn_20ms_B.LongVelms;

      /* Saturate: '<S47>/Saturation1' */
      u0 = SRR_Driver_Fcn_20ms_B.R;
      u1 = SRR_Driver_Fcn_20ms_P.Saturation1_LowerSat_o;
      u2 = SRR_Driver_Fcn_20ms_P.Saturation1_UpperSat_j;
      if (u0 > u2) {
        SRR_Driver_Fcn_20ms_B.Saturation1 = u2;
      } else if (u0 < u1) {
        SRR_Driver_Fcn_20ms_B.Saturation1 = u1;
      } else {
        SRR_Driver_Fcn_20ms_B.Saturation1 = u0;
      }

      /* End of Saturate: '<S47>/Saturation1' */
      SRR_Driver_Fcn_20ms_B.MultiportSwitch = SRR_Driver_Fcn_20ms_B.Saturation1;
    }

    /* End of MultiPortSwitch: '<S41>/Multiport Switch' */

    /* Product: '<S41>/Product' */
    SRR_Driver_Fcn_20ms_B.VehiclePathTurnCenterLateralOff =
      SRR_Driver_Fcn_20ms_B.MultiportSwitch * SRR_Driver_Fcn_20ms_B.Gain_ak;
    SRR_Driver_Fcn_20ms_B.Switch_n =
      SRR_Driver_Fcn_20ms_B.VehiclePathTurnCenterLateralOff;
  } else {
    SRR_Driver_Fcn_20ms_B.Switch_n = SRR_Driver_Fcn_20ms_P.TestData_Value_n;
  }

  /* End of Switch: '<S36>/Switch' */
  /* End of Outputs for SubSystem: '<S30>/Atomic Subsystem' */

  /* Saturate: '<S30>/Saturation2' */
  u0 = SRR_Driver_Fcn_20ms_B.Switch_n;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation2_LowerSat_n;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation2_UpperSat_n;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation2_i = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation2_i = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation2_i = u0;
  }

  /* End of Saturate: '<S30>/Saturation2' */

  /* Gain: '<S30>/Gain' */
  SRR_Driver_Fcn_20ms_B.Gain_k = SRR_Driver_Fcn_20ms_P.Gain_Gain_f *
    SRR_Driver_Fcn_20ms_B.Saturation2_i;

  /* DataTypeConversion: '<S30>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.Gain_k);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SRR_Driver_Fcn_20ms_B.DataTypeConversion_j = (int16_T)(u0 < 0.0 ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S30>/Data Type Conversion' */

  /* Outputs for Atomic SubSystem: '<S31>/Atomic Subsystem' */
  /* Switch: '<S37>/Switch' incorporates:
   *  Constant: '<S37>/TestData'
   *  Constant: '<S37>/TestFlag[0_test|1_model]'
   */
  if (SRR_Driver_Fcn_20ms_P.TestFlag0_test1_model_Value_o >=
      SRR_Driver_Fcn_20ms_P.Switch_Threshold_l) {
    /* RelationalOperator: '<S63>/Compare' incorporates:
     *  Constant: '<S63>/Constant'
     */
    SRR_Driver_Fcn_20ms_B.Compare_g = (uint8_T)(SRR_Driver_Fcn_20ms_B.LongVelms <
      SRR_Driver_Fcn_20ms_P.CompareToConstant_const_m);

    /* MultiPortSwitch: '<S50>/Multiport Switch' */
    if (SRR_Driver_Fcn_20ms_B.Compare_g == 0) {
      /* Product: '<S50>/Divide1' */
      SRR_Driver_Fcn_20ms_B.Divide1_ks = 1.0 / SRR_Driver_Fcn_20ms_B.LongVelms *
        SRR_Driver_Fcn_20ms_B.degpsradps;
      SRR_Driver_Fcn_20ms_B.VehiclePathCurvature1m =
        SRR_Driver_Fcn_20ms_B.Divide1_ks;
    } else {
      /* Trigonometry: '<S50>/Trigonometric Function' */
      SRR_Driver_Fcn_20ms_B.TrigonometricFunction = sin
        (SRR_Driver_Fcn_20ms_B.StrTireAngrad);

      /* Product: '<S50>/Divide' incorporates:
       *  Constant: '<S50>/Constant'
       */
      SRR_Driver_Fcn_20ms_B.Divide = SRR_Driver_Fcn_20ms_B.TrigonometricFunction
        / SRR_Driver_Fcn_20ms_P.Constant_Value_b;
      SRR_Driver_Fcn_20ms_B.VehiclePathCurvature1m =
        SRR_Driver_Fcn_20ms_B.Divide;
    }

    /* End of MultiPortSwitch: '<S50>/Multiport Switch' */
    SRR_Driver_Fcn_20ms_B.Switch = SRR_Driver_Fcn_20ms_B.VehiclePathCurvature1m;
  } else {
    SRR_Driver_Fcn_20ms_B.Switch = SRR_Driver_Fcn_20ms_P.TestData_Value_b;
  }

  /* End of Switch: '<S37>/Switch' */
  /* End of Outputs for SubSystem: '<S31>/Atomic Subsystem' */

  /* Saturate: '<S31>/Saturation2' */
  u0 = SRR_Driver_Fcn_20ms_B.Switch;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation2_LowerSat_g;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation2_UpperSat_m4;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation2_ix = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation2_ix = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation2_ix = u0;
  }

  /* End of Saturate: '<S31>/Saturation2' */

  /* Gain: '<S31>/Gain' */
  SRR_Driver_Fcn_20ms_B.Gain_g = SRR_Driver_Fcn_20ms_P.Gain_Gain_fw *
    SRR_Driver_Fcn_20ms_B.Saturation2_ix;

  /* DataTypeConversion: '<S31>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.Gain_g);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SRR_Driver_Fcn_20ms_B.DataTypeConversion_l = (int16_T)(u0 < 0.0 ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S31>/Data Type Conversion' */

  /* Chart: '<S24>/306' */
  /* Gateway: SRR_Driver/CANInterface/306 */
  /* During: SRR_Driver/CANInterface/306 */
  /* Entry Internal: SRR_Driver/CANInterface/306 */
  /* Transition: '<S27>:5' */
  SRR_Driver_Fcn_20ms_B.LongoftV = 0.0;
  SRR_Driver_Fcn_20ms_B.CurvatureV = 0.0;
  SRR_Driver_Fcn_20ms_B.Longoffset = (real_T)
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_jz * 0.1;
  SRR_Driver_Fcn_20ms_B.Latoffset = SRR_Driver_Fcn_20ms_B.DataTypeConversion_j;
  SRR_Driver_Fcn_20ms_B.Curvature = (real_T)
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_l * 1.0E-5;
  if (SRR_Driver_Fcn_20ms_B.Rolcnt >= 3.0) {
    /* Transition: '<S27>:71' */
    /* Transition: '<S27>:73' */
    SRR_Driver_Fcn_20ms_B.Rolcnt = 0.0;

    /* Transition: '<S27>:74' */
  } else {
    /* Transition: '<S27>:7' */
    SRR_Driver_Fcn_20ms_B.Rolcnt++;
  }

  /* Transition: '<S27>:27' */
  if (SRR_Driver_Fcn_20ms_B.DataTypeConversion_jz < 0) {
    /* Transition: '<S27>:30' */
    /* Transition: '<S27>:32' */
    cal_2 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_jz + 256;

    /* Transition: '<S27>:34' */
  } else {
    /* Transition: '<S27>:35' */
    cal_2 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_jz;
  }

  /* Transition: '<S27>:37' */
  if (SRR_Driver_Fcn_20ms_B.DataTypeConversion_j < 0) {
    /* Transition: '<S27>:40' */
    /* Transition: '<S27>:42' */
    i = SRR_Driver_Fcn_20ms_B.DataTypeConversion_j + 16384;
    tmp_0 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_j + 16384;
    cal_3 = ((SRR_Driver_Fcn_20ms_B.DataTypeConversion_j - (i / 256 << 8)) +
             tmp_0 / 256) + 16384;

    /* Transition: '<S27>:44' */
  } else {
    /* Transition: '<S27>:45' */
    i = SRR_Driver_Fcn_20ms_B.DataTypeConversion_j;
    tmp_0 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_j;
    cal_3 = (SRR_Driver_Fcn_20ms_B.DataTypeConversion_j - (i / 256 << 8)) +
      tmp_0 / 256;
  }

  /* Transition: '<S27>:47' */
  if (SRR_Driver_Fcn_20ms_B.DataTypeConversion_l < 0) {
    /* Transition: '<S27>:49' */
    /* Transition: '<S27>:51' */
    i = SRR_Driver_Fcn_20ms_B.DataTypeConversion_l + 65536;
    tmp_0 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_l + 65536;
    cal_4 = ((SRR_Driver_Fcn_20ms_B.DataTypeConversion_l - (i / 256 << 8)) +
             tmp_0 / 256) + 65536;

    /* Transition: '<S27>:53' */
  } else {
    /* Transition: '<S27>:54' */
    i = SRR_Driver_Fcn_20ms_B.DataTypeConversion_l;
    tmp_0 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_l;
    cal_4 = (SRR_Driver_Fcn_20ms_B.DataTypeConversion_l - (i / 256 << 8)) +
      tmp_0 / 256;
  }

  /* Transition: '<S27>:56' */
  /* Transition: '<S27>:60' */
  SRR_Driver_Fcn_20ms_B.Checksum_m = (((SRR_Driver_Fcn_20ms_B.Rolcnt * 64.0 +
    (real_T)cal_2) + (real_T)cal_3) + (real_T)cal_4) + 96.0;

  /* End of Chart: '<S24>/306' */

  /* Saturate: '<S21>/Saturation' */
  /* Transition: '<S27>:62' */
  u0 = SRR_Driver_Fcn_20ms_B.LongoftV;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_b;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_d;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation = u0;
  }

  /* End of Saturate: '<S21>/Saturation' */

  /* Gain: '<S21>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN = SRR_Driver_Fcn_20ms_P.EN_Gain *
    SRR_Driver_Fcn_20ms_B.Saturation;

  /* DataTypeConversion: '<S21>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_TrnCtrLngOfstV_306((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S21>/Data Type Conversion' */

  /* Saturate: '<S8>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.CurvatureV;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_e;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_o;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_i = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_i = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_i = u0;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Gain: '<S8>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_m = SRR_Driver_Fcn_20ms_P.EN_Gain_g *
    SRR_Driver_Fcn_20ms_B.Saturation_i;

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_m);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_CurvatureV_306((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S8>/Data Type Conversion' */

  /* Saturate: '<S18>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.Rolcnt;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_n;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_e;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_o = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_o = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_o = u0;
  }

  /* End of Saturate: '<S18>/Saturation' */

  /* Gain: '<S18>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_h = SRR_Driver_Fcn_20ms_P.EN_Gain_o *
    SRR_Driver_Fcn_20ms_B.Saturation_o;

  /* DataTypeConversion: '<S18>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_h);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_RollingCount_306((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S18>/Data Type Conversion' */

  /* Saturate: '<S20>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.Longoffset;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_g;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_i;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_h = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_h = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_h = u0;
  }

  /* End of Saturate: '<S20>/Saturation' */

  /* Gain: '<S20>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_mi = SRR_Driver_Fcn_20ms_P.EN_Gain_e *
    SRR_Driver_Fcn_20ms_B.Saturation_h;

  /* DataTypeConversion: '<S20>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_mi);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_TrnCtrLngOfst_306((int8_T)(u0 < 0.0 ? (int32_T)(int8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(int8_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S20>/Data Type Conversion' */

  /* Saturate: '<S19>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.Latoffset;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_nd;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_g;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_e = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_e = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_e = u0;
  }

  /* End of Saturate: '<S19>/Saturation' */

  /* Gain: '<S19>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_l = SRR_Driver_Fcn_20ms_P.EN_Gain_k *
    SRR_Driver_Fcn_20ms_B.Saturation_e;

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_l);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Vpath_TrnCtrLatOfst_306((int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S19>/Data Type Conversion' */

  /* Saturate: '<S7>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.Curvature;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_a;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_l;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_j = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_j = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_j = u0;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Gain: '<S7>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_mt = SRR_Driver_Fcn_20ms_P.EN_Gain_c *
    SRR_Driver_Fcn_20ms_B.Saturation_j;

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_mt);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Vpath_Curvature_306((int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S7>/Data Type Conversion' */

  /* Saturate: '<S6>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.Checksum_m;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_et;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_ej;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_c = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_c = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_c = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Gain: '<S6>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_ln = SRR_Driver_Fcn_20ms_P.EN_Gain_a *
    SRR_Driver_Fcn_20ms_B.Saturation_c;

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_ln);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Vpath_Checksum_306((uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/TransEstGear'
   */
  SRR_Driver_Fcn_20ms_B.DataTypeConversion_fb = (real_T)Get_TransEstGear();

  /* Gain: '<S3>/N->E' */
  SRR_Driver_Fcn_20ms_B.NE_h = SRR_Driver_Fcn_20ms_P.NE_Gain_m *
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_fb;

  /* RelationalOperator: '<S45>/Relational Operator2' incorporates:
   *  Constant: '<S45>/Constant4'
   */
  SRR_Driver_Fcn_20ms_B.Reverse_gear = (SRR_Driver_Fcn_20ms_B.NE_h ==
    SRR_Driver_Fcn_20ms_P.Constant4_Value);

  /* Switch: '<S45>/Switch' incorporates:
   *  Constant: '<S45>/Constant1'
   *  Constant: '<S45>/Constant2'
   */
  if (SRR_Driver_Fcn_20ms_B.Reverse_gear) {
    SRR_Driver_Fcn_20ms_B.TravelDirection =
      SRR_Driver_Fcn_20ms_P.Constant1_Value_k;
  } else {
    SRR_Driver_Fcn_20ms_B.TravelDirection =
      SRR_Driver_Fcn_20ms_P.Constant2_Value;
  }

  /* End of Switch: '<S45>/Switch' */

  /* Outputs for Atomic SubSystem: '<S32>/Atomic Subsystem' */
  SRR_Driver_Fcn__AtomicSubsystem(SRR_Driver_Fcn_20ms_B.LongVelms,
    &SRR_Driver_Fcn_20ms_B.AtomicSubsystem_f, (P_AtomicSubsystem_SRR_Driver__T *)
    &SRR_Driver_Fcn_20ms_P.AtomicSubsystem_f);

  /* End of Outputs for SubSystem: '<S32>/Atomic Subsystem' */

  /* Saturate: '<S32>/Saturation2' */
  u0 = SRR_Driver_Fcn_20ms_B.AtomicSubsystem_f.Switch;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation2_LowerSat_i;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation2_UpperSat_a;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation2_h = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation2_h = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation2_h = u0;
  }

  /* End of Saturate: '<S32>/Saturation2' */

  /* Gain: '<S32>/Gain' */
  SRR_Driver_Fcn_20ms_B.Gain_m = SRR_Driver_Fcn_20ms_P.Gain_Gain_i *
    SRR_Driver_Fcn_20ms_B.Saturation2_h;

  /* DataTypeConversion: '<S32>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.Gain_m);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SRR_Driver_Fcn_20ms_B.DataTypeConversion_n = (int16_T)(u0 < 0.0 ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S32>/Data Type Conversion' */

  /* Outputs for Atomic SubSystem: '<S34>/Atomic Subsystem' */
  SRR_Driver_Fcn__AtomicSubsystem(SRR_Driver_Fcn_20ms_B.LatVelms_j,
    &SRR_Driver_Fcn_20ms_B.AtomicSubsystem_j, (P_AtomicSubsystem_SRR_Driver__T *)
    &SRR_Driver_Fcn_20ms_P.AtomicSubsystem_j);

  /* End of Outputs for SubSystem: '<S34>/Atomic Subsystem' */

  /* Saturate: '<S34>/Saturation2' */
  u0 = SRR_Driver_Fcn_20ms_B.AtomicSubsystem_j.Switch;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation2_LowerSat_m;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation2_UpperSat_j;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation2_b = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation2_b = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation2_b = u0;
  }

  /* End of Saturate: '<S34>/Saturation2' */

  /* Gain: '<S34>/Gain' */
  SRR_Driver_Fcn_20ms_B.Gain_a = SRR_Driver_Fcn_20ms_P.Gain_Gain_j *
    SRR_Driver_Fcn_20ms_B.Saturation2_b;

  /* DataTypeConversion: '<S34>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.Gain_a);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SRR_Driver_Fcn_20ms_B.DataTypeConversion_p = (int16_T)(u0 < 0.0 ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S34>/Data Type Conversion' */

  /* Outputs for Atomic SubSystem: '<S33>/Atomic Subsystem' */
  SRR_Driver_Fcn__AtomicSubsystem(SRR_Driver_Fcn_20ms_B.degpsradps,
    &SRR_Driver_Fcn_20ms_B.AtomicSubsystem_i, (P_AtomicSubsystem_SRR_Driver__T *)
    &SRR_Driver_Fcn_20ms_P.AtomicSubsystem_i);

  /* End of Outputs for SubSystem: '<S33>/Atomic Subsystem' */

  /* Gain: '<S33>/Gain2' */
  SRR_Driver_Fcn_20ms_B.Gain2 = SRR_Driver_Fcn_20ms_P.Gain2_Gain *
    SRR_Driver_Fcn_20ms_B.AtomicSubsystem_i.Switch;

  /* Saturate: '<S33>/Saturation2' */
  u0 = SRR_Driver_Fcn_20ms_B.Gain2;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation2_LowerSat_oz;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation2_UpperSat_b;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation2_m = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation2_m = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation2_m = u0;
  }

  /* End of Saturate: '<S33>/Saturation2' */

  /* Gain: '<S33>/Gain' */
  SRR_Driver_Fcn_20ms_B.Gain_h = SRR_Driver_Fcn_20ms_P.Gain_Gain_h *
    SRR_Driver_Fcn_20ms_B.Saturation2_m;

  /* DataTypeConversion: '<S33>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.Gain_h);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp = (int16_T)(u0 < 0.0 ? (int32_T)
    (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

  /* End of DataTypeConversion: '<S33>/Data Type Conversion' */

  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   */
  SRR_Driver_Fcn_20ms_B.Compare = (uint8_T)(SRR_Driver_Fcn_20ms_B.LongVelms <=
    SRR_Driver_Fcn_20ms_P.CompareToConstant_const_p);

  /* Switch: '<S44>/Switch' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S44>/Constant1'
   */
  if (SRR_Driver_Fcn_20ms_B.Compare >= SRR_Driver_Fcn_20ms_P.Switch_Threshold_i)
  {
    SRR_Driver_Fcn_20ms_B.ModeInformation1_L2_H =
      SRR_Driver_Fcn_20ms_P.Constant_Value_g;
  } else {
    SRR_Driver_Fcn_20ms_B.ModeInformation1_L2_H =
      SRR_Driver_Fcn_20ms_P.Constant1_Value;
  }

  /* End of Switch: '<S44>/Switch' */

  /* Chart: '<S24>/308' */
  /* Gateway: SRR_Driver/CANInterface/308 */
  /* During: SRR_Driver/CANInterface/308 */
  /* Entry Internal: SRR_Driver/CANInterface/308 */
  /* Transition: '<S28>:18' */
  /* Transition: '<S28>:21' */
  SRR_Driver_Fcn_20ms_B.LongVelV = 0.0;
  SRR_Driver_Fcn_20ms_B.LatVelV = 0.0;
  SRR_Driver_Fcn_20ms_B.YawRateV = 0.0;
  SRR_Driver_Fcn_20ms_B.TriDir308 = SRR_Driver_Fcn_20ms_B.TravelDirection;
  SRR_Driver_Fcn_20ms_B.LongVel308 = (real_T)
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_n * 0.0625;
  SRR_Driver_Fcn_20ms_B.LatVel308 = (real_T)
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_p * 0.05;
  SRR_Driver_Fcn_20ms_B.YawRate308 = (real_T)
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp * 0.0625;
  SRR_Driver_Fcn_20ms_B.ModeInfo308 =
    SRR_Driver_Fcn_20ms_B.ModeInformation1_L2_H;
  if (SRR_Driver_Fcn_20ms_B.RolCnt >= 3.0) {
    /* Transition: '<S28>:95' */
    /* Transition: '<S28>:97' */
    SRR_Driver_Fcn_20ms_B.RolCnt = 0.0;

    /* Transition: '<S28>:98' */
  } else {
    /* Transition: '<S28>:99' */
    SRR_Driver_Fcn_20ms_B.RolCnt++;
  }

  /* Transition: '<S28>:25' */
  if (SRR_Driver_Fcn_20ms_B.DataTypeConversion_p < 0) {
    /* Transition: '<S28>:41' */
    /* Transition: '<S28>:43' */
    cal_4 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_p + 256;

    /* Transition: '<S28>:44' */
  } else {
    /* Transition: '<S28>:35' */
    cal_4 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_p;
  }

  /* Transition: '<S28>:46' */
  if (SRR_Driver_Fcn_20ms_B.DataTypeConversion_n < 0) {
    /* Transition: '<S28>:48' */
    /* Transition: '<S28>:51' */
    i = (SRR_Driver_Fcn_20ms_B.DataTypeConversion_n + 4096) << 4;
    tmp_0 = (SRR_Driver_Fcn_20ms_B.DataTypeConversion_n + 4096) << 4;
    cal_2 = (((SRR_Driver_Fcn_20ms_B.DataTypeConversion_n + 4096) << 4) - (i /
              256 << 8)) + tmp_0 / 256;

    /* Transition: '<S28>:55' */
  } else {
    /* Transition: '<S28>:54' */
    i = SRR_Driver_Fcn_20ms_B.DataTypeConversion_n << 4;
    tmp_0 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_n << 4;
    cal_2 = ((SRR_Driver_Fcn_20ms_B.DataTypeConversion_n << 4) - (i / 256 << 8))
      + tmp_0 / 256;
  }

  /* Transition: '<S28>:69' */
  if (SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp < 0) {
    /* Transition: '<S28>:70' */
    /* Transition: '<S28>:71' */
    i = SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp + 4096;
    tmp_0 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp + 4096;
    cal_3 = ((SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp - (i / 256 << 8)) +
             tmp_0 / 256) + 4096;

    /* Transition: '<S28>:72' */
  } else {
    /* Transition: '<S28>:73' */
    i = SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp;
    tmp_0 = SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp;
    cal_3 = (SRR_Driver_Fcn_20ms_B.DataTypeConversion_dp - (i / 256 << 8)) +
      tmp_0 / 256;
  }

  /* Transition: '<S28>:74' */
  SRR_Driver_Fcn_20ms_B.Checksum = (((((SRR_Driver_Fcn_20ms_B.RolCnt * 4.0 +
    SRR_Driver_Fcn_20ms_B.TravelDirection * 8.0) +
    SRR_Driver_Fcn_20ms_B.ModeInformation1_L2_H) + (real_T)cal_4) + (real_T)
    cal_2) + (real_T)cal_3) + 97.0;

  /* End of Chart: '<S24>/308' */

  /* Saturate: '<S15>/Saturation' */
  /* Transition: '<S28>:104' */
  u0 = SRR_Driver_Fcn_20ms_B.TriDir308;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_p;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_ea;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_b = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_b = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_b = u0;
  }

  /* End of Saturate: '<S15>/Saturation' */

  /* Gain: '<S15>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_i = SRR_Driver_Fcn_20ms_P.EN_Gain_go *
    SRR_Driver_Fcn_20ms_B.Saturation_b;

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_i);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_Data2TravlDirctn_308((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
                                  (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

  /* Saturate: '<S11>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.LongVel308;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_j;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_ih;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_or = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_or = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_or = u0;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Gain: '<S11>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_e = SRR_Driver_Fcn_20ms_P.EN_Gain_p *
    SRR_Driver_Fcn_20ms_B.Saturation_or;

  /* DataTypeConversion: '<S11>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_e);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Vpath_Data2LongVel_308((int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S11>/Data Type Conversion' */

  /* Saturate: '<S12>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.LongVelV;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_c;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_p;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_cd = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_cd = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_cd = u0;
  }

  /* End of Saturate: '<S12>/Saturation' */

  /* Gain: '<S12>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_lo = SRR_Driver_Fcn_20ms_P.EN_Gain_n *
    SRR_Driver_Fcn_20ms_B.Saturation_cd;

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_lo);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_Data2LongVelV_308((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S12>/Data Type Conversion' */

  /* Saturate: '<S10>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.LatVelV;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_ja;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_h;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_l = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_l = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_l = u0;
  }

  /* End of Saturate: '<S10>/Saturation' */

  /* Gain: '<S10>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_hi = SRR_Driver_Fcn_20ms_P.EN_Gain_aw *
    SRR_Driver_Fcn_20ms_B.Saturation_l;

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_hi);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_Data2LatVelV_308((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

  /* Saturate: '<S9>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.LatVel308;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_na;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_n;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_p = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_p = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_p = u0;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Gain: '<S9>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_d = SRR_Driver_Fcn_20ms_P.EN_Gain_i *
    SRR_Driver_Fcn_20ms_B.Saturation_p;

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_d);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_Data2LatVel_308((int8_T)(u0 < 0.0 ? (int32_T)(int8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(int8_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S9>/Data Type Conversion' */

  /* Saturate: '<S16>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.YawRate308;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_o;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_b;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_h1 = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_h1 = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_h1 = u0;
  }

  /* End of Saturate: '<S16>/Saturation' */

  /* Gain: '<S16>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_a = SRR_Driver_Fcn_20ms_P.EN_Gain_p1 *
    SRR_Driver_Fcn_20ms_B.Saturation_h1;

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_a);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Vpath_Data2YawRate_308((int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

  /* Saturate: '<S17>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.YawRateV;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_p1;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_gd;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_hd = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_hd = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_hd = u0;
  }

  /* End of Saturate: '<S17>/Saturation' */

  /* Gain: '<S17>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_my = SRR_Driver_Fcn_20ms_P.EN_Gain_b *
    SRR_Driver_Fcn_20ms_B.Saturation_hd;

  /* DataTypeConversion: '<S17>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_my);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_Data2YawRateV_308((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

  /* Saturate: '<S13>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.ModeInfo308;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_or;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_b1;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_g = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_g = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_g = u0;
  }

  /* End of Saturate: '<S13>/Saturation' */

  /* Gain: '<S13>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_io = SRR_Driver_Fcn_20ms_P.EN_Gain_bb *
    SRR_Driver_Fcn_20ms_B.Saturation_g;

  /* DataTypeConversion: '<S13>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_io);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_Data2ModeInfo_308((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S13>/Data Type Conversion' */

  /* Saturate: '<S14>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.RolCnt;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_l;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_no;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_jy = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_jy = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_jy = u0;
  }

  /* End of Saturate: '<S14>/Saturation' */

  /* Gain: '<S14>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_j = SRR_Driver_Fcn_20ms_P.EN_Gain_g4 *
    SRR_Driver_Fcn_20ms_B.Saturation_jy;

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_j);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_Vpath_Data2RollCnt_308((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* Saturate: '<S5>/Saturation' */
  u0 = SRR_Driver_Fcn_20ms_B.Checksum;
  u1 = SRR_Driver_Fcn_20ms_P.Saturation_LowerSat_bb;
  u2 = SRR_Driver_Fcn_20ms_P.Saturation_UpperSat_pj;
  if (u0 > u2) {
    SRR_Driver_Fcn_20ms_B.Saturation_es = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_20ms_B.Saturation_es = u1;
  } else {
    SRR_Driver_Fcn_20ms_B.Saturation_es = u0;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Gain: '<S5>/E->N' */
  SRR_Driver_Fcn_20ms_B.EN_c = SRR_Driver_Fcn_20ms_P.EN_Gain_m *
    SRR_Driver_Fcn_20ms_B.Saturation_es;

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_20ms_B.EN_c);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Vpath2_Checksum_308((uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/SysPwrMd'
   */
  SRR_Driver_Fcn_20ms_B.DataTypeConversion_g = (real_T)Get_SysPwrMd();

  /* Gain: '<S2>/N->E' */
  SRR_Driver_Fcn_20ms_B.NE_f = SRR_Driver_Fcn_20ms_P.NE_Gain_a *
    SRR_Driver_Fcn_20ms_B.DataTypeConversion_g;

  /* Math: '<S49>/Math Function1' incorporates:
   *  Constant: '<S49>/H'
   */
  SRR_Driver_Fcn_20ms_B.MathFunction1[0] = SRR_Driver_Fcn_20ms_P.H_Value[0];
  SRR_Driver_Fcn_20ms_B.MathFunction1[1] = SRR_Driver_Fcn_20ms_P.H_Value[1];

  /* Gain: '<S53>/Gain' incorporates:
   *  Constant: '<S53>/Parameter_0'
   */
  SRR_Driver_Fcn_20ms_B.Gain_ky = SRR_Driver_Fcn_20ms_P.Gain_Gain_a *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Gain: '<S53>/Gain1' incorporates:
   *  Constant: '<S53>/Parameter_1'
   */
  SRR_Driver_Fcn_20ms_B.Gain1 = SRR_Driver_Fcn_20ms_P.Gain1_Gain_c *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kr;

  /* Sum: '<S53>/Subtract2' */
  SRR_Driver_Fcn_20ms_B.Subtract2 = SRR_Driver_Fcn_20ms_B.Gain_ky +
    SRR_Driver_Fcn_20ms_B.Gain1;

  /* Product: '<S53>/Divide3' incorporates:
   *  Constant: '<S53>/Parameter_2'
   */
  SRR_Driver_Fcn_20ms_B.Divide3 = SRR_Driver_Fcn_20ms_P.LatVel_evulation_m *
    SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Product: '<S53>/Divide2' */
  SRR_Driver_Fcn_20ms_B.Divide2 = SRR_Driver_Fcn_20ms_B.Subtract2 /
    SRR_Driver_Fcn_20ms_B.Divide3;

  /* Product: '<S53>/Divide1' */
  SRR_Driver_Fcn_20ms_B.Divide1 = SRR_Driver_Fcn_20ms_B.Divide2 *
    SRR_Driver_Fcn_20ms_B.LatVelms;

  /* Gain: '<S53>/Gain2' incorporates:
   *  Constant: '<S53>/Parameter_3'
   */
  SRR_Driver_Fcn_20ms_B.Gain2_h = SRR_Driver_Fcn_20ms_P.Gain2_Gain_g *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Product: '<S53>/Divide4' incorporates:
   *  Constant: '<S53>/Parameter_4'
   */
  SRR_Driver_Fcn_20ms_B.Divide4 = SRR_Driver_Fcn_20ms_B.Gain2_h *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_a;

  /* Gain: '<S53>/Gain3' incorporates:
   *  Constant: '<S53>/Parameter_5'
   */
  SRR_Driver_Fcn_20ms_B.Gain3 = SRR_Driver_Fcn_20ms_P.Gain3_Gain *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kr;

  /* Product: '<S53>/Divide5' incorporates:
   *  Constant: '<S53>/Parameter_6'
   */
  SRR_Driver_Fcn_20ms_B.Divide5 = SRR_Driver_Fcn_20ms_B.Gain3 *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_b;

  /* Sum: '<S53>/Subtract1' */
  SRR_Driver_Fcn_20ms_B.Subtract1 = SRR_Driver_Fcn_20ms_B.Divide4 -
    SRR_Driver_Fcn_20ms_B.Divide5;

  /* Product: '<S53>/Divide9' incorporates:
   *  Constant: '<S53>/Parameter_9'
   */
  SRR_Driver_Fcn_20ms_B.Divide9 = SRR_Driver_Fcn_20ms_B.Subtract1 /
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_m / SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Sum: '<S53>/Subtract3' */
  SRR_Driver_Fcn_20ms_B.Subtract3 = SRR_Driver_Fcn_20ms_B.Divide9 -
    SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Memory: '<S49>/Memory3' */
  SRR_Driver_Fcn_20ms_B.Yawraterads =
    SRR_Driver_Fcn_20ms_DW.Memory3_PreviousInput;

  /* Product: '<S53>/Divide6' */
  SRR_Driver_Fcn_20ms_B.Divide6 = SRR_Driver_Fcn_20ms_B.Subtract3 *
    SRR_Driver_Fcn_20ms_B.Yawraterads;

  /* Gain: '<S53>/Gain4' incorporates:
   *  Constant: '<S53>/Parameter_7'
   */
  SRR_Driver_Fcn_20ms_B.Gain4 = SRR_Driver_Fcn_20ms_P.Gain4_Gain *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Product: '<S53>/Divide7' incorporates:
   *  Constant: '<S53>/Parameter_8'
   */
  SRR_Driver_Fcn_20ms_B.Divide7 = SRR_Driver_Fcn_20ms_B.Gain4 *
    SRR_Driver_Fcn_20ms_B.StrTireAngrad /
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_m;

  /* Sum: '<S53>/Subtract4' */
  SRR_Driver_Fcn_20ms_B.Subtract4 = (SRR_Driver_Fcn_20ms_B.Divide1 +
    SRR_Driver_Fcn_20ms_B.Divide6) - SRR_Driver_Fcn_20ms_B.Divide7;

  /* Product: '<S53>/Divide8' incorporates:
   *  Constant: '<S49>/Constant'
   */
  SRR_Driver_Fcn_20ms_B.Divide8 = SRR_Driver_Fcn_20ms_B.Subtract4 *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_deltaT;

  /* Sum: '<S53>/Subtract5' */
  SRR_Driver_Fcn_20ms_B.Subtract5 = SRR_Driver_Fcn_20ms_B.Divide8 +
    SRR_Driver_Fcn_20ms_B.LatVelms;

  /* Gain: '<S54>/Gain2' incorporates:
   *  Constant: '<S54>/Parameter_3'
   */
  SRR_Driver_Fcn_20ms_B.Gain2_a = SRR_Driver_Fcn_20ms_P.Gain2_Gain_g3 *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Product: '<S54>/Divide4' incorporates:
   *  Constant: '<S54>/Parameter_4'
   */
  SRR_Driver_Fcn_20ms_B.Divide4_e = SRR_Driver_Fcn_20ms_B.Gain2_a *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_a;

  /* Gain: '<S54>/Gain3' incorporates:
   *  Constant: '<S54>/Parameter_5'
   */
  SRR_Driver_Fcn_20ms_B.Gain3_o = SRR_Driver_Fcn_20ms_P.Gain3_Gain_h *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kr;

  /* Product: '<S54>/Divide5' incorporates:
   *  Constant: '<S54>/Parameter_6'
   */
  SRR_Driver_Fcn_20ms_B.Divide5_m = SRR_Driver_Fcn_20ms_B.Gain3_o *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_b;

  /* Sum: '<S54>/Subtract1' */
  SRR_Driver_Fcn_20ms_B.Subtract1_j = SRR_Driver_Fcn_20ms_B.Divide4_e -
    SRR_Driver_Fcn_20ms_B.Divide5_m;

  /* Product: '<S54>/Divide3' incorporates:
   *  Constant: '<S54>/Parameter_2'
   */
  SRR_Driver_Fcn_20ms_B.Divide3_m = SRR_Driver_Fcn_20ms_P.LatVel_evulation_Iz *
    SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Product: '<S54>/Divide2' */
  SRR_Driver_Fcn_20ms_B.Divide2_i = SRR_Driver_Fcn_20ms_B.Subtract1_j *
    SRR_Driver_Fcn_20ms_B.LatVelms / SRR_Driver_Fcn_20ms_B.Divide3_m;

  /* Gain: '<S54>/Gain1' incorporates:
   *  Constant: '<S54>/Parameter_1'
   */
  SRR_Driver_Fcn_20ms_B.Gain1_a = SRR_Driver_Fcn_20ms_P.Gain1_Gain_p *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Product: '<S54>/Divide1' incorporates:
   *  Constant: '<S54>/Parameter_12'
   *  Constant: '<S54>/Parameter_9'
   */
  SRR_Driver_Fcn_20ms_B.Divide1_f = SRR_Driver_Fcn_20ms_B.Gain1_a *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_a *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_a;

  /* Gain: '<S54>/Gain5' incorporates:
   *  Constant: '<S54>/Parameter_10'
   */
  SRR_Driver_Fcn_20ms_B.Gain5 = SRR_Driver_Fcn_20ms_P.Gain5_Gain *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kr;

  /* Product: '<S54>/Divide6' incorporates:
   *  Constant: '<S54>/Parameter_11'
   *  Constant: '<S54>/Parameter_13'
   */
  SRR_Driver_Fcn_20ms_B.Divide6_o = SRR_Driver_Fcn_20ms_B.Gain5 *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_b *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_b;

  /* Sum: '<S54>/Subtract2' */
  SRR_Driver_Fcn_20ms_B.Subtract2_h = SRR_Driver_Fcn_20ms_B.Divide1_f +
    SRR_Driver_Fcn_20ms_B.Divide6_o;

  /* Product: '<S54>/Divide10' incorporates:
   *  Constant: '<S54>/Parameter_14'
   */
  SRR_Driver_Fcn_20ms_B.Divide10 = SRR_Driver_Fcn_20ms_P.LatVel_evulation_Iz *
    SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Product: '<S54>/Divide9' */
  SRR_Driver_Fcn_20ms_B.Divide9_h = SRR_Driver_Fcn_20ms_B.Subtract2_h *
    SRR_Driver_Fcn_20ms_B.Yawraterads / SRR_Driver_Fcn_20ms_B.Divide10;

  /* Gain: '<S54>/Gain4' incorporates:
   *  Constant: '<S54>/Parameter_7'
   */
  SRR_Driver_Fcn_20ms_B.Gain4_i = SRR_Driver_Fcn_20ms_P.Gain4_Gain_g *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Product: '<S54>/Divide7' incorporates:
   *  Constant: '<S54>/Parameter_15'
   *  Constant: '<S54>/Parameter_8'
   */
  SRR_Driver_Fcn_20ms_B.Divide7_l = SRR_Driver_Fcn_20ms_P.LatVel_evulation_a *
    SRR_Driver_Fcn_20ms_B.Gain4_i * SRR_Driver_Fcn_20ms_B.StrTireAngrad /
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_Iz;

  /* Sum: '<S54>/Subtract4' */
  SRR_Driver_Fcn_20ms_B.Subtract4_e = (SRR_Driver_Fcn_20ms_B.Divide2_i +
    SRR_Driver_Fcn_20ms_B.Divide9_h) - SRR_Driver_Fcn_20ms_B.Divide7_l;

  /* Product: '<S54>/Divide8' incorporates:
   *  Constant: '<S49>/Constant'
   */
  SRR_Driver_Fcn_20ms_B.Divide8_p = SRR_Driver_Fcn_20ms_B.Subtract4_e *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_deltaT;

  /* Sum: '<S54>/Subtract5' */
  SRR_Driver_Fcn_20ms_B.Subtract5_k = SRR_Driver_Fcn_20ms_B.Divide8_p +
    SRR_Driver_Fcn_20ms_B.Yawraterads;

  /* SignalConversion: '<S49>/TmpSignal ConversionAtMath Function2Inport1' */
  SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFuncti[0] =
    SRR_Driver_Fcn_20ms_B.Subtract5;
  SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFuncti[1] =
    SRR_Driver_Fcn_20ms_B.Subtract5_k;

  /* Math: '<S49>/Math Function2' */
  SRR_Driver_Fcn_20ms_B.MathFunction2[0] =
    SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFuncti[0];
  SRR_Driver_Fcn_20ms_B.MathFunction2[1] =
    SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFuncti[1];

  /* Math: '<S49>/Math Function3' incorporates:
   *  Constant: '<S49>/H1'
   */
  SRR_Driver_Fcn_20ms_B.MathFunction3[0] = SRR_Driver_Fcn_20ms_P.H1_Value[0];
  SRR_Driver_Fcn_20ms_B.MathFunction3[1] = SRR_Driver_Fcn_20ms_P.H1_Value[1];

  /* Memory: '<S49>/Memory1' */
  SRR_Driver_Fcn_20ms_B.Memory1[0] =
    SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[0];
  SRR_Driver_Fcn_20ms_B.Memory1[1] =
    SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[1];
  SRR_Driver_Fcn_20ms_B.Memory1[2] =
    SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[2];
  SRR_Driver_Fcn_20ms_B.Memory1[3] =
    SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[3];

  /* Product: '<S49>/Product1' */
  unnamed_idx_0 = SRR_Driver_Fcn_20ms_B.MathFunction1[0];
  unnamed_idx_1 = SRR_Driver_Fcn_20ms_B.MathFunction1[1];
  u1 = SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFuncti[0];
  u2 = SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFuncti[1];
  u0 = unnamed_idx_0 * u1;
  u0 += unnamed_idx_1 * u2;
  SRR_Driver_Fcn_20ms_B.Product1 = u0;

  /* Gain: '<S59>/Gain2' incorporates:
   *  Constant: '<S59>/Parameter_0'
   */
  SRR_Driver_Fcn_20ms_B.Gain2_aw = SRR_Driver_Fcn_20ms_P.Gain2_Gain_n *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Gain: '<S59>/Gain3' incorporates:
   *  Constant: '<S59>/Parameter_2'
   */
  SRR_Driver_Fcn_20ms_B.Gain3_p = SRR_Driver_Fcn_20ms_P.Gain3_Gain_i *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kr;

  /* Sum: '<S59>/Subtract1' */
  SRR_Driver_Fcn_20ms_B.Subtract1_c = SRR_Driver_Fcn_20ms_B.Gain2_aw +
    SRR_Driver_Fcn_20ms_B.Gain3_p;

  /* Product: '<S59>/Divide3' incorporates:
   *  Constant: '<S59>/Parameter_3'
   */
  SRR_Driver_Fcn_20ms_B.Divide3_h = SRR_Driver_Fcn_20ms_P.LatVel_evulation_m *
    SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Product: '<S59>/Divide2' incorporates:
   *  Constant: '<S49>/Constant'
   */
  SRR_Driver_Fcn_20ms_B.Divide2_p = SRR_Driver_Fcn_20ms_B.Subtract1_c /
    SRR_Driver_Fcn_20ms_B.Divide3_h *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_deltaT;

  /* Sum: '<S59>/Subtract2' incorporates:
   *  Constant: '<S59>/Constant2'
   */
  SRR_Driver_Fcn_20ms_B.Subtract2_f = SRR_Driver_Fcn_20ms_B.Divide2_p +
    SRR_Driver_Fcn_20ms_P.Constant2_Value_j;

  /* Gain: '<S60>/Gain1' incorporates:
   *  Constant: '<S60>/Parameter_1'
   */
  SRR_Driver_Fcn_20ms_B.Gain1_f = SRR_Driver_Fcn_20ms_P.Gain1_Gain_cu *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Product: '<S60>/Divide4' incorporates:
   *  Constant: '<S60>/Parameter_4'
   */
  SRR_Driver_Fcn_20ms_B.Divide4_p = SRR_Driver_Fcn_20ms_B.Gain1_f *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_a;

  /* Gain: '<S60>/Gain4' incorporates:
   *  Constant: '<S60>/Parameter_5'
   */
  SRR_Driver_Fcn_20ms_B.Gain4_e = SRR_Driver_Fcn_20ms_P.Gain4_Gain_b *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kr;

  /* Product: '<S60>/Divide5' incorporates:
   *  Constant: '<S60>/Parameter_6'
   */
  SRR_Driver_Fcn_20ms_B.Divide5_f = SRR_Driver_Fcn_20ms_B.Gain4_e *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_b;

  /* Sum: '<S60>/Subtract3' */
  SRR_Driver_Fcn_20ms_B.Subtract3_p = SRR_Driver_Fcn_20ms_B.Divide4_p -
    SRR_Driver_Fcn_20ms_B.Divide5_f;

  /* Product: '<S60>/Divide2' incorporates:
   *  Constant: '<S60>/Parameter_2'
   */
  SRR_Driver_Fcn_20ms_B.Divide2_l = SRR_Driver_Fcn_20ms_B.Subtract3_p /
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_m / SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Sum: '<S60>/Subtract4' */
  SRR_Driver_Fcn_20ms_B.Subtract4_j = SRR_Driver_Fcn_20ms_B.Divide2_l -
    SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Product: '<S60>/Divide1' incorporates:
   *  Constant: '<S49>/Constant'
   */
  SRR_Driver_Fcn_20ms_B.Divide1_n =
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_deltaT *
    SRR_Driver_Fcn_20ms_B.Subtract4_j;

  /* SignalConversion: '<S57>/TmpSignal ConversionAtMath Function2Inport1' */
  SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFunc_j[0] =
    SRR_Driver_Fcn_20ms_B.Subtract2_f;
  SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFunc_j[1] =
    SRR_Driver_Fcn_20ms_B.Divide1_n;

  /* Math: '<S57>/Math Function2' */
  SRR_Driver_Fcn_20ms_B.MathFunction2_c[0] =
    SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFunc_j[0];
  SRR_Driver_Fcn_20ms_B.MathFunction2_c[1] =
    SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFunc_j[1];

  /* Gain: '<S57>/Gain' */
  SRR_Driver_Fcn_20ms_B.Gain_b[0] = SRR_Driver_Fcn_20ms_P.Gain_Gain_n[0] *
    SRR_Driver_Fcn_20ms_B.MathFunction2_c[0];
  SRR_Driver_Fcn_20ms_B.Gain_b[2] = SRR_Driver_Fcn_20ms_P.Gain_Gain_n[0] *
    SRR_Driver_Fcn_20ms_B.MathFunction2_c[1];
  SRR_Driver_Fcn_20ms_B.Gain_b[1] = SRR_Driver_Fcn_20ms_P.Gain_Gain_n[1] *
    SRR_Driver_Fcn_20ms_B.MathFunction2_c[0];
  SRR_Driver_Fcn_20ms_B.Gain_b[3] = SRR_Driver_Fcn_20ms_P.Gain_Gain_n[1] *
    SRR_Driver_Fcn_20ms_B.MathFunction2_c[1];

  /* Gain: '<S61>/Gain1' incorporates:
   *  Constant: '<S61>/Parameter_1'
   */
  SRR_Driver_Fcn_20ms_B.Gain1_h = SRR_Driver_Fcn_20ms_P.Gain1_Gain_pv *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Product: '<S61>/Divide4' incorporates:
   *  Constant: '<S61>/Parameter_4'
   */
  SRR_Driver_Fcn_20ms_B.Divide4_k = SRR_Driver_Fcn_20ms_B.Gain1_h *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_a;

  /* Gain: '<S61>/Gain4' incorporates:
   *  Constant: '<S61>/Parameter_5'
   */
  SRR_Driver_Fcn_20ms_B.Gain4_h = SRR_Driver_Fcn_20ms_P.Gain4_Gain_h *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kr;

  /* Product: '<S61>/Divide5' incorporates:
   *  Constant: '<S61>/Parameter_6'
   */
  SRR_Driver_Fcn_20ms_B.Divide5_j = SRR_Driver_Fcn_20ms_B.Gain4_h *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_b;

  /* Sum: '<S61>/Subtract3' */
  SRR_Driver_Fcn_20ms_B.Subtract3_ph = SRR_Driver_Fcn_20ms_B.Divide4_k -
    SRR_Driver_Fcn_20ms_B.Divide5_j;

  /* Product: '<S61>/Divide1' incorporates:
   *  Constant: '<S61>/Parameter_7'
   */
  SRR_Driver_Fcn_20ms_B.Divide1_e = SRR_Driver_Fcn_20ms_B.Subtract3_ph /
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_Iz / SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Product: '<S61>/Divide6' incorporates:
   *  Constant: '<S49>/Constant'
   */
  SRR_Driver_Fcn_20ms_B.Divide6_l = SRR_Driver_Fcn_20ms_B.Divide1_e *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_deltaT;

  /* Gain: '<S62>/Gain1' incorporates:
   *  Constant: '<S62>/Parameter_1'
   */
  SRR_Driver_Fcn_20ms_B.Gain1_g = SRR_Driver_Fcn_20ms_P.Gain1_Gain_h *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kf;

  /* Product: '<S62>/Divide1' incorporates:
   *  Constant: '<S62>/Parameter_12'
   *  Constant: '<S62>/Parameter_9'
   */
  SRR_Driver_Fcn_20ms_B.Divide1_k = SRR_Driver_Fcn_20ms_B.Gain1_g *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_a *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_a;

  /* Gain: '<S62>/Gain5' incorporates:
   *  Constant: '<S62>/Parameter_10'
   */
  SRR_Driver_Fcn_20ms_B.Gain5_e = SRR_Driver_Fcn_20ms_P.Gain5_Gain_l *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_kr;

  /* Product: '<S62>/Divide6' incorporates:
   *  Constant: '<S62>/Parameter_11'
   *  Constant: '<S62>/Parameter_13'
   */
  SRR_Driver_Fcn_20ms_B.Divide6_p = SRR_Driver_Fcn_20ms_B.Gain5_e *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_b *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_b;

  /* Sum: '<S62>/Subtract3' */
  SRR_Driver_Fcn_20ms_B.Subtract3_i = SRR_Driver_Fcn_20ms_B.Divide1_k +
    SRR_Driver_Fcn_20ms_B.Divide6_p;

  /* Product: '<S62>/Divide10' incorporates:
   *  Constant: '<S62>/Parameter_14'
   */
  SRR_Driver_Fcn_20ms_B.Divide10_l = SRR_Driver_Fcn_20ms_P.LatVel_evulation_Iz *
    SRR_Driver_Fcn_20ms_B.LongVelms;

  /* Product: '<S62>/Divide9' incorporates:
   *  Constant: '<S49>/Constant'
   */
  SRR_Driver_Fcn_20ms_B.Divide9_k = SRR_Driver_Fcn_20ms_B.Subtract3_i /
    SRR_Driver_Fcn_20ms_B.Divide10_l *
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_deltaT;

  /* Sum: '<S62>/Subtract2' incorporates:
   *  Constant: '<S62>/Constant2'
   */
  SRR_Driver_Fcn_20ms_B.Subtract2_m = SRR_Driver_Fcn_20ms_B.Divide9_k +
    SRR_Driver_Fcn_20ms_P.Constant2_Value_c;

  /* SignalConversion: '<S58>/TmpSignal ConversionAtMath Function2Inport1' */
  SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFun_jm[0] =
    SRR_Driver_Fcn_20ms_B.Divide6_l;
  SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFun_jm[1] =
    SRR_Driver_Fcn_20ms_B.Subtract2_m;

  /* Math: '<S58>/Math Function2' */
  SRR_Driver_Fcn_20ms_B.MathFunction2_m[0] =
    SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFun_jm[0];
  SRR_Driver_Fcn_20ms_B.MathFunction2_m[1] =
    SRR_Driver_Fcn_20ms_B.TmpSignalConversionAtMathFun_jm[1];

  /* Gain: '<S58>/Gain' */
  SRR_Driver_Fcn_20ms_B.Gain_f[0] = SRR_Driver_Fcn_20ms_P.Gain_Gain_fd[0] *
    SRR_Driver_Fcn_20ms_B.MathFunction2_m[0];
  SRR_Driver_Fcn_20ms_B.Gain_f[2] = SRR_Driver_Fcn_20ms_P.Gain_Gain_fd[0] *
    SRR_Driver_Fcn_20ms_B.MathFunction2_m[1];
  SRR_Driver_Fcn_20ms_B.Gain_f[1] = SRR_Driver_Fcn_20ms_P.Gain_Gain_fd[1] *
    SRR_Driver_Fcn_20ms_B.MathFunction2_m[0];
  SRR_Driver_Fcn_20ms_B.Gain_f[3] = SRR_Driver_Fcn_20ms_P.Gain_Gain_fd[1] *
    SRR_Driver_Fcn_20ms_B.MathFunction2_m[1];

  /* Sum: '<S56>/Sum of Elements1' */
  SRR_Driver_Fcn_20ms_B.SumofElements1[0] = SRR_Driver_Fcn_20ms_B.Gain_b[0] +
    SRR_Driver_Fcn_20ms_B.Gain_f[0];
  SRR_Driver_Fcn_20ms_B.SumofElements1[1] = SRR_Driver_Fcn_20ms_B.Gain_b[1] +
    SRR_Driver_Fcn_20ms_B.Gain_f[1];
  SRR_Driver_Fcn_20ms_B.SumofElements1[2] = SRR_Driver_Fcn_20ms_B.Gain_b[2] +
    SRR_Driver_Fcn_20ms_B.Gain_f[2];
  SRR_Driver_Fcn_20ms_B.SumofElements1[3] = SRR_Driver_Fcn_20ms_B.Gain_b[3] +
    SRR_Driver_Fcn_20ms_B.Gain_f[3];

  /* Math: '<S55>/Math Function2' */
  SRR_Driver_Fcn_20ms_B.MathFunction2_k[0] =
    SRR_Driver_Fcn_20ms_B.SumofElements1[0];
  SRR_Driver_Fcn_20ms_B.MathFunction2_k[1] =
    SRR_Driver_Fcn_20ms_B.SumofElements1[2];
  SRR_Driver_Fcn_20ms_B.MathFunction2_k[2] =
    SRR_Driver_Fcn_20ms_B.SumofElements1[1];
  SRR_Driver_Fcn_20ms_B.MathFunction2_k[3] =
    SRR_Driver_Fcn_20ms_B.SumofElements1[3];

  /* Product: '<S55>/Product' */
  tmp[0] = SRR_Driver_Fcn_20ms_B.Memory1[0];
  tmp[1] = SRR_Driver_Fcn_20ms_B.Memory1[1];
  tmp[2] = SRR_Driver_Fcn_20ms_B.Memory1[2];
  tmp[3] = SRR_Driver_Fcn_20ms_B.Memory1[3];
  unnamed_idx_0 = SRR_Driver_Fcn_20ms_B.MathFunction2_k[0];
  unnamed_idx_1 = SRR_Driver_Fcn_20ms_B.MathFunction2_k[1];
  u0 = SRR_Driver_Fcn_20ms_B.MathFunction2_k[2];
  u1 = SRR_Driver_Fcn_20ms_B.MathFunction2_k[3];
  for (i = 0; i < 2; i++) {
    v1[i] = 0.0;
    v1[i] += tmp[i] * unnamed_idx_0;
    v1[i] += tmp[i + 2] * unnamed_idx_1;
    v1[i + 2] = 0.0;
    v1[i + 2] += tmp[i] * u0;
    v1[i + 2] += tmp[i + 2] * u1;
  }

  tmp[0] = SRR_Driver_Fcn_20ms_B.SumofElements1[0];
  tmp[1] = SRR_Driver_Fcn_20ms_B.SumofElements1[1];
  tmp[2] = SRR_Driver_Fcn_20ms_B.SumofElements1[2];
  tmp[3] = SRR_Driver_Fcn_20ms_B.SumofElements1[3];
  for (i = 0; i < 2; i++) {
    SRR_Driver_Fcn_20ms_B.Product[i] = 0.0;
    SRR_Driver_Fcn_20ms_B.Product[i] += tmp[i] * v1[0];
    SRR_Driver_Fcn_20ms_B.Product[i] += tmp[i + 2] * v1[1];
    SRR_Driver_Fcn_20ms_B.Product[i + 2] = 0.0;
    SRR_Driver_Fcn_20ms_B.Product[i + 2] += tmp[i] * v1[2];
    SRR_Driver_Fcn_20ms_B.Product[i + 2] += tmp[i + 2] * v1[3];
  }

  /* End of Product: '<S55>/Product' */

  /* Sum: '<S55>/Sum of Elements1' incorporates:
   *  Constant: '<S55>/Q'
   */
  SRR_Driver_Fcn_20ms_B.SumofElements1_a[0] = SRR_Driver_Fcn_20ms_B.Product[0] +
    SRR_Driver_Fcn_20ms_P.Q_Value[0];
  SRR_Driver_Fcn_20ms_B.SumofElements1_a[1] = SRR_Driver_Fcn_20ms_B.Product[1] +
    SRR_Driver_Fcn_20ms_P.Q_Value[1];
  SRR_Driver_Fcn_20ms_B.SumofElements1_a[2] = SRR_Driver_Fcn_20ms_B.Product[2] +
    SRR_Driver_Fcn_20ms_P.Q_Value[2];
  SRR_Driver_Fcn_20ms_B.SumofElements1_a[3] = SRR_Driver_Fcn_20ms_B.Product[3] +
    SRR_Driver_Fcn_20ms_P.Q_Value[3];

  /* Math: '<S52>/Math Function1' incorporates:
   *  Constant: '<S52>/H'
   */
  SRR_Driver_Fcn_20ms_B.MathFunction1_e[0] = SRR_Driver_Fcn_20ms_P.H_Value_l[0];
  SRR_Driver_Fcn_20ms_B.MathFunction1_e[1] = SRR_Driver_Fcn_20ms_P.H_Value_l[1];

  /* Product: '<S52>/Product1' incorporates:
   *  Constant: '<S52>/H'
   */
  tmp[0] = SRR_Driver_Fcn_20ms_B.SumofElements1_a[0];
  tmp[1] = SRR_Driver_Fcn_20ms_B.SumofElements1_a[1];
  tmp[2] = SRR_Driver_Fcn_20ms_B.SumofElements1_a[2];
  tmp[3] = SRR_Driver_Fcn_20ms_B.SumofElements1_a[3];
  u1 = SRR_Driver_Fcn_20ms_P.H_Value_l[0];
  u2 = SRR_Driver_Fcn_20ms_P.H_Value_l[1];
  v1_idx_1 = tmp[0] * u1;
  v1_idx_1 += tmp[2] * u2;
  v1_idx_0 = v1_idx_1;
  v1_idx_1 = tmp[1] * u1;
  v1_idx_1 += tmp[3] * u2;
  unnamed_idx_0 = SRR_Driver_Fcn_20ms_B.MathFunction1_e[0];
  unnamed_idx_1 = SRR_Driver_Fcn_20ms_B.MathFunction1_e[1];
  u0 = unnamed_idx_0 * v1_idx_0;
  u0 += unnamed_idx_1 * v1_idx_1;
  SRR_Driver_Fcn_20ms_B.Product1_a = u0;

  /* Sum: '<S52>/Sum of Elements1' incorporates:
   *  Constant: '<S52>/R'
   */
  SRR_Driver_Fcn_20ms_B.SumofElements1_k = SRR_Driver_Fcn_20ms_B.Product1_a +
    SRR_Driver_Fcn_20ms_P.LatVel_evulation_R;

  /* Product: '<S52>/Product' incorporates:
   *  Constant: '<S52>/H'
   */
  u1 = SRR_Driver_Fcn_20ms_P.H_Value_l[0];
  u2 = SRR_Driver_Fcn_20ms_P.H_Value_l[1];
  u0 = SRR_Driver_Fcn_20ms_B.SumofElements1_k;
  v1_idx_0 = u1 / u0;
  v1_idx_1 = u2 / u0;
  tmp[0] = SRR_Driver_Fcn_20ms_B.SumofElements1_a[0];
  tmp[1] = SRR_Driver_Fcn_20ms_B.SumofElements1_a[1];
  tmp[2] = SRR_Driver_Fcn_20ms_B.SumofElements1_a[2];
  tmp[3] = SRR_Driver_Fcn_20ms_B.SumofElements1_a[3];
  unnamed_idx_1 = tmp[0] * v1_idx_0;
  unnamed_idx_1 += tmp[2] * v1_idx_1;
  unnamed_idx_0 = unnamed_idx_1;

  /* Product: '<S52>/Product' */
  unnamed_idx_1 = tmp[1] * v1_idx_0;
  unnamed_idx_1 += tmp[3] * v1_idx_1;
  SRR_Driver_Fcn_20ms_B.Product_a[0] = unnamed_idx_0;
  SRR_Driver_Fcn_20ms_B.Product_a[1] = unnamed_idx_1;

  /* Sum: '<S49>/Subtract' */
  SRR_Driver_Fcn_20ms_B.Subtract = SRR_Driver_Fcn_20ms_B.degpsradps -
    SRR_Driver_Fcn_20ms_B.Product1;

  /* Product: '<S49>/Product2' */
  u1 = SRR_Driver_Fcn_20ms_B.Product_a[0];
  u2 = SRR_Driver_Fcn_20ms_B.Product_a[1];
  u0 = SRR_Driver_Fcn_20ms_B.Subtract;
  v1_idx_0 = u1 * u0;
  v1_idx_1 = u2 * u0;
  SRR_Driver_Fcn_20ms_B.Product2[0] = v1_idx_0;
  SRR_Driver_Fcn_20ms_B.Product2[1] = v1_idx_1;

  /* Product: '<S49>/Product3' */
  u1 = SRR_Driver_Fcn_20ms_B.Product_a[0];
  u2 = SRR_Driver_Fcn_20ms_B.Product_a[1];
  unnamed_idx_0 = SRR_Driver_Fcn_20ms_B.MathFunction3[0];
  unnamed_idx_1 = SRR_Driver_Fcn_20ms_B.MathFunction3[1];
  SRR_Driver_Fcn_20ms_B.Product3[0] = u1 * unnamed_idx_0;
  SRR_Driver_Fcn_20ms_B.Product3[2] = u1 * unnamed_idx_1;
  SRR_Driver_Fcn_20ms_B.Product3[1] = u2 * unnamed_idx_0;
  SRR_Driver_Fcn_20ms_B.Product3[3] = u2 * unnamed_idx_1;

  /* Sum: '<S49>/Sum of Elements2' incorporates:
   *  Constant: '<S49>/I'
   */
  SRR_Driver_Fcn_20ms_B.SumofElements2[0] = SRR_Driver_Fcn_20ms_P.I_Value[0] -
    SRR_Driver_Fcn_20ms_B.Product3[0];
  SRR_Driver_Fcn_20ms_B.SumofElements2[1] = SRR_Driver_Fcn_20ms_P.I_Value[1] -
    SRR_Driver_Fcn_20ms_B.Product3[1];
  SRR_Driver_Fcn_20ms_B.SumofElements2[2] = SRR_Driver_Fcn_20ms_P.I_Value[2] -
    SRR_Driver_Fcn_20ms_B.Product3[2];
  SRR_Driver_Fcn_20ms_B.SumofElements2[3] = SRR_Driver_Fcn_20ms_P.I_Value[3] -
    SRR_Driver_Fcn_20ms_B.Product3[3];

  /* Product: '<S49>/Product4' */
  tmp[0] = SRR_Driver_Fcn_20ms_B.SumofElements2[0];
  tmp[1] = SRR_Driver_Fcn_20ms_B.SumofElements2[1];
  tmp[2] = SRR_Driver_Fcn_20ms_B.SumofElements2[2];
  tmp[3] = SRR_Driver_Fcn_20ms_B.SumofElements2[3];
  unnamed_idx_0 = SRR_Driver_Fcn_20ms_B.SumofElements1_a[0];
  unnamed_idx_1 = SRR_Driver_Fcn_20ms_B.SumofElements1_a[1];
  u0 = SRR_Driver_Fcn_20ms_B.SumofElements1_a[2];
  u1 = SRR_Driver_Fcn_20ms_B.SumofElements1_a[3];
  for (i = 0; i < 2; i++) {
    SRR_Driver_Fcn_20ms_B.Product4[i] = 0.0;
    SRR_Driver_Fcn_20ms_B.Product4[i] += tmp[i] * unnamed_idx_0;
    SRR_Driver_Fcn_20ms_B.Product4[i] += tmp[i + 2] * unnamed_idx_1;
    SRR_Driver_Fcn_20ms_B.Product4[i + 2] = 0.0;
    SRR_Driver_Fcn_20ms_B.Product4[i + 2] += tmp[i] * u0;
    SRR_Driver_Fcn_20ms_B.Product4[i + 2] += tmp[i + 2] * u1;
  }

  /* End of Product: '<S49>/Product4' */

  /* Sum: '<S49>/Sum of Elements1' */
  SRR_Driver_Fcn_20ms_B.SumofElements1_m[0] = SRR_Driver_Fcn_20ms_B.Product2[0]
    + SRR_Driver_Fcn_20ms_B.MathFunction2[0];
  SRR_Driver_Fcn_20ms_B.SumofElements1_m[1] = SRR_Driver_Fcn_20ms_B.Product2[1]
    + SRR_Driver_Fcn_20ms_B.MathFunction2[1];

  /* Update for Memory: '<S49>/Memory2' */
  SRR_Driver_Fcn_20ms_DW.Memory2_PreviousInput =
    SRR_Driver_Fcn_20ms_B.SumofElements1_m[0];

  /* Update for Memory: '<S49>/Memory3' */
  SRR_Driver_Fcn_20ms_DW.Memory3_PreviousInput =
    SRR_Driver_Fcn_20ms_B.SumofElements1_m[1];

  /* Update for Memory: '<S49>/Memory1' */
  SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[0] =
    SRR_Driver_Fcn_20ms_B.Product4[0];
  SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[1] =
    SRR_Driver_Fcn_20ms_B.Product4[1];
  SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[2] =
    SRR_Driver_Fcn_20ms_B.Product4[2];
  SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[3] =
    SRR_Driver_Fcn_20ms_B.Product4[3];
}

/* Model initialize function */
void SRR_Driver_Fcn_20ms_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(SRR_Driver_Fcn_20ms_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &SRR_Driver_Fcn_20ms_B), 0,
                sizeof(B_SRR_Driver_Fcn_20ms_T));

  /* states (dwork) */
  (void) memset((void *)&SRR_Driver_Fcn_20ms_DW, 0,
                sizeof(DW_SRR_Driver_Fcn_20ms_T));

  /* InitializeConditions for Memory: '<S49>/Memory2' */
  SRR_Driver_Fcn_20ms_DW.Memory2_PreviousInput =
    SRR_Driver_Fcn_20ms_P.Memory2_X0;

  /* InitializeConditions for Chart: '<S24>/306' */
  SRR_Driver_Fcn_20ms_B.Rolcnt = 0.0;

  /* InitializeConditions for Chart: '<S24>/308' */
  SRR_Driver_Fcn_20ms_B.RolCnt = 0.0;

  /* InitializeConditions for Memory: '<S49>/Memory3' */
  SRR_Driver_Fcn_20ms_DW.Memory3_PreviousInput =
    SRR_Driver_Fcn_20ms_P.Memory3_X0;

  /* InitializeConditions for Memory: '<S49>/Memory1' */
  SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[0] =
    SRR_Driver_Fcn_20ms_P.Memory1_X0[0];
  SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[1] =
    SRR_Driver_Fcn_20ms_P.Memory1_X0[1];
  SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[2] =
    SRR_Driver_Fcn_20ms_P.Memory1_X0[2];
  SRR_Driver_Fcn_20ms_DW.Memory1_PreviousInput[3] =
    SRR_Driver_Fcn_20ms_P.Memory1_X0[3];
}

/* Model terminate function */
void SRR_Driver_Fcn_20ms_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
