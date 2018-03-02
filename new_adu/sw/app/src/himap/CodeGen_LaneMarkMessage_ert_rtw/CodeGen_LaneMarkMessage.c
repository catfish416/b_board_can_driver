/*
 * File: CodeGen_LaneMarkMessage.c
 *
 * Code generated for Simulink model 'CodeGen_LaneMarkMessage'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 16:52:23 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_LaneMarkMessage.h"
#include "CodeGen_LaneMarkMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T LaneMarkIndex;                  /* '<Root>/MATLAB Function' */
real_T LaneMarkMap[300];               /* '<Root>/MATLAB Function' */

/* Block states (auto storage) */
DW_CodeGen_LaneMarkMessage_T CodeGen_LaneMarkMessage_DW;

/* Real-time model */
RT_MODEL_CodeGen_LaneMarkMess_T CodeGen_LaneMarkMessage_M_;
RT_MODEL_CodeGen_LaneMarkMess_T *const CodeGen_LaneMarkMessage_M =
  &CodeGen_LaneMarkMessage_M_;

/* Model step function */
void CodeGen_LaneMarkMessage_step(void)
{
  real_T u0;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/ClearAllFlag'
   *  Inport: '<Root>/ClearAllFlag1'
   *  Inport: '<Root>/ClearAllFlag2'
   *  Inport: '<Root>/ClearAllFlag3'
   *  Inport: '<Root>/ClearAllFlag4'
   *  Inport: '<Root>/ClearAllFlag5'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* LaneMark Map Profile */
  /*  |1.AbsoluteLaneMarkOffset|2.AbsoluteLaneMarkOffset|3.LaneMarkValue| */
  /*  Max offset distance. 65535 centimeters. 6553.5 meter. */
  /*  use this thresh to judge if there is position offset is exceed over than 6553.5 meters. */
  /* init the persistent variable */
  if ((!CodeGen_LaneMarkMessage_DW.gPreLaneMarkTimeCnt_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:26' */
    /* '<S1>:1:27' */
    CodeGen_LaneMarkMessage_DW.gPreLaneMarkTimeCnt = 0.0;
    CodeGen_LaneMarkMessage_DW.gPreLaneMarkTimeCnt_not_empty = true;
  }

  if ((!CodeGen_LaneMarkMessage_DW.gPreLaneMarkOffset_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:30' */
    /* '<S1>:1:31' */
    CodeGen_LaneMarkMessage_DW.gPreLaneMarkOffset = 0.0;
    CodeGen_LaneMarkMessage_DW.gPreLaneMarkOffset_not_empty = true;
  }

  if ((!CodeGen_LaneMarkMessage_DW.gLaneMarkCircleCnt_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:33' */
    /* '<S1>:1:34' */
    CodeGen_LaneMarkMessage_DW.gLaneMarkCircleCnt = 0.0;
    CodeGen_LaneMarkMessage_DW.gLaneMarkCircleCnt_not_empty = true;
  }

  if ((!CodeGen_LaneMarkMessage_DW.gLaneMarkMap_not_empty) || (getClearAllFlag()
       == 1.0)) {
    /* '<S1>:1:37' */
    /* '<S1>:1:38' */
    memset(&CodeGen_LaneMarkMessage_DW.gLaneMarkMap[0], 0, 300U * sizeof(real_T));
    CodeGen_LaneMarkMessage_DW.gLaneMarkMap_not_empty = true;
  }

  if ((!CodeGen_LaneMarkMessage_DW.pValidMessageIndex_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:41' */
    /* '<S1>:1:42' */
    CodeGen_LaneMarkMessage_DW.pValidMessageIndex = 0.0;
    CodeGen_LaneMarkMessage_DW.pValidMessageIndex_not_empty = true;
  }

  if ((getLaneMarkTimeCnt() > CodeGen_LaneMarkMessage_DW.gPreLaneMarkTimeCnt) &&
      (getKHI_LaneMark_ProfileType() == (real_T)PT_LANEMARK) &&
      (getKHI_LaneMark_Offset() != CodeGen_LaneMarkMessage_DW.gPreLaneMarkOffset))
  {
    /* '<S1>:1:51' */
    /* CyclicInc(index,MaxIndex)  */
    /* '<S1>:1:54' */
    if (CodeGen_LaneMarkMessage_DW.pValidMessageIndex + 1.0 > 100.0) {
      CodeGen_LaneMarkMessage_DW.pValidMessageIndex = 1.0;
    } else {
      CodeGen_LaneMarkMessage_DW.pValidMessageIndex++;
    }

    if (getKHI_LaneMark_Offset() < CodeGen_LaneMarkMessage_DW.gPreLaneMarkOffset
        - CodeGen_LaneMarkMessage_DW.gOffsetThresh) {
      /* '<S1>:1:57' */
      /* '<S1>:1:58' */
      CodeGen_LaneMarkMessage_DW.gLaneMarkCircleCnt++;
    }

    /* '<S1>:1:61' */
    /* '<S1>:1:63' */
    CodeGen_LaneMarkMessage_DW.gLaneMarkMap[(int32_T)
      CodeGen_LaneMarkMessage_DW.pValidMessageIndex - 1] =
      CodeGen_LaneMarkMessage_DW.gMaxOffset *
      CodeGen_LaneMarkMessage_DW.gLaneMarkCircleCnt + getKHI_LaneMark_Offset();

    /* '<S1>:1:64' */
    CodeGen_LaneMarkMessage_DW.gLaneMarkMap[(int32_T)
      CodeGen_LaneMarkMessage_DW.pValidMessageIndex + 99] =
      getKHI_LaneMark_Position();

    /* '<S1>:1:65' */
    CodeGen_LaneMarkMessage_DW.gLaneMarkMap[(int32_T)
      CodeGen_LaneMarkMessage_DW.pValidMessageIndex + 199] =
      getKHI_LaneMark_Value();

    /*   |LaneMarkOffset | LaneMarkPos | LaneMarkValue| */
  }

  /* '<S1>:1:70' */
  CodeGen_LaneMarkMessage_DW.gPreLaneMarkTimeCnt = getLaneMarkTimeCnt();

  /* '<S1>:1:71' */
  CodeGen_LaneMarkMessage_DW.gPreLaneMarkOffset = getKHI_LaneMark_Offset();

  /* '<S1>:1:72' */
  memcpy(&LaneMarkMap[0], &CodeGen_LaneMarkMessage_DW.gLaneMarkMap[0], 300U *
         sizeof(real_T));

  /* '<S1>:1:74' */
  u0 = CodeGen_LaneMarkMessage_DW.pValidMessageIndex;
  if (u0 >= 1.0) {
    LaneMarkIndex = u0;
  } else {
    LaneMarkIndex = 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_LaneMarkMessage_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_LaneMarkMessage_M, (NULL));

  /* block I/O */

  /* exported global signals */
  LaneMarkIndex = 0.0;

  {
    int_T i;
    for (i = 0; i < 300; i++) {
      LaneMarkMap[i] = 0.0;
    }
  }

  /* states (dwork) */
  (void) memset((void *)&CodeGen_LaneMarkMessage_DW, 0,
                sizeof(DW_CodeGen_LaneMarkMessage_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_LaneMarkMessage_DW.gPreLaneMarkTimeCnt_not_empty = false;
  CodeGen_LaneMarkMessage_DW.gPreLaneMarkOffset_not_empty = false;
  CodeGen_LaneMarkMessage_DW.gLaneMarkCircleCnt_not_empty = false;
  CodeGen_LaneMarkMessage_DW.gLaneMarkMap_not_empty = false;
  CodeGen_LaneMarkMessage_DW.pValidMessageIndex_not_empty = false;
  CodeGen_LaneMarkMessage_DW.gMaxOffset = 6553.5;
  CodeGen_LaneMarkMessage_DW.gOffsetThresh = 2000.0;
}

/* Model terminate function */
void CodeGen_LaneMarkMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
