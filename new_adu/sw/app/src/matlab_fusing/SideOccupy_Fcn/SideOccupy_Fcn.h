/*
 * File: SideOccupy_Fcn.h
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

#ifndef RTW_HEADER_SideOccupy_Fcn_h_
#define RTW_HEADER_SideOccupy_Fcn_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SideOccupy_Fcn_COMMON_INCLUDES_
# define SideOccupy_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SideOccupy_Fcn_COMMON_INCLUDES_ */

#include "SideOccupy_Fcn_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S26>/Judge_Main.InterestObjDet_WithLane' */
typedef struct {
  real_T Gain1;                        /* '<S32>/Gain1' */
  real_T Gain;                         /* '<S32>/Gain' */
  real_T TrigonometricFunction;        /* '<S32>/Trigonometric Function' */
  real_T Product;                      /* '<S32>/Product' */
  int8_T DataTypeConversion;           /* '<S32>/Data Type Conversion' */
  boolean_T RelationalOperator1;       /* '<S32>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S32>/Relational Operator' */
  boolean_T LogicalOperator;           /* '<S32>/Logical Operator' */
} B_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T;

/* Block signals for system '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
typedef struct {
  real_T Abs;                          /* '<S33>/Abs' */
  real_T Gain1;                        /* '<S33>/Gain1' */
  real_T MinMax;                       /* '<S33>/MinMax' */
  int8_T DataTypeConversion;           /* '<S33>/Data Type Conversion' */
  boolean_T RelationalOperator1;       /* '<S33>/Relational Operator1' */
  boolean_T RelationalOperator;        /* '<S33>/Relational Operator' */
  boolean_T LogicalOperator;           /* '<S33>/Logical Operator' */
} B_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T;

/* Block signals for system '<S26>/Judge_Main.TTC_Cal' */
typedef struct {
  real_T Switch;                       /* '<S41>/Switch' */
  real_T Divide;                       /* '<S41>/Divide' */
  real_T Gain;                         /* '<S41>/Gain' */
  real_T MinMax;                       /* '<S41>/MinMax' */
  boolean_T Compare;                   /* '<S134>/Compare' */
} B_Judge_MainTTC_Cal_SideOccupy_Fcn_T;

