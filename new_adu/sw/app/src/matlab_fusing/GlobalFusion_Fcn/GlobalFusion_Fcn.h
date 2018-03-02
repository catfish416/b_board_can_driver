/*
 * File: GlobalFusion_Fcn.h
 *
 * Code generated for Simulink model 'GlobalFusion_Fcn'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 20:03:39 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GlobalFusion_Fcn_h_
#define RTW_HEADER_GlobalFusion_Fcn_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef GlobalFusion_Fcn_COMMON_INCLUDES_
# define GlobalFusion_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* GlobalFusion_Fcn_COMMON_INCLUDES_ */

#include "GlobalFusion_Fcn_types.h"
#include "rt_i32zcfcn.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S17>/FusTrackUpdate.Update' */
typedef struct {
  real_T Abs;                          /* '<S55>/Abs' */
  real_T Switch;                       /* '<S55>/Switch' */
  real_T TmpSignalConversionAtMathFunction2Inport1[4];
  real_T MathFunction2[4];             /* '<S59>/Math Function2' */
  real_T Gain[16];                     /* '<S59>/Gain' */
  real_T Abs_j;                        /* '<S56>/Abs' */
  real_T Switch_a;                     /* '<S56>/Switch' */
  real_T TmpSignalConversionAtMathFunction1Inport1[4];
  real_T MathFunction1[4];             /* '<S59>/Math Function1' */
  real_T Gain1[16];                    /* '<S59>/Gain1' */
  real_T Abs_f;                        /* '<S57>/Abs' */
  real_T Switch_e;                     /* '<S57>/Switch' */
  real_T TmpSignalConversionAtMathFunction4Inport1[4];
  real_T MathFunction4[4];             /* '<S59>/Math Function4' */
  real_T Gain2[16];                    /* '<S59>/Gain2' */
  real_T Abs_i;                        /* '<S58>/Abs' */
  real_T Switch_i;                     /* '<S58>/Switch' */
  real_T TmpSignalConversionAtMathFunction3Inport1[4];
  real_T MathFunction3[4];             /* '<S59>/Math Function3' */
  real_T Gain3[16];                    /* '<S59>/Gain3' */
  real_T Add[16];                      /* '<S59>/Add' */
  real_T X2[8];                        /* '<S63>/Math Function1' */
  real_T X2_p[8];                      /* '<S63>/Divide1' */
  real_T X2_f[8];                      /* '<S63>/Math Function' */
  real_T Divide2[4];                   /* '<S63>/Divide2' */
  real_T TmpSignalConversionAtMathFunction2Inport1_a[2];
  real_T MathFunction2_m[2];           /* '<S62>/Math Function2' */
  real_T Gain_g[4];                    /* '<S62>/Gain' */
  real_T TmpSignalConversionAtMathFunction1Inport1_a[2];
  real_T MathFunction1_d[2];           /* '<S62>/Math Function1' */
  real_T Gain1_p[4];                   /* '<S62>/Gain1' */
  real_T Add_c[4];                     /* '<S62>/Add' */
  real_T X2_k[4];                      /* '<S63>/Subtract' */
  real_T K4X2[8];                      /* '<S63>/Divide' */
  real_T Divide1[16];                  /* '<S22>/Divide1' */
  real_T X4[16];                       /* '<S22>/Subtract2' */
  real_T P4x4[16];                     /* '<S22>/Divide2' */
  real_T Product[4];                   /* '<S22>/Product' */
  real_T OutportBufferForP21;
  real_T Product1[4];                  /* '<S22>/Product1' */
  real_T OutportBufferForP22;
  real_T Product2[4];                  /* '<S22>/Product2' */
  real_T OutportBufferForP23;
  real_T Product3[4];                  /* '<S22>/Product3' */
  real_T OutportBufferForP24;
  real_T OutportBufferForP31;
  real_T OutportBufferForP32;
  real_T OutportBufferForP33;
  real_T OutportBufferForP34;
  real_T OutportBufferForP41;
  real_T OutportBufferForP42;
  real_T OutportBufferForP43;
  real_T OutportBufferForP44;
  real_T x_predict[4];                 /* '<S61>/Gain' */
  real_T Divide3[2];                   /* '<S63>/Divide3' */
  real_T Subtract2[2];                 /* '<S63>/Subtract2' */
  real_T X1[4];                        /* '<S63>/Divide4' */
  real_T Subtract1[4];                 /* '<S63>/Subtract1' */
  real_T OutportBufferForRangeY;
  real_T Velocity_X;
  real_T Range_Y;
  uint8_T Compare;                     /* '<S64>/Compare' */
  uint8_T Compare_k;                   /* '<S65>/Compare' */
  uint8_T Compare_g;                   /* '<S66>/Compare' */
  uint8_T Compare_n;                   /* '<S67>/Compare' */
} B_FusTrackUpdateUpdate_GlobalFusion_Fcn_T;

/* Block states (auto storage) for system '<S17>/FusTrackUpdate.Update' */
typedef struct {
  real_T Divide2_DWORK1[8];            /* '<S63>/Divide2' */
  real_T Divide_DWORK3[4];             /* '<S63>/Divide' */
  real_T Divide_DWORK4[4];             /* '<S63>/Divide' */
  real_T Divide_DWORK5[4];             /* '<S63>/Divide' */
  int32_T Divide_DWORK2[2];            /* '<S63>/Divide' */
} DW_FusTrackUpdateUpdate_GlobalFusion_Fcn_T;

