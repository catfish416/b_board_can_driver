/*
 * File: ElementaryPosCalInterSection.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef ELEMENTARYPOSCALINTERSECTION_H
#define ELEMENTARYPOSCALINTERSECTION_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void ElementaryPosCalInterSection(const double Info_Me[6], double V_tar,
  double c_Delta, double c_Arclength, double T_long, double PathPlanRes, double
  c_x_in, double c_y_in, double c_angle_in, double c_x_out, double c_y_out,
  double c_angle_out, double b_CurOp, const double PGCdInfo[3], double
  GCdInfo_Me[6], double *GCdxposition, double *GCdyposition, double *GCdAx,
  double *GCdAy, double *GCdVx, double *GCdVy, double *GCdTheta, double
  *GCdxpositionNex, double *GCdypositionNex, double *PreTimeAcu, double
  *PathTrjFinishFlg);
extern void PrePointCalEn_not_empty_init(void);
extern void c_CordTransferBackInterSection_(void);

#endif

/*
 * File trailer for ElementaryPosCalInterSection.h
 *
 * [EOF]
 */
