/*
 * File: PathCreatorInterSection.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef PATHCREATORINTERSECTION_H
#define PATHCREATORINTERSECTION_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void PathCreatorInterSection(const double Info_Ld[6], const double
  Info_Fd[6], const double Info_Me[6], double c_x_in, double c_y_in, double
  c_angle_in, double c_x_out, double c_y_out, double c_angle_out, double TrigFlg,
  double CurOP, double SpeedLimitIn, double PathFinishFlg, double TimeLimit,
  double *xoptres, double *Deltaout, double *Arclengthout, double *T_long,
  double *c_T_lat, double *PlanRes, double *KurMax, double *IterGoldenStep,
  double *PathPlanRetryFlg);
extern void PreGlbVal_init(void);
extern void Pxoptres_not_empty_init(void);

#endif

/*
 * File trailer for PathCreatorInterSection.h
 *
 * [EOF]
 */
