/*
 * File: CodeGen_PositionMessage_types.h
 *
 * Code generated for Simulink model 'CodeGen_PositionMessage'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 16:31:34 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_PositionMessage_types_h_
#define RTW_HEADER_CodeGen_PositionMessage_types_h_
#include "rtwtypes.h"
#ifndef _DEFINED_TYPEDEF_FOR_EN_MSG_TYPE_
#define _DEFINED_TYPEDEF_FOR_EN_MSG_TYPE_

typedef enum {
  E_SYSTEM_SPECIFIC = 0,               /* Default value */
  E_POSITION = 1,
  PT_LONGITUDE = 1,
  E_SEGMENT = 2,
  PT_LATITUDE = 2,
  E_STUB = 3,
  E_PROFILE_SHORT = 4,
  PT_LANE = 4,
  E_PROFILE_LONG = 5,
  PT_TRAFFICSIGN = 5,
  E_META_DATA = 6,
  PT_LANEMARK = 6,
  E_RESERVED = 7
} EN_MSG_TYPE;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_CodeGen_PositionMessa_T RT_MODEL_CodeGen_PositionMess_T;

#endif                                 /* RTW_HEADER_CodeGen_PositionMessage_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
