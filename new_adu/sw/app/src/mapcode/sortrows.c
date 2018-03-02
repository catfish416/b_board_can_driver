/*
 * File: sortrows.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 27-Apr-2017 16:26:20
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "sortrows.h"
#include "sortLE.h"

/* Function Definitions */

/*
 * Arguments    : double y_data[]
 *                int y_size[2]
 * Return Type  : void
 */
void sortrows(double y_data[], int y_size[2])
{
  int n;
  int m;
  int k;
  int iwork_data[127];
  int idx_data[127];
  int i;
  double ycol_data[127];
  int j;
  int pEnd;
  int p;
  int q;
  int qEnd;
  int kEnd;
  n = y_size[0] + 1;
  m = y_size[0];
  for (k = 0; k < m; k++) {
    idx_data[k] = 0;
  }

  for (k = 1; k <= n - 2; k += 2) {
    if (sortLE(y_data, y_size, k, k + 1)) {
      idx_data[k - 1] = k;
      idx_data[k] = k + 1;
    } else {
      idx_data[k - 1] = k + 1;
      idx_data[k] = k;
    }
  }

  if ((y_size[0] & 1) != 0) {
    idx_data[y_size[0] - 1] = y_size[0];
  }

  i = 2;
  while (i < n - 1) {
    m = i << 1;
    j = 1;
    for (pEnd = 1 + i; pEnd < n; pEnd = qEnd + i) {
      p = j;
      q = pEnd;
      qEnd = j + m;
      if (qEnd > n) {
        qEnd = n;
      }

      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        if (sortLE(y_data, y_size, idx_data[p - 1], idx_data[q - 1])) {
          iwork_data[k] = idx_data[p - 1];
          p++;
          if (p == pEnd) {
            while (q < qEnd) {
              k++;
              iwork_data[k] = idx_data[q - 1];
              q++;
            }
          }
        } else {
          iwork_data[k] = idx_data[q - 1];
          q++;
          if (q == qEnd) {
            while (p < pEnd) {
              k++;
              iwork_data[k] = idx_data[p - 1];
              p++;
            }
          }
        }

        k++;
      }

      for (k = 0; k + 1 <= kEnd; k++) {
        idx_data[(j + k) - 1] = iwork_data[k];
      }

      j = qEnd;
    }

    i = m;
  }

  m = y_size[0];
  for (j = 0; j < 4; j++) {
    for (i = 0; i + 1 <= m; i++) {
      ycol_data[i] = y_data[(idx_data[i] + y_size[0] * j) - 1];
    }

    for (i = 0; i + 1 <= m; i++) {
      y_data[i + y_size[0] * j] = ycol_data[i];
    }
  }
}

/*
 * File trailer for sortrows.c
 *
 * [EOF]
 */
