/*
 * File: MonitorObjDebugVersion.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "MonitorObjDebugVersion.h"

/* Function Declarations */
static void ObjOffsetCal(double Kur, double Xout, double Yout, double Angleout,
  double Xobj, double Yobj, double Vxobj, double Vyobj, double *OffsetX, double *
  OffsetY, double *OffsetVx, double *OffsetVy);
static void b_DisCal2Lane(double LaneAng, double x1, double b_y1, double xobj,
  double yobj, double *Dis, double *Dir);

/* Function Definitions */

/*
 * remove left to left edge
 * Arguments    : double Kur
 *                double Xout
 *                double Yout
 *                double Angleout
 *                double Xobj
 *                double Yobj
 *                double Vxobj
 *                double Vyobj
 *                double *OffsetX
 *                double *OffsetY
 *                double *OffsetVx
 *                double *OffsetVy
 * Return Type  : void
 */
static void ObjOffsetCal(double Kur, double Xout, double Yout, double Angleout,
  double Xobj, double Yobj, double Vxobj, double Vyobj, double *OffsetX, double *
  OffsetY, double *OffsetVx, double *OffsetVy)
{
  double CircleY;
  double C2;
  double A1;
  double C1;
  double A2;
  double B2;
  double CordObjMapLane_idx_0;
  double CordObjMapLane_idx_1;
  int i3;
  double ThetaKurCrsLane;
  double CordKurCrsLane_data[6];
  double Kur2;
  double FrontOffset;
  int CrossFlg;
  double b_C1[2];
  int exitg2;
  int exitg1;
  if (fabs(Kur) < 0.001) {
    /*  Treat as a straight lane */
    b_DisCal2Lane(0.0, 0.0, 0.0, Xobj, Yobj, OffsetY, &CircleY);
  } else {
    /*  Treat as a circle */
    CircleY = 1.0 / Kur;
    C2 = Yobj - CircleY;
    *OffsetY = sqrt(Xobj * Xobj + C2 * C2) - fabs(CircleY);
    if (Kur * *OffsetY > 0.0) {
      /* Right */
      *OffsetY = -fabs(*OffsetY);
    } else {
      /* Left */
      *OffsetY = fabs(*OffsetY);
    }
  }

  A1 = sin(Angleout);
  CircleY = cos(Angleout);
  C1 = Yout * cos(Angleout) - Xout * sin(Angleout);
  A2 = cos(Angleout);
  B2 = sin(Angleout);
  C2 = -Yobj * sin(Angleout) - Xobj * cos(Angleout);
  CordObjMapLane_idx_0 = (C1 * B2 - C2 * -CircleY) / (A2 * -CircleY - A1 * B2);
  CordObjMapLane_idx_1 = (A1 * C2 - A2 * C1) / (A2 * -CircleY - A1 * B2);
  for (i3 = 0; i3 < 3; i3++) {
    CordKurCrsLane_data[i3] = 0.0;
  }

  ThetaKurCrsLane = 0.0;
  Kur2 = Kur / sqrt(20.25 * (Kur * Kur) + 1.0);
  if (fabs(Kur) > 0.0001) {
    FrontOffset = fabs(atan(4.5 * Kur)) * fabs(1.0 / Kur2);
  } else {
    FrontOffset = 4.5;
  }

  /*      figure(12) */
  /*      hold off */
  /*      plot(0,0,'*'); */
  /*      hold on */
  /*      plot([Xout - 100*cos(Angleout),Xout + 100*cos(Angleout)],[Yout - 100*sin(Angleout),Yout + 100*sin(Angleout)],'g'); */
  /*      th = pi:0.1:2*pi; */
  /*      if abs(Kur)>1e-4 */
  /*          xkur = 1/Kur.*sin(th); */
  /*          ykur = 1/Kur.*cos(th) + 1/Kur; */
  /*          plot(xkur,ykur,'r'); */
  /*      else */
  /*          plot([0,100],[0,0],'r'); */
  /*      end     */
  if (fabs(Kur) > 0.0001) {
    *OffsetY = (*OffsetY + 1.0 / Kur2) - 1.0 / Kur;
    b_DisCal2Lane(Angleout, Xout, Yout, 0.0, 1.0 / Kur, &A2, &CircleY);
    if (fabs(A2) > fabs(1.0 / Kur2)) {
      /*  No Cross   */
      /*  Use Ego Traj to cal */
      /*  Not Cross But we can use this to calculate offset */
      CrossFlg = 1;
      ThetaKurCrsLane = Angleout;
      b_C1[0] = 1.0 / Kur2 * sin(Angleout);
      b_C1[1] = -1.0 / Kur2 * cos(Angleout) + 1.0 / Kur;
      for (i3 = 0; i3 < 2; i3++) {
        CordKurCrsLane_data[i3] = b_C1[i3];
      }
    } else {
      CircleY = Angleout;
      do {
        exitg2 = 0;
        while (CircleY < -3.1415926535897931) {
          CircleY += 6.2831853071795862;
        }

        if (CircleY >= 3.1415926535897931) {
          CircleY -= 6.2831853071795862;
        } else {
          exitg2 = 1;
        }
      } while (exitg2 == 0);

      /* Cross2Kur */
      B2 = CircleY - acos(fabs(A2 * Kur2));

      /*              while(1) */
      /*                 if ThetaKurCrsLane1 < 0 */
      /*                     ThetaKurCrsLane1 = ThetaKurCrsLane1 + 2*pi; */
      /*                 elseif ThetaKurCrsLane1 >= 2*pi */
      /*                     ThetaKurCrsLane1 = ThetaKurCrsLane1 - 2*pi; */
      /*                 else */
      /*                      break; */
      /*                 end */
      /*              end */
      CircleY += acos(fabs(A2 * Kur2));

      /*              while(1) */
      /*                 if ThetaKurCrsLane2 < 0 */
      /*                     ThetaKurCrsLane2 = ThetaKurCrsLane2 + 2*pi; */
      /*                 elseif ThetaKurCrsLane2 >= 2*pi */
      /*                     ThetaKurCrsLane2 = ThetaKurCrsLane2 - 2*pi; */
      /*                 else */
      /*                      break; */
      /*                 end */
      /*              end */
      if (Kur >= 0.0) {
        if (B2 >= 0.0) {
          CrossFlg = 1;
          ThetaKurCrsLane = B2;
          b_C1[0] = 1.0 / Kur2 * sin(B2);
          b_C1[1] = -1.0 / Kur2 * cos(B2) + 1.0 / Kur;
          for (i3 = 0; i3 < 2; i3++) {
            CordKurCrsLane_data[i3] = b_C1[i3];
          }
        } else if (CircleY >= 0.0) {
          CrossFlg = 1;
          ThetaKurCrsLane = CircleY;
          b_C1[0] = 1.0 / Kur2 * sin(CircleY);
          b_C1[1] = -1.0 / Kur2 * cos(CircleY) + 1.0 / Kur;
          for (i3 = 0; i3 < 2; i3++) {
            CordKurCrsLane_data[i3] = b_C1[i3];
          }
        } else {
          CrossFlg = 0;
        }
      } else if (CircleY <= 0.0) {
        CrossFlg = 1;
        ThetaKurCrsLane = CircleY;
        b_C1[0] = 1.0 / Kur2 * sin(CircleY);
        b_C1[1] = -1.0 / Kur2 * cos(CircleY) + 1.0 / Kur;
        for (i3 = 0; i3 < 2; i3++) {
          CordKurCrsLane_data[i3] = b_C1[i3];
        }
      } else if (B2 <= 0.0) {
        CrossFlg = 1;
        ThetaKurCrsLane = B2;
        b_C1[0] = 1.0 / Kur2 * sin(B2);
        b_C1[1] = -1.0 / Kur2 * cos(B2) + 1.0 / Kur;
        for (i3 = 0; i3 < 2; i3++) {
          CordKurCrsLane_data[i3] = b_C1[i3];
        }
      } else {
        CrossFlg = 0;
      }
    }
  } else if (A1 * C1 >= 0.0) {
    CrossFlg = 0;
  } else {
    /* Cross */
    CrossFlg = 1;
    b_C1[0] = -C1 / A1;
    b_C1[1] = 0.0;
    for (i3 = 0; i3 < 2; i3++) {
      CordKurCrsLane_data[i3] = b_C1[i3];
    }
  }

  if (CrossFlg > 0.5) {
    if (CordObjMapLane_idx_0 > CordKurCrsLane_data[0]) {
      b_DisCal2Lane(Angleout, Xout, Yout, Xobj, Yobj, &A1, &CircleY);
      if (fabs(Kur) > 0.0001) {
        /*                  ThetaLane = Angleout - acos(DisKur2Lane*Kur);                                       */
        /*                  CordKurMapLane = [(1/Kur*cos(ThetaLane) - 1/Kur),1/Kur*sin(ThetaLane)]; */
        /*                  OffsetYLane = Dis2Lane; */
        /*                  OffsetXLane = sqrt((CordObjMapLane(1)-CordKurMapLane(1))^2 + (CordObjMapLane(2)-CordKurMapLane(2))^2) + abs(ThetaLane * 1/Kur);      */
        C2 = CordObjMapLane_idx_0 - CordKurCrsLane_data[0];
        CircleY = CordObjMapLane_idx_1 - CordKurCrsLane_data[1];
        A2 = CordObjMapLane_idx_0 - Xobj;
        B2 = CordObjMapLane_idx_1 - Yobj;
        CircleY = (sqrt(C2 * C2 + CircleY * CircleY) + fabs(ThetaKurCrsLane /
                    Kur2)) + sqrt(A2 * A2 + B2 * B2);
      } else {
        C2 = CordObjMapLane_idx_0 - CordKurCrsLane_data[0];
        CircleY = CordObjMapLane_idx_1 - CordKurCrsLane_data[1];
        A2 = CordObjMapLane_idx_0 - Xobj;
        B2 = CordObjMapLane_idx_1 - Yobj;
        CircleY = (sqrt(C2 * C2 + CircleY * CircleY) + fabs(CordKurCrsLane_data
                    [0])) + sqrt(A2 * A2 + B2 * B2);
      }
    } else {
      A1 = 255.0;
      CircleY = 255.0;
    }

    if (fabs(Kur) > 0.0001) {
      A2 = atan(Xobj * Kur / (1.0 - Yobj * Kur));
      do {
        exitg1 = 0;
        while (A2 < -3.1415926535897931) {
          A2 += 6.2831853071795862;
        }

        if (A2 >= 3.1415926535897931) {
          A2 -= 6.2831853071795862;
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (fabs(A2) < fabs(ThetaKurCrsLane)) {
        *OffsetX = fabs(1.0 / Kur2 * A2);
      } else {
        b_DisCal2Lane(Angleout, Xout, Yout, Xobj, Yobj, &A1, &CircleY);
        if (fabs(Kur) > 0.0001) {
          /*                  ThetaLane = Angleout - acos(DisKur2Lane*Kur);                                       */
          /*                  CordKurMapLane = [(1/Kur*cos(ThetaLane) - 1/Kur),1/Kur*sin(ThetaLane)]; */
          /*                  OffsetYLane = Dis2Lane; */
          /*                  OffsetXLane = sqrt((CordObjMapLane(1)-CordKurMapLane(1))^2 + (CordObjMapLane(2)-CordKurMapLane(2))^2) + abs(ThetaLane * 1/Kur);      */
          C2 = CordObjMapLane_idx_0 - CordKurCrsLane_data[0];
          CircleY = CordObjMapLane_idx_1 - CordKurCrsLane_data[1];
          A2 = CordObjMapLane_idx_0 - Xobj;
          B2 = CordObjMapLane_idx_1 - Yobj;
          CircleY = (sqrt(C2 * C2 + CircleY * CircleY) + fabs(ThetaKurCrsLane /
                      Kur2)) + sqrt(A2 * A2 + B2 * B2);
        } else {
          C2 = CordObjMapLane_idx_0 - CordKurCrsLane_data[0];
          CircleY = CordObjMapLane_idx_1 - CordKurCrsLane_data[1];
          A2 = CordObjMapLane_idx_0 - Xobj;
          B2 = CordObjMapLane_idx_1 - Yobj;
          CircleY = (sqrt(C2 * C2 + CircleY * CircleY) + fabs
                     (CordKurCrsLane_data[0])) + sqrt(A2 * A2 + B2 * B2);
        }

        A2 = Angleout;
        *OffsetY = 255.0;
        *OffsetX = 255.0;
      }
    } else if (Xobj < CordKurCrsLane_data[0]) {
      A2 = 0.0;
      *OffsetY = Yobj;
      *OffsetX = Xobj;
    } else {
      A2 = Angleout;
      *OffsetY = 255.0;
      *OffsetX = 255.0;
    }

    if (fabs(A1) < fabs(*OffsetY)) {
      /*              NearLane = 1; */
      *OffsetX = CircleY;
      *OffsetY = A1;
      A2 = Angleout;
    } else {
      /*              NearLane = 0; */
    }

    *OffsetVy = Vyobj * cos(A2) - Vxobj * sin(A2);
    *OffsetVx = Vyobj * sin(A2) + Vxobj * cos(A2);
    *OffsetX -= FrontOffset;
  } else {
    /* Use Ego traj         */
    if (fabs(Kur) > 0.0001) {
      A2 = atan(Xobj * Kur / (1.0 - Yobj * Kur));
      *OffsetX = fabs(1.0 / Kur2 * A2);
    } else {
      *OffsetX = Xobj;
      A2 = Angleout;
    }

    *OffsetX -= 4.5;
    *OffsetVy = Vyobj * cos(A2) - Vxobj * sin(A2);
    *OffsetVx = Vyobj * sin(A2) + Vxobj * cos(A2);
  }
}

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
static void b_DisCal2Lane(double LaneAng, double x1, double b_y1, double xobj,
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
    if (B * *Dis > 0.0) {
      *Dir = 0.0;
      *Dis = fabs(*Dis);
    } else {
      *Dir = 1.0;
      *Dis = -fabs(*Dis);
    }
  } else if (K * *Dis > 0.0) {
    /* Right */
    *Dir = 0.0;
    *Dis = -fabs(*Dis);
  } else {
    /* Left */
    *Dir = 1.0;
    *Dis = fabs(*Dis);
  }

  /*      Dis = abs(Dis);     */
}

/*
 * Fusobj = zeros(127,26);
 * Arguments    : double PPEn
 *                const double RoadInfo[8]
 *                double b_CurOp
 *                const double Fusobj[3302]
 *                const double Info_Me[6]
 *                double kur
 *                const double Line_ShapeInfo[100]
 *                const double Lane_NumInfo[3]
 *                double *StopFlg
 *                double *StopArc
 *                double *ArcNex
 *                double *ArcPre
 *                double *VPre
 *                double *VNex
 *                double *aCal
 *                double CIPOInfo[5]
 *                double *StopReason
 * Return Type  : void
 */
void MonitorObjDebugVersion(double PPEn, const double RoadInfo[8], double
  b_CurOp, const double Fusobj[3302], const double Info_Me[6], double kur, const
  double Line_ShapeInfo[100], const double Lane_NumInfo[3], double *StopFlg,
  double *StopArc, double *ArcNex, double *ArcPre, double *VPre, double *VNex,
  double *aCal, double CIPOInfo[5], double *StopReason)
{
  int PStopReasonTemp;
  double c_V_me;
  int StopReasonTemp;
  int InRoadFlg;
  static const unsigned char uv1[5] = { MAX_uint8_T, MAX_uint8_T, 0U, 0U, 0U };

  double aCalTemp;
  double CIPOInfoTemp[5];
  int i;
  boolean_T exitg1;
  boolean_T guard1 = false;
  double DisToLaneTmp;
  int b_i;
  boolean_T exitg2;
  double Xpos;
  double Ypos;
  double Vx2;
  boolean_T guard2 = false;
  double Time2ColidF;
  double b_DisToLaneTmp;
  PStopReasonTemp = 0;
  c_V_me = Info_Me[2];
  *ArcNex = Info_Me[2] * 0.01;
  *ArcPre = Info_Me[2] * 2.0;
  *VPre = Info_Me[2];
  *VNex = Info_Me[2];
  *aCal = 0.0;

  /*  StopReason 0 - NoStop 1 Obj stay in Safety Zone 2 Obj will not leave to avoid collision 3 Obj will enter to collision  */
  *StopReason = 0.0;
  StopReasonTemp = 0;
  *StopArc = 0.0;
  for (InRoadFlg = 0; InRoadFlg < 5; InRoadFlg++) {
    CIPOInfo[InRoadFlg] = uv1[InRoadFlg];
  }

  if (PPEn > 0.5) {
    aCalTemp = 0.0;

    /* Only now dangerous obj is considered, all the possible obj is */
    /* not considered         */
    for (InRoadFlg = 0; InRoadFlg < 5; InRoadFlg++) {
      CIPOInfoTemp[InRoadFlg] = CIPOInfo[InRoadFlg];
    }

    i = 0;
    exitg1 = false;
    while ((!exitg1) && ((i < 127) && (!(Fusobj[i] < 0.5)))) {
      if (Fusobj[127 + i] > 0.0) {
        CIPOInfoTemp[0] = Fusobj[127 + i];
        CIPOInfoTemp[1] = Fusobj[381 + i];
        CIPOInfoTemp[2] = Fusobj[254 + i] + c_V_me;
        CIPOInfoTemp[3] = Fusobj[508 + i];
        CIPOInfoTemp[4] = Fusobj[762 + i];

        /*                          if abs(CIPOInfoTemp(4))<0.6 */
        /*                              CIPOInfoTemp(4) = 0; */
        /*                          end                         */
        InRoadFlg = 0;

        /*  1 3 5 */
        if (Lane_NumInfo[0] > 0.5) {
          b_i = 0;
          exitg2 = false;
          while ((!exitg2) && (b_i <= (int)Lane_NumInfo[0] - 1)) {
            guard2 = false;
            if ((fabs(Lane_NumInfo[1] - (1.0 + (double)b_i)) < 0.1) && ((fabs
                  (Line_ShapeInfo[b_i]) > 10.0) || (fabs(Line_ShapeInfo[10 + b_i])
                  > 10.0))) {
              guard2 = true;
            } else {
              b_DisCal2Lane(-atan(Line_ShapeInfo[10 + b_i]), 0.0,
                            -Line_ShapeInfo[b_i], CIPOInfoTemp[0], CIPOInfoTemp
                            [1], &DisToLaneTmp, &Time2ColidF);
              if (DisToLaneTmp > 0.0) {
                b_DisToLaneTmp = DisToLaneTmp * cos(atan(Line_ShapeInfo[10])) -
                  CIPOInfoTemp[4] / 2.0;
              } else {
                b_DisToLaneTmp = DisToLaneTmp * cos(atan(Line_ShapeInfo[10])) +
                  CIPOInfoTemp[4] / 2.0;
              }

              if (fabs(b_DisToLaneTmp) < Line_ShapeInfo[50 + b_i] / 2.0 + 0.2) {
                InRoadFlg = 1;
                exitg2 = true;
              } else {
                guard2 = true;
              }
            }

            if (guard2) {
              b_i++;
            }
          }
        } else {
          InRoadFlg = 1;
        }

        /*                          InRoadFlg = 1; */
        if ((InRoadFlg < 0.5) && (fabs(b_CurOp - 5.0) < 0.5)) {
        } else {
          ObjOffsetCal(kur, RoadInfo[1], RoadInfo[3], RoadInfo[5], Fusobj[127 +
                       i], Fusobj[381 + i], CIPOInfoTemp[2], Fusobj[508 + i],
                       &Xpos, &Ypos, &Vx2, &DisToLaneTmp);
          if (Xpos == 255.0) {
            Xpos = 255.0;
          }

          Xpos = (Xpos - 8.0) + 4.5;
          if (fabs(1.0 - Fusobj[381 + i] * kur) > 0.1) {
            if ((1.2 + Fusobj[762 + i] / 2.0) - fabs(Ypos) > 0.0) {
              DisToLaneTmp = 2.0 * ((1.2 + Fusobj[762 + i] / 2.0) - (-Ypos)) /
                0.01;
              InRoadFlg = 0;
            } else {
              /* Time to Enter */
              InRoadFlg = 100;
              DisToLaneTmp = 0.0;
            }

            if (Xpos > 0.0) {
              if (6.0 - Xpos > 0.0) {
                if (Vx2 - c_V_me >= 0.0) {
                  Time2ColidF = 100.0;
                } else {
                  Time2ColidF = Xpos / (fabs(c_V_me - Vx2) + 0.01);
                }
              } else if (Vx2 - c_V_me >= 0.0) {
                Time2ColidF = 100.0;
              } else {
                Time2ColidF = Xpos / (fabs(c_V_me - Vx2) + 0.01);
              }
            } else {
              Time2ColidF = 0.0;
            }

            aCalTemp = 0.0;

            /*                          a Stop is request */
            if ((1.2 + Fusobj[762 + i] / 2.0 > fabs(Ypos)) && (2.0 > Xpos)) {
              StopReasonTemp = 1;
            } else if ((Time2ColidF < DisToLaneTmp + 0.5) && (Time2ColidF < 5.5)
                       && (Time2ColidF > InRoadFlg) && (InRoadFlg < 2.5)) {
              StopReasonTemp = 2;

              /*                              elseif( && (Time2ColidF < TimeSafeTol))  */
              /*                                  StopReasonTemp = 3; */
            } else {
              StopReasonTemp = 0;
            }

            if (StopReasonTemp > 0) {
              if (Xpos > 0.0) {
                if (Vx2 < 0.0) {
                  aCalTemp = (-(c_V_me * c_V_me) + 2.0 * c_V_me * Vx2) / 2.0 /
                    (Xpos + 0.01);
                } else {
                  DisToLaneTmp = c_V_me - Vx2;
                  aCalTemp = -(DisToLaneTmp * DisToLaneTmp) / 2.0 / (Xpos + 0.01);
                }
              } else {
                aCalTemp = -2.0;
              }

              aCalTemp *= 1.1;
              if (((double)StopReasonTemp - 1.0 < 0.5) && (aCalTemp > -0.1)) {
                aCalTemp = -0.1;
              }
            }

            if (aCalTemp < -2.0) {
              aCalTemp = -2.0;
            }

            /*                      aCal = aCalTemp;                     */
            /* Not consider rear obj      */
          }
        }
      }

      guard1 = false;
      if (*aCal > aCalTemp) {
        *aCal = aCalTemp;
        for (InRoadFlg = 0; InRoadFlg < 5; InRoadFlg++) {
          CIPOInfo[InRoadFlg] = CIPOInfoTemp[InRoadFlg];
        }

        *StopReason = StopReasonTemp;
        CIPOInfo[0] = CIPOInfoTemp[0] + 8.0;
        if (aCalTemp <= -2.0) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        i++;
      }
    }

    /*  Debounce */
    /*          figure(13) */
    /*          plot(Cnt/100,PaCal,'r.'); */
    /*          hold on */
    /*          plot(Cnt/100,aCal,'b.'); */
    /*          figure(11) */
    if (!(StopReasonTemp < 0.5)) {
      PStopReasonTemp = StopReasonTemp;
    }

    DisToLaneTmp = *aCal;
    *aCal *= 0.2;
    if ((DisToLaneTmp <= -0.1) || (*aCal <= -0.1)) {
      DisToLaneTmp = fabs(Info_Me[2] / *aCal);
      if (DisToLaneTmp > 2.0) {
        *ArcPre = Info_Me[2] * 2.0 + *aCal * 4.0 / 2.0;
        *VPre = Info_Me[2] + *aCal * 2.0;
      } else {
        *ArcPre = fabs(Info_Me[2] * Info_Me[2] / 2.0 / *aCal);
        *VPre = 0.0;
      }

      if (DisToLaneTmp > 0.01) {
        *ArcNex = Info_Me[2] * 0.01 + *aCal * 0.0001 / 2.0;
        *VNex = Info_Me[2] + *aCal * 0.01;
      } else {
        *ArcNex = fabs(Info_Me[2] * Info_Me[2] / 2.0 / *aCal);
        *VNex = 0.0;
      }
    } else {
      /*              aCal = 0;ArcNex = V_me*NexTime;ArcPre = V_me*PreTime;VPre = V_me;VNex = V_me; */
      if ((PStopReasonTemp > 0.5) && (Info_Me[2] < 1.0)) {
        *aCal = -0.1;
        DisToLaneTmp = fabs(Info_Me[2] / -0.1);
        if (DisToLaneTmp > 2.0) {
          *ArcPre = Info_Me[2] * 2.0 + -0.2;
          *VPre = Info_Me[2] + -0.2;
        } else {
          *ArcPre = fabs(Info_Me[2] * Info_Me[2] / 2.0 / -0.1);
          *VPre = 0.0;
        }

        if (DisToLaneTmp > 0.01) {
          *ArcNex = Info_Me[2] * 0.01 + -5.0E-6;
          *VNex = Info_Me[2] + -0.001;
        } else {
          *ArcNex = fabs(Info_Me[2] * Info_Me[2] / 2.0 / -0.1);
          *VNex = 0.0;
        }
      } else {
        *ArcPre = 0.0;
        *VPre = 0.0;
        *ArcNex = 0.0;
        *VNex = 0.0;
        *aCal = -0.1;
      }
    }
  }

  *StopFlg = 0.0;
}

/*
 * File trailer for MonitorObjDebugVersion.c
 *
 * [EOF]
 */
