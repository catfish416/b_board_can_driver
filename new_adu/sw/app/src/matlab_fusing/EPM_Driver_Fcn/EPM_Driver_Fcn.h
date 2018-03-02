/*
 * File: EPM_Driver_Fcn.h
 *
 * Code generated for Simulink model 'EPM_Driver_Fcn'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Mon May 08 17:26:27 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EPM_Driver_Fcn_h_
#define RTW_HEADER_EPM_Driver_Fcn_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef EPM_Driver_Fcn_COMMON_INCLUDES_
# define EPM_Driver_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EPM_Driver_Fcn_COMMON_INCLUDES_ */

#include "EPM_Driver_Fcn_types.h"
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
  real_T DataTypeConversion;           /* '<S11>/Data Type Conversion' */
  real_T NE;                           /* '<S11>/N->E' */
  real_T degrad;                       /* '<S11>/deg->rad' */
  real_T StrWhAng_c;                   /* '<S14>/Gain1' */
  real_T Saturation;                   /* '<S7>/Saturation' */
  real_T EN;                           /* '<S7>/E->N' */
  real_T DataTypeConversion_a;         /* '<S13>/Data Type Conversion' */
  real_T NE_d;                         /* '<S13>/N->E' */
  real_T degpsradps;                   /* '<S13>/degps->radps' */
  real_T YawRate;                      /* '<S14>/Gain2' */
  real_T Saturation_e;                 /* '<S10>/Saturation' */
  real_T EN_m;                         /* '<S10>/E->N' */
  real_T DataTypeConversion_e;         /* '<S12>/Data Type Conversion' */
  real_T Nkph;                         /* '<S12>/N->kph' */
  real_T kphmps;                       /* '<S12>/kph->mps' */
  real_T VehSpdAveDrvn;                /* '<S14>/Gain3' */
  real_T Saturation_g;                 /* '<S8>/Saturation' */
  real_T EN_mg;                        /* '<S8>/E->N' */
  int16_T EN_g;                        /* '<S2>/E->N' */
  int16_T EN_p;                        /* '<S4>/E->N' */
  int16_T EN_h;                        /* '<S6>/E->N' */
  int16_T EN_o;                        /* '<S9>/E->N' */
  int16_T EN_on;                       /* '<S3>/E->N' */
  int16_T EN_a;                        /* '<S5>/E->N' */
  int8_T Saturation_k;                 /* '<S2>/Saturation' */
  int8_T Saturation_c;                 /* '<S4>/Saturation' */
  int8_T Saturation_f;                 /* '<S6>/Saturation' */
  int8_T Saturation_h;                 /* '<S9>/Saturation' */
  int8_T Saturation_p;                 /* '<S3>/Saturation' */
  int8_T Saturation_gl;                /* '<S5>/Saturation' */
} B_EPM_Driver_Fcn_T;

