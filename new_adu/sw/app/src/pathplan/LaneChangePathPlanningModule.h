/*
 * File: LaneChangePathPlanningModule.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef LANECHANGEPATHPLANNINGMODULE_H
#define LANECHANGEPATHPLANNINGMODULE_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void LaneChangePathPlanningModule(const double Info_Me[6], const double
  RoadInfo[8], const double Info_Fd[6], const double Info_Fo[6], const double
  Info_Ld[6], const double Info_Lo[6], double LongDisLimit, double ToLeftOrRight,
  double b_CurOp, double InLaneLCFlg, double SpeedLimit, const double
  PreInfo_Me[6], double LCEnbSts, double VsPathPlan_h_position[4], double
  VsPathPlan_h_Motion[4], double *PathPlanningSuccessFlg, double *TargetThetalo,
  double *PreViewTime, double *PathTrigFinishFlg, double *LCTrans, double
  *LCStartFlg);
extern void c_LaneChangePathPlanningModule_(void);

#endif

/*
 * File trailer for LaneChangePathPlanningModule.h
 *
 * [EOF]
 */
