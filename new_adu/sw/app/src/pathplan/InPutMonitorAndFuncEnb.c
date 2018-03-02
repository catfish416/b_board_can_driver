/*
 * File: InPutMonitorAndFuncEnb.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "InPutMonitorAndFuncEnb.h"

/* Variable Definitions */
static double TunEnbDebncCnt;
static double LCEnbDebncCnt;
static double Veh_StatusCnt;
static double PInputStatusFailCnt[3];

/* Function Definitions */

/*
 * Arguments    : double TrigStart
 *                const double Navi_InfoTurn[28]
 *                const double Line_ShapeInfo[100]
 *                const double Lane_NumInfo[3]
 *                const double Veh_State[8]
 *                double DisEngFlg
 *                double *MonitorSts
 *                double *LCEnbRes
 *                double *TunEnbRes
 *                double InputStatusFailCnt[3]
 * Return Type  : void
 */
void InPutMonitorAndFuncEnb(double TrigStart, const double Navi_InfoTurn[28],
  const double Line_ShapeInfo[100], const double Lane_NumInfo[3], const double
  Veh_State[8], double DisEngFlg, double *MonitorSts, double *LCEnbRes, double
  *TunEnbRes, double InputStatusFailCnt[3])
{
  int Veh_Status;
  int i;
  double TunOffset;
  int LCEnbResTemp;
  double OffToTurnIn;
  boolean_T exitg1;
  *TunEnbRes = 0.0;
  *LCEnbRes = 0.0;
  *MonitorSts = 0.0;
  Veh_Status = 0;
  if (TrigStart > 0.5) {
    /*  00 - module ill  */
    /*  11 - module LC ill  */
    /*  12 - module Tun ill  */
    /*  10 - module healthy */
    if ((fabs(Veh_State[0]) > 100000.0) || (fabs(Veh_State[1]) > 100000.0)) {
      i = 0;
    } else {
      i = 1;
    }

    if (i < 0.5) {
      Veh_StatusCnt = 20.0;
    } else if (Veh_StatusCnt < 0.5) {
      Veh_Status = 1;
    } else {
      Veh_StatusCnt--;
    }

    /*  Tun Func Status */
    i = 1;
    if (Veh_Status > 0.5) {
      if ((Navi_InfoTurn[4] < 0.5) || (Navi_InfoTurn[5] < 0.5)) {
        /*  TunTrig will be forbidden */
        i = 0;
      } else {
        TunOffset = Navi_InfoTurn[1] - Navi_InfoTurn[0];
        if ((TunOffset <= 18.0) || (TunOffset > 100.0) || (fabs(sin
              (Navi_InfoTurn[25] - Navi_InfoTurn[24])) < 0.5)) {
          /* Bypass small turn  */
          i = 0;
        } else if ((Navi_InfoTurn[6] < 0.5) || (Navi_InfoTurn[7] < 0.5) ||
                   (!(Navi_InfoTurn[2] - Navi_InfoTurn[1] < 10.0))) {
        } else {
          /*  Next turn is coming */
          i = 0;
        }

        TunOffset = Navi_InfoTurn[8] - Veh_State[0];
        OffToTurnIn = Navi_InfoTurn[12] - Veh_State[1];
        TunOffset = sqrt(TunOffset * TunOffset + OffToTurnIn * OffToTurnIn);
        OffToTurnIn = fabs(Navi_InfoTurn[0] - Veh_State[3]);
        if ((TunOffset > OffToTurnIn + 50.0) || (TunOffset < OffToTurnIn - 50.0))
        {
          i = 0;
        }

        if (DisEngFlg > 0.5) {
          i = 0;
        }
      }
    } else {
      i = 0;
    }

    /*  Debounce */
    if (i < 0.5) {
      TunEnbDebncCnt = 50.0;
    } else if (TunEnbDebncCnt < 0.5) {
      *TunEnbRes = 1.0;
    } else {
      TunEnbDebncCnt--;
    }

    /*  LC Func Status */
    LCEnbResTemp = 1;
    if (Veh_Status > 0.5) {
      if ((Lane_NumInfo[0] < 0.5) || (Lane_NumInfo[2] < 0.5) || (Lane_NumInfo[1]
           < 0.5)) {
        LCEnbResTemp = 0;
      } else {
        i = 0;
        exitg1 = false;
        while ((!exitg1) && (i <= (int)Lane_NumInfo[0] - 1)) {
          if (1.0 + (double)i > 10.0) {
            LCEnbResTemp = 0;
            exitg1 = true;
          } else if (Line_ShapeInfo[40 + i] < 10.0) {
            LCEnbResTemp = 0;
            exitg1 = true;
          } else if (Line_ShapeInfo[50 + i] < 2.0) {
            LCEnbResTemp = 0;
            exitg1 = true;
          } else if ((fabs(Lane_NumInfo[1] - (1.0 + (double)i)) < 0.1) && ((fabs
                       (Line_ShapeInfo[i]) > 10.0) || (fabs(Line_ShapeInfo[10 +
                        i]) > 10.0))) {
            LCEnbResTemp = 0;
            exitg1 = true;
          } else if (fabs(Line_ShapeInfo[10 + i]) > 0.2) {
            LCEnbResTemp = 0;
            exitg1 = true;
          } else if (fabs(2.0 * Line_ShapeInfo[20 + i]) > 0.01) {
            LCEnbResTemp = 0;
            exitg1 = true;
          } else {
            i++;
          }
        }

        if (DisEngFlg > 0.5) {
          LCEnbResTemp = 0;
        }
      }
    } else {
      LCEnbResTemp = 0;
    }

    /*  Debounce */
    if (LCEnbResTemp < 0.5) {
      LCEnbDebncCnt = 50.0;
    } else if (LCEnbDebncCnt < 0.5) {
      *LCEnbRes = 1.0;
    } else {
      LCEnbDebncCnt--;
    }

    /*  Monitor Status Update */
    if (Veh_Status < 0.5) {
      *MonitorSts = -10.0;
      PInputStatusFailCnt[2]++;
    } else if ((*LCEnbRes < 0.5) && (*TunEnbRes < 0.5)) {
    } else {
      if (*LCEnbRes > 0.5) {
        *MonitorSts = 11.0;
      } else {
        PInputStatusFailCnt[0]++;
      }

      if (*TunEnbRes > 0.5) {
        *MonitorSts = 12.0;
        if (*LCEnbRes > 0.5) {
          *MonitorSts = 10.0;
        }
      } else {
        PInputStatusFailCnt[1]++;
      }
    }
  } else {
    TunEnbDebncCnt = 50.0;
    LCEnbDebncCnt = 50.0;
    for (i = 0; i < 3; i++) {
      PInputStatusFailCnt[i] = 0.0;
    }

    Veh_StatusCnt = 20.0;
  }

  for (i = 0; i < 3; i++) {
    InputStatusFailCnt[i] = PInputStatusFailCnt[i];
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void InPutMonitorAndFuncEnb_init(void)
{
  int i;
  TunEnbDebncCnt = 50.0;
  LCEnbDebncCnt = 50.0;
  Veh_StatusCnt = 20.0;
  for (i = 0; i < 3; i++) {
    PInputStatusFailCnt[i] = 0.0;
  }
}

/*
 * File trailer for InPutMonitorAndFuncEnb.c
 *
 * [EOF]
 */
