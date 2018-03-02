/*
 * File: ObjSelectDebugVersion.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "ObjSelectDebugVersion.h"
#include "OpSchedule.h"
#include "DebugMain_rtwutil.h"

/* Variable Definitions */
static double DebounceCnt;

/* Function Declarations */
static double FusIndSeletFdLd(double ToLeft, double TargetPosition, const double
  Info_Lo[6], const double FusData[3302], double LineAng, double CalDis, double
  Type, const double Veh_State[8]);
static void FusIndSeletLo(const double FusData[3302], double LineAng, const
  double Veh_State[8], double UseFakeCIPVEn, double *ObjIndex, double Info_Lo[6],
  double *FobDir);
static void LCLateralSpaceCheck(double Direction, const double Line_ShapeInfo
  [100], const double Lane_NumInfo[3], double Info_Lo[6], double BranchNum,
  double FobDir, double *TargetPosition, double *LCSpaceEnough, double
  *InLaneLCFlg);
static double LaneFuncCal(const double Line_ShapeInfo[100], double CalLineNum,
  double CalDis);
static void LdFdObjSearch(double Direction, double TargetPosition, const double
  Info_Me[7], const double FusData[3302], const double Veh_State[8], const
  double Info_Lo[6], const double Line_ShapeInfo[100], double EgoLane_IndexIn,
  double Info_Ld[6], double Info_Fd[6], double *ObjTrig, double *InbetweenFlg);
static void ObjInfoMaker(double ObjIndex, const double Object_Info[3302], const
  double Veh_State[8], double Type, double ObjInfo[6]);

/* Function Definitions */

/*
 * ToLeft
 *      1    Left
 *      0    Right
 *      Type
 *      1    Info_Lo = [65535,65535,65535,1.5,2.5,Veh_State(3)];
 *      2    Info_Fo = [-65535,-65535,65535,1.5,2.5,Veh_State(3)];
 *      3    Info_Fd = [-65535,-65535,65535,1.5,2.5,Veh_State(3)];
 *      4    Info_Ld = [65535,65535,65535,1.5,2.5,Veh_State(3)];
 * Arguments    : double ToLeft
 *                double TargetPosition
 *                const double Info_Lo[6]
 *                const double FusData[3302]
 *                double LineAng
 *                double CalDis
 *                double Type
 *                const double Veh_State[8]
 * Return Type  : double
 */
static double FusIndSeletFdLd(double ToLeft, double TargetPosition, const double
  Info_Lo[6], const double FusData[3302], double LineAng, double CalDis, double
  Type, const double Veh_State[8])
{
  int IndTemp;
  double AbsDis;
  int k;
  double Info_Temp[6];
  double YoffsetTmp;
  IndTemp = 128;
  AbsDis = 255.0;

  /*  Search for ld and fd */
  k = 1;
  while (!((k > 127) || (FusData[k - 1] < 0.5))) {
    ObjInfoMaker(k, FusData, Veh_State, Type, Info_Temp);

    /*   when cal Ld, x must > 0, when cal fd, x must < 0 */
    if (((fabs(Type - 3.0) < 0.5) && (FusData[k + 126] > 0.0)) || ((fabs(Type -
           4.0) < 0.5) && (FusData[k + 126] <= 0.0))) {
    } else {
      YoffsetTmp = (Info_Temp[0] - CalDis) * tan(LineAng);
      if (ToLeft > 0.5) {
        if ((Info_Temp[1] - YoffsetTmp < (TargetPosition + (Info_Temp[4] + 1.9) /
              2.0) + 1.7999999999999998) && (Info_Temp[1] - YoffsetTmp >
             (Info_Lo[1] + (Info_Temp[4] + Info_Lo[4]) / 2.0) + 0.6) && (fabs
             (Info_Temp[0]) < AbsDis)) {
          AbsDis = fabs(Info_Temp[0]);
          IndTemp = k;
        }
      } else {
        if ((Info_Temp[1] - YoffsetTmp < (Info_Lo[1] - (Info_Temp[4] + Info_Lo[4])
              / 2.0) - 0.6) && (Info_Temp[1] - YoffsetTmp > (TargetPosition -
              (Info_Temp[4] + 1.9) / 2.0) - 1.7999999999999998) && (fabs
             (Info_Temp[0]) < AbsDis)) {
          AbsDis = fabs(Info_Temp[0]);
          IndTemp = k;
        }
      }
    }

    k++;
  }

  return IndTemp;
}

/*
 * Arguments    : const double FusData[3302]
 *                double LineAng
 *                const double Veh_State[8]
 *                double UseFakeCIPVEn
 *                double *ObjIndex
 *                double Info_Lo[6]
 *                double *FobDir
 * Return Type  : void
 */
