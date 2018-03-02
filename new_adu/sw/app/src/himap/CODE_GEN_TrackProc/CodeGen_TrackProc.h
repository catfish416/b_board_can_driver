/*
 * File: CodeGen_TrackProc.h
 *
 * Code generated for Simulink model 'CodeGen_TrackProc'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Fri Oct 20 09:25:15 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_TrackProc_h_
#define RTW_HEADER_CodeGen_TrackProc_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_TrackProc_COMMON_INCLUDES_
# define CodeGen_TrackProc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_TrackProc_COMMON_INCLUDES_ */

#include "CodeGen_TrackProc_types.h"
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
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Saturation;                   /* '<Root>/Saturation' */
  real_T UnitDelay3;                   /* '<Root>/Unit Delay3' */
  real_T Abs;                          /* '<Root>/Abs' */
  real_T DLookupTable;                 /* '<Root>/1-D Lookup Table' */
  real_T Saturation2;                  /* '<Root>/Saturation2' */
  real_T MinMax;                       /* '<Root>/MinMax' */
  real_T Product;                      /* '<S1>/Product' */
  real_T UnitDelay1;                   /* '<S1>/Unit Delay1' */
  real_T Divide;                       /* '<S4>/Divide' */
  real_T Add1;                         /* '<S4>/Add1' */
  real_T UnitDelay;                    /* '<S4>/Unit Delay' */
  real_T Divide4;                      /* '<S4>/Divide4' */
  real_T Add2;                         /* '<S4>/Add2' */
  real_T Product_c;                    /* '<Root>/Product' */
  real_T Divide_a;                     /* '<S3>/Divide' */
  real_T Add1_o;                       /* '<S3>/Add1' */
  real_T UnitDelay_e;                  /* '<S3>/Unit Delay' */
  real_T Divide4_n;                    /* '<S3>/Divide4' */
  real_T Add2_e;                       /* '<S3>/Add2' */
  real_T Product1;                     /* '<Root>/Product1' */
  real_T Divide_i;                     /* '<S5>/Divide' */
  real_T Add1_i;                       /* '<S5>/Add1' */
  real_T UnitDelay_k;                  /* '<S5>/Unit Delay' */
  real_T Divide4_l;                    /* '<S5>/Divide4' */
  real_T Add2_g;                       /* '<S5>/Add2' */
  real_T Product2;                     /* '<Root>/Product2' */
  real_T Divide_e;                     /* '<S2>/Divide' */
  real_T Add1_m;                       /* '<S2>/Add1' */
  real_T UnitDelay_ea;                 /* '<S2>/Unit Delay' */
  real_T Divide4_e;                    /* '<S2>/Divide4' */
  real_T Add2_b;                       /* '<S2>/Add2' */
  real_T Add;                          /* '<Root>/Add' */
  real_T Divide1;                      /* '<Root>/Divide1' */
  real_T Product3;                     /* '<Root>/Product3' */
  real_T Product4;                     /* '<Root>/Product4' */
  real_T Product5;                     /* '<Root>/Product5' */
  real_T R;                            /* '<Root>/Tracking2' */
  real_T CurrentAngle;                 /* '<Root>/Tracking2' */
  real_T DirectionAngle;               /* '<Root>/Tracking2' */
  real_T PointNum;                     /* '<Root>/Tracking2' */
  real_T StartNum;                     /* '<Root>/Tracking2' */
  real_T Xpoint;                       /* '<Root>/Tracking2' */
  real_T Ypoint;                       /* '<Root>/Tracking2' */
  real_T LateralError;                 /* '<Root>/Tracking2' */
  real_T S[100];                       /* '<Root>/Tracking2' */
  real_T Y[20];                        /* '<Root>/Tracking2' */
  real_T X[20];                        /* '<Root>/Tracking2' */
  real_T Ypos[100];                    /* '<Root>/Tracking2' */
  real_T Xpos[100];                    /* '<Root>/Tracking2' */
  real_T Offset[100];                  /* '<Root>/Tracking2' */
  real_T CurvFlag;                     /* '<Root>/Tracking2' */
  real_T V_max;                        /* '<Root>/Tracking2' */
  real_T Curv_a;                       /* '<Root>/Tracking2' */
  real_T End_a;                        /* '<Root>/Tracking2' */
  real_T Final_a_d;                    /* '<Root>/Tracking2' */
  real_T PreviewDistance_f;            /* '<Root>/Tracking2' */
  real_T LateralDistance;              /* '<Root>/Tracking2' */
  real_T DataOutput;                   /* '<S1>/Chart2' */
} B_CodeGen_TrackProc_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay3_DSTATE;            /* '<Root>/Unit Delay3' */
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S4>/Unit Delay' */
  real_T UnitDelay_DSTATE_o;           /* '<S3>/Unit Delay' */
  real_T UnitDelay_DSTATE_a;           /* '<S5>/Unit Delay' */
  real_T UnitDelay_DSTATE_h;           /* '<S2>/Unit Delay' */
} DW_CodeGen_TrackProc_T;

