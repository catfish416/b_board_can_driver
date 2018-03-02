/*
 * File: OpSchedule.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "OpSchedule.h"
#include "DebugMain_rtwutil.h"

/* Variable Definitions */
static double CurOp;
static double NexLCDelayCnt;
static double PTargetLaneNum;
static double EgoCordOrig[3];
static double PInLaneLCFlg;
static double PLCOPCnt;
static double PInLaneLCFlgInt;
static double PFailRestoreCn;
static double PNavi_InfoTurn[28];
static double PreEgoCordOrig[3];
static double PNavi_InfoTurn2[28];
static double PTargetLaneNum2;
static double PreOp;
static double PCentTargetOffset;

/* Function Declarations */
static void CordTransfer(const double CordBefore[3], const double CordOrig[3],
  double CordAfter[3]);
static void Line_ShapeInfoExtract(double b_TargetLaneNum, const double
  Line_ShapeInfo[100], double Line_ShapeRes[10]);
static double PassJudgement(const double EgoCord[3], const double TargetCord[3]);
static void RoadInfoExtractLC(const double Line_ShapeTemp[10], double Xmax,
  double RoadInfo[4]);
static void RoadInfoExtractTr(const double Navi_InfoTurn[28], const double
  Info_Me[7], double RoadInfo[8]);

/* Function Definitions */

/*
 * Arguments    : const double CordBefore[3]
 *                const double CordOrig[3]
 *                double CordAfter[3]
 * Return Type  : void
 */
static void CordTransfer(const double CordBefore[3], const double CordOrig[3],
  double CordAfter[3])
{
  double AngleTemp;
  AngleTemp = CordBefore[2] - CordOrig[2];
  while (!((AngleTemp >= 0.0) && (AngleTemp < 6.2831853071795862))) {
    if (AngleTemp < 0.0) {
      AngleTemp += 6.2831853071795862;
    } else {
      AngleTemp -= 6.2831853071795862;
    }
  }

  CordAfter[0] = (CordBefore[0] - CordOrig[0]) * cos(CordOrig[2]) + (CordBefore
    [1] - CordOrig[1]) * sin(CordOrig[2]);
  CordAfter[1] = (CordBefore[1] - CordOrig[1]) * cos(CordOrig[2]) - (CordBefore
    [0] - CordOrig[0]) * sin(CordOrig[2]);
  CordAfter[2] = AngleTemp;
}

/*
 * Arguments    : double b_TargetLaneNum
 *                const double Line_ShapeInfo[100]
 *                double Line_ShapeRes[10]
 * Return Type  : void
 */
static void Line_ShapeInfoExtract(double b_TargetLaneNum, const double
  Line_ShapeInfo[100], double Line_ShapeRes[10])
{
  int i2;
  if ((b_TargetLaneNum > 10.0) || (b_TargetLaneNum < 0.5)) {
    memset(&Line_ShapeRes[0], 0, 10U * sizeof(double));
  } else {
    for (i2 = 0; i2 < 10; i2++) {
      Line_ShapeRes[i2] = Line_ShapeInfo[((int)b_TargetLaneNum + 10 * i2) - 1];
    }
  }
}

/*
 * Arguments    : const double EgoCord[3]
 *                const double TargetCord[3]
 * Return Type  : double
 */
static double PassJudgement(const double EgoCord[3], const double TargetCord[3])
{
  return (EgoCord[0] - TargetCord[0]) * cos(TargetCord[2]) + (EgoCord[1] -
    TargetCord[1]) * sin(TargetCord[2]) > 0.0;
}

/*
 * Arguments    : const double Line_ShapeTemp[10]
 *                double Xmax
 *                double RoadInfo[4]
 * Return Type  : void
 */
