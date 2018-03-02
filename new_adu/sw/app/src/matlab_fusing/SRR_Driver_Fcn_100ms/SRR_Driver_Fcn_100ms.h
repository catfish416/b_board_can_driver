/*
 * File: SRR_Driver_Fcn_100ms.h
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

#ifndef RTW_HEADER_SRR_Driver_Fcn_100ms_h_
#define RTW_HEADER_SRR_Driver_Fcn_100ms_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef SRR_Driver_Fcn_100ms_COMMON_INCLUDES_
# define SRR_Driver_Fcn_100ms_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SRR_Driver_Fcn_100ms_COMMON_INCLUDES_ */

#include "SRR_Driver_Fcn_100ms_types.h"
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
  real_T DataTypeConversion;           /* '<S18>/Data Type Conversion' */
  real_T NE;                           /* '<S18>/N->E' */
  real_T Saturation;                   /* '<S23>/Saturation' */
  real_T EN;                           /* '<S23>/E->N' */
  real_T Saturation_l;                 /* '<S21>/Saturation' */
  real_T EN_i;                         /* '<S21>/E->N' */
  real_T Saturation_m;                 /* '<S19>/Saturation' */
  real_T EN_c;                         /* '<S19>/E->N' */
  real_T Saturation_b;                 /* '<S20>/Saturation' */
  real_T EN_n;                         /* '<S20>/E->N' */
  real_T Saturation_f;                 /* '<S22>/Saturation' */
  real_T EN_m;                         /* '<S22>/E->N' */
  real_T Saturation_k;                 /* '<S17>/Saturation' */
  real_T EN_no;                        /* '<S17>/E->N' */
  real_T Saturation_h;                 /* '<S16>/Saturation' */
  real_T EN_f;                         /* '<S16>/E->N' */
  real_T Saturation_kc;                /* '<S15>/Saturation' */
  real_T EN_h;                         /* '<S15>/E->N' */
  real_T Saturation_p;                 /* '<S14>/Saturation' */
  real_T EN_a;                         /* '<S14>/E->N' */
  real_T Saturation_n;                 /* '<S13>/Saturation' */
  real_T EN_cw;                        /* '<S13>/E->N' */
  real_T Saturation_i;                 /* '<S12>/Saturation' */
  real_T EN_am;                        /* '<S12>/E->N' */
  real_T Saturation_mu;                /* '<S9>/Saturation' */
  real_T EN_h0;                        /* '<S9>/E->N' */
  real_T Saturation_o;                 /* '<S10>/Saturation' */
  real_T EN_c4;                        /* '<S10>/E->N' */
  real_T Saturation_ik;                /* '<S11>/Saturation' */
  real_T EN_in;                        /* '<S11>/E->N' */
  real_T Saturation_mh;                /* '<S4>/Saturation' */
  real_T EN_cq;                        /* '<S4>/E->N' */
  real_T Saturation_mw;                /* '<S7>/Saturation' */
  real_T EN_mv;                        /* '<S7>/E->N' */
  real_T Saturation_o4;                /* '<S6>/Saturation' */
  real_T EN_b;                         /* '<S6>/E->N' */
  real_T Saturation_hb;                /* '<S8>/Saturation' */
  real_T EN_d;                         /* '<S8>/E->N' */
  real_T Saturation_g;                 /* '<S5>/Saturation' */
  real_T EN_o;                         /* '<S5>/E->N' */
  real_T Saturation_im;                /* '<S3>/Saturation' */
  real_T EN_ck;                        /* '<S3>/E->N' */
  real_T WSWshSwAtv;                   /* '<Root>/310' */
  real_T TrStLgMdAtv;                  /* '<Root>/310' */
  real_T SysPwrMdV;                    /* '<Root>/310' */
  real_T SysPwrMd_e;                   /* '<Root>/310' */
  real_T WSWprAct;                     /* '<Root>/310' */
  real_T RtLwBmFld;                    /* '<Root>/310' */
  real_T OtsAmbtLtLvStatV;             /* '<Root>/310' */
  real_T OtsdAmbtLtLvlStat;            /* '<Root>/310' */
  real_T LowBmAct;                     /* '<Root>/310' */
  real_T LftLwBmFld;                   /* '<Root>/310' */
  real_T HighBmAct;                    /* '<Root>/310' */
  real_T DrvrHndsOnWhlZn1;             /* '<Root>/310' */
  real_T DrvrHndsOnWhlZn2;             /* '<Root>/310' */
  real_T DrvrHndsOnWhlZn3;             /* '<Root>/310' */
  real_T ClockV;                       /* '<Root>/0A1' */
  real_T LRRMod;                       /* '<Root>/0A1' */
  real_T FrontCameraMod;               /* '<Root>/0A1' */
  real_T SRRMod;                       /* '<Root>/0A1' */
  real_T MasterClock;                  /* '<Root>/0A1' */
  real_T Checksum;                     /* '<Root>/0A1' */
} B_SRR_Driver_Fcn_100ms_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T step;                         /* '<Root>/0A1' */
  real_T flag;                         /* '<Root>/0A1' */
  real_T cnt;                          /* '<Root>/0A1' */
} DW_SRR_Driver_Fcn_100ms_T;