/* Block signals for system '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn' */
typedef struct {
  real_T Product;                      /* '<S80>/Product' */
  real_T Product1;                     /* '<S80>/Product1' */
  real_T Product2;                     /* '<S80>/Product2' */
  real_T Subtract;                     /* '<S80>/Subtract' */
  real_T Product_c;                    /* '<S81>/Product' */
  real_T Product1_p;                   /* '<S81>/Product1' */
  real_T Product2_c;                   /* '<S81>/Product2' */
  real_T Subtract_a;                   /* '<S81>/Subtract' */
  uint16_T Product_m;                  /* '<S35>/Product' */
  int8_T DataTypeConversion;           /* '<S35>/Data Type Conversion' */
  boolean_T Compare;                   /* '<S82>/Compare' */
  boolean_T Compare_f;                 /* '<S83>/Compare' */
} B_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T;

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion[3302];     /* '<S3>/Data Type Conversion' */
  real_T NE[3302];                     /* '<S3>/N->E' */
  real_T DataTypeConversion_d;         /* '<S4>/Data Type Conversion' */
  real_T NE_k;                         /* '<S4>/N->E' */
  real_T DataTypeConversion_n;         /* '<S2>/Data Type Conversion' */
  real_T NE_k5;                        /* '<S2>/N->E' */
  real_T DataTypeConversion_e;         /* '<S18>/Data Type Conversion' */
  real_T Nkph;                         /* '<S18>/N->kph' */
  real_T kphmps;                       /* '<S18>/kph->mps' */
  real_T VehiclePathCurvature1m;       /* '<S1>/Multiport Switch' */
  real_T Divide;                       /* '<S1>/Divide' */
  real_T Saturation2;                  /* '<S1>/Saturation2' */
  real_T DataTypeConversion_nd;        /* '<S5>/Data Type Conversion' */
  real_T NE_o;                         /* '<S5>/N->E' */
  real_T DataTypeConversion_dc;        /* '<S6>/Data Type Conversion' */
  real_T NE_e;                         /* '<S6>/N->E' */
  real_T DataTypeConversion_k;         /* '<S7>/Data Type Conversion' */
  real_T NE_a;                         /* '<S7>/N->E' */
  real_T DataTypeConversion_p;         /* '<S8>/Data Type Conversion' */
  real_T NE_i;                         /* '<S8>/N->E' */
  real_T DataTypeConversion_kl;        /* '<S9>/Data Type Conversion' */
  real_T NE_c;                         /* '<S9>/N->E' */
  real_T DataTypeConversion_b;         /* '<S10>/Data Type Conversion' */
  real_T NE_h;                         /* '<S10>/N->E' */
  real_T DataTypeConversion_o;         /* '<S11>/Data Type Conversion' */
  real_T NE_ac;                        /* '<S11>/N->E' */
  real_T DataTypeConversion_l;         /* '<S12>/Data Type Conversion' */
  real_T NE_n;                         /* '<S12>/N->E' */
  real_T DataTypeConversion_nf;        /* '<S13>/Data Type Conversion' */
  real_T NE_kq;                        /* '<S13>/N->E' */
  real_T DataTypeConversion_a;         /* '<S14>/Data Type Conversion' */
  real_T NE_m;                         /* '<S14>/N->E' */
  real_T EN[4];                        /* '<S16>/E->N' */
  real_T MathFunction6[6];             /* '<S20>/Math Function6' */
  real_T Divide_i[762];                /* '<S20>/Divide' */
  real_T MathFunction6_e[6];           /* '<S21>/Math Function6' */
  real_T Divide_k[762];                /* '<S21>/Divide' */
  real_T MathFunction6_o[6];           /* '<S22>/Math Function6' */
  real_T Divide_d[762];                /* '<S22>/Divide' */
  real_T MathFunction6_b[6];           /* '<S23>/Math Function6' */
  real_T Divide_h[762];                /* '<S23>/Divide' */
  real_T MathFunction6_c[6];           /* '<S24>/Math Function6' */
  real_T Divide_o[762];                /* '<S24>/Divide' */
  real_T MathFunction6_i[6];           /* '<S25>/Math Function6' */
  real_T Divide_iq[762];               /* '<S25>/Divide' */
  real_T Add[762];                     /* '<Root>/Add' */
  real_T MathFunction6_in[762];        /* '<Root>/Math Function6' */
  real_T EN_f[762];                    /* '<S15>/E->N' */
  real_T LtFrtSd_OccFlg;               /* '<Root>/Side_Occ_Judge_Module' */
  real_T LtRrSd_OccFlg;                /* '<Root>/Side_Occ_Judge_Module' */
  real_T RtFrtSd_OccFlg;               /* '<Root>/Side_Occ_Judge_Module' */
  real_T RtRrSd_OccFlg;                /* '<Root>/Side_Occ_Judge_Module' */
  real_T FrtCent_OccFlg;               /* '<Root>/Side_Occ_Judge_Module' */
  real_T RrCent_OccFlg;                /* '<Root>/Side_Occ_Judge_Module' */
  real_T FusObj_Select[3302];          /* '<Root>/Side_Occ_Judge_Module' */
  real_T Num_Out_Select;               /* '<Root>/Side_Occ_Judge_Module' */
  real_T CIPO_ID;                      /* '<Root>/Side_Occ_Judge_Module' */
  real_T LtFrtSd_OccIndex[127];        /* '<Root>/Side_Occ_Judge_Module' */
  real_T LtRrSd_OccIndex[127];         /* '<Root>/Side_Occ_Judge_Module' */
  real_T RtFrtSd_OccIndex[127];        /* '<Root>/Side_Occ_Judge_Module' */
  real_T RtRrSd_OccIndex[127];         /* '<Root>/Side_Occ_Judge_Module' */
  real_T FrtCent_OccIndex[127];        /* '<Root>/Side_Occ_Judge_Module' */
  real_T RrCent_OccIndex[127];         /* '<Root>/Side_Occ_Judge_Module' */
  real_T x;                            /* '<Root>/Side_Occ_Judge_Module' */
  real_T angle;                        /* '<Root>/Side_Occ_Judge_Module' */
  real_T Rmax;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T Rmin;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_l;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T Radius;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T Rmax_m;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T Rmin_e;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_f;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T v;                            /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_la;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T r;                            /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_e;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T r_c;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T c0;                           /* '<Root>/Side_Occ_Judge_Module' */
  real_T c1;                           /* '<Root>/Side_Occ_Judge_Module' */
  real_T c2;                           /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_fc;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T r_h;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T c0_n;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c1_i;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c2_j;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_fn;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T y;                            /* '<Root>/Side_Occ_Judge_Module' */
  real_T c0_j;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c1_f;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c2_n;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c3;                           /* '<Root>/Side_Occ_Judge_Module' */
  real_T W;                            /* '<Root>/Side_Occ_Judge_Module' */
  real_T LtLnWd;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T RtLnWd;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_b;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T y_i;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T c0_b;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c1_fo;                        /* '<Root>/Side_Occ_Judge_Module' */
  real_T c2_d;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c3_c;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T LtLnWd_m;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T RtLnWd_j;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_j;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T y_m;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T c0_o;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c1_c;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c2_a;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c3_g;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T W_f;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T RtLnWd_n;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T LtLnWd_o;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_g;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T y_k;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T c0_a;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c1_o;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c2_g;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T c3_cb;                        /* '<Root>/Side_Occ_Judge_Module' */
  real_T LtLnWd_p;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T RtLnWd_m;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_o;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T y_g;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T radius;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T W_n;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T EgoLnWd;                      /* '<Root>/Side_Occ_Judge_Module' */
  real_T NextLnWd;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_ju;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T y_j;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T radius_n;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T W_p;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T EgoLnWd_b;                    /* '<Root>/Side_Occ_Judge_Module' */
  real_T NextLnWd_f;                   /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_f2;                         /* '<Root>/Side_Occ_Judge_Module' */
  real_T y_b;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T radius_e;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T W_c;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T EgoLnWd_m;                    /* '<Root>/Side_Occ_Judge_Module' */
  real_T NextLnWd_e;                   /* '<Root>/Side_Occ_Judge_Module' */
  real_T x_n;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T y_l;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T radius_c;                     /* '<Root>/Side_Occ_Judge_Module' */
  real_T W_j;                          /* '<Root>/Side_Occ_Judge_Module' */
  real_T EgoLnWd_o;                    /* '<Root>/Side_Occ_Judge_Module' */
  real_T NextLnWd_p;                   /* '<Root>/Side_Occ_Judge_Module' */
  real_T Divide_k1;                    /* '<S43>/Divide' */
  real_T TrigonometricFunction;        /* '<S43>/Trigonometric Function' */
  real_T Gain1;                        /* '<S43>/Gain1' */
  real_T TrigonometricFunction1;       /* '<S43>/Trigonometric Function1' */
  real_T Divide1;                      /* '<S43>/Divide1' */
  real_T Gain2;                        /* '<S43>/Gain2' */
  real_T Subtract1;                    /* '<S43>/Subtract1' */
  real_T Divide_a;                     /* '<S44>/Divide' */
  real_T TrigonometricFunction_h;      /* '<S44>/Trigonometric Function' */
  real_T Gain1_f;                      /* '<S44>/Gain1' */
  real_T TrigonometricFunction1_b;     /* '<S44>/Trigonometric Function1' */
  real_T Divide1_c;                    /* '<S44>/Divide1' */
  real_T Gain2_n;                      /* '<S44>/Gain2' */
  real_T Subtract1_e;                  /* '<S44>/Subtract1' */
  real_T Divide_b;                     /* '<S51>/Divide' */
  real_T TrigonometricFunction_k;      /* '<S51>/Trigonometric Function' */
  real_T Gain1_e;                      /* '<S51>/Gain1' */
  real_T TrigonometricFunction1_o;     /* '<S51>/Trigonometric Function1' */
  real_T Divide1_h;                    /* '<S51>/Divide1' */
  real_T Gain2_p;                      /* '<S51>/Gain2' */
  real_T Subtract1_i;                  /* '<S51>/Subtract1' */
  real_T Divide_j;                     /* '<S49>/Divide' */
  real_T TrigonometricFunction_i;      /* '<S49>/Trigonometric Function' */
  real_T Gain1_p;                      /* '<S49>/Gain1' */
  real_T TrigonometricFunction1_ok;    /* '<S49>/Trigonometric Function1' */
  real_T Divide1_o;                    /* '<S49>/Divide1' */
  real_T Gain2_b;                      /* '<S49>/Gain2' */
  real_T Subtract1_a;                  /* '<S49>/Subtract1' */
  real_T Divide_ie;                    /* '<S50>/Divide' */
  real_T TrigonometricFunction_n;      /* '<S50>/Trigonometric Function' */
  real_T Gain1_d;                      /* '<S50>/Gain1' */
  real_T TrigonometricFunction1_n;     /* '<S50>/Trigonometric Function1' */
  real_T Divide1_e;                    /* '<S50>/Divide1' */
  real_T Gain2_a;                      /* '<S50>/Gain2' */
  real_T Subtract1_g;                  /* '<S50>/Subtract1' */
  real_T Divide_dp;                    /* '<S48>/Divide' */
  real_T TrigonometricFunction_p;      /* '<S48>/Trigonometric Function' */
  real_T Gain1_eo;                     /* '<S48>/Gain1' */
  real_T TrigonometricFunction1_j;     /* '<S48>/Trigonometric Function1' */
  real_T Divide1_c4;                   /* '<S48>/Divide1' */
  real_T Gain2_m;                      /* '<S48>/Gain2' */
  real_T Subtract1_d;                  /* '<S48>/Subtract1' */
  real_T Divide_n;                     /* '<S94>/Divide' */
  real_T TrigonometricFunction_ig;     /* '<S94>/Trigonometric Function' */
  real_T Gain1_pd;                     /* '<S94>/Gain1' */
  real_T TrigonometricFunction1_k;     /* '<S94>/Trigonometric Function1' */
  real_T Divide1_d;                    /* '<S94>/Divide1' */
  real_T Gain2_d;                      /* '<S94>/Gain2' */
  real_T Subtract1_c;                  /* '<S94>/Subtract1' */
  real_T Divide_l;                     /* '<S95>/Divide' */
  real_T TrigonometricFunction_hh;     /* '<S95>/Trigonometric Function' */
  real_T Gain1_j;                      /* '<S95>/Gain1' */
  real_T TrigonometricFunction1_p;     /* '<S95>/Trigonometric Function1' */
  real_T Divide1_i;                    /* '<S95>/Divide1' */
  real_T Gain2_j;                      /* '<S95>/Gain2' */
  real_T Subtract1_ac;                 /* '<S95>/Subtract1' */
  real_T Divide_p;                     /* '<S87>/Divide' */
  real_T TrigonometricFunction_hs;     /* '<S87>/Trigonometric Function' */
  real_T Gain1_n;                      /* '<S87>/Gain1' */
  real_T TrigonometricFunction1_ps;    /* '<S87>/Trigonometric Function1' */
  real_T Divide1_dv;                   /* '<S87>/Divide1' */
  real_T Gain2_h;                      /* '<S87>/Gain2' */
  real_T Subtract1_o;                  /* '<S87>/Subtract1' */
  real_T Divide_e;                     /* '<S85>/Divide' */
  real_T TrigonometricFunction_m;      /* '<S85>/Trigonometric Function' */
  real_T Gain1_m;                      /* '<S85>/Gain1' */
  real_T TrigonometricFunction1_l;     /* '<S85>/Trigonometric Function1' */
  real_T Divide1_k;                    /* '<S85>/Divide1' */
  real_T Gain2_n1;                     /* '<S85>/Gain2' */
  real_T Subtract1_j;                  /* '<S85>/Subtract1' */
  real_T Divide_bs;                    /* '<S88>/Divide' */
  real_T TrigonometricFunction_me;     /* '<S88>/Trigonometric Function' */
  real_T Gain1_h;                      /* '<S88>/Gain1' */
  real_T TrigonometricFunction1_f;     /* '<S88>/Trigonometric Function1' */
  real_T Divide1_b;                    /* '<S88>/Divide1' */
  real_T Gain2_mh;                     /* '<S88>/Gain2' */
  real_T Subtract1_h;                  /* '<S88>/Subtract1' */
  real_T Divide_m;                     /* '<S86>/Divide' */
  real_T TrigonometricFunction_a;      /* '<S86>/Trigonometric Function' */
  real_T Gain1_g;                      /* '<S86>/Gain1' */
  real_T TrigonometricFunction1_lx;    /* '<S86>/Trigonometric Function1' */
  real_T Divide1_p;                    /* '<S86>/Divide1' */
  real_T Gain2_bt;                     /* '<S86>/Gain2' */
  real_T Subtract1_o3;                 /* '<S86>/Subtract1' */
  real_T Product;                      /* '<S60>/Product' */
  real_T Product1;                     /* '<S60>/Product1' */
  real_T Product2;                     /* '<S60>/Product2' */
  real_T Gain;                         /* '<S60>/Gain' */
  real_T Subtract;                     /* '<S60>/Subtract' */
  real_T Product_n;                    /* '<S57>/Product' */
  real_T Product1_p;                   /* '<S57>/Product1' */
  real_T Product2_d;                   /* '<S57>/Product2' */
  real_T Subtract_e;                   /* '<S57>/Subtract' */
  real_T Product_d;                    /* '<S59>/Product' */
  real_T Product1_d;                   /* '<S59>/Product1' */
  real_T Product2_p;                   /* '<S59>/Product2' */
  real_T Gain_i;                       /* '<S59>/Gain' */
  real_T Subtract_n;                   /* '<S59>/Subtract' */
  real_T Product_b;                    /* '<S58>/Product' */
  real_T Product1_l;                   /* '<S58>/Product1' */
  real_T Product2_e;                   /* '<S58>/Product2' */
  real_T Subtract_c;                   /* '<S58>/Subtract' */
  real_T Product_o;                    /* '<S73>/Product' */
  real_T Product1_dl;                  /* '<S73>/Product1' */
  real_T Product2_i;                   /* '<S73>/Product2' */
  real_T Gain_l;                       /* '<S73>/Gain' */
  real_T Subtract_o;                   /* '<S73>/Subtract' */
  real_T Product_a;                    /* '<S71>/Product' */
  real_T Product1_b;                   /* '<S71>/Product1' */
  real_T Product2_g;                   /* '<S71>/Product2' */
  real_T Subtract_f;                   /* '<S71>/Subtract' */
  real_T Product_e;                    /* '<S74>/Product' */
  real_T Product1_pa;                  /* '<S74>/Product1' */
  real_T Product2_h;                   /* '<S74>/Product2' */
  real_T Gain_p;                       /* '<S74>/Gain' */
  real_T Subtract_g;                   /* '<S74>/Subtract' */
  real_T Product_m;                    /* '<S72>/Product' */
  real_T Product1_k;                   /* '<S72>/Product1' */
  real_T Product2_m;                   /* '<S72>/Product2' */
  real_T Subtract_nb;                  /* '<S72>/Subtract' */
  real_T Abs;                          /* '<S124>/Abs' */
  real_T Switch;                       /* '<S124>/Switch' */
  real_T Gain_lu;                      /* '<S125>/Gain' */
  real_T Divide_lk;                    /* '<S125>/Divide' */
  real_T Add_d;                        /* '<S125>/Add' */
  real_T Divide_c;                     /* '<S127>/Divide' */
  real_T Gain_m;                       /* '<S128>/Gain' */
  real_T Subtract_i;                   /* '<S128>/Subtract' */
  real_T Divide1_ef;                   /* '<S127>/Divide1' */
  real_T Gain_it;                      /* '<S127>/Gain' */
  real_T Subtract_l;                   /* '<S127>/Subtract' */
  real_T Switch_o;                     /* '<S123>/Switch' */
  real_T Abs_k;                        /* '<S130>/Abs' */
  real_T Switch_h;                     /* '<S130>/Switch' */
  real_T Gain_j;                       /* '<S122>/Gain' */
  real_T Divide_a5;                    /* '<S122>/Divide' */
  real_T Switch_c;                     /* '<S40>/Switch' */
  real_T Gain_ir;                      /* '<S133>/Gain' */
  real_T Sqrt;                         /* '<S133>/Sqrt' */
  real_T Add_p;                        /* '<S133>/Add' */
  real_T Divide_du;                    /* '<S133>/Divide' */
  real_T Gain_d;                       /* '<S132>/Gain' */
  real_T Sqrt_d;                       /* '<S132>/Sqrt' */
  real_T Add_h;                        /* '<S132>/Add' */
  real_T Divide_a2;                    /* '<S132>/Divide' */
  real_T MinMax;                       /* '<S123>/MinMax' */
  real_T Subtract_e5;                  /* '<S40>/Subtract' */
  real_T Switch1;                      /* '<S40>/Switch1' */
  real_T Product1_ps;                  /* '<S121>/Product1' */
  real_T Product_aq;                   /* '<S121>/Product' */
  real_T Gain_im;                      /* '<S121>/Gain' */
  real_T Subtract_m;                   /* '<S121>/Subtract' */
  real_T Abs_n;                        /* '<S40>/Abs' */
  real_T Switch2;                      /* '<S40>/Switch2' */
  real_T Product1_j;                   /* '<S120>/Product1' */
  real_T Product_g;                    /* '<S120>/Product' */
  real_T Subtract_nt;                  /* '<S120>/Subtract' */
  real_T Abs_p;                        /* '<S105>/Abs' */
  real_T Switch_k;                     /* '<S105>/Switch' */
  real_T Gain_c;                       /* '<S106>/Gain' */
  real_T Divide_e2;                    /* '<S106>/Divide' */
  real_T Add_k;                        /* '<S106>/Add' */
  real_T Divide_km;                    /* '<S108>/Divide' */
  real_T Gain_jy;                      /* '<S109>/Gain' */
  real_T Subtract_my;                  /* '<S109>/Subtract' */
  real_T Divide1_ku;                   /* '<S108>/Divide1' */
  real_T Gain_n;                       /* '<S108>/Gain' */
  real_T Subtract_cn;                  /* '<S108>/Subtract' */
  real_T Switch_d;                     /* '<S104>/Switch' */
  real_T Abs_g;                        /* '<S111>/Abs' */
  real_T Switch_g;                     /* '<S111>/Switch' */
  real_T Gain_j2;                      /* '<S103>/Gain' */
  real_T Divide_ab;                    /* '<S103>/Divide' */
  real_T Switch_a;                     /* '<S38>/Switch' */
  real_T Gain_id;                      /* '<S114>/Gain' */
  real_T Sqrt_da;                      /* '<S114>/Sqrt' */
  real_T Add_f;                        /* '<S114>/Add' */
  real_T Divide_ev;                    /* '<S114>/Divide' */
  real_T Gain_c3;                      /* '<S113>/Gain' */
  real_T Sqrt_i;                       /* '<S113>/Sqrt' */
  real_T Add_l;                        /* '<S113>/Add' */
  real_T Divide_nm;                    /* '<S113>/Divide' */
  real_T MinMax_h;                     /* '<S104>/MinMax' */
  real_T Subtract_mc;                  /* '<S38>/Subtract' */
  real_T Switch1_i;                    /* '<S38>/Switch1' */
  real_T Product1_a;                   /* '<S102>/Product1' */
  real_T Product_h;                    /* '<S102>/Product' */
  real_T Gain_h;                       /* '<S102>/Gain' */
  real_T Subtract_h;                   /* '<S102>/Subtract' */
  real_T Abs_i;                        /* '<S38>/Abs' */
  real_T Switch2_f;                    /* '<S38>/Switch2' */
  real_T Product1_pb;                  /* '<S101>/Product1' */
  real_T Product_m1;                   /* '<S101>/Product' */
  real_T Subtract_ef;                  /* '<S101>/Subtract' */
  real_T Abs_o;                        /* '<S115>/Abs' */
  real_T Switch_b;                     /* '<S115>/Switch' */
  real_T Gain_a;                       /* '<S39>/Gain' */
  real_T Divide_aa;                    /* '<S39>/Divide' */
  real_T DataTypeConversion_ks;        /* '<S19>/Data Type Conversion' */
  real_T NE_hx;                        /* '<S19>/N->E' */
  real_T degpsradps;                   /* '<S19>/degps->radps' */
  real_T Divide2;                      /* '<S1>/Divide2' */
  real_T DataTypeConversion_pd;        /* '<S17>/Data Type Conversion' */
  real_T NE_i3;                        /* '<S17>/N->E' */
  real_T degrad;                       /* '<S17>/deg->rad' */
  real_T TrigonometricFunction_d;      /* '<S1>/Trigonometric Function' */
  real_T Divide1_l;                    /* '<S1>/Divide1' */
  uint32_T Gain_g;                     /* '<S29>/Gain' */
  uint32_T Gain1_e0;                   /* '<S29>/Gain1' */
  uint32_T Gain_f;                     /* '<S36>/Gain' */
  uint32_T Gain1_m1;                   /* '<S36>/Gain1' */
  uint32_T Gain_jv;                    /* '<S30>/Gain' */
  uint32_T Gain1_g5;                   /* '<S30>/Gain1' */
  uint32_T Gain_gk;                    /* '<S34>/Gain' */
  uint32_T Gain1_ge;                   /* '<S34>/Gain1' */
  uint16_T Product_od;                 /* '<S28>/Product' */
  uint16_T Product_i;                  /* '<S29>/Product' */
  uint16_T Product1_g;                 /* '<S29>/Product1' */
  uint16_T Product2_l;                 /* '<S29>/Product2' */
  uint16_T Product_p;                  /* '<S37>/Product' */
  uint16_T Product_mx;                 /* '<S36>/Product' */
  uint16_T Product1_m;                 /* '<S36>/Product1' */
  uint16_T Product2_iz;                /* '<S36>/Product2' */
  uint16_T Product_c;                  /* '<S30>/Product' */
  uint16_T Product1_f;                 /* '<S30>/Product1' */
  uint16_T Product2_b;                 /* '<S30>/Product2' */
  uint16_T Product_f;                  /* '<S34>/Product' */
  uint16_T Product1_ad;                /* '<S34>/Product1' */
  uint16_T Product2_gd;                /* '<S34>/Product2' */
  int8_T DataTypeConversion_b2;        /* '<S28>/Data Type Conversion' */
  int8_T DataTypeConversion_eb;        /* '<S29>/Data Type Conversion' */
  int8_T DataTypeConversion1;          /* '<S29>/Data Type Conversion1' */
  int8_T DataTypeConversion2;          /* '<S29>/Data Type Conversion2' */
  int8_T Add_o;                        /* '<S29>/Add' */
  int8_T DataTypeConversion_i;         /* '<S37>/Data Type Conversion' */
  int8_T DataTypeConversion_al;        /* '<S36>/Data Type Conversion' */
  int8_T DataTypeConversion1_n;        /* '<S36>/Data Type Conversion1' */
  int8_T DataTypeConversion2_e;        /* '<S36>/Data Type Conversion2' */
  int8_T Add_m;                        /* '<S36>/Add' */
  int8_T DataTypeConversion_c;         /* '<S30>/Data Type Conversion' */
  int8_T DataTypeConversion1_o;        /* '<S30>/Data Type Conversion1' */
  int8_T DataTypeConversion2_ef;       /* '<S30>/Data Type Conversion2' */
  int8_T Add_oh;                       /* '<S30>/Add' */
  int8_T DataTypeConversion_k1;        /* '<S34>/Data Type Conversion' */
  int8_T DataTypeConversion1_f;        /* '<S34>/Data Type Conversion1' */
  int8_T DataTypeConversion2_k;        /* '<S34>/Data Type Conversion2' */
  int8_T Add_l0;                       /* '<S34>/Add' */
  uint8_T Compare;                     /* '<S27>/Compare' */
  boolean_T Compare_c;                 /* '<S45>/Compare' */
  boolean_T Compare_d;                 /* '<S46>/Compare' */
  boolean_T Compare_h;                 /* '<S55>/Compare' */
  boolean_T Compare_n;                 /* '<S53>/Compare' */
  boolean_T Compare_dh;                /* '<S54>/Compare' */
  boolean_T Compare_dm;                /* '<S52>/Compare' */
  boolean_T LogicalOperator;           /* '<S29>/Logical Operator' */
  boolean_T LogicalOperator1;          /* '<S29>/Logical Operator1' */
  boolean_T Compare_dk;                /* '<S96>/Compare' */
  boolean_T Compare_nt;                /* '<S97>/Compare' */
  boolean_T Compare_ho;                /* '<S91>/Compare' */
  boolean_T Compare_cq;                /* '<S89>/Compare' */
  boolean_T Compare_b;                 /* '<S92>/Compare' */
  boolean_T Compare_l;                 /* '<S90>/Compare' */
  boolean_T LogicalOperator_m;         /* '<S36>/Logical Operator' */
  boolean_T LogicalOperator1_b;        /* '<S36>/Logical Operator1' */
  boolean_T Compare_m;                 /* '<S64>/Compare' */
  boolean_T Compare_i;                 /* '<S61>/Compare' */
  boolean_T Compare_ns;                /* '<S63>/Compare' */
  boolean_T Compare_cw;                /* '<S62>/Compare' */
  boolean_T LogicalOperator_p;         /* '<S30>/Logical Operator' */
  boolean_T LogicalOperator1_i;        /* '<S30>/Logical Operator1' */
  boolean_T Compare_f;                 /* '<S77>/Compare' */
  boolean_T Compare_hr;                /* '<S75>/Compare' */
  boolean_T Compare_bh;                /* '<S78>/Compare' */
  boolean_T Compare_o;                 /* '<S76>/Compare' */
  boolean_T LogicalOperator_o;         /* '<S34>/Logical Operator' */
  boolean_T LogicalOperator1_n;        /* '<S34>/Logical Operator1' */
  boolean_T Compare_cd;                /* '<S129>/Compare' */
  boolean_T Compare_dkg;               /* '<S118>/Compare' */
  boolean_T Compare_hov;               /* '<S131>/Compare' */
  boolean_T Compare_mk;                /* '<S119>/Compare' */
  boolean_T Compare_p;                 /* '<S110>/Compare' */
  boolean_T Compare_g;                 /* '<S99>/Compare' */
  boolean_T Compare_bz;                /* '<S112>/Compare' */
  boolean_T Compare_k;                 /* '<S100>/Compare' */
  boolean_T Compare_j;                 /* '<S116>/Compare' */
  B_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
    Judge_MainInner_SdOccJudAccordRtLaneFcn_SelectJdWtRtLn;/* '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn' */
  B_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
    Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn;/* '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn' */
  B_Judge_MainTTC_Cal_SideOccupy_Fcn_T Judge_MainTTC_Cal;/* '<S26>/Judge_Main.TTC_Cal' */
  B_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T
    Judge_MainInterestObjDet_WithoutLane;/* '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
  B_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T
    Judge_MainInterestObjDet_WithLane; /* '<S26>/Judge_Main.InterestObjDet_WithLane' */
} B_SideOccupy_Fcn_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T k;                            /* '<Root>/Side_Occ_Judge_Module' */
  real_T m;                            /* '<Root>/Side_Occ_Judge_Module' */
  real_T TTC_Min;                      /* '<Root>/Side_Occ_Judge_Module' */
  real_T Num_LF;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T Num_LR;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T Num_RF;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T Num_RR;                       /* '<Root>/Side_Occ_Judge_Module' */
  real_T Num_F;                        /* '<Root>/Side_Occ_Judge_Module' */
  real_T Num_R;                        /* '<Root>/Side_Occ_Judge_Module' */
  uint8_T is_active_c127_SideOccupy_Fcn;/* '<Root>/Side_Occ_Judge_Module' */
  uint8_T is_StatusJudge;              /* '<Root>/Side_Occ_Judge_Module' */
  uint8_T is_active_StatusJudge;       /* '<Root>/Side_Occ_Judge_Module' */
  uint8_T is_Judge_Main;               /* '<Root>/Side_Occ_Judge_Module' */
  uint8_T is_active_Judge_Main;        /* '<Root>/Side_Occ_Judge_Module' */
} DW_SideOccupy_Fcn_T;

