/*
 * File: norm.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "norm.h"

/* Function Definitions */

/*
 * Arguments    : const double x[3]
 * Return Type  : double
 */
double b_norm(const double x[3])
{
  double y;
  int k;
  y = 0.0;
  for (k = 0; k < 3; k++) {
    y += fabs(x[k]);
  }

  return y;
}

/*
 * Arguments    : const double x[3]
 * Return Type  : double
 */
double c_norm(const double x[3])
{
  double y;
  double scale;
  int k;
  double absxk;
  double t;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  for (k = 0; k < 3; k++) {
    absxk = fabs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

/*
 * Arguments    : const double x[15]
 * Return Type  : double
 */
double norm(const double x[15])
{
  double y;
  int k;
  y = 0.0;
  for (k = 0; k < 15; k++) {
    y += fabs(x[k]);
  }

  return y;
}

/*
 * File trailer for norm.c
 *
 * [EOF]
 */
