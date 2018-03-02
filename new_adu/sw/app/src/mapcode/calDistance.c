/*
 * File: calDistance.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "calDistance.h"
#include "point2line.h"

/* Function Definitions */

/*
 * 返回distance是垂直距离，flag是方向，1是右边，0是重合，-1左左边
 *  输入p是当前车辆的坐标
 *  输入offlineData是离线数据的结构体，（coordinate，Vertex_index）
 *         offlineData.coordinate是地图坐标
 *         offlineData.Vertex_index是每段数据对于得顶点
 *  option 是个结构体（firstTime,oldIndex,clockWise）
 *         如果 option.firstTime==1，则不需要提供option.oldIndex
 *         如果 option.firstTime==0，则需要提供option.oldIndex
 *         option.clockWise=1是顺时针;  =0是逆时针，
 * Arguments    : const double p[2]
 *                const double coordinate[3402]
 *                const double Vertex_index[8]
 *                double *distance
 *                double *flag
 *                double *nearestIndex
 * Return Type  : void
 */
void calDistance(const double p[2], const double coordinate[3402], const double
                 Vertex_index[8], double *distance, double *flag, double
                 *nearestIndex)
{
  double d_side[4];
  int i;
  int ixstart;
  double len;
  double b_coordinate[2];
  int itmp;
  double c_coordinate[2];
  boolean_T exitg2;
  double d1[1000];
  int n;
  int b_itmp;
  double a;
  double b_a;
  boolean_T exitg1;

  /*  */
  /*  coordinate = offlineData.coordinate; */
  /*  Vertex_index = offlineData.Vertex_index; */
  for (i = 0; i < 4; i++) {
    /* 计算当前点在离线地图的哪个边上  sideIndex */
    for (ixstart = 0; ixstart < 2; ixstart++) {
      b_coordinate[ixstart] = coordinate[((int)Vertex_index[i] + 1701 * ixstart)
        - 1];
      c_coordinate[ixstart] = coordinate[((int)Vertex_index[4 + i] + 1701 *
        ixstart) - 1];
    }

    point2line(p, b_coordinate, c_coordinate, &d_side[i], flag);
  }

  ixstart = 1;
  len = d_side[0];
  itmp = 0;
  if (rtIsNaN(d_side[0])) {
    i = 1;
    exitg2 = false;
    while ((!exitg2) && (i + 1 < 5)) {
      ixstart = i + 1;
      if (!rtIsNaN(d_side[i])) {
        len = d_side[i];
        itmp = i;
        exitg2 = true;
      } else {
        i++;
      }
    }
  }

  if (ixstart < 4) {
    while (ixstart + 1 < 5) {
      if (d_side[ixstart] < len) {
        len = d_side[ixstart];
        itmp = ixstart;
      }

      ixstart++;
    }
  }

  /*   首次计算 */
  memset(&d1[0], 0, 1000U * sizeof(double));

  /*      d = zeros((Vertex_index(sideIndex,2) - Vertex_index(sideIndex,1)),1); */
  len = Vertex_index[4 + itmp] - Vertex_index[itmp];
  for (i = 0; i < (int)len; i++) {
    /* ------------------------------------------------------- */
    /*  Patac */
    /*  SHD */
    /*  Software */
    /*  Authors:  Binjian Xin */
    /*  Date   :  2017-1 */
    /* ------------------------------------------------------- */
    a = p[0] - coordinate[(int)(Vertex_index[itmp] + (1.0 + (double)i)) - 1];
    b_a = p[1] - coordinate[(int)(Vertex_index[itmp] + (1.0 + (double)i)) + 1700];
    d1[i] = a * a + b_a * b_a;
  }

  len = Vertex_index[4 + itmp] - Vertex_index[itmp];
  if (1.0 > len) {
    n = 0;
  } else {
    n = (int)len;
  }

  ixstart = 1;
  len = d1[0];
  b_itmp = 1;
  if (n > 1) {
    if (rtIsNaN(d1[0])) {
      i = 2;
      exitg1 = false;
      while ((!exitg1) && (i <= n)) {
        ixstart = i;
        if (!rtIsNaN(d1[i - 1])) {
          len = d1[i - 1];
          b_itmp = i;
          exitg1 = true;
        } else {
          i++;
        }
      }
    }

    if (ixstart < n) {
      while (ixstart + 1 <= n) {
        if (d1[ixstart] < len) {
          len = d1[ixstart];
          b_itmp = ixstart + 1;
        }

        ixstart++;
      }
    }
  }

  *nearestIndex = b_itmp;

  /* 计算点在边上的最近的点 */
  if (b_itmp == n) {
    *nearestIndex = (double)b_itmp - 1.0;
  }

  if (*nearestIndex == 1.0) {
    *nearestIndex = 2.0;
  }

  if (d1[(int)*nearestIndex] < d1[(int)*nearestIndex - 2]) {
    /* 逆时针 */
    *nearestIndex += Vertex_index[itmp];
    len = *nearestIndex + 1.0;
    if (*nearestIndex + 1.0 > Vertex_index[4 + itmp]) {
      (*nearestIndex)--;
      len--;
    }
  } else {
    /* 逆时针 */
    len = *nearestIndex + Vertex_index[itmp];
    *nearestIndex = len - 1.0;
    if (len - 1.0 < Vertex_index[itmp]) {
      *nearestIndex = (len - 1.0) + 1.0;
      len++;
    }
  }

  /*  else  */
  /*  %%  非首次计算 */
  /*   */
  /*  %     oldIndex=option.oldIndex; */
  /*      oldIndex = 0; */
  /*      temp = zeros(21,1); */
  /*      d = temp; */
  /*      if option.clockWise %%% 非首次 + 顺时针 */
  /*          for i=-15:5; */
  /*              temp(i)=oldIndex+i; */
  /*              if temp(i)>size(coordinate,1) */
  /*                  temp(i)=mod(temp(i),size(coordinate,1)); */
  /*              end */
  /*              if temp(i)<=0 */
  /*                  temp(i)=size(coordinate,1)-temp(i); */
  /*              end */
  /*              A=coordinate(temp,:); */
  /*              d(i)=squareDistance(p,A); */
  /*          end */
  /*          [a,nearestIndex]=min(d); */
  /*           */
  /*           */
  /*          if nearestIndex==length(d); */
  /*             nearestIndex=nearestIndex-1; */
  /*          end */
  /*          if nearestIndex==1; */
  /*              nearestIndex=nearestIndex+1; */
  /*          end */
  /*           */
  /*           */
  /*          if d(nearestIndex+1)<d(nearestIndex-1) */
  /*              B_index=temp(nearestIndex); */
  /*              A_index=B_index+1; */
  /*              if A_index>Vertex_index(sideIndex,2) */
  /*                  A_index=A_index-1; */
  /*                  B_index=B_index-1; */
  /*              end */
  /*          else */
  /*              A_index=temp(nearestIndex); */
  /*              B_index=A_index-1; */
  /*              if B_index<Vertex_index(sideIndex,1) */
  /*                  A_index=A_index+1; */
  /*                  B_index=B_index+1; */
  /*              end */
  /*          end        */
  /*         */
  /*           */
  /*      else   %% 非首次 + 逆时针 */
  /*           */
  /*           */
  /*          for i=-5:15; */
  /*              temp(i)=oldIndex+i; */
  /*              if temp(i)>size(coordinate,1) */
  /*                  temp(i)=mod(temp(i),size(coordinate,1)); */
  /*              end */
  /*              if temp(i)<=0 */
  /*                  temp(i)=size(coordinate,1)-temp(i); */
  /*              end */
  /*              A=coordinate(temp,:); */
  /*              d(i)=squareDistance(p,A); */
  /*          end */
  /*          [a,nearestIndex]=min(d); */
  /*           */
  /*          if d(nearestIndex+1)<d(nearestIndex-1) */
  /*              A_index=temp(nearestIndex); */
  /*              B_index=A_index+1; */
  /*              if B_index>Vertex_index(sideIndex,2) */
  /*                  A_index=A_index-1; */
  /*                  B_index=B_index-1; */
  /*              end */
  /*          else */
  /*              B_index=temp(nearestIndex); */
  /*              A_index=B_index-1; */
  /*              if A_index<Vertex_index(sideIndex,1) */
  /*                  A_index=A_index+1; */
  /*                  B_index=B_index+1; */
  /*              end */
  /*          end */
  /*     */
  /*      end */
  /*       */
  /*  end */
  for (ixstart = 0; ixstart < 2; ixstart++) {
    b_coordinate[ixstart] = coordinate[((int)*nearestIndex + 1701 * ixstart) - 1];
    c_coordinate[ixstart] = coordinate[((int)len + 1701 * ixstart) - 1];
  }

  point2line(p, b_coordinate, c_coordinate, distance, flag);
}

/*
 * File trailer for calDistance.c
 *
 * [EOF]
 */
