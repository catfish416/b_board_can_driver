/*
 * File: CodeGen_StubMessage.c
 *
 * Code generated for Simulink model 'CodeGen_StubMessage'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 16:13:22 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_StubMessage.h"
#include "CodeGen_StubMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T ValidStubsMessageIndex;         /* '<Root>/MATLAB Function' */
real_T StubMap[300];                   /* '<Root>/MATLAB Function' */

/* Block states (auto storage) */
DW_CodeGen_StubMessage_T CodeGen_StubMessage_DW;

/* Real-time model */
RT_MODEL_CodeGen_StubMessage_T CodeGen_StubMessage_M_;
RT_MODEL_CodeGen_StubMessage_T *const CodeGen_StubMessage_M =
  &CodeGen_StubMessage_M_;

/* Model step function */
void CodeGen_StubMessage_step(void)
{
  real_T u0;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/AdvDrAstMpStbMessageType'
   *  Inport: '<Root>/AdvDrAstMpStbOffset'
   *  Inport: '<Root>/AdvDrAstMpStbSubPathIndex'
   *  Inport: '<Root>/AdvDrAstMpStbTurnAngle'
   *  Inport: '<Root>/ClearAllFlag'
   *  Inport: '<Root>/StubTimeCnt'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /*  STUB MAP DATA PROFILE */
  /*  |1.absoluteOffset|2.stubTurnAngle|3.stubPathIndex| */
  /*  Max offset distance. 65535 centimeters. 6553.5 meter. */
  /*  use this thresh to judge if there is position offset is exceed over than 6553.5 meters. */
  /*  init the persistent variable */
  if ((!CodeGen_StubMessage_DW.gPreStubTimeCnt_not_empty) || (getClearAllFlag() ==
       1.0)) {
    /* '<S1>:1:27' */
    /* '<S1>:1:28' */
    CodeGen_StubMessage_DW.gPreStubTimeCnt = 0.0;
    CodeGen_StubMessage_DW.gPreStubTimeCnt_not_empty = true;
  }

  if ((!CodeGen_StubMessage_DW.gPreStubOffset_not_empty) || (getClearAllFlag() ==
       1.0)) {
    /* '<S1>:1:31' */
    /* '<S1>:1:32' */
    CodeGen_StubMessage_DW.gPreStubOffset = 1000.0;
    CodeGen_StubMessage_DW.gPreStubOffset_not_empty = true;
  }

  if ((!CodeGen_StubMessage_DW.gStubCircleCnt_not_empty) || (getClearAllFlag() ==
       1.0)) {
    /* '<S1>:1:34' */
    /* '<S1>:1:35' */
    CodeGen_StubMessage_DW.gStubCircleCnt = 0.0;
    CodeGen_StubMessage_DW.gStubCircleCnt_not_empty = true;
  }

  if ((!CodeGen_StubMessage_DW.gStubMap_not_empty) || (getClearAllFlag() == 1.0))
  {
    /* '<S1>:1:37' */
    /* '<S1>:1:38' */
    memset(&CodeGen_StubMessage_DW.gStubMap[0], 0, 300U * sizeof(real_T));
    CodeGen_StubMessage_DW.gStubMap_not_empty = true;
  }

  if ((!CodeGen_StubMessage_DW.pValidMessageIndex_not_empty) || (getClearAllFlag
       () == 1.0)) {
    /* '<S1>:1:40' */
    /* '<S1>:1:41' */
    CodeGen_StubMessage_DW.pValidMessageIndex = 0.0;
    CodeGen_StubMessage_DW.pValidMessageIndex_not_empty = true;
  }

  /*  end init */
  if ((getStubTimeCnt() > CodeGen_StubMessage_DW.gPreStubTimeCnt) &&
      (getAdvDrAstMpStbMessageType() == (real_T)E_STUB) &&
      (getAdvDrAstMpStbOffset() != CodeGen_StubMessage_DW.gPreStubOffset)) {
    /* '<S1>:1:50' */
    /* CyclicInc(index,MaxIndex)  */
    /* '<S1>:1:52' */
    if (CodeGen_StubMessage_DW.pValidMessageIndex + 1.0 > 100.0) {
      CodeGen_StubMessage_DW.pValidMessageIndex = 1.0;
    } else {
      CodeGen_StubMessage_DW.pValidMessageIndex++;
    }

    if (getAdvDrAstMpStbOffset() < CodeGen_StubMessage_DW.gPreStubOffset -
        CodeGen_StubMessage_DW.gOffsetThresh) {
      /* '<S1>:1:54' */
      /* '<S1>:1:55' */
      CodeGen_StubMessage_DW.gStubCircleCnt++;
    }

    /* '<S1>:1:58' */
    /* '<S1>:1:60' */
    CodeGen_StubMessage_DW.gStubMap[(int32_T)
      CodeGen_StubMessage_DW.pValidMessageIndex - 1] =
      CodeGen_StubMessage_DW.gMaxOffset * CodeGen_StubMessage_DW.gStubCircleCnt
      + getAdvDrAstMpStbOffset();

    /* '<S1>:1:61' */
    CodeGen_StubMessage_DW.gStubMap[(int32_T)
      CodeGen_StubMessage_DW.pValidMessageIndex + 99] =
      getAdvDrAstMpStbTurnAngle();

    /* '<S1>:1:62' */
    CodeGen_StubMessage_DW.gStubMap[(int32_T)
      CodeGen_StubMessage_DW.pValidMessageIndex + 199] =
      getAdvDrAstMpStbSubPathIndex();

    /*   |StubOffset | StubTurnAngle | StubPathIndex| */
  }

  /* '<S1>:1:67' */
  CodeGen_StubMessage_DW.gPreStubTimeCnt = getStubTimeCnt();

  /* '<S1>:1:68' */
  CodeGen_StubMessage_DW.gPreStubOffset = getAdvDrAstMpStbOffset();

  /* '<S1>:1:69' */
  memcpy(&StubMap[0], &CodeGen_StubMessage_DW.gStubMap[0], 300U * sizeof(real_T));

  /* '<S1>:1:71' */
  u0 = CodeGen_StubMessage_DW.pValidMessageIndex;
  if (u0 >= 1.0) {
    ValidStubsMessageIndex = u0;
  } else {
    ValidStubsMessageIndex = 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_StubMessage_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_StubMessage_M, (NULL));

  /* block I/O */

  /* exported global signals */
  ValidStubsMessageIndex = 0.0;

  {
    int_T i;
    for (i = 0; i < 300; i++) {
      StubMap[i] = 0.0;
    }
  }

  /* states (dwork) */
  (void) memset((void *)&CodeGen_StubMessage_DW, 0,
                sizeof(DW_CodeGen_StubMessage_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_StubMessage_DW.gPreStubTimeCnt_not_empty = false;
  CodeGen_StubMessage_DW.gPreStubOffset_not_empty = false;
  CodeGen_StubMessage_DW.gStubCircleCnt_not_empty = false;
  CodeGen_StubMessage_DW.gStubMap_not_empty = false;
  CodeGen_StubMessage_DW.pValidMessageIndex_not_empty = false;
  CodeGen_StubMessage_DW.gMaxOffset = 6553.5;
  CodeGen_StubMessage_DW.gOffsetThresh = 2000.0;
}

/* Model terminate function */
void CodeGen_StubMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