/* Block signals for system '<S17>/FusTrackUpdate.MDCal' */
typedef struct {
  real_T uX1[2];                       /* '<S21>/Subtract' */
  real_T uX2[2];                       /* '<S21>/Math Function' */
  real_T Abs;                          /* '<S48>/Abs' */
  real_T Switch;                       /* '<S48>/Switch' */
  real_T TmpSignalConversionAtMathFunction2Inport1[4];
  real_T MathFunction2[4];             /* '<S50>/Math Function2' */
  real_T Gain[16];                     /* '<S50>/Gain' */
  real_T Abs_p;                        /* '<S45>/Abs' */
  real_T Switch_k;                     /* '<S45>/Switch' */
  real_T TmpSignalConversionAtMathFunction1Inport1[4];
  real_T MathFunction1[4];             /* '<S50>/Math Function1' */
  real_T Gain1[16];                    /* '<S50>/Gain1' */
  real_T Abs_f;                        /* '<S46>/Abs' */
  real_T Switch_f;                     /* '<S46>/Switch' */
  real_T TmpSignalConversionAtMathFunction4Inport1[4];
  real_T MathFunction4[4];             /* '<S50>/Math Function4' */
  real_T Gain2[16];                    /* '<S50>/Gain2' */
  real_T Abs_j;                        /* '<S47>/Abs' */
  real_T Switch_ki;                    /* '<S47>/Switch' */
  real_T TmpSignalConversionAtMathFunction3Inport1[4];
  real_T MathFunction3[4];             /* '<S50>/Math Function3' */
  real_T Gain3[16];                    /* '<S50>/Gain3' */
  real_T Add[16];                      /* '<S50>/Add' */
  real_T X4[8];                        /* '<S21>/Math Function1' */
  real_T uX2_d[4];                     /* '<S21>/Divide1' */
  real_T TmpSignalConversionAtMathFunction2Inport1_a[2];
  real_T MathFunction2_k[2];           /* '<S49>/Math Function2' */
  real_T Gain_i[4];                    /* '<S49>/Gain' */
  real_T TmpSignalConversionAtMathFunction1Inport1_a[2];
  real_T MathFunction1_j[2];           /* '<S49>/Math Function1' */
  real_T Gain1_p[4];                   /* '<S49>/Gain1' */
  real_T Add_g[4];                     /* '<S49>/Add' */
  real_T uX2_a[4];                     /* '<S21>/Subtract1' */
  real_T Divide;                       /* '<S21>/Divide' */
  uint8_T Compare;                     /* '<S54>/Compare' */
  uint8_T Compare_c;                   /* '<S51>/Compare' */
  uint8_T Compare_g;                   /* '<S52>/Compare' */
  uint8_T Compare_l;                   /* '<S53>/Compare' */
} B_FusTrackUpdateMDCal_GlobalFusion_Fcn_T;

