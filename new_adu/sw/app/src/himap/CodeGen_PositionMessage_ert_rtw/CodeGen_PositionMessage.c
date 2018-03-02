/*
 * File: CodeGen_PositionMessage.c
 *
 * Code generated for Simulink model 'CodeGen_PositionMessage'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 16:31:34 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_PositionMessage.h"
#include "CodeGen_PositionMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T ValidPositionIndex;             /* '<Root>/MATLAB Function' */
real_T PositionMap[6];                 /* '<Root>/MATLAB Function' */

/* Block states (auto storage) */
DW_CodeGen_PositionMessage_T CodeGen_PositionMessage_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_CodeGen_PositionMessage_T CodeGen_PositionMessage_U;

/* Real-time model */
RT_MODEL_CodeGen_PositionMess_T CodeGen_PositionMessage_M_;
RT_MODEL_CodeGen_PositionMess_T *const CodeGen_PositionMessage_M =
  &CodeGen_PositionMessage_M_;

/* Model step function */
void CodeGen_PositionMessage_step(void)
{
  int32_T i;
  real_T u0;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/AdvDrAstMpPsnIdxCrLn'
   *  Inport: '<Root>/AdvDrAstMpPstnLftSideOfst'
   *  Inport: '<Root>/AdvDrAstMpPstnMsgTyp'
   *  Inport: '<Root>/AdvDrAstMpPstnOfst'
   *  Inport: '<Root>/ClearAllFlag'
   *  Inport: '<Root>/PositionTimeCnt'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* Position Map Profile */
  /*  |1. AbsPositionOffset|2.PositionSideOffset|3.PositionCurrentLane| */
  /*  Max offset distance. 65535 centimeters. 6553.5 meter. */
  /*  use this thresh to judge if there is position offset is exceed over than 6553.5 meters. */
  /* store the previously received Position Offset. */
  /* store the previously received Position Time Count sent by dSpace CAN module. */
  /* store the most recently received Message Count,  use this Count value as Index. */
  /* record the Circle count . increased 1 everytime position exceeds 6553.5 meters. */
  /*    | PositionOffset| PositionSideOffset | PositionCurrentLane| */
  /* init the internal persistent variable */
  if ((!CodeGen_PositionMessage_DW.gPreMapPositonOffset_not_empty) ||
      (CodeGen_PositionMessage_U.ClearAllFlag == 1.0)) {
    /* '<S1>:1:16' */
    /* '<S1>:1:17' */
    CodeGen_PositionMessage_DW.gPreMapPositonOffset = 1000.0;
    CodeGen_PositionMessage_DW.gPreMapPositonOffset_not_empty = true;
  }

  if ((!CodeGen_PositionMessage_DW.gPrePositionTimeCnt_not_empty) ||
      (CodeGen_PositionMessage_U.ClearAllFlag == 1.0)) {
    /* '<S1>:1:20' */
    /* '<S1>:1:21' */
    CodeGen_PositionMessage_DW.gPrePositionTimeCnt = 0.0;
    CodeGen_PositionMessage_DW.gPrePositionTimeCnt_not_empty = true;
  }

  if ((!CodeGen_PositionMessage_DW.pValidMessageIndex_not_empty) ||
      (CodeGen_PositionMessage_U.ClearAllFlag == 1.0)) {
    /* '<S1>:1:24' */
    /* '<S1>:1:25' */
    CodeGen_PositionMessage_DW.pValidMessageIndex = 0.0;
    CodeGen_PositionMessage_DW.pValidMessageIndex_not_empty = true;
  }

  if ((!CodeGen_PositionMessage_DW.gPositionCircleCnt_not_empty) ||
      (CodeGen_PositionMessage_U.ClearAllFlag == 1.0)) {
    /* '<S1>:1:28' */
    /* '<S1>:1:29' */
    CodeGen_PositionMessage_DW.gPositionCircleCnt = 0.0;
    CodeGen_PositionMessage_DW.gPositionCircleCnt_not_empty = true;
  }

  if ((!CodeGen_PositionMessage_DW.gPositionMap_not_empty) ||
      (CodeGen_PositionMessage_U.ClearAllFlag == 1.0)) {
    /* '<S1>:1:32' */
    /* '<S1>:1:33' */
    for (i = 0; i < 6; i++) {
      CodeGen_PositionMessage_DW.gPositionMap[i] = 0.0;
    }

    CodeGen_PositionMessage_DW.gPositionMap_not_empty = true;
  }

  /*   init end */
  if ((getPositionTimeCnt() > CodeGen_PositionMessage_DW.gPrePositionTimeCnt) &&
      (getAdvDrAstMpPstnMsgTyp() == (real_T)E_POSITION) &&
      (getAdvDrAstMpPstnOfst() !=
       CodeGen_PositionMessage_DW.gPreMapPositonOffset)) {
    /* '<S1>:1:47' */
    /* CyclicInc(index,MaxIndex) */
    /* '<S1>:1:51' */
    if (CodeGen_PositionMessage_DW.pValidMessageIndex + 1.0 > 2.0) {
      CodeGen_PositionMessage_DW.pValidMessageIndex = 1.0;
    } else {
      CodeGen_PositionMessage_DW.pValidMessageIndex++;
    }

    if (getAdvDrAstMpPstnOfst() <
        CodeGen_PositionMessage_DW.gPreMapPositonOffset -
        CodeGen_PositionMessage_DW.gOffsetThresh) {
      /* '<S1>:1:53' */
      /* '<S1>:1:54' */
      CodeGen_PositionMessage_DW.gPositionCircleCnt++;
    }

    if (getAdvDrAstMpPstnOfst() >
        CodeGen_PositionMessage_DW.gPreMapPositonOffset +
        CodeGen_PositionMessage_DW.gOffsetThresh) {
      /* '<S1>:1:57' */
      /* '<S1>:1:58' */
      u0 = CodeGen_PositionMessage_DW.gPositionCircleCnt - 1.0;
      if (u0 >= 0.0) {
        CodeGen_PositionMessage_DW.gPositionCircleCnt = u0;
      } else {
        CodeGen_PositionMessage_DW.gPositionCircleCnt = 0.0;
      }
    }

    /* '<S1>:1:62' */
    /* '<S1>:1:64' */
    CodeGen_PositionMessage_DW.gPositionMap[(int32_T)
      CodeGen_PositionMessage_DW.pValidMessageIndex - 1] =
      CodeGen_PositionMessage_DW.gMaxOffset *
      CodeGen_PositionMessage_DW.gPositionCircleCnt + getAdvDrAstMpPstnOfst();

    /* absolute offset */
    /* '<S1>:1:66' */
    CodeGen_PositionMessage_DW.gPositionMap[(int32_T)
      CodeGen_PositionMessage_DW.pValidMessageIndex + 1] =
      getAdvDrAstMpPstnLftSideOfst();

    /* '<S1>:1:68' */
    CodeGen_PositionMessage_DW.gPositionMap[(int32_T)
      CodeGen_PositionMessage_DW.pValidMessageIndex + 3] =
      getAdvDrAstMpPsnIdxCrLn();
  }

  /* '<S1>:1:72' */
  CodeGen_PositionMessage_DW.gPreMapPositonOffset = getAdvDrAstMpPstnOfst();

  /* relative offset */
  /* '<S1>:1:74' */
  CodeGen_PositionMessage_DW.gPrePositionTimeCnt = getPositionTimeCnt();

  /* store the previous timecnt */
  /* '<S1>:1:76' */
  for (i = 0; i < 6; i++) {
    PositionMap[i] = CodeGen_PositionMessage_DW.gPositionMap[i];
  }

  /* '<S1>:1:78' */
  u0 = CodeGen_PositionMessage_DW.pValidMessageIndex;
  if (u0 >= 1.0) {
    ValidPositionIndex = u0;
  } else {
    ValidPositionIndex = 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_PositionMessage_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_PositionMessage_M, (NULL));

  /* block I/O */

  /* exported global signals */
  ValidPositionIndex = 0.0;

  {
    int_T i;
    for (i = 0; i < 6; i++) {
      PositionMap[i] = 0.0;
    }
  }

  /* states (dwork) */
  (void) memset((void *)&CodeGen_PositionMessage_DW, 0,
                sizeof(DW_CodeGen_PositionMessage_T));

  /* external inputs */
  (void) memset((void *)&CodeGen_PositionMessage_U, 0,
                sizeof(ExtU_CodeGen_PositionMessage_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_PositionMessage_DW.gPreMapPositonOffset_not_empty = false;
  CodeGen_PositionMessage_DW.gPrePositionTimeCnt_not_empty = false;
  CodeGen_PositionMessage_DW.pValidMessageIndex_not_empty = false;
  CodeGen_PositionMessage_DW.gPositionCircleCnt_not_empty = false;
  CodeGen_PositionMessage_DW.gPositionMap_not_empty = false;
  CodeGen_PositionMessage_DW.gMaxOffset = 6553.5;
  CodeGen_PositionMessage_DW.gOffsetThresh = 2000.0;
}

/* Model terminate function */
void CodeGen_PositionMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
