/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "main.h"
#include "DebugMain_terminate.h"
#include "DebugMain_initialize.h"

/* Function Declarations */
static void argInit_10x10_real_T(double result[100]);
static void argInit_127x26_real_T(double result[3302]);
static void argInit_1x3_real_T(double result[3]);
static void argInit_1x4_real_T(double result[4]);
static void argInit_1x8_real_T(double result[8]);
static void argInit_4x7_real_T(double result[28]);
static double argInit_real_T(void);
static void main_DebugMain(void);

/* Function Definitions */

/*
 * Arguments    : double result[100]
 * Return Type  : void
 */
static void argInit_10x10_real_T(double result[100])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 10; idx0++) {
    for (idx1 = 0; idx1 < 10; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + 10 * idx1] = argInit_real_T();
    }
  }
}

/*
 * Arguments    : double result[3302]
 * Return Type  : void
 */
static void argInit_127x26_real_T(double result[3302])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 127; idx0++) {
    for (idx1 = 0; idx1 < 26; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + 127 * idx1] = argInit_real_T();
    }
  }
}

/*
 * Arguments    : double result[3]
 * Return Type  : void
 */
static void argInit_1x3_real_T(double result[3])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 3; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : double result[4]
 * Return Type  : void
 */
static void argInit_1x4_real_T(double result[4])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 4; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : double result[8]
 * Return Type  : void
 */
static void argInit_1x8_real_T(double result[8])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 8; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : double result[28]
 * Return Type  : void
 */
static void argInit_4x7_real_T(double result[28])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 4; idx0++) {
    for (idx1 = 0; idx1 < 7; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + (idx1 << 2)] = argInit_real_T();
    }
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_DebugMain(void)
{
  double FusObjPre[3302];
  double Lane_NumInfoPre[3];
  double Line_ShapeInfo[100];
  double Veh_State[8];
  double Navi_Info[28];
  double TrigStart;
  double dv12[4];
  double PreviewDistance;
  double LateralDistance;
  double LongitudinalError;
  double LateralError;
  double TargetLongitudinalSpeed;
  double PathPlanControl;
  double TargetOrientationAngle;
  double PreviewTime;
  double PathPlanAvaliable;
  double SpeedLimit;
  double StopFlg;
  double aCal;

  /* Initialize function 'DebugMain' input arguments. */
  /* Initialize function input argument 'FusObjPre'. */
  argInit_127x26_real_T(FusObjPre);

  /* Initialize function input argument 'Lane_NumInfoPre'. */
  argInit_1x3_real_T(Lane_NumInfoPre);

  /* Initialize function input argument 'Line_ShapeInfo'. */
  argInit_10x10_real_T(Line_ShapeInfo);

  /* Initialize function input argument 'Veh_State'. */
  argInit_1x8_real_T(Veh_State);

  /* Initialize function input argument 'Navi_Info'. */
  argInit_4x7_real_T(Navi_Info);
  TrigStart = argInit_real_T();

  /* Initialize function input argument 'End'. */
  /* Call the entry-point 'DebugMain'. */
  argInit_1x4_real_T(dv12);
  DebugMain(FusObjPre, Lane_NumInfoPre, Line_ShapeInfo, Veh_State, Navi_Info,
            TrigStart, dv12, argInit_real_T(), argInit_real_T(), argInit_real_T(),
            argInit_real_T(), argInit_real_T(), argInit_real_T(), argInit_real_T
            (), argInit_real_T(), argInit_real_T(), &PreviewDistance,
            &LateralDistance, &LongitudinalError, &LateralError,
            &TargetLongitudinalSpeed, &PathPlanControl, &TargetOrientationAngle,
            &PreviewTime, &PathPlanAvaliable, &SpeedLimit, &StopFlg, &aCal);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  DebugMain_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_DebugMain();

  /* Terminate the application.
     You do not need to do this more than one time. */
  DebugMain_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