/* Block states (auto storage) for system '<S17>/FusTrackUpdate.MDCal' */
typedef struct {
  real_T Divide1_DWORK1[8];            /* '<S21>/Divide1' */
  real_T Divide_DWORK3[2];             /* '<S21>/Divide' */
  real_T Divide_DWORK4[2];             /* '<S21>/Divide' */
  int32_T Divide_DWORK2[2];            /* '<S21>/Divide' */
} DW_FusTrackUpdateMDCal_GlobalFusion_Fcn_T;

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion[256];      /* '<S4>/Data Type Conversion' */
  real_T NE[256];                      /* '<S4>/N->E' */
  real_T DataTypeConversion_l[200];    /* '<S2>/Data Type Conversion' */
  real_T NE_j[200];                    /* '<S2>/N->E' */
  real_T DataTypeConversion_b[160];    /* '<S11>/Data Type Conversion' */
  real_T NE_i[160];                    /* '<S11>/N->E' */
  real_T DataTypeConversion_e;         /* '<S5>/Data Type Conversion' */
  real_T NE_b;                         /* '<S5>/N->E' */
  real_T DataTypeConversion_h;         /* '<S12>/Data Type Conversion' */
  real_T NE_a;                         /* '<S12>/N->E' */
  real_T DataTypeConversion_n;         /* '<S3>/Data Type Conversion' */
  real_T NE_l;                         /* '<S3>/N->E' */
  real_T DataTypeConversion_bi;        /* '<S15>/Data Type Conversion' */
  real_T Nkph;                         /* '<S15>/N->kph' */
  real_T kphmps;                       /* '<S15>/kph->mps' */
  real_T VehiclePathCurvature1m;       /* '<S1>/Multiport Switch' */
  real_T Divide;                       /* '<S1>/Divide' */
  real_T Saturation2;                  /* '<S1>/Saturation2' */
  real_T DataTypeConversion_j;         /* '<S6>/Data Type Conversion' */
  real_T NE_m;                         /* '<S6>/N->E' */
  real_T EN[3302];                     /* '<S7>/E->N' */
  real_T FusDataOut[3302];             /* '<Root>/Fusion_Center' */
  real_T Pre_x;                        /* '<Root>/Fusion_Center' */
  real_T Pre_vx;                       /* '<Root>/Fusion_Center' */
  real_T Pre_y;                        /* '<Root>/Fusion_Center' */
  real_T Pre_vy;                       /* '<Root>/Fusion_Center' */
  real_T deltaT;                       /* '<Root>/Fusion_Center' */
  real_T pre_p11;                      /* '<Root>/Fusion_Center' */
  real_T pre_p12;                      /* '<Root>/Fusion_Center' */
  real_T pre_p13;                      /* '<Root>/Fusion_Center' */
  real_T pre_p14;                      /* '<Root>/Fusion_Center' */
  real_T pre_p21;                      /* '<Root>/Fusion_Center' */
  real_T pre_p22;                      /* '<Root>/Fusion_Center' */
  real_T pre_p23;                      /* '<Root>/Fusion_Center' */
  real_T pre_p24;                      /* '<Root>/Fusion_Center' */
  real_T pre_p31;                      /* '<Root>/Fusion_Center' */
  real_T pre_p32;                      /* '<Root>/Fusion_Center' */
  real_T pre_p33;                      /* '<Root>/Fusion_Center' */
  real_T pre_p34;                      /* '<Root>/Fusion_Center' */
  real_T pre_p41;                      /* '<Root>/Fusion_Center' */
  real_T pre_p42;                      /* '<Root>/Fusion_Center' */
  real_T pre_p43;                      /* '<Root>/Fusion_Center' */
  real_T pre_p44;                      /* '<Root>/Fusion_Center' */
  real_T Pre_x_o;                      /* '<Root>/Fusion_Center' */
  real_T Pre_vx_k;                     /* '<Root>/Fusion_Center' */
  real_T Pre_y_l;                      /* '<Root>/Fusion_Center' */
  real_T Pre_vy_c;                     /* '<Root>/Fusion_Center' */
  real_T Mea_x;                        /* '<Root>/Fusion_Center' */
  real_T Mea_y;                        /* '<Root>/Fusion_Center' */
  real_T pre_p11_o;                    /* '<Root>/Fusion_Center' */
  real_T pre_p12_c;                    /* '<Root>/Fusion_Center' */
  real_T pre_p13_m;                    /* '<Root>/Fusion_Center' */
  real_T pre_p14_j;                    /* '<Root>/Fusion_Center' */
  real_T pre_p21_a;                    /* '<Root>/Fusion_Center' */
  real_T pre_p22_i;                    /* '<Root>/Fusion_Center' */
  real_T pre_p23_b;                    /* '<Root>/Fusion_Center' */
  real_T pre_p24_d;                    /* '<Root>/Fusion_Center' */
  real_T pre_p31_j;                    /* '<Root>/Fusion_Center' */
  real_T pre_p32_b;                    /* '<Root>/Fusion_Center' */
  real_T pre_p33_a;                    /* '<Root>/Fusion_Center' */
  real_T pre_p34_j;                    /* '<Root>/Fusion_Center' */
  real_T pre_p41_p;                    /* '<Root>/Fusion_Center' */
  real_T pre_p42_n;                    /* '<Root>/Fusion_Center' */
  real_T pre_p43_h;                    /* '<Root>/Fusion_Center' */
  real_T pre_p44_b;                    /* '<Root>/Fusion_Center' */
  real_T R11;                          /* '<Root>/Fusion_Center' */
  real_T R12;                          /* '<Root>/Fusion_Center' */
  real_T R21;                          /* '<Root>/Fusion_Center' */
  real_T R22;                          /* '<Root>/Fusion_Center' */
  real_T MeasureRx;                    /* '<Root>/Fusion_Center' */
  real_T MeasureRy;                    /* '<Root>/Fusion_Center' */
  real_T PredictRx;                    /* '<Root>/Fusion_Center' */
  real_T PredictRy;                    /* '<Root>/Fusion_Center' */
  real_T P11;                          /* '<Root>/Fusion_Center' */
  real_T P12;                          /* '<Root>/Fusion_Center' */
  real_T P13;                          /* '<Root>/Fusion_Center' */
  real_T P14;                          /* '<Root>/Fusion_Center' */
  real_T P21;                          /* '<Root>/Fusion_Center' */
  real_T P22;                          /* '<Root>/Fusion_Center' */
  real_T P23;                          /* '<Root>/Fusion_Center' */
  real_T P24;                          /* '<Root>/Fusion_Center' */
  real_T P31;                          /* '<Root>/Fusion_Center' */
  real_T P32;                          /* '<Root>/Fusion_Center' */
  real_T P33;                          /* '<Root>/Fusion_Center' */
  real_T P34;                          /* '<Root>/Fusion_Center' */
  real_T P41;                          /* '<Root>/Fusion_Center' */
  real_T P42;                          /* '<Root>/Fusion_Center' */
  real_T P43;                          /* '<Root>/Fusion_Center' */
  real_T P44;                          /* '<Root>/Fusion_Center' */
  real_T R11_l;                        /* '<Root>/Fusion_Center' */
  real_T R12_k;                        /* '<Root>/Fusion_Center' */
  real_T R21_i;                        /* '<Root>/Fusion_Center' */
  real_T R22_o;                        /* '<Root>/Fusion_Center' */
  real_T x;                            /* '<Root>/Fusion_Center' */
  real_T y;                            /* '<Root>/Fusion_Center' */
  real_T R;                            /* '<Root>/Fusion_Center' */
  real_T Laneinfo;                     /* '<Root>/Fusion_Center' */
  real_T Subtract;                     /* '<S25>/Subtract' */
  real_T Product;                      /* '<S25>/Product' */
  real_T Subtract1;                    /* '<S25>/Subtract1' */
  real_T Product1;                     /* '<S25>/Product1' */
  real_T Subtract2;                    /* '<S25>/Subtract2' */
  real_T Sqrt1;                        /* '<S25>/Sqrt1' */
  real_T Abs;                          /* '<S25>/Abs' */
  real_T Subtract3;                    /* '<S25>/Subtract3' */
  real_T Pos_RtNeg_Lt;                 /* '<S25>/Pos_Rt|Neg_Lt' */
  real_T Gain;                         /* '<S25>/Gain' */
  real_T Quantizer;                    /* '<S27>/Quantizer' */
  real_T Switch;                       /* '<S27>/Switch' */
  real_T Subtract4;                    /* '<S19>/Subtract4' */
  real_T MultiportSwitch;              /* '<S27>/Multiport Switch' */
  real_T Quantizer_d;                  /* '<S26>/Quantizer' */
  real_T Switch_g;                     /* '<S26>/Switch' */
  real_T Subtract5;                    /* '<S19>/Subtract5' */
  real_T MultiportSwitch_f;            /* '<S26>/Multiport Switch' */
  real_T Abs_a;                        /* '<S28>/Abs' */
  real_T Switch_b;                     /* '<S28>/Switch' */
  real_T Abs_n;                        /* '<S29>/Abs' */
  real_T Switch_o;                     /* '<S29>/Switch' */
  real_T Abs_g;                        /* '<S30>/Abs' */
  real_T Switch_d;                     /* '<S30>/Switch' */
  real_T Abs_j;                        /* '<S31>/Abs' */
  real_T Switch_m;                     /* '<S31>/Switch' */
  real_T TmpSignalConversionAtMathFunctionInport1[4];
  real_T MathFunction[4];              /* '<S41>/Math Function' */
  real_T Product_p[16];                /* '<S41>/Product' */
  real_T TmpSignalConversionAtMathFunction1Inport1[4];
  real_T MathFunction1[4];             /* '<S42>/Math Function1' */
  real_T Product1_h[16];               /* '<S42>/Product1' */
  real_T TmpSignalConversionAtMathFunctionInport1_o[4];
  real_T MathFunction_i[4];            /* '<S43>/Math Function' */
  real_T Product_o[16];                /* '<S43>/Product' */
  real_T TmpSignalConversionAtMathFunction1Inport1_a[4];
  real_T MathFunction1_i[4];           /* '<S44>/Math Function1' */
  real_T Product1_e[16];               /* '<S44>/Product1' */
  real_T Add[16];                      /* '<S39>/Add' */
  real_T TmpSignalConversionAtMathFunction2Inport1[4];
  real_T MathFunction2[4];             /* '<S32>/Math Function2' */
  real_T Gain_n[16];                   /* '<S32>/Gain' */
  real_T TmpSignalConversionAtMathFunction1Inport1_am[4];
  real_T MathFunction1_il[4];          /* '<S32>/Math Function1' */
  real_T Gain1[16];                    /* '<S32>/Gain1' */
  real_T TmpSignalConversionAtMathFunction4Inport1[4];
  real_T MathFunction4[4];             /* '<S32>/Math Function4' */
  real_T Gain2[16];                    /* '<S32>/Gain2' */
  real_T TmpSignalConversionAtMathFunction3Inport1[4];
  real_T MathFunction3[4];             /* '<S32>/Math Function3' */
  real_T Gain3[16];                    /* '<S32>/Gain3' */
  real_T Add_d[16];                    /* '<S32>/Add' */
  real_T MathFunction_g[16];           /* '<S34>/Math Function' */
  real_T P_predict[16];                /* '<S34>/Product1' */
  real_T P_predict_i[16];              /* '<S34>/Subtract2' */
  real_T Product_f[4];                 /* '<S20>/Product' */
  real_T OutportBufferForP21;
  real_T Product1_j[4];                /* '<S20>/Product1' */
  real_T OutportBufferForP22;
  real_T Product2[4];                  /* '<S20>/Product2' */
  real_T OutportBufferForP23;
  real_T Product3[4];                  /* '<S20>/Product3' */
  real_T OutportBufferForP24;
  real_T OutportBufferForP31;
  real_T OutportBufferForP32;
  real_T OutportBufferForP33;
  real_T OutportBufferForP34;
  real_T OutportBufferForP41;
  real_T OutportBufferForP42;
  real_T OutportBufferForP43;
  real_T OutportBufferForP44;
  real_T X_k4x1[4];
  real_T x_predict4x1[4];              /* '<S34>/Product' */
  real_T Range_Y;
  real_T Velocity_X;
  real_T Velocity_Y;
  real_T DataTypeConversion_a;         /* '<S16>/Data Type Conversion' */
  real_T NE_l1;                        /* '<S16>/N->E' */
  real_T degpsradps;                   /* '<S16>/degps->radps' */
  real_T Divide2;                      /* '<S1>/Divide2' */
  real_T DataTypeConversion_k;         /* '<S13>/Data Type Conversion' */
  real_T NE_d;                         /* '<S13>/N->E' */
  real_T degrad;                       /* '<S13>/deg->rad' */
  real_T TrigonometricFunction;        /* '<S1>/Trigonometric Function' */
  real_T Divide1;                      /* '<S1>/Divide1' */
  uint32_T EN_a;                       /* '<S14>/E->N' */
  uint16_T Num_Trg;                    /* '<Root>/Fusion_Center' */
  uint16_T NE_dy;                      /* '<S8>/N->E' */
  uint16_T NE_c;                       /* '<S10>/N->E' */
  uint16_T NE_iy;                      /* '<S9>/N->E' */
  int8_T inputevents[3];               /* '<Root>/Fusion_Center' */
  uint8_T Compare;                     /* '<S18>/Compare' */
  uint8_T DataTypeConversion_jl;       /* '<S8>/Data Type Conversion' */
  uint8_T DataTypeConversion_p;        /* '<S10>/Data Type Conversion' */
  uint8_T DataTypeConversion_o;        /* '<S9>/Data Type Conversion' */
  uint8_T RollCount;                   /* '<Root>/Fusion_Center' */
  uint8_T Switch_ms;                   /* '<S19>/Switch' */
  uint8_T Compare_i;                   /* '<S23>/Compare' */
  uint8_T Compare_e;                   /* '<S24>/Compare' */
  uint8_T Compare_ei;                  /* '<S35>/Compare' */
  uint8_T Compare_h;                   /* '<S36>/Compare' */
  uint8_T Compare_o;                   /* '<S37>/Compare' */
  uint8_T Compare_a;                   /* '<S38>/Compare' */
  B_FusTrackUpdateMDCal_GlobalFusion_Fcn_T FusTrackUpdateMDCal;/* '<S17>/FusTrackUpdate.MDCal' */
  B_FusTrackUpdateUpdate_GlobalFusion_Fcn_T FusTrackUpdateUpdate;/* '<S17>/FusTrackUpdate.Update' */
} B_GlobalFusion_Fcn_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T MeasureData[704];             /* '<Root>/Fusion_Center' */
  real_T FusDataInternal_temp[4191];   /* '<Root>/Fusion_Center' */
  real_T Sensor_sampleTime;            /* '<Root>/Fusion_Center' */
  real_T FusDataInternal[4191];        /* '<Root>/Fusion_Center' */
  real_T LastCalTime;                  /* '<Root>/Fusion_Center' */
  real_T Rx3xgm;                       /* '<Root>/Fusion_Center' */
  real_T Ry3xgm;                       /* '<Root>/Fusion_Center' */
  real_T MD_min;                       /* '<Root>/Fusion_Center' */
  real_T MeasureFoundFlag;             /* '<Root>/Fusion_Center' */
  real_T MeasureFoundNum;              /* '<Root>/Fusion_Center' */
  real_T UpdateTrackFlag[127];         /* '<Root>/Fusion_Center' */
  real_T TrackCounter;                 /* '<Root>/Fusion_Center' */
  real_T c;                            /* '<Root>/Fusion_Center' */
  real_T LastFusID;                    /* '<Root>/Fusion_Center' */
  real_T deltaT;                       /* '<Root>/Fusion_Center' */
  real_T LoopError;                    /* '<Root>/Fusion_Center' */
  real_T Product1_DWORK1[16];          /* '<S34>/Product1' */
  int32_T sfEvent;                     /* '<Root>/Fusion_Center' */
  uint16_T n;                          /* '<Root>/Fusion_Center' */
  uint16_T k;                          /* '<Root>/Fusion_Center' */
  uint16_T m;                          /* '<Root>/Fusion_Center' */
  uint16_T Num_Out;                    /* '<Root>/Fusion_Center' */
  uint16_T IDUsedFlag[127];            /* '<Root>/Fusion_Center' */
  uint8_T is_active_c19_GlobalFusion_Fcn;/* '<Root>/Fusion_Center' */
  uint8_T is_Fusion_Main;              /* '<Root>/Fusion_Center' */
  uint8_T is_active_Fusion_Main;       /* '<Root>/Fusion_Center' */
  uint8_T is_DataSet;                  /* '<Root>/Fusion_Center' */
  uint8_T is_active_DataSet;           /* '<Root>/Fusion_Center' */
  uint8_T DataSource;                  /* '<Root>/Fusion_Center' */
  DW_FusTrackUpdateMDCal_GlobalFusion_Fcn_T FusTrackUpdateMDCal;/* '<S17>/FusTrackUpdate.MDCal' */
  DW_FusTrackUpdateUpdate_GlobalFusion_Fcn_T FusTrackUpdateUpdate;/* '<S17>/FusTrackUpdate.Update' */
} DW_GlobalFusion_Fcn_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Fusion_Center_Trig_ZCE[3];/* '<Root>/Fusion_Center' */
} PrevZCX_GlobalFusion_Fcn_T;

