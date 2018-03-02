/*
 * File: CordTransferInterSection.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef CORDTRANSFERINTERSECTION_H
#define CORDTRANSFERINTERSECTION_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void CordTransferInterSection(const double Info_LdGCd[6], const double
  Info_FdGCd[6], const double Info_MeGCd[6], double CurOpGCd, double x_inGCd,
  double y_inGCd, double angle_inGCd, double x_outGCd, double y_outGCd, double
  angle_outGCd, double W_inGCd, double W_outGCd, const double TargetPosInfo[2],
  double TrigFlgIn, double Info_LdPGCd[6], double Info_FdPGCd[6], double
  Info_MePGCd[6], double *x_inPGCd, double *y_inPGCd, double *angle_inPGCd,
  double *x_outPGCd, double *y_outPGCd, double *angle_outPGCd, double
  *TrigFlgOut, double *CurOpPGCd, double PGCdInfo[3], double *W_inPGCd, double
  *W_outPGCd);
extern void CordTransferInterSection_init(void);

#endif

/*
 * File trailer for CordTransferInterSection.h
 *
 * [EOF]
 */
