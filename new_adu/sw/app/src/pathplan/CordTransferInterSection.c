/*
 * File: CordTransferInterSection.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "CordTransferInterSection.h"

/* Variable Definitions */
static double b_CurOpTemp;
static double b_PGCXorig;
static double b_PGCYorig;
static double b_PGCThetaorig;

/* Function Definitions */

/*
 * RoadInfo(1,1) = Info_Me(1);RoadInfo(1,2) = Info_Me(2);RoadInfo(1,3) = Info_Me(6);RoadInfo(1,4) = EgoLaneInfo(2);
 * Arguments    : const double Info_LdGCd[6]
 *                const double Info_FdGCd[6]
 *                const double Info_MeGCd[6]
 *                double CurOpGCd
 *                double x_inGCd
 *                double y_inGCd
 *                double angle_inGCd
 *                double x_outGCd
 *                double y_outGCd
 *                double angle_outGCd
 *                double W_inGCd
 *                double W_outGCd
 *                const double TargetPosInfo[2]
 *                double TrigFlgIn
 *                double Info_LdPGCd[6]
 *                double Info_FdPGCd[6]
 *                double Info_MePGCd[6]
 *                double *x_inPGCd
 *                double *y_inPGCd
 *                double *angle_inPGCd
 *                double *x_outPGCd
 *                double *y_outPGCd
 *                double *angle_outPGCd
 *                double *TrigFlgOut
 *                double *CurOpPGCd
 *                double PGCdInfo[3]
 *                double *W_inPGCd
 *                double *W_outPGCd
 * Return Type  : void
 */
void CordTransferInterSection(const double Info_LdGCd[6], const double
  Info_FdGCd[6], const double Info_MeGCd[6], double CurOpGCd, double x_inGCd,
  double y_inGCd, double angle_inGCd, double x_outGCd, double y_outGCd, double
  angle_outGCd, double W_inGCd, double W_outGCd, const double TargetPosInfo[2],
  double TrigFlgIn, double Info_LdPGCd[6], double Info_FdPGCd[6], double
  Info_MePGCd[6], double *x_inPGCd, double *y_inPGCd, double *angle_inPGCd,
  double *x_outPGCd, double *y_outPGCd, double *angle_outPGCd, double
  *TrigFlgOut, double *CurOpPGCd, double PGCdInfo[3], double *W_inPGCd, double
  *W_outPGCd)
{
  int i5;
  for (i5 = 0; i5 < 3; i5++) {
    PGCdInfo[i5] = 0.0;
  }

  *CurOpPGCd = CurOpGCd;
  *TrigFlgOut = TrigFlgIn;
  if (fabs(b_CurOpTemp - CurOpGCd) > 0.1) {
    b_CurOpTemp = CurOpGCd;
    if ((fabs(CurOpGCd - 2.0) < 0.1) || (fabs(CurOpGCd - 1.0) < 0.1)) {
      b_PGCXorig = Info_MeGCd[0];
      b_PGCYorig = Info_MeGCd[1];
      b_PGCThetaorig = Info_MeGCd[5];
    }
  }

  for (i5 = 0; i5 < 6; i5++) {
    Info_MePGCd[i5] = Info_MeGCd[i5];
    Info_FdPGCd[i5] = Info_FdGCd[i5];
    Info_LdPGCd[i5] = Info_LdGCd[i5];
  }

  *x_inPGCd = x_inGCd;
  *y_inPGCd = y_inGCd;
  *angle_inPGCd = angle_inGCd;
  *x_outPGCd = x_outGCd;
  *y_outPGCd = y_outGCd;
  *angle_outPGCd = angle_outGCd;
  *W_inPGCd = W_inGCd;
  *W_outPGCd = W_outGCd;

  /*  Transform only when there is an operation */
  if ((fabs(CurOpGCd - 2.0) < 0.1) || (fabs(CurOpGCd - 1.0) < 0.1)) {
    Info_MePGCd[0] = (Info_MeGCd[0] - b_PGCXorig) * cos(b_PGCThetaorig) +
      (Info_MeGCd[1] - b_PGCYorig) * sin(b_PGCThetaorig);
    Info_MePGCd[1] = (Info_MeGCd[1] - b_PGCYorig) * cos(b_PGCThetaorig) -
      (Info_MeGCd[0] - b_PGCXorig) * sin(b_PGCThetaorig);
    Info_FdPGCd[0] = (Info_FdGCd[0] - b_PGCXorig) * cos(b_PGCThetaorig) +
      (Info_FdGCd[1] - b_PGCYorig) * sin(b_PGCThetaorig);
    Info_FdPGCd[1] = (Info_FdGCd[1] - b_PGCYorig) * cos(b_PGCThetaorig) -
      (Info_FdGCd[0] - b_PGCXorig) * sin(b_PGCThetaorig);
    Info_LdPGCd[0] = (Info_LdGCd[0] - b_PGCXorig) * cos(b_PGCThetaorig) +
      (Info_LdGCd[1] - b_PGCYorig) * sin(b_PGCThetaorig);
    Info_LdPGCd[1] = (Info_LdGCd[1] - b_PGCYorig) * cos(b_PGCThetaorig) -
      (Info_LdGCd[0] - b_PGCXorig) * sin(b_PGCThetaorig);
    *x_inPGCd = 0.0;
    *y_inPGCd = 0.0;
    *x_outPGCd = (TargetPosInfo[0] - b_PGCXorig) * cos(b_PGCThetaorig) +
      (TargetPosInfo[1] - b_PGCYorig) * sin(b_PGCThetaorig);
    *y_outPGCd = (TargetPosInfo[1] - b_PGCYorig) * cos(b_PGCThetaorig) -
      (TargetPosInfo[0] - b_PGCXorig) * sin(b_PGCThetaorig);
    *angle_outPGCd = angle_outGCd - b_PGCThetaorig;
    *angle_inPGCd = angle_inGCd - b_PGCThetaorig;

    /* Angle Rot */
    Info_MePGCd[5] = Info_MeGCd[5] - b_PGCThetaorig;
    Info_FdPGCd[5] = Info_FdGCd[5] - b_PGCThetaorig;
    Info_LdPGCd[5] = Info_LdGCd[5] - b_PGCThetaorig;
    PGCdInfo[0] = b_PGCXorig;
    PGCdInfo[1] = b_PGCYorig;
    PGCdInfo[2] = b_PGCThetaorig;
  } else {
    b_PGCXorig = 0.0;
    b_PGCYorig = 0.0;
    b_PGCThetaorig = 0.0;
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void CordTransferInterSection_init(void)
{
  b_CurOpTemp = 0.0;
  b_PGCXorig = 0.0;
  b_PGCYorig = 0.0;
  b_PGCThetaorig = 0.0;
}

/*
 * File trailer for CordTransferInterSection.c
 *
 * [EOF]
 */
