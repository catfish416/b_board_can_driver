/*
 * File: PosUpdateLC.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef POSUPDATELC_H
#define POSUPDATELC_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void PInLaneLCTrans_not_empty_init(void);
extern void PointCalEn_not_empty_init(void);
extern void PosUpdateLC(const double xoptres[3], double c_x_in, double c_y_in,
  double c_angle_in, double c_y_out, double c_angle_out, double Info_Me[6],
  double PreTime, double PathPlanRes, double ToLeftOrRight, const double
  PreInfo_Me[6], double LCTransEn, double LCEnSts, double *PreTimeAcu, double
  *xpositionPre, double *ypositionPre, double *Ax, double *Ay, double *Vx,
  double *Vy, double *Theta, double *xpositionNex, double *ypositionNex, double *
  PathPlanSucFlg, double *PathTrjFinishFlg, double *LCInTransState);
extern void b_PrePointCalEn_not_empty_init(void);

#endif

/*
 * File trailer for PosUpdateLC.h
 *
 * [EOF]
 */