static void FusIndSeletLo(const double FusData[3302], double LineAng, const
  double Veh_State[8], double UseFakeCIPVEn, double *ObjIndex, double Info_Lo[6],
  double *FobDir)
{
  int IndTemp;
  double Info_LoPre[6];
  int ixstart;
  int FobPre;
  static const unsigned char uv0[6] = { MAX_uint8_T, 0U, MAX_uint8_T, 0U, 0U, 0U
  };

  int k;
  double varargin_1_idx_0;
  double varargin_1_idx_1;
  double mtmp;
  int ix;
  boolean_T exitg2;
  boolean_T exitg4;
  boolean_T exitg1;
  boolean_T exitg3;
  IndTemp = 128;
  for (ixstart = 0; ixstart < 6; ixstart++) {
    Info_LoPre[ixstart] = uv0[ixstart];
  }

  FobPre = 3;
  k = 0;
  while (!((k + 1 > 127) || (FusData[k] < 0.5) || (UseFakeCIPVEn > 0.5))) {
    ObjInfoMaker(k + 1, FusData, Veh_State, 1.0, Info_Lo);
    if ((Info_Lo[0] < 100.0) && (Info_Lo[0] > 5.0)) {
      Info_Lo[1] -= Info_Lo[0] * tan(LineAng);
      if (fabs(Info_Lo[1]) < (0.95 + Info_Lo[4] / 2.0) + 1.0) {
        /*  Enlarge previous obj and find fobdir  */
        if (Info_Lo[0] < Info_LoPre[0]) {
          IndTemp = k + 1;
          if (Info_Lo[0] > Info_LoPre[0] - 5.0) {
            varargin_1_idx_0 = Info_Lo[1] + Info_Lo[4] / 2.0;
            varargin_1_idx_1 = Info_LoPre[1] + Info_LoPre[4] / 2.0;
            ixstart = 1;
            mtmp = varargin_1_idx_0;
            if (rtIsNaN(varargin_1_idx_0)) {
              ix = 2;
              exitg4 = false;
              while ((!exitg4) && (ix < 3)) {
                ixstart = 2;
                if (!rtIsNaN(varargin_1_idx_1)) {
                  mtmp = varargin_1_idx_1;
                  exitg4 = true;
                } else {
                  ix = 3;
                }
              }
            }

            if ((ixstart < 2) && (varargin_1_idx_1 > mtmp)) {
              mtmp = varargin_1_idx_1;
            }

            varargin_1_idx_0 = Info_Lo[1] - Info_Lo[4] / 2.0;
            varargin_1_idx_1 = Info_LoPre[1] - Info_LoPre[4] / 2.0;
            ixstart = 1;
            if (rtIsNaN(varargin_1_idx_0)) {
              ix = 2;
              exitg3 = false;
              while ((!exitg3) && (ix < 3)) {
                ixstart = 2;
                if (!rtIsNaN(varargin_1_idx_1)) {
                  varargin_1_idx_0 = varargin_1_idx_1;
                  exitg3 = true;
                } else {
                  ix = 3;
                }
              }
            }

            if ((ixstart < 2) && (varargin_1_idx_1 < varargin_1_idx_0)) {
              varargin_1_idx_0 = varargin_1_idx_1;
            }

            Info_LoPre[1] = (mtmp + varargin_1_idx_0) / 2.0;
            Info_LoPre[4] = (mtmp - varargin_1_idx_0) / 2.0;
            Info_LoPre[0] = Info_Lo[0];
            Info_LoPre[2] = Info_Lo[2];
            Info_LoPre[3] = Info_Lo[3];
            Info_LoPre[5] = Info_Lo[5];
            if (FusData[508 + k] > 0.8) {
              if (FobPre < 0.5) {
                /*  Right + Left */
                FobPre = 2;
              } else {
                FobPre = 1;
              }
            } else {
              if (FusData[508 + k] < -0.8) {
                if (fabs((double)FobPre - 1.0) < 0.5) {
                  /*  Right + Left */
                  FobPre = 2;
                } else {
                  FobPre = 0;
                }
              }
            }
          } else {
            /*  Refresh Lo */
            for (ixstart = 0; ixstart < 6; ixstart++) {
              Info_LoPre[ixstart] = Info_Lo[ixstart];
            }

            FobPre = 3;
            if (FusData[508 + k] > 0.8) {
              FobPre = 1;
            } else {
              if (FusData[508 + k] < -0.8) {
                FobPre = 0;
              }
            }
          }
        } else {
          /*  Only Enlarge */
          if (Info_Lo[0] < Info_LoPre[0] + 5.0) {
            varargin_1_idx_0 = Info_Lo[1] + Info_Lo[4] / 2.0;
            varargin_1_idx_1 = Info_LoPre[1] + Info_LoPre[4] / 2.0;
            ixstart = 1;
            mtmp = varargin_1_idx_0;
            if (rtIsNaN(varargin_1_idx_0)) {
              ix = 2;
              exitg2 = false;
              while ((!exitg2) && (ix < 3)) {
                ixstart = 2;
                if (!rtIsNaN(varargin_1_idx_1)) {
                  mtmp = varargin_1_idx_1;
                  exitg2 = true;
                } else {
                  ix = 3;
                }
              }
            }

            if ((ixstart < 2) && (varargin_1_idx_1 > mtmp)) {
              mtmp = varargin_1_idx_1;
            }

            varargin_1_idx_0 = Info_Lo[1] - Info_Lo[4] / 2.0;
            varargin_1_idx_1 = Info_LoPre[1] - Info_LoPre[4] / 2.0;
            ixstart = 1;
            if (rtIsNaN(varargin_1_idx_0)) {
              ix = 2;
              exitg1 = false;
              while ((!exitg1) && (ix < 3)) {
                ixstart = 2;
                if (!rtIsNaN(varargin_1_idx_1)) {
                  varargin_1_idx_0 = varargin_1_idx_1;
                  exitg1 = true;
                } else {
                  ix = 3;
                }
              }
            }

            if ((ixstart < 2) && (varargin_1_idx_1 > varargin_1_idx_0)) {
              varargin_1_idx_0 = varargin_1_idx_1;
            }

            Info_LoPre[1] = (mtmp + varargin_1_idx_0) / 2.0;
            Info_LoPre[4] = (mtmp - varargin_1_idx_0) / 2.0;
            if (FusData[508 + k] > 0.8) {
              if (FobPre < 0.5) {
                /*  Right + Left */
                FobPre = 2;
              } else {
                FobPre = 1;
              }
            } else {
              if (FusData[508 + k] < -0.8) {
                if (fabs((double)FobPre - 1.0) < 0.5) {
                  /*  Right + Left */
                  FobPre = 2;
                } else {
                  FobPre = 0;
                }
              }
            }
          } else {
            /*  obj is discarded */
          }
        }
      }
    }

    k++;
  }

  if (IndTemp <= 127) {
    for (ixstart = 0; ixstart < 6; ixstart++) {
      Info_Lo[ixstart] = Info_LoPre[ixstart];
    }

    Info_Lo[1] = Info_LoPre[1] + Info_LoPre[0] * tan(LineAng);
  } else {
    Info_Lo[0] = 65535.0;
    Info_Lo[1] = 50.0 * tan(LineAng);
    Info_Lo[2] = 65535.0;
    Info_Lo[3] = 2.5;
    Info_Lo[4] = 1.5;
    Info_Lo[5] = Veh_State[2];
  }

  if (Info_Lo[0] < 40.0) {
    *FobDir = FobPre;
  } else {
    *FobDir = 3.0;
  }

  *ObjIndex = IndTemp;
}