/* Parameters (auto storage) */
struct P_SRR_Driver_Fcn_100ms_T_ {
  real_T NE_Gain;                      /* Expression: 1
                                        * Referenced by: '<S18>/N->E'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S23>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S23>/Saturation'
                                        */
  real_T EN_Gain;                      /* Expression: 1/1
                                        * Referenced by: '<S23>/E->N'
                                        */
  real_T Saturation_UpperSat_a;        /* Expression: 1
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T EN_Gain_n;                    /* Expression: 1/1
                                        * Referenced by: '<S21>/E->N'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 1
                                        * Referenced by: '<S19>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0
                                        * Referenced by: '<S19>/Saturation'
                                        */
  real_T EN_Gain_b;                    /* Expression: 1/1
                                        * Referenced by: '<S19>/E->N'
                                        */
  real_T Saturation_UpperSat_b;        /* Expression: 3
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: 0
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T EN_Gain_l;                    /* Expression: 1/1
                                        * Referenced by: '<S20>/E->N'
                                        */
  real_T Saturation_UpperSat_il;       /* Expression: 1
                                        * Referenced by: '<S22>/Saturation'
                                        */
  real_T Saturation_LowerSat_kg;       /* Expression: 0
                                        * Referenced by: '<S22>/Saturation'
                                        */
  real_T EN_Gain_a;                    /* Expression: 1/1
                                        * Referenced by: '<S22>/E->N'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 1
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real_T Saturation_LowerSat_ie;       /* Expression: 0
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real_T EN_Gain_an;                   /* Expression: 1/1
                                        * Referenced by: '<S17>/E->N'
                                        */
  real_T Saturation_UpperSat_pu;       /* Expression: 1
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0
                                        * Referenced by: '<S16>/Saturation'
                                        */
  real_T EN_Gain_j;                    /* Expression: 1/1
                                        * Referenced by: '<S16>/E->N'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: 3
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T Saturation_LowerSat_pj;       /* Expression: 0
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T EN_Gain_n4;                   /* Expression: 1/1
                                        * Referenced by: '<S15>/E->N'
                                        */
  real_T Saturation_UpperSat_l4;       /* Expression: 1
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 0
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T EN_Gain_bs;                   /* Expression: 1/1
                                        * Referenced by: '<S14>/E->N'
                                        */
  real_T Saturation_UpperSat_af;       /* Expression: 1
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: 0
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T EN_Gain_m;                    /* Expression: 1/1
                                        * Referenced by: '<S13>/E->N'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 1
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T Saturation_LowerSat_dn;       /* Expression: 0
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T EN_Gain_nn;                   /* Expression: 1/1
                                        * Referenced by: '<S12>/E->N'
                                        */
  real_T Saturation_UpperSat_b2;       /* Expression: 1
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: 0
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T EN_Gain_f;                    /* Expression: 1/1
                                        * Referenced by: '<S9>/E->N'
                                        */
  real_T Saturation_UpperSat_hq;       /* Expression: 1
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: 0
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T EN_Gain_i;                    /* Expression: 1/1
                                        * Referenced by: '<S10>/E->N'
                                        */
  real_T Saturation_UpperSat_d;        /* Expression: 1
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real_T Saturation_LowerSat_ls;       /* Expression: 0
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real_T EN_Gain_o;                    /* Expression: 1/1
                                        * Referenced by: '<S11>/E->N'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 1
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 0
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T EN_Gain_mo;                   /* Expression: 1/1
                                        * Referenced by: '<S4>/E->N'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 7
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: 0
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T EN_Gain_a2;                   /* Expression: 1/1
                                        * Referenced by: '<S7>/E->N'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: 7
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat_n;        /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T EN_Gain_jq;                   /* Expression: 1/1
                                        * Referenced by: '<S6>/E->N'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 7
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T EN_Gain_d;                    /* Expression: 1/1
                                        * Referenced by: '<S8>/E->N'
                                        */
  real_T Saturation_UpperSat_do;       /* Expression: 4294967295
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_k2;       /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T EN_Gain_e;                    /* Expression: 1/1
                                        * Referenced by: '<S5>/E->N'
                                        */
  real_T Saturation_UpperSat_aq;       /* Expression: 4095
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Saturation_LowerSat_n4;       /* Expression: 0
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T EN_Gain_a5;                   /* Expression: 1/1
                                        * Referenced by: '<S3>/E->N'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SRR_Driver_Fcn_100ms_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_SRR_Driver_Fcn_100ms_T SRR_Driver_Fcn_100ms_P;

/* Block signals (auto storage) */
extern B_SRR_Driver_Fcn_100ms_T SRR_Driver_Fcn_100ms_B;

/* Block states (auto storage) */
extern DW_SRR_Driver_Fcn_100ms_T SRR_Driver_Fcn_100ms_DW;

/* Model entry point functions */
extern void SRR_Driver_Fcn_100ms_initialize(void);
extern void SRR_Driver_Fcn_100ms_step(void);
extern void SRR_Driver_Fcn_100ms_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SRR_Driver_Fcn_100ms_T *const SRR_Driver_Fcn_100ms_M;

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
 * '<Root>' : 'SRR_Driver_Fcn_100ms'
 * '<S1>'   : 'SRR_Driver_Fcn_100ms/0A1'
 * '<S2>'   : 'SRR_Driver_Fcn_100ms/310'
 * '<S3>'   : 'SRR_Driver_Fcn_100ms/Data_Cov_0a1_Checksum'
 * '<S4>'   : 'SRR_Driver_Fcn_100ms/Data_Cov_0a1_ClockV'
 * '<S5>'   : 'SRR_Driver_Fcn_100ms/Data_Cov_0a1_MasterClock'
 * '<S6>'   : 'SRR_Driver_Fcn_100ms/Data_Cov_0a1_SensorModeCmdFCamera'
 * '<S7>'   : 'SRR_Driver_Fcn_100ms/Data_Cov_0a1_SensorModeCmdLRR'
 * '<S8>'   : 'SRR_Driver_Fcn_100ms/Data_Cov_0a1_SensorModeCmdSRR'
 * '<S9>'   : 'SRR_Driver_Fcn_100ms/Data_Cov_DrvrHndsOnWhlZn1'
 * '<S10>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_DrvrHndsOnWhlZn2'
 * '<S11>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_DrvrHndsOnWhlZn3'
 * '<S12>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_HighBmAct'
 * '<S13>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_LftLwBmFld'
 * '<S14>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_LowBmAct'
 * '<S15>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_OtsdAmbtLtLvlStat'
 * '<S16>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_OtsdAmbtLtLvlStatV'
 * '<S17>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_RtLwBmFld'
 * '<S18>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_SysPwrMd'
 * '<S19>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_SysPwrMdV'
 * '<S20>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_SysPwrMdV1'
 * '<S21>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_TrStLgMdAtv'
 * '<S22>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_WSWprAct'
 * '<S23>'  : 'SRR_Driver_Fcn_100ms/Data_Cov_WSWshSwAtv_310'
 */
#endif                                 /* RTW_HEADER_SRR_Driver_Fcn_100ms_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
