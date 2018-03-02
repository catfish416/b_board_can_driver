/*
 * File: _coder_DebugMain_api.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_DebugMain_api.h"
#include "_coder_DebugMain_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131435U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "DebugMain",                         /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3302];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Lane_NumInfoPre, const char_T *identifier))[3];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Line_ShapeInfo, const char_T *identifier))[100];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *FusObjPre,
  const char_T *identifier))[3302];
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[100];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Veh_State, const char_T *identifier))[8];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Navi_Info, const char_T *identifier))[28];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[28];
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *TrigStart,
  const char_T *identifier);
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *End,
  const char_T *identifier))[4];
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4];
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3302];
static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[100];
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8];
static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[28];
static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[3302]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3302]
{
  real_T (*y)[3302];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Lane_NumInfoPre
 *                const char_T *identifier
 * Return Type  : real_T (*)[3]
 */
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Lane_NumInfoPre, const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(Lane_NumInfoPre), &thisId);
  emlrtDestroyArray(&Lane_NumInfoPre);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[3]
 */
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Line_ShapeInfo
 *                const char_T *identifier
 * Return Type  : real_T (*)[100]
 */
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Line_ShapeInfo, const char_T *identifier))[100]
{
  real_T (*y)[100];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(Line_ShapeInfo), &thisId);
  emlrtDestroyArray(&Line_ShapeInfo);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *FusObjPre
 *                const char_T *identifier
 * Return Type  : real_T (*)[3302]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *FusObjPre,
  const char_T *identifier))[3302]
{
  real_T (*y)[3302];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(FusObjPre), &thisId);
  emlrtDestroyArray(&FusObjPre);
  return y;
}
/*
 * Arguments    : const real_T u
 * Return Type  : const mxArray *
 */
  static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[100]
 */
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[100]
{
  real_T (*y)[100];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Veh_State
 *                const char_T *identifier
 * Return Type  : real_T (*)[8]
 */
  static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Veh_State, const char_T *identifier))[8]
{
  real_T (*y)[8];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(Veh_State), &thisId);
  emlrtDestroyArray(&Veh_State);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[8]
 */
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8]
{
  real_T (*y)[8];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Navi_Info
 *                const char_T *identifier
 * Return Type  : real_T (*)[28]
 */
  static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *Navi_Info, const char_T *identifier))[28]
{
  real_T (*y)[28];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(Navi_Info), &thisId);
  emlrtDestroyArray(&Navi_Info);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[28]
 */
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[28]
{
  real_T (*y)[28];
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *TrigStart
 *                const char_T *identifier
 * Return Type  : real_T
 */
  static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *TrigStart, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(TrigStart), &thisId);
  emlrtDestroyArray(&TrigStart);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *End
 *                const char_T *identifier
 * Return Type  : real_T (*)[4]
 */
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *End,
  const char_T *identifier))[4]
{
  real_T (*y)[4];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = n_emlrt_marshallIn(sp, emlrtAlias(End), &thisId);
  emlrtDestroyArray(&End);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[4]
 */
  static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4]
{
  real_T (*y)[4];
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[3302]
 */
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3302]
{
  real_T (*ret)[3302];
  static const int32_T dims[2] = { 127, 26 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[3302])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[3]
 */
  static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[2] = { 1, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[100]
 */
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[100]
{
  real_T (*ret)[100];
  static const int32_T dims[2] = { 10, 10 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[100])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[8]
 */
  static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8]
{
  real_T (*ret)[8];
  static const int32_T dims[2] = { 1, 8 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[8])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[28]
 */
static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[28]
{
  real_T (*ret)[28];
  static const int32_T dims[2] = { 4, 7 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[28])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
  static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[4]
 */
static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  real_T (*ret)[4];
  static const int32_T dims[2] = { 1, 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[4])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const mxArray *prhs[16]
 *                const mxArray *plhs[12]
 * Return Type  : void
 */
  void DebugMain_api(const mxArray *prhs[16], const mxArray *plhs[12])
{
  real_T (*FusObjPre)[3302];
  real_T (*Lane_NumInfoPre)[3];
  real_T (*Line_ShapeInfo)[100];
  real_T (*Veh_State)[8];
  real_T (*Navi_Info)[28];
  real_T TrigStart;
  real_T (*End)[4];
  real_T EPS_Status;
  real_T ResSwAct;
  real_T DrvBrkEng;
  real_T YawRate;
  real_T StrWhAng;
  real_T TurnLight;
  real_T TrnShutDwn;
  real_T LCShutDwn;
  real_T UseFakeCIPVEn;
  real_T PreviewDistance;
  real_T LateralDistance;
  real_T LongitudinalError;
  real_T LateralError;
  real_T TargetLongitudinalSpeed;
  real_T PathPlanControl;
  real_T TargetOrientationAngle;
  real_T PreviewTime;
  real_T PathPlanAvaliable;
  real_T SpeedLimit;
  real_T StopFlg;
  real_T aCal;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, -1);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);
  prhs[3] = emlrtProtectR2012b(prhs[3], 3, false, -1);
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, false, -1);
  prhs[6] = emlrtProtectR2012b(prhs[6], 6, false, -1);

  /* Marshall function inputs */
  FusObjPre = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "FusObjPre");
  Lane_NumInfoPre = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]),
    "Lane_NumInfoPre");
  Line_ShapeInfo = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "Line_ShapeInfo");
  Veh_State = g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "Veh_State");
  Navi_Info = i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "Navi_Info");
  TrigStart = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "TrigStart");
  End = m_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "End");
  EPS_Status = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "EPS_Status");
  ResSwAct = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "ResSwAct");
  DrvBrkEng = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "DrvBrkEng");
  YawRate = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "YawRate");
  StrWhAng = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "StrWhAng");
  TurnLight = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "TurnLight");
  TrnShutDwn = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "TrnShutDwn");
  LCShutDwn = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "LCShutDwn");
  UseFakeCIPVEn = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "UseFakeCIPVEn");

  /* Invoke the target function */
  DebugMain(*FusObjPre, *Lane_NumInfoPre, *Line_ShapeInfo, *Veh_State,
            *Navi_Info, TrigStart, *End, EPS_Status, ResSwAct, DrvBrkEng,
            YawRate, StrWhAng, TurnLight, TrnShutDwn, LCShutDwn, UseFakeCIPVEn,
            &PreviewDistance, &LateralDistance, &LongitudinalError,
            &LateralError, &TargetLongitudinalSpeed, &PathPlanControl,
            &TargetOrientationAngle, &PreviewTime, &PathPlanAvaliable,
            &SpeedLimit, &StopFlg, &aCal);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(PreviewDistance);
  plhs[1] = emlrt_marshallOut(LateralDistance);
  plhs[2] = emlrt_marshallOut(LongitudinalError);
  plhs[3] = emlrt_marshallOut(LateralError);
  plhs[4] = emlrt_marshallOut(TargetLongitudinalSpeed);
  plhs[5] = emlrt_marshallOut(PathPlanControl);
  plhs[6] = emlrt_marshallOut(TargetOrientationAngle);
  plhs[7] = emlrt_marshallOut(PreviewTime);
  plhs[8] = emlrt_marshallOut(PathPlanAvaliable);
  plhs[9] = emlrt_marshallOut(SpeedLimit);
  plhs[10] = emlrt_marshallOut(StopFlg);
  plhs[11] = emlrt_marshallOut(aCal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void DebugMain_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  DebugMain_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void DebugMain_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void DebugMain_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_DebugMain_api.c
 *
 * [EOF]
 */
