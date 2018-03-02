/*
 * File: CodeGen_SegmentMessage.c
 *
 * Code generated for Simulink model 'CodeGen_SegmentMessage'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 18:00:26 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_SegmentMessage.h"
#include "CodeGen_SegmentMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T ValidSegmentIndex;              /* '<Root>/MATLAB Function' */
real_T SegmentMap[400];                /* '<Root>/MATLAB Function' */

/* Block states (auto storage) */
DW_CodeGen_SegmentMessage_T CodeGen_SegmentMessage_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_CodeGen_SegmentMessage_T CodeGen_SegmentMessage_U;

/* Real-time model */
RT_MODEL_CodeGen_SegmentMessa_T CodeGen_SegmentMessage_M_;
RT_MODEL_CodeGen_SegmentMessa_T *const CodeGen_SegmentMessage_M =
  &CodeGen_SegmentMessage_M_;

/* Model step function */
void CodeGen_SegmentMessage_step(void)
{
  real_T u0;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/ClearAllFlag'
   *  Inport: '<Root>/ClearAllFlag1'
   *  Inport: '<Root>/ClearAllFlag2'
   *  Inport: '<Root>/ClearAllFlag3'
   *  Inport: '<Root>/ClearAllFlag4'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /*  Segment Map Profile */
  /* |1.AbsoluteSegmentOffset|2.SegmentNumberOfLanes| */
  /*  Max offset distance. 65535 centimeters. 6553.5 meter. */
  /*  use this thresh to judge if there is position offset is exceed over than 6553.5 meters. */
  /* init the persistent variable  */
  if ((!CodeGen_SegmentMessage_DW.gPreSegmentTimeCnt_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:25' */
    /* '<S1>:1:26' */
    CodeGen_SegmentMessage_DW.gPreSegmentTimeCnt = 0.0;
    CodeGen_SegmentMessage_DW.gPreSegmentTimeCnt_not_empty = true;
  }

  if ((!CodeGen_SegmentMessage_DW.gPreSegmentOffset_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:29' */
    /* '<S1>:1:30' */
    CodeGen_SegmentMessage_DW.gPreSegmentOffset = 0.0;
    CodeGen_SegmentMessage_DW.gPreSegmentOffset_not_empty = true;
  }

  if ((!CodeGen_SegmentMessage_DW.pSegmentCircleCnt_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:32' */
    /* '<S1>:1:33' */
    CodeGen_SegmentMessage_DW.pSegmentCircleCnt = 0.0;
    CodeGen_SegmentMessage_DW.pSegmentCircleCnt_not_empty = true;
  }

  if ((!CodeGen_SegmentMessage_DW.gSegmentMap_not_empty) || (getClearAllFlag() ==
       1.0)) {
    /* '<S1>:1:36' */
    /* '<S1>:1:37' */
    memset(&CodeGen_SegmentMessage_DW.gSegmentMap[0], 0, 400U * sizeof(real_T));
    CodeGen_SegmentMessage_DW.gSegmentMap_not_empty = true;
  }

  if ((!CodeGen_SegmentMessage_DW.pValidMessageIndex_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:39' */
    /* '<S1>:1:40' */
    CodeGen_SegmentMessage_DW.pValidMessageIndex = 0.0;
    CodeGen_SegmentMessage_DW.pValidMessageIndex_not_empty = true;
  }

  if ((CodeGen_SegmentMessage_U.SegmentTimeCnt >
       CodeGen_SegmentMessage_DW.gPreSegmentTimeCnt) &&
      (getAdvDrAstMpSegMessageType() == (real_T)E_SEGMENT) &&
      (getAdvDrAstMpSegOffset() != CodeGen_SegmentMessage_DW.gPreSegmentOffset))
  {
    /* '<S1>:1:44' */
    /* CyclicInc(index,MaxIndex)  */
    /* '<S1>:1:47' */
    if (CodeGen_SegmentMessage_DW.pValidMessageIndex + 1.0 > 200.0) {
      CodeGen_SegmentMessage_DW.pValidMessageIndex = 1.0;
    } else {
      CodeGen_SegmentMessage_DW.pValidMessageIndex++;
    }

    if (getAdvDrAstMpSegOffset() < CodeGen_SegmentMessage_DW.gPreSegmentOffset -
        CodeGen_SegmentMessage_DW.gOffsetThresh) {
      /* '<S1>:1:49' */
      /* '<S1>:1:50' */
      CodeGen_SegmentMessage_DW.pSegmentCircleCnt++;
    }

    /* '<S1>:1:53' */
    /* '<S1>:1:55' */
    CodeGen_SegmentMessage_DW.gSegmentMap[(int32_T)
      CodeGen_SegmentMessage_DW.pValidMessageIndex - 1] =
      CodeGen_SegmentMessage_DW.gMaxOffset *
      CodeGen_SegmentMessage_DW.pSegmentCircleCnt + getAdvDrAstMpSegOffset();

    /* '<S1>:1:56' */
    CodeGen_SegmentMessage_DW.gSegmentMap[(int32_T)
      CodeGen_SegmentMessage_DW.pValidMessageIndex + 199] =
      getAdvDrAstMpSegNumOfLanes();

    /*   |SegmentOffset | SegmentNumberOfLanes| */
  }

  /* '<S1>:1:62' */
  CodeGen_SegmentMessage_DW.gPreSegmentTimeCnt =
    CodeGen_SegmentMessage_U.SegmentTimeCnt;

  /* '<S1>:1:63' */
  CodeGen_SegmentMessage_DW.gPreSegmentOffset = getAdvDrAstMpSegOffset();

  /* '<S1>:1:65' */
  memcpy(&SegmentMap[0], &CodeGen_SegmentMessage_DW.gSegmentMap[0], 400U *
         sizeof(real_T));

  /* '<S1>:1:66' */
  u0 = CodeGen_SegmentMessage_DW.pValidMessageIndex;
  if (u0 >= 1.0) {
    ValidSegmentIndex = u0;
  } else {
    ValidSegmentIndex = 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_SegmentMessage_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_SegmentMessage_M, (NULL));

  /* block I/O */

  /* exported global signals */
  ValidSegmentIndex = 0.0;

  {
    int_T i;
    for (i = 0; i < 400; i++) {
      SegmentMap[i] = 0.0;
    }
  }

  /* states (dwork) */
  (void) memset((void *)&CodeGen_SegmentMessage_DW, 0,
                sizeof(DW_CodeGen_SegmentMessage_T));

  /* external inputs */
  (void) memset((void *)&CodeGen_SegmentMessage_U, 0,
                sizeof(ExtU_CodeGen_SegmentMessage_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_SegmentMessage_DW.gPreSegmentTimeCnt_not_empty = false;
  CodeGen_SegmentMessage_DW.gPreSegmentOffset_not_empty = false;
  CodeGen_SegmentMessage_DW.pSegmentCircleCnt_not_empty = false;
  CodeGen_SegmentMessage_DW.gSegmentMap_not_empty = false;
  CodeGen_SegmentMessage_DW.pValidMessageIndex_not_empty = false;
  CodeGen_SegmentMessage_DW.gMaxOffset = 6553.5;
  CodeGen_SegmentMessage_DW.gOffsetThresh = 2000.0;
}

/* Model terminate function */
void CodeGen_SegmentMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
