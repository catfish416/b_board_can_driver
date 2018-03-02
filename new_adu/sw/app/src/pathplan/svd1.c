/*
 * File: svd1.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "svd1.h"

/* Function Definitions */

/*
 * Arguments    : double A
 *                double *U
 *                double *S
 *                double *b_V
 * Return Type  : void
 */
void svd(double A, double *U, double *S, double *b_V)
{
  int m;
  m = 1;
  *S = A;
  *U = 1.0;
  *b_V = 1.0;
  if (A != 0.0) {
    *S = fabs(A);
    *U = A / *S;
  }

  while (m > 0) {
    if (*S < 0.0) {
      *S = -*S;
      *b_V = -*b_V;
    }

    m = 0;
  }
}

/*
 * File trailer for svd1.c
 *
 * [EOF]
 */
