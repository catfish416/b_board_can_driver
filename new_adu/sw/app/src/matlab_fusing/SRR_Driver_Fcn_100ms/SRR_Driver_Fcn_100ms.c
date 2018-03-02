/*
 * File: SRR_Driver_Fcn_100ms.c
 *
 * Code generated for Simulink model 'SRR_Driver_Fcn_100ms'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 18:58:10 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRR_Driver_Fcn_100ms.h"
#include "SRR_Driver_Fcn_100ms_private.h"
#include "interface.h"
/* Block signals (auto storage) */
B_SRR_Driver_Fcn_100ms_T SRR_Driver_Fcn_100ms_B;

/* Block states (auto storage) */
DW_SRR_Driver_Fcn_100ms_T SRR_Driver_Fcn_100ms_DW;

/* Real-time model */
RT_MODEL_SRR_Driver_Fcn_100ms_T SRR_Driver_Fcn_100ms_M_;
RT_MODEL_SRR_Driver_Fcn_100ms_T *const SRR_Driver_Fcn_100ms_M =
  &SRR_Driver_Fcn_100ms_M_;

/*add by wjr*/
static void Set_WSWshSwAtv_310(uint8_T Value)
{
      Put_Body_Info_FOB_LR_WSWshSwAtv(Value);
      Put_Body_Info_FOB_LF_WSWshSwAtv(Value);
      Put_Body_Info_FOB_RR_WSWshSwAtv(Value);
      Put_Body_Info_FOB_RF_WSWshSwAtv(Value);

}
static void Set_TrStLgMdAtv_310(uint8_T Value)
{
      Put_Body_Info_FOB_LR_TrStLgMdAtv(Value);
      Put_Body_Info_FOB_LF_TrStLgMdAtv(Value);
      Put_Body_Info_FOB_RR_TrStLgMdAtv(Value);
      Put_Body_Info_FOB_RF_TrStLgMdAtv(Value);
}
 static void Set_SysPwrMdV_310(uint8_T Value)
 {
       Put_Body_Info_FOB_LR_SysPwrMdV(Value);
      Put_Body_Info_FOB_LF_SysPwrMdV(Value);
      Put_Body_Info_FOB_RR_SysPwrMdV(Value);
      Put_Body_Info_FOB_RF_SysPwrMdV(Value);
 }
 static void Set_SysPwrMd_310(uint8_T Value)
 {
       Put_Body_Info_FOB_LR_SysPwrMd(Value);
      Put_Body_Info_FOB_LF_SysPwrMd(Value);
      Put_Body_Info_FOB_RR_SysPwrMd(Value);
      Put_Body_Info_FOB_RF_SysPwrMd(Value);
 }
 static void Set_WSWprAct_310(uint8_T Value)
 {
      Put_Body_Info_FOB_LR_WSWprAct(Value);
      Put_Body_Info_FOB_LF_WSWprAct(Value);
      Put_Body_Info_FOB_RR_WSWprAct(Value);
      Put_Body_Info_FOB_RF_WSWprAct(Value);
 }
 static void Set_RtLwBmFld_310(uint8_T Value)
 {
      Put_Body_Info_FOB_LR_RtLwBmFld(Value);
      Put_Body_Info_FOB_LF_RtLwBmFld(Value);
      Put_Body_Info_FOB_RR_RtLwBmFld(Value);
      Put_Body_Info_FOB_RF_RtLwBmFld(Value);
 }
 static void Set_OtsdAmbtLtLvlStatV_310(uint8_T Value)
 {
      Put_Body_Info_FOB_LR_OtsdAmbtLtLvlStatV(Value);
      Put_Body_Info_FOB_LF_OtsdAmbtLtLvlStatV(Value);
      Put_Body_Info_FOB_RR_OtsdAmbtLtLvlStatV(Value);
      Put_Body_Info_FOB_RF_OtsdAmbtLtLvlStatV(Value);
 }