/* Parameters for system: '<S26>/Judge_Main.InterestObjDet_WithLane' */
struct P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T_ {
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S32>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S32>/Gain'
                                        */
  int8_T InterestFlg_Y0;               /* Computed Parameter: InterestFlg_Y0
                                        * Referenced by: '<S32>/InterestFlg'
                                        */
};

/* Parameters for system: '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
struct P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T_ {
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S33>/Gain1'
                                        */
  int8_T InterestFlg_Y0;               /* Computed Parameter: InterestFlg_Y0
                                        * Referenced by: '<S33>/InterestFlg'
                                        */
};

/* Parameters for system: '<S26>/Judge_Main.TTC_Cal' */
struct P_Judge_MainTTC_Cal_SideOccupy_Fcn_T_ {
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S41>/Gain'
                                        */
  real_T Constant1_Value;              /* Expression: 10
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 10
                                        * Referenced by: '<S41>/Constant'
                                        */
  real_T TTC_Y0;                       /* Computed Parameter: TTC_Y0
                                        * Referenced by: '<S41>/TTC'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S134>/Constant'
                                        */
};

/* Parameters for system: '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn' */
struct
  P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S82>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S83>/Constant'
                                        */
  int8_T SelectObjFlg_Y0;              /* Computed Parameter: SelectObjFlg_Y0
                                        * Referenced by: '<S35>/SelectObjFlg'
                                        */
};

