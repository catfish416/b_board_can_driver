/*
 * File: abs.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "abs.h"

/* Function Definitions */

/*
 * Arguments    : const double x[2]
 *                double y[2]
 * Return Type  : void
 */
void b_abs(const double x[2], double y[2])
{
  int k;
  for (k = 0; k < 2; k++) {
    y[k] = fabs(x[k]);
  }
}

/*
 * Arguments    : const double x[3]
 *                double y[3]
 * Return Type  : void
 */
void c_abs(const double x[3], double y[3])
{
  int k;
  for (k = 0; k < 3; k++) {
    y[k] = fabs(x[k]);
  }
}

/*
 * Arguments    : const double x[3]
 *                double y[3]
 * Return Type  : void
 */
void d_abs(const double x[3], double y[3])
{
  int k;
  for (k = 0; k < 3; k++) {
    y[k] = fabs(x[k]);
  }
}

/*
 * File trailer for abs.c
 *
 * [EOF]
 */
