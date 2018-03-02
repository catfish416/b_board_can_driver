/*
 * File: XinExtractFunc.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef XINEXTRACTFUNC_H
#define XINEXTRACTFUNC_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void PTurnTrigFlg_not_empty_init(void);
extern void XinExtractFunc(double CurOPPP, double TrigFlg, double c_x_in, double
  c_y_in, double c_angle_in, double c_x_out, double c_y_out, double c_angle_out,
  double W_in, double W_out, const double Info_Me[6], double EnterZoneFlg,
  double PathPlanRetryFlg, double *PathFinishFlg, double *TrunTrigFlg, double
  *x_inStartTPoint, double *y_inStartTPoint, double *x_outEndTPoint, double
  *y_outEndTPoint, double *CurActiveModel, double RoadInfoPGCd[8], double
  TarPosInfo[2], double *PathPlanningSuccessFlg);

#endif

/*
 * File trailer for XinExtractFunc.h
 *
 * [EOF]
 */
