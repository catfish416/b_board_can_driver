/*
 * File: ObjSelectDebugVersion.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

#ifndef OBJSELECTDEBUGVERSION_H
#define OBJSELECTDEBUGVERSION_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "DebugMain_types.h"

/* Function Declarations */
extern void ObjSelectDebugVersion(const double Line_ShapeInfo[100], const double
  Lane_NumInfo[3], double Veh_State[8], const double FusData[3302], double
  UseFakeCIPVEn, double TrigStart, double LCEnbSts, double PPEn, double b_CurOp,
  double Lane_NumInfoOut[3], double Info_Me[7], double *TargetPosition, double
  *InLaneLCFlg, double *ObjTrigOut, double *LCTrigSuccessOut, double Info_Lo[6],
  double Info_Fd[6], double Info_Fo[6], double Info_Ld[6], double *ObjSelectRes,
  double DbgInfo[10]);
extern void ObjSelectDebugVersion_init(void);

#endif

/*
 * File trailer for ObjSelectDebugVersion.h
 *
 * [EOF]
 */
