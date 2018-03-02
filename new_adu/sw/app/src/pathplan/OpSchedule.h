/*
 * File: OpSchedule.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef OPSCHEDULE_H
#define OPSCHEDULE_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void OpSchedule(const double Navi_InfoTurn[28], const double
  Line_ShapeInfo[100], const double Lane_NumInfo[3], const double Info_Me[7],
  double TargetPosition, double InLaneLCFlg, double LCTrigSuccess, const double
  Info_Lo[6], double TrigStart, double OperationFinishFlgIn, double LCStartFlg,
  double LCEnbSts, double TunEnbSts, double LCForceShudown, double
  TunForceShudown, const double End[4], double *Curoperation, double
  *OperationLongDislimit, double RoadInfo[8], double *SpeedLimit, double
  Info_MeRel[6], double *InLaneLCFlgOut, double PreInfo_MeRel[6], double *OpSts,
  double RoadInfo2[8], double *LCShutDwn2);
extern void OpSchedule_init(void);

#endif

/*
 * File trailer for OpSchedule.h
 *
 * [EOF]
 */
