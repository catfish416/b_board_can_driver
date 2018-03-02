/*
 * File: _coder_DebugMain_api.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef _CODER_DEBUGMAIN_API_H
#define _CODER_DEBUGMAIN_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_DebugMain_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void DebugMain(real_T FusObjPre[3302], real_T Lane_NumInfoPre[3], real_T
                      Line_ShapeInfo[100], real_T Veh_State[8], real_T
                      Navi_Info[28], real_T TrigStart, real_T End[4], real_T
                      EPS_Status, real_T ResSwAct, real_T DrvBrkEng, real_T
                      YawRate, real_T StrWhAng, real_T TurnLight, real_T
                      TrnShutDwn, real_T LCShutDwn, real_T UseFakeCIPVEn, real_T
                      *PreviewDistance, real_T *LateralDistance, real_T
                      *LongitudinalError, real_T *LateralError, real_T
                      *TargetLongitudinalSpeed, real_T *PathPlanControl, real_T *
                      TargetOrientationAngle, real_T *PreviewTime, real_T
                      *PathPlanAvaliable, real_T *SpeedLimit, real_T *StopFlg,
                      real_T *aCal);
extern void DebugMain_api(const mxArray *prhs[16], const mxArray *plhs[12]);
extern void DebugMain_atexit(void);
extern void DebugMain_initialize(void);
extern void DebugMain_terminate(void);
extern void DebugMain_xil_terminate(void);

#endif

/*
 * File trailer for _coder_DebugMain_api.h
 *
 * [EOF]
 */
