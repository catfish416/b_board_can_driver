/*
 * File: eml_setop.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "eml_setop.h"

/* Function Declarations */
static double skip_to_last_equal_value(int *k, const double x_data[], const int
  x_size[1]);

/* Function Definitions */

/*
 * Arguments    : int *k
 *                const double x_data[]
 *                const int x_size[1]
 * Return Type  : double
 */
static double skip_to_last_equal_value(int *k, const double x_data[], const int
  x_size[1])
{
  double xk;
  boolean_T exitg1;
  double absxk;
  int exponent;
  boolean_T p;
  xk = x_data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x_size[0])) {
    absxk = fabs(xk / 2.0);
    if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((fabs(xk - x_data[*k]) < absxk) || (rtIsInf(x_data[*k]) && rtIsInf(xk) &&
         ((x_data[*k] > 0.0) == (xk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }

  return xk;
}

/*
 * Arguments    : const double a_data[]
 *                const int a_size[1]
 *                const double b_data[]
 *                const int b_size[1]
 *                double c_data[]
 *                int c_size[1]
 *                int ia_data[]
 *                int ia_size[1]
 *                int ib_data[]
 *                int ib_size[1]
 * Return Type  : void
 */
void do_vectors(const double a_data[], const int a_size[1], const double b_data[],
                const int b_size[1], double c_data[], int c_size[1], int
                ia_data[], int ia_size[1], int ib_data[], int ib_size[1])
{
  int ncmax;
  int nc;
  int iafirst;
  int ialast;
  int ibfirst;
  int iblast;
  int b_ialast;
  double ak;
  int b_iblast;
  int b_ia_data[99];
  double bk;
  double absxk;
  int exponent;
  boolean_T p;
  double b_c_data[99];
  if (a_size[0] <= b_size[0]) {
    ncmax = a_size[0];
  } else {
    ncmax = b_size[0];
  }

  c_size[0] = (signed char)ncmax;
  ia_size[0] = ncmax;
  ib_size[0] = ncmax;
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= a_size[0]) && (iblast <= b_size[0])) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a_data, a_size);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b_data, b_size);
    iblast = b_iblast;
    absxk = fabs(bk / 2.0);
    if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((fabs(bk - ak) < absxk) || (rtIsInf(ak) && rtIsInf(bk) && ((ak > 0.0) ==
          (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      nc++;
      c_data[nc - 1] = ak;
      ia_data[nc - 1] = iafirst + 1;
      ib_data[nc - 1] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if ((ak < bk) || rtIsNaN(bk)) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }

  if (ncmax > 0) {
    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_ia_data[ialast] = ia_data[ialast];
    }

    ia_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      ia_data[ialast] = b_ia_data[ialast];
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_ia_data[ialast] = ib_data[ialast];
    }

    ib_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      ib_data[ialast] = b_ia_data[ialast];
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_c_data[ialast] = c_data[ialast];
    }

    c_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      c_data[ialast] = b_c_data[ialast];
    }
  }
}

/*
 * File trailer for eml_setop.c
 *
 * [EOF]
 */