/* Parameters for system: '<S17>/FusTrackUpdate.Update' */
struct P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T CompareToConstant_const_k;    /* Mask Parameter: CompareToConstant_const_k
                                        * Referenced by: '<S65>/Constant'
                                        */
  real_T CompareToConstant_const_m;    /* Mask Parameter: CompareToConstant_const_m
                                        * Referenced by: '<S66>/Constant'
                                        */
  real_T CompareToConstant_const_o;    /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S67>/Constant'
                                        */
  real_T Constant_Value;               /* Expression: 0.001
                                        * Referenced by: '<S55>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 0.001
                                        * Referenced by: '<S56>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: 0.001
                                        * Referenced by: '<S57>/Constant'
                                        */
  real_T Constant_Value_d;             /* Expression: 0.001
                                        * Referenced by: '<S58>/Constant'
                                        */
  real_T RangeX_Y0;                    /* Computed Parameter: RangeX_Y0
                                        * Referenced by: '<S22>/RangeX'
                                        */
  real_T VelX_Y0;                      /* Computed Parameter: VelX_Y0
                                        * Referenced by: '<S22>/VelX'
                                        */
  real_T RangeY_Y0;                    /* Computed Parameter: RangeY_Y0
                                        * Referenced by: '<S22>/RangeY'
                                        */
  real_T VelY_Y0;                      /* Computed Parameter: VelY_Y0
                                        * Referenced by: '<S22>/VelY'
                                        */
  real_T P11_Y0;                       /* Computed Parameter: P11_Y0
                                        * Referenced by: '<S22>/P11'
                                        */
  real_T P12_Y0;                       /* Computed Parameter: P12_Y0
                                        * Referenced by: '<S22>/P12'
                                        */
  real_T P13_Y0;                       /* Computed Parameter: P13_Y0
                                        * Referenced by: '<S22>/P13'
                                        */
  real_T P14_Y0;                       /* Computed Parameter: P14_Y0
                                        * Referenced by: '<S22>/P14'
                                        */
  real_T P21_Y0;                       /* Computed Parameter: P21_Y0
                                        * Referenced by: '<S22>/P21'
                                        */
  real_T P22_Y0;                       /* Computed Parameter: P22_Y0
                                        * Referenced by: '<S22>/P22'
                                        */
  real_T P23_Y0;                       /* Computed Parameter: P23_Y0
                                        * Referenced by: '<S22>/P23'
                                        */
  real_T P24_Y0;                       /* Computed Parameter: P24_Y0
                                        * Referenced by: '<S22>/P24'
                                        */
  real_T P31_Y0;                       /* Computed Parameter: P31_Y0
                                        * Referenced by: '<S22>/P31'
                                        */
  real_T P32_Y0;                       /* Computed Parameter: P32_Y0
                                        * Referenced by: '<S22>/P32'
                                        */
  real_T P33_Y0;                       /* Computed Parameter: P33_Y0
                                        * Referenced by: '<S22>/P33'
                                        */
  real_T P34_Y0;                       /* Computed Parameter: P34_Y0
                                        * Referenced by: '<S22>/P34'
                                        */
  real_T P41_Y0;                       /* Computed Parameter: P41_Y0
                                        * Referenced by: '<S22>/P41'
                                        */
  real_T P42_Y0;                       /* Computed Parameter: P42_Y0
                                        * Referenced by: '<S22>/P42'
                                        */
  real_T P43_Y0;                       /* Computed Parameter: P43_Y0
                                        * Referenced by: '<S22>/P43'
                                        */
  real_T P44_Y0;                       /* Computed Parameter: P44_Y0
                                        * Referenced by: '<S22>/P44'
                                        */
  real_T Constant_Value_i[4];          /* Expression: [1;0;0;0]
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T Constant1_Value[4];           /* Expression: [0;1;0;0]
                                        * Referenced by: '<S22>/Constant1'
                                        */
  real_T Constant2_Value[4];           /* Expression: [0;0;1;0]
                                        * Referenced by: '<S22>/Constant2'
                                        */
  real_T Constant3_Value[4];           /* Expression: [0;0;0;1]
                                        * Referenced by: '<S22>/Constant3'
                                        */
  real_T Gain_Gain[4];                 /* Expression: [1;0;0;0]
                                        * Referenced by: '<S59>/Gain'
                                        */
  real_T Gain1_Gain[4];                /* Expression: [0;1;0;0]
                                        * Referenced by: '<S59>/Gain1'
                                        */
  real_T Gain2_Gain[4];                /* Expression: [0;0;1;0]
                                        * Referenced by: '<S59>/Gain2'
                                        */
  real_T Gain3_Gain[4];                /* Expression: [0;0;0;1]
                                        * Referenced by: '<S59>/Gain3'
                                        */
  real_T H_Value[8];                   /* Expression: [1 0 0 0;0 0 1 0]
                                        * Referenced by: '<S60>/H'
                                        */
  real_T Gain_Gain_l[2];               /* Expression: [1;0]
                                        * Referenced by: '<S62>/Gain'
                                        */
  real_T Gain1_Gain_k[2];              /* Expression: [0;1]
                                        * Referenced by: '<S62>/Gain1'
                                        */
  real_T I_Value[16];                  /* Expression: [1 0 0 0;0 1 0 0;0 0 1 0;0 0 0 1]
                                        * Referenced by: '<S22>/I'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 1
                                        * Referenced by: '<S61>/Gain'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S55>/Switch'
                                        */
  uint8_T Switch_Threshold_e;          /* Computed Parameter: Switch_Threshold_e
                                        * Referenced by: '<S56>/Switch'
                                        */
  uint8_T Switch_Threshold_p;          /* Computed Parameter: Switch_Threshold_p
                                        * Referenced by: '<S57>/Switch'
                                        */
  uint8_T Switch_Threshold_b;          /* Computed Parameter: Switch_Threshold_b
                                        * Referenced by: '<S58>/Switch'
                                        */
};

