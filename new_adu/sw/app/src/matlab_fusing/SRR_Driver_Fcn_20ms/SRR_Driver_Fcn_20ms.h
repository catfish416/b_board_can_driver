/*
 * File: SRR_Driver_Fcn_20ms.h
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

#ifndef RTW_HEADER_SRR_Driver_Fcn_20ms_h_
#define RTW_HEADER_SRR_Driver_Fcn_20ms_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef SRR_Driver_Fcn_20ms_COMMON_INCLUDES_
# define SRR_Driver_Fcn_20ms_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SRR_Driver_Fcn_20ms_COMMON_INCLUDES_ */

#include "SRR_Driver_Fcn_20ms_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S32>/Atomic Subsystem' */
typedef struct {
  real_T Switch;                       /* '<S38>/Switch' */
} B_AtomicSubsystem_SRR_Driver__T;

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion;           /* '<S4>/Data Type Conversion' */
  real_T Nkph;                         /* '<S4>/N->kph' */
  real_T kphmps;                       /* '<S4>/kph->mps' */
  real_T LongVelms;                    /* '<S26>/Saturation' */
  real_T DataTypeConversion_d;         /* '<S22>/Data Type Conversion' */
  real_T NE;                           /* '<S22>/N->E' */
  real_T degpsradps;                   /* '<S22>/degps->radps' */
  real_T LatVelms;                     /* '<S49>/Memory2' */
  real_T LatVelms_j;                   /* '<S49>/Switch' */
  real_T SlipAngrad;                   /* '<S42>/Divide4' */
  real_T Saturation2;                  /* '<S29>/Saturation2' */
  real_T Gain;                         /* '<S29>/Gain' */
  real_T DataTypeConversion_f;         /* '<S1>/Data Type Conversion' */
  real_T NE_d;                         /* '<S1>/N->E' */
  real_T degrad;                       /* '<S1>/deg->rad' */
  real_T StrTireAngrad;                /* '<S26>/Gain1' */
  real_T Saturation2_i;                /* '<S30>/Saturation2' */
  real_T Gain_k;                       /* '<S30>/Gain' */
  real_T Saturation2_ix;               /* '<S31>/Saturation2' */
  real_T Gain_g;                       /* '<S31>/Gain' */
  real_T Saturation;                   /* '<S21>/Saturation' */
  real_T EN;                           /* '<S21>/E->N' */
  real_T Saturation_i;                 /* '<S8>/Saturation' */
  real_T EN_m;                         /* '<S8>/E->N' */
  real_T Saturation_o;                 /* '<S18>/Saturation' */
  real_T EN_h;                         /* '<S18>/E->N' */
  real_T Saturation_h;                 /* '<S20>/Saturation' */
  real_T EN_mi;                        /* '<S20>/E->N' */
  real_T Saturation_e;                 /* '<S19>/Saturation' */
  real_T EN_l;                         /* '<S19>/E->N' */
  real_T Saturation_j;                 /* '<S7>/Saturation' */
  real_T EN_mt;                        /* '<S7>/E->N' */
  real_T Saturation_c;                 /* '<S6>/Saturation' */
  real_T EN_ln;                        /* '<S6>/E->N' */
  real_T DataTypeConversion_fb;        /* '<S3>/Data Type Conversion' */
  real_T NE_h;                         /* '<S3>/N->E' */
  real_T TravelDirection;              /* '<S45>/Switch' */
  real_T Saturation2_h;                /* '<S32>/Saturation2' */
  real_T Gain_m;                       /* '<S32>/Gain' */
  real_T Saturation2_b;                /* '<S34>/Saturation2' */
  real_T Gain_a;                       /* '<S34>/Gain' */
  real_T Gain2;                        /* '<S33>/Gain2' */
  real_T Saturation2_m;                /* '<S33>/Saturation2' */
  real_T Gain_h;                       /* '<S33>/Gain' */
  real_T ModeInformation1_L2_H;        /* '<S44>/Switch' */
  real_T Saturation_b;                 /* '<S15>/Saturation' */
  real_T EN_i;                         /* '<S15>/E->N' */
  real_T Saturation_or;                /* '<S11>/Saturation' */
  real_T EN_e;                         /* '<S11>/E->N' */
  real_T Saturation_cd;                /* '<S12>/Saturation' */
  real_T EN_lo;                        /* '<S12>/E->N' */
  real_T Saturation_l;                 /* '<S10>/Saturation' */
  real_T EN_hi;                        /* '<S10>/E->N' */
  real_T Saturation_p;                 /* '<S9>/Saturation' */
  real_T EN_d;                         /* '<S9>/E->N' */
  real_T Saturation_h1;                /* '<S16>/Saturation' */
  real_T EN_a;                         /* '<S16>/E->N' */
  real_T Saturation_hd;                /* '<S17>/Saturation' */
  real_T EN_my;                        /* '<S17>/E->N' */
  real_T Saturation_g;                 /* '<S13>/Saturation' */
  real_T EN_io;                        /* '<S13>/E->N' */
  real_T Saturation_jy;                /* '<S14>/Saturation' */
  real_T EN_j;                         /* '<S14>/E->N' */
  real_T Saturation_es;                /* '<S5>/Saturation' */
  real_T EN_c;                         /* '<S5>/E->N' */
  real_T DataTypeConversion_g;         /* '<S2>/Data Type Conversion' */
  real_T NE_f;                         /* '<S2>/N->E' */
  real_T MathFunction1[2];             /* '<S49>/Math Function1' */
  real_T Gain_ky;                      /* '<S53>/Gain' */
  real_T Gain1;                        /* '<S53>/Gain1' */
  real_T Subtract2;                    /* '<S53>/Subtract2' */
  real_T Divide3;                      /* '<S53>/Divide3' */
  real_T Divide2;                      /* '<S53>/Divide2' */
  real_T Divide1;                      /* '<S53>/Divide1' */
  real_T Gain2_h;                      /* '<S53>/Gain2' */
  real_T Divide4;                      /* '<S53>/Divide4' */
  real_T Gain3;                        /* '<S53>/Gain3' */
  real_T Divide5;                      /* '<S53>/Divide5' */
  real_T Subtract1;                    /* '<S53>/Subtract1' */
  real_T Divide9;                      /* '<S53>/Divide9' */
  real_T Subtract3;                    /* '<S53>/Subtract3' */
  real_T Yawraterads;                  /* '<S49>/Memory3' */
  real_T Divide6;                      /* '<S53>/Divide6' */
  real_T Gain4;                        /* '<S53>/Gain4' */
  real_T Divide7;                      /* '<S53>/Divide7' */
  real_T Subtract4;                    /* '<S53>/Subtract4' */
  real_T Divide8;                      /* '<S53>/Divide8' */
  real_T Subtract5;                    /* '<S53>/Subtract5' */
  real_T Gain2_a;                      /* '<S54>/Gain2' */
  real_T Divide4_e;                    /* '<S54>/Divide4' */
  real_T Gain3_o;                      /* '<S54>/Gain3' */
  real_T Divide5_m;                    /* '<S54>/Divide5' */
  real_T Subtract1_j;                  /* '<S54>/Subtract1' */
  real_T Divide3_m;                    /* '<S54>/Divide3' */
  real_T Divide2_i;                    /* '<S54>/Divide2' */
  real_T Gain1_a;                      /* '<S54>/Gain1' */
  real_T Divide1_f;                    /* '<S54>/Divide1' */
  real_T Gain5;                        /* '<S54>/Gain5' */
  real_T Divide6_o;                    /* '<S54>/Divide6' */
  real_T Subtract2_h;                  /* '<S54>/Subtract2' */
  real_T Divide10;                     /* '<S54>/Divide10' */
  real_T Divide9_h;                    /* '<S54>/Divide9' */
  real_T Gain4_i;                      /* '<S54>/Gain4' */
  real_T Divide7_l;                    /* '<S54>/Divide7' */
  real_T Subtract4_e;                  /* '<S54>/Subtract4' */
  real_T Divide8_p;                    /* '<S54>/Divide8' */
  real_T Subtract5_k;                  /* '<S54>/Subtract5' */
  real_T TmpSignalConversionAtMathFuncti[2];/* '<S49>/eq_01' */
  real_T MathFunction2[2];             /* '<S49>/Math Function2' */
  real_T MathFunction3[2];             /* '<S49>/Math Function3' */
  real_T Memory1[4];                   /* '<S49>/Memory1' */
  real_T Product1;                     /* '<S49>/Product1' */
  real_T Gain2_aw;                     /* '<S59>/Gain2' */
  real_T Gain3_p;                      /* '<S59>/Gain3' */
  real_T Subtract1_c;                  /* '<S59>/Subtract1' */
  real_T Divide3_h;                    /* '<S59>/Divide3' */
  real_T Divide2_p;                    /* '<S59>/Divide2' */
  real_T Subtract2_f;                  /* '<S59>/Subtract2' */
  real_T Gain1_f;                      /* '<S60>/Gain1' */
  real_T Divide4_p;                    /* '<S60>/Divide4' */
  real_T Gain4_e;                      /* '<S60>/Gain4' */
  real_T Divide5_f;                    /* '<S60>/Divide5' */
  real_T Subtract3_p;                  /* '<S60>/Subtract3' */
  real_T Divide2_l;                    /* '<S60>/Divide2' */
  real_T Subtract4_j;                  /* '<S60>/Subtract4' */
  real_T Divide1_n;                    /* '<S60>/Divide1' */
  real_T TmpSignalConversionAtMathFunc_j[2];
  real_T MathFunction2_c[2];           /* '<S57>/Math Function2' */
  real_T Gain_b[4];                    /* '<S57>/Gain' */
  real_T Gain1_h;                      /* '<S61>/Gain1' */
  real_T Divide4_k;                    /* '<S61>/Divide4' */
  real_T Gain4_h;                      /* '<S61>/Gain4' */
  real_T Divide5_j;                    /* '<S61>/Divide5' */
  real_T Subtract3_ph;                 /* '<S61>/Subtract3' */
  real_T Divide1_e;                    /* '<S61>/Divide1' */
  real_T Divide6_l;                    /* '<S61>/Divide6' */
  real_T Gain1_g;                      /* '<S62>/Gain1' */
  real_T Divide1_k;                    /* '<S62>/Divide1' */
  real_T Gain5_e;                      /* '<S62>/Gain5' */
  real_T Divide6_p;                    /* '<S62>/Divide6' */
  real_T Subtract3_i;                  /* '<S62>/Subtract3' */
  real_T Divide10_l;                   /* '<S62>/Divide10' */
  real_T Divide9_k;                    /* '<S62>/Divide9' */
  real_T Subtract2_m;                  /* '<S62>/Subtract2' */
  real_T TmpSignalConversionAtMathFun_jm[2];
  real_T MathFunction2_m[2];           /* '<S58>/Math Function2' */
  real_T Gain_f[4];                    /* '<S58>/Gain' */
  real_T SumofElements1[4];            /* '<S56>/Sum of Elements1' */
  real_T MathFunction2_k[4];           /* '<S55>/Math Function2' */
  real_T Product[4];                   /* '<S55>/Product' */
  real_T SumofElements1_a[4];          /* '<S55>/Sum of Elements1' */
  real_T MathFunction1_e[2];           /* '<S52>/Math Function1' */
  real_T Product1_a;                   /* '<S52>/Product1' */
  real_T SumofElements1_k;             /* '<S52>/Sum of Elements1' */
  real_T Product_a[2];                 /* '<S52>/Product' */
  real_T Subtract;                     /* '<S49>/Subtract' */
  real_T Product2[2];                  /* '<S49>/Product2' */
  real_T Product3[4];                  /* '<S49>/Product3' */
  real_T SumofElements2[4];            /* '<S49>/Sum of Elements2' */
  real_T Product4[4];                  /* '<S49>/Product4' */
  real_T SumofElements1_m[2];          /* '<S49>/Sum of Elements1' */
  real_T Switch;                       /* '<S37>/Switch' */
  real_T VehiclePathCurvature1m;       /* '<S50>/Multiport Switch' */
  real_T Divide1_ks;                   /* '<S50>/Divide1' */
  real_T TrigonometricFunction;        /* '<S50>/Trigonometric Function' */
  real_T Divide;                       /* '<S50>/Divide' */
  real_T Switch_n;                     /* '<S36>/Switch' */
  real_T TrigonometricFunction_d;      /* '<S41>/Trigonometric Function' */
  real_T Gain_ak;                      /* '<S41>/Gain' */
  real_T MultiportSwitch;              /* '<S41>/Multiport Switch' */
  real_T VehiclePathTurnCenterLateralOff;/* '<S41>/Product' */
  real_T TrigonometricFunction_a;      /* '<S48>/Trigonometric Function' */
  real_T Divide_c;                     /* '<S48>/Divide' */
  real_T Saturation2_p;                /* '<S48>/Saturation2' */
  real_T R;                            /* '<S47>/Divide1' */
  real_T Saturation1;                  /* '<S47>/Saturation1' */
  real_T Switch_i;                     /* '<S35>/Switch' */
  real_T VehiclePathTurnCenterLongitudin;/* '<S43>/Multiport Switch' */
  real_T TrigonometricFunction1;       /* '<S43>/Trigonometric Function1' */
  real_T Gain1_gs;                     /* '<S43>/Gain1' */
  real_T R_h;                          /* '<S65>/Divide1' */
  real_T Saturation1_p;                /* '<S65>/Saturation1' */
  real_T Product1_l;                   /* '<S43>/Product1' */
  real_T TriDir308;                    /* '<S24>/308' */
  real_T LongVel308;                   /* '<S24>/308' */
  real_T LongVelV;                     /* '<S24>/308' */
  real_T LatVel308;                    /* '<S24>/308' */
  real_T LatVelV;                      /* '<S24>/308' */
  real_T YawRate308;                   /* '<S24>/308' */
  real_T YawRateV;                     /* '<S24>/308' */
  real_T ModeInfo308;                  /* '<S24>/308' */
  real_T RolCnt;                       /* '<S24>/308' */
  real_T Checksum;                     /* '<S24>/308' */
  real_T LongoftV;                     /* '<S24>/306' */
  real_T CurvatureV;                   /* '<S24>/306' */
  real_T Rolcnt;                       /* '<S24>/306' */
  real_T Longoffset;                   /* '<S24>/306' */
  real_T Latoffset;                    /* '<S24>/306' */
  real_T Curvature;                    /* '<S24>/306' */
  real_T Checksum_m;                   /* '<S24>/306' */
  int16_T DataTypeConversion_j;        /* '<S30>/Data Type Conversion' */
  int16_T DataTypeConversion_l;        /* '<S31>/Data Type Conversion' */
  int16_T DataTypeConversion_n;        /* '<S32>/Data Type Conversion' */
  int16_T DataTypeConversion_p;        /* '<S34>/Data Type Conversion' */
  int16_T DataTypeConversion_dp;       /* '<S33>/Data Type Conversion' */
  int8_T DataTypeConversion_jz;        /* '<S29>/Data Type Conversion' */
  uint8_T Compare;                     /* '<S66>/Compare' */
  uint8_T Compare_g;                   /* '<S63>/Compare' */
  uint8_T Compare_d;                   /* '<S46>/Compare' */
  uint8_T Compare_e;                   /* '<S64>/Compare' */
  boolean_T Reverse_gear;              /* '<S45>/Relational Operator2' */
  B_AtomicSubsystem_SRR_Driver__T AtomicSubsystem_j;/* '<S34>/Atomic Subsystem' */
  B_AtomicSubsystem_SRR_Driver__T AtomicSubsystem_i;/* '<S33>/Atomic Subsystem' */
  B_AtomicSubsystem_SRR_Driver__T AtomicSubsystem_f;/* '<S32>/Atomic Subsystem' */
} B_SRR_Driver_Fcn_20ms_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Memory2_PreviousInput;        /* '<S49>/Memory2' */
  real_T Memory3_PreviousInput;        /* '<S49>/Memory3' */
  real_T Memory1_PreviousInput[4];     /* '<S49>/Memory1' */
  real_T Product_DWORK1[4];            /* '<S55>/Product' */
  real_T Product_DWORK1_m;             /* '<S52>/Product' */
  real_T Product_DWORK3;               /* '<S52>/Product' */
  real_T Product_DWORK4;               /* '<S52>/Product' */
  int32_T Product_DWORK2;              /* '<S52>/Product' */
} DW_SRR_Driver_Fcn_20ms_T;

