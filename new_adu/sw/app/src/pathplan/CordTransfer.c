/*
 * File: CordTransfer.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "CordTransfer.h"

/* Variable Definitions */
static double CurOpTemp;
static double PGCXorig;
static double PGCYorig;
static double PGCThetaorig;
static double PRoadInfoPGCd[8];
static double LCCnt;

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void CordTransfer_init(void)
{
  CurOpTemp = 0.0;
  LCCnt = 0.0;
  PGCXorig = 0.0;
  PGCYorig = 0.0;
  PGCThetaorig = 0.0;
  memset(&PRoadInfoPGCd[0], 0, sizeof(double) << 3);
}

/*
 * RoadInfo(1,1) = Info_Me(1);RoadInfo(1,2) = Info_Me(2);RoadInfo(1,3) = Info_Me(6);RoadInfo(1,4) = EgoLaneInfo(2);
 *  1 to next lane 0 to avoid front vehicle Chg2NextLane
 * Arguments    : const double Info_MeGCd[6]
 *                const double Info_FdGCd[6]
 *                const double Info_FoGCd[6]
 *                const double Info_LdGCd[6]
 *                const double Info_LoGCd[6]
 *                double CurOpGCd
 *                double LongDisLimitGCd
 *                const double RoadInfoGCd[8]
 *                double Info_MePGCd[6]
 *                double RoadInfoPGCd[8]
 *                double Info_FdPGCd[6]
 *                double Info_FoPGCd[6]
 *                double Info_LdPGCd[6]
 *                double Info_LoPGCd[6]
 *                double *LongDisLimitPGCd
 *                double *ToLeftLC
 *                double *LCOPCntOut
 *                double *CurOpPGCd
 *                double PGCdInfo[3]
 *                double *InLaneLCFlg
 * Return Type  : void
 */