/* Parameters (auto storage) */
struct P_SideOccupy_Fcn_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S116>/Constant'
                                        */
  real_T CompareToConstant_const_h;    /* Mask Parameter: CompareToConstant_const_h
                                        * Referenced by: '<S110>/Constant'
                                        */
  real_T CompareToConstant_const_o;    /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S99>/Constant'
                                        */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S100>/Constant'
                                        */
  real_T CompareToConstant_const_e;    /* Mask Parameter: CompareToConstant_const_e
                                        * Referenced by: '<S112>/Constant'
                                        */
  real_T CompareToConstant_const_b;    /* Mask Parameter: CompareToConstant_const_b
                                        * Referenced by: '<S129>/Constant'
                                        */
  real_T CompareToConstant_const_j;    /* Mask Parameter: CompareToConstant_const_j
                                        * Referenced by: '<S118>/Constant'
                                        */
  real_T CompareToConstant1_const_o;   /* Mask Parameter: CompareToConstant1_const_o
                                        * Referenced by: '<S119>/Constant'
                                        */
  real_T CompareToConstant_const_jm;   /* Mask Parameter: CompareToConstant_const_jm
                                        * Referenced by: '<S131>/Constant'
                                        */
  real_T CompareToConstant_const_bt;   /* Mask Parameter: CompareToConstant_const_bt
                                        * Referenced by: '<S27>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 2.86
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T NE_Gain;                      /* Expression: 0.0625
                                        * Referenced by: '<S17>/N->E'
                                        */
  real_T degrad_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S17>/deg->rad'
                                        */
  real_T NE_Gain_e;                    /* Expression: 0.0625
                                        * Referenced by: '<S19>/N->E'
                                        */
  real_T degpsradps_Gain;              /* Expression: pi/180
                                        * Referenced by: '<S19>/degps->radps'
                                        */
  real_T Constant_Value;               /* Expression: 10
                                        * Referenced by: '<S115>/Constant'
                                        */
  real_T y_Y0;                         /* Computed Parameter: y_Y0
                                        * Referenced by: '<S39>/y'
                                        */
  real_T Gain_Gain;                    /* Expression: 2
                                        * Referenced by: '<S39>/Gain'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 0.5
                                        * Referenced by: '<S102>/Gain'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S38>/Switch1'
                                        */
  real_T Constant_Value_m;             /* Expression: 10
                                        * Referenced by: '<S105>/Constant'
                                        */
  real_T Constant_Value_n;             /* Expression: 10
                                        * Referenced by: '<S111>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S104>/Constant'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 2
                                        * Referenced by: '<S114>/Gain'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 2
                                        * Referenced by: '<S113>/Gain'
                                        */
  real_T y_Y0_d;                       /* Computed Parameter: y_Y0_d
                                        * Referenced by: '<S38>/y'
                                        */
  real_T Constant_Value_i;             /* Expression: 4
                                        * Referenced by: '<S98>/Constant'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 2
                                        * Referenced by: '<S106>/Gain'
                                        */
  real_T Constant_Value_mt;            /* Expression: 1
                                        * Referenced by: '<S106>/Constant'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 0.5
                                        * Referenced by: '<S109>/Gain'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 4
                                        * Referenced by: '<S108>/Gain'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S104>/Switch'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 2
                                        * Referenced by: '<S103>/Gain'
                                        */
  real_T Gain_Gain_ni;                 /* Expression: 0.5
                                        * Referenced by: '<S121>/Gain'
                                        */
  real_T Switch1_Threshold_p;          /* Expression: 0
                                        * Referenced by: '<S40>/Switch1'
                                        */
  real_T Constant_Value_nb;            /* Expression: 10
                                        * Referenced by: '<S124>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 10
                                        * Referenced by: '<S130>/Constant'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S123>/Constant'
                                        */
  real_T Gain_Gain_nu;                 /* Expression: 2
                                        * Referenced by: '<S133>/Gain'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 2
                                        * Referenced by: '<S132>/Gain'
                                        */
  real_T y_Y0_f;                       /* Computed Parameter: y_Y0_f
                                        * Referenced by: '<S40>/y'
                                        */
  real_T Constant_Value_ij;            /* Expression: 4
                                        * Referenced by: '<S117>/Constant'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 2
                                        * Referenced by: '<S125>/Gain'
                                        */
  real_T Constant_Value_f;             /* Expression: 1
                                        * Referenced by: '<S125>/Constant'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 0.5
                                        * Referenced by: '<S128>/Gain'
                                        */
  real_T Gain_Gain_b3;                 /* Expression: 4
                                        * Referenced by: '<S127>/Gain'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 0
                                        * Referenced by: '<S123>/Switch'
                                        */
  real_T Gain_Gain_jp;                 /* Expression: 2
                                        * Referenced by: '<S122>/Gain'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 0.5
                                        * Referenced by: '<S73>/Gain'
                                        */
  real_T Constant_Value_h;             /* Expression: 0
                                        * Referenced by: '<S77>/Constant'
                                        */
  real_T Constant_Value_fd;            /* Expression: 0
                                        * Referenced by: '<S75>/Constant'
                                        */
  real_T Gain_Gain_di;                 /* Expression: 0.5
                                        * Referenced by: '<S74>/Gain'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S78>/Constant'
                                        */
  real_T Constant_Value_bo;            /* Expression: 0
                                        * Referenced by: '<S76>/Constant'
                                        */
  real_T Gain_Gain_k4;                 /* Expression: 0.5
                                        * Referenced by: '<S60>/Gain'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S61>/Constant'
                                        */
  real_T Gain_Gain_dh;                 /* Expression: 0.5
                                        * Referenced by: '<S59>/Gain'
                                        */
  real_T Constant_Value_m1;            /* Expression: 0
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S62>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<S87>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<S87>/Gain2'
                                        */
  real_T Constant_Value_ey;            /* Expression: 0
                                        * Referenced by: '<S91>/Constant'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 0.5
                                        * Referenced by: '<S85>/Gain1'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: 0.5
                                        * Referenced by: '<S85>/Gain2'
                                        */
  real_T Constant_Value_eo;            /* Expression: 0
                                        * Referenced by: '<S89>/Constant'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 0.5
                                        * Referenced by: '<S88>/Gain1'
                                        */
  real_T Gain2_Gain_a;                 /* Expression: 0.5
                                        * Referenced by: '<S88>/Gain2'
                                        */
  real_T Constant_Value_nc;            /* Expression: 0
                                        * Referenced by: '<S92>/Constant'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: 0.5
                                        * Referenced by: '<S86>/Gain1'
                                        */
  real_T Gain2_Gain_n;                 /* Expression: 0.5
                                        * Referenced by: '<S86>/Gain2'
                                        */
  real_T Constant_Value_hw;            /* Expression: 0
                                        * Referenced by: '<S90>/Constant'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: 0.5
                                        * Referenced by: '<S94>/Gain1'
                                        */
  real_T Gain2_Gain_b;                 /* Expression: 0.5
                                        * Referenced by: '<S94>/Gain2'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S96>/Constant'
                                        */
  real_T Gain1_Gain_l1;                /* Expression: 0.5
                                        * Referenced by: '<S95>/Gain1'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 0.5
                                        * Referenced by: '<S95>/Gain2'
                                        */
  real_T Constant_Value_na;            /* Expression: 0
                                        * Referenced by: '<S97>/Constant'
                                        */
  real_T Gain1_Gain_l2;                /* Expression: 0.5
                                        * Referenced by: '<S51>/Gain1'
                                        */
  real_T Gain2_Gain_i;                 /* Expression: 0.5
                                        * Referenced by: '<S51>/Gain2'
                                        */
  real_T Constant_Value_kz;            /* Expression: 0
                                        * Referenced by: '<S55>/Constant'
                                        */
  real_T Gain1_Gain_a4;                /* Expression: 0.5
                                        * Referenced by: '<S49>/Gain1'
                                        */
  real_T Gain2_Gain_dr;                /* Expression: 0.5
                                        * Referenced by: '<S49>/Gain2'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S53>/Constant'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 0.5
                                        * Referenced by: '<S50>/Gain1'
                                        */
  real_T Gain2_Gain_ll;                /* Expression: 0.5
                                        * Referenced by: '<S50>/Gain2'
                                        */
  real_T Constant_Value_gt;            /* Expression: 0
                                        * Referenced by: '<S54>/Constant'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 0.5
                                        * Referenced by: '<S48>/Gain1'
                                        */
  real_T Gain2_Gain_m;                 /* Expression: 0.5
                                        * Referenced by: '<S48>/Gain2'
                                        */
  real_T Constant_Value_px;            /* Expression: 0
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 0.5
                                        * Referenced by: '<S43>/Gain1'
                                        */
  real_T Gain2_Gain_nx;                /* Expression: 0.5
                                        * Referenced by: '<S43>/Gain2'
                                        */
  real_T Constant_Value_f2;            /* Expression: 0
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Gain1_Gain_jp;                /* Expression: 0.5
                                        * Referenced by: '<S44>/Gain1'
                                        */
  real_T Gain2_Gain_k;                 /* Expression: 0.5
                                        * Referenced by: '<S44>/Gain2'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T NE_Gain_n;                    /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  real_T NE_Gain_ee;                   /* Expression: 1
                                        * Referenced by: '<S4>/N->E'
                                        */
  real_T NE_Gain_nl;                   /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  real_T Constant_Value_nr;            /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Nkph_Gain;                    /* Expression: 0.015625
                                        * Referenced by: '<S18>/N->kph'
                                        */
  real_T kphmps_Gain;                  /* Expression: 1/3.6
                                        * Referenced by: '<S18>/kph->mps'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 8191
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -8191
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  real_T NE_Gain_f;                    /* Expression: 0.01
                                        * Referenced by: '<S5>/N->E'
                                        */
  real_T NE_Gain_j;                    /* Expression: 0.0009765625
                                        * Referenced by: '<S6>/N->E'
                                        */
  real_T NE_Gain_g;                    /* Expression: 9.77e-7
                                        * Referenced by: '<S7>/N->E'
                                        */
  real_T NE_Gain_a;                    /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S8>/N->E'
                                        */
  real_T NE_Gain_i;                    /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  real_T NE_Gain_p;                    /* Expression: 0.01
                                        * Referenced by: '<S10>/N->E'
                                        */
  real_T NE_Gain_ah;                   /* Expression: 0.0009765625
                                        * Referenced by: '<S11>/N->E'
                                        */
  real_T NE_Gain_pv;                   /* Expression: 9.77e-7
                                        * Referenced by: '<S12>/N->E'
                                        */
  real_T NE_Gain_if;                   /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S13>/N->E'
                                        */
  real_T NE_Gain_h;                    /* Expression: 1
                                        * Referenced by: '<S14>/N->E'
                                        */
  real_T Cal_In_LtLnWd_Value;          /* Expression: 4
                                        * Referenced by: '<Root>/Cal_In_LtLnWd'
                                        */
  real_T Cal_In_RtLnWd_Value;          /* Expression: 4
                                        * Referenced by: '<Root>/Cal_In_RtLnWd'
                                        */
  real_T Cal_Out_LtLnWd_Value;         /* Expression: 4
                                        * Referenced by: '<Root>/Cal_Out_LtLnWd'
                                        */
  real_T Cal_Out_RtLnWd_Value;         /* Expression: 4
                                        * Referenced by: '<Root>/Cal_Out_RtLnWd'
                                        */
  real_T Cal_Mov_EgoLnWd_Value;        /* Expression: 4
                                        * Referenced by: '<Root>/Cal_Mov_EgoLnWd'
                                        */
  real_T Cal_Mov_NextLnWd_Value;       /* Expression: 4
                                        * Referenced by: '<Root>/Cal_Mov_NextLnWd'
                                        */
  real_T Cal_SdDist_Front_Value;       /* Expression: 40
                                        * Referenced by: '<Root>/Cal_SdDist_Front'
                                        */
  real_T Cal_SdDist_Rear_Value;        /* Expression: 15
                                        * Referenced by: '<Root>/Cal_SdDist_Rear'
                                        */
  real_T EN_Gain;                      /* Expression: 1
                                        * Referenced by: '<S16>/E->N'
                                        */
  real_T Constant4_Value[6];           /* Expression: [1 0 0 0 0 0]
                                        * Referenced by: '<S20>/Constant4'
                                        */
  real_T Constant4_Value_i[6];         /* Expression: [0 1 0 0 0 0]
                                        * Referenced by: '<S21>/Constant4'
                                        */
  real_T Constant4_Value_g[6];         /* Expression: [0 0 1 0 0 0]
                                        * Referenced by: '<S22>/Constant4'
                                        */
  real_T Constant4_Value_d[6];         /* Expression: [0 0 0 1 0 0]
                                        * Referenced by: '<S23>/Constant4'
                                        */
  real_T Constant4_Value_o[6];         /* Expression: [0 0 0 0 1 0]
                                        * Referenced by: '<S24>/Constant4'
                                        */
  real_T Constant4_Value_b[6];         /* Expression: [0 0 0 0 0 1]
                                        * Referenced by: '<S25>/Constant4'
                                        */
  real_T EN_Gain_i;                    /* Expression: 1
                                        * Referenced by: '<S15>/E->N'
                                        */
  uint16_T Gain_Gain_i5;               /* Computed Parameter: Gain_Gain_i5
                                        * Referenced by: '<S34>/Gain'
                                        */
  uint16_T Gain1_Gain_h;               /* Computed Parameter: Gain1_Gain_h
                                        * Referenced by: '<S34>/Gain1'
                                        */
  uint16_T Gain_Gain_mp;               /* Computed Parameter: Gain_Gain_mp
                                        * Referenced by: '<S30>/Gain'
                                        */
  uint16_T Gain1_Gain_gz;              /* Computed Parameter: Gain1_Gain_gz
                                        * Referenced by: '<S30>/Gain1'
                                        */
  uint16_T Gain_Gain_kk;               /* Computed Parameter: Gain_Gain_kk
                                        * Referenced by: '<S36>/Gain'
                                        */
  uint16_T Gain1_Gain_e;               /* Computed Parameter: Gain1_Gain_e
                                        * Referenced by: '<S36>/Gain1'
                                        */
  uint16_T Gain_Gain_o;                /* Computed Parameter: Gain_Gain_o
                                        * Referenced by: '<S29>/Gain'
                                        */
  uint16_T Gain1_Gain_ca;              /* Computed Parameter: Gain1_Gain_ca
                                        * Referenced by: '<S29>/Gain1'
                                        */
  int8_T InLtSideFlg_Y0;               /* Computed Parameter: InLtSideFlg_Y0
                                        * Referenced by: '<S34>/InLtSideFlg'
                                        */
  int8_T InRtSideFlg_Y0;               /* Computed Parameter: InRtSideFlg_Y0
                                        * Referenced by: '<S30>/InRtSideFlg'
                                        */
  int8_T InLtSideFlg_Y0_c;             /* Computed Parameter: InLtSideFlg_Y0_c
                                        * Referenced by: '<S36>/InLtSideFlg'
                                        */
  int8_T SelectObjFlg_Y0;              /* Computed Parameter: SelectObjFlg_Y0
                                        * Referenced by: '<S37>/SelectObjFlg'
                                        */
  int8_T InRtSideFlg_Y0_f;             /* Computed Parameter: InRtSideFlg_Y0_f
                                        * Referenced by: '<S29>/InRtSideFlg'
                                        */
  int8_T SelectObjFlg_Y0_c;            /* Computed Parameter: SelectObjFlg_Y0_c
                                        * Referenced by: '<S28>/SelectObjFlg'
                                        */
  P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
    Judge_MainInner_SdOccJudAccordRtLaneFcn_SelectJdWtRtLn;/* '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn' */
  P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
    Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn;/* '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn' */
  P_Judge_MainTTC_Cal_SideOccupy_Fcn_T Judge_MainTTC_Cal;/* '<S26>/Judge_Main.TTC_Cal' */
  P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T
    Judge_MainInterestObjDet_WithoutLane;/* '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
  P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T
    Judge_MainInterestObjDet_WithLane; /* '<S26>/Judge_Main.InterestObjDet_WithLane' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SideOccupy_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_SideOccupy_Fcn_T SideOccupy_Fcn_P;

/* Block signals (auto storage) */
extern B_SideOccupy_Fcn_T SideOccupy_Fcn_B;

