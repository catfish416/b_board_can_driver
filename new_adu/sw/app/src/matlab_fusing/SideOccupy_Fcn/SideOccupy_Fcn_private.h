/*
 * File: SideOccupy_Fcn_private.h
 *
 * Code generated for Simulink model 'SideOccupy_Fcn'.
 *
 * Model version                  : 1.46
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 16:31:01 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SideOccupy_Fcn_private_h_
#define RTW_HEADER_SideOccupy_Fcn_private_h_
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

extern void SideOccupy_Fcn_Judge_MainInterestObjDet_WithLane_Start
  (B_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *localB,
   P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *localP);
extern void SideOccupy_Fcn_Judge_MainInterestObjDet_WithLane(real_T rtu_Rmin,
  real_T rtu_angle, real_T rtu_x, real_T rtu_Rmax,
  B_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *localB,
  P_Judge_MainInterestObjDet_WithLane_SideOccupy_Fcn_T *localP);
extern void SideOccupy_Fcn_Judge_MainInterestObjDet_WithoutLane_Start
  (B_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *localB,
   P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *localP);
extern void SideOccupy_Fcn_Judge_MainInterestObjDet_WithoutLane(real_T
  rtu_Radius, real_T rtu_Rmin, real_T rtu_x, real_T rtu_Rmax,
  B_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *localB,
  P_Judge_MainInterestObjDet_WithoutLane_SideOccupy_Fcn_T *localP);
extern void SideOccupy_Fcn_Judge_MainTTC_Cal_Start
  (B_Judge_MainTTC_Cal_SideOccupy_Fcn_T *localB,
   P_Judge_MainTTC_Cal_SideOccupy_Fcn_T *localP);
extern void SideOccupy_Fcn_Judge_MainTTC_Cal(real_T rtu_v, real_T rtu_x,
  B_Judge_MainTTC_Cal_SideOccupy_Fcn_T *localB,
  P_Judge_MainTTC_Cal_SideOccupy_Fcn_T *localP);
extern void
  SideOccupy_Fcn_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_Start
  (B_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
   *localB,
   P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
   *localP);
extern void
  SideOccupy_Fcn_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn(real_T
  rtu_c1, real_T rtu_x, real_T rtu_c2, real_T rtu_c3, real_T rtu_y, real_T
  rtu_c0, real_T rtu_LtLnWd, real_T rtu_RtLnWd,
  B_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
  *localB,
  P_Judge_MainOuter_SdOccJudAccordLtLaneFcn_SelectJdWtLtLn_SideOccupy_Fcn_T
  *localP);

#endif                                 /* RTW_HEADER_SideOccupy_Fcn_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
