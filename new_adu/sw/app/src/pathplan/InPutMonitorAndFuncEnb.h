/*
 * File: InPutMonitorAndFuncEnb.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef INPUTMONITORANDFUNCENB_H
#define INPUTMONITORANDFUNCENB_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void InPutMonitorAndFuncEnb(double TrigStart, const double Navi_InfoTurn
  [28], const double Line_ShapeInfo[100], const double Lane_NumInfo[3], const
  double Veh_State[8], double DisEngFlg, double *MonitorSts, double *LCEnbRes,
  double *TunEnbRes, double InputStatusFailCnt[3]);
extern void InPutMonitorAndFuncEnb_init(void);

#endif

/*
 * File trailer for InPutMonitorAndFuncEnb.h
 *
 * [EOF]
 */