/* Parameters for system: '<S17>/FusTrackUpdate.MDCal' */
struct P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S54>/Constant'
                                        */
  real_T CompareToConstant_const_d;    /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T CompareToConstant_const_b;    /* Mask Parameter: CompareToConstant_const_b
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T CompareToConstant_const_o;    /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S53>/Constant'
                                        */
  real_T Constant_Value;               /* Expression: 0.001
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0.001
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: 0.001
                                        * Referenced by: '<S47>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0.001
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T MD_Y0;                        /* Computed Parameter: MD_Y0
                                        * Referenced by: '<S21>/MD'
                                        */
  real_T H_Value[8];                   /* Expression: [1 0 0 0;0 0 1 0]
                                        * Referenced by: '<S21>/H'
                                        */
  real_T Gain_Gain[4];                 /* Expression: [1;0;0;0]
                                        * Referenced by: '<S50>/Gain'
                                        */
  real_T Gain1_Gain[4];                /* Expression: [0;1;0;0]
                                        * Referenced by: '<S50>/Gain1'
                                        */
  real_T Gain2_Gain[4];                /* Expression: [0;0;1;0]
                                        * Referenced by: '<S50>/Gain2'
                                        */
  real_T Gain3_Gain[4];                /* Expression: [0;0;0;1]
                                        * Referenced by: '<S50>/Gain3'
                                        */
  real_T Gain_Gain_n[2];               /* Expression: [1;0]
                                        * Referenced by: '<S49>/Gain'
                                        */
  real_T Gain1_Gain_d[2];              /* Expression: [0;1]
                                        * Referenced by: '<S49>/Gain1'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S48>/Switch'
                                        */
  uint8_T Switch_Threshold_d;          /* Computed Parameter: Switch_Threshold_d
                                        * Referenced by: '<S45>/Switch'
                                        */
  uint8_T Switch_Threshold_c;          /* Computed Parameter: Switch_Threshold_c
                                        * Referenced by: '<S46>/Switch'
                                        */
  uint8_T Switch_Threshold_j;          /* Computed Parameter: Switch_Threshold_j
                                        * Referenced by: '<S47>/Switch'
                                        */
};