/*
 * Left in Lane 1 Left cross Lane 2 Right in lane 3 Right cross Lane 4
 * Arguments    : double Direction
 *                const double Line_ShapeInfo[100]
 *                const double Lane_NumInfo[3]
 *                double Info_Lo[6]
 *                double BranchNum
 *                double FobDir
 *                double *TargetPosition
 *                double *LCSpaceEnough
 *                double *InLaneLCFlg
 * Return Type  : void
 */
static void LCLateralSpaceCheck(double Direction, const double Line_ShapeInfo
  [100], const double Lane_NumInfo[3], double Info_Lo[6], double BranchNum,
  double FobDir, double *TargetPosition, double *LCSpaceEnough, double
  *InLaneLCFlg)
{
  double LineAng;
  int ixstart;
  double CalDis;
  *InLaneLCFlg = 1.0;
  LineAng = -atan(Line_ShapeInfo[(int)Lane_NumInfo[1] + 9]);
  ixstart = 1;
  CalDis = Line_ShapeInfo[(int)Lane_NumInfo[1] + 39];
  if (rtIsNaN(Line_ShapeInfo[(int)Lane_NumInfo[1] + 39])) {
    ixstart = 2;
    CalDis = 50.0;
  }

  if ((ixstart < 2) && (50.0 < CalDis)) {
    CalDis = 50.0;
  }

  if (Info_Lo[0] > CalDis) {
    ixstart = 1;
    CalDis = Line_ShapeInfo[(int)Lane_NumInfo[1] + 39];
    if (rtIsNaN(Line_ShapeInfo[(int)Lane_NumInfo[1] + 39])) {
      ixstart = 2;
      CalDis = 50.0;
    }

    if ((ixstart < 2) && (50.0 < CalDis)) {
      CalDis = 50.0;
    }
  } else {
    CalDis = Info_Lo[0];
  }

  if ((fabs(Info_Lo[2]) < 100.0) && (fabs(BranchNum - 3.0) > 0.5)) {
    if ((Info_Lo[4] > 0.1) && (Info_Lo[4] < 10.0)) {
    } else {
      /*  Obj Width no clear, so inter lane change is prefered */
      Info_Lo[4] = 2.5;
    }

    if ((Direction < 2.5) > 0.1) {
      *TargetPosition = ((Info_Lo[4] + 1.9) / 2.0 + Info_Lo[1]) + 1.2;
      if (*TargetPosition - tan(LineAng) * CalDis < 1.0) {
        *TargetPosition = tan(LineAng) * CalDis + 1.0;
      }
    } else {
      *TargetPosition = (-(Info_Lo[4] + 1.9) / 2.0 + Info_Lo[1]) - 1.2;
      if (*TargetPosition - tan(LineAng) * CalDis > -1.0) {
        *TargetPosition = tan(LineAng) * CalDis - 1.0;
      }
    }
  } else {
    *TargetPosition = tan(LineAng) * CalDis;
  }

  /*  TargetPosition has to be modified to consider no zero init angle */
  if ((Direction > 3.5) && (fabs(FobDir) > 0.5) && (fabs(FobDir - 2.0) > 0.5)) {
    if (Lane_NumInfo[1] + 1.0 < Lane_NumInfo[0] + 0.5) {
      CalDis = LaneFuncCal(Line_ShapeInfo, Lane_NumInfo[1] + 1.0, Info_Lo[0]);
      if (*TargetPosition >= (CalDis - Line_ShapeInfo[(int)(Lane_NumInfo[1] +
            1.0) + 49] / 2.0) + 0.6) {
        *LCSpaceEnough = 1.0;
        if (*TargetPosition >= CalDis) {
          *TargetPosition = CalDis;
        }

        if (fabs(*TargetPosition - CalDis) < 0.2) {
          *InLaneLCFlg = 0.0;
        }
      } else {
        *LCSpaceEnough = 0.0;
      }
    } else {
      *LCSpaceEnough = 0.0;
    }
  } else if ((Direction > 2.5) && (Direction < 3.5) && (fabs(FobDir) > 0.5) &&
             (fabs(FobDir - 2.0) > 0.5)) {
    CalDis = LaneFuncCal(Line_ShapeInfo, Lane_NumInfo[1], Info_Lo[0]);
    if (Lane_NumInfo[1] + 1.0 < Lane_NumInfo[0] + 0.5) {
      if (*TargetPosition >= (CalDis - Line_ShapeInfo[(int)Lane_NumInfo[1] + 49]
           / 2.0) + -0.5) {
        /*              if TargetPosition >= (DisToEgoLane - Line_ShapeInfo(EgoLane_IndexIn,6)/2 + LateralSafetyTol/2) */
        *LCSpaceEnough = 1.0;
        if (*TargetPosition >= CalDis) {
          *TargetPosition = CalDis;
        }

        if (fabs(*TargetPosition - CalDis) < 0.2) {
          *InLaneLCFlg = 0.0;
        }
      } else {
        *LCSpaceEnough = 0.0;
      }
    } else if (*TargetPosition >= ((CalDis - Line_ShapeInfo[(int)Lane_NumInfo[1]
      + 49] / 2.0) + 0.6) + 0.95) {
      *LCSpaceEnough = 1.0;
      if (*TargetPosition >= CalDis) {
        *TargetPosition = CalDis;
      }

      if (fabs(*TargetPosition - CalDis) < 0.2) {
        *InLaneLCFlg = 0.0;
      }
    } else {
      *LCSpaceEnough = 0.0;
    }
  } else if ((Direction > 1.5) && (Direction < 2.5) && (fabs(FobDir - 1.0) > 0.5)
             && (fabs(FobDir - 2.0) > 0.5)) {
    if (Lane_NumInfo[1] - 1.0 > 0.5) {
      CalDis = LaneFuncCal(Line_ShapeInfo, Lane_NumInfo[1] - 1.0, Info_Lo[0]);
      if (*TargetPosition <= (CalDis + Line_ShapeInfo[(int)(Lane_NumInfo[1] -
            1.0) + 49] / 2.0) - 0.6) {
        *LCSpaceEnough = 1.0;
        if (*TargetPosition <= CalDis) {
          *TargetPosition = CalDis;
        }
      } else {
        *LCSpaceEnough = 0.0;
      }
    } else {
      *LCSpaceEnough = 0.0;
    }
  } else if ((Direction < 1.5) && (fabs(FobDir - 1.0) > 0.5) && (fabs(FobDir -
               2.0) > 0.5)) {
    /* if Direction > 0.5 */
    /* In lane LC to Left         */
    CalDis = LaneFuncCal(Line_ShapeInfo, Lane_NumInfo[1], Info_Lo[0]);
    if (Lane_NumInfo[1] - 1.0 > 0.5) {
      /*              if TargetPosition <= (DisToEgoLane + Line_ShapeInfo(EgoLane_IndexIn,6)/2 - LateralSafetyTol/2) */
      if (*TargetPosition <= (CalDis + Line_ShapeInfo[(int)Lane_NumInfo[1] + 49]
           / 2.0) - -0.5) {
        *LCSpaceEnough = 1.0;
        if (*TargetPosition <= CalDis) {
          *TargetPosition = CalDis;
        }

        if (fabs(*TargetPosition - CalDis) < 0.2) {
          *InLaneLCFlg = 0.0;
        }
      } else {
        *LCSpaceEnough = 0.0;
      }
    } else {
      /* No Lane there */
      if (*TargetPosition <= ((CalDis + Line_ShapeInfo[(int)Lane_NumInfo[1] + 49]
            / 2.0) - 0.6) - 0.95) {
        *LCSpaceEnough = 1.0;
        if (*TargetPosition <= CalDis) {
          *TargetPosition = CalDis;
        }

        if (fabs(*TargetPosition - CalDis) < 0.2) {
          *InLaneLCFlg = 0.0;
        }
      } else {
        *LCSpaceEnough = 0.0;
      }
    }
  } else {
    *LCSpaceEnough = 0.0;
  }

  /*  This code is for debug only Just to trigger a non zero init angle LC conditions */
  /*  InLaneLCFlg = 0; */
}

