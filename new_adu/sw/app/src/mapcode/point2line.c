/*
 * File: point2line.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "point2line.h"

/* Function Definitions */

/*
 * [H,flag]=piont2line(p,A,B)
 *  p是实际坐标，A是线段第一个坐标，B是线段第二个坐标
 *  返回H是垂直距离，flag是方向，1是右边，0是重合，-1左左边
 * Arguments    : const double p[2]
 *                const double A[2]
 *                const double B[2]
 *                double *H
 *                double *flag
 * Return Type  : void
 */
void point2line(const double p[2], const double A[2], const double B[2], double *
                H, double *flag)
{
  double a;
  double b_a;
  double M[2];
  double AC[2];
  int i2;

  /* ------------------------------------------------------- */
  /*  Patac */
  /*  SHD */
  /*  Software */
  /*  Authors:  Binjian Xin */
  /*  Date   :  2017-1 */
  /* ------------------------------------------------------- */
  a = B[1] - A[1];
  b_a = A[0] - B[0];
  *H = fabs(((B[1] - A[1]) * p[0] + (A[0] - B[0]) * p[1]) + (B[0] * A[1] - A[0] *
             B[1])) / sqrt(a * a + b_a * b_a);
  M[0] = B[1] - A[1];
  M[1] = A[0] - B[0];
  AC[0] = p[0] - A[0];
  AC[1] = p[1] - A[1];
  a = 0.0;
  for (i2 = 0; i2 < 2; i2++) {
    a += AC[i2] * M[i2];
  }

  if (a > 0.0) {
    *flag = 1.0;
  } else {
    a = 0.0;
    for (i2 = 0; i2 < 2; i2++) {
      a += AC[i2] * M[i2];
    }

    if (a == 0.0) {
      *flag = 0.0;
    } else {
      *flag = -1.0;
    }
  }

  /*  设A(x1,y1)和B(x2,y2) */
  /*  直线AB方程为：(y-y1)/(x-x1)=(y2-y1)/(x2-x1) */
  /*  整理：(y2-y1)x1+(x1-x2)y+(x2y1-x1y2)=0 */
  /*  由点到直线距离公式：│Ax＋By＋C│/(A*A＋B*B)^0.5得： */
  /*  设点(x,y)到直线BB的距离为H,则： */
  /*  H =│(y2-y1)x＋(x1-x2)y＋(x2y1-x1y2)│/((y2-y1)*2＋(x1-x2)^2)^0.5 */
  /*  构造一个向量与向量A->B垂直.称其为 向量M. */
  /*  则 下两个内积异号： */
  /*  (向量A->C)*M 与 （向量A->C')*M 异号  */
  /*  补充： */
  /*  设向量A->B=（x,y）,取 M = (y,-x) 指向右边, */
  /*  凡是 (向量A->C)*M > 0 的C都在右边. */
  /*  凡是 (向量A->C)*M < 0 的C都在左边.  */
}

/*
 * File trailer for point2line.c
 *
 * [EOF]
 */
