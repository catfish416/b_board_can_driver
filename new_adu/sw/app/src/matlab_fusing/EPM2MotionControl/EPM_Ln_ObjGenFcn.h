/*
 * File: EPM_Ln_ObjGenFcn.h
 *
 * Code generated for Simulink model 'EPM_Ln_ObjGenFcn'.
 *
 * Model version                  : 1.27
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Mon May 08 17:28:08 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EPM_Ln_ObjGenFcn_h_
#define RTW_HEADER_EPM_Ln_ObjGenFcn_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef EPM_Ln_ObjGenFcn_COMMON_INCLUDES_
# define EPM_Ln_ObjGenFcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EPM_Ln_ObjGenFcn_COMMON_INCLUDES_ */

#include "EPM_Ln_ObjGenFcn_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Switch;                       /* '<S262>/Switch' */
  real_T ObsCutInCutInTime_m;          /* '<S254>/ObsCutInCalFromTraj' */
  real_T BusOff_d;                     /* '<S254>/Chart4' */
} B_EPM_Ln_ObjGenFcn_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S254>/Unit Delay1' */
  real_T Cnt;                          /* '<S254>/Chart4' */
  real_T RxTimeLast;                   /* '<S254>/Chart4' */
} DW_EPM_Ln_ObjGenFcn_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T VehSpdAvgDrvn;                /* '<Root>/VehSpdAvgDrvn' */
  real_T YawRate;                      /* '<Root>/YawRate' */
  real_T StrWhlAng;                    /* '<Root>/StrWhlAng' */
} ExtU_EPM_Ln_ObjGenFcn_T;

