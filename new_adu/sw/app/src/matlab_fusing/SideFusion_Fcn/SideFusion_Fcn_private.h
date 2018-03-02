/*
 * File: SideFusion_Fcn_private.h
 *
 * Code generated for Simulink model 'SideFusion_Fcn'.
 *
 * Model version                  : 1.39
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 13:30:46 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SideFusion_Fcn_private_h_
#define RTW_HEADER_SideFusion_Fcn_private_h_
#include "rtwtypes.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error "Code was generated for compiler with different sized uchar/char. Consider adjusting Emulation Hardware word size settings on the Hardware Implementation pane to match your compiler word sizes as defined in the compiler's limits.h header file. Alternatively, you can select 'None' for Emulation Hardware and select the 'Enable portable word sizes' option for ERT based targets, which will disable the preprocessor word size checks."
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error "Code was generated for compiler with different sized ushort/short. Consider adjusting Emulation Hardware word size settings on the Hardware Implementation pane to match your compiler word sizes as defined in the compilers limits.h header file. Alternatively, you can select 'None' for Emulation Hardware and select the 'Enable portable word sizes' option for ERT based targets, this will disable the preprocessor word size checks."
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error "Code was generated for compiler with different sized uint/int. Consider adjusting Emulation Hardware word size settings on the Hardware Implementation pane to match your compiler word sizes as defined in the compilers limits.h header file. Alternatively, you can select 'None' for Emulation Hardware and select the 'Enable portable word sizes' option for ERT based targets, this will disable the preprocessor word size checks."
#endif

#if ( ULONG_MAX != (0xFFFFFFFFFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFFFFFFFFFF) )
#error "Code was generated for compiler with different sized ulong/long. Consider adjusting Emulation Hardware word size settings on the Hardware Implementation pane to match your compiler word sizes as defined in the compilers limits.h header file. Alternatively, you can select 'None' for Emulation Hardware and select the 'Enable portable word sizes' option for ERT based targets, this will disable the preprocessor word size checks."
#endif

#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#endif                                 /* __RTWTYPES_H__ */

extern void rt_mldivide_U1d3x3_U2d_9O8lG8ax(const real_T u0[9], const real_T u1
  [3], real_T y[3]);
extern void rt_mrdivide_U1d4x2_U2d_sN1aAFUT(const real_T u0[8], const real_T u1
  [4], real_T y[8]);
extern real_T look1_binlcapw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void Tracker_InitialVelocityMe_Start(B_Tracker_InitialVelocityMeth_T
  *localB, P_Tracker_InitialVelocityMeth_T *localP);
extern void S_Tracker_InitialVelocityMethod(real_T rtu_x_m, real_T rtu_x_t,
  real_T rtu_vx_max, real_T rtu_ts, real_T rtu_vx_min, real_T rtu_y_m, real_T
  rtu_y_t, real_T rtu_vy_max, real_T rtu_vy_min, real_T rtu_Rxx, real_T rtu_Ryy,
  real_T rtu_threshod, B_Tracker_InitialVelocityMeth_T *localB,
  P_Tracker_InitialVelocityMeth_T *localP);
extern void Si_Tracker_Initialcos_cal_Start(B_Tracker_Initialcos_cal_Side_T
  *localB, P_Tracker_Initialcos_cal_Side_T *localP);
extern void SideFusi_Tracker_Initialcos_cal(real_T rtu_x1, real_T rtu_x2, real_T
  rtu_y1, real_T rtu_y2, real_T rtu_xm, real_T rtu_ym,
  B_Tracker_Initialcos_cal_Side_T *localB, P_Tracker_Initialcos_cal_Side_T
  *localP);

#endif                                 /* RTW_HEADER_SideFusion_Fcn_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