/* Parameters (auto storage) */
struct P_GlobalFusion_Fcn_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T CompareToConstant_const_f;    /* Mask Parameter: CompareToConstant_const_f
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T CompareToConstant_const_f4;   /* Mask Parameter: CompareToConstant_const_f4
                                        * Referenced by: '<S37>/Constant'
                                        */
  real_T CompareToConstant_const_d;    /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S38>/Constant'
                                        */
  real_T CompareToConstant_const_l;    /* Mask Parameter: CompareToConstant_const_l
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S24>/Constant'
                                        */
  real_T CompareToConstant_const_lj;   /* Mask Parameter: CompareToConstant_const_lj
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 2.86
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T NE_Gain;                      /* Expression: 0.0625
                                        * Referenced by: '<S13>/N->E'
                                        */
  real_T degrad_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S13>/deg->rad'
                                        */
  real_T NE_Gain_b;                    /* Expression: 0.0625
                                        * Referenced by: '<S16>/N->E'
                                        */
  real_T degpsradps_Gain;              /* Expression: pi/180
                                        * Referenced by: '<S16>/degps->radps'
                                        */
  real_T Constant_Value;               /* Expression: 0.001
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Constant_Value_c;             /* Expression: 0.001
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T Constant_Value_h;             /* Expression: 0.001
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 0.001
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T RangeX_Y0;                    /* Computed Parameter: RangeX_Y0
                                        * Referenced by: '<S20>/RangeX'
                                        */
  real_T VelX_Y0;                      /* Computed Parameter: VelX_Y0
                                        * Referenced by: '<S20>/VelX'
                                        */
  real_T RangeY_Y0;                    /* Computed Parameter: RangeY_Y0
                                        * Referenced by: '<S20>/RangeY'
                                        */
  real_T VelY_Y0;                      /* Computed Parameter: VelY_Y0
                                        * Referenced by: '<S20>/VelY'
                                        */
  real_T P11_Y0;                       /* Computed Parameter: P11_Y0
                                        * Referenced by: '<S20>/P11'
                                        */
  real_T P12_Y0;                       /* Computed Parameter: P12_Y0
                                        * Referenced by: '<S20>/P12'
                                        */
  real_T P13_Y0;                       /* Computed Parameter: P13_Y0
                                        * Referenced by: '<S20>/P13'
                                        */
  real_T P14_Y0;                       /* Computed Parameter: P14_Y0
                                        * Referenced by: '<S20>/P14'
                                        */
  real_T P21_Y0;                       /* Computed Parameter: P21_Y0
                                        * Referenced by: '<S20>/P21'
                                        */
  real_T P22_Y0;                       /* Computed Parameter: P22_Y0
                                        * Referenced by: '<S20>/P22'
                                        */
  real_T P23_Y0;                       /* Computed Parameter: P23_Y0
                                        * Referenced by: '<S20>/P23'
                                        */
  real_T P24_Y0;                       /* Computed Parameter: P24_Y0
                                        * Referenced by: '<S20>/P24'
                                        */
  real_T P31_Y0;                       /* Computed Parameter: P31_Y0
                                        * Referenced by: '<S20>/P31'
                                        */
  real_T P32_Y0;                       /* Computed Parameter: P32_Y0
                                        * Referenced by: '<S20>/P32'
                                        */
  real_T P33_Y0;                       /* Computed Parameter: P33_Y0
                                        * Referenced by: '<S20>/P33'
                                        */
  real_T P34_Y0;                       /* Computed Parameter: P34_Y0
                                        * Referenced by: '<S20>/P34'
                                        */
  real_T P41_Y0;                       /* Computed Parameter: P41_Y0
                                        * Referenced by: '<S20>/P41'
                                        */
  real_T P42_Y0;                       /* Computed Parameter: P42_Y0
                                        * Referenced by: '<S20>/P42'
                                        */
  real_T P43_Y0;                       /* Computed Parameter: P43_Y0
                                        * Referenced by: '<S20>/P43'
                                        */
  real_T P44_Y0;                       /* Computed Parameter: P44_Y0
                                        * Referenced by: '<S20>/P44'
                                        */
  real_T Constant_Value_g[4];          /* Expression: [1;0;0;0]
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Constant1_Value_d[4];         /* Expression: [0;1;0;0]
                                        * Referenced by: '<S20>/Constant1'
                                        */
  real_T Constant2_Value[4];           /* Expression: [0;0;1;0]
                                        * Referenced by: '<S20>/Constant2'
                                        */
  real_T Constant3_Value[4];           /* Expression: [0;0;0;1]
                                        * Referenced by: '<S20>/Constant3'
                                        */
  real_T Constant2_Value_l[4];         /* Expression: [1;0;0;0]
                                        * Referenced by: '<S41>/Constant2'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S41>/Constant'
                                        */
  real_T Constant3_Value_b;            /* Expression: 0
                                        * Referenced by: '<S41>/Constant3'
                                        */
  real_T Constant1_Value_h;            /* Expression: 0
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real_T Constant5_Value[4];           /* Expression: [0;1;0;0]
                                        * Referenced by: '<S42>/Constant5'
                                        */
  real_T Constant3_Value_j;            /* Expression: 0
                                        * Referenced by: '<S42>/Constant3'
                                        */
  real_T Constant1_Value_i;            /* Expression: 1
                                        * Referenced by: '<S42>/Constant1'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S42>/Constant6'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S42>/Constant4'
                                        */
  real_T Constant2_Value_p[4];         /* Expression: [0;0;1;0]
                                        * Referenced by: '<S43>/Constant2'
                                        */
  real_T Constant3_Value_e;            /* Expression: 0
                                        * Referenced by: '<S43>/Constant3'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S43>/Constant1'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Constant5_Value_h[4];         /* Expression: [0;0;0;1]
                                        * Referenced by: '<S44>/Constant5'
                                        */
  real_T Constant3_Value_k;            /* Expression: 0
                                        * Referenced by: '<S44>/Constant3'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S44>/Constant1'
                                        */
  real_T Constant6_Value_g;            /* Expression: 0
                                        * Referenced by: '<S44>/Constant6'
                                        */
  real_T Constant4_Value_d;            /* Expression: 1
                                        * Referenced by: '<S44>/Constant4'
                                        */
  real_T Gain_Gain[4];                 /* Expression: [1;0;0;0]
                                        * Referenced by: '<S32>/Gain'
                                        */
  real_T Gain1_Gain[4];                /* Expression: [0;1;0;0]
                                        * Referenced by: '<S32>/Gain1'
                                        */
  real_T Gain2_Gain[4];                /* Expression: [0;0;1;0]
                                        * Referenced by: '<S32>/Gain2'
                                        */
  real_T Gain3_Gain[4];                /* Expression: [0;0;0;1]
                                        * Referenced by: '<S32>/Gain3'
                                        */
  real_T Q_Value[16];                  /* Expression: [0.01 0 0 0;0 0.01 0 0;0 0 0.01 0;0 0 0 0.01]
                                        * Referenced by: '<S34>/Q'
                                        */
  real_T Outsideouterlane_Value;       /* Expression: 5
                                        * Referenced by: '<S26>/Outside outer lane'
                                        */
  real_T Outerlane_Value;              /* Expression: 7
                                        * Referenced by: '<S26>/Outer lane'
                                        */
  real_T Innerlane_Value;              /* Expression: 2.5
                                        * Referenced by: '<S26>/Inner lane'
                                        */
  real_T Insideinnerlane_Value;        /* Expression: 5
                                        * Referenced by: '<S26>/Inside inner lane'
                                        */
  real_T UndefinedThreshold_Value;     /* Expression: 5
                                        * Referenced by: '<S26>/Undefined Threshold'
                                        */
  real_T Quantizer_Interval;           /* Expression: 1
                                        * Referenced by: '<S26>/Quantizer'
                                        */
  real_T Switch_Threshold;             /* Expression: 4
                                        * Referenced by: '<S26>/Switch'
                                        */
  real_T Outsideouterlane_Value_b;     /* Expression: 5
                                        * Referenced by: '<S27>/Outside outer lane'
                                        */
  real_T Outerlane_Value_g;            /* Expression: 2.5
                                        * Referenced by: '<S27>/Outer lane'
                                        */
  real_T Innerlane_Value_g;            /* Expression: 7
                                        * Referenced by: '<S27>/Inner lane'
                                        */
  real_T Insideinnerlane_Value_m;      /* Expression: 5
                                        * Referenced by: '<S27>/Inside inner lane'
                                        */
  real_T UndefinedThreshold_Value_n;   /* Expression: 5
                                        * Referenced by: '<S27>/Undefined Threshold'
                                        */
  real_T Quantizer_Interval_a;         /* Expression: 1
                                        * Referenced by: '<S27>/Quantizer'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 4
                                        * Referenced by: '<S27>/Switch'
                                        */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S25>/Gain'
                                        */
  real_T DistanceToRearAxis_Value;     /* Expression: 2.6
                                        * Referenced by: '<S25>/DistanceToRearAxis'
                                        */
  real_T Pos_RtNeg_Lt_Threshold;       /* Expression: 0
                                        * Referenced by: '<S25>/Pos_Rt|Neg_Lt'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0
                                        * Referenced by: '<S19>/Switch'
                                        */
  real_T NE_Gain_f;                    /* Expression: 1
                                        * Referenced by: '<S4>/N->E'
                                        */
  real_T NE_Gain_p;                    /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  real_T NE_Gain_h;                    /* Expression: 1
                                        * Referenced by: '<S11>/N->E'
                                        */
  real_T NE_Gain_d;                    /* Expression: 1
                                        * Referenced by: '<S5>/N->E'
                                        */
  real_T NE_Gain_o;                    /* Expression: 1
                                        * Referenced by: '<S12>/N->E'
                                        */
  real_T NE_Gain_k;                    /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  real_T Constant_Value_i4;            /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Nkph_Gain;                    /* Expression: 0.015625
                                        * Referenced by: '<S15>/N->kph'
                                        */
  real_T kphmps_Gain;                  /* Expression: 1/3.6
                                        * Referenced by: '<S15>/kph->mps'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 8191
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -8191
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T NE_Gain_c;                    /* Expression: 1
                                        * Referenced by: '<S6>/N->E'
                                        */
  real_T EN_Gain;                      /* Expression: 1
                                        * Referenced by: '<S7>/E->N'
                                        */
  uint16_T EN_Gain_l;                  /* Computed Parameter: EN_Gain_l
                                        * Referenced by: '<S14>/E->N'
                                        */
  uint8_T Switch_Threshold_a;          /* Computed Parameter: Switch_Threshold_a
                                        * Referenced by: '<S28>/Switch'
                                        */
  uint8_T Switch_Threshold_m;          /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S29>/Switch'
                                        */
  uint8_T Switch_Threshold_a5;         /* Computed Parameter: Switch_Threshold_a5
                                        * Referenced by: '<S30>/Switch'
                                        */
  uint8_T Switch_Threshold_p;          /* Computed Parameter: Switch_Threshold_p
                                        * Referenced by: '<S31>/Switch'
                                        */
  uint8_T InPathFlag_Y0;               /* Computed Parameter: InPathFlag_Y0
                                        * Referenced by: '<S19>/InPathFlag'
                                        */
  uint8_T NE_Gain_bv;                  /* Computed Parameter: NE_Gain_bv
                                        * Referenced by: '<S8>/N->E'
                                        */
  uint8_T NE_Gain_l;                   /* Computed Parameter: NE_Gain_l
                                        * Referenced by: '<S10>/N->E'
                                        */
  uint8_T NE_Gain_i;                   /* Computed Parameter: NE_Gain_i
                                        * Referenced by: '<S9>/N->E'
                                        */
  P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T FusTrackUpdateMDCal;/* '<S17>/FusTrackUpdate.MDCal' */
  P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T FusTrackUpdateUpdate;/* '<S17>/FusTrackUpdate.Update' */
};

