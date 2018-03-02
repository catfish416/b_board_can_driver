/*
 * File: OperAndObjSelector.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef OPERANDOBJSELECTOR_H
#define OPERANDOBJSELECTOR_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void OperAndObjSelector(double PPEn, double OperationFinishFlg, const
  double Veh_State[8], const double FusData[3302], const double Lane_NumInfo[3],
  const double Line_ShapeInfo[100], const double Navi_InfoTurn[28], const double
  End[4], double DisEngFlg, double LCStartFlg, double TrigStart, double
  TrnShutDwn, double LCShutDwn, double UseFakeCIPVEn, double *TimeLimit, double *
  EnterZoneEnFlg, double Info_Me[6], double Info_Fd[6], double Info_Fo[6],
  double Info_Ld[6], double Info_Lo[6], double *OperationLongDislimit, double
  RoadInfo[8], double *Curoperation, double *InLaneLCFlg, double *SpeedLimit,
  double PreInfo_Me[6], double *LCEnbSts, double *MonitorSts, double
  CurRoadInfo[8]);
extern void OperAndObjSelector_init(void);

#endif

/*
 * File trailer for OperAndObjSelector.h
 *
 * [EOF]
 */
