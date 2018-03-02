/*
 * File: CodeGen_ProfileShortMessage.c
 *
 * Code generated for Simulink model 'CodeGen_ProfileShortMessage'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 18:07:47 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_ProfileShortMessage.h"
#include "CodeGen_ProfileShortMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T ValidProfileShortIndex1;        /* '<Root>/MATLAB Function' */
real_T ValidProfileShortIndex2;        /* '<Root>/MATLAB Function' */
real_T ProfileShortMap1[6000];         /* '<Root>/MATLAB Function' */
real_T ProfileShortMap2[2000];         /* '<Root>/MATLAB Function' */
real_T ClearAllFalg;                   /* '<Root>/MATLAB Function' */

/* Block states (auto storage) */
DW_CodeGen_ProfileShortMessag_T CodeGen_ProfileShortMessage_DW;

/* Real-time model */
RT_MODEL_CodeGen_ProfileShort_T CodeGen_ProfileShortMessage_M_;
RT_MODEL_CodeGen_ProfileShort_T *const CodeGen_ProfileShortMessage_M =
  &CodeGen_ProfileShortMessage_M_;

/* Model step function */
void CodeGen_ProfileShortMessage_step(void)
{
  real_T AbsC;
  real_T curvature;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/ClearAllFlag'
   *  Inport: '<Root>/ClearAllFlag1'
   *  Inport: '<Root>/ClearAllFlag2'
   *  Inport: '<Root>/ClearAllFlag3'
   *  Inport: '<Root>/ClearAllFlag4'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* ProflieShortMap1 Profile */
  /* |1.ProfileType|2.AbsoluteProfileShortOffset1|3.curvature |4.EntryPoint */
  /* |5.ExitPoint| curve point tangent line angle(to the east as x-axis)| */
  /* ProfileShortMap2 Profile */
  /* |1.ProfileType |2.AbsoluteProfileShortOffset2 |3.leftLane */
  /* width|4.rightLane width| */
  /*  Max offset distance. 65535 centimeters. 6553.5 meter. */
  /*  use this thresh to judge if there is position offset is exceed over than 6553.5 meters. */
  /* init persistent variable */
  if (getAdvDrAstMpPrfShrtProfileType() == 4.0) {
    /* '<S1>:1:70' */
    /* '<S1>:1:72' */
    CodeGen_ProfileShortMessage_DW.gPreProfileShortTimeCnt = 0.0;

    /* '<S1>:1:73' */
    CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset1 = 1000.0;

    /* '<S1>:1:74' */
    CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset2 = 1000.0;

    /* '<S1>:1:75' */
    CodeGen_ProfileShortMessage_DW.gPreProfileShortCircleCnt1 = 0.0;

    /* '<S1>:1:76' */
    CodeGen_ProfileShortMessage_DW.gPreProfileShortCircleCnt2 = 0.0;

    /* '<S1>:1:77' */
    memset(&CodeGen_ProfileShortMessage_DW.gProfileShortMap1[0], 0, 6000U *
           sizeof(real_T));

    /* '<S1>:1:78' */
    memset(&CodeGen_ProfileShortMessage_DW.gProfileShortMap2[0], 0, 2000U *
           sizeof(real_T));

    /* '<S1>:1:79' */
    CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 = 0.0;

    /* '<S1>:1:80' */
    CodeGen_ProfileShortMessage_DW.pValidMessageIndex2 = 0.0;

    /* '<S1>:1:81' */
    ClearAllFalg = 1.0;
  } else {
    /* '<S1>:1:85' */
    ClearAllFalg = 0.0;
  }

  /*    ProfileType(ProfileType) == 1 means profileValue0 is curvature  */
  /*    profileValue1 is angle */
  if ((getProfileShortCnt() >
       CodeGen_ProfileShortMessage_DW.gPreProfileShortTimeCnt) &&
      (getAdvDrAstMpPrfShrtProfileType() == 1.0) && (getAdvDrAstMpPrfShrtOffset()
       != CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset1)) {
    /* '<S1>:1:96' */
    /* CyclicInc(index,MaxIndex)  */
    /* '<S1>:1:99' */
    if (CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 + 1.0 > 1000.0) {
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 = 1.0;
    } else {
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex1++;
    }

    if (getAdvDrAstMpPrfShrtOffset() <
        CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset1 -
        CodeGen_ProfileShortMessage_DW.gOffsetThresh) {
      /* '<S1>:1:101' */
      /* '<S1>:1:102' */
      CodeGen_ProfileShortMessage_DW.gPreProfileShortCircleCnt1++;
    }

    /* '<S1>:1:105' */
    /* '<S1>:1:110' */
    CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 - 1] =
      getAdvDrAstMpPrfShrtProfileType();

    /*  Actually is ProfileType  Map1 for curvature and angle. Map2 is for left/right lane. */
    /* '<S1>:1:111' */
    CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 + 999] =
      CodeGen_ProfileShortMessage_DW.gMaxOffset *
      CodeGen_ProfileShortMessage_DW.gPreProfileShortCircleCnt1 +
      getAdvDrAstMpPrfShrtOffset();

    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    /* ~~~~~~~~~~~~~~~~Curature Decoding.~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    /* ~~~~~~~~~~~~~~~refer to ADASIS_V2_SPECIFICATION . Page 133 */
    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    /*  value is the 10-bit coded curvature value */
    /*  a value of 1023 signifies 'curvature unknown' */
    /*  C = value - 511 (signed Integer) */
    /*  SIGN(C) represents the value -1 or +1 when C < 0 or C>= 0 , respectively */
    /* '<S1>:1:121' */
    /* '<S1>:1:122' */
    AbsC = fabs(getAdvDrAstMpPrfShrtValue0() - 511.0);

    /* '<S1>:1:123' */
    curvature = 0.0;
    if (AbsC <= 64.0) {
      /* '<S1>:1:124' */
      /* '<S1>:1:125' */
      curvature = (getAdvDrAstMpPrfShrtValue0() - 511.0) / 100000.0;
    }

    if ((AbsC > 64.0) && (AbsC <= 128.0)) {
      /* '<S1>:1:127' */
      /* '<S1>:1:128' */
      curvature = getAdvDrAstMpPrfShrtValue0() - 511.0;
      if (curvature < 0.0) {
        curvature = -1.0;
      } else if (curvature > 0.0) {
        curvature = 1.0;
      } else {
        if (curvature == 0.0) {
          curvature = 0.0;
        }
      }

      curvature = ((getAdvDrAstMpPrfShrtValue0() - 511.0) - curvature * 32.0) *
        2.0 / 100000.0;
    }

    if ((AbsC > 128.0) && (AbsC <= 192.0)) {
      /* '<S1>:1:130' */
      /* '<S1>:1:131' */
      curvature = getAdvDrAstMpPrfShrtValue0() - 511.0;
      if (curvature < 0.0) {
        curvature = -1.0;
      } else if (curvature > 0.0) {
        curvature = 1.0;
      } else {
        if (curvature == 0.0) {
          curvature = 0.0;
        }
      }

      curvature = ((getAdvDrAstMpPrfShrtValue0() - 511.0) - curvature * 80.0) *
        4.0 / 100000.0;
    }

    if ((AbsC > 192.0) && (AbsC <= 256.0)) {
      /* '<S1>:1:133' */
      /* '<S1>:1:134' */
      curvature = getAdvDrAstMpPrfShrtValue0() - 511.0;
      if (curvature < 0.0) {
        curvature = -1.0;
      } else if (curvature > 0.0) {
        curvature = 1.0;
      } else {
        if (curvature == 0.0) {
          curvature = 0.0;
        }
      }

      curvature = ((getAdvDrAstMpPrfShrtValue0() - 511.0) - curvature * 136.0) *
        8.0 / 100000.0;
    }

    if ((AbsC > 256.0) && (AbsC <= 320.0)) {
      /* '<S1>:1:136' */
      /* '<S1>:1:137' */
      curvature = getAdvDrAstMpPrfShrtValue0() - 511.0;
      if (curvature < 0.0) {
        curvature = -1.0;
      } else if (curvature > 0.0) {
        curvature = 1.0;
      } else {
        if (curvature == 0.0) {
          curvature = 0.0;
        }
      }

      curvature = ((getAdvDrAstMpPrfShrtValue0() - 511.0) - curvature * 196.0) *
        16.0 / 100000.0;
    }

    if ((AbsC > 320.0) && (AbsC <= 384.0)) {
      /* '<S1>:1:139' */
      /* '<S1>:1:140' */
      curvature = getAdvDrAstMpPrfShrtValue0() - 511.0;
      if (curvature < 0.0) {
        curvature = -1.0;
      } else if (curvature > 0.0) {
        curvature = 1.0;
      } else {
        if (curvature == 0.0) {
          curvature = 0.0;
        }
      }

      curvature = ((getAdvDrAstMpPrfShrtValue0() - 511.0) - curvature * 258.0) *
        32.0 / 100000.0;
    }

    if ((AbsC > 384.0) && (AbsC <= 448.0)) {
      /* '<S1>:1:142' */
      /* '<S1>:1:143' */
      curvature = getAdvDrAstMpPrfShrtValue0() - 511.0;
      if (curvature < 0.0) {
        curvature = -1.0;
      } else if (curvature > 0.0) {
        curvature = 1.0;
      } else {
        if (curvature == 0.0) {
          curvature = 0.0;
        }
      }

      curvature = ((getAdvDrAstMpPrfShrtValue0() - 511.0) - curvature * 321.0) *
        64.0 / 100000.0;
    }

    if ((AbsC > 448.0) && (AbsC <= 511.0)) {
      /* '<S1>:1:145' */
      /* '<S1>:1:146' */
      curvature = getAdvDrAstMpPrfShrtValue0() - 511.0;
      if (curvature < 0.0) {
        curvature = -1.0;
      } else if (curvature > 0.0) {
        curvature = 1.0;
      } else {
        if (curvature == 0.0) {
          curvature = 0.0;
        }
      }

      curvature = ((getAdvDrAstMpPrfShrtValue0() - 511.0) - curvature * 384.0) *
        128.0 / 100000.0;
    }

    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    /* '<S1>:1:150' */
    CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 + 1999] = curvature *
      1000.0;

    /*   to unified unit. */
    /* '<S1>:1:152' */
    CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 + 4999] =
      1.5707963267948966 - getAdvDrAstMpPrfShrtValue1() * 2.0 *
      3.1415926535897931 / 255.0;

    /*   store heading Angle radius. */
    if (fabs(CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)
             CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 + 1999]) > 0.2)
    {
      /* '<S1>:1:156' */
      /*  0.2 is the threshold to distinguish curature */
      /* '<S1>:1:157' */
      if (CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 <= 1.0) {
        AbsC = 1000.0;
      } else {
        AbsC = CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 - 1.0;
      }

      if (fabs(CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)AbsC +
               1999]) < 0.2) {
        /* '<S1>:1:158' */
        /* '<S1>:1:160' */
        CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)
          CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 + 2999] = 21.0;
      }
    } else {
      /* '<S1>:1:166' */
      if (CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 <= 1.0) {
        AbsC = 1000.0;
      } else {
        AbsC = CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 - 1.0;
      }

      if (fabs(CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)AbsC +
               1999]) > 0.2) {
        /* '<S1>:1:167' */
        /* '<S1>:1:169' */
        CodeGen_ProfileShortMessage_DW.gProfileShortMap1[(int32_T)AbsC + 3999] =
          22.0;
      }
    }

    /* '<S1>:1:176' */
    CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset1 =
      getAdvDrAstMpPrfShrtOffset();
  }

  if ((getProfileShortCnt() >
       CodeGen_ProfileShortMessage_DW.gPreProfileShortTimeCnt) &&
      (getAdvDrAstMpPrfShrtProfileType() == 5.0) && (getAdvDrAstMpPrfShrtOffset()
       != CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset2)) {
    /* '<S1>:1:183' */
    /*   ProfileType (profiletype == 5) for Left lane width and right lane width. */
    /* CyclicInc(index,MaxIndex)  */
    /* '<S1>:1:188' */
    if (CodeGen_ProfileShortMessage_DW.pValidMessageIndex2 + 1.0 > 500.0) {
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex2 = 1.0;
    } else {
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex2++;
    }

    if (getAdvDrAstMpPrfShrtOffset() <
        CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset2 -
        CodeGen_ProfileShortMessage_DW.gOffsetThresh) {
      /* '<S1>:1:190' */
      /* '<S1>:1:191' */
      CodeGen_ProfileShortMessage_DW.gPreProfileShortCircleCnt2++;
    }

    /* '<S1>:1:194' */
    /*   gProfileShortMap2 Data Structure */
    /*   | ProfileType |  Offset | LeftLaneWidth | RightLaneWidth| */
    /* '<S1>:1:198' */
    CodeGen_ProfileShortMessage_DW.gProfileShortMap2[(int32_T)
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex2 - 1] =
      getAdvDrAstMpPrfShrtProfileType();

    /* '<S1>:1:199' */
    CodeGen_ProfileShortMessage_DW.gProfileShortMap2[(int32_T)
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex2 + 499] =
      CodeGen_ProfileShortMessage_DW.gMaxOffset *
      CodeGen_ProfileShortMessage_DW.gPreProfileShortCircleCnt2 +
      getAdvDrAstMpPrfShrtOffset();

    /* '<S1>:1:200' */
    CodeGen_ProfileShortMessage_DW.gProfileShortMap2[(int32_T)
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex2 + 999] =
      getAdvDrAstMpPrfShrtValue0() * 0.1;

    /* '<S1>:1:201' */
    CodeGen_ProfileShortMessage_DW.gProfileShortMap2[(int32_T)
      CodeGen_ProfileShortMessage_DW.pValidMessageIndex2 + 1499] =
      getAdvDrAstMpPrfShrtValue1() * 0.1;

    /* '<S1>:1:202' */
    CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset2 =
      getAdvDrAstMpPrfShrtOffset();
  }

  /* '<S1>:1:206' */
  CodeGen_ProfileShortMessage_DW.gPreProfileShortTimeCnt = getProfileShortCnt();

  /* '<S1>:1:207' */
  memcpy(&ProfileShortMap1[0],
         &CodeGen_ProfileShortMessage_DW.gProfileShortMap1[0], 6000U * sizeof
         (real_T));

  /* '<S1>:1:208' */
  memcpy(&ProfileShortMap2[0],
         &CodeGen_ProfileShortMessage_DW.gProfileShortMap2[0], 2000U * sizeof
         (real_T));

  /* '<S1>:1:209' */
  curvature = CodeGen_ProfileShortMessage_DW.pValidMessageIndex1;
  if (curvature >= 1.0) {
    ValidProfileShortIndex1 = curvature;
  } else {
    ValidProfileShortIndex1 = 1.0;
  }

  /* '<S1>:1:210' */
  curvature = CodeGen_ProfileShortMessage_DW.pValidMessageIndex2;
  if (curvature >= 1.0) {
    ValidProfileShortIndex2 = curvature;
  } else {
    ValidProfileShortIndex2 = 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_ProfileShortMessage_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_ProfileShortMessage_M, (NULL));

  /* block I/O */

  /* exported global signals */
  ValidProfileShortIndex1 = 0.0;
  ValidProfileShortIndex2 = 0.0;

  {
    int_T i;
    for (i = 0; i < 6000; i++) {
      ProfileShortMap1[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 2000; i++) {
      ProfileShortMap2[i] = 0.0;
    }
  }

  ClearAllFalg = 0.0;

  /* states (dwork) */
  (void) memset((void *)&CodeGen_ProfileShortMessage_DW, 0,
                sizeof(DW_CodeGen_ProfileShortMessag_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_ProfileShortMessage_DW.gMaxOffset = 6553.5;
  CodeGen_ProfileShortMessage_DW.gOffsetThresh = 2000.0;
  CodeGen_ProfileShortMessage_DW.gPreProfileShortTimeCnt = 0.0;
  CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset1 = 1000.0;
  CodeGen_ProfileShortMessage_DW.gPreProfileShortOffset2 = 1000.0;
  CodeGen_ProfileShortMessage_DW.gPreProfileShortCircleCnt1 = 0.0;
  CodeGen_ProfileShortMessage_DW.gPreProfileShortCircleCnt2 = 0.0;
  memset(&CodeGen_ProfileShortMessage_DW.gProfileShortMap1[0], 0, 6000U * sizeof
         (real_T));
  memset(&CodeGen_ProfileShortMessage_DW.gProfileShortMap2[0], 0, 2000U * sizeof
         (real_T));
  CodeGen_ProfileShortMessage_DW.pValidMessageIndex1 = 0.0;
  CodeGen_ProfileShortMessage_DW.pValidMessageIndex2 = 0.0;
}

/* Model terminate function */
void CodeGen_ProfileShortMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