static void RoadInfoExtractLC(const double Line_ShapeTemp[10], double Xmax,
  double RoadInfo[4])
{
  int ixstart;
  double mtmp;
  ixstart = 1;
  mtmp = Line_ShapeTemp[4];
  if (rtIsNaN(Line_ShapeTemp[4])) {
    ixstart = 2;
    mtmp = 50.0;
  }

  if ((ixstart < 2) && (50.0 < mtmp)) {
    mtmp = 50.0;
  }

  if (Xmax > mtmp) {
    ixstart = 1;
    Xmax = Line_ShapeTemp[4];
    if (rtIsNaN(Line_ShapeTemp[4])) {
      ixstart = 2;
      Xmax = 50.0;
    }

    if ((ixstart < 2) && (50.0 < Xmax)) {
      Xmax = 50.0;
    }
  }

  RoadInfo[0] = Xmax;
  RoadInfo[1] = -(((rt_powd_snf(Xmax, 3.0) * Line_ShapeTemp[3] + Xmax * Xmax *
                    Line_ShapeTemp[2]) + Xmax * Line_ShapeTemp[1]) +
                  Line_ShapeTemp[0]);
  RoadInfo[2] = -atan(Line_ShapeTemp[1]);
  RoadInfo[3] = Line_ShapeTemp[5];
}

/*
 * Arguments    : const double Navi_InfoTurn[28]
 *                const double Info_Me[7]
 *                double RoadInfo[8]
 * Return Type  : void
 */
static void RoadInfoExtractTr(const double Navi_InfoTurn[28], const double
  Info_Me[7], double RoadInfo[8])
{
  double CordOrig_idx_0;
  double CordOrig_idx_1;
  double CordOrig_idx_2;
  int i;
  double AngleTemp;
  double b_RoadInfo;
  double c_RoadInfo;
  RoadInfo[0] = Navi_InfoTurn[8];
  RoadInfo[2] = Navi_InfoTurn[12];
  RoadInfo[4] = Navi_InfoTurn[24];
  RoadInfo[6] = 4.0;
  RoadInfo[1] = Navi_InfoTurn[9];
  RoadInfo[3] = Navi_InfoTurn[13];
  RoadInfo[5] = Navi_InfoTurn[25];
  RoadInfo[7] = 4.0;
  CordOrig_idx_0 = Info_Me[0];
  CordOrig_idx_1 = Info_Me[1];
  CordOrig_idx_2 = Info_Me[5];
  for (i = 0; i < 2; i++) {
    AngleTemp = RoadInfo[4 + i] - CordOrig_idx_2;
    while (!((AngleTemp >= 0.0) && (AngleTemp < 6.2831853071795862))) {
      if (AngleTemp < 0.0) {
        AngleTemp += 6.2831853071795862;
      } else {
        AngleTemp -= 6.2831853071795862;
      }
    }

    b_RoadInfo = RoadInfo[2 + i];
    c_RoadInfo = RoadInfo[i];
    RoadInfo[i] = (RoadInfo[i] - CordOrig_idx_0) * cos(CordOrig_idx_2) +
      (RoadInfo[2 + i] - CordOrig_idx_1) * sin(CordOrig_idx_2);
    RoadInfo[2 + i] = (b_RoadInfo - CordOrig_idx_1) * cos(CordOrig_idx_2) -
      (c_RoadInfo - CordOrig_idx_0) * sin(CordOrig_idx_2);
    RoadInfo[4 + i] = AngleTemp;
  }
}

/*
 * OperationFinishFlg 0 NA 1 Success 2 FailtoStart
 *  First Judge whether a LC needs to be done.
 * Arguments    : const double Navi_InfoTurn[28]
 *                const double Line_ShapeInfo[100]
 *                const double Lane_NumInfo[3]
 *                const double Info_Me[7]
 *                double TargetPosition
 *                double InLaneLCFlg
 *                double LCTrigSuccess
 *                const double Info_Lo[6]
 *                double TrigStart
 *                double OperationFinishFlgIn
 *                double LCStartFlg
 *                double LCEnbSts
 *                double TunEnbSts
 *                double LCForceShudown
 *                double TunForceShudown
 *                const double End[4]
 *                double *Curoperation
 *                double *OperationLongDislimit
 *                double RoadInfo[8]
 *                double *SpeedLimit
 *                double Info_MeRel[6]
 *                double *InLaneLCFlgOut
 *                double PreInfo_MeRel[6]
 *                double *OpSts
 *                double RoadInfo2[8]
 *                double *LCShutDwn2
 * Return Type  : void
 */