/* Block states (auto storage) */
extern DW_SideOccupy_Fcn_T SideOccupy_Fcn_DW;

/* Model entry point functions */
extern void SideOccupy_Fcn_initialize(void);
extern void SideOccupy_Fcn_step(void);
extern void SideOccupy_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SideOccupy_Fcn_T *const SideOccupy_Fcn_M;

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
 * '<Root>' : 'SideOccupy_Fcn'
 * '<S1>'   : 'SideOccupy_Fcn/Curve_Radius[m]'
 * '<S2>'   : 'SideOccupy_Fcn/Data_Cov_Ego_Lane_Position'
 * '<S3>'   : 'SideOccupy_Fcn/Data_Cov_Global_FusObj'
 * '<S4>'   : 'SideOccupy_Fcn/Data_Cov_Global_FusObj_Num'
 * '<S5>'   : 'SideOccupy_Fcn/Data_Cov_LtLane_Model_C0'
 * '<S6>'   : 'SideOccupy_Fcn/Data_Cov_LtLane_Model_C1'
 * '<S7>'   : 'SideOccupy_Fcn/Data_Cov_LtLane_Model_C2'
 * '<S8>'   : 'SideOccupy_Fcn/Data_Cov_LtLane_Model_C3'
 * '<S9>'   : 'SideOccupy_Fcn/Data_Cov_LtLnQuality'
 * '<S10>'  : 'SideOccupy_Fcn/Data_Cov_RtLane_Model_C0'
 * '<S11>'  : 'SideOccupy_Fcn/Data_Cov_RtLane_Model_C1'
 * '<S12>'  : 'SideOccupy_Fcn/Data_Cov_RtLane_Model_C2'
 * '<S13>'  : 'SideOccupy_Fcn/Data_Cov_RtLane_Model_C3'
 * '<S14>'  : 'SideOccupy_Fcn/Data_Cov_RtLnQuality'
 * '<S15>'  : 'SideOccupy_Fcn/Data_Cov_Side_Index'
 * '<S16>'  : 'SideOccupy_Fcn/Data_Cov_Side_Occ_Flg'
 * '<S17>'  : 'SideOccupy_Fcn/Data_Cov_SrtWhlAng'
 * '<S18>'  : 'SideOccupy_Fcn/Data_Cov_VehSpd'
 * '<S19>'  : 'SideOccupy_Fcn/Data_Cov_YawRate'
 * '<S20>'  : 'SideOccupy_Fcn/Maxtrix_Gen'
 * '<S21>'  : 'SideOccupy_Fcn/Maxtrix_Gen1'
 * '<S22>'  : 'SideOccupy_Fcn/Maxtrix_Gen2'
 * '<S23>'  : 'SideOccupy_Fcn/Maxtrix_Gen3'
 * '<S24>'  : 'SideOccupy_Fcn/Maxtrix_Gen4'
 * '<S25>'  : 'SideOccupy_Fcn/Maxtrix_Gen5'
 * '<S26>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module'
 * '<S27>'  : 'SideOccupy_Fcn/Curve_Radius[m]/Compare To Constant'
 * '<S28>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn'
 * '<S29>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn'
 * '<S30>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn'
 * '<S31>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn'
 * '<S32>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.InterestObjDet_WithLane'
 * '<S33>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.InterestObjDet_WithoutLane'
 * '<S34>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn'
 * '<S35>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn'
 * '<S36>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn'
 * '<S37>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn'
 * '<S38>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn'
 * '<S39>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcMov'
 * '<S40>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn'
 * '<S41>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.TTC_Cal'
 * '<S42>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn/Bus_Creat'
 * '<S43>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn/CompareToLtLn'
 * '<S44>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn/CompareToRtLn'
 * '<S45>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn/CompareToLtLn/Compare To Zero'
 * '<S46>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_Inner_SelectJdWoLn/CompareToRtLn/Compare To Zero'
 * '<S47>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/Bus_Creat'
 * '<S48>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/CompareToFarLtLn'
 * '<S49>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/CompareToFarRtLn'
 * '<S50>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/CompareToNearLtLn'
 * '<S51>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/CompareToNearRtLn'
 * '<S52>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/CompareToFarLtLn/Compare To Zero'
 * '<S53>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/CompareToFarRtLn/Compare To Zero'
 * '<S54>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/CompareToNearLtLn/Compare To Zero'
 * '<S55>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordMov.Fcn_RtSdOccJdWoLn/CompareToNearRtLn/Compare To Zero'
 * '<S56>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/Bus_Creat'
 * '<S57>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/CompareToFaRtrLn'
 * '<S58>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/CompareToFarLtLn'
 * '<S59>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/CompareToNearLtLn'
 * '<S60>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/CompareToNearRtLn'
 * '<S61>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/CompareToFaRtrLn/Compare To Zero'
 * '<S62>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/CompareToFarLtLn/Compare To Zero'
 * '<S63>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/CompareToNearLtLn/Compare To Zero'
 * '<S64>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_RtSdOccJdWtLn/CompareToNearRtLn/Compare To Zero'
 * '<S65>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn/Bus_Creat'
 * '<S66>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn/CompareToLtLn'
 * '<S67>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn/CompareToRtLn'
 * '<S68>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn/CompareToLtLn/Compare To Zero'
 * '<S69>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn/CompareToRtLn/Compare To Zero'
 * '<S70>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/Bus_Creat'
 * '<S71>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/CompareToFarLtLn'
 * '<S72>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/CompareToFarRtLn'
 * '<S73>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/CompareToNearLtLn'
 * '<S74>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/CompareToNearRtLn'
 * '<S75>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/CompareToFarLtLn/Compare To Zero'
 * '<S76>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/CompareToFarRtLn/Compare To Zero'
 * '<S77>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/CompareToNearLtLn/Compare To Zero'
 * '<S78>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_LtSdOccJdWtLn/CompareToNearRtLn/Compare To Zero'
 * '<S79>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn/Bus_Creat'
 * '<S80>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn/CompareToLtLn'
 * '<S81>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn/CompareToRtLn'
 * '<S82>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn/CompareToLtLn/Compare To Zero'
 * '<S83>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn/CompareToRtLn/Compare To Zero'
 * '<S84>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/Bus_Creat'
 * '<S85>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/CompareToFarLtLn'
 * '<S86>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/CompareToFarRtLn'
 * '<S87>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/CompareToNearLtLn'
 * '<S88>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/CompareToNearRtLn'
 * '<S89>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/CompareToFarLtLn/Compare To Zero'
 * '<S90>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/CompareToFarRtLn/Compare To Zero'
 * '<S91>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/CompareToNearLtLn/Compare To Zero'
 * '<S92>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_LtSdOccJdWoLn/CompareToNearRtLn/Compare To Zero'
 * '<S93>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn/Bus_Creat'
 * '<S94>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn/CompareToLtLn'
 * '<S95>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn/CompareToRtLn'
 * '<S96>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn/CompareToLtLn/Compare To Zero'
 * '<S97>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.Outer_SdOccJudAccordMov.Fcn_Outer_SelectJdWoLn/CompareToRtLn/Compare To Zero'
 * '<S98>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Bus_Gen'
 * '<S99>'  : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Compare To Constant'
 * '<S100>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Compare To Constant1'
 * '<S101>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Path_CalAcdEgoLane'
 * '<S102>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Path_CalAcdLane'
 * '<S103>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Path_CalAcdMov'
 * '<S104>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/X_Joint_Cal'
 * '<S105>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Bus_Gen/Radius_avoidZero'
 * '<S106>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Bus_Gen/a'
 * '<S107>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Bus_Gen/b'
 * '<S108>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Bus_Gen/bb-4ac'
 * '<S109>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Bus_Gen/c'
 * '<S110>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Bus_Gen/Radius_avoidZero/Compare To Constant'
 * '<S111>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Path_CalAcdMov/Radius_avoidZero'
 * '<S112>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/Path_CalAcdMov/Radius_avoidZero/Compare To Constant'
 * '<S113>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/X_Joint_Cal/root1'
 * '<S114>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcLtLn/X_Joint_Cal/root2'
 * '<S115>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcMov/Radius_avoidZero'
 * '<S116>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcMov/Radius_avoidZero/Compare To Constant'
 * '<S117>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Bus_Gen'
 * '<S118>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Compare To Constant'
 * '<S119>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Compare To Constant1'
 * '<S120>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Path_CalAcdEgoLane'
 * '<S121>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Path_CalAcdLane'
 * '<S122>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Path_CalAcdMov'
 * '<S123>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/X_Joint_Cal'
 * '<S124>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Bus_Gen/Radius_avoidZero'
 * '<S125>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Bus_Gen/a'
 * '<S126>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Bus_Gen/b'
 * '<S127>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Bus_Gen/bb-4ac'
 * '<S128>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Bus_Gen/c'
 * '<S129>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Bus_Gen/Radius_avoidZero/Compare To Constant'
 * '<S130>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Path_CalAcdMov/Radius_avoidZero'
 * '<S131>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/Path_CalAcdMov/Radius_avoidZero/Compare To Constant'
 * '<S132>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/X_Joint_Cal/root1'
 * '<S133>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.PredictPthAcRtLn/X_Joint_Cal/root2'
 * '<S134>' : 'SideOccupy_Fcn/Side_Occ_Judge_Module/Judge_Main.TTC_Cal/Compare To Zero'
 */
#endif                                 /* RTW_HEADER_SideOccupy_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
