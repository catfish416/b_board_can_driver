/*
 * File: pinv.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "pinv.h"
#include "svd1.h"

/* Function Definitions */

/*
 * Arguments    : double A
 * Return Type  : double
 */
double pinv(double A)
{
  double b_X;
  double U;
  double S;
  double b_V;
  int r;
  b_X = 0.0;
  if ((!rtIsInf(A)) && (!rtIsNaN(A))) {
    svd(A, &U, &S, &b_V);
  } else {
    U = rtNaN;
    S = rtNaN;
    b_V = rtNaN;
  }

  r = 0;
  if (S > S * 2.2204460492503131E-16) {
    r = 1;
  }

  if (r > 0) {
    S = 1.0 / S;
    r = 1;
    while (r <= 1) {
      b_V *= S;
      r = 2;
    }

    if (U != 0.0) {
      b_X = U * b_V;
    }
  }

  return b_X;
}

/*
 * File trailer for pinv.c
 *
 * [EOF]
 */
