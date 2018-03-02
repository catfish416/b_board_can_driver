/*
 * File: InterSectionPathPlanningModule.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef INTERSECTIONPATHPLANNINGMODULE_H
#define INTERSECTIONPATHPLANNINGMODULE_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void InterSectionPathPlanningModule(double TimeLimit, double EnterZoneflg,
  const double Info_Me[6], const double RoadInfo[8], double b_CurOp, const
  double Info_Ld[6], const double Info_Fd[6], double SpeedLimit, double
  VsPathPlan_h_position[4], double VsPathPlan_h_Motion[4], double
  *PathPlanningSuccessFlg, double *TargetThetalo, double *PreViewTime, double
  *PathTrigFinishFlg);
extern void c_InterSectionPathPlanningModul(void);

#endif

/*
 * File trailer for InterSectionPathPlanningModule.h
 *
 * [EOF]
 */
