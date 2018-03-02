/*
 * File: TransPathPlan.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef TRANSPATHPLAN_H
#define TRANSPATHPLAN_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void TransPathPlan(double CurActiveModel, const double TarPosInfo[2],
  const double Info_Me[6], double StopReqFlg, double V_tarOut, double
  c_angle_out, double *xposition, double *yposition, double *Ax, double *Ay,
  double *Vx, double *Vy, double *Theta, double *xpositionNex, double
  *ypositionNex, double *Time2Cal);
extern void TransPathPlan_init(void);

#endif

/*
 * File trailer for TransPathPlan.h
 *
 * [EOF]
 */