/* Parameters for system: '<S32>/Atomic Subsystem' */
struct P_AtomicSubsystem_SRR_Driver__T_ {
  real_T TestData_Value;               /* Expression: 0
                                        * Referenced by: '<S38>/TestData'
                                        */
  real_T TestFlag0_test1_model_Value;  /* Expression: 1
                                        * Referenced by: '<S38>/TestFlag[0_test|1_model]'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S38>/Switch'
                                        */
};

/* Parameters (auto storage) */
struct P_SRR_Driver_Fcn_20ms_T_ {
  real_T LatVel_evulation_Iz;          /* Mask Parameter: LatVel_evulation_Iz
                                        * Referenced by:
                                        *   '<S54>/Parameter_14'
                                        *   '<S54>/Parameter_2'
                                        *   '<S54>/Parameter_8'
                                        *   '<S61>/Parameter_7'
                                        *   '<S62>/Parameter_14'
                                        */
  real_T LatVel_evulation_R;           /* Mask Parameter: LatVel_evulation_R
                                        * Referenced by: '<S52>/R'
                                        */
  real_T LatVel_evulation_a;           /* Mask Parameter: LatVel_evulation_a
                                        * Referenced by:
                                        *   '<S53>/Parameter_4'
                                        *   '<S54>/Parameter_12'
                                        *   '<S54>/Parameter_15'
                                        *   '<S54>/Parameter_4'
                                        *   '<S54>/Parameter_9'
                                        *   '<S60>/Parameter_4'
                                        *   '<S61>/Parameter_4'
                                        *   '<S62>/Parameter_12'
                                        *   '<S62>/Parameter_9'
                                        */
  real_T LatVel_evulation_b;           /* Mask Parameter: LatVel_evulation_b
                                        * Referenced by:
                                        *   '<S53>/Parameter_6'
                                        *   '<S54>/Parameter_11'
                                        *   '<S54>/Parameter_13'
                                        *   '<S54>/Parameter_6'
                                        *   '<S60>/Parameter_6'
                                        *   '<S61>/Parameter_6'
                                        *   '<S62>/Parameter_11'
                                        *   '<S62>/Parameter_13'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T CompareToConstant_const_d;    /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T CompareToConstant_const_m;    /* Mask Parameter: CompareToConstant_const_m
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T CompareToConstant_const_p;    /* Mask Parameter: CompareToConstant_const_p
                                        * Referenced by: '<S66>/Constant'
                                        */
  real_T LatVel_evulation_deltaT;      /* Mask Parameter: LatVel_evulation_deltaT
                                        * Referenced by: '<S49>/Constant'
                                        */
  real_T LatVel_evulation_kf;          /* Mask Parameter: LatVel_evulation_kf
                                        * Referenced by:
                                        *   '<S53>/Parameter_0'
                                        *   '<S53>/Parameter_3'
                                        *   '<S53>/Parameter_7'
                                        *   '<S54>/Parameter_1'
                                        *   '<S54>/Parameter_3'
                                        *   '<S54>/Parameter_7'
                                        *   '<S59>/Parameter_0'
                                        *   '<S60>/Parameter_1'
                                        *   '<S61>/Parameter_1'
                                        *   '<S62>/Parameter_1'
                                        */
  real_T LatVel_evulation_kr;          /* Mask Parameter: LatVel_evulation_kr
                                        * Referenced by:
                                        *   '<S53>/Parameter_1'
                                        *   '<S53>/Parameter_5'
                                        *   '<S54>/Parameter_10'
                                        *   '<S54>/Parameter_5'
                                        *   '<S59>/Parameter_2'
                                        *   '<S60>/Parameter_5'
                                        *   '<S61>/Parameter_5'
                                        *   '<S62>/Parameter_10'
                                        */
  real_T LatVel_evulation_m;           /* Mask Parameter: LatVel_evulation_m
                                        * Referenced by:
                                        *   '<S53>/Parameter_2'
                                        *   '<S53>/Parameter_8'
                                        *   '<S53>/Parameter_9'
                                        *   '<S59>/Parameter_3'
                                        *   '<S60>/Parameter_2'
                                        */
  real_T TestData_Value;               /* Expression: -1.6
                                        * Referenced by: '<S35>/TestData'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S43>/Gain1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 8191
                                        * Referenced by: '<S65>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -8191
                                        * Referenced by: '<S65>/Saturation1'
                                        */
  real_T Constant_Value;               /* Expression: -1.6
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T TestFlag0_test1_model_Value;  /* Expression: 1
                                        * Referenced by: '<S35>/TestFlag[0_test|1_model]'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S35>/Switch'
                                        */
  real_T TestData_Value_n;             /* Expression: 1000
                                        * Referenced by: '<S36>/TestData'
                                        */
  real_T Saturation1_UpperSat_j;       /* Expression: 8191
                                        * Referenced by: '<S47>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: -8191
                                        * Referenced by: '<S47>/Saturation1'
                                        */
  real_T Constant_Value_d;             /* Expression: 2.86
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 8191
                                        * Referenced by: '<S48>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -8191
                                        * Referenced by: '<S48>/Saturation2'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S41>/Gain'
                                        */
  real_T TestFlag0_test1_model_Value_g;/* Expression: 1
                                        * Referenced by: '<S36>/TestFlag[0_test|1_model]'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0.5
                                        * Referenced by: '<S36>/Switch'
                                        */
  real_T TestData_Value_b;             /* Expression: 0
                                        * Referenced by: '<S37>/TestData'
                                        */
  real_T Constant_Value_b;             /* Expression: 2.86
                                        * Referenced by: '<S50>/Constant'
                                        */
  real_T TestFlag0_test1_model_Value_o;/* Expression: 1
                                        * Referenced by: '<S37>/TestFlag[0_test|1_model]'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0.5
                                        * Referenced by: '<S37>/Switch'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S49>/Zero'
                                        */
  real_T Constant1_Value;              /* Expression: 2
                                        * Referenced by: '<S44>/Constant1'
                                        */
  real_T Constant_Value_g;             /* Expression: 1
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S45>/Constant2'
                                        */
  real_T Constant1_Value_k;            /* Expression: 2
                                        * Referenced by: '<S45>/Constant1'
                                        */
  real_T Nkph_Gain;                    /* Expression: 0.015625
                                        * Referenced by: '<S4>/N->kph'
                                        */
  real_T kphmps_Gain;                  /* Expression: 1/3.6
                                        * Referenced by: '<S4>/kph->mps'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 127.9375
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.1
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real_T NE_Gain;                      /* Expression: 0.0625
                                        * Referenced by: '<S22>/N->E'
                                        */
  real_T degpsradps_Gain;              /* Expression: pi/180
                                        * Referenced by: '<S22>/degps->radps'
                                        */
  real_T Memory2_X0;                   /* Expression: 0.1
                                        * Referenced by: '<S49>/Memory2'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0.1
                                        * Referenced by: '<S49>/Switch'
                                        */
  real_T Saturation2_UpperSat_m;       /* Expression: 12.7
                                        * Referenced by: '<S29>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_o;       /* Expression: -12.8
                                        * Referenced by: '<S29>/Saturation2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 10
                                        * Referenced by: '<S29>/Gain'
                                        */
  real_T NE_Gain_d;                    /* Expression: 0.0625
                                        * Referenced by: '<S1>/N->E'
                                        */
  real_T degrad_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S1>/deg->rad'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 1/15.6
                                        * Referenced by: '<S26>/Gain1'
                                        */
  real_T Saturation2_UpperSat_n;       /* Expression: 8191
                                        * Referenced by: '<S30>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_n;       /* Expression: -8192
                                        * Referenced by: '<S30>/Saturation2'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 1
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Saturation2_UpperSat_m4;      /* Expression: 0.32767
                                        * Referenced by: '<S31>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_g;       /* Expression: -0.32768
                                        * Referenced by: '<S31>/Saturation2'
                                        */
  real_T Gain_Gain_fw;                 /* Expression: 1/1e-5
                                        * Referenced by: '<S31>/Gain'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: 1
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: 0
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T EN_Gain;                      /* Expression: 1/1
                                        * Referenced by: '<S21>/E->N'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 1
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T EN_Gain_g;                    /* Expression: 1/1
                                        * Referenced by: '<S8>/E->N'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 3
                                        * Referenced by: '<S18>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: 0
                                        * Referenced by: '<S18>/Saturation'
                                        */
  real_T EN_Gain_o;                    /* Expression: 1/1
                                        * Referenced by: '<S18>/E->N'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 12.7
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: -12.8
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T EN_Gain_e;                    /* Expression: 1/0.1
                                        * Referenced by: '<S20>/E->N'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: 8191
                                        * Referenced by: '<S19>/Saturation'
                                        */
  real_T Saturation_LowerSat_nd;       /* Expression: -8192
                                        * Referenced by: '<S19>/Saturation'
                                        */
  real_T EN_Gain_k;                    /* Expression: 1/1
                                        * Referenced by: '<S19>/E->N'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: 0.32767
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: -0.32768
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T EN_Gain_c;                    /* Expression: 1/1e-5
                                        * Referenced by: '<S7>/E->N'
                                        */
  real_T Saturation_UpperSat_ej;       /* Expression: 2047
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat_et;       /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T EN_Gain_a;                    /* Expression: 1/1
                                        * Referenced by: '<S6>/E->N'
                                        */
  real_T NE_Gain_m;                    /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  real_T Constant4_Value;              /* Expression: 14
                                        * Referenced by: '<S45>/Constant4'
                                        */
  real_T Saturation2_UpperSat_a;       /* Expression: 127.9375
                                        * Referenced by: '<S32>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_i;       /* Expression: -128
                                        * Referenced by: '<S32>/Saturation2'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 1/0.0625
                                        * Referenced by: '<S32>/Gain'
                                        */
  real_T Saturation2_UpperSat_j;       /* Expression: 6.35
                                        * Referenced by: '<S34>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_m;       /* Expression: -6.4
                                        * Referenced by: '<S34>/Saturation2'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1/0.05
                                        * Referenced by: '<S34>/Gain'
                                        */
  real_T Gain2_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S33>/Gain2'
                                        */
  real_T Saturation2_UpperSat_b;       /* Expression: 127.9375
                                        * Referenced by: '<S33>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_oz;      /* Expression: -128
                                        * Referenced by: '<S33>/Saturation2'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 1/0.0625
                                        * Referenced by: '<S33>/Gain'
                                        */
  real_T Saturation_UpperSat_ea;       /* Expression: 3
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T EN_Gain_go;                   /* Expression: 1/1
                                        * Referenced by: '<S15>/E->N'
                                        */
  real_T Saturation_UpperSat_ih;       /* Expression: 127.9375
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: -128
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real_T EN_Gain_p;                    /* Expression: 1/0.0625
                                        * Referenced by: '<S11>/E->N'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 1
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: 0
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T EN_Gain_n;                    /* Expression: 1/1
                                        * Referenced by: '<S12>/E->N'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 1
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_LowerSat_ja;       /* Expression: 0
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T EN_Gain_aw;                   /* Expression: 1/1
                                        * Referenced by: '<S10>/E->N'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 6.35
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation_LowerSat_na;       /* Expression: -6.4
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T EN_Gain_i;                    /* Expression: 1/0.05
                                        * Referenced by: '<S9>/E->N'
                                        */
  real_T Saturation_UpperSat_b;        /* Expression: 127.9375
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: -128
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real_T EN_Gain_p1;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S16>/E->N'
                                        */
  real_T Saturation_UpperSat_gd;       /* Expression: 1
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real_T Saturation_LowerSat_p1;       /* Expression: 0
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real_T EN_Gain_b;                    /* Expression: 1/1
                                        * Referenced by: '<S17>/E->N'
                                        */
  real_T Saturation_UpperSat_b1;       /* Expression: 3
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Saturation_LowerSat_or;       /* Expression: 0
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T EN_Gain_bb;                   /* Expression: 1/1
                                        * Referenced by: '<S13>/E->N'
                                        */
  real_T Saturation_UpperSat_no;       /* Expression: 3
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: 0
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T EN_Gain_g4;                   /* Expression: 1/1
                                        * Referenced by: '<S14>/E->N'
                                        */
  real_T Saturation_UpperSat_pj;       /* Expression: 2047
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_bb;       /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T EN_Gain_m;                    /* Expression: 1/1
                                        * Referenced by: '<S5>/E->N'
                                        */
  real_T NE_Gain_a;                    /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  real_T H_Value[2];                   /* Expression: [0 1]
                                        * Referenced by: '<S49>/H'
                                        */
  real_T H1_Value[2];                  /* Expression: [0 1]
                                        * Referenced by: '<S49>/H1'
                                        */
  real_T I_Value[4];                   /* Expression: [1 0;0 1]
                                        * Referenced by: '<S49>/I'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 2
                                        * Referenced by: '<S53>/Gain'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 2
                                        * Referenced by: '<S53>/Gain1'
                                        */
  real_T Gain2_Gain_g;                 /* Expression: 2
                                        * Referenced by: '<S53>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 2
                                        * Referenced by: '<S53>/Gain3'
                                        */
  real_T Memory3_X0;                   /* Expression: 0.2
                                        * Referenced by: '<S49>/Memory3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 2
                                        * Referenced by: '<S53>/Gain4'
                                        */
  real_T Gain2_Gain_g3;                /* Expression: 2
                                        * Referenced by: '<S54>/Gain2'
                                        */
  real_T Gain3_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S54>/Gain3'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 2
                                        * Referenced by: '<S54>/Gain1'
                                        */
  real_T Gain5_Gain;                   /* Expression: 2
                                        * Referenced by: '<S54>/Gain5'
                                        */
  real_T Gain4_Gain_g;                 /* Expression: 2
                                        * Referenced by: '<S54>/Gain4'
                                        */
  real_T Memory1_X0[4];                /* Expression: [0.2 0;0 0.1]
                                        * Referenced by: '<S49>/Memory1'
                                        */
  real_T Gain2_Gain_n;                 /* Expression: 2
                                        * Referenced by: '<S59>/Gain2'
                                        */
  real_T Gain3_Gain_i;                 /* Expression: 2
                                        * Referenced by: '<S59>/Gain3'
                                        */
  real_T Constant2_Value_j;            /* Expression: 1
                                        * Referenced by: '<S59>/Constant2'
                                        */
  real_T Gain1_Gain_cu;                /* Expression: 2
                                        * Referenced by: '<S60>/Gain1'
                                        */
  real_T Gain4_Gain_b;                 /* Expression: 2
                                        * Referenced by: '<S60>/Gain4'
                                        */
  real_T Gain_Gain_n[2];               /* Expression: [1;0]
                                        * Referenced by: '<S57>/Gain'
                                        */
  real_T Gain1_Gain_pv;                /* Expression: 2
                                        * Referenced by: '<S61>/Gain1'
                                        */
  real_T Gain4_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S61>/Gain4'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S62>/Gain1'
                                        */
  real_T Gain5_Gain_l;                 /* Expression: 2
                                        * Referenced by: '<S62>/Gain5'
                                        */
  real_T Constant2_Value_c;            /* Expression: 1
                                        * Referenced by: '<S62>/Constant2'
                                        */
  real_T Gain_Gain_fd[2];              /* Expression: [0;1]
                                        * Referenced by: '<S58>/Gain'
                                        */
  real_T Q_Value[4];                   /* Expression: [Qv 0 ;0 Qy]
                                        * Referenced by: '<S55>/Q'
                                        */
  real_T H_Value_l[2];                 /* Expression: [0 1]
                                        * Referenced by: '<S52>/H'
                                        */
  uint8_T Switch_Threshold_i;          /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S44>/Switch'
                                        */
  P_AtomicSubsystem_SRR_Driver__T AtomicSubsystem_j;/* '<S34>/Atomic Subsystem' */
  P_AtomicSubsystem_SRR_Driver__T AtomicSubsystem_i;/* '<S33>/Atomic Subsystem' */
  P_AtomicSubsystem_SRR_Driver__T AtomicSubsystem_f;/* '<S32>/Atomic Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SRR_Driver_Fcn_20ms_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_SRR_Driver_Fcn_20ms_T SRR_Driver_Fcn_20ms_P;

/* Block signals (auto storage) */
extern B_SRR_Driver_Fcn_20ms_T SRR_Driver_Fcn_20ms_B;

/* Block states (auto storage) */
extern DW_SRR_Driver_Fcn_20ms_T SRR_Driver_Fcn_20ms_DW;

/* Model entry point functions */
extern void SRR_Driver_Fcn_20ms_initialize(void);
extern void SRR_Driver_Fcn_20ms_step(void);
extern void SRR_Driver_Fcn_20ms_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SRR_Driver_Fcn_20ms_T *const SRR_Driver_Fcn_20ms_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SRR_Driver_Fcn_20ms'
 * '<S1>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_SrtWhlAng'
 * '<S2>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_SysPwrMd'
 * '<S3>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_TransEstGear'
 * '<S4>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_VehSpd'
 * '<S5>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath2_Checksum'
 * '<S6>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Checksum'
 * '<S7>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Curvature'
 * '<S8>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_CurvatureV'
 * '<S9>'   : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2LatVel'
 * '<S10>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2LatVelV'
 * '<S11>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2LongVel'
 * '<S12>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2LongVelV'
 * '<S13>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2ModeInfo'
 * '<S14>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2RollCnt'
 * '<S15>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2TravlDirctn'
 * '<S16>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2YawRate'
 * '<S17>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_Data2YawRateV'
 * '<S18>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_RollingCount'
 * '<S19>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_TrnCtrLatOfst'
 * '<S20>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_TrnCtrLngOfst'
 * '<S21>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_Vpath_TrnCtrLngOfstV'
 * '<S22>'  : 'SRR_Driver_Fcn_20ms/Data_Cov_YawRate'
 * '<S23>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver'
 * '<S24>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface'
 * '<S25>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model'
 * '<S26>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Subsystem'
 * '<S27>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/306'
 * '<S28>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/308'
 * '<S29>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert'
 * '<S30>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert1'
 * '<S31>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert2'
 * '<S32>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert3'
 * '<S33>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert4'
 * '<S34>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert5'
 * '<S35>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert/Atomic Subsystem'
 * '<S36>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert1/Atomic Subsystem'
 * '<S37>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert2/Atomic Subsystem'
 * '<S38>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert3/Atomic Subsystem'
 * '<S39>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert4/Atomic Subsystem'
 * '<S40>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/CANInterface/Convert5/Atomic Subsystem'
 * '<S41>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/LatOffset_Cal'
 * '<S42>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity'
 * '<S43>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/LongOffset_Cal'
 * '<S44>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Mode Information[1_L|2_H]'
 * '<S45>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Travel Direction[1_F|2_R]'
 * '<S46>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/LatOffset_Cal/Compare To Constant'
 * '<S47>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/LatOffset_Cal/HighSpeed'
 * '<S48>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/LatOffset_Cal/LowSpeed'
 * '<S49>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation'
 * '<S50>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/Vehicle Path Curvature'
 * '<S51>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_01'
 * '<S52>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03'
 * '<S53>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_01/XK_Model_1'
 * '<S54>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_01/XK_Model_2'
 * '<S55>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03/eq_02'
 * '<S56>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03/eq_02/J_Cal'
 * '<S57>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03/eq_02/J_Cal/Jacobian_1'
 * '<S58>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03/eq_02/J_Cal/Jacobian_2'
 * '<S59>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03/eq_02/J_Cal/Jacobian_1/Subsystem_1'
 * '<S60>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03/eq_02/J_Cal/Jacobian_1/Subsystem_2'
 * '<S61>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03/eq_02/J_Cal/Jacobian_2/Subsystem_1'
 * '<S62>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/LatVel_evulation/eq_03/eq_02/J_Cal/Jacobian_2/Subsystem_2'
 * '<S63>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Lateral_Velocity/Vehicle Path Curvature/Compare To Constant'
 * '<S64>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/LongOffset_Cal/Compare To Constant'
 * '<S65>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/LongOffset_Cal/HighSpeed'
 * '<S66>'  : 'SRR_Driver_Fcn_20ms/SRR_Driver/Path Predicted Model/Mode Information[1_L|2_H]/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_SRR_Driver_Fcn_20ms_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
