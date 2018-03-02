/*
 * File: PathGenerator.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef PATHGENERATOR_H
#define PATHGENERATOR_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void PathGenerator(double Timelimit, double EnterZoneFlg, const double
  Info_MeGCd[6], const double Info_FdGCd[6], const double Info_FoGCd[6], const
  double Info_LdGCd[6], const double Info_LoGCd[6], double LongDisLimitGCd,
  const double RoadInfoGCd[8], double CurOpGCd, double InLaneLCFlg, const double
  PreInfo_Me[6], double LCEnbSts, double *PathFinishFlg, double *PathPlanControl,
  double *TargetLongitudinalSpeed, double *TargetOrientationAngle, double
  *PreviewTime, double *PreviewDistance, double *LateraDistance, double
  *LongitudinalError, double *LateralError, double *LCStartFlg);

#endif

/*
 * File trailer for PathGenerator.h
 *
 * [EOF]
 */