void OpSchedule(const double Navi_InfoTurn[28], const double Line_ShapeInfo[100],
                const double Lane_NumInfo[3], const double Info_Me[7], double
                TargetPosition, double InLaneLCFlg, double LCTrigSuccess, const
                double Info_Lo[6], double TrigStart, double OperationFinishFlgIn,
                double LCStartFlg, double LCEnbSts, double TunEnbSts, double
                LCForceShudown, double TunForceShudown, const double End[4],
                double *Curoperation, double *OperationLongDislimit, double
                RoadInfo[8], double *SpeedLimit, double Info_MeRel[6], double
                *InLaneLCFlgOut, double PreInfo_MeRel[6], double *OpSts, double
                RoadInfo2[8], double *LCShutDwn2)
{
  int ixstart;
  int LCOverDelay;
  int EgoPosTagFlg;
  double AbsCord_Ego[3];
  double LCFobOffset;
  double Zmax;
  double AbsCord_Trn[3];
  double Line_ShapeTemp[10];
  double dv0[4];
  double NaviEndOffset;
  double b_Navi_InfoTurn[3];
  int ix;
  boolean_T exitg1;
  double b_End;
  double dv1[10];
  double dv2[10];
  double RoadInfoTemp2_data[4];
  *OpSts = 0.0;

  /*  Use the lane info to judge whether previous operation is OK */
  *SpeedLimit = 3.8888888888888888;
  *InLaneLCFlgOut = PInLaneLCFlg;
  *Curoperation = 0.0;
  *OperationLongDislimit = 255.0;
  memset(&RoadInfo[0], 0, sizeof(double) << 3);
  for (ixstart = 0; ixstart < 6; ixstart++) {
    PreInfo_MeRel[ixstart] = Info_Me[ixstart];
    Info_MeRel[ixstart] = Info_Me[ixstart];
  }

  memset(&RoadInfo2[0], 0, sizeof(double) << 3);
  RoadInfo2[3] = 255.0;
  *LCShutDwn2 = 0.0;
  if (TrigStart > 0.5) {
    if (NexLCDelayCnt >= 1.0) {
      NexLCDelayCnt--;
      LCOverDelay = 0;
    } else {
      LCOverDelay = 1;
    }

    EgoPosTagFlg = 0;
    if (PFailRestoreCn > 0.5) {
      PFailRestoreCn--;
    }

    if (CurOp < 0.5) {
      /* Find an operation to do  */
      if ((Navi_InfoTurn[4] > 0.5) && (Navi_InfoTurn[5] > 0.5) && (TunEnbSts >
           0.5)) {
        AbsCord_Ego[0] = Info_Me[0];
        AbsCord_Ego[1] = Info_Me[1];
        AbsCord_Ego[2] = Info_Me[5];
        AbsCord_Trn[0] = Navi_InfoTurn[8];
        AbsCord_Trn[1] = Navi_InfoTurn[12];
        AbsCord_Trn[2] = Navi_InfoTurn[24];
        LCFobOffset = Info_Me[0] - Navi_InfoTurn[8];
        NaviEndOffset = Info_Me[1] - Navi_InfoTurn[12];

        /*                  AbsCord_Ego = [Info_Me(1),Info_Me(2),Info_Me(6)]; */
        if ((Info_Me[6] > Navi_InfoTurn[0] - 10.0) || ((PassJudgement
              (AbsCord_Ego, AbsCord_Trn) > 0.5) && (sqrt(LCFobOffset *
               LCFobOffset + NaviEndOffset * NaviEndOffset) < 10.0))) {
          b_Navi_InfoTurn[0] = Navi_InfoTurn[9];
          b_Navi_InfoTurn[1] = Navi_InfoTurn[13];
          b_Navi_InfoTurn[2] = Navi_InfoTurn[25];
          if (PassJudgement(AbsCord_Ego, b_Navi_InfoTurn) < 0.5) {
            LCFobOffset = Navi_InfoTurn[0] + 10.0;
            ixstart = 1;
            NaviEndOffset = Navi_InfoTurn[1] - 10.0;
            if (rtIsNaN(Navi_InfoTurn[1] - 10.0)) {
              ix = 2;
              exitg1 = false;
              while ((!exitg1) && (ix < 3)) {
                ixstart = 2;
                if (!rtIsNaN(LCFobOffset)) {
                  NaviEndOffset = LCFobOffset;
                  exitg1 = true;
                } else {
                  ix = 3;
                }
              }
            }

            if ((ixstart < 2) && (Navi_InfoTurn[0] + 10.0 < NaviEndOffset)) {
              NaviEndOffset = Navi_InfoTurn[0] + 10.0;
            }

            if (Info_Me[6] < NaviEndOffset) {
              if (End[3] > 0.5) {
                b_End = End[0];
              } else {
                b_End = Info_Me[6] + 255.0;
              }

              if (b_End > Navi_InfoTurn[1] + 30.0) {
                CurOp = 1.0;

                /*              RoadInfo = [EndCentX,EndCentY,LaneAngle,LaneWidth]; */
                RoadInfoExtractTr(Navi_InfoTurn, Info_Me, RoadInfo);

                /* Trans into ego cordition */
                EgoPosTagFlg = 1;
                for (ixstart = 0; ixstart < 28; ixstart++) {
                  PNavi_InfoTurn[ixstart] = Navi_InfoTurn[ixstart];
                  PNavi_InfoTurn2[ixstart] = PNavi_InfoTurn[ixstart];
                }

                PreOp = 1.0;
              }
            }
          }
        }

        LCFobOffset = Navi_InfoTurn[0] - 30.0;
      } else {
        if (Navi_InfoTurn[4] > 0.5) {
          LCFobOffset = Navi_InfoTurn[0] - 30.0;
        } else if (Navi_InfoTurn[5] > 0.5) {
          LCFobOffset = (Navi_InfoTurn[1] - 30.0) - 30.0;
        } else {
          LCFobOffset = Info_Me[6] + 255.0;
        }

        if ((Navi_InfoTurn[4] > 0.5) && (Navi_InfoTurn[5] > 0.5) && (Info_Me[6] >
             Navi_InfoTurn[0] - 20.0)) {
          *LCShutDwn2 = 1.0;
        }
      }

      if (End[3] > 0.5) {
        /*  Consider NaviEnd Just as Turn */
        NaviEndOffset = End[0] - 30.0;
      } else {
        NaviEndOffset = Info_Me[6] + 255.0;
      }

      if ((Info_Me[6] < LCFobOffset) && (LCOverDelay > 0.5) && (CurOp < 0.5) &&
          (LCEnbSts > 0.5) && (PFailRestoreCn < 0.5) && (LCTrigSuccess > 0.5)) {
        /*  LC is OK by object judgement */
        /*  Info_Lo trigger or abs(EgoLaneNum - TargetLaneNum)>0.5 trigger */
        /*                  if ObjTrig > 1.5 */
        /*  LC is Trigged */
        Zmax = LCFobOffset - Info_Me[6];
        LCFobOffset = NaviEndOffset - Info_Me[6];

        /*  Turn Fob LC dis        End Fob LC dis */
        if (((Zmax > 20.0) || ((Zmax > 5.0) && (InLaneLCFlg < 0.5))) &&
            ((LCFobOffset > 30.0) || (InLaneLCFlg < 0.5))) {
          CurOp = 5.0;

          /* RoadInfo = [EndCentX,EndCentY,LaneAngle,LaneWith]; */
          PTargetLaneNum = Lane_NumInfo[2];
          Line_ShapeInfoExtract(Lane_NumInfo[1], Line_ShapeInfo, Line_ShapeTemp);

          /* Relative Cord */
          RoadInfoExtractLC(Line_ShapeTemp, Zmax + 30.0, dv0);
          for (ixstart = 0; ixstart < 4; ixstart++) {
            RoadInfo[ixstart << 1] = dv0[ixstart];
          }

          if (InLaneLCFlg > 0.5) {
            for (ixstart = 0; ixstart < 4; ixstart++) {
              RoadInfo[1 + (ixstart << 1)] = RoadInfo[ixstart << 1];
            }

            RoadInfo[1] = Info_Lo[0];
            ixstart = 1;
            NaviEndOffset = Line_ShapeTemp[4];
            if (rtIsNaN(Line_ShapeTemp[4])) {
              ixstart = 2;
              NaviEndOffset = 50.0;
            }

            if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
              NaviEndOffset = 50.0;
            }

            if (fabs(Info_Lo[0]) > NaviEndOffset) {
              ixstart = 1;
              NaviEndOffset = Line_ShapeTemp[4];
              if (rtIsNaN(Line_ShapeTemp[4])) {
                ixstart = 2;
                NaviEndOffset = 50.0;
              }

              if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
                NaviEndOffset = 50.0;
              }

              RoadInfo[1] = NaviEndOffset;
            }

            RoadInfo[3] = TargetPosition;
            PInLaneLCFlgInt = 1.0;
          } else {
            Line_ShapeInfoExtract(Lane_NumInfo[2], Line_ShapeInfo,
                                  Line_ShapeTemp);
            RoadInfoExtractLC(Line_ShapeTemp, Zmax + 30.0, dv0);
            for (ixstart = 0; ixstart < 4; ixstart++) {
              RoadInfo[1 + (ixstart << 1)] = dv0[ixstart];
            }

            RoadInfo[1] = Info_Lo[0];
            ixstart = 1;
            NaviEndOffset = Line_ShapeTemp[4];
            if (rtIsNaN(Line_ShapeTemp[4])) {
              ixstart = 2;
              NaviEndOffset = 50.0;
            }

            if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
              NaviEndOffset = 50.0;
            }

            if (fabs(Info_Lo[0]) > NaviEndOffset) {
              ixstart = 1;
              NaviEndOffset = Line_ShapeTemp[4];
              if (rtIsNaN(Line_ShapeTemp[4])) {
                ixstart = 2;
                NaviEndOffset = 50.0;
              }

              if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
                NaviEndOffset = 50.0;
              }

              RoadInfo[1] = NaviEndOffset;
            }

            RoadInfo[3] = TargetPosition;
          }

          if (LCFobOffset > 30.0) {
            *OperationLongDislimit = Zmax + 30.0;
            if (LCFobOffset < Zmax + 30.0) {
              *OperationLongDislimit = LCFobOffset;
            }
          } else {
            *OperationLongDislimit = Zmax + 30.0;
            if ((LCFobOffset + 30.0) - 5.0 < Zmax + 30.0) {
              *OperationLongDislimit = (LCFobOffset + 30.0) - 5.0;
            }
          }

          EgoPosTagFlg = 1;
          PLCOPCnt++;
          if (PLCOPCnt > 1.0) {
            PLCOPCnt = 0.0;
          }

          PreOp = 5.0;
          PTargetLaneNum2 = PTargetLaneNum;
          LCFobOffset = Info_Lo[0];
          ixstart = 1;
          NaviEndOffset = Line_ShapeTemp[4];
          if (rtIsNaN(Line_ShapeTemp[4])) {
            ixstart = 2;
            NaviEndOffset = 50.0;
          }

          if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
            NaviEndOffset = 50.0;
          }

          if (fabs(Info_Lo[0]) > NaviEndOffset) {
            ixstart = 1;
            LCFobOffset = Line_ShapeTemp[4];
            if (rtIsNaN(Line_ShapeTemp[4])) {
              ixstart = 2;
              LCFobOffset = 50.0;
            }

            if ((ixstart < 2) && (50.0 < LCFobOffset)) {
              LCFobOffset = 50.0;
            }
          }

          Line_ShapeInfoExtract(PTargetLaneNum, Line_ShapeInfo, dv2);
          RoadInfoExtractLC(dv2, LCFobOffset, dv0);
          for (ixstart = 0; ixstart < 4; ixstart++) {
            RoadInfoTemp2_data[ixstart] = dv0[ixstart];
          }

          PCentTargetOffset = (RoadInfoTemp2_data[1] - TargetPosition) * cos
            (RoadInfoTemp2_data[2]);
        }
      }
    } else {
      if (CurOp > 0.5) {
        if (CurOp == 1.0) {
          RoadInfoExtractTr(PNavi_InfoTurn, Info_Me, RoadInfo);

          /*                  RoadInfo = PRoadInfo; */
        } else {
          if (CurOp == 5.0) {
            if (TunEnbSts > 0.5) {
              Zmax = (Navi_InfoTurn[0] - 30.0) - Info_Me[6];
            } else {
              Zmax = 255.0;
            }

            /* RoadInfo = [EndCentX,EndCentY,LaneAngle,LaneWith]; */
            Line_ShapeInfoExtract(Lane_NumInfo[1], Line_ShapeInfo,
                                  Line_ShapeTemp);

            /* Relative Cord */
            RoadInfoExtractLC(Line_ShapeTemp, Zmax + 30.0, dv0);
            for (ixstart = 0; ixstart < 4; ixstart++) {
              RoadInfo[ixstart << 1] = dv0[ixstart];
            }

            if (PInLaneLCFlgInt > 0.5) {
              for (ixstart = 0; ixstart < 4; ixstart++) {
                RoadInfo[1 + (ixstart << 1)] = RoadInfo[ixstart << 1];
              }

              RoadInfo[1] = Info_Lo[0];
              ixstart = 1;
              NaviEndOffset = Line_ShapeTemp[4];
              if (rtIsNaN(Line_ShapeTemp[4])) {
                ixstart = 2;
                NaviEndOffset = 50.0;
              }

              if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
                NaviEndOffset = 50.0;
              }

              if (fabs(Info_Lo[0]) > NaviEndOffset) {
                ixstart = 1;
                NaviEndOffset = Line_ShapeTemp[4];
                if (rtIsNaN(Line_ShapeTemp[4])) {
                  ixstart = 2;
                  NaviEndOffset = 50.0;
                }

                if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
                  NaviEndOffset = 50.0;
                }

                RoadInfo[1] = NaviEndOffset;
              }

              RoadInfo[3] = TargetPosition;
            } else {
              Line_ShapeInfoExtract(PTargetLaneNum, Line_ShapeInfo,
                                    Line_ShapeTemp);
              RoadInfoExtractLC(Line_ShapeTemp, Zmax + 30.0, dv0);
              for (ixstart = 0; ixstart < 4; ixstart++) {
                RoadInfo[1 + (ixstart << 1)] = dv0[ixstart];
              }

              RoadInfo[1] = Info_Lo[0];
              ixstart = 1;
              NaviEndOffset = Line_ShapeTemp[4];
              if (rtIsNaN(Line_ShapeTemp[4])) {
                ixstart = 2;
                NaviEndOffset = 50.0;
              }

              if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
                NaviEndOffset = 50.0;
              }

              if (fabs(Info_Lo[0]) > NaviEndOffset) {
                ixstart = 1;
                NaviEndOffset = Line_ShapeTemp[4];
                if (rtIsNaN(Line_ShapeTemp[4])) {
                  ixstart = 2;
                  NaviEndOffset = 50.0;
                }

                if ((ixstart < 2) && (50.0 < NaviEndOffset)) {
                  NaviEndOffset = 50.0;
                }

                RoadInfo[1] = NaviEndOffset;
              }

              RoadInfo[3] = TargetPosition;
            }

            *OperationLongDislimit = Zmax + 30.0;
          }
        }

        if (OperationFinishFlgIn < -0.5) {
          CurOp = 0.0;
          PFailRestoreCn = 100.0;
        }

        /* Update the operation status */
        if (fabs(CurOp - 5.0) < 0.5) {
          if ((OperationFinishFlgIn > 0.5) || (LCForceShudown > 0.5)) {
            /*                  if ((abs(PTargetLaneNum - EgoLaneNum)<0.5)&&(OperationFinishFlgIn>0.5))||(LCForceShudown > 0.5) */
            /*                  Line_ShapeTemp = Line_ShapeInfoExtract(PTargetLaneNum,Line_ShapeInfo); */
            /* AngleDifference & DisDifference */
            /*                  if (abs(Line_ShapeTemp(2))<AngTol)||(PInLaneLCFlgInt > 0.5)||(LCEnbSts < 0.5) */
            /* Previous is success                            */
            CurOp = 0.0;
            if (PInLaneLCFlgInt > 0.5) {
              PInLaneLCFlg = !(PInLaneLCFlg > 0.5);
              PInLaneLCFlgInt = 0.0;
            } else {
              NexLCDelayCnt = 100.0;
            }

            /*                  end    */
          } else {
            *OpSts = 1.0;
            if (fabs(PTargetLaneNum - Lane_NumInfo[1]) > 0.5) {
              *OpSts = 11.0;
            }

            if (OperationFinishFlgIn < 0.5) {
              *OpSts += 100.0;
            }
          }
        }

        if ((fabs(CurOp - 1.0) < 0.5) || (fabs(CurOp - 2.0) < 0.5)) {
          /*                  AbsCord_Trn = [PRoadInfo(2,1),PRoadInfo(2,2),PRoadInfo(2,3)]; */
          if ((OperationFinishFlgIn > 0.5) || (TunForceShudown > 0.5)) {
            CurOp = 0.0;
            memset(&PNavi_InfoTurn[0], 0, 28U * sizeof(double));
          } else {
            *OpSts = 1.0;
            if (fabs(Info_Me[5] - PNavi_InfoTurn[25]) >= 0.00052333333333333333)
            {
              *OpSts = 11.0;
            }

            AbsCord_Trn[0] = Info_Me[0];
            AbsCord_Trn[1] = Info_Me[1];
            AbsCord_Trn[2] = Info_Me[5];
            b_Navi_InfoTurn[0] = PNavi_InfoTurn[9];
            b_Navi_InfoTurn[1] = PNavi_InfoTurn[13];
            b_Navi_InfoTurn[2] = PNavi_InfoTurn[25];
            if (PassJudgement(AbsCord_Trn, b_Navi_InfoTurn) < 0.5) {
              *OpSts += 100.0;
            }

            if (OperationFinishFlgIn < 0.5) {
              *OpSts += 1000.0;
            }
          }
        }
      }
    }

    if (EgoPosTagFlg > 0.5) {
      /*              Temp = EgoCordOrig; */
      EgoCordOrig[0] = Info_Me[0];
      EgoCordOrig[1] = Info_Me[1];
      EgoCordOrig[2] = Info_Me[5];
    }

    if (LCStartFlg > 0.5) {
      for (ixstart = 0; ixstart < 3; ixstart++) {
        PreEgoCordOrig[ixstart] = EgoCordOrig[ixstart];
      }
    }

    AbsCord_Ego[0] = Info_Me[0];
    AbsCord_Ego[1] = Info_Me[1];
    AbsCord_Ego[2] = Info_Me[5];
    CordTransfer(AbsCord_Ego, EgoCordOrig, AbsCord_Trn);
    for (ixstart = 0; ixstart < 6; ixstart++) {
      Info_MeRel[ixstart] = Info_Me[ixstart];
    }

    Info_MeRel[0] = AbsCord_Trn[0];
    Info_MeRel[1] = AbsCord_Trn[1];
    Info_MeRel[5] = AbsCord_Trn[2];
    for (ixstart = 0; ixstart < 6; ixstart++) {
      PreInfo_MeRel[ixstart] = Info_MeRel[ixstart];
    }

    CordTransfer(AbsCord_Ego, PreEgoCordOrig, AbsCord_Trn);
    PreInfo_MeRel[0] = AbsCord_Trn[0];
    PreInfo_MeRel[1] = AbsCord_Trn[1];
    PreInfo_MeRel[5] = AbsCord_Trn[2];
    *Curoperation = CurOp;
    *InLaneLCFlgOut = PInLaneLCFlgInt;
    RoadInfo[0] = Info_MeRel[0];
    RoadInfo[2] = Info_MeRel[1];
    RoadInfo[4] = Info_MeRel[5];

    /*  RisEdge Update this for Obj monitor */
    if (fabs(PreOp - 1.0) < 0.5) {
      RoadInfoExtractTr(PNavi_InfoTurn2, Info_Me, RoadInfo2);
    } else {
      if (fabs(PreOp - 5.0) < 0.5) {
        Line_ShapeInfoExtract(PTargetLaneNum2, Line_ShapeInfo, dv1);
        RoadInfoExtractLC(dv1, 50.0, dv0);
        for (ixstart = 0; ixstart < 4; ixstart++) {
          RoadInfo2[1 + (ixstart << 1)] = dv0[ixstart];
        }

        RoadInfo2[3] -= PCentTargetOffset / (fabs(cos(RoadInfo2[5])) + 0.0001);
      }
    }
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void OpSchedule_init(void)
{
  int i8;
  CurOp = 0.0;
  NexLCDelayCnt = 0.0;
  for (i8 = 0; i8 < 3; i8++) {
    EgoCordOrig[i8] = 0.0;
    PreEgoCordOrig[i8] = EgoCordOrig[i8];
  }

  PInLaneLCFlg = 0.0;
  PLCOPCnt = 0.0;
  PTargetLaneNum = 1.0;
  PInLaneLCFlgInt = 0.0;
  PFailRestoreCn = 0.0;
  memset(&PNavi_InfoTurn[0], 0, 28U * sizeof(double));
  memset(&PNavi_InfoTurn2[0], 0, 28U * sizeof(double));
  PTargetLaneNum2 = 1.0;
  PreOp = 0.0;
  PCentTargetOffset = 0.0;
}

/*
 * File trailer for OpSchedule.c
 *
 * [EOF]
 */