/* Parameters (auto storage) */
struct P_EPM_Driver_Fcn_T_ {
  real_T NE_Gain;                      /* Expression: 0.0625
                                        * Referenced by: '<S11>/N->E'
                                        */
  real_T degrad_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S11>/deg->rad'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1*180/pi
                                        * Referenced by: '<S14>/Gain1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 655.34
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -655.36
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T EN_Gain;                      /* Expression: 1/0.02
                                        * Referenced by: '<S7>/E->N'
                                        */
  real_T NE_Gain_i;                    /* Expression: 0.0625
                                        * Referenced by: '<S13>/N->E'
                                        */
  real_T degpsradps_Gain;              /* Expression: pi/180
                                        * Referenced by: '<S13>/degps->radps'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1*180/pi
                                        * Referenced by: '<S14>/Gain2'
                                        */
  real_T Saturation_UpperSat_a;        /* Expression: 165
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: -165
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T EN_Gain_a;                    /* Expression: 1/0.01
                                        * Referenced by: '<S10>/E->N'
                                        */
  real_T Nkph_Gain;                    /* Expression: 0.015625
                                        * Referenced by: '<S12>/N->kph'
                                        */
  real_T kphmps_Gain;                  /* Expression: 1/3.6
                                        * Referenced by: '<S12>/kph->mps'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S14>/Gain3'
                                        */
  real_T Saturation_UpperSat_ap;       /* Expression: 100
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T EN_Gain_c;                    /* Expression: 1/0.01
                                        * Referenced by: '<S8>/E->N'
                                        */
  int8_T Default_Value;                /* Computed Parameter: Default_Value
                                        * Referenced by: '<S1>/Default'
                                        */
  int8_T Saturation_UpperSat_an;       /* Computed Parameter: Saturation_UpperSat_an
                                        * Referenced by: '<S2>/Saturation'
                                        */
  int8_T Saturation_LowerSat_m;        /* Computed Parameter: Saturation_LowerSat_m
                                        * Referenced by: '<S2>/Saturation'
                                        */
  int8_T Default1_Value;               /* Computed Parameter: Default1_Value
                                        * Referenced by: '<S1>/Default1'
                                        */
  int8_T Saturation_UpperSat_i;        /* Computed Parameter: Saturation_UpperSat_i
                                        * Referenced by: '<S4>/Saturation'
                                        */
  int8_T Saturation_LowerSat_n;        /* Computed Parameter: Saturation_LowerSat_n
                                        * Referenced by: '<S4>/Saturation'
                                        */
  int8_T Default2_Value;               /* Computed Parameter: Default2_Value
                                        * Referenced by: '<S1>/Default2'
                                        */
  int8_T Saturation_UpperSat_h;        /* Computed Parameter: Saturation_UpperSat_h
                                        * Referenced by: '<S6>/Saturation'
                                        */
  int8_T Saturation_LowerSat_a;        /* Computed Parameter: Saturation_LowerSat_a
                                        * Referenced by: '<S6>/Saturation'
                                        */
  int8_T Default3_Value;               /* Computed Parameter: Default3_Value
                                        * Referenced by: '<S1>/Default3'
                                        */
  int8_T Saturation_UpperSat_b;        /* Computed Parameter: Saturation_UpperSat_b
                                        * Referenced by: '<S9>/Saturation'
                                        */
  int8_T Saturation_LowerSat_p;        /* Computed Parameter: Saturation_LowerSat_p
                                        * Referenced by: '<S9>/Saturation'
                                        */
  int8_T Default4_Value;               /* Computed Parameter: Default4_Value
                                        * Referenced by: '<S1>/Default4'
                                        */
  int8_T Saturation_UpperSat_d;        /* Computed Parameter: Saturation_UpperSat_d
                                        * Referenced by: '<S3>/Saturation'
                                        */
  int8_T Saturation_LowerSat_f;        /* Computed Parameter: Saturation_LowerSat_f
                                        * Referenced by: '<S3>/Saturation'
                                        */
  int8_T Default5_Value;               /* Computed Parameter: Default5_Value
                                        * Referenced by: '<S1>/Default5'
                                        */
  int8_T Saturation_UpperSat_e;        /* Computed Parameter: Saturation_UpperSat_e
                                        * Referenced by: '<S5>/Saturation'
                                        */
  int8_T Saturation_LowerSat_ho;       /* Computed Parameter: Saturation_LowerSat_ho
                                        * Referenced by: '<S5>/Saturation'
                                        */
  int8_T EN_Gain_b;                    /* Computed Parameter: EN_Gain_b
                                        * Referenced by: '<S2>/E->N'
                                        */
  int8_T EN_Gain_i;                    /* Computed Parameter: EN_Gain_i
                                        * Referenced by: '<S4>/E->N'
                                        */
  int8_T EN_Gain_l;                    /* Computed Parameter: EN_Gain_l
                                        * Referenced by: '<S6>/E->N'
                                        */
  int8_T EN_Gain_m;                    /* Computed Parameter: EN_Gain_m
                                        * Referenced by: '<S9>/E->N'
                                        */
  int8_T EN_Gain_g;                    /* Computed Parameter: EN_Gain_g
                                        * Referenced by: '<S3>/E->N'
                                        */
  int8_T EN_Gain_d;                    /* Computed Parameter: EN_Gain_d
                                        * Referenced by: '<S5>/E->N'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_EPM_Driver_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_EPM_Driver_Fcn_T EPM_Driver_Fcn_P;

/* Block signals (auto storage) */
extern B_EPM_Driver_Fcn_T EPM_Driver_Fcn_B;

/* Model entry point functions */
extern void EPM_Driver_Fcn_initialize(void);
extern void EPM_Driver_Fcn_step(void);
extern void EPM_Driver_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EPM_Driver_Fcn_T *const EPM_Driver_Fcn_M;

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
 * '<Root>' : 'EPM_Driver_Fcn'
 * '<S1>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn'
 * '<S2>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_Brake'
 * '<S3>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_HighBeam'
 * '<S4>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_LeftBlink'
 * '<S5>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_Reverse_gear'
 * '<S6>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_RightBlink'
 * '<S7>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_StrWhlAng'
 * '<S8>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_VehSpd'
 * '<S9>'   : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_Wiper'
 * '<S10>'  : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_550_YawRate'
 * '<S11>'  : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_SrtWhlAng'
 * '<S12>'  : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_VehSpd'
 * '<S13>'  : 'EPM_Driver_Fcn/EPM_Driver_Fcn/Data_Cov_YawRate'
 * '<S14>'  : 'EPM_Driver_Fcn/EPM_Driver_Fcn/EPM_Driver'
 */
#endif                                 /* RTW_HEADER_EPM_Driver_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
