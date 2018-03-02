/*
 * File: UpdateSideObjRes.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef UPDATESIDEOBJRES_H
#define UPDATESIDEOBJRES_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void UpdateSideObjRes(double Curoperation, const double FusData[3302],
  const double RoadInfo[8], double UseFakeCIPVEn, double *TimeLimit, double
  *EnterZoneEnFlg);
extern void UpdateSideObjRes_init(void);

#endif

/*
 * File trailer for UpdateSideObjRes.h
 *
 * [EOF]
 */
