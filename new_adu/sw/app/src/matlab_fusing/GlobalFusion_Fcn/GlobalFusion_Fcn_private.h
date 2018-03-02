/*
 * File: GlobalFusion_Fcn_private.h
 *
 * Code generated for Simulink model 'GlobalFusion_Fcn'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 20:03:39 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GlobalFusion_Fcn_private_h_
#define RTW_HEADER_GlobalFusion_Fcn_private_h_
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

extern void rt_mrdivide_U1d4x2_U2d2x2_Yd4x2_snf(const real_T u0[8], const real_T
  u1[4], real_T y[8]);
extern void rt_mldivide_U1d2x2_U2d2_Yd2x1_snf(const real_T u0[4], const real_T
  u1[2], real_T y[2]);

/* Exported functions */
extern void Set_Data_Source(real_T data);
extern void Set_sampleTime(real_T data);
extern void FusDataIni(void);
extern void FusTrackPredict(void);
extern void MeasurementsGen(void);
extern void FusTrackUpdate(void);
extern void FusTrackIni(void);
extern void GlobalFusion_Fcn_FusTrackUpdateUpdate_Start
  (B_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *localB,
   P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *localP);
extern void GlobalFusion_Fcn_FusTrackUpdateUpdate(real_T rtu_pre_p11, real_T
  rtu_pre_p12, real_T rtu_pre_p13, real_T rtu_pre_p14, real_T rtu_pre_p22,
  real_T rtu_pre_p21, real_T rtu_pre_p23, real_T rtu_pre_p24, real_T rtu_pre_p33,
  real_T rtu_pre_p31, real_T rtu_pre_p32, real_T rtu_pre_p34, real_T rtu_pre_p44,
  real_T rtu_pre_p41, real_T rtu_pre_p42, real_T rtu_pre_p43, real_T rtu_R11,
  real_T rtu_R12, real_T rtu_R21, real_T rtu_R22, real_T rtu_Pre_x, real_T
  rtu_Pre_vx, real_T rtu_Pre_y, real_T rtu_Pre_vy, real_T rtu_Mea_x, real_T
  rtu_Mea_y, B_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *localB,
  P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *localP);
extern void GlobalFusion_Fcn_FusTrackUpdateMDCal_Start
  (B_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *localB,
   P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *localP);
extern void GlobalFusion_Fcn_FusTrackUpdateMDCal(real_T rtu_MeasureRx, real_T
  rtu_MeasureRy, real_T rtu_PredictRx, real_T rtu_PredictRy, real_T rtu_P11,
  real_T rtu_P12, real_T rtu_P13, real_T rtu_P14, real_T rtu_P22, real_T rtu_P21,
  real_T rtu_P23, real_T rtu_P24, real_T rtu_P33, real_T rtu_P31, real_T rtu_P32,
  real_T rtu_P34, real_T rtu_P44, real_T rtu_P41, real_T rtu_P42, real_T rtu_P43,
  real_T rtu_R11, real_T rtu_R12, real_T rtu_R21, real_T rtu_R22,
  B_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *localB,
  P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *localP);

#endif                                 /* RTW_HEADER_GlobalFusion_Fcn_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
