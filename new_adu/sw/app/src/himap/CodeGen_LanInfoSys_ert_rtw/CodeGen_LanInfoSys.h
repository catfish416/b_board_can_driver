/*
 * File: CodeGen_LanInfoSys.h
 *
 * Code generated for Simulink model 'CodeGen_LanInfoSys'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 19:27:17 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_LanInfoSys_h_
#define RTW_HEADER_CodeGen_LanInfoSys_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_LanInfoSys_COMMON_INCLUDES_
# define CodeGen_LanInfoSys_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_LanInfoSys_COMMON_INCLUDES_ */

#include "CodeGen_LanInfoSys_types.h"
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
  real_T outPointCluster_X[500];       /* '<Root>/MATLAB Function' */
  real_T outPointCluster_Y[500];       /* '<Root>/MATLAB Function' */
} B_CodeGen_LanInfoSys_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T CuraturePoint[36];            /* '<Root>/MATLAB Function' */
  boolean_T CuraturePoint_not_empty;   /* '<Root>/MATLAB Function' */
} DW_CodeGen_LanInfoSys_T;

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_LanInfoSys_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_CodeGen_LanInfoSys_T CodeGen_LanInfoSys_B;

/* Block states (auto storage) */
extern DW_CodeGen_LanInfoSys_T CodeGen_LanInfoSys_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T VehicleState[8];         /* '<Root>/MATLAB Function' */
extern real_T TrackPoint[300];         /* '<Root>/MATLAB Function' */
extern real_T EgoTrackPoint[300];      /* '<Root>/MATLAB Function' */
extern real_T Navi_InfoTurn[28];       /* '<Root>/MATLAB Function' */
extern real_T Lane_NumInfo[3];         /* '<Root>/MATLAB Function' */
extern real_T outLine_ShapeInfo[100];  /* '<Root>/MATLAB Function' */

/* Model entry point functions */
extern void CodeGen_LanInfoSys_initialize(void);
extern void CodeGen_LanInfoSys_step(void);
extern void CodeGen_LanInfoSys_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_LanInfoSys_T *const CodeGen_LanInfoSys_M;

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
 * '<Root>' : 'CodeGen_LanInfoSys'
 * '<S1>'   : 'CodeGen_LanInfoSys/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_CodeGen_LanInfoSys_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
