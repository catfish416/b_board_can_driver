/*
 * File: diag.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "diag.h"

/* Function Definitions */

/*
 * Arguments    : const double v[15]
 *                double d[225]
 * Return Type  : void
 */
void diag(const double v[15], double d[225])
{
  int j;
  memset(&d[0], 0, 225U * sizeof(double));
  for (j = 0; j < 15; j++) {
    d[j + 15 * j] = v[j];
  }
}

/*
 * File trailer for diag.c
 *
 * [EOF]
 */
