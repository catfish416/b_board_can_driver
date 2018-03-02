/*
 * File: tpcomp.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "tpcomp.h"

/* Function Definitions */

/*
 * Arguments    : const double Tab[3]
 *                const double Pb[62]
 *                double Pa[62]
 * Return Type  : void
 */
void b_tpcomp(const double Tab[3], const double Pb[62], double Pa[62])
{
  double s;
  double c;
  double b_c[2];
  double b_s[2];
  double c_c[31];
  double c_s[31];
  int i10;
  int i11;

  /* ------------------------------------------------------- */
  /*  Patac */
  /*  SHD */
  /*  Software */
  /*  Authors:  Binjian Xin */
  /*  Date   :  2017-1 */
  /* ------------------------------------------------------- */
  /* ------------------------------------------------------- */
  /*  Composition of a transformation and a set of points */
  /* ------------------------------------------------------- */
  s = sin(Tab[2]);
  c = cos(Tab[2]);
  b_c[0] = c;
  b_c[1] = -s;
  b_s[0] = s;
  b_s[1] = c;
  for (i10 = 0; i10 < 31; i10++) {
    c_c[i10] = 0.0;
    c_s[i10] = 0.0;
    for (i11 = 0; i11 < 2; i11++) {
      c_c[i10] += b_c[i11] * Pb[i11 + (i10 << 1)];
      c_s[i10] += b_s[i11] * Pb[i11 + (i10 << 1)];
    }

    Pa[i10 << 1] = c_c[i10];
    Pa[1 + (i10 << 1)] = c_s[i10];
  }
}

/*
 * Arguments    : const double Tab[3]
 *                const double Pb_data[]
 *                const int Pb_size[2]
 *                double Pa_data[]
 *                int Pa_size[2]
 * Return Type  : void
 */
void tpcomp(const double Tab[3], const double Pb_data[], const int Pb_size[2],
            double Pa_data[], int Pa_size[2])
{
  double s;
  double c;
  double a[2];
  int n;
  int loop_ub;
  int br;
  double y_data[127];
  int ic;
  double b_y_data[127];
  int ar;
  int ib;
  int ia;

  /* ------------------------------------------------------- */
  /*  Patac */
  /*  SHD */
  /*  Software */
  /*  Authors:  Binjian Xin */
  /*  Date   :  2017-1 */
  /* ------------------------------------------------------- */
  /* ------------------------------------------------------- */
  /*  Composition of a transformation and a set of points */
  /* ------------------------------------------------------- */
  s = sin(Tab[2]);
  c = cos(Tab[2]);
  a[0] = c;
  a[1] = -s;
  n = Pb_size[1] - 1;
  loop_ub = (unsigned char)Pb_size[1];
  for (br = 0; br < loop_ub; br++) {
    y_data[br] = 0.0;
  }

  if (Pb_size[1] != 0) {
    for (loop_ub = 1; loop_ub - 1 <= n; loop_ub++) {
      for (ic = loop_ub; ic <= loop_ub; ic++) {
        y_data[ic - 1] = 0.0;
      }
    }

    br = 0;
    for (loop_ub = 0; loop_ub <= n; loop_ub++) {
      ar = -1;
      for (ib = br; ib + 1 <= br + 2; ib++) {
        if (Pb_data[ib] != 0.0) {
          ia = ar;
          for (ic = loop_ub; ic + 1 <= loop_ub + 1; ic++) {
            ia++;
            y_data[ic] += Pb_data[ib] * a[ia];
          }
        }

        ar++;
      }

      br += 2;
    }
  }

  a[0] = s;
  a[1] = c;
  n = Pb_size[1] - 1;
  loop_ub = (unsigned char)Pb_size[1];
  for (br = 0; br < loop_ub; br++) {
    b_y_data[br] = 0.0;
  }

  if (Pb_size[1] != 0) {
    for (loop_ub = 1; loop_ub - 1 <= n; loop_ub++) {
      for (ic = loop_ub; ic <= loop_ub; ic++) {
        b_y_data[ic - 1] = 0.0;
      }
    }

    br = 0;
    for (loop_ub = 0; loop_ub <= n; loop_ub++) {
      ar = -1;
      for (ib = br; ib + 1 <= br + 2; ib++) {
        if (Pb_data[ib] != 0.0) {
          ia = ar;
          for (ic = loop_ub; ic + 1 <= loop_ub + 1; ic++) {
            ia++;
            b_y_data[ic] += Pb_data[ib] * a[ia];
          }
        }

        ar++;
      }

      br += 2;
    }
  }

  Pa_size[0] = 2;
  Pa_size[1] = (unsigned char)Pb_size[1];
  loop_ub = (unsigned char)Pb_size[1];
  for (br = 0; br < loop_ub; br++) {
    Pa_data[br << 1] = Tab[0] + y_data[br];
  }

  loop_ub = (unsigned char)Pb_size[1];
  for (br = 0; br < loop_ub; br++) {
    Pa_data[1 + (br << 1)] = Tab[1] + b_y_data[br];
  }
}

/*
 * File trailer for tpcomp.c
 *
 * [EOF]
 */