/* Real-time Model Data Structure */
struct tag_RTM_GlobalFusion_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_GlobalFusion_Fcn_T GlobalFusion_Fcn_P;

/* Block signals (auto storage) */
extern B_GlobalFusion_Fcn_T GlobalFusion_Fcn_B;

/* Block states (auto storage) */
extern DW_GlobalFusion_Fcn_T GlobalFusion_Fcn_DW;

/* Model entry point functions */
extern void GlobalFusion_Fcn_initialize(void);
extern void GlobalFusion_Fcn_step(void);
extern void GlobalFusion_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_GlobalFusion_Fcn_T *const GlobalFusion_Fcn_M;

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
 * '<Root>' : 'GlobalFusion_Fcn'
 * '<S1>'   : 'GlobalFusion_Fcn/Curve_Radius[m]'
 * '<S2>'   : 'GlobalFusion_Fcn/Data_Cov_Camera_ObjData_Input'
 * '<S3>'   : 'GlobalFusion_Fcn/Data_Cov_Camera_RxTime'
 * '<S4>'   : 'GlobalFusion_Fcn/Data_Cov_ESR_ObjData_Input'
 * '<S5>'   : 'GlobalFusion_Fcn/Data_Cov_ESR_RxTime'
 * '<S6>'   : 'GlobalFusion_Fcn/Data_Cov_Ego_Lane_Position'
 * '<S7>'   : 'GlobalFusion_Fcn/Data_Cov_GlobalFusOut'
 * '<S8>'   : 'GlobalFusion_Fcn/Data_Cov_Global_Fus_Camera_Trigger'
 * '<S9>'   : 'GlobalFusion_Fcn/Data_Cov_Global_Fus_ESR_Trigger'
 * '<S10>'  : 'GlobalFusion_Fcn/Data_Cov_Global_Fus_SRR_Trigger'
 * '<S11>'  : 'GlobalFusion_Fcn/Data_Cov_SRR_ObjData_Input'
 * '<S12>'  : 'GlobalFusion_Fcn/Data_Cov_SRR_Rx_Time'
 * '<S13>'  : 'GlobalFusion_Fcn/Data_Cov_SrtWhlAng'
 * '<S14>'  : 'GlobalFusion_Fcn/Data_Cov_Total_FusTargetNum'
 * '<S15>'  : 'GlobalFusion_Fcn/Data_Cov_VehSpd'
 * '<S16>'  : 'GlobalFusion_Fcn/Data_Cov_YawRate'
 * '<S17>'  : 'GlobalFusion_Fcn/Fusion_Center'
 * '<S18>'  : 'GlobalFusion_Fcn/Curve_Radius[m]/Compare To Constant'
 * '<S19>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackIni.ESRInPathJudge'
 * '<S20>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast'
 * '<S21>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal'
 * '<S22>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update'
 * '<S23>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackIni.ESRInPathJudge/Compare To Constant'
 * '<S24>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackIni.ESRInPathJudge/Compare To Constant1'
 * '<S25>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackIni.ESRInPathJudge/Dist_Cal'
 * '<S26>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackIni.ESRInPathJudge/Left_Initial_Dist_ESR'
 * '<S27>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackIni.ESRInPathJudge/Right_Initial_Dist_ESR'
 * '<S28>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/No_Zero1'
 * '<S29>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/No_Zero2'
 * '<S30>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/No_Zero3'
 * '<S31>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/No_Zero4'
 * '<S32>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/P_Gen'
 * '<S33>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/Predict'
 * '<S34>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/Predict_X_P'
 * '<S35>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/No_Zero1/Compare To Constant'
 * '<S36>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/No_Zero2/Compare To Constant'
 * '<S37>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/No_Zero3/Compare To Constant'
 * '<S38>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/No_Zero4/Compare To Constant'
 * '<S39>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/Predict/F'
 * '<S40>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/Predict/State_PreTime'
 * '<S41>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/Predict/F/F_line_1'
 * '<S42>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/Predict/F/F_line_2'
 * '<S43>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/Predict/F/F_line_3'
 * '<S44>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackPredict.Forecast/Predict/F/F_line_4'
 * '<S45>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/No_Zero1'
 * '<S46>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/No_Zero2'
 * '<S47>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/No_Zero3'
 * '<S48>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/No_Zero4'
 * '<S49>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/Subsystem'
 * '<S50>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/W_Gen'
 * '<S51>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/No_Zero1/Compare To Constant'
 * '<S52>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/No_Zero2/Compare To Constant'
 * '<S53>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/No_Zero3/Compare To Constant'
 * '<S54>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.MDCal/No_Zero4/Compare To Constant'
 * '<S55>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/No_Zero1'
 * '<S56>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/No_Zero2'
 * '<S57>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/No_Zero3'
 * '<S58>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/No_Zero4'
 * '<S59>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/P_Gen'
 * '<S60>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/Predict'
 * '<S61>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/Predict_X_P'
 * '<S62>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/R_Cov_Gen'
 * '<S63>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/X_new'
 * '<S64>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/No_Zero1/Compare To Constant'
 * '<S65>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/No_Zero2/Compare To Constant'
 * '<S66>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/No_Zero3/Compare To Constant'
 * '<S67>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/No_Zero4/Compare To Constant'
 * '<S68>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/Predict/Measurement'
 * '<S69>'  : 'GlobalFusion_Fcn/Fusion_Center/FusTrackUpdate.Update/Predict/State_PreTime'
 */
#endif                                 /* RTW_HEADER_GlobalFusion_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