/* Parameters (auto storage) */
struct P_CodeGen_TrackProc_T_ {
  real_T TSample;                      /* Variable: TSample
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain_Gain;                    /* Expression: 1.2/3.6
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 30
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 7
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay3'
                                        */
  real_T DLookupTable_tableData[3];    /* Expression: [3 6 9]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T DLookupTable_bp01Data[3];     /* Expression: [0 1 2]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 25
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 7
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Constant_Value_b;             /* Expression: 10
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay1'
                                        */
  real_T Ay_limit_Value;               /* Expression: 0.8
                                        * Referenced by: '<Root>/Ay_limit'
                                        */
  real_T P_dis_Value;                  /* Expression: 5
                                        * Referenced by: '<Root>/P_dis'
                                        */
  real_T P_SumDis_Value;               /* Expression: 50
                                        * Referenced by: '<Root>/P_SumDis'
                                        */
  real_T FIilter_Value;                /* Expression: 0.1
                                        * Referenced by: '<S4>/FIilter'
                                        */
  real_T Constant_Value_b3;            /* Expression: 1
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay'
                                        */
  real_T FIilter_Value_b;              /* Expression: 0.1
                                        * Referenced by: '<S3>/FIilter'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T UnitDelay_InitialCondition_e; /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  real_T FIilter_Value_k;              /* Expression: 0.1
                                        * Referenced by: '<S5>/FIilter'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  real_T FIilter_Value_o;              /* Expression: 0.1
                                        * Referenced by: '<S2>/FIilter'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T UnitDelay_InitialCondition_g; /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  real_T error_Value;                  /* Expression: 0
                                        * Referenced by: '<Root>/error'
                                        */
  real_T error1_Value;                 /* Expression: 1
                                        * Referenced by: '<Root>/error1'
                                        */
  real_T Constant1_Value;              /* Expression: 0.01
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_TrackProc_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_CodeGen_TrackProc_T CodeGen_TrackProc_P;

/* Block signals (auto storage) */
extern B_CodeGen_TrackProc_T CodeGen_TrackProc_B;

/* Block states (auto storage) */
extern DW_CodeGen_TrackProc_T CodeGen_TrackProc_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern int32_T PreviewDistance;        /* '<Root>/Data Type Conversion1' */
extern int32_T PreviewLateralDistance; /* '<Root>/Data Type Conversion2' */
extern int32_T VehicleOffset_Now;      /* '<Root>/Data Type Conversion5' */
extern int16_T TrackerLateralError;    /* '<Root>/Data Type Conversion3' */
extern int8_T Final_a;                 /* '<Root>/Data Type Conversion' */
extern uint8_T End_Flag;               /* '<Root>/Data Type Conversion4' */

/* Model entry point functions */
extern void CodeGen_TrackProc_initialize(void);
extern void CodeGen_TrackProc_step(void);
extern void CodeGen_TrackProc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_TrackProc_T *const CodeGen_TrackProc_M;

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
 * '<Root>' : 'CodeGen_TrackProc'
 * '<S1>'   : 'CodeGen_TrackProc/DataChangeSpeedLimit'
 * '<S2>'   : 'CodeGen_TrackProc/Filter'
 * '<S3>'   : 'CodeGen_TrackProc/Filter1'
 * '<S4>'   : 'CodeGen_TrackProc/Filter2'
 * '<S5>'   : 'CodeGen_TrackProc/Filter3'
 * '<S6>'   : 'CodeGen_TrackProc/Tracking2'
 * '<S7>'   : 'CodeGen_TrackProc/DataChangeSpeedLimit/Chart2'
 */
#endif                                 /* RTW_HEADER_CodeGen_TrackProc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
