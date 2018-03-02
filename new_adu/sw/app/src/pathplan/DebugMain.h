/*
 * File: DebugMain.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef DEBUGMAIN_H
#define DEBUGMAIN_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void DebugMain(const double FusObjPre[3302], const double
                      Lane_NumInfoPre[3], const double Line_ShapeInfo[100],
                      const double Veh_State[8], const double Navi_Info[28],
                      double TrigStart, const double End[4], double EPS_Status,
                      double ResSwAct, double DrvBrkEng, double YawRate, double
                      StrWhAng, double TurnLight, double TrnShutDwn, double
                      LCShutDwn, double UseFakeCIPVEn, double *PreviewDistance,
                      double *LateralDistance, double *LongitudinalError, double
                      *LateralError, double *TargetLongitudinalSpeed, double
                      *PathPlanControl, double *TargetOrientationAngle, double
                      *PreviewTime, double *PathPlanAvaliable, double
                      *SpeedLimit, double *StopFlg, double *aCal);
extern void DebugMain_init(void);

#endif

/*
 * File trailer for DebugMain.h
 *
 * [EOF]
 */
