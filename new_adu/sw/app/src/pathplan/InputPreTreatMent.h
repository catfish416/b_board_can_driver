/*
 * File: InputPreTreatMent.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef INPUTPRETREATMENT_H
#define INPUTPRETREATMENT_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern double InputPreTreatMent(const double End[4], const double Veh_State[8],
  double EPS_Status, double ResSwAct, double DrvBrkEng, double FusObjPre[3302],
  double Lane_NumInfoPre[3], double kur, double TurnLight, const double
  Navi_Info[28]);

#endif

/*
 * File trailer for InputPreTreatMent.h
 *
 * [EOF]
 */