/*
 * Arguments    : const double Line_ShapeInfo[100]
 *                double CalLineNum
 *                double CalDis
 * Return Type  : double
 */
static double LaneFuncCal(const double Line_ShapeInfo[100], double CalLineNum,
  double CalDis)
{
  int ixstart;
  double mtmp;
  ixstart = 1;
  mtmp = Line_ShapeInfo[(int)CalLineNum + 39];
  if (rtIsNaN(Line_ShapeInfo[(int)CalLineNum + 39])) {
    ixstart = 2;
    mtmp = 50.0;
  }

  if ((ixstart < 2) && (50.0 < mtmp)) {
    mtmp = 50.0;
  }

  if (CalDis > mtmp) {
    ixstart = 1;
    CalDis = Line_ShapeInfo[(int)CalLineNum + 39];
    if (rtIsNaN(Line_ShapeInfo[(int)CalLineNum + 39])) {
      ixstart = 2;
      CalDis = 50.0;
    }

    if ((ixstart < 2) && (50.0 < CalDis)) {
      CalDis = 50.0;
    }
  }

  return -(((Line_ShapeInfo[(int)CalLineNum - 1] + Line_ShapeInfo[(int)
             CalLineNum + 9] * CalDis) + Line_ShapeInfo[(int)CalLineNum + 19] *
            (CalDis * CalDis)) + Line_ShapeInfo[(int)CalLineNum + 29] *
           rt_powd_snf(CalDis, 3.0));
}

/*
 * Find a Ld that in target lane
 * Arguments    : double Direction
 *                double TargetPosition
 *                const double Info_Me[7]
 *                const double FusData[3302]
 *                const double Veh_State[8]
 *                const double Info_Lo[6]
 *                const double Line_ShapeInfo[100]
 *                double EgoLane_IndexIn
 *                double Info_Ld[6]
 *                double Info_Fd[6]
 *                double *ObjTrig
 *                double *InbetweenFlg
 * Return Type  : void
 */
