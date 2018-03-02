/*
 * File: UpdateSideObjRes.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "UpdateSideObjRes.h"

/* Variable Definitions */
static double EnterZoneDebounceCnt;

/* Function Declarations */
static void DisCal2Lane(double LaneAng, double x1, double b_y1, double xobj,
  double yobj, double *Dis, double *Dir);

/* Function Definitions */

/*
 * A*x + B*y + C
 * d = -----------------
 *       sqrt(A^2 + B^2)
 *
 * Dir Front 1 Rear 0 Left 1 Right 0
 * example 11 FL 10 FR 1 RL 0 RR
 * Xdirection Front and Rear Ydirection Left and Right
 * Arguments    : double LaneAng
 *                double x1
 *                double b_y1
 *                double xobj
 *                double yobj
 *                double *Dis
 *                double *Dir
 * Return Type  : void
 */
static void DisCal2Lane(double LaneAng, double x1, double b_y1, double xobj,
  double yobj, double *Dis, double *Dir)
{
  int exitg1;
  double K;
  double C;
  double B;
  do {
    exitg1 = 0;
    while (LaneAng < -3.1415926535897931) {
      LaneAng += 6.2831853071795862;
    }

    if (LaneAng > 3.1415926535897931) {
      LaneAng -= 6.2831853071795862;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (LaneAng > 1.5707963267948966) {
    LaneAng -= 3.1415926535897931;
  } else {
    if (LaneAng < -1.5707963267948966) {
      LaneAng += 3.1415926535897931;
    }
  }

  /* Convert LaneAng to -pi/2 - pi/2     */
  if (fabs(sin(LaneAng)) > 1.414) {
    C = 1.0 / tan(LaneAng);
    K = 1.0;
    B = -C;
    C = C * b_y1 - x1;
  } else {
    K = tan(LaneAng);
    B = -1.0;
    C = b_y1 - K * x1;
  }

  *Dis = ((K * xobj + B * yobj) + C) / sqrt(K * K + B * B);

  /* Left or Right */
  if (fabs(K) < fabs(B)) {
    *Dir = !(B * *Dis > 0.0);
  } else if (K * *Dis > 0.0) {
    /* Right */
    *Dir = 1.0;
  } else {
    /* Left */
    *Dir = 0.0;
  }

  *Dis = fabs(*Dis);
}

/*
 * Arguments    : double Curoperation
 *                const double FusData[3302]
 *                const double RoadInfo[8]
 *                double UseFakeCIPVEn
 *                double *TimeLimit
 *                double *EnterZoneEnFlg
 * Return Type  : void
 */
void UpdateSideObjRes(double Curoperation, const double FusData[3302], const
                      double RoadInfo[8], double UseFakeCIPVEn, double
                      *TimeLimit, double *EnterZoneEnFlg)
{
  double Time2Enter;
  int EnterZoneEn;
  int i;
  int InRangeFlgTar;
  double Dis;
  double Dir;
  int InColidZone;
  double Dis2Ego;
  double Dir2Ego;
  double Dis2End;
  double Dir2End;
  Time2Enter = 255.0;
  EnterZoneEn = 0;
  *TimeLimit = 255.0;
  if (fabs(Curoperation - 1.0) < 0.5) {
    if (UseFakeCIPVEn > 0.5) {
      Time2Enter = 200.0;
    } else {
      i = 0;
      while ((i < 127) && (!(FusData[i] < 0.5))) {
        InRangeFlgTar = 0;

        /*  Target Lane Range */
        DisCal2Lane(RoadInfo[5], RoadInfo[1], RoadInfo[3], FusData[127 + i],
                    FusData[381 + i], &Dis, &Dir);
        if (Dir > 0.5) {
          /* Right Range */
          if (!(Dis > 2.0)) {
            InRangeFlgTar = 1;
          }
        } else {
          /* Left Range */
          if (!(Dis > 4.0)) {
            InRangeFlgTar = 1;
          }
        }

        Dis = 0.0;
        Dir = 255.0;
        InColidZone = 0;
        if (InRangeFlgTar > 0.5) {
          /*  Ego Lane Range */
          /*  Treat as a straight lane */
          DisCal2Lane(0.0, 0.0, 0.0, FusData[127 + i], FusData[381 + i],
                      &Dis2Ego, &Dir2Ego);
          DisCal2Lane(RoadInfo[5] + 1.5707963267948966, RoadInfo[1], RoadInfo[3],
                      FusData[127 + i], FusData[381 + i], &Dis2End, &Dir2End);
          if ((sin(RoadInfo[5]) >= 0.0) > 0.5) {
            /* EgoRight */
            if ((Dir2Ego > 0.5) && (Dis2Ego > 1.1)) {
              /* Out of Range */
              /* if direction is reverse or static then remove */
              /* else */
              if (!(FusData[508 + i] <= 0.0)) {
                InColidZone = 1;

                /* Calculate time to Enter */
                Dir = (Dis2Ego - 1.1) / FusData[508 + i];

                /* Calculate time to Exit */
                Dis = Dis2End / FusData[508 + i];
              } else {
                /* ReverseOrStatic */
              }
            } else {
              /* EgoLeft */
              /* In Zone */
              if (Dir2End > 0.5) {
                InColidZone = 2;

                /* Calculate time to Exit Zone */
                Dir = 0.0;
                if (FusData[508 + i] > 0.0) {
                  Dis = Dis2End / FusData[508 + i];
                } else if (FusData[508 + i] < 0.0) {
                  Dis = -(Dis2Ego + 1.1) / FusData[508 + i];
                } else {
                  Dis = 255.0;
                }
              } else {
                /* if direction is reverse or static then remove */
                /* else */
                /* Calculate time to Enter */
                if (!(FusData[508 + i] >= 0.0)) {
                  InColidZone = 1;

                  /* Calculate time to Enter */
                  Dir = -Dis2End / FusData[508 + i];

                  /* Calculate time to Exit */
                  Dis = -(Dis2Ego + 1.1) / FusData[508 + i];
                } else {
                  /* ReverseOrStatic                     */
                }
              }
            }
          } else {
            /* EgoLeft */
            if ((Dir2Ego < 0.5) && (Dis2Ego > 1.1)) {
              /* Out of Range */
              /* if direction is reverse or static then remove */
              /* else */
              if (!(FusData[508 + i] >= 0.0)) {
                InColidZone = 1;

                /* Calculate time to Enter */
                Dir = -(Dis2Ego - 1.1) / FusData[508 + i];

                /* Calculate time to Exit */
                Dis = -Dis2End / FusData[508 + i];
              } else {
                /* ReverseOrStatic */
              }
            } else {
              /* EgoRight */
              /* In Zone */
              if (Dir2End < 0.5) {
                InColidZone = 2;

                /* Calculate time to Exit Zone */
                Dir = 0.0;
                if (FusData[508 + i] > 0.0) {
                  Dis = (Dis2Ego + 1.1) / FusData[508 + i];
                } else if (FusData[508 + i] < 0.0) {
                  Dis = -Dis2End / FusData[508 + i];
                } else {
                  Dis = 255.0;
                }
              } else {
                /* if direction is reverse or static then remove */
                /* else */
                /* Calculate time to Enter */
                if (!(FusData[508 + i] <= 0.0)) {
                  InColidZone = 1;

                  /* Calculate time to Enter */
                  Dir = Dis2End / FusData[508 + i];

                  /* Calculate time to Exit */
                  Dis = (Dis2Ego + 1.1) / FusData[508 + i];
                } else {
                  /* ReverseOrStatic                     */
                }
              }
            }
          }
        }

        if ((InColidZone > 0.5) && (InColidZone < 1.5)) {
          if (Dir < Time2Enter) {
            Time2Enter = Dir;
          }
        } else {
          if ((InColidZone > 1.5) && (!(Dis < 10.0)) && (Dir < Time2Enter)) {
            Time2Enter = Dir;
          }
        }

        i++;
      }
    }

    /*  Time2ExitEgo <= Time2EnterObj || Time2EnterEgo >= Time2ExitObj */
    if (Time2Enter > 20.0) {
      /*  TimeLimit of Ego Exit is Time2Enter */
      *TimeLimit = Time2Enter;
      EnterZoneEn = 1;
    }

    if (EnterZoneEn < 0.5) {
      EnterZoneDebounceCnt = 300.0;
      *EnterZoneEnFlg = 0.0;
    } else if ((EnterZoneDebounceCnt < 1.0) || (UseFakeCIPVEn > 0.5)) {
      *EnterZoneEnFlg = 1.0;
    } else {
      *EnterZoneEnFlg = 0.0;
      EnterZoneDebounceCnt--;
    }
  } else {
    EnterZoneDebounceCnt = 0.0;
    *EnterZoneEnFlg = 1.0;
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void UpdateSideObjRes_init(void)
{
  EnterZoneDebounceCnt = 0.0;
}

/*
 * File trailer for UpdateSideObjRes.c
 *
 * [EOF]
 */
