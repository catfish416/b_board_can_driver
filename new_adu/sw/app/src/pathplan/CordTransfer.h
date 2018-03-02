/*
 * File: CordTransfer.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef CORDTRANSFER_H
#define CORDTRANSFER_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void CordTransfer_init(void);
extern void b_CordTransfer(const double Info_MeGCd[6], const double Info_FdGCd[6],
  const double Info_FoGCd[6], const double Info_LdGCd[6], const double
  Info_LoGCd[6], double CurOpGCd, double LongDisLimitGCd, const double
  RoadInfoGCd[8], double Info_MePGCd[6], double RoadInfoPGCd[8], double
  Info_FdPGCd[6], double Info_FoPGCd[6], double Info_LdPGCd[6], double
  Info_LoPGCd[6], double *LongDisLimitPGCd, double *ToLeftLC, double *LCOPCntOut,
  double *CurOpPGCd, double PGCdInfo[3], double *InLaneLCFlg);

#endif

/*
 * File trailer for CordTransfer.h
 *
 * [EOF]
 */