/* Parameters (auto storage) */
struct P_EPM_Ln_ObjGenFcn_T_ {
  real_T WheelBase_Value;              /* Expression: 3.088
                                        * Referenced by: '<S254>/WheelBase'
                                        */
  real_T SteerRatio_Value;             /* Expression: 17.5
                                        * Referenced by: '<S254>/SteerRatio'
                                        */
  real_T Constant1_Value;              /* Expression: -1
                                        * Referenced by: '<S262>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: -3.6
                                        * Referenced by: '<S262>/Constant'
                                        */
  real_T NE_Gain;                      /* Expression: 1
                                        * Referenced by: '<S225>/N->E'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 3
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real_T EN_Gain;                      /* Expression: 1/1
                                        * Referenced by: '<S17>/E->N'
                                        */
  real_T NE_Gain_h;                    /* Expression: 0.01
                                        * Referenced by: '<S38>/N->E'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 10
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: -10
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T EN_Gain_c;                    /* Expression: 1/0.01
                                        * Referenced by: '<S12>/E->N'
                                        */
  real_T NE_Gain_a;                    /* Expression: 9.77e-7
                                        * Referenced by: '<S41>/N->E'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: 0.032
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: -0.032
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T EN_Gain_m;                    /* Expression: 1/9.77e-007
                                        * Referenced by: '<S14>/E->N'
                                        */
  real_T NE_Gain_o;                    /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S42>/N->E'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: 0.000122
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: -0.000122
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T EN_Gain_e;                    /* Expression: 1/3.7252902985e-009
                                        * Referenced by: '<S15>/E->N'
                                        */
  real_T NE_Gain_m;                    /* Expression: 0.0009765625
                                        * Referenced by: '<S40>/N->E'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: 0.357
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: -0.357
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T EN_Gain_cc;                   /* Expression: 1/0.0009765625
                                        * Referenced by: '<S13>/E->N'
                                        */
  real_T NE_Gain_b;                    /* Expression: 0.5
                                        * Referenced by: '<S232>/N->E'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 0.357
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: -0.357
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real_T EN_Gain_cj;                   /* Expression: 1/0.5
                                        * Referenced by: '<S16>/E->N'
                                        */
  real_T NE_Gain_k;                    /* Expression: 1
                                        * Referenced by: '<S226>/N->E'
                                        */
  real_T Saturation_UpperSat_b;        /* Expression: 3
                                        * Referenced by: '<S34>/Saturation'
                                        */
  real_T Saturation_LowerSat_jn;       /* Expression: 0
                                        * Referenced by: '<S34>/Saturation'
                                        */
  real_T EN_Gain_p;                    /* Expression: 1/1
                                        * Referenced by: '<S34>/E->N'
                                        */
  real_T NE_Gain_p;                    /* Expression: 0.01
                                        * Referenced by: '<S39>/N->E'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 10
                                        * Referenced by: '<S29>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: -10
                                        * Referenced by: '<S29>/Saturation'
                                        */
  real_T EN_Gain_d;                    /* Expression: 1/0.01
                                        * Referenced by: '<S29>/E->N'
                                        */
  real_T NE_Gain_bl;                   /* Expression: 9.77e-7
                                        * Referenced by: '<S43>/N->E'
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: 0.032
                                        * Referenced by: '<S31>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: -0.032
                                        * Referenced by: '<S31>/Saturation'
                                        */
  real_T EN_Gain_i;                    /* Expression: 1/9.77e-007
                                        * Referenced by: '<S31>/E->N'
                                        */
  real_T NE_Gain_d;                    /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S44>/N->E'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: 0.000122
                                        * Referenced by: '<S32>/Saturation'
                                        */
  real_T Saturation_LowerSat_jd;       /* Expression: -0.000122
                                        * Referenced by: '<S32>/Saturation'
                                        */
  real_T EN_Gain_k;                    /* Expression: 1/3.7252902985e-009
                                        * Referenced by: '<S32>/E->N'
                                        */
  real_T NE_Gain_c;                    /* Expression: 0.0009765625
                                        * Referenced by: '<S45>/N->E'
                                        */
  real_T Saturation_UpperSat_fp;       /* Expression: 0.357
                                        * Referenced by: '<S30>/Saturation'
                                        */
  real_T Saturation_LowerSat_cn;       /* Expression: -0.357
                                        * Referenced by: '<S30>/Saturation'
                                        */
  real_T EN_Gain_k0;                   /* Expression: 1/0.0009765625
                                        * Referenced by: '<S30>/E->N'
                                        */
  real_T NE_Gain_e;                    /* Expression: 0.5
                                        * Referenced by: '<S233>/N->E'
                                        */
  real_T Saturation_UpperSat_a;        /* Expression: 0.357
                                        * Referenced by: '<S33>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: -0.357
                                        * Referenced by: '<S33>/Saturation'
                                        */
  real_T EN_Gain_mi;                   /* Expression: 1/0.5
                                        * Referenced by: '<S33>/E->N'
                                        */
  real_T NE_Gain_mj;                   /* Expression: 1
                                        * Referenced by: '<S227>/N->E'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 3
                                        * Referenced by: '<S23>/Saturation'
                                        */
  real_T Saturation_LowerSat_d1;       /* Expression: 0
                                        * Referenced by: '<S23>/Saturation'
                                        */
  real_T EN_Gain_n;                    /* Expression: 1/1
                                        * Referenced by: '<S23>/E->N'
                                        */
  real_T NE_Gain_cg;                   /* Expression: 0.01
                                        * Referenced by: '<S67>/N->E'
                                        */
  real_T Saturation_UpperSat_lu;       /* Expression: 10
                                        * Referenced by: '<S19>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: -10
                                        * Referenced by: '<S19>/Saturation'
                                        */
  real_T EN_Gain_g;                    /* Expression: 1/0.01
                                        * Referenced by: '<S19>/E->N'
                                        */
  real_T NE_Gain_ml;                   /* Expression: 9.77e-7
                                        * Referenced by: '<S69>/N->E'
                                        */
  real_T Saturation_UpperSat_l2;       /* Expression: 0.032
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: -0.032
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T EN_Gain_cb;                   /* Expression: 1/9.77e-007
                                        * Referenced by: '<S21>/E->N'
                                        */
  real_T NE_Gain_ob;                   /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S70>/N->E'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: 0.000122
                                        * Referenced by: '<S22>/Saturation'
                                        */
  real_T Saturation_LowerSat_at;       /* Expression: -0.000122
                                        * Referenced by: '<S22>/Saturation'
                                        */
  real_T EN_Gain_dt;                   /* Expression: 1/3.7252902985e-009
                                        * Referenced by: '<S22>/E->N'
                                        */
  real_T NE_Gain_cv;                   /* Expression: 1
                                        * Referenced by: '<S228>/N->E'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 3
                                        * Referenced by: '<S28>/Saturation'
                                        */
  real_T Saturation_LowerSat_ai;       /* Expression: 0
                                        * Referenced by: '<S28>/Saturation'
                                        */
  real_T EN_Gain_a;                    /* Expression: 1/1
                                        * Referenced by: '<S28>/E->N'
                                        */
  real_T NE_Gain_g;                    /* Expression: 0.01
                                        * Referenced by: '<S72>/N->E'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 10
                                        * Referenced by: '<S24>/Saturation'
                                        */
  real_T Saturation_LowerSat_jb;       /* Expression: -10
                                        * Referenced by: '<S24>/Saturation'
                                        */
  real_T EN_Gain_ms;                   /* Expression: 1/0.01
                                        * Referenced by: '<S24>/E->N'
                                        */
  real_T NE_Gain_bk;                   /* Expression: 9.77e-7
                                        * Referenced by: '<S73>/N->E'
                                        */
  real_T Saturation_UpperSat_ij;       /* Expression: 0.032
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: -0.032
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real_T EN_Gain_ao;                   /* Expression: 1/9.77e-007
                                        * Referenced by: '<S26>/E->N'
                                        */
  real_T NE_Gain_j;                    /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S74>/N->E'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 0.000122
                                        * Referenced by: '<S27>/Saturation'
                                        */
  real_T Saturation_LowerSat_jbj;      /* Expression: -0.000122
                                        * Referenced by: '<S27>/Saturation'
                                        */
  real_T EN_Gain_f;                    /* Expression: 1/3.7252902985e-009
                                        * Referenced by: '<S27>/E->N'
                                        */
  real_T NE_Gain_n;                    /* Expression: 0.0009765625
                                        * Referenced by: '<S68>/N->E'
                                        */
  real_T Saturation_UpperSat_gx;       /* Expression: 0.357
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T Saturation_LowerSat_j2;       /* Expression: -0.357
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T EN_Gain_ir;                   /* Expression: 1/0.0009765625
                                        * Referenced by: '<S20>/E->N'
                                        */
  real_T NE_Gain_l;                    /* Expression: 0.0009765625
                                        * Referenced by: '<S71>/N->E'
                                        */
  real_T Saturation_UpperSat_cx;       /* Expression: 0.357
                                        * Referenced by: '<S25>/Saturation'
                                        */
  real_T Saturation_LowerSat_oy;       /* Expression: -0.357
                                        * Referenced by: '<S25>/Saturation'
                                        */
  real_T EN_Gain_ey;                   /* Expression: 1/0.0009765625
                                        * Referenced by: '<S25>/E->N'
                                        */
  real_T NE_Gain_bx;                   /* Expression: 0.01
                                        * Referenced by: '<S230>/N->E'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 2
                                        * Referenced by: '<S18>/Saturation'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: 0
                                        * Referenced by: '<S18>/Saturation'
                                        */
  real_T EN_Gain_ge;                   /* Expression: 1/0.01
                                        * Referenced by: '<S18>/E->N'
                                        */
  real_T NE_Gain_kd;                   /* Expression: 0.01
                                        * Referenced by: '<S231>/N->E'
                                        */
  real_T Saturation_UpperSat_b0;       /* Expression: 2
                                        * Referenced by: '<S35>/Saturation'
                                        */
  real_T Saturation_LowerSat_m1;       /* Expression: 0
                                        * Referenced by: '<S35>/Saturation'
                                        */
  real_T EN_Gain_m2;                   /* Expression: 1/0.01
                                        * Referenced by: '<S35>/E->N'
                                        */
  real_T NE_Gain_k4;                   /* Expression: 0.0625
                                        * Referenced by: '<S195>/N->E'
                                        */
  real_T NE_Gain_n0;                   /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  real_T NE_Gain_by;                   /* Expression: 0.0625
                                        * Referenced by: '<S150>/N->E'
                                        */
  real_T NE_Gain_cr;                   /* Expression: 0.03
                                        * Referenced by: '<S75>/N->E'
                                        */
  real_T NE_Gain_i;                    /* Expression: 1
                                        * Referenced by: '<S170>/N->E'
                                        */
  real_T NE_Gain_ov;                   /* Expression: 1
                                        * Referenced by: '<S130>/N->E'
                                        */
  real_T NE_Gain_oh;                   /* Expression: 1
                                        * Referenced by: '<S55>/N->E'
                                        */
  real_T NE_Gain_hz;                   /* Expression: 0.0625
                                        * Referenced by: '<S160>/N->E'
                                        */
  real_T NE_Gain_eb;                   /* Expression: 1
                                        * Referenced by: '<S120>/N->E'
                                        */
  real_T NE_Gain_cc;                   /* Expression: 1
                                        * Referenced by: '<S140>/N->E'
                                        */
  real_T NE_Gain_ly;                   /* Expression: 0.01
                                        * Referenced by: '<S85>/N->E'
                                        */
  real_T NE_Gain_jx;                   /* Expression: 0.05
                                        * Referenced by: '<S215>/N->E'
                                        */
  real_T NE_Gain_ew;                   /* Expression: 1
                                        * Referenced by: '<S185>/N->E'
                                        */
  real_T NE_Gain_as;                   /* Expression: 0.1
                                        * Referenced by: '<S205>/N->E'
                                        */
  real_T NE_Gain_ny;                   /* Expression: 0.0625
                                        * Referenced by: '<S197>/N->E'
                                        */
  real_T NE_Gain_pq;                   /* Expression: 1
                                        * Referenced by: '<S4>/N->E'
                                        */
  real_T NE_Gain_m5;                   /* Expression: 0.0625
                                        * Referenced by: '<S152>/N->E'
                                        */
  real_T NE_Gain_dj;                   /* Expression: 0.03
                                        * Referenced by: '<S77>/N->E'
                                        */
  real_T NE_Gain_f;                    /* Expression: 1
                                        * Referenced by: '<S172>/N->E'
                                        */
  real_T NE_Gain_hw;                   /* Expression: 1
                                        * Referenced by: '<S132>/N->E'
                                        */
  real_T NE_Gain_hg;                   /* Expression: 1
                                        * Referenced by: '<S57>/N->E'
                                        */
  real_T NE_Gain_ha;                   /* Expression: 0.0625
                                        * Referenced by: '<S162>/N->E'
                                        */
  real_T NE_Gain_am;                   /* Expression: 1
                                        * Referenced by: '<S122>/N->E'
                                        */
  real_T NE_Gain_ng;                   /* Expression: 1
                                        * Referenced by: '<S142>/N->E'
                                        */
  real_T NE_Gain_do;                   /* Expression: 0.01
                                        * Referenced by: '<S87>/N->E'
                                        */
  real_T NE_Gain_ko;                   /* Expression: 0.05
                                        * Referenced by: '<S217>/N->E'
                                        */
  real_T NE_Gain_ma;                   /* Expression: 1
                                        * Referenced by: '<S187>/N->E'
                                        */
  real_T NE_Gain_bv;                   /* Expression: 0.1
                                        * Referenced by: '<S207>/N->E'
                                        */
  real_T NE_Gain_cc3;                  /* Expression: 0.0625
                                        * Referenced by: '<S198>/N->E'
                                        */
  real_T NE_Gain_bj;                   /* Expression: 1
                                        * Referenced by: '<S5>/N->E'
                                        */
  real_T NE_Gain_o0;                   /* Expression: 0.0625
                                        * Referenced by: '<S153>/N->E'
                                        */
  real_T NE_Gain_bn;                   /* Expression: 0.03
                                        * Referenced by: '<S78>/N->E'
                                        */
  real_T NE_Gain_pa;                   /* Expression: 1
                                        * Referenced by: '<S173>/N->E'
                                        */
  real_T NE_Gain_hn;                   /* Expression: 1
                                        * Referenced by: '<S133>/N->E'
                                        */
  real_T NE_Gain_m2;                   /* Expression: 1
                                        * Referenced by: '<S58>/N->E'
                                        */
  real_T NE_Gain_gj;                   /* Expression: 0.0625
                                        * Referenced by: '<S163>/N->E'
                                        */
  real_T NE_Gain_byv;                  /* Expression: 1
                                        * Referenced by: '<S123>/N->E'
                                        */
  real_T NE_Gain_lv;                   /* Expression: 1
                                        * Referenced by: '<S143>/N->E'
                                        */
  real_T NE_Gain_f3;                   /* Expression: 0.01
                                        * Referenced by: '<S88>/N->E'
                                        */
  real_T NE_Gain_io;                   /* Expression: 0.05
                                        * Referenced by: '<S218>/N->E'
                                        */
  real_T NE_Gain_f2;                   /* Expression: 1
                                        * Referenced by: '<S188>/N->E'
                                        */
  real_T NE_Gain_blf;                  /* Expression: 0.1
                                        * Referenced by: '<S208>/N->E'
                                        */
  real_T NE_Gain_o5;                   /* Expression: 0.0625
                                        * Referenced by: '<S199>/N->E'
                                        */
  real_T NE_Gain_mu;                   /* Expression: 1
                                        * Referenced by: '<S6>/N->E'
                                        */
  real_T NE_Gain_dk;                   /* Expression: 0.0625
                                        * Referenced by: '<S154>/N->E'
                                        */
  real_T NE_Gain_mn;                   /* Expression: 0.03
                                        * Referenced by: '<S79>/N->E'
                                        */
  real_T NE_Gain_ji;                   /* Expression: 1
                                        * Referenced by: '<S174>/N->E'
                                        */
  real_T NE_Gain_kh;                   /* Expression: 1
                                        * Referenced by: '<S134>/N->E'
                                        */
  real_T NE_Gain_i5;                   /* Expression: 1
                                        * Referenced by: '<S59>/N->E'
                                        */
  real_T NE_Gain_bq;                   /* Expression: 0.0625
                                        * Referenced by: '<S164>/N->E'
                                        */
  real_T NE_Gain_lp;                   /* Expression: 1
                                        * Referenced by: '<S124>/N->E'
                                        */
  real_T NE_Gain_ed;                   /* Expression: 1
                                        * Referenced by: '<S144>/N->E'
                                        */
  real_T NE_Gain_nr;                   /* Expression: 0.01
                                        * Referenced by: '<S89>/N->E'
                                        */
  real_T NE_Gain_jh;                   /* Expression: 0.05
                                        * Referenced by: '<S219>/N->E'
                                        */
  real_T NE_Gain_pj;                   /* Expression: 1
                                        * Referenced by: '<S189>/N->E'
                                        */
  real_T NE_Gain_po;                   /* Expression: 0.1
                                        * Referenced by: '<S209>/N->E'
                                        */
  real_T NE_Gain_ag;                   /* Expression: 0.0625
                                        * Referenced by: '<S200>/N->E'
                                        */
  real_T NE_Gain_d0;                   /* Expression: 1
                                        * Referenced by: '<S7>/N->E'
                                        */
  real_T NE_Gain_i3;                   /* Expression: 0.0625
                                        * Referenced by: '<S155>/N->E'
                                        */
  real_T NE_Gain_ph;                   /* Expression: 0.03
                                        * Referenced by: '<S80>/N->E'
                                        */
  real_T NE_Gain_bc;                   /* Expression: 1
                                        * Referenced by: '<S175>/N->E'
                                        */
  real_T NE_Gain_dz;                   /* Expression: 1
                                        * Referenced by: '<S135>/N->E'
                                        */
  real_T NE_Gain_er;                   /* Expression: 1
                                        * Referenced by: '<S60>/N->E'
                                        */
  real_T NE_Gain_ll;                   /* Expression: 0.0625
                                        * Referenced by: '<S165>/N->E'
                                        */
  real_T NE_Gain_jp;                   /* Expression: 1
                                        * Referenced by: '<S125>/N->E'
                                        */
  real_T NE_Gain_a1;                   /* Expression: 1
                                        * Referenced by: '<S145>/N->E'
                                        */
  real_T NE_Gain_hs;                   /* Expression: 0.01
                                        * Referenced by: '<S90>/N->E'
                                        */
  real_T NE_Gain_aw;                   /* Expression: 0.05
                                        * Referenced by: '<S220>/N->E'
                                        */
  real_T NE_Gain_dkt;                  /* Expression: 1
                                        * Referenced by: '<S190>/N->E'
                                        */
  real_T NE_Gain_ie;                   /* Expression: 0.1
                                        * Referenced by: '<S210>/N->E'
                                        */
  real_T NE_Gain_lpn;                  /* Expression: 0.0625
                                        * Referenced by: '<S201>/N->E'
                                        */
  real_T NE_Gain_nx;                   /* Expression: 1
                                        * Referenced by: '<S8>/N->E'
                                        */
  real_T NE_Gain_i4;                   /* Expression: 0.0625
                                        * Referenced by: '<S156>/N->E'
                                        */
  real_T NE_Gain_gw;                   /* Expression: 0.03
                                        * Referenced by: '<S81>/N->E'
                                        */
  real_T NE_Gain_lyy;                  /* Expression: 1
                                        * Referenced by: '<S176>/N->E'
                                        */
  real_T NE_Gain_ce;                   /* Expression: 1
                                        * Referenced by: '<S136>/N->E'
                                        */
  real_T NE_Gain_ad;                   /* Expression: 1
                                        * Referenced by: '<S61>/N->E'
                                        */
  real_T NE_Gain_ck;                   /* Expression: 0.0625
                                        * Referenced by: '<S166>/N->E'
                                        */
  real_T NE_Gain_ni;                   /* Expression: 1
                                        * Referenced by: '<S126>/N->E'
                                        */
  real_T NE_Gain_hr;                   /* Expression: 1
                                        * Referenced by: '<S146>/N->E'
                                        */
  real_T NE_Gain_mq;                   /* Expression: 0.01
                                        * Referenced by: '<S91>/N->E'
                                        */
  real_T NE_Gain_js;                   /* Expression: 0.05
                                        * Referenced by: '<S221>/N->E'
                                        */
  real_T NE_Gain_bkc;                  /* Expression: 1
                                        * Referenced by: '<S191>/N->E'
                                        */
  real_T NE_Gain_e5;                   /* Expression: 0.1
                                        * Referenced by: '<S211>/N->E'
                                        */
  real_T NE_Gain_gp;                   /* Expression: 0.0625
                                        * Referenced by: '<S202>/N->E'
                                        */
  real_T NE_Gain_os;                   /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  real_T NE_Gain_jn;                   /* Expression: 0.0625
                                        * Referenced by: '<S157>/N->E'
                                        */
  real_T NE_Gain_af;                   /* Expression: 0.03
                                        * Referenced by: '<S82>/N->E'
                                        */
  real_T NE_Gain_no;                   /* Expression: 1
                                        * Referenced by: '<S177>/N->E'
                                        */
  real_T NE_Gain_iv;                   /* Expression: 1
                                        * Referenced by: '<S137>/N->E'
                                        */
  real_T NE_Gain_ou;                   /* Expression: 1
                                        * Referenced by: '<S62>/N->E'
                                        */
  real_T NE_Gain_oo;                   /* Expression: 0.0625
                                        * Referenced by: '<S167>/N->E'
                                        */
  real_T NE_Gain_le;                   /* Expression: 1
                                        * Referenced by: '<S127>/N->E'
                                        */
  real_T NE_Gain_kk;                   /* Expression: 1
                                        * Referenced by: '<S147>/N->E'
                                        */
  real_T NE_Gain_h5;                   /* Expression: 0.01
                                        * Referenced by: '<S92>/N->E'
                                        */
  real_T NE_Gain_ac;                   /* Expression: 0.05
                                        * Referenced by: '<S222>/N->E'
                                        */
  real_T NE_Gain_kkc;                  /* Expression: 1
                                        * Referenced by: '<S192>/N->E'
                                        */
  real_T NE_Gain_kw;                   /* Expression: 0.1
                                        * Referenced by: '<S212>/N->E'
                                        */
  real_T NE_Gain_ls;                   /* Expression: 0.0625
                                        * Referenced by: '<S203>/N->E'
                                        */
  real_T NE_Gain_iof;                  /* Expression: 1
                                        * Referenced by: '<S10>/N->E'
                                        */
  real_T NE_Gain_gt;                   /* Expression: 0.0625
                                        * Referenced by: '<S158>/N->E'
                                        */
  real_T NE_Gain_p1;                   /* Expression: 0.03
                                        * Referenced by: '<S83>/N->E'
                                        */
  real_T NE_Gain_fp;                   /* Expression: 1
                                        * Referenced by: '<S178>/N->E'
                                        */
  real_T NE_Gain_fg;                   /* Expression: 1
                                        * Referenced by: '<S138>/N->E'
                                        */
  real_T NE_Gain_k4u;                  /* Expression: 1
                                        * Referenced by: '<S63>/N->E'
                                        */
  real_T NE_Gain_hp;                   /* Expression: 0.0625
                                        * Referenced by: '<S168>/N->E'
                                        */
  real_T NE_Gain_ca;                   /* Expression: 1
                                        * Referenced by: '<S128>/N->E'
                                        */
  real_T NE_Gain_i3j;                  /* Expression: 1
                                        * Referenced by: '<S148>/N->E'
                                        */
  real_T NE_Gain_c3;                   /* Expression: 0.01
                                        * Referenced by: '<S93>/N->E'
                                        */
  real_T NE_Gain_fr;                   /* Expression: 0.05
                                        * Referenced by: '<S223>/N->E'
                                        */
  real_T NE_Gain_ivg;                  /* Expression: 1
                                        * Referenced by: '<S193>/N->E'
                                        */
  real_T NE_Gain_cb;                   /* Expression: 0.1
                                        * Referenced by: '<S213>/N->E'
                                        */
  real_T NE_Gain_mup;                  /* Expression: 0.0625
                                        * Referenced by: '<S204>/N->E'
                                        */
  real_T NE_Gain_k4q;                  /* Expression: 1
                                        * Referenced by: '<S11>/N->E'
                                        */
  real_T NE_Gain_it;                   /* Expression: 0.0625
                                        * Referenced by: '<S159>/N->E'
                                        */
  real_T NE_Gain_ok;                   /* Expression: 0.03
                                        * Referenced by: '<S84>/N->E'
                                        */
  real_T NE_Gain_cw;                   /* Expression: 1
                                        * Referenced by: '<S179>/N->E'
                                        */
  real_T NE_Gain_gh;                   /* Expression: 1
                                        * Referenced by: '<S139>/N->E'
                                        */
  real_T NE_Gain_bw;                   /* Expression: 1
                                        * Referenced by: '<S64>/N->E'
                                        */
  real_T NE_Gain_dn;                   /* Expression: 0.0625
                                        * Referenced by: '<S169>/N->E'
                                        */
  real_T NE_Gain_d1;                   /* Expression: 1
                                        * Referenced by: '<S129>/N->E'
                                        */
  real_T NE_Gain_cd;                   /* Expression: 1
                                        * Referenced by: '<S149>/N->E'
                                        */
  real_T NE_Gain_e3;                   /* Expression: 0.01
                                        * Referenced by: '<S94>/N->E'
                                        */
  real_T NE_Gain_lt;                   /* Expression: 0.05
                                        * Referenced by: '<S224>/N->E'
                                        */
  real_T NE_Gain_jy;                   /* Expression: 1
                                        * Referenced by: '<S194>/N->E'
                                        */
  real_T NE_Gain_d5;                   /* Expression: 0.1
                                        * Referenced by: '<S214>/N->E'
                                        */
  real_T NE_Gain_n0u;                  /* Expression: 0.0625
                                        * Referenced by: '<S196>/N->E'
                                        */
  real_T NE_Gain_dq;                   /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  real_T NE_Gain_bjt;                  /* Expression: 0.0625
                                        * Referenced by: '<S151>/N->E'
                                        */
  real_T NE_Gain_ju;                   /* Expression: 0.03
                                        * Referenced by: '<S76>/N->E'
                                        */
  real_T NE_Gain_ez;                   /* Expression: 1
                                        * Referenced by: '<S171>/N->E'
                                        */
  real_T NE_Gain_b2;                   /* Expression: 1
                                        * Referenced by: '<S131>/N->E'
                                        */
  real_T NE_Gain_l0;                   /* Expression: 1
                                        * Referenced by: '<S56>/N->E'
                                        */
  real_T NE_Gain_f2j;                  /* Expression: 0.0625
                                        * Referenced by: '<S161>/N->E'
                                        */
  real_T NE_Gain_b2f;                  /* Expression: 1
                                        * Referenced by: '<S121>/N->E'
                                        */
  real_T NE_Gain_pu;                   /* Expression: 1
                                        * Referenced by: '<S141>/N->E'
                                        */
  real_T NE_Gain_hd;                   /* Expression: 0.01
                                        * Referenced by: '<S86>/N->E'
                                        */
  real_T NE_Gain_ik;                   /* Expression: 0.05
                                        * Referenced by: '<S216>/N->E'
                                        */
  real_T NE_Gain_dn5;                  /* Expression: 1
                                        * Referenced by: '<S186>/N->E'
                                        */
  real_T NE_Gain_e1;                   /* Expression: 0.1
                                        * Referenced by: '<S206>/N->E'
                                        */
  real_T Constant9_Value;              /* Expression: 3.2
                                        * Referenced by: '<S254>/Constant9'
                                        */
  real_T Switch_Threshold;             /* Expression: 10
                                        * Referenced by: '<S262>/Switch'
                                        */
  real_T Constant10_Value;             /* Expression: 4.2
                                        * Referenced by: '<S254>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 0.3
                                        * Referenced by: '<S254>/Constant11'
                                        */
  real_T Constant1_Value_c;            /* Expression: 10
                                        * Referenced by: '<S254>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 14
                                        * Referenced by: '<S254>/Constant3'
                                        */
  real_T Saturation_UpperSat_bi;       /* Expression: 7
                                        * Referenced by: '<S104>/Saturation'
                                        */
  real_T Saturation_LowerSat_mh;       /* Expression: 0
                                        * Referenced by: '<S104>/Saturation'
                                        */
  real_T EN_Gain_o;                    /* Expression: 1/1
                                        * Referenced by: '<S104>/E->N'
                                        */
  real_T Saturation_UpperSat_c0;       /* Expression: 127.93
                                        * Referenced by: '<S106>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: -127.93
                                        * Referenced by: '<S106>/Saturation'
                                        */
  real_T EN_Gain_o2;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S106>/E->N'
                                        */
  real_T Saturation_UpperSat_ac;       /* Expression: 31.9375
                                        * Referenced by: '<S103>/Saturation'
                                        */
  real_T Saturation_LowerSat_o0;       /* Expression: -32
                                        * Referenced by: '<S103>/Saturation'
                                        */
  real_T EN_Gain_ec;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S103>/E->N'
                                        */
  real_T Saturation_UpperSat_n2;       /* Expression: 250
                                        * Referenced by: '<S102>/Saturation'
                                        */
  real_T Saturation_LowerSat_o5;       /* Expression: 0
                                        * Referenced by: '<S102>/Saturation'
                                        */
  real_T EN_Gain_ez;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S102>/E->N'
                                        */
  real_T Saturation_UpperSat_fk;       /* Expression: 3
                                        * Referenced by: '<S101>/Saturation'
                                        */
  real_T Saturation_LowerSat_po;       /* Expression: 0
                                        * Referenced by: '<S101>/Saturation'
                                        */
  real_T EN_Gain_nz;                   /* Expression: 1/1
                                        * Referenced by: '<S101>/E->N'
                                        */
  real_T Saturation_UpperSat_au;       /* Expression: 63
                                        * Referenced by: '<S100>/Saturation'
                                        */
  real_T Saturation_LowerSat_oa;       /* Expression: 0
                                        * Referenced by: '<S100>/Saturation'
                                        */
  real_T EN_Gain_nx;                   /* Expression: 1/1
                                        * Referenced by: '<S100>/E->N'
                                        */
  real_T Saturation_UpperSat_pn;       /* Expression: 4
                                        * Referenced by: '<S97>/Saturation'
                                        */
  real_T Saturation_LowerSat_jb0;      /* Expression: 0
                                        * Referenced by: '<S97>/Saturation'
                                        */
  real_T EN_Gain_f3;                   /* Expression: 1/1
                                        * Referenced by: '<S97>/E->N'
                                        */
  real_T Saturation_UpperSat_bv;       /* Expression: 327.67
                                        * Referenced by: '<S96>/Saturation'
                                        */
  real_T Saturation_LowerSat_mn;       /* Expression: -327.68
                                        * Referenced by: '<S96>/Saturation'
                                        */
  real_T EN_Gain_fj;                   /* Expression: 1/0.01
                                        * Referenced by: '<S96>/E->N'
                                        */
  real_T Saturation_UpperSat_os;       /* Expression: 14.97
                                        * Referenced by: '<S95>/Saturation'
                                        */
  real_T Saturation_LowerSat_ds;       /* Expression: -14.97
                                        * Referenced by: '<S95>/Saturation'
                                        */
  real_T EN_Gain_ok;                   /* Expression: 1/0.03
                                        * Referenced by: '<S95>/E->N'
                                        */
  real_T Saturation_UpperSat_dc;       /* Expression: 1
                                        * Referenced by: '<S99>/Saturation'
                                        */
  real_T Saturation_LowerSat_dx;       /* Expression: 0
                                        * Referenced by: '<S99>/Saturation'
                                        */
  real_T EN_Gain_a2;                   /* Expression: 1/1
                                        * Referenced by: '<S99>/E->N'
                                        */
  real_T Saturation_UpperSat_fj;       /* Expression: 10
                                        * Referenced by: '<S105>/Saturation'
                                        */
  real_T Saturation_LowerSat_jp;       /* Expression: 0
                                        * Referenced by: '<S105>/Saturation'
                                        */
  real_T EN_Gain_df;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S105>/E->N'
                                        */
  real_T Saturation_UpperSat_nm;       /* Expression: 12.5
                                        * Referenced by: '<S107>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 0
                                        * Referenced by: '<S107>/Saturation'
                                        */
  real_T EN_Gain_c1;                   /* Expression: 1/0.05
                                        * Referenced by: '<S107>/E->N'
                                        */
  real_T Saturation_UpperSat_ps;       /* Expression: 10
                                        * Referenced by: '<S98>/Saturation'
                                        */
  real_T Saturation_LowerSat_ct;       /* Expression: 0
                                        * Referenced by: '<S98>/Saturation'
                                        */
  real_T EN_Gain_fh;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S98>/E->N'
                                        */
  real_T Saturation_UpperSat_ob;       /* Expression: 1
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat_iv;       /* Expression: 0
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T EN_Gain_ei;                   /* Expression: 1/1
                                        * Referenced by: '<S1>/E->N'
                                        */
  real_T KLaneWidth_Value;             /* Expression: 3.2
                                        * Referenced by: '<S254>/KLaneWidth'
                                        */
  real_T KLaneWidthObsM_Value;         /* Expression: 4.2
                                        * Referenced by: '<S254>/KLaneWidthObsM'
                                        */
  real_T KInLaneFactor_Value;          /* Expression: 0.3
                                        * Referenced by: '<S254>/KInLaneFactor'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S254>/Unit Delay1'
                                        */
  real_T Constant8_Value;              /* Expression: 10
                                        * Referenced by: '<S254>/Constant8'
                                        */
  real_T Constant12_Value;             /* Expression: 14
                                        * Referenced by: '<S254>/Constant12'
                                        */
  real_T Constant2_Value;              /* Expression: 3.2
                                        * Referenced by: '<S254>/Constant2'
                                        */
  real_T Constant6_Value;              /* Expression: 0.3
                                        * Referenced by: '<S254>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0.1
                                        * Referenced by: '<S254>/Constant7'
                                        */
  real_T Constant4_Value;              /* Expression: 10
                                        * Referenced by: '<S254>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 14
                                        * Referenced by: '<S254>/Constant5'
                                        */
  real_T KObsMTLC_Value;               /* Expression: 0.7
                                        * Referenced by: '<S254>/KObsMTLC'
                                        */
  real_T Saturation_UpperSat_k3;       /* Expression: 127.93
                                        * Referenced by: '<S118>/Saturation'
                                        */
  real_T Saturation_LowerSat_ed;       /* Expression: -127.93
                                        * Referenced by: '<S118>/Saturation'
                                        */
  real_T EN_Gain_oy;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S118>/E->N'
                                        */
  real_T Saturation_UpperSat_iw;       /* Expression: 250
                                        * Referenced by: '<S115>/Saturation'
                                        */
  real_T Saturation_LowerSat_c4;       /* Expression: 0
                                        * Referenced by: '<S115>/Saturation'
                                        */
  real_T EN_Gain_ix;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S115>/E->N'
                                        */
  real_T Saturation_UpperSat_a3;       /* Expression: 14.97
                                        * Referenced by: '<S108>/Saturation'
                                        */
  real_T Saturation_LowerSat_p1;       /* Expression: -14.97
                                        * Referenced by: '<S108>/Saturation'
                                        */
  real_T EN_Gain_b;                    /* Expression: 1/0.03
                                        * Referenced by: '<S108>/E->N'
                                        */
  real_T Saturation_UpperSat_am;       /* Expression: 7
                                        * Referenced by: '<S117>/Saturation'
                                        */
  real_T Saturation_LowerSat_lk;       /* Expression: 0
                                        * Referenced by: '<S117>/Saturation'
                                        */
  real_T EN_Gain_cv;                   /* Expression: 1/1
                                        * Referenced by: '<S117>/E->N'
                                        */
  real_T Saturation_UpperSat_at;       /* Expression: 63
                                        * Referenced by: '<S112>/Saturation'
                                        */
  real_T Saturation_LowerSat_mz;       /* Expression: 0
                                        * Referenced by: '<S112>/Saturation'
                                        */
  real_T EN_Gain_oy0;                  /* Expression: 1/1
                                        * Referenced by: '<S112>/E->N'
                                        */
  real_T Saturation_UpperSat_m5;       /* Expression: 4
                                        * Referenced by: '<S110>/Saturation'
                                        */
  real_T Saturation_LowerSat_he;       /* Expression: 0
                                        * Referenced by: '<S110>/Saturation'
                                        */
  real_T EN_Gain_ap;                   /* Expression: 1/1
                                        * Referenced by: '<S110>/E->N'
                                        */
  real_T Saturation_UpperSat_ci;       /* Expression: 31.9375
                                        * Referenced by: '<S116>/Saturation'
                                        */
  real_T Saturation_LowerSat_ju;       /* Expression: -32
                                        * Referenced by: '<S116>/Saturation'
                                        */
  real_T EN_Gain_j;                    /* Expression: 1/0.0625
                                        * Referenced by: '<S116>/E->N'
                                        */
  real_T Saturation_UpperSat_h1;       /* Expression: 1
                                        * Referenced by: '<S111>/Saturation'
                                        */
  real_T Saturation_LowerSat_cj;       /* Expression: 0
                                        * Referenced by: '<S111>/Saturation'
                                        */
  real_T EN_Gain_il;                   /* Expression: 1/1
                                        * Referenced by: '<S111>/E->N'
                                        */
  real_T Saturation_UpperSat_ko;       /* Expression: 3
                                        * Referenced by: '<S114>/Saturation'
                                        */
  real_T Saturation_LowerSat_hj;       /* Expression: 0
                                        * Referenced by: '<S114>/Saturation'
                                        */
  real_T EN_Gain_c0;                   /* Expression: 1/1
                                        * Referenced by: '<S114>/E->N'
                                        */
  real_T Saturation_UpperSat_ax;       /* Expression: 327.67
                                        * Referenced by: '<S109>/Saturation'
                                        */
  real_T Saturation_LowerSat_jl;       /* Expression: -327.68
                                        * Referenced by: '<S109>/Saturation'
                                        */
  real_T EN_Gain_f0;                   /* Expression: 1/0.01
                                        * Referenced by: '<S109>/E->N'
                                        */
  real_T Saturation_UpperSat_ct;       /* Expression: 10
                                        * Referenced by: '<S113>/Saturation'
                                        */
  real_T Saturation_LowerSat_hu;       /* Expression: 0
                                        * Referenced by: '<S113>/Saturation'
                                        */
  real_T EN_Gain_mj;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S113>/E->N'
                                        */
  real_T Saturation_UpperSat_j2;       /* Expression: 12.5
                                        * Referenced by: '<S119>/Saturation'
                                        */
  real_T Saturation_LowerSat_dv;       /* Expression: 0
                                        * Referenced by: '<S119>/Saturation'
                                        */
  real_T EN_Gain_ki;                   /* Expression: 1/0.05
                                        * Referenced by: '<S119>/E->N'
                                        */
  real_T NE_Gain_n4;                   /* Expression: 1
                                        * Referenced by: '<S181>/N->E'
                                        */
  real_T Saturation_UpperSat_fv;       /* Expression: 1
                                        * Referenced by: '<S54>/Saturation'
                                        */
  real_T Saturation_LowerSat_bk;       /* Expression: 0
                                        * Referenced by: '<S54>/Saturation'
                                        */
  real_T EN_Gain_h;                    /* Expression: 1/1
                                        * Referenced by: '<S54>/E->N'
                                        */
  real_T NE_Gain_mlp;                  /* Expression: 1
                                        * Referenced by: '<S182>/N->E'
                                        */
  real_T Saturation_UpperSat_by;       /* Expression: 1
                                        * Referenced by: '<S229>/Saturation'
                                        */
  real_T Saturation_LowerSat_fa;       /* Expression: 0
                                        * Referenced by: '<S229>/Saturation'
                                        */
  real_T EN_Gain_hp;                   /* Expression: 1/1
                                        * Referenced by: '<S229>/E->N'
                                        */
  real_T Constant13_Value;             /* Expression: 10
                                        * Referenced by: '<S254>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 14
                                        * Referenced by: '<S254>/Constant14'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_EPM_Ln_ObjGenFcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_P;

/* Block signals (auto storage) */
extern B_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_B;

/* Block states (auto storage) */
extern DW_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_U;

/* Model entry point functions */
extern void EPM_Ln_ObjGenFcn_initialize(void);
extern void EPM_Ln_ObjGenFcn_step(void);
extern void EPM_Ln_ObjGenFcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EPM_Ln_ObjGenFcn_T *const EPM_Ln_ObjGenFcn_M;

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
 * '<Root>' : 'EPM_Ln_ObjGenFcn'
 * '<S1>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_BusOff'
 * '<S2>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag1'
 * '<S3>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag10'
 * '<S4>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag2'
 * '<S5>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag3'
 * '<S6>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag4'
 * '<S7>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag5'
 * '<S8>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag6'
 * '<S9>'   : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag7'
 * '<S10>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag8'
 * '<S11>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_CIPVFlag9'
 * '<S12>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Left_Lane_C0_PosRght'
 * '<S13>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Left_Lane_C1_PosTLeft'
 * '<S14>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Left_Lane_C2_PosTRght'
 * '<S15>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Left_Lane_C3_PosTRght'
 * '<S16>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Left_Lane_End'
 * '<S17>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Left_Lane_Quality'
 * '<S18>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Left_Lane_TLC'
 * '<S19>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Left_Lane_C0_PosRght'
 * '<S20>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Left_Lane_C1_PosTLeft'
 * '<S21>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Left_Lane_C2_PosTRght'
 * '<S22>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Left_Lane_C3_PosTRght'
 * '<S23>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Left_Lane_Quality'
 * '<S24>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Right_Lane_C0_PosRght'
 * '<S25>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Right_Lane_C1_PosTLeft'
 * '<S26>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Right_Lane_C2_PosTRght'
 * '<S27>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Right_Lane_C3_PosTRght'
 * '<S28>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Next_Right_Lane_Quality'
 * '<S29>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Right_Lane_C0_PosRght'
 * '<S30>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Right_Lane_C1_PosTLeft'
 * '<S31>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Right_Lane_C2_PosTRght'
 * '<S32>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Right_Lane_C3_PosTRght'
 * '<S33>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Right_Lane_End'
 * '<S34>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Right_Lane_Quality'
 * '<S35>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LKA_Right_Lane_TLC'
 * '<S36>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Crossing'
 * '<S37>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Crossing1'
 * '<S38>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Model_C0'
 * '<S39>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Model_C1'
 * '<S40>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Model_C12'
 * '<S41>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Model_C2'
 * '<S42>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Model_C3'
 * '<S43>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Model_C4'
 * '<S44>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Model_C5'
 * '<S45>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Model_C6'
 * '<S46>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Type'
 * '<S47>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Type1'
 * '<S48>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Type2'
 * '<S49>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_Type3'
 * '<S50>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_mark_color'
 * '<S51>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_mark_color1'
 * '<S52>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_mark_color2'
 * '<S53>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Lane_mark_color3'
 * '<S54>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_LeftCloseRangeCutIn'
 * '<S55>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out1'
 * '<S56>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out10'
 * '<S57>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out2'
 * '<S58>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out3'
 * '<S59>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out4'
 * '<S60>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out5'
 * '<S61>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out6'
 * '<S62>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out7'
 * '<S63>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out8'
 * '<S64>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Move_in_and_Out9'
 * '<S65>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLaneRange_Start1'
 * '<S66>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLaneRange_Start2'
 * '<S67>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLane_Model_C0'
 * '<S68>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLane_Model_C1'
 * '<S69>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLane_Model_C2'
 * '<S70>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLane_Model_C3'
 * '<S71>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLane_Model_C4'
 * '<S72>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLane_Model_C5'
 * '<S73>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLane_Model_C6'
 * '<S74>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_NextLane_Model_C7'
 * '<S75>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X1'
 * '<S76>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X10'
 * '<S77>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X2'
 * '<S78>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X3'
 * '<S79>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X4'
 * '<S80>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X5'
 * '<S81>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X6'
 * '<S82>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X7'
 * '<S83>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X8'
 * '<S84>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_Accel_X9'
 * '<S85>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle1'
 * '<S86>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle10'
 * '<S87>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle2'
 * '<S88>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle3'
 * '<S89>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle4'
 * '<S90>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle5'
 * '<S91>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle6'
 * '<S92>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle7'
 * '<S93>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle8'
 * '<S94>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_Object_ObstacleAngle9'
 * '<S95>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInAccelX'
 * '<S96>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInAngle'
 * '<S97>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInCutIn'
 * '<S98>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInCutInTime'
 * '<S99>'  : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInFlg'
 * '<S100>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInID'
 * '<S101>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInLane'
 * '<S102>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInPosX'
 * '<S103>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInPosY'
 * '<S104>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInStatus'
 * '<S105>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInTTC'
 * '<S106>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInVelX'
 * '<S107>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsCutInWidth'
 * '<S108>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMAccelX'
 * '<S109>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMAngle'
 * '<S110>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMCutIn'
 * '<S111>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMFlg'
 * '<S112>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMID'
 * '<S113>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMITTC'
 * '<S114>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMLane'
 * '<S115>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMPosX'
 * '<S116>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMPosY'
 * '<S117>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMStatus'
 * '<S118>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMVelX'
 * '<S119>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObsMWidth'
 * '<S120>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge1'
 * '<S121>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge10'
 * '<S122>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge2'
 * '<S123>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge3'
 * '<S124>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge4'
 * '<S125>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge5'
 * '<S126>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge6'
 * '<S127>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge7'
 * '<S128>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge8'
 * '<S129>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleAge9'
 * '<S130>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID1'
 * '<S131>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID10'
 * '<S132>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID2'
 * '<S133>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID3'
 * '<S134>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID4'
 * '<S135>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID5'
 * '<S136>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID6'
 * '<S137>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID7'
 * '<S138>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID8'
 * '<S139>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleID9'
 * '<S140>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane1'
 * '<S141>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane10'
 * '<S142>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane2'
 * '<S143>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane3'
 * '<S144>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane4'
 * '<S145>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane5'
 * '<S146>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane6'
 * '<S147>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane7'
 * '<S148>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane8'
 * '<S149>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleLane9'
 * '<S150>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX1'
 * '<S151>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX10'
 * '<S152>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX2'
 * '<S153>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX3'
 * '<S154>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX4'
 * '<S155>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX5'
 * '<S156>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX6'
 * '<S157>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX7'
 * '<S158>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX8'
 * '<S159>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosX9'
 * '<S160>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY1'
 * '<S161>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY10'
 * '<S162>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY2'
 * '<S163>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY3'
 * '<S164>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY4'
 * '<S165>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY5'
 * '<S166>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY6'
 * '<S167>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY7'
 * '<S168>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY8'
 * '<S169>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstaclePosY9'
 * '<S170>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus1'
 * '<S171>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus10'
 * '<S172>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus2'
 * '<S173>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus3'
 * '<S174>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus4'
 * '<S175>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus5'
 * '<S176>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus6'
 * '<S177>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus7'
 * '<S178>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus8'
 * '<S179>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatus9'
 * '<S180>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatusA_Close_Car'
 * '<S181>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatusA_LeftCloseRangeCutIn'
 * '<S182>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatusA_RightCloseRangeCutIn'
 * '<S183>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatusB_frameIndex'
 * '<S184>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleStatusB_timeStamp'
 * '<S185>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType1'
 * '<S186>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType10'
 * '<S187>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType2'
 * '<S188>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType3'
 * '<S189>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType4'
 * '<S190>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType5'
 * '<S191>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType6'
 * '<S192>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType7'
 * '<S193>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType8'
 * '<S194>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleType9'
 * '<S195>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX1'
 * '<S196>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX10'
 * '<S197>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX2'
 * '<S198>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX3'
 * '<S199>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX4'
 * '<S200>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX5'
 * '<S201>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX6'
 * '<S202>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX7'
 * '<S203>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX8'
 * '<S204>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelX9'
 * '<S205>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY1'
 * '<S206>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY10'
 * '<S207>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY2'
 * '<S208>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY3'
 * '<S209>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY4'
 * '<S210>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY5'
 * '<S211>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY6'
 * '<S212>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY7'
 * '<S213>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY8'
 * '<S214>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleVelY9'
 * '<S215>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth1'
 * '<S216>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth10'
 * '<S217>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth2'
 * '<S218>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth3'
 * '<S219>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth4'
 * '<S220>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth5'
 * '<S221>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth6'
 * '<S222>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth7'
 * '<S223>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth8'
 * '<S224>' : 'EPM_Ln_ObjGenFcn/Data_Cov_ObstacleWidth9'
 * '<S225>' : 'EPM_Ln_ObjGenFcn/Data_Cov_Quality'
 * '<S226>' : 'EPM_Ln_ObjGenFcn/Data_Cov_Quality1'
 * '<S227>' : 'EPM_Ln_ObjGenFcn/Data_Cov_Quality2'
 * '<S228>' : 'EPM_Ln_ObjGenFcn/Data_Cov_Quality3'
 * '<S229>' : 'EPM_Ln_ObjGenFcn/Data_Cov_RightCloseRangeCutIn'
 * '<S230>' : 'EPM_Ln_ObjGenFcn/Data_Cov_TLC'
 * '<S231>' : 'EPM_Ln_ObjGenFcn/Data_Cov_TLC1'
 * '<S232>' : 'EPM_Ln_ObjGenFcn/Data_Cov_View_Range_End'
 * '<S233>' : 'EPM_Ln_ObjGenFcn/Data_Cov_View_Range_End1'
 * '<S234>' : 'EPM_Ln_ObjGenFcn/Data_Cov_View_Range_End2'
 * '<S235>' : 'EPM_Ln_ObjGenFcn/Data_Cov_View_Range_End3'
 * '<S236>' : 'EPM_Ln_ObjGenFcn/Data_Cov_View_Range_Start'
 * '<S237>' : 'EPM_Ln_ObjGenFcn/Data_Cov_View_Range_Start1'
 * '<S238>' : 'EPM_Ln_ObjGenFcn/Data_Cov_Width_marking'
 * '<S239>' : 'EPM_Ln_ObjGenFcn/Data_Cov_Width_marking1'
 * '<S240>' : 'EPM_Ln_ObjGenFcn/Data_Cov_Width_marking2'
 * '<S241>' : 'EPM_Ln_ObjGenFcn/Data_Cov_Width_marking3'
 * '<S242>' : 'EPM_Ln_ObjGenFcn/FVision_Object_1'
 * '<S243>' : 'EPM_Ln_ObjGenFcn/FVision_Object_10'
 * '<S244>' : 'EPM_Ln_ObjGenFcn/FVision_Object_2'
 * '<S245>' : 'EPM_Ln_ObjGenFcn/FVision_Object_3'
 * '<S246>' : 'EPM_Ln_ObjGenFcn/FVision_Object_4'
 * '<S247>' : 'EPM_Ln_ObjGenFcn/FVision_Object_5'
 * '<S248>' : 'EPM_Ln_ObjGenFcn/FVision_Object_6'
 * '<S249>' : 'EPM_Ln_ObjGenFcn/FVision_Object_7'
 * '<S250>' : 'EPM_Ln_ObjGenFcn/FVision_Object_8'
 * '<S251>' : 'EPM_Ln_ObjGenFcn/FVision_Object_9'
 * '<S252>' : 'EPM_Ln_ObjGenFcn/ObstacleStatus'
 * '<S253>' : 'EPM_Ln_ObjGenFcn/Subsystem1'
 * '<S254>' : 'EPM_Ln_ObjGenFcn/Subsystem1/EyeQ_Sensor'
 * '<S255>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM'
 * '<S256>' : 'EPM_Ln_ObjGenFcn/Subsystem1/EyeQ_Sensor/Chart'
 * '<S257>' : 'EPM_Ln_ObjGenFcn/Subsystem1/EyeQ_Sensor/Chart4'
 * '<S258>' : 'EPM_Ln_ObjGenFcn/Subsystem1/EyeQ_Sensor/ObsCutInCalFromTraj'
 * '<S259>' : 'EPM_Ln_ObjGenFcn/Subsystem1/EyeQ_Sensor/ObsMCalFromPath'
 * '<S260>' : 'EPM_Ln_ObjGenFcn/Subsystem1/EyeQ_Sensor/ObsMCalFromTraj'
 * '<S261>' : 'EPM_Ln_ObjGenFcn/Subsystem1/EyeQ_Sensor/ObsMCalMergeTLC'
 * '<S262>' : 'EPM_Ln_ObjGenFcn/Subsystem1/EyeQ_Sensor/Subsystem'
 * '<S263>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_C0_PosRght[m]'
 * '<S264>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_C1_PosTLeft[rad]'
 * '<S265>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_C2_PosTRght[1//m]'
 * '<S266>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_C3_PosTRght[1//m2]'
 * '<S267>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_End1'
 * '<S268>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality1'
 * '<S269>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality10'
 * '<S270>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality11'
 * '<S271>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality2'
 * '<S272>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality3'
 * '<S273>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality4'
 * '<S274>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality5'
 * '<S275>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality6'
 * '<S276>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality7'
 * '<S277>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality8'
 * '<S278>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_Quality9'
 * '<S279>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Left_Lane_TLC1'
 * '<S280>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Right_Lane_C0_PosRght[m]'
 * '<S281>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Right_Lane_C1_PosTLeft[rad]'
 * '<S282>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Right_Lane_C2_PosTRght[1//m]'
 * '<S283>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Right_Lane_C2_PosTRght[1//m]1'
 * '<S284>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Right_Lane_End1'
 * '<S285>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Right_Lane_Quality1'
 * '<S286>' : 'EPM_Ln_ObjGenFcn/Subsystem1/LaneSignalFromEPM/SEN_LKA_Right_Lane_TLC1'
 */
#endif                                 /* RTW_HEADER_EPM_Ln_ObjGenFcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
