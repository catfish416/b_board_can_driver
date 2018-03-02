/*
 * File: CodeGen_TrafficSignMessage.c
 *
 * Code generated for Simulink model 'CodeGen_TrafficSignMessage'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 17:00:50 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_TrafficSignMessage.h"
#include "CodeGen_TrafficSignMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T TrafficSignIndex;               /* '<Root>/MATLAB Function' */
real_T TrafficSignmap[300];            /* '<Root>/MATLAB Function' */

/* Block states (auto storage) */
DW_CodeGen_TrafficSignMessage_T CodeGen_TrafficSignMessage_DW;

/* Real-time model */
RT_MODEL_CodeGen_TrafficSignM_T CodeGen_TrafficSignMessage_M_;
RT_MODEL_CodeGen_TrafficSignM_T *const CodeGen_TrafficSignMessage_M =
  &CodeGen_TrafficSignMessage_M_;

/* Model step function */
void CodeGen_TrafficSignMessage_step(void)
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
  /*  TrafficSign Map Profile */
  /* |1.AbsoluteTrafficSignOffset |2.TrafficSignPos |3.TrafficSignValue| */
  /*  Max offset distance. 65535 centimeters. 6553.5 meter. */
  /*  use this thresh to judge if there is position offset is exceed over than 6553.5 meters. */
  /*  init the persistent variable */
  if ((!CodeGen_TrafficSignMessage_DW.gPreTrafficSignTimeCnt_not_empt) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:25' */
    /* '<S1>:1:26' */
    CodeGen_TrafficSignMessage_DW.gPreTrafficSignTimeCnt = 0.0;
    CodeGen_TrafficSignMessage_DW.gPreTrafficSignTimeCnt_not_empt = true;
  }

  if ((!CodeGen_TrafficSignMessage_DW.gPreTrafficSignOffset_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:29' */
    /* '<S1>:1:30' */
    CodeGen_TrafficSignMessage_DW.gPreTrafficSignOffset = 0.0;
    CodeGen_TrafficSignMessage_DW.gPreTrafficSignOffset_not_empty = true;
  }

  if ((!CodeGen_TrafficSignMessage_DW.gTrafficSignCircleCnt_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:33' */
    /* '<S1>:1:34' */
    CodeGen_TrafficSignMessage_DW.gTrafficSignCircleCnt = 0.0;
    CodeGen_TrafficSignMessage_DW.gTrafficSignCircleCnt_not_empty = true;
  }

  if ((!CodeGen_TrafficSignMessage_DW.gTrafficSignMap_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:37' */
    /* '<S1>:1:38' */
    memset(&CodeGen_TrafficSignMessage_DW.gTrafficSignMap[0], 0, 300U * sizeof
           (real_T));
    CodeGen_TrafficSignMessage_DW.gTrafficSignMap_not_empty = true;
  }

  if ((!CodeGen_TrafficSignMessage_DW.pValidMessageIndex_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:41' */
    /* '<S1>:1:42' */
    CodeGen_TrafficSignMessage_DW.pValidMessageIndex = 0.0;
    CodeGen_TrafficSignMessage_DW.pValidMessageIndex_not_empty = true;
  }

  if ((getTrafficSignTimeCnt() >
       CodeGen_TrafficSignMessage_DW.gPreTrafficSignTimeCnt) &&
      (getTrafficProfileType() == (real_T)PT_TRAFFICSIGN) &&
      (getKHI_TrafficSign_Offset() !=
       CodeGen_TrafficSignMessage_DW.gPreTrafficSignOffset)) {
    /* '<S1>:1:48' */
    /* CyclicInc(index,MaxIndex)  */
    /* '<S1>:1:53' */
    if (CodeGen_TrafficSignMessage_DW.pValidMessageIndex + 1.0 > 100.0) {
      CodeGen_TrafficSignMessage_DW.pValidMessageIndex = 1.0;
    } else {
      CodeGen_TrafficSignMessage_DW.pValidMessageIndex++;
    }

    if (getKHI_TrafficSign_Offset() <
        CodeGen_TrafficSignMessage_DW.gPreTrafficSignOffset -
        CodeGen_TrafficSignMessage_DW.gOffsetThresh) {
      /* '<S1>:1:57' */
      /* '<S1>:1:58' */
      CodeGen_TrafficSignMessage_DW.gTrafficSignCircleCnt++;
    }

    /* '<S1>:1:61' */
    /* '<S1>:1:63' */
    CodeGen_TrafficSignMessage_DW.gTrafficSignMap[(int32_T)
      CodeGen_TrafficSignMessage_DW.pValidMessageIndex - 1] =
      CodeGen_TrafficSignMessage_DW.gMaxOffset *
      CodeGen_TrafficSignMessage_DW.gTrafficSignCircleCnt +
      getKHI_TrafficSign_Offset();

    /* '<S1>:1:64' */
    CodeGen_TrafficSignMessage_DW.gTrafficSignMap[(int32_T)
      CodeGen_TrafficSignMessage_DW.pValidMessageIndex + 99] =
      getKHI_TrafficSign_Position();

    /* '<S1>:1:65' */
    CodeGen_TrafficSignMessage_DW.gTrafficSignMap[(int32_T)
      CodeGen_TrafficSignMessage_DW.pValidMessageIndex + 199] =
      getKHI_TrafficSign_Value();

    /*   |TrafficSignOffset |TrafficSignPos | TrafficSignValue| */
  }

  /* '<S1>:1:70' */
  CodeGen_TrafficSignMessage_DW.gPreTrafficSignTimeCnt = getTrafficSignTimeCnt();

  /* '<S1>:1:71' */
  CodeGen_TrafficSignMessage_DW.gPreTrafficSignOffset =
    getKHI_TrafficSign_Offset();

  /* '<S1>:1:72' */
  memcpy(&TrafficSignmap[0], &CodeGen_TrafficSignMessage_DW.gTrafficSignMap[0],
         300U * sizeof(real_T));

  /* '<S1>:1:73' */
  u0 = CodeGen_TrafficSignMessage_DW.pValidMessageIndex;
  if (u0 >= 1.0) {
    TrafficSignIndex = u0;
  } else {
    TrafficSignIndex = 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_TrafficSignMessage_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_TrafficSignMessage_M, (NULL));

  /* block I/O */

  /* exported global signals */
  TrafficSignIndex = 0.0;

  {
    int_T i;
    for (i = 0; i < 300; i++) {
      TrafficSignmap[i] = 0.0;
    }
  }

  /* states (dwork) */
  (void) memset((void *)&CodeGen_TrafficSignMessage_DW, 0,
                sizeof(DW_CodeGen_TrafficSignMessage_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_TrafficSignMessage_DW.gPreTrafficSignTimeCnt_not_empt = false;
  CodeGen_TrafficSignMessage_DW.gPreTrafficSignOffset_not_empty = false;
  CodeGen_TrafficSignMessage_DW.gTrafficSignCircleCnt_not_empty = false;
  CodeGen_TrafficSignMessage_DW.gTrafficSignMap_not_empty = false;
  CodeGen_TrafficSignMessage_DW.pValidMessageIndex_not_empty = false;
  CodeGen_TrafficSignMessage_DW.gMaxOffset = 6553.5;
  CodeGen_TrafficSignMessage_DW.gOffsetThresh = 2000.0;
}

/* Model terminate function */
void CodeGen_TrafficSignMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