void b_CordTransfer(const double Info_MeGCd[6], const double Info_FdGCd[6],
                    const double Info_FoGCd[6], const double Info_LdGCd[6],
                    const double Info_LoGCd[6], double CurOpGCd, double
                    LongDisLimitGCd, const double RoadInfoGCd[8], double
                    Info_MePGCd[6], double RoadInfoPGCd[8], double Info_FdPGCd[6],
                    double Info_FoPGCd[6], double Info_LdPGCd[6], double
                    Info_LoPGCd[6], double *LongDisLimitPGCd, double *ToLeftLC,
                    double *LCOPCntOut, double *CurOpPGCd, double PGCdInfo[3],
                    double *InLaneLCFlg)
{
  int i4;
  double AngleTemp;
  for (i4 = 0; i4 < 3; i4++) {
    PGCdInfo[i4] = 0.0;
  }

  *LongDisLimitPGCd = LongDisLimitGCd;
  *CurOpPGCd = CurOpGCd;
  *ToLeftLC = 0.0;
  *LCOPCntOut = 1.0;
  for (i4 = 0; i4 < 6; i4++) {
    Info_MePGCd[i4] = Info_MeGCd[i4];
  }

  memcpy(&RoadInfoPGCd[0], &RoadInfoGCd[0], sizeof(double) << 3);
  for (i4 = 0; i4 < 6; i4++) {
    Info_FdPGCd[i4] = Info_FdGCd[i4];
    Info_FoPGCd[i4] = Info_FoGCd[i4];
    Info_LdPGCd[i4] = Info_LdGCd[i4];
    Info_LoPGCd[i4] = Info_LoGCd[i4];
  }

  if ((fabs(CurOpTemp - CurOpGCd) > 0.1) || ((fabs(LCCnt - 1.0) > 0.1) && (fabs
        (CurOpGCd - 5.0) < 0.1))) {
    CurOpTemp = CurOpGCd;
    LCCnt = 1.0;
    if (CurOpGCd > 0.1) {
      PGCXorig = RoadInfoGCd[0];
      PGCYorig = RoadInfoGCd[2];
      PGCThetaorig = RoadInfoGCd[4];
      RoadInfoPGCd[0] = (RoadInfoGCd[0] - PGCXorig) * cos(PGCThetaorig) +
        (RoadInfoGCd[2] - PGCYorig) * sin(PGCThetaorig);
      RoadInfoPGCd[2] = (RoadInfoGCd[2] - PGCYorig) * cos(PGCThetaorig) -
        (RoadInfoGCd[0] - PGCXorig) * sin(PGCThetaorig);
      RoadInfoPGCd[1] = (RoadInfoGCd[1] - PGCXorig) * cos(PGCThetaorig) +
        (RoadInfoGCd[3] - PGCYorig) * sin(PGCThetaorig);
      RoadInfoPGCd[3] = (RoadInfoGCd[3] - PGCYorig) * cos(PGCThetaorig) -
        (RoadInfoGCd[1] - PGCXorig) * sin(PGCThetaorig);
      RoadInfoPGCd[4] = RoadInfoGCd[4] - PGCThetaorig;
      RoadInfoPGCd[5] = RoadInfoGCd[5] - PGCThetaorig;
      if (fabs(CurOpTemp - 5.0) < 0.1) {
        AngleTemp = RoadInfoPGCd[4];
        while ((AngleTemp < 0.0) || (AngleTemp >= 6.2831853071795862)) {
          if (AngleTemp < 0.0) {
            AngleTemp += 6.2831853071795862;
          }

          if (AngleTemp >= 6.2831853071795862) {
            AngleTemp -= 6.2831853071795862;
          }
        }

        RoadInfoPGCd[4] = AngleTemp;
        AngleTemp = RoadInfoPGCd[5];
        while ((AngleTemp < 0.0) || (AngleTemp >= 6.2831853071795862)) {
          if (AngleTemp < 0.0) {
            AngleTemp += 6.2831853071795862;
          }

          if (AngleTemp >= 6.2831853071795862) {
            AngleTemp -= 6.2831853071795862;
          }
        }

        RoadInfoPGCd[5] = AngleTemp;
        if (RoadInfoPGCd[3] - 0.0 * RoadInfoPGCd[1] * tan(AngleTemp) >
            RoadInfoPGCd[2]) {
          *ToLeftLC = 1.0;
        }
      } else {
        if (fabs(CurOpTemp - 1.0) < 0.1) {
          AngleTemp = RoadInfoPGCd[4];
          while ((AngleTemp <= -3.1415926535897931) || (AngleTemp >
                  3.1415926535897931)) {
            if (AngleTemp <= -3.1415926535897931) {
              AngleTemp += 6.2831853071795862;
            }

            if (AngleTemp > 3.1415926535897931) {
              AngleTemp -= 6.2831853071795862;
            }
          }

          RoadInfoPGCd[4] = AngleTemp;
          AngleTemp = RoadInfoPGCd[5];
          while ((AngleTemp <= -3.1415926535897931) || (AngleTemp >
                  3.1415926535897931)) {
            if (AngleTemp <= -3.1415926535897931) {
              AngleTemp += 6.2831853071795862;
            }

            if (AngleTemp > 3.1415926535897931) {
              AngleTemp -= 6.2831853071795862;
            }
          }

          RoadInfoPGCd[5] = AngleTemp;
          AngleTemp -= RoadInfoPGCd[4];
          while ((AngleTemp <= -3.1415926535897931) || (AngleTemp >
                  3.1415926535897931)) {
            if (AngleTemp <= -3.1415926535897931) {
              AngleTemp += 6.2831853071795862;
            }

            if (AngleTemp > 3.1415926535897931) {
              AngleTemp -= 6.2831853071795862;
            }
          }

          if (AngleTemp > 0.0) {
            *ToLeftLC = 1.0;
          }
        }
      }
    }

    memcpy(&PRoadInfoPGCd[0], &RoadInfoPGCd[0], sizeof(double) << 3);
  }

  *InLaneLCFlg = 0.0;

  /*  Transform only when there is an operation */
  if (CurOpGCd > 0.1) {
    /*      theta_rot = angle_in; */
    /*      x_outRot = (x_out - x_in)*cos(theta_rot) + (y_out - y_in)*sin(theta_rot); */
    /*      y_outRot = (y_out - y_in)*cos(theta_rot) - (x_out - x_in)*sin(theta_rot);     */
    /*  X Y Rot and Move */
    Info_MePGCd[0] = (Info_MeGCd[0] - PGCXorig) * cos(PGCThetaorig) +
      (Info_MeGCd[1] - PGCYorig) * sin(PGCThetaorig);
    Info_MePGCd[1] = (Info_MeGCd[1] - PGCYorig) * cos(PGCThetaorig) -
      (Info_MeGCd[0] - PGCXorig) * sin(PGCThetaorig);
    Info_FdPGCd[0] = (Info_FdGCd[0] - PGCXorig) * cos(PGCThetaorig) +
      (Info_FdGCd[1] - PGCYorig) * sin(PGCThetaorig);
    Info_FdPGCd[1] = (Info_FdGCd[1] - PGCYorig) * cos(PGCThetaorig) -
      (Info_FdGCd[0] - PGCXorig) * sin(PGCThetaorig);
    Info_FoPGCd[0] = (-65535.0 - PGCXorig) * cos(PGCThetaorig) + (Info_FoGCd[1]
      - PGCYorig) * sin(PGCThetaorig);
    Info_FoPGCd[1] = (Info_FoGCd[1] - PGCYorig) * cos(PGCThetaorig) - (-65535.0
      - PGCXorig) * sin(PGCThetaorig);
    Info_LdPGCd[0] = (Info_LdGCd[0] - PGCXorig) * cos(PGCThetaorig) +
      (Info_LdGCd[1] - PGCYorig) * sin(PGCThetaorig);
    Info_LdPGCd[1] = (Info_LdGCd[1] - PGCYorig) * cos(PGCThetaorig) -
      (Info_LdGCd[0] - PGCXorig) * sin(PGCThetaorig);
    Info_LoPGCd[0] = (Info_LoGCd[0] - PGCXorig) * cos(PGCThetaorig) +
      (Info_LoGCd[1] - PGCYorig) * sin(PGCThetaorig);
    Info_LoPGCd[1] = (Info_LoGCd[1] - PGCYorig) * cos(PGCThetaorig) -
      (Info_LoGCd[0] - PGCXorig) * sin(PGCThetaorig);

    /* Angle Rot */
    Info_MePGCd[5] = Info_MeGCd[5] - PGCThetaorig;
    Info_FdPGCd[5] = Info_FdGCd[5] - PGCThetaorig;
    Info_FoPGCd[5] = Info_FoGCd[5] - PGCThetaorig;
    Info_LdPGCd[5] = Info_LdGCd[5] - PGCThetaorig;
    Info_LoPGCd[5] = Info_LoGCd[5] - PGCThetaorig;
    PGCdInfo[0] = PGCXorig;
    PGCdInfo[1] = PGCYorig;
    PGCdInfo[2] = PGCThetaorig;
    memcpy(&RoadInfoPGCd[0], &PRoadInfoPGCd[0], sizeof(double) << 3);
    if (fabs(CurOpTemp - 5.0) < 0.1) {
      *ToLeftLC = (PRoadInfoPGCd[3] - 0.0 * PRoadInfoPGCd[1] * tan
                   (PRoadInfoPGCd[5]) > PRoadInfoPGCd[2]);
    } else {
      if (fabs(CurOpTemp - 1.0) < 0.1) {
        AngleTemp = PRoadInfoPGCd[5] - PRoadInfoPGCd[4];
        while ((AngleTemp <= -3.1415926535897931) || (AngleTemp >
                3.1415926535897931)) {
          if (AngleTemp <= -3.1415926535897931) {
            AngleTemp += 6.2831853071795862;
          }

          if (AngleTemp > 3.1415926535897931) {
            AngleTemp -= 6.2831853071795862;
          }
        }

        *ToLeftLC = (AngleTemp > 0.0);
      }
    }
  } else {
    PGCXorig = 0.0;
    PGCYorig = 0.0;
    PGCThetaorig = 0.0;
  }
}

/*
 * File trailer for CordTransfer.c
 *
 * [EOF]
 */
