/*
 * File: sortLE.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 27-Apr-2017 16:26:20
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "sortLE.h"

/* Function Definitions */

/*
 * Arguments    : const double v_data[]
 *                const int v_size[2]
 *                int irow1
 *                int irow2
 * Return Type  : boolean_T
 */
boolean_T sortLE(const double v_data[], const int v_size[2], int irow1, int
                 irow2)
{
  boolean_T p;
  int coloffset;
  boolean_T b1;
  p = true;
  coloffset = 3 * v_size[0] - 1;
  if ((v_data[coloffset + irow1] == v_data[coloffset + irow2]) || (rtIsNaN
       (v_data[coloffset + irow1]) && rtIsNaN(v_data[coloffset + irow2]))) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (!b1) {
    if ((v_data[coloffset + irow1] <= v_data[coloffset + irow2]) || rtIsNaN
        (v_data[coloffset + irow2])) {
      p = true;
    } else {
      p = false;
    }
  }

  return p;
}

/*
 * File trailer for sortLE.c
 *
 * [EOF]
 */