static void LdFdObjSearch(double Direction, double TargetPosition, const double
  Info_Me[7], const double FusData[3302], const double Veh_State[8], const
  double Info_Lo[6], const double Line_ShapeInfo[100], double EgoLane_IndexIn,
  double Info_Ld[6], double Info_Fd[6], double *ObjTrig, double *InbetweenFlg)
{
  int ToLeft;
  int ixstart;
  double YoffsetTmp;
  double CalDis;
  double LineAng;
  double ObjIndex;
  boolean_T exitg1;
  double Info_Inbtwn[6];
  boolean_T guard1 = false;

  /*  Obj select function */
  ToLeft = (Direction < 2.5);
  ixstart = 1;
  YoffsetTmp = Line_ShapeInfo[(int)EgoLane_IndexIn + 39];
  if (rtIsNaN(Line_ShapeInfo[(int)EgoLane_IndexIn + 39])) {
    ixstart = 2;
    YoffsetTmp = 50.0;
  }

  if ((ixstart < 2) && (50.0 < YoffsetTmp)) {
    YoffsetTmp = 50.0;
  }

  if (Info_Lo[0] > YoffsetTmp) {
    ixstart = 1;
    CalDis = Line_ShapeInfo[(int)EgoLane_IndexIn + 39];
    if (rtIsNaN(Line_ShapeInfo[(int)EgoLane_IndexIn + 39])) {
      ixstart = 2;
      CalDis = 50.0;
    }

    if ((ixstart < 2) && (50.0 < CalDis)) {
      CalDis = 50.0;
    }
  } else {
    CalDis = Info_Lo[0];
  }

  YoffsetTmp = atan(Line_ShapeInfo[(int)EgoLane_IndexIn + 9]);
  LineAng = -atan(Line_ShapeInfo[(int)EgoLane_IndexIn + 9]);
  ObjIndex = FusIndSeletFdLd(ToLeft, TargetPosition, Info_Lo, FusData,
    -YoffsetTmp, CalDis, 4.0, Veh_State);
  if (ObjIndex > 127.0) {
    if (ToLeft > 0.5) {
      Info_Ld[0] = 65535.0;
      Info_Ld[1] = fabs(TargetPosition);
      Info_Ld[2] = 65535.0;
      Info_Ld[3] = 2.5;
      Info_Ld[4] = 1.5;
      Info_Ld[5] = Veh_State[2];
    } else {
      Info_Ld[0] = 65535.0;
      Info_Ld[1] = -fabs(TargetPosition);
      Info_Ld[2] = 65535.0;
      Info_Ld[3] = 2.5;
      Info_Ld[4] = 1.5;
      Info_Ld[5] = Veh_State[2];
    }
  } else {
    ObjInfoMaker(ObjIndex, FusData, Veh_State, 4.0, Info_Ld);
  }

  /*  Fd */
  /* Find a Fd that in target lane */
  ObjIndex = FusIndSeletFdLd(ToLeft, TargetPosition, Info_Lo, FusData,
    -YoffsetTmp, CalDis, 3.0, Veh_State);
  if (ObjIndex > 127.0) {
    if (ToLeft > 0.5) {
      Info_Fd[0] = -65535.0;
      Info_Fd[1] = fabs(TargetPosition);
      Info_Fd[2] = -65535.0;
      Info_Fd[3] = 2.5;
      Info_Fd[4] = 1.5;
      Info_Fd[5] = Veh_State[2];
    } else {
      Info_Fd[0] = -65535.0;
      Info_Fd[1] = -fabs(TargetPosition);
      Info_Fd[2] = -65535.0;
      Info_Fd[3] = 2.5;
      Info_Fd[4] = 1.5;
      Info_Fd[5] = Veh_State[2];
    }
  } else {
    ObjInfoMaker(ObjIndex, FusData, Veh_State, 3.0, Info_Fd);
  }

  *ObjTrig = 0.0;
  if (((Info_Fd[2] <= Info_Me[2]) || (Info_Fd[0] <= -(Info_Fd[2] - Info_Me[2]) *
        10.0)) && (Info_Ld[0] - Info_Fd[0] >= 20.0)) {
    if (Info_Ld[2] >= Info_Me[2]) {
      /*  LC reason is condition met, and target lane faster */
      *ObjTrig = 2.0;

      /*  Info_Ld(3) < Info_Me(3) */
      /*  But aim to change to next lane */
    } else if ((fabs(Info_Lo[2]) < 100.0) && (Info_Ld[2] >= Info_Lo[2] + 2.0) &&
               (Info_Ld[0] > Info_Lo[0])) {
      /*  LC reason is Info_Lo slower */
      *ObjTrig = 2.0;

      /*          elseif (TargetIndex ~= EgoLane_IndexIn)&&(Info_Ld(1) > 10) */
      /*              % LC reason is no in target lane */
      /*                  ObjTrig = 2;           */
      /*          else */
    } else {
      YoffsetTmp = 10.0 * (Info_Me[2] - Info_Ld[2]) + 25.0;
      ixstart = 1;
      if (rtIsNaN(YoffsetTmp)) {
        ixstart = 2;
        YoffsetTmp = 25.0;
      }

      if ((ixstart < 2) && (25.0 > YoffsetTmp)) {
        YoffsetTmp = 25.0;
      }

      if (Info_Ld[0] > YoffsetTmp) {
        *ObjTrig = 2.0;
      } else {
        YoffsetTmp = 5.0 * (Info_Me[2] - Info_Ld[2]) + 15.0;
        ixstart = 1;
        if (rtIsNaN(YoffsetTmp)) {
          ixstart = 2;
          YoffsetTmp = 15.0;
        }

        if ((ixstart < 2) && (15.0 > YoffsetTmp)) {
          YoffsetTmp = 15.0;
        }

        if (Info_Ld[0] > YoffsetTmp) {
          /* Not recommended, but can LC if insist */
          *ObjTrig = 1.0;
        }
      }
    }
  }

  /*  Find obj that exist inbetween Target Position and Ego Position */
  *InbetweenFlg = 0.0;
  ixstart = 1;
  exitg1 = false;
  while (!(exitg1 || ((ixstart > 127) || (FusData[ixstart - 1] < 0.5)))) {
    ObjInfoMaker(ixstart, FusData, Veh_State, 4.0, Info_Inbtwn);
    guard1 = false;
    if ((fabs(Info_Inbtwn[2]) > 100.0) || (Info_Inbtwn[0] > 50.0)) {
      guard1 = true;
    } else {
      YoffsetTmp = (Info_Inbtwn[0] - CalDis) * tan(LineAng);
      if (ToLeft > 0.5) {
        if ((Info_Inbtwn[1] - YoffsetTmp < (TargetPosition - (Info_Inbtwn[4] +
               1.9) / 2.0) - 0.5) && (Info_Inbtwn[1] - YoffsetTmp > (Info_Lo[1]
              + (-Info_Inbtwn[4] + Info_Lo[4]) / 2.0) + 0.5)) {
          *InbetweenFlg = 1.0;
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else if ((Info_Inbtwn[1] - YoffsetTmp < (Info_Lo[1] - (-Info_Inbtwn[4] +
        Info_Lo[4]) / 2.0) - 0.5) && (Info_Inbtwn[1] - YoffsetTmp >
                  (TargetPosition + (Info_Inbtwn[4] + 1.9) / 2.0) + 0.5)) {
        *InbetweenFlg = 1.0;
        exitg1 = true;
      } else {
        guard1 = true;
      }
    }

    if (guard1) {
      ixstart++;
    }
  }
}

/*
 * Arguments    : double ObjIndex
 *                const double Object_Info[3302]
 *                const double Veh_State[8]
 *                double Type
 *                double ObjInfo[6]
 * Return Type  : void
 */
static void ObjInfoMaker(double ObjIndex, const double Object_Info[3302], const
  double Veh_State[8], double Type, double ObjInfo[6])
{
  double Xdis;
  double ObjVel;
  double ObjHeading;

  /*      ObjIndex = 0; */
  /*      if (Sur_ObjId > 0)&&(Sur_ObjId < 127) */
  /*          for i = 1:ObjNum */
  /*              if abs(Object_Info(i,1) - Sur_ObjId)<1e-1 */
  /*                  ObjIndex = i; */
  /*                  break; */
  /*              end */
  /*          end */
  /*      end */
  if ((ObjIndex > 0.0) && (ObjIndex < 60.0) && (Object_Info[(int)ObjIndex - 1] >
       0.5)) {
    /*  Real angle */
    Xdis = Object_Info[(int)ObjIndex + 253] + Veh_State[7];
    ObjVel = sqrt(Xdis * Xdis + Object_Info[(int)ObjIndex + 507] * Object_Info
                  [(int)ObjIndex + 507]);
    if (fabs(Xdis) < 1.0E-5) {
      if (Object_Info[(int)ObjIndex + 507] < 0.0) {
        ObjHeading = 4.71238898038469;
      } else {
        ObjHeading = 1.5707963267948966;
      }
    } else {
      ObjHeading = atan(Object_Info[(int)ObjIndex + 507] / Xdis);
      if (fabs(ObjHeading) < 1.0E-5) {
        if (Xdis < 0.0) {
          ObjHeading = 3.1415926535897931;
        } else {
          ObjHeading = 0.0;
        }
      } else if (Xdis < 0.0) {
        ObjHeading += 3.1415926535897931;
      } else {
        if (ObjHeading < 0.1) {
          ObjHeading += 6.2831853071795862;
        }
      }
    }

    if (Xdis < 0.0) {
      ObjVel = -ObjVel;
    }

    ObjInfo[0] = Object_Info[(int)ObjIndex + 126];
    ObjInfo[1] = Object_Info[(int)ObjIndex + 380];
    ObjInfo[2] = ObjVel;
    ObjInfo[3] = 2.5;
    ObjInfo[4] = Object_Info[(int)ObjIndex + 761];
    ObjInfo[5] = ObjHeading;
  } else {
    switch ((int)Type) {
     case 1:
      /*          Info_Lo = [65535,65535,65535,1.5,2.5,Veh_State(3)];  */
      /*          Info_Fo = [-65535,-65535,65535,1.5,2.5,Veh_State(3)]; */
      /*          Info_Fd = [-65535,-65535,65535,1.5,2.5,Veh_State(3)]; */
      /*          Info_Ld = [65535,65535,65535,1.5,2.5,Veh_State(3)]; */
      ObjInfo[0] = 65535.0;
      ObjInfo[1] = 65535.0;
      ObjInfo[2] = 65535.0;
      ObjInfo[3] = 1.5;
      ObjInfo[4] = 2.5;
      ObjInfo[5] = Veh_State[2];
      break;

     case 2:
      ObjInfo[0] = -65535.0;
      ObjInfo[1] = -65535.0;
      ObjInfo[2] = 65535.0;
      ObjInfo[3] = 1.5;
      ObjInfo[4] = 2.5;
      ObjInfo[5] = Veh_State[2];
      break;

     case 3:
      ObjInfo[0] = -65535.0;
      ObjInfo[1] = -65535.0;
      ObjInfo[2] = 65535.0;
      ObjInfo[3] = 1.5;
      ObjInfo[4] = 2.5;
      ObjInfo[5] = Veh_State[2];
      break;

     case 4:
      ObjInfo[0] = 65535.0;
      ObjInfo[1] = 65535.0;
      ObjInfo[2] = 65535.0;
      ObjInfo[3] = 1.5;
      ObjInfo[4] = 2.5;
      ObjInfo[5] = Veh_State[2];
      break;

     default:
      ObjInfo[0] = 65535.0;
      ObjInfo[1] = 65535.0;
      ObjInfo[2] = 65535.0;
      ObjInfo[3] = 1.5;
      ObjInfo[4] = 2.5;
      ObjInfo[5] = Veh_State[2];
      break;
    }
  }
}

/*
 * First Consider 2 lane
 * inter off lane 0
 * inter lane 1
 * outer lane 2
 * outer off lane 3
 * 1st 2nd
 * Fd Fo Ld Lo
 * Arguments    : const double Line_ShapeInfo[100]
 *                const double Lane_NumInfo[3]
 *                double Veh_State[8]
 *                const double FusData[3302]
 *                double UseFakeCIPVEn
 *                double TrigStart
 *                double LCEnbSts
 *                double PPEn
 *                double b_CurOp
 *                double Lane_NumInfoOut[3]
 *                double Info_Me[7]
 *                double *TargetPosition
 *                double *InLaneLCFlg
 *                double *ObjTrigOut
 *                double *LCTrigSuccessOut
 *                double Info_Lo[6]
 *                double Info_Fd[6]
 *                double Info_Fo[6]
 *                double Info_Ld[6]
 *                double *ObjSelectRes
 *                double DbgInfo[10]
 * Return Type  : void
 */
void ObjSelectDebugVersion(const double Line_ShapeInfo[100], const double
  Lane_NumInfo[3], double Veh_State[8], const double FusData[3302], double
  UseFakeCIPVEn, double TrigStart, double LCEnbSts, double PPEn, double b_CurOp,
  double Lane_NumInfoOut[3], double Info_Me[7], double *TargetPosition, double
  *InLaneLCFlg, double *ObjTrigOut, double *LCTrigSuccessOut, double Info_Lo[6],
  double Info_Fd[6], double Info_Fo[6], double Info_Ld[6], double *ObjSelectRes,
  double DbgInfo[10])
{
  int i1;
  double EgoLane_IndexIn;
  double ObjTrig;
  double TargetIndex;
  int LCTrigSuccess;
  double b_Lane_NumInfo;
  double DisToEgoLane;
  double FobDir;
  int Direction;
  boolean_T exitg1;
  double b_Info_Lo[6];
  static const signed char iv0[4] = { 1, 3, 2, 4 };

  boolean_T guard1 = false;
  *InLaneLCFlg = 0.0;
  *LCTrigSuccessOut = 0.0;
  memset(&DbgInfo[0], 0, 10U * sizeof(double));
  Info_Me[0] = Veh_State[0];
  Info_Me[1] = Veh_State[1];
  Info_Me[2] = Veh_State[7];
  Info_Me[3] = 2.5;
  Info_Me[4] = 1.9;
  Info_Me[5] = Veh_State[2];
  Info_Me[6] = Veh_State[3];
  for (i1 = 0; i1 < 3; i1++) {
    Lane_NumInfoOut[i1] = Lane_NumInfo[i1];
  }

  *TargetPosition = 0.0;
  EgoLane_IndexIn = Lane_NumInfo[1];
  *ObjSelectRes = 0.0;
  ObjTrig = 0.0;
  *ObjTrigOut = 0.0;
  while ((Veh_State[2] < 0.0) || (Veh_State[2] > 6.2831853071795862)) {
    if (Veh_State[2] < 0.0) {
      Veh_State[2] += 6.2831853071795862;
    }

    if (Veh_State[2] > 6.2831853071795862) {
      Veh_State[2] -= 6.2831853071795862;
    }
  }

  if (Lane_NumInfo[2] < 0.5) {
    if (Lane_NumInfo[1] == 2.0) {
      TargetIndex = 1.0;
    } else if (Lane_NumInfo[1] == 1.0) {
      TargetIndex = 3.0;
    } else {
      TargetIndex = 0.0;
    }

    Lane_NumInfoOut[2] = TargetIndex;
  } else {
    TargetIndex = Lane_NumInfo[2];
  }

  if ((Lane_NumInfo[1] > Lane_NumInfo[0]) || (Lane_NumInfo[1] < 1.0)) {
    Info_Lo[0] = 65535.0;
    Info_Lo[1] = 65535.0;
    Info_Lo[2] = 65535.0;
    Info_Lo[3] = 1.5;
    Info_Lo[4] = 2.5;
    Info_Lo[5] = Veh_State[2];
    Info_Fo[0] = -65535.0;
    Info_Fo[1] = -65535.0;
    Info_Fo[2] = 65535.0;
    Info_Fo[3] = 1.5;
    Info_Fo[4] = 2.5;
    Info_Fo[5] = Veh_State[2];
    Info_Fd[0] = -65535.0;
    Info_Fd[1] = -65535.0;
    Info_Fd[2] = 65535.0;
    Info_Fd[3] = 1.5;
    Info_Fd[4] = 2.5;
    Info_Fd[5] = Veh_State[2];
    Info_Ld[0] = 65535.0;
    Info_Ld[1] = 65535.0;
    Info_Ld[2] = 65535.0;
    Info_Ld[3] = 1.5;
    Info_Ld[4] = 2.5;
    Info_Ld[5] = Veh_State[2];
  } else {
    Info_Fd[0] = -65535.0;
    Info_Fd[1] = -65535.0;
    Info_Fd[2] = 65535.0;
    Info_Fd[3] = 1.5;
    Info_Fd[4] = 2.5;
    Info_Fd[5] = Veh_State[2];
    Info_Ld[0] = 65535.0;
    Info_Ld[1] = 65535.0;
    Info_Ld[2] = 65535.0;
    Info_Ld[3] = 1.5;
    Info_Ld[4] = 2.5;
    Info_Ld[5] = Veh_State[2];
    LCTrigSuccess = 0;

    /* Filter a Lo that in ego way */
    if (Lane_NumInfo[1] > 0.5) {
      b_Lane_NumInfo = -atan(Line_ShapeInfo[(int)Lane_NumInfo[1] + 9]);
    } else {
      b_Lane_NumInfo = 0.0;
    }

    FusIndSeletLo(FusData, b_Lane_NumInfo, Veh_State, UseFakeCIPVEn,
                  &DisToEgoLane, Info_Lo, &FobDir);
    if (DisToEgoLane > 127.0) {
      *ObjSelectRes = 2.0;
    }

    /*  Fo */
    Info_Fo[0] = -65535.0;
    Info_Fo[1] = 0.0;
    Info_Fo[2] = -65535.0;
    Info_Fo[3] = 1.5;
    Info_Fo[4] = 2.5;
    Info_Fo[5] = Veh_State[2];
    DisToEgoLane = LaneFuncCal(Line_ShapeInfo, Lane_NumInfo[1], Info_Lo[0]);

    /*  Force to Lane Change */
    if (fabs(TargetIndex - Lane_NumInfo[1]) > 0.5) {
      /*  Left in Lane 1 Left cross Lane 2 Right in lane 3 Right cross Lane 4 */
      if (TargetIndex < Lane_NumInfo[1]) {
        Direction = 2;
      } else {
        Direction = 4;
      }

      for (i1 = 0; i1 < 6; i1++) {
        b_Info_Lo[i1] = Info_Lo[i1];
      }

      LCLateralSpaceCheck(Direction, Line_ShapeInfo, Lane_NumInfo, b_Info_Lo,
                          1.0, FobDir, TargetPosition, &DisToEgoLane,
                          InLaneLCFlg);
      if (DisToEgoLane > 0.5) {
        /*  Fd Ld is checked */
        LdFdObjSearch(Direction, *TargetPosition, Info_Me, FusData, Veh_State,
                      Info_Lo, Line_ShapeInfo, Lane_NumInfo[1], Info_Ld, Info_Fd,
                      &ObjTrig, &DisToEgoLane);
        if ((ObjTrig > 1.0) || (UseFakeCIPVEn > 0.5)) {
          /*  LC Triggered Success */
          LCTrigSuccess = 1;
          if (Direction > 3.5) {
            TargetIndex = Lane_NumInfo[1] + 1.0;
          } else if (Direction > 2.5) {
            TargetIndex = Lane_NumInfo[1];
          } else {
            TargetIndex = Lane_NumInfo[1] - 1.0;
          }
        } else {
          /*  LC Triggered failed */
        }
      } else {
        /*  LC Triggered failed */
      }
    } else if ((Info_Lo[0] < 30.0) && (Info_Lo[2] < 4.166666666666667)) {
      /*  Info_Lo trigger to Lane Change */
      Direction = 0;
      exitg1 = false;
      while ((!exitg1) && (Direction < 4)) {
        for (i1 = 0; i1 < 6; i1++) {
          b_Info_Lo[i1] = Info_Lo[i1];
        }

        LCLateralSpaceCheck(iv0[Direction], Line_ShapeInfo, Lane_NumInfo,
                            b_Info_Lo, 2.0, FobDir, TargetPosition,
                            &DisToEgoLane, InLaneLCFlg);
        if (fabs((double)iv0[Direction] - 2.0) < 0.1) {
          DbgInfo[0] = *TargetPosition;
          DbgInfo[1] = DisToEgoLane;
        }

        guard1 = false;
        if (DisToEgoLane > 0.5) {
          /*  Fd Ld is checked */
          LdFdObjSearch(iv0[Direction], *TargetPosition, Info_Me, FusData,
                        Veh_State, Info_Lo, Line_ShapeInfo, EgoLane_IndexIn,
                        Info_Ld, Info_Fd, &ObjTrig, &DisToEgoLane);

          /*                          InbetweenFlg = InbetweenLaneObjCheck(Direction,Info_Ld,Info_Fd,Info_Me,LateralSafetyTol,TargetPosition); */
          if (fabs((double)iv0[Direction] - 2.0) < 0.1) {
            DbgInfo[2] = ObjTrig;
            DbgInfo[3] = DisToEgoLane;
          }

          if ((ObjTrig > 1.5) || (UseFakeCIPVEn > 0.5)) {
            /*  LC Triggered Success */
            LCTrigSuccess = 1;
            if (iv0[Direction] > 3.5) {
              TargetIndex = EgoLane_IndexIn + 1.0;
            } else if (iv0[Direction] > 2.5) {
              TargetIndex = EgoLane_IndexIn;
            } else if (iv0[Direction] > 1.5) {
              TargetIndex = EgoLane_IndexIn - 1.0;
            } else {
              TargetIndex = EgoLane_IndexIn;
            }

            exitg1 = true;
          } else {
            /*  LC Triggered failed */
            guard1 = true;
          }
        } else {
          /*  LC Triggered failed */
          guard1 = true;
        }

        if (guard1) {
          Direction++;
        }
      }
    } else if ((fabs(DisToEgoLane) > 1.0) && (PPEn > 0.5) && (b_CurOp < 0.5)) {
      /*  Position trigger to Lane Change to ego center */
      /*  LC in lane at least 1m, if smaller than 1m   */
      if (DisToEgoLane > 0.0) {
        for (i1 = 0; i1 < 6; i1++) {
          b_Info_Lo[i1] = Info_Lo[i1];
        }

        LCLateralSpaceCheck(1.0, Line_ShapeInfo, Lane_NumInfo, b_Info_Lo, 3.0,
                            FobDir, TargetPosition, &DisToEgoLane, InLaneLCFlg);
        if (DisToEgoLane > 0.5) {
          /*  Fd Ld is checked                     */
          LdFdObjSearch(1.0, *TargetPosition, Info_Me, FusData, Veh_State,
                        Info_Lo, Line_ShapeInfo, Lane_NumInfo[1], Info_Ld,
                        Info_Fd, &ObjTrig, &DisToEgoLane);
          if ((ObjTrig > 1.5) || (UseFakeCIPVEn > 0.5)) {
            /*  LC Triggered Success */
            LCTrigSuccess = 1;
            TargetIndex = Lane_NumInfo[1];
          } else {
            /*  LC Triggered failed */
          }
        } else {
          /*  LC Triggered failed */
        }
      } else {
        for (i1 = 0; i1 < 6; i1++) {
          b_Info_Lo[i1] = Info_Lo[i1];
        }

        LCLateralSpaceCheck(3.0, Line_ShapeInfo, Lane_NumInfo, b_Info_Lo, 3.0,
                            FobDir, TargetPosition, &DisToEgoLane, InLaneLCFlg);
        if (DisToEgoLane > 0.5) {
          /*  Fd Ld is checked */
          LdFdObjSearch(3.0, *TargetPosition, Info_Me, FusData, Veh_State,
                        Info_Lo, Line_ShapeInfo, Lane_NumInfo[1], Info_Ld,
                        Info_Fd, &ObjTrig, &DisToEgoLane);
          if ((ObjTrig > 1.5) || (UseFakeCIPVEn > 0.5)) {
            /*  LC Triggered Success */
            LCTrigSuccess = 1;
            TargetIndex = Lane_NumInfo[1];
          } else {
            /*  LC Triggered failed */
          }
        } else {
          /*  LC Triggered failed */
        }
      }
    } else {
      /*  No Lane Change */
    }

    /*  Work Debounce Counter */
    if ((TrigStart > 0.5) && (LCEnbSts > 0.5)) {
      Lane_NumInfoOut[2] = TargetIndex;
      if (LCTrigSuccess < 0.5) {
        DebounceCnt = 20.0;
        *ObjTrigOut = ObjTrig;
      } else if (DebounceCnt > 0.5) {
        DebounceCnt--;
        *ObjTrigOut = 1.0;
      } else {
        *ObjTrigOut = 2.0;
        *LCTrigSuccessOut = 1.0;
      }
    } else {
      DebounceCnt = 20.0;
    }

    if ((UseFakeCIPVEn < 0.5) || (LCTrigSuccess < 0.5)) {
    } else {
      Info_Lo[0] = 65535.0;
      Info_Lo[1] = 0.0;
      Info_Lo[2] = 65535.0;
      Info_Lo[3] = 2.5;
      Info_Lo[4] = 1.5;
      Info_Lo[5] = Veh_State[2];
      Info_Fo[0] = -65535.0;
      Info_Fo[1] = -65535.0;
      Info_Fo[2] = 65535.0;
      Info_Fo[3] = 1.5;
      Info_Fo[4] = 2.5;
      Info_Fo[5] = Veh_State[2];
      Info_Ld[0] = 65535.0;
      Info_Ld[1] = *TargetPosition;
      Info_Ld[2] = 65535.0;
      Info_Ld[3] = 2.5;
      Info_Ld[4] = 1.5;
      Info_Ld[5] = Veh_State[2];
      Info_Fd[0] = -65535.0;
      Info_Fd[1] = *TargetPosition;
      Info_Fd[2] = -65535.0;
      Info_Fd[3] = 2.5;
      Info_Fd[4] = 1.5;
      Info_Fd[5] = Veh_State[2];
    }
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void ObjSelectDebugVersion_init(void)
{
  DebounceCnt = 20.0;
}

/*
 * File trailer for ObjSelectDebugVersion.c
 *
 * [EOF]
 */