static void Set_OtsdAmbtLtLvlStat_310(uint8_T Value)
{
      Put_Body_Info_FOB_LR_OtsdAmbtLtLvlStat(Value);
      Put_Body_Info_FOB_LF_OtsdAmbtLtLvlStat(Value);
      Put_Body_Info_FOB_RR_OtsdAmbtLtLvlStat(Value);
      Put_Body_Info_FOB_RF_OtsdAmbtLtLvlStat(Value);
}
 static void Set_LowBmAct_310(uint8_T Value)
 {
       Put_Body_Info_FOB_LR_LowBmAct(Value);
      Put_Body_Info_FOB_LF_LowBmAct(Value);
      Put_Body_Info_FOB_RR_LowBmAct(Value);
      Put_Body_Info_FOB_RF_LowBmAct(Value);
 }
static void Set_LftLwBmFld_310(uint8_T Value)
{
      Put_Body_Info_FOB_LR_LftLwBmFld(Value);
      Put_Body_Info_FOB_LF_LftLwBmFld(Value);
      Put_Body_Info_FOB_RR_LftLwBmFld(Value);
      Put_Body_Info_FOB_RF_LftLwBmFld(Value);
}
static void Set_HighBmAct_310(uint8_T Value)
{
       Put_Body_Info_FOB_LR_HighBmAct(Value);
      Put_Body_Info_FOB_LF_HighBmAct(Value);
      Put_Body_Info_FOB_RR_HighBmAct(Value);
      Put_Body_Info_FOB_RF_HighBmAct(Value);
}
 static void Set_DrvrHndsOnWhlZn1_310(uint8_T Value)
 {
       Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn1(Value);
      Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn1(Value);
      Put_Body_Info_FOB_RR_DrvrHndsOnWhlZn1(Value);
      Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn1(Value);
 }
static void Set_DrvrHndsOnWhlZn2_310(uint8_T Value)
 {
      Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn2(Value);
      Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn2(Value);
      Put_Body_Info_FOB_RR_DrvrHndsOnWhlZn2(Value);
      Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn2(Value);
 }
static void Set_DrvrHndsOnWhlZn3_310(uint8_T Value)
{
       Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn3(Value);
      Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn3(Value);
      Put_Body_Info_FOB_RR_DrvrHndsOnWhlZn3(Value);
      Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn3(Value);
}
static void Set_a1_ClockV(uint8_T Value)
{
       Put_F_Master_Time_Sync_LR_FTimeSyncMstrClockV(Value);
       Put_F_Master_Time_Sync_LF_FTimeSyncMstrClockV(Value);
       Put_F_Master_Time_Sync_RR_FTimeSyncMstrClockV(Value);
       Put_F_Master_Time_Sync_RF_FTimeSyncMstrClockV(Value);  
}
 static void Set_a1_SensorModeCmdLRR(uint8_T Value)
 {
       Put_F_Master_Time_Sync_LR_SensorModeCmdLRR(Value);
       Put_F_Master_Time_Sync_LF_SensorModeCmdLRR(Value);
       Put_F_Master_Time_Sync_RR_SensorModeCmdLRR(Value);
       Put_F_Master_Time_Sync_RF_SensorModeCmdLRR(Value);
 }
static void Set_a1_SensorModeCmdFCamera(uint8_T Value)
{
       Put_F_Master_Time_Sync_LR_SensorModeCmdFCamera(Value);
       Put_F_Master_Time_Sync_LF_SensorModeCmdFCamera(Value);
       Put_F_Master_Time_Sync_RR_SensorModeCmdFCamera(Value);
       Put_F_Master_Time_Sync_RF_SensorModeCmdFCamera(Value);
}
static void Set_a1_SensorModeCmdSRR(uint8_T Value)
{
       Put_F_Master_Time_Sync_LR_SensorModeCmdSRR(Value);
       Put_F_Master_Time_Sync_LF_SensorModeCmdSRR(Value);
       Put_F_Master_Time_Sync_RR_SensorModeCmdSRR(Value);
       Put_F_Master_Time_Sync_RF_SensorModeCmdSRR(Value); 
}
static void Set_a1_MasterClock(uint32 Value)
{
       Put_F_Master_Time_Sync_LR_FTimeSyncMstrClock(Value);
       Put_F_Master_Time_Sync_LF_FTimeSyncMstrClock(Value);
       Put_F_Master_Time_Sync_RR_FTimeSyncMstrClock(Value);
       Put_F_Master_Time_Sync_RF_FTimeSyncMstrClock(Value);
}
	
