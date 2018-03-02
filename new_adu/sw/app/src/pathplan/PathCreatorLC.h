/*
 * File: PathCreatorLC.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef PATHCREATORLC_H
#define PATHCREATORLC_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void FinishFlg_not_empty_init(void);
extern void PathCreatorLC(const double Info_FdIn[6], const double Info_FoIn[6],
  const double Info_LdIn[6], const double Info_LoIn[6], const double Info_MeIn[6],
  double x_inIn, double y_inIn, double angle_inIn, double y_outIn, double
  angle_outIn, double x_outIn, double TrigFlg, double X_melimit_In, double
  PathFinishFlg, double SpeedLimitIn, double b_CurOp, double xoptres[3], double *
  PlanRes, double *KurMax, double *IterGoldenStep, double *IterQpStep, double
  *IterSQPStep, double *PathPlanRetryFlg);
extern void Px1_not_empty_init(void);
extern void SQPCal_free(void);
extern void SQPCal_init(void);
extern void TrigCnt_not_empty_init(void);
extern void b_PreGlbVal_init(void);

#endif

/*
 * File trailer for PathCreatorLC.h
 *
 * [EOF]
 */
