/*
 * File: EPM_Driver_Fcn_data.c
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

#include "EPM_Driver_Fcn.h"
#include "EPM_Driver_Fcn_private.h"

/* Block parameters (auto storage) */
P_EPM_Driver_Fcn_T EPM_Driver_Fcn_P = {
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S11>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S11>/deg->rad'
                                        */
  -57.295779513082323,                 /* Expression: -1*180/pi
                                        * Referenced by: '<S14>/Gain1'
                                        */
  655.34,                              /* Expression: 655.34
                                        * Referenced by: '<S7>/Saturation'
                                        */
  -655.36,                             /* Expression: -655.36
                                        * Referenced by: '<S7>/Saturation'
                                        */
  50.0,                                /* Expression: 1/0.02
                                        * Referenced by: '<S7>/E->N'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S13>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S13>/degps->radps'
                                        */
  -57.295779513082323,                 /* Expression: -1*180/pi
                                        * Referenced by: '<S14>/Gain2'
                                        */
  165.0,                               /* Expression: 165
                                        * Referenced by: '<S10>/Saturation'
                                        */
  -165.0,                              /* Expression: -165
                                        * Referenced by: '<S10>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S10>/E->N'
                                        */
  0.015625,                            /* Expression: 0.015625
                                        * Referenced by: '<S12>/N->kph'
                                        */
  0.27777777777777779,                 /* Expression: 1/3.6
                                        * Referenced by: '<S12>/kph->mps'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S14>/Gain3'
                                        */
  100.0,                               /* Expression: 100
                                        * Referenced by: '<S8>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S8>/E->N'
                                        */
  0,                                   /* Computed Parameter: Default_Value
                                        * Referenced by: '<S1>/Default'
                                        */
  1,                                   /* Computed Parameter: Saturation_UpperSat_an
                                        * Referenced by: '<S2>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Saturation_LowerSat_m
                                        * Referenced by: '<S2>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Default1_Value
                                        * Referenced by: '<S1>/Default1'
                                        */
  1,                                   /* Computed Parameter: Saturation_UpperSat_i
                                        * Referenced by: '<S4>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Saturation_LowerSat_n
                                        * Referenced by: '<S4>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Default2_Value
                                        * Referenced by: '<S1>/Default2'
                                        */
  1,                                   /* Computed Parameter: Saturation_UpperSat_h
                                        * Referenced by: '<S6>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Saturation_LowerSat_a
                                        * Referenced by: '<S6>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Default3_Value
                                        * Referenced by: '<S1>/Default3'
                                        */
  1,                                   /* Computed Parameter: Saturation_UpperSat_b
                                        * Referenced by: '<S9>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Saturation_LowerSat_p
                                        * Referenced by: '<S9>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Default4_Value
                                        * Referenced by: '<S1>/Default4'
                                        */
  1,                                   /* Computed Parameter: Saturation_UpperSat_d
                                        * Referenced by: '<S3>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Saturation_LowerSat_f
                                        * Referenced by: '<S3>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Default5_Value
                                        * Referenced by: '<S1>/Default5'
                                        */
  1,                                   /* Computed Parameter: Saturation_UpperSat_e
                                        * Referenced by: '<S5>/Saturation'
                                        */
  0,                                   /* Computed Parameter: Saturation_LowerSat_ho
                                        * Referenced by: '<S5>/Saturation'
                                        */
  64,                                  /* Computed Parameter: EN_Gain_b
                                        * Referenced by: '<S2>/E->N'
                                        */
  64,                                  /* Computed Parameter: EN_Gain_i
                                        * Referenced by: '<S4>/E->N'
                                        */
  64,                                  /* Computed Parameter: EN_Gain_l
                                        * Referenced by: '<S6>/E->N'
                                        */
  64,                                  /* Computed Parameter: EN_Gain_m
                                        * Referenced by: '<S9>/E->N'
                                        */
  64,                                  /* Computed Parameter: EN_Gain_g
                                        * Referenced by: '<S3>/E->N'
                                        */
  64                                   /* Computed Parameter: EN_Gain_d
                                        * Referenced by: '<S5>/E->N'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
