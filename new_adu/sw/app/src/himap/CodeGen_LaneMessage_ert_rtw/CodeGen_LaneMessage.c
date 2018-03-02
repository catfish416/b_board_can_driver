/*
 * File: CodeGen_LaneMessage.c
 *
 * Code generated for Simulink model 'CodeGen_LaneMessage'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 16:43:41 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_LaneMessage.h"
#include "CodeGen_LaneMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T ValidLaneMessageIndex;          /* '<Root>/MATLAB Function' */
real_T LaneMap[600];                   /* '<Root>/MATLAB Function' */

/* Block states (auto storage) */
DW_CodeGen_LaneMessage_T CodeGen_LaneMessage_DW;

/* Real-time model */
RT_MODEL_CodeGen_LaneMessage_T CodeGen_LaneMessage_M_;
RT_MODEL_CodeGen_LaneMessage_T *const CodeGen_LaneMessage_M =
  &CodeGen_LaneMessage_M_;

/* Model step function */
void CodeGen_LaneMessage_step(void)
{
  real_T u0;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/ClearAllFlag'
   *  Inport: '<Root>/ClearAllFlag1'
   *  Inport: '<Root>/ClearAllFlag2'
   *  Inport: '<Root>/ClearAllFlag3'
   *  Inport: '<Root>/ClearAllFlag4'
   *  Inport: '<Root>/ClearAllFlag5'
   *  Inport: '<Root>/ClearAllFlag6'
   *  Inport: '<Root>/ClearAllFlag7'
   *  Inport: '<Root>/ClearAllFlag8'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* Lane Map Profile */
  /* |1.AbsoluteLaneOffset|2.LaneWidth */
  /* |3.LaneIndex|4.LaneChangeRule|5.LaneChange|6.LanePartOfCalculatedRoute| */
  /*  init persistent variable */
  if ((!CodeGen_LaneMessage_DW.gPreLaneTimeCnt_not_empty) || (getClearAllFlag() ==
       1.0)) {
    /* '<S1>:1:26' */
    /* '<S1>:1:27' */
    CodeGen_LaneMessage_DW.gPreLaneTimeCnt = 0.0;
    CodeGen_LaneMessage_DW.gPreLaneTimeCnt_not_empty = true;
  }

  if ((!CodeGen_LaneMessage_DW.gPreLaneOffset_not_empty) || (getClearAllFlag() ==
       1.0)) {
    /* '<S1>:1:30' */
    /* '<S1>:1:31' */
    CodeGen_LaneMessage_DW.gPreLaneOffset = 0.0;
    CodeGen_LaneMessage_DW.gPreLaneOffset_not_empty = true;
  }

  if ((!CodeGen_LaneMessage_DW.gLaneCircleCnt_not_empty) || (getClearAllFlag() ==
       1.0)) {
    /* '<S1>:1:33' */
    /* '<S1>:1:34' */
    CodeGen_LaneMessage_DW.gLaneCircleCnt = 0.0;
    CodeGen_LaneMessage_DW.gLaneCircleCnt_not_empty = true;
  }

  if ((!CodeGen_LaneMessage_DW.gLaneMap_not_empty) || (getClearAllFlag() == 1.0))
  {
    /* '<S1>:1:37' */
    /* '<S1>:1:38' */
    memset(&CodeGen_LaneMessage_DW.gLaneMap[0], 0, 600U * sizeof(real_T));
    CodeGen_LaneMessage_DW.gLaneMap_not_empty = true;
  }

  if ((!CodeGen_LaneMessage_DW.pValidMessageIndex_not_empty) || (getClearAllFlag
       () == 1.0)) {
    /* '<S1>:1:41' */
    /* '<S1>:1:42' */
    CodeGen_LaneMessage_DW.pValidMessageIndex = 0.0;
    CodeGen_LaneMessage_DW.pValidMessageIndex_not_empty = true;
  }

  /*  end init */
  if ((getLaneTimeCnt() > CodeGen_LaneMessage_DW.gPreLaneTimeCnt) &&
      (getAdvDrAstMpLnProfileType() == (real_T)PT_LANE) &&
      (getAdvDrAstMpLnOffset() != CodeGen_LaneMessage_DW.gPreLaneOffset)) {
    /* '<S1>:1:49' */
    /* CyclicInc(index,MaxIndex)  */
    /* '<S1>:1:52' */
    if (CodeGen_LaneMessage_DW.pValidMessageIndex + 1.0 > 100.0) {
      CodeGen_LaneMessage_DW.pValidMessageIndex = 1.0;
    } else {
      CodeGen_LaneMessage_DW.pValidMessageIndex++;
    }

    if (getAdvDrAstMpLnOffset() < CodeGen_LaneMessage_DW.gPreLaneOffset -
        CodeGen_LaneMessage_DW.gOffsetThresh) {
      /* '<S1>:1:55' */
      /* '<S1>:1:56' */
      CodeGen_LaneMessage_DW.gLaneCircleCnt++;
    }

    /* '<S1>:1:59' */
    /* '<S1>:1:61' */
    CodeGen_LaneMessage_DW.gLaneMap[(int32_T)
      CodeGen_LaneMessage_DW.pValidMessageIndex - 1] =
      CodeGen_LaneMessage_DW.gMaxOffset * CodeGen_LaneMessage_DW.gLaneCircleCnt
      + getAdvDrAstMpLnOffset();

    /* '<S1>:1:62' */
    CodeGen_LaneMessage_DW.gLaneMap[(int32_T)
      CodeGen_LaneMessage_DW.pValidMessageIndex + 99] = getAdvDrAstMpLnLaneWidth
      ();

    /* '<S1>:1:63' */
    CodeGen_LaneMessage_DW.gLaneMap[(int32_T)
      CodeGen_LaneMessage_DW.pValidMessageIndex + 199] =
      getAdvDrAstMpLnLaneIndex();

    /* '<S1>:1:64' */
    CodeGen_LaneMessage_DW.gLaneMap[(int32_T)
      CodeGen_LaneMessage_DW.pValidMessageIndex + 299] =
      getAdvDrAstMpLnLaneChangeRule();

    /* '<S1>:1:65' */
    CodeGen_LaneMessage_DW.gLaneMap[(int32_T)
      CodeGen_LaneMessage_DW.pValidMessageIndex + 399] =
      getAdvDrAstMpLnLaneChange();

    /* '<S1>:1:66' */
    CodeGen_LaneMessage_DW.gLaneMap[(int32_T)
      CodeGen_LaneMessage_DW.pValidMessageIndex + 499] =
      getAdvDrAstMpLnPartOfCalculatedRoute();

    /*  |LaneOffset | LaneWidth| LaneIndex | LaneChangeRule | LaneChange | */
    /*  LanePartOfCalculatedRoute| */
  }

  /* '<S1>:1:71' */
  CodeGen_LaneMessage_DW.gPreLaneTimeCnt = getLaneTimeCnt();

  /* '<S1>:1:72' */
  CodeGen_LaneMessage_DW.gPreLaneOffset = getAdvDrAstMpLnOffset();

  /* '<S1>:1:74' */
  u0 = CodeGen_LaneMessage_DW.pValidMessageIndex;
  if (u0 >= 1.0) {
    ValidLaneMessageIndex = u0;
  } else {
    ValidLaneMessageIndex = 1.0;
  }

  /* '<S1>:1:76' */
  memcpy(&LaneMap[0], &CodeGen_LaneMessage_DW.gLaneMap[0], 600U * sizeof(real_T));

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_LaneMessage_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_LaneMessage_M, (NULL));

  /* block I/O */

  /* exported global signals */
  ValidLaneMessageIndex = 0.0;

  {
    int_T i;
    for (i = 0; i < 600; i++) {
      LaneMap[i] = 0.0;
    }
  }

  /* states (dwork) */
  (void) memset((void *)&CodeGen_LaneMessage_DW, 0,
                sizeof(DW_CodeGen_LaneMessage_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_LaneMessage_DW.gPreLaneTimeCnt_not_empty = false;
  CodeGen_LaneMessage_DW.gPreLaneOffset_not_empty = false;
  CodeGen_LaneMessage_DW.gLaneCircleCnt_not_empty = false;
  CodeGen_LaneMessage_DW.gLaneMap_not_empty = false;
  CodeGen_LaneMessage_DW.pValidMessageIndex_not_empty = false;
  CodeGen_LaneMessage_DW.gMaxOffset = 6553.5;
  CodeGen_LaneMessage_DW.gOffsetThresh = 2000.0;
}

/* Model terminate function */
void CodeGen_LaneMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