static void Set_a1_Checksum(uint16 Value)
{
       Put_F_Master_Time_Sync_LR_FTimeSyncMstrChksm(Value);
       Put_F_Master_Time_Sync_LF_FTimeSyncMstrChksm(Value);
       Put_F_Master_Time_Sync_RR_FTimeSyncMstrChksm(Value);
       Put_F_Master_Time_Sync_RF_FTimeSyncMstrChksm(Value);
}

/*end by wjr**/

/* Model step function */
void SRR_Driver_Fcn_100ms_step(void)
{
  real_T u0;
  real_T u1;
  real_T u2;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/SysPwrMd'
   */
  SRR_Driver_Fcn_100ms_B.DataTypeConversion = (real_T)Get_SysPwrMd();

  /* Gain: '<S18>/N->E' */
  SRR_Driver_Fcn_100ms_B.NE = SRR_Driver_Fcn_100ms_P.NE_Gain *
    SRR_Driver_Fcn_100ms_B.DataTypeConversion;

  /* Chart: '<Root>/310' */
  /* Gateway: 310 */
  /* During: 310 */
  /* Entry Internal: 310 */
  /* Transition: '<S2>:13' */
  /* Transition: '<S2>:16' */
  SRR_Driver_Fcn_100ms_B.WSWshSwAtv = 0.0;
  SRR_Driver_Fcn_100ms_B.TrStLgMdAtv = 0.0;
  SRR_Driver_Fcn_100ms_B.SysPwrMdV = 0.0;
  SRR_Driver_Fcn_100ms_B.SysPwrMd_e = SRR_Driver_Fcn_100ms_B.NE;
  SRR_Driver_Fcn_100ms_B.WSWprAct = 0.0;
  SRR_Driver_Fcn_100ms_B.RtLwBmFld = 0.0;
  SRR_Driver_Fcn_100ms_B.OtsAmbtLtLvStatV = 0.0;
  SRR_Driver_Fcn_100ms_B.OtsdAmbtLtLvlStat = 2.0;
  SRR_Driver_Fcn_100ms_B.LowBmAct = 1.0;
  SRR_Driver_Fcn_100ms_B.LftLwBmFld = 0.0;
  SRR_Driver_Fcn_100ms_B.HighBmAct = 0.0;
  SRR_Driver_Fcn_100ms_B.DrvrHndsOnWhlZn1 = 0.0;
  SRR_Driver_Fcn_100ms_B.DrvrHndsOnWhlZn2 = 0.0;
  SRR_Driver_Fcn_100ms_B.DrvrHndsOnWhlZn3 = 0.0;

  /* Saturate: '<S23>/Saturation' */
  /* Transition: '<S2>:18' */
  u0 = SRR_Driver_Fcn_100ms_B.WSWshSwAtv;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation = u0;
  }

  /* End of Saturate: '<S23>/Saturation' */

  /* Gain: '<S23>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN = SRR_Driver_Fcn_100ms_P.EN_Gain *
    SRR_Driver_Fcn_100ms_B.Saturation;

  /* DataTypeConversion: '<S23>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_WSWshSwAtv_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
    -u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S23>/Data Type Conversion' */

  /* Saturate: '<S21>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.TrStLgMdAtv;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_i;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_a;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_l = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_l = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_l = u0;
  }

  /* End of Saturate: '<S21>/Saturation' */

  /* Gain: '<S21>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_i = SRR_Driver_Fcn_100ms_P.EN_Gain_n *
    SRR_Driver_Fcn_100ms_B.Saturation_l;

  /* DataTypeConversion: '<S21>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_i);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_TrStLgMdAtv_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
    -u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S21>/Data Type Conversion' */

  /* Saturate: '<S19>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.SysPwrMdV;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_k;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_i;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_m = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_m = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_m = u0;
  }

  /* End of Saturate: '<S19>/Saturation' */

  /* Gain: '<S19>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_c = SRR_Driver_Fcn_100ms_P.EN_Gain_b *
    SRR_Driver_Fcn_100ms_B.Saturation_m;

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_c);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_SysPwrMdV_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0
    : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S19>/Data Type Conversion' */

  /* Saturate: '<S20>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.SysPwrMd_e;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_g;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_b;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_b = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_b = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_b = u0;
  }

  /* End of Saturate: '<S20>/Saturation' */

  /* Gain: '<S20>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_n = SRR_Driver_Fcn_100ms_P.EN_Gain_l *
    SRR_Driver_Fcn_100ms_B.Saturation_b;

  /* DataTypeConversion: '<S20>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_n);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_SysPwrMd_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                    (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S20>/Data Type Conversion' */

  /* Saturate: '<S22>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.WSWprAct;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_kg;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_il;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_f = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_f = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_f = u0;
  }

  /* End of Saturate: '<S22>/Saturation' */

  /* Gain: '<S22>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_m = SRR_Driver_Fcn_100ms_P.EN_Gain_a *
    SRR_Driver_Fcn_100ms_B.Saturation_f;

  /* DataTypeConversion: '<S22>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_m);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_WSWprAct_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                    (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S22>/Data Type Conversion' */

  /* Saturate: '<S17>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.RtLwBmFld;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_ie;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_p;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_k = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_k = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_k = u0;
  }

  /* End of Saturate: '<S17>/Saturation' */

  /* Gain: '<S17>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_no = SRR_Driver_Fcn_100ms_P.EN_Gain_an *
    SRR_Driver_Fcn_100ms_B.Saturation_k;

  /* DataTypeConversion: '<S17>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_no);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_RtLwBmFld_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0
    : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

  /* Saturate: '<S16>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.OtsAmbtLtLvStatV;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_p;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_pu;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_h = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_h = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_h = u0;
  }

  /* End of Saturate: '<S16>/Saturation' */

  /* Gain: '<S16>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_f = SRR_Driver_Fcn_100ms_P.EN_Gain_j *
    SRR_Driver_Fcn_100ms_B.Saturation_h;

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_f);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_OtsdAmbtLtLvlStatV_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

  /* Saturate: '<S15>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.OtsdAmbtLtLvlStat;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_pj;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_l;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_kc = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_kc = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_kc = u0;
  }

  /* End of Saturate: '<S15>/Saturation' */

  /* Gain: '<S15>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_h = SRR_Driver_Fcn_100ms_P.EN_Gain_n4 *
    SRR_Driver_Fcn_100ms_B.Saturation_kc;

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_h);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_OtsdAmbtLtLvlStat_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

  /* Saturate: '<S14>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.LowBmAct;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_d;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_l4;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_p = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_p = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_p = u0;
  }

  /* End of Saturate: '<S14>/Saturation' */

  /* Gain: '<S14>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_a = SRR_Driver_Fcn_100ms_P.EN_Gain_bs *
    SRR_Driver_Fcn_100ms_B.Saturation_p;

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_a);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_LowBmAct_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
                    (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* Saturate: '<S13>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.LftLwBmFld;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_l;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_af;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_n = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_n = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_n = u0;
  }

  /* End of Saturate: '<S13>/Saturation' */

  /* Gain: '<S13>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_cw = SRR_Driver_Fcn_100ms_P.EN_Gain_m *
    SRR_Driver_Fcn_100ms_B.Saturation_n;

  /* DataTypeConversion: '<S13>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_cw);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_LftLwBmFld_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
    -u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S13>/Data Type Conversion' */

  /* Saturate: '<S12>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.HighBmAct;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_dn;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_h;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_i = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_i = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_i = u0;
  }

  /* End of Saturate: '<S12>/Saturation' */

  /* Gain: '<S12>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_am = SRR_Driver_Fcn_100ms_P.EN_Gain_nn *
    SRR_Driver_Fcn_100ms_B.Saturation_i;

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_am);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_HighBmAct_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0
    : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S12>/Data Type Conversion' */

  /* Saturate: '<S9>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.DrvrHndsOnWhlZn1;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_c;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_b2;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_mu = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_mu = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_mu = u0;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Gain: '<S9>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_h0 = SRR_Driver_Fcn_100ms_P.EN_Gain_f *
    SRR_Driver_Fcn_100ms_B.Saturation_mu;

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_h0);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_DrvrHndsOnWhlZn1_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S9>/Data Type Conversion' */

  /* Saturate: '<S10>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.DrvrHndsOnWhlZn2;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_j;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_hq;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_o = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_o = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_o = u0;
  }

  /* End of Saturate: '<S10>/Saturation' */

  /* Gain: '<S10>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_c4 = SRR_Driver_Fcn_100ms_P.EN_Gain_i *
    SRR_Driver_Fcn_100ms_B.Saturation_o;

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_c4);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_DrvrHndsOnWhlZn2_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

  /* Saturate: '<S11>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.DrvrHndsOnWhlZn3;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_ls;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_d;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_ik = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_ik = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_ik = u0;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Gain: '<S11>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_in = SRR_Driver_Fcn_100ms_P.EN_Gain_o *
    SRR_Driver_Fcn_100ms_B.Saturation_ik;

  /* DataTypeConversion: '<S11>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_in);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_DrvrHndsOnWhlZn3_310((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S11>/Data Type Conversion' */

  /* Chart: '<Root>/0A1' */
  /* Gateway: 0A1 */
  /* During: 0A1 */
  /* Entry Internal: 0A1 */
  /* Transition: '<S1>:82' */
  if (SRR_Driver_Fcn_100ms_B.NE == 0.0) {
    /* Transition: '<S1>:143' */
    /* Transition: '<S1>:145' */
    SRR_Driver_Fcn_100ms_B.ClockV = 0.0;
    SRR_Driver_Fcn_100ms_B.LRRMod = 1.0;
    SRR_Driver_Fcn_100ms_B.FrontCameraMod = 1.0;
    SRR_Driver_Fcn_100ms_B.SRRMod = 1.0;
    SRR_Driver_Fcn_100ms_B.MasterClock = 220.0;
    SRR_Driver_Fcn_100ms_B.Checksum = 3876.0;
    SRR_Driver_Fcn_100ms_DW.cnt = 0.0;

    /* Transition: '<S1>:157' */
    /* Transition: '<S1>:156' */
    /* Transition: '<S1>:123' */
  } else {
    /* Transition: '<S1>:83' */
    if ((SRR_Driver_Fcn_100ms_B.NE != 0.0) && (SRR_Driver_Fcn_100ms_DW.cnt < 3.0))
    {
      /* Transition: '<S1>:147' */
      /* Transition: '<S1>:149' */
      SRR_Driver_Fcn_100ms_DW.cnt++;
      SRR_Driver_Fcn_100ms_DW.step = 60.0;

      /* Transition: '<S1>:156' */
      /* Transition: '<S1>:123' */
    } else {
      /* Transition: '<S1>:161' */
      if (SRR_Driver_Fcn_100ms_B.NE != 2.0) {
        /* Transition: '<S1>:163' */
        /* Transition: '<S1>:169' */
        SRR_Driver_Fcn_100ms_B.LRRMod = 1.0;
        SRR_Driver_Fcn_100ms_B.FrontCameraMod = 1.0;
        SRR_Driver_Fcn_100ms_B.SRRMod = 3.0;

        /* Transition: '<S1>:165' */
      } else {
        /* Transition: '<S1>:168' */
        SRR_Driver_Fcn_100ms_B.LRRMod = 2.0;
        SRR_Driver_Fcn_100ms_B.FrontCameraMod = 2.0;
        SRR_Driver_Fcn_100ms_B.SRRMod = 2.0;
      }

      /* Transition: '<S1>:84' */
      SRR_Driver_Fcn_100ms_DW.flag = (int32_T)
        ((SRR_Driver_Fcn_100ms_B.MasterClock + 100.0) / 65536.0) - (int32_T)
        (SRR_Driver_Fcn_100ms_B.MasterClock / 65536.0);
      SRR_Driver_Fcn_100ms_B.MasterClock += 100.0;

      /* Transition: '<S1>:107' */
      if (SRR_Driver_Fcn_100ms_DW.step > 64.0) {
        /* Transition: '<S1>:103' */
        /* Transition: '<S1>:104' */
        SRR_Driver_Fcn_100ms_DW.step = 1.0;

        /* Transition: '<S1>:105' */
      } else {
        /* Transition: '<S1>:102' */
      }

      /* Transition: '<S1>:106' */
      if ((SRR_Driver_Fcn_100ms_DW.step == 1.0) || (SRR_Driver_Fcn_100ms_DW.step
           == 4.0) || (SRR_Driver_Fcn_100ms_DW.step == 6.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 9.0) || (SRR_Driver_Fcn_100ms_DW.step
           == 11.0) || (SRR_Driver_Fcn_100ms_DW.step == 14.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 16.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 19.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 21.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 24.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 27.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 29.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 32.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 34.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 37.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 39.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 42.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 44.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 47.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 50.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 52.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 55.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 57.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 60.0) ||
          (SRR_Driver_Fcn_100ms_DW.step == 62.0)) {
        /* Transition: '<S1>:115' */
        /* Transition: '<S1>:120' */
        SRR_Driver_Fcn_100ms_B.Checksum += 155.0;
        SRR_Driver_Fcn_100ms_DW.step++;

        /* Transition: '<S1>:123' */
      } else {
        /* Transition: '<S1>:122' */
        SRR_Driver_Fcn_100ms_B.Checksum -= 100.0;
        SRR_Driver_Fcn_100ms_DW.step++;
      }
    }
  }

  /* Transition: '<S1>:127' */
  if (SRR_Driver_Fcn_100ms_DW.flag == 1.0) {
    /* Transition: '<S1>:130' */
    /* Transition: '<S1>:133' */
    SRR_Driver_Fcn_100ms_B.Checksum += 255.0;

    /* Transition: '<S1>:136' */
  } else {
    /* Transition: '<S1>:135' */
  }

  /* End of Chart: '<Root>/0A1' */

  /* Saturate: '<S4>/Saturation' */
  /* Transition: '<S1>:138' */
  u0 = SRR_Driver_Fcn_100ms_B.ClockV;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_f;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_j;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_mh = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_mh = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_mh = u0;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Gain: '<S4>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_cq = SRR_Driver_Fcn_100ms_P.EN_Gain_mo *
    SRR_Driver_Fcn_100ms_B.Saturation_mh;

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_cq);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_a1_ClockV((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u0 :
    (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* Saturate: '<S7>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.LRRMod;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_a;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_k;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_mw = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_mw = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_mw = u0;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Gain: '<S7>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_mv = SRR_Driver_Fcn_100ms_P.EN_Gain_a2 *
    SRR_Driver_Fcn_100ms_B.Saturation_mw;

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_mv);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_a1_SensorModeCmdLRR((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S7>/Data Type Conversion' */

  /* Saturate: '<S6>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.FrontCameraMod;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_n;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_g;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_o4 = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_o4 = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_o4 = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Gain: '<S6>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_b = SRR_Driver_Fcn_100ms_P.EN_Gain_jq *
    SRR_Driver_Fcn_100ms_B.Saturation_o4;

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_b);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_a1_SensorModeCmdFCamera((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

  /* Saturate: '<S8>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.SRRMod;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_m;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_n;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_hb = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_hb = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_hb = u0;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Gain: '<S8>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_d = SRR_Driver_Fcn_100ms_P.EN_Gain_d *
    SRR_Driver_Fcn_100ms_B.Saturation_hb;

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_d);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  Set_a1_SensorModeCmdSRR((uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0));

  /* End of DataTypeConversion: '<S8>/Data Type Conversion' */

  /* Saturate: '<S5>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.MasterClock;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_k2;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_do;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_g = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_g = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_g = u0;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Gain: '<S5>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_o = SRR_Driver_Fcn_100ms_P.EN_Gain_e *
    SRR_Driver_Fcn_100ms_B.Saturation_g;

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_o);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  Set_a1_MasterClock(u0 < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-u0 : (uint32_T)u0);

  /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

  /* Saturate: '<S3>/Saturation' */
  u0 = SRR_Driver_Fcn_100ms_B.Checksum;
  u1 = SRR_Driver_Fcn_100ms_P.Saturation_LowerSat_n4;
  u2 = SRR_Driver_Fcn_100ms_P.Saturation_UpperSat_aq;
  if (u0 > u2) {
    SRR_Driver_Fcn_100ms_B.Saturation_im = u2;
  } else if (u0 < u1) {
    SRR_Driver_Fcn_100ms_B.Saturation_im = u1;
  } else {
    SRR_Driver_Fcn_100ms_B.Saturation_im = u0;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Gain: '<S3>/E->N' */
  SRR_Driver_Fcn_100ms_B.EN_ck = SRR_Driver_Fcn_100ms_P.EN_Gain_a5 *
    SRR_Driver_Fcn_100ms_B.Saturation_im;

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  u0 = floor(SRR_Driver_Fcn_100ms_B.EN_ck);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_a1_Checksum((uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
    -u0 : (int32_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */
}

/* Model initialize function */
void SRR_Driver_Fcn_100ms_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(SRR_Driver_Fcn_100ms_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &SRR_Driver_Fcn_100ms_B), 0,
                sizeof(B_SRR_Driver_Fcn_100ms_T));

  /* states (dwork) */
  (void) memset((void *)&SRR_Driver_Fcn_100ms_DW, 0,
                sizeof(DW_SRR_Driver_Fcn_100ms_T));

  /* InitializeConditions for Chart: '<Root>/310' */
  SRR_Driver_Fcn_100ms_B.SysPwrMd_e = 2.0;
  SRR_Driver_Fcn_100ms_B.OtsdAmbtLtLvlStat = 2.0;
  SRR_Driver_Fcn_100ms_B.LowBmAct = 1.0;

  /* InitializeConditions for Chart: '<Root>/0A1' */
  SRR_Driver_Fcn_100ms_DW.step = 1.0;
  SRR_Driver_Fcn_100ms_DW.flag = 0.0;
  SRR_Driver_Fcn_100ms_DW.cnt = 0.0;
  SRR_Driver_Fcn_100ms_B.ClockV = 0.0;
  SRR_Driver_Fcn_100ms_B.LRRMod = 0.0;
  SRR_Driver_Fcn_100ms_B.FrontCameraMod = 0.0;
  SRR_Driver_Fcn_100ms_B.SRRMod = 0.0;
  SRR_Driver_Fcn_100ms_B.MasterClock = 175820.0;
  SRR_Driver_Fcn_100ms_B.Checksum = 3716.0;
}

/* Model terminate function */
void SRR_Driver_Fcn_100ms_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
