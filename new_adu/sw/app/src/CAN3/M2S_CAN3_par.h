#include "resue.h"


typedef struct Road_InformationTag
{
  vbittype Lane_Assignment_Host_Index_0m_0 : 2;
  vbittype Highway_Exit_Left : 1;
  vbittype Highway_Exit_Right : 1;
  vbittype Road_Type : 2;
  vbittype Construction_Area : 2;
  vbittype NumOfLanes_0m_0 : 2;
  vbittype Lane_Assignment_Host_Index_35m : 4;
  vbittype Lane_Assignment_Host_Index_0m_1 : 2;
  vbittype reserved_bits1 : 1;
  vbittype SnowDecision : 1;
  vbittype NumOfLanes_35m : 4;
  vbittype NumOfLanes_0m_1 : 2;
  vbittype Left_is_JPN_HWE : 1;
  vbittype Right_is_JPN_HWE : 1;
  vbittype SnowPrediction : 6;
  vbittype TLM_decelerationArea : 1;
  vbittype Left_decelLaneBoundaryWidth : 7;
  vbittype Right_decelLaneBoundaryWidth : 7;
  vbittype reserved_bits2 : 1;
  vbittype reserved_bits3 : 8;
  vbittype protocol_version : 8;
} Road_Information;
typedef struct LKA_Right_Lane_CTag
{
  vbittype reserved_bits_2_flag : 2;
  vbittype SF_Confidence_1_flag : 5;
  vbittype SF_Confidence_1_isValid : 1;
  vbittype reserved_bits_3_flag : 2;
  vbittype SF_Confidence_2_flag : 5;
  vbittype SF_Confidence_2_isValid : 1;
  vbittype reserved_bits_4_flag : 2;
  vbittype SF_Confidence_3_flag : 5;
  vbittype SF_Confidence_3_isValid : 1;
  vbittype reserved_bits_5_flag : 2;
  vbittype SF_Confidence_4_flag : 5;
  vbittype SF_Confidence_4_isValid : 1;
  vbittype SF_Confidence_1_Segment_End : 8;
  vbittype SF_Confidence_2_Segment_End : 8;
  vbittype SF_Confidence_3_Segment_End : 8;
  vbittype SF_Confidence_4_Segment_End : 8;
} LKA_Right_Lane_C;
typedef struct LKA_Left_Lane_CTag
{
  vbittype reserved_bits_2_flag : 2;
  vbittype SF_Confidence_1_flag : 5;
  vbittype SF_Confidence_1_isValid : 1;
  vbittype reserved_bits_3_flag : 2;
  vbittype SF_Confidence_2_flag : 5;
  vbittype SF_Confidence_2_isValid : 1;
  vbittype reserved_bits_4_flag : 2;
  vbittype SF_Confidence_3_flag : 5;
  vbittype SF_Confidence_3_isValid : 1;
  vbittype reserved_bits_5_flag : 2;
  vbittype SF_Confidence_4_flag : 5;
  vbittype SF_Confidence_4_isValid : 1;
  vbittype SF_Confidence_1_Segment_End : 8;
  vbittype SF_Confidence_2_Segment_End : 8;
  vbittype SF_Confidence_3_Segment_End : 8;
  vbittype SF_Confidence_4_Segment_End : 8;
} LKA_Left_Lane_C;
typedef struct Lane_Assignment_35mTag
{
  vbittype Lane_Assignment_1_35m_Type : 4;
  vbittype Lane_Assignment_1_35m_Confidence : 4;
  vbittype Lane_Assignment_2_35m_Type : 4;
  vbittype Lane_Assignment_2_35m_Confidence : 4;
  vbittype Lane_Assignment_3_35m_Type : 4;
  vbittype Lane_Assignment_3_35m_Confidence : 4;
  vbittype Lane_Assignment_4_35m_Type : 4;
  vbittype Lane_Assignment_4_35m_Confidence : 4;
  vbittype Lane_Assignment_5_35m_Type : 4;
  vbittype Lane_Assignment_5_35m_Confidence : 4;
  vbittype Lane_Assignment_6_35m_Type : 4;
  vbittype Lane_Assignment_6_35m_Confidence : 4;
  vbittype Lane_Assignment_7_35m_Type : 4;
  vbittype Lane_Assignment_7_35m_Confidence : 4;
  vbittype Lane_Assignment_8_35m_Type : 4;
  vbittype Lane_Assignment_8_35m_Confidence : 4;
} Lane_Assignment_35m;
typedef struct Lane_Assignment_0mTag
{
  vbittype Lane_Assignment_1_0m_Type : 4;
  vbittype Lane_Assignment_1_0m_Confidence : 4;
  vbittype Lane_Assignment_2_0m_Type : 4;
  vbittype Lane_Assignment_2_0m_Confidence : 4;
  vbittype Lane_Assignment_3_0m_Type : 4;
  vbittype Lane_Assignment_3_0m_Confidence : 4;
  vbittype Lane_Assignment_4_0m_Type : 4;
  vbittype Lane_Assignment_4_0m_Confidence : 4;
  vbittype Lane_Assignment_5_0m_Type : 4;
  vbittype Lane_Assignment_5_0m_Confidence : 4;
  vbittype Lane_Assignment_6_0m_Type : 4;
  vbittype Lane_Assignment_6_0m_Confidence : 4;
  vbittype Lane_Assignment_7_0m_Type : 4;
  vbittype Lane_Assignment_7_0m_Confidence : 4;
  vbittype Lane_Assignment_8_0m_Type : 4;
  vbittype Lane_Assignment_8_0m_Confidence : 4;
} Lane_Assignment_0m;
typedef struct Next_Right_Lane_BTag
{
  vbittype Lane_Model_C1_0 : 8;
  vbittype View_Range_Start_0 : 6;
  vbittype Lane_Model_C1_1 : 2;
  vbittype View_Range_End_0 : 5;
  vbittype View_Range_Start_1 : 3;
  vbittype reserved_bits5_0 : 1;
  vbittype Lane_mark_color : 3;
  vbittype View_Range_End_1 : 4;
  vbittype unused0 : 4;
  vbittype reserved_bits5_1 : 4;
} Next_Right_Lane_B;
typedef struct Next_Left_Lane_BTag
{
  vbittype Lane_Model_C1_0 : 8;
  vbittype View_Range_Start_0 : 6;
  vbittype Lane_Model_C1_1 : 2;
  vbittype View_Range_End_0 : 5;
  vbittype View_Range_Start_1 : 3;
  vbittype reserved_bits5_0 : 1;
  vbittype Lane_mark_color : 3;
  vbittype View_Range_End_1 : 4;
  vbittype unused0 : 4;
  vbittype reserved_bits5_1 : 4;
} Next_Left_Lane_B;
typedef struct Next_Right_Lane_ATag
{
  vbittype Lane_Model_C0_0 : 2;
  vbittype Quality : 2;
  vbittype Lane_Type : 4;
  vbittype Lane_Model_C0_1 : 8;
  vbittype Lane_Model_C2_0 : 7;
  vbittype Lane_Model_C0_2 : 1;
  vbittype Lane_Model_C2_1 : 8;
  vbittype Lane_Model_C3_0 : 7;
  vbittype Lane_Model_C2_2 : 1;
  vbittype Lane_Model_C3_1 : 8;
  vbittype Width_marking_0 : 7;
  vbittype Lane_Model_C3_2 : 1;
  vbittype unused0 : 7;
  vbittype Width_marking_1 : 1;
} Next_Right_Lane_A;
typedef struct Next_Left_Lane_ATag
{
  vbittype Lane_Model_C0_0 : 2;
  vbittype Quality : 2;
  vbittype Lane_Type : 4;
  vbittype Lane_Model_C0_1 : 8;
  vbittype Lane_Model_C2_0 : 7;
  vbittype Lane_Model_C0_2 : 1;
  vbittype Lane_Model_C2_1 : 8;
  vbittype Lane_Model_C3_0 : 7;
  vbittype Lane_Model_C2_2 : 1;
  vbittype Lane_Model_C3_1 : 8;
  vbittype Width_marking_0 : 7;
  vbittype Lane_Model_C3_2 : 1;
  vbittype unused0 : 7;
  vbittype Width_marking_1 : 1;
} Next_Left_Lane_A;
typedef struct LKA_Right_Lane_BTag
{
  vbittype Lane_Model_C1_0 : 8;
  vbittype View_Range_Start_0 : 6;
  vbittype Lane_Model_C1_1 : 2;
  vbittype View_Range_End_0 : 5;
  vbittype View_Range_Start_1 : 3;
  vbittype reserved2_laneB : 4;
  vbittype View_Range_End_1 : 4;
  vbittype PRED_OCCLUDED_LM_EXTRAPOLATION : 1;
  vbittype PRED_OVERRIDE : 1;
  vbittype PRED_OTHER_SIDE : 1;
  vbittype PRED_DIST_BASED_EXTRAPOLATION : 1;
  vbittype Lane_mark_color : 3;
  vbittype Lane_Crossing : 1;
  vbittype PRED_SOURCE_VRTL_MERGE : 1;
  vbittype PRED_SOURCE_STD : 1;
  vbittype PRED_SOURCE_HWE_SPAIN : 1;
  vbittype PRED_SOURCE_GUARDRAIL_SHADOW : 1;
  vbittype PRED_SOURCE_DIVERGING_LANES : 1;
  vbittype Reserved1_laneB : 2;
  vbittype PRED_HEADWAY_ORIENTED : 1;
  vbittype TLC : 8;
} LKA_Right_Lane_B;
typedef struct LKA_Right_Lane_ATag
{
  vbittype Lane_Model_C0_0 : 2;
  vbittype Quality : 2;
  vbittype Lane_Type : 4;
  vbittype Lane_Model_C0_1 : 8;
  vbittype Lane_Model_C2_0 : 7;
  vbittype Lane_Model_C0_2 : 1;
  vbittype Lane_Model_C2_1 : 8;
  vbittype Lane_Model_C3_0 : 7;
  vbittype Lane_Model_C2_2 : 1;
  vbittype Lane_Model_C3_1 : 8;
  vbittype Width_marking_0 : 7;
  vbittype Lane_Model_C3_2 : 1;
  vbittype unused0 : 7;
  vbittype Width_marking_1 : 1;
} LKA_Right_Lane_A;
typedef struct LKA_Left_Lane_BTag
{
  vbittype Lane_Model_C1_0 : 8;
  vbittype View_Range_Start_0 : 6;
  vbittype Lane_Model_C1_1 : 2;
  vbittype View_Range_End_0 : 5;
  vbittype View_Range_Start_1 : 3;
  vbittype reserved2_laneB : 4;
  vbittype View_Range_End_1 : 4;
  vbittype PRED_OCCLUDED_LM_EXTRAPOLATION : 1;
  vbittype PRED_OVERRIDE : 1;
  vbittype PRED_OTHER_SIDE : 1;
  vbittype PRED_DIST_BASED_EXTRAPOLATION : 1;
  vbittype Lane_mark_color : 3;
  vbittype Lane_Crossing : 1;
  vbittype PRED_SOURCE_VRTL_MERGE : 1;
  vbittype PRED_SOURCE_STD : 1;
  vbittype PRED_SOURCE_HWE_SPAIN : 1;
  vbittype PRED_SOURCE_GUARDRAIL_SHADOW : 1;
  vbittype PRED_SOURCE_DIVERGING_LANES : 1;
  vbittype Reserved1_laneB : 2;
  vbittype PRED_HEADWAY_ORIENTED : 1;
  vbittype TLC : 8;
} LKA_Left_Lane_B;
typedef struct LKA_Left_Lane_ATag
{
  vbittype Lane_Model_C0_0 : 2;
  vbittype Quality : 2;
  vbittype Lane_Type : 4;
  vbittype Lane_Model_C0_1 : 8;
  vbittype Lane_Model_C2_0 : 7;
  vbittype Lane_Model_C0_2 : 1;
  vbittype Lane_Model_C2_1 : 8;
  vbittype Lane_Model_C3_0 : 7;
  vbittype Lane_Model_C2_2 : 1;
  vbittype Lane_Model_C3_1 : 8;
  vbittype Width_marking_0 : 7;
  vbittype Lane_Model_C3_2 : 1;
  vbittype unused0 : 7;
  vbittype Width_marking_1 : 1;
} LKA_Left_Lane_A;
typedef struct ID_TFL0Tag
{
  vbittype Internal_ID0_0 : 8;
  vbittype Internal_ID0_1 : 8;
  vbittype Internal_ID0_2 : 8;
  vbittype Internal_ID0_3 : 8;
  vbittype Internal_ID1_0 : 8;
  vbittype Internal_ID1_1 : 8;
  vbittype Internal_ID1_2 : 8;
  vbittype Internal_ID1_3 : 8;
} ID_TFL0;
typedef struct ID_TFL1Tag
{
  vbittype Internal_ID0_0 : 8;
  vbittype Internal_ID0_1 : 8;
  vbittype Internal_ID0_2 : 8;
  vbittype Internal_ID0_3 : 8;
  vbittype Internal_ID1_0 : 8;
  vbittype Internal_ID1_1 : 8;
  vbittype Internal_ID1_2 : 8;
  vbittype Internal_ID1_3 : 8;
} ID_TFL1;
typedef struct ID_TFL2Tag
{
  vbittype Internal_ID0_0 : 8;
  vbittype Internal_ID0_1 : 8;
  vbittype Internal_ID0_2 : 8;
  vbittype Internal_ID0_3 : 8;
  vbittype Internal_ID1_0 : 8;
  vbittype Internal_ID1_1 : 8;
  vbittype Internal_ID1_2 : 8;
  vbittype Internal_ID1_3 : 8;
} ID_TFL2;
typedef struct ID_TFL3Tag
{
  vbittype Internal_ID0_0 : 8;
  vbittype Internal_ID0_1 : 8;
  vbittype Internal_ID0_2 : 8;
  vbittype Internal_ID0_3 : 8;
  vbittype Internal_ID1_0 : 8;
  vbittype Internal_ID1_1 : 8;
  vbittype Internal_ID1_2 : 8;
  vbittype Internal_ID1_3 : 8;
} ID_TFL3;
typedef struct ID_TSR0Tag
{
  vbittype Internal_ID0_0 : 8;
  vbittype Internal_ID0_1 : 8;
  vbittype Internal_ID0_2 : 8;
  vbittype Internal_ID0_3 : 8;
  vbittype Internal_ID1_0 : 8;
  vbittype Internal_ID1_1 : 8;
  vbittype Internal_ID1_2 : 8;
  vbittype Internal_ID1_3 : 8;
} ID_TSR0;
typedef struct ID_TSR1Tag
{
  vbittype Internal_ID0_0 : 8;
  vbittype Internal_ID0_1 : 8;
  vbittype Internal_ID0_2 : 8;
  vbittype Internal_ID0_3 : 8;
  vbittype Internal_ID1_0 : 8;
  vbittype Internal_ID1_1 : 8;
  vbittype Internal_ID1_2 : 8;
  vbittype Internal_ID1_3 : 8;
} ID_TSR1;
typedef struct ID_TSR2Tag
{
  vbittype Internal_ID0_0 : 8;
  vbittype Internal_ID0_1 : 8;
  vbittype Internal_ID0_2 : 8;
  vbittype Internal_ID0_3 : 8;
  vbittype Internal_ID1_0 : 8;
  vbittype Internal_ID1_1 : 8;
  vbittype Internal_ID1_2 : 8;
  vbittype Internal_ID1_3 : 8;
} ID_TSR2;
typedef struct ID_TSR3Tag
{
  vbittype Internal_ID0_0 : 8;
  vbittype Internal_ID0_1 : 8;
  vbittype Internal_ID0_2 : 8;
  vbittype Internal_ID0_3 : 8;
  vbittype Internal_ID1_0 : 8;
  vbittype Internal_ID1_1 : 8;
  vbittype Internal_ID1_2 : 8;
  vbittype Internal_ID1_3 : 8;
} ID_TSR3;
typedef struct TFL_HeaderTag
{
  vbittype StopSign_Warning : 1;
  vbittype TFL_Warning : 1;
  vbittype Main_Object_ID : 3;
  vbittype Number_Of_TFL_Objects : 3;
  vbittype TFL_TTC : 8;
  vbittype StopSign_TTC : 8;
  vbittype Stop_Line_Dist_0 : 8;
  vbittype JNC_Distance_0 : 2;
  vbittype Junction_Status : 3;
  vbittype Stop_Line_Dist_1 : 3;
  vbittype JNC_Distance_1 : 8;
  vbittype TFL_Warning_Supression_By_Driver : 3;
  vbittype TFL_Warning_Supression_By_Vision : 4;
  vbittype Stop_Line_Valid : 1;
  vbittype Reserved_1_flag : 5;
  vbittype SS_Warning_Supression_By_Vision : 3;
} TFL_Header;
typedef struct TFL_Message0Tag
{
  vbittype TFL_PosY_0 : 5;
  vbittype Object_ID : 3;
  vbittype TFL_PosX_0 : 5;
  vbittype TFL_PosY_1 : 3;
  vbittype TFL_PosZ_0 : 1;
  vbittype TFL_PosX_1 : 7;
  vbittype TFL_PosZ_1 : 8;
  vbittype TFL_Width_0 : 2;
  vbittype TFL_Color : 3;
  vbittype TFL_PosZ_2 : 3;
  vbittype TFL_Supp1_Arrow_0 : 3;
  vbittype TFL_Type : 2;
  vbittype TFL_Width_1 : 3;
  vbittype TFL_Supp3_Arrow_0 : 3;
  vbittype TFL_Supp2_Arrow : 4;
  vbittype TFL_Supp1_Arrow_1 : 1;
  vbittype unused0 : 4;
  vbittype TFL_assignment : 3;
  vbittype TFL_Supp3_Arrow_1 : 1;
} TFL_Message0;
typedef struct TFL_Message1Tag
{
  vbittype TFL_PosY_0 : 5;
  vbittype Object_ID : 3;
  vbittype TFL_PosX_0 : 5;
  vbittype TFL_PosY_1 : 3;
  vbittype TFL_PosZ_0 : 1;
  vbittype TFL_PosX_1 : 7;
  vbittype TFL_PosZ_1 : 8;
  vbittype TFL_Width_0 : 2;
  vbittype TFL_Color : 3;
  vbittype TFL_PosZ_2 : 3;
  vbittype TFL_Supp1_Arrow_0 : 3;
  vbittype TFL_Type : 2;
  vbittype TFL_Width_1 : 3;
  vbittype TFL_Supp3_Arrow_0 : 3;
  vbittype TFL_Supp2_Arrow : 4;
  vbittype TFL_Supp1_Arrow_1 : 1;
  vbittype unused0 : 4;
  vbittype TFL_assignment : 3;
  vbittype TFL_Supp3_Arrow_1 : 1;
} TFL_Message1;
typedef struct TFL_Message2Tag
{
  vbittype TFL_PosY_0 : 5;
  vbittype Object_ID : 3;
  vbittype TFL_PosX_0 : 5;
  vbittype TFL_PosY_1 : 3;
  vbittype TFL_PosZ_0 : 1;
  vbittype TFL_PosX_1 : 7;
  vbittype TFL_PosZ_1 : 8;
  vbittype TFL_Width_0 : 2;
  vbittype TFL_Color : 3;
  vbittype TFL_PosZ_2 : 3;
  vbittype TFL_Supp1_Arrow_0 : 3;
  vbittype TFL_Type : 2;
  vbittype TFL_Width_1 : 3;
  vbittype TFL_Supp3_Arrow_0 : 3;
  vbittype TFL_Supp2_Arrow : 4;
  vbittype TFL_Supp1_Arrow_1 : 1;
  vbittype unused0 : 4;
  vbittype TFL_assignment : 3;
  vbittype TFL_Supp3_Arrow_1 : 1;
} TFL_Message2;
typedef struct TFL_Message3Tag
{
  vbittype TFL_PosY_0 : 5;
  vbittype Object_ID : 3;
  vbittype TFL_PosX_0 : 5;
  vbittype TFL_PosY_1 : 3;
  vbittype TFL_PosZ_0 : 1;
  vbittype TFL_PosX_1 : 7;
  vbittype TFL_PosZ_1 : 8;
  vbittype TFL_Width_0 : 2;
  vbittype TFL_Color : 3;
  vbittype TFL_PosZ_2 : 3;
  vbittype TFL_Supp1_Arrow_0 : 3;
  vbittype TFL_Type : 2;
  vbittype TFL_Width_1 : 3;
  vbittype TFL_Supp3_Arrow_0 : 3;
  vbittype TFL_Supp2_Arrow : 4;
  vbittype TFL_Supp1_Arrow_1 : 1;
  vbittype unused0 : 4;
  vbittype TFL_assignment : 3;
  vbittype TFL_Supp3_Arrow_1 : 1;
} TFL_Message3;
typedef struct TFL_Message4Tag
{
  vbittype TFL_PosY_0 : 5;
  vbittype Object_ID : 3;
  vbittype TFL_PosX_0 : 5;
  vbittype TFL_PosY_1 : 3;
  vbittype TFL_PosZ_0 : 1;
  vbittype TFL_PosX_1 : 7;
  vbittype TFL_PosZ_1 : 8;
  vbittype TFL_Width_0 : 2;
  vbittype TFL_Color : 3;
  vbittype TFL_PosZ_2 : 3;
  vbittype TFL_Supp1_Arrow_0 : 3;
  vbittype TFL_Type : 2;
  vbittype TFL_Width_1 : 3;
  vbittype TFL_Supp3_Arrow_0 : 3;
  vbittype TFL_Supp2_Arrow : 4;
  vbittype TFL_Supp1_Arrow_1 : 1;
  vbittype unused0 : 4;
  vbittype TFL_assignment : 3;
  vbittype TFL_Supp3_Arrow_1 : 1;
} TFL_Message4;
typedef struct TFL_Message5Tag
{
  vbittype TFL_PosY_0 : 5;
  vbittype Object_ID : 3;
  vbittype TFL_PosX_0 : 5;
  vbittype TFL_PosY_1 : 3;
  vbittype TFL_PosZ_0 : 1;
  vbittype TFL_PosX_1 : 7;
  vbittype TFL_PosZ_1 : 8;
  vbittype TFL_Width_0 : 2;
  vbittype TFL_Color : 3;
  vbittype TFL_PosZ_2 : 3;
  vbittype TFL_Supp1_Arrow_0 : 3;
  vbittype TFL_Type : 2;
  vbittype TFL_Width_1 : 3;
  vbittype TFL_Supp3_Arrow_0 : 3;
  vbittype TFL_Supp2_Arrow : 4;
  vbittype TFL_Supp1_Arrow_1 : 1;
  vbittype unused0 : 4;
  vbittype TFL_assignment : 3;
  vbittype TFL_Supp3_Arrow_1 : 1;
} TFL_Message5;
typedef struct TFL_Message6Tag
{
  vbittype TFL_PosY_0 : 5;
  vbittype Object_ID : 3;
  vbittype TFL_PosX_0 : 5;
  vbittype TFL_PosY_1 : 3;
  vbittype TFL_PosZ_0 : 1;
  vbittype TFL_PosX_1 : 7;
  vbittype TFL_PosZ_1 : 8;
  vbittype TFL_Width_0 : 2;
  vbittype TFL_Color : 3;
  vbittype TFL_PosZ_2 : 3;
  vbittype TFL_Supp1_Arrow_0 : 3;
  vbittype TFL_Type : 2;
  vbittype TFL_Width_1 : 3;
  vbittype TFL_Supp3_Arrow_0 : 3;
  vbittype TFL_Supp2_Arrow : 4;
  vbittype TFL_Supp1_Arrow_1 : 1;
  vbittype unused0 : 4;
  vbittype TFL_assignment : 3;
  vbittype TFL_Supp3_Arrow_1 : 1;
} TFL_Message6;
typedef struct TFL_Message7Tag
{
  vbittype TFL_PosY_0 : 5;
  vbittype Object_ID : 3;
  vbittype TFL_PosX_0 : 5;
  vbittype TFL_PosY_1 : 3;
  vbittype TFL_PosZ_0 : 1;
  vbittype TFL_PosX_1 : 7;
  vbittype TFL_PosZ_1 : 8;
  vbittype TFL_Width_0 : 2;
  vbittype TFL_Color : 3;
  vbittype TFL_PosZ_2 : 3;
  vbittype TFL_Supp1_Arrow_0 : 3;
  vbittype TFL_Type : 2;
  vbittype TFL_Width_1 : 3;
  vbittype TFL_Supp3_Arrow_0 : 3;
  vbittype TFL_Supp2_Arrow : 4;
  vbittype TFL_Supp1_Arrow_1 : 1;
  vbittype unused0 : 4;
  vbittype TFL_assignment : 3;
  vbittype TFL_Supp3_Arrow_1 : 1;
} TFL_Message7;
typedef struct TSR0Tag
{
  vbittype Vision_only_Sign_Type : 8;
  vbittype Vision_only_Supp_Sign_Type : 8;
  vbittype Sign_Position_X : 8;
  vbittype Sign_Position_Y : 8;
  vbittype Sign_Position_Z : 8;
  vbittype Approved_Flag : 1;
  vbittype Filter_type : 7;
  vbittype Sign_Height : 5;
  vbittype No_Entry_Vision_Status : 3;
  vbittype unused0 : 2;
  vbittype Sign_Width : 6;
} TSR0;
typedef struct TSR1Tag
{
  vbittype Vision_only_Sign_Type : 8;
  vbittype Vision_only_Supp_Sign_Type : 8;
  vbittype Sign_Position_X : 8;
  vbittype Sign_Position_Y : 8;
  vbittype Sign_Position_Z : 8;
  vbittype Approved_Flag : 1;
  vbittype Filter_type : 7;
  vbittype Sign_Height : 5;
  vbittype No_Entry_Vision_Status : 3;
  vbittype unused0 : 2;
  vbittype Sign_Width : 6;
} TSR1;
typedef struct TSR2Tag
{
  vbittype Vision_only_Sign_Type : 8;
  vbittype Vision_only_Supp_Sign_Type : 8;
  vbittype Sign_Position_X : 8;
  vbittype Sign_Position_Y : 8;
  vbittype Sign_Position_Z : 8;
  vbittype Approved_Flag : 1;
  vbittype Filter_type : 7;
  vbittype Sign_Height : 5;
  vbittype No_Entry_Vision_Status : 3;
  vbittype unused0 : 2;
  vbittype Sign_Width : 6;
} TSR2;
typedef struct TSR3Tag
{
  vbittype Vision_only_Sign_Type : 8;
  vbittype Vision_only_Supp_Sign_Type : 8;
  vbittype Sign_Position_X : 8;
  vbittype Sign_Position_Y : 8;
  vbittype Sign_Position_Z : 8;
  vbittype Approved_Flag : 1;
  vbittype Filter_type : 7;
  vbittype Sign_Height : 5;
  vbittype No_Entry_Vision_Status : 3;
  vbittype unused0 : 2;
  vbittype Sign_Width : 6;
} TSR3;
typedef struct TSR4Tag
{
  vbittype Vision_only_Sign_Type : 8;
  vbittype Vision_only_Supp_Sign_Type : 8;
  vbittype Sign_Position_X : 8;
  vbittype Sign_Position_Y : 8;
  vbittype Sign_Position_Z : 8;
  vbittype Approved_Flag : 1;
  vbittype Filter_type : 7;
  vbittype Sign_Height : 5;
  vbittype No_Entry_Vision_Status : 3;
  vbittype unused0 : 2;
  vbittype Sign_Width : 6;
} TSR4;
typedef struct TSR5Tag
{
  vbittype Vision_only_Sign_Type : 8;
  vbittype Vision_only_Supp_Sign_Type : 8;
  vbittype Sign_Position_X : 8;
  vbittype Sign_Position_Y : 8;
  vbittype Sign_Position_Z : 8;
  vbittype Approved_Flag : 1;
  vbittype Filter_type : 7;
  vbittype Sign_Height : 5;
  vbittype No_Entry_Vision_Status : 3;
  vbittype unused0 : 2;
  vbittype Sign_Width : 6;
} TSR5;
typedef struct TSR6Tag
{
  vbittype Vision_only_Sign_Type : 8;
  vbittype Vision_only_Supp_Sign_Type : 8;
  vbittype Sign_Position_X : 8;
  vbittype Sign_Position_Y : 8;
  vbittype Sign_Position_Z : 8;
  vbittype Approved_Flag : 1;
  vbittype Filter_type : 7;
  vbittype Sign_Height : 5;
  vbittype No_Entry_Vision_Status : 3;
  vbittype unused0 : 2;
  vbittype Sign_Width : 6;
} TSR6;
typedef struct Vision_Only_TSR_continuousTag
{
  vbittype Vision_only_Sign_Type_D1 : 8;
  vbittype Vision_only_supp_Sign_Type_D1 : 8;
  vbittype Vision_only_Sign_Type_D2 : 8;
  vbittype Vision_only_supp_Sign_Type_D2 : 8;
  vbittype Vision_only_Sign_Type_D3 : 8;
  vbittype Vision_only_supp_Sign_Type_D3 : 8;
  vbittype Vision_only_Sign_Type_D4 : 8;
  vbittype Vision_only_supp_Sign_Type_D4 : 8;
} Vision_Only_TSR_continuous;
typedef struct ObstacleStatusBTag
{
  vbittype timeStamp_0 : 8;
  vbittype timeStamp_1 : 8;
  vbittype timeStamp_2 : 8;
  vbittype timeStamp_3 : 8;
  vbittype frameIndex_0 : 8;
  vbittype frameIndex_1 : 8;
  vbittype frameIndex_2 : 8;
  vbittype frameIndex_3 : 8;
} ObstacleStatusB;
typedef struct ObstacleStatusATag
{
  vbittype NumObstacles : 8;
  vbittype Timestamp : 8;
  vbittype ApplicationVersion_rc_0 : 2;
  vbittype ApplicationVersion_minor : 6;
  vbittype ProtocolVersion_0 : 6;
  vbittype ApplicationVersion_rc_1 : 2;
  vbittype LeftCloseRangeCutIn : 1;
  vbittype RightCloseRangeCutIn : 1;
  vbittype Close_Car : 1;
  vbittype Go : 4;
  vbittype ProtocolVersion_1 : 1;
  vbittype Failsafe_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype Failsafe_1 : 5;
} ObstacleStatusA;
typedef struct ObstacleDataA1Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA1;
typedef struct ObstacleDataB1Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB1;
typedef struct ObstacleDataC1Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC1;
typedef struct ObstacleDataA2Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA2;
typedef struct ObstacleDataB2Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB2;
typedef struct ObstacleDataC2Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC2;
typedef struct ObstacleDataA3Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA3;
typedef struct ObstacleDataB3Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB3;
typedef struct ObstacleDataC3Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC3;
typedef struct ObstacleDataA4Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA4;
typedef struct ObstacleDataB4Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB4;
typedef struct ObstacleDataC4Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC4;
typedef struct ObstacleDataA5Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA5;
typedef struct ObstacleDataB5Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB5;
typedef struct ObstacleDataC5Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC5;
typedef struct ObstacleDataA6Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA6;
typedef struct ObstacleDataB6Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB6;
typedef struct ObstacleDataC6Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC6;
typedef struct ObstacleDataA7Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA7;
typedef struct ObstacleDataB7Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB7;
typedef struct ObstacleDataC7Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC7;
typedef struct ObstacleDataA8Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA8;
typedef struct ObstacleDataB8Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB8;
typedef struct ObstacleDataC8Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC8;
typedef struct ObstacleDataA9Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA9;
typedef struct ObstacleDataB9Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB9;
typedef struct ObstacleDataC9Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC9;
typedef struct ObstacleDataA10Tag
{
  vbittype ObstacleID : 8;
  vbittype ObstaclePosX_0 : 8;
  vbittype reserved_4_flag : 4;
  vbittype ObstaclePosX_1 : 4;
  vbittype ObstaclePosY_0 : 8;
  vbittype Move_in_and_Out : 3;
  vbittype BlinkerInfo : 3;
  vbittype ObstaclePosY_1 : 2;
  vbittype ObstacleVelX_0 : 8;
  vbittype reserved_1_flag : 1;
  vbittype ObstacleType : 3;
  vbittype ObstacleVelX_1 : 4;
  vbittype ObstacleValid : 2;
  vbittype reserved_2_flag : 2;
  vbittype ObstacleBrakeLights : 1;
  vbittype ObstacleStatus : 3;
} ObstacleDataA10;
typedef struct ObstacleDataB10Tag
{
  vbittype ObstacleLength : 8;
  vbittype ObstacleWidth : 8;
  vbittype ObstacleAge : 8;
  vbittype RadarPosX_0 : 4;
  vbittype reserved_1_flag : 1;
  vbittype CIPVFlag : 1;
  vbittype ObstacleLane : 2;
  vbittype RadarPosX_1 : 8;
  vbittype RadarVelX_0 : 8;
  vbittype reserved_1_b : 1;
  vbittype RadarMatchConfidence : 3;
  vbittype RadarVelX_1 : 4;
  vbittype reserved_1_c : 1;
  vbittype MatchedRadarID : 7;
} ObstacleDataB10;
typedef struct ObstacleDataC10Tag
{
  vbittype ObstacleAngleRate_0 : 8;
  vbittype ObstacleAngleRate_1 : 8;
  vbittype ObstacleVelY : 8;
  vbittype reserved_5_flag : 8;
  vbittype Object_Accel_X_0 : 8;
  vbittype reserved_3_flag : 3;
  vbittype ObstacleReplaced : 1;
  vbittype reserved_2_flag : 2;
  vbittype Object_Accel_X_1 : 2;
  vbittype ObstacleAngle_0 : 8;
  vbittype ObstacleAngle_1 : 8;
} ObstacleDataC10;
typedef struct ObstacleStatusCTag
{
  vbittype grabIndex_0 : 8;
  vbittype grabIndex_1 : 8;
  vbittype pedalConfGenObjDistFromBumper : 8;
  vbittype pedalConfusionGeneralObjTTC_0 : 8;
  vbittype reserved_6_flag_0 : 7;
  vbittype pedalConfusionGeneralObjTTC_1 : 1;
  vbittype reserved_6_flag_1 : 8;
  vbittype reserved_6_flag_2 : 8;
  vbittype reserved_6_flag_3 : 8;
} ObstacleStatusC;

typedef struct Mobileye_Generic_SensorTag
{
  vbittype Brakes : 1;
  vbittype Left_Blink : 1;
  vbittype Right_blink : 1;
  vbittype Wipers : 2;
  vbittype High_Beam : 1;
  vbittype Reverse_gear : 1;
  vbittype unused0 : 1;
  vbittype Vehicle_Speed_0 : 8;
  vbittype Vehicle_Speed_1 : 8;
  vbittype Yaw_rate_0 : 8;
  vbittype Yaw_rate_1 : 8;
  vbittype Steering_Wheel_Angle_0 : 8;
  vbittype Steering_Wheel_Angle_1 : 8;
} Mobileye_Generic_Sensor;

typedef struct F_Master_Time_Sync_RFTag
{
  vbittype FTimeSyncMstrClock_0 : 8;
  vbittype FTimeSyncMstrClock_1 : 8;
  vbittype FTimeSyncMstrClock_2 : 8;
  vbittype FTimeSyncMstrClock_3 : 8;
  vbittype FTimeSyncMstrChksm_0 : 4;
  vbittype FTimeSyncMstrClockV : 1;
  vbittype SensorModeCmdLRR : 3;
  vbittype FTimeSyncMstrChksm_1 : 8;
  vbittype SensorModeCmdSRR : 3;
  vbittype SensorModeCmdFCamera : 3;
  vbittype unused0 : 2;
} F_Master_Time_Sync_RF;
typedef struct F_Vehicle_Path_Estimate_RFTag
{
  vbittype Vpath_CurvatureV : 1;
  vbittype Vpath_TrnCtrLngOfstV : 1;
  vbittype unused0 : 4;
  vbittype Vpath_RollingCount : 2;
  vbittype Vpath_TrnCtrLngOfst : 8;
  vbittype Vpath_TrnCtrLatOfst_0 : 6;
  vbittype unused1 : 2;
  vbittype Vpath_TrnCtrLatOfst_1 : 8;
  vbittype Vpath_Curvature_0 : 8;
  vbittype Vpath_Curvature_1 : 8;
  vbittype Vpath_Checksum_0 : 3;
  vbittype unused2 : 5;
  vbittype Vpath_Checksum_1 : 8;
} F_Vehicle_Path_Estimate_RF;
typedef struct F_Vehicle_Path_Data_2_RFTag
{
  vbittype unused0 : 1;
  vbittype Vpath_Data2LongVelV : 1;
  vbittype Vpath_Data2YawRateV : 1;
  vbittype Vpath_Data2TravlDirctn : 2;
  vbittype unused1 : 3;
  vbittype Vpath_Data2LongVel_0 : 8;
  vbittype Vpath_Data2YawRate_0 : 4;
  vbittype Vpath_Data2LongVel_1 : 4;
  vbittype Vpath_Data2YawRate_1 : 8;
  vbittype Vpath_Data2LatVel : 8;
  vbittype Vpath2_Checksum_0 : 3;
  vbittype Vpath_Data2ModeInfo : 2;
  vbittype Vpath_Data2RollCnt : 2;
  vbittype Vpath_Data2LatVelV : 1;
  vbittype Vpath2_Checksum_1 : 8;
} F_Vehicle_Path_Data_2_RF;
typedef struct Body_Info_FOB_RFTag
{
  vbittype HighBmAct : 1;
  vbittype LowBmAct : 1;
  vbittype WSWprAct : 1;
  vbittype LftLwBmFld : 1;
  vbittype RtLwBmFld : 1;
  vbittype OtsdAmbtLtLvlStatV : 1;
  vbittype OtsdAmbtLtLvlStat : 2;
  vbittype SysPwrMdV : 1;
  vbittype SysPwrMd : 2;
  vbittype WSWshSwAtv : 1;
  vbittype TrStLgMdAtv : 1;
  vbittype DrvrHndsOnWhlZn3 : 1;
  vbittype DrvrHndsOnWhlZn2 : 1;
  vbittype DrvrHndsOnWhlZn1 : 1;
  vbittype DrDoorOpenSwActV : 1;
  vbittype DrDoorOpenSwAct : 1;
  vbittype StrgColCommsFlt : 2;
  vbittype DrvWndPosStat : 3;
  vbittype InterLghtStat : 1;
  vbittype StrgColInOutPos : 8;
  vbittype StrgColUpDwnPos : 8;
  vbittype unused0 : 7;
  vbittype CPMAPINFO4 : 1;
} Body_Info_FOB_RF;
typedef struct R_SRR_Object_Header_RFTag
{
  vbittype RSrrRollingCnt : 2;
  vbittype RSRRModeCmdFdbk : 3;
  vbittype unused0 : 3;
  vbittype RSrrTimeStamp_0 : 3;
  vbittype RSRRNumValidTargets : 4;
  vbittype RSrrTimeStampV : 1;
  vbittype RSrrTimeStamp_1 : 8;
  vbittype RSRRSnstvFltPrsntInt : 1;
  vbittype RSRRHWFltPrsntInt : 1;
  vbittype RSRRAntTngFltPrsnt : 1;
  vbittype RSRRCANIDAddrsUnsbl : 1;
  vbittype RSRRCANRxErr : 1;
  vbittype RSRRCANSgnlSpvFld : 1;
  vbittype RSRRDiagSpare : 1;
  vbittype unused1 : 1;
  vbittype RSRRMsalgnPtchUp : 1;
  vbittype RSRRMsalgnPtchDn : 1;
  vbittype RSRRMsalgnRllLt : 1;
  vbittype RSRRMsalgnRllRt : 1;
  vbittype RSRRExtIntrfrnc : 1;
  vbittype RSRRPlntAlgnInProc : 1;
  vbittype RSRRSvcAlgnInPrcs : 1;
  vbittype RSRRAlgnFltPrsnt : 1;
  vbittype RSRRInitDiagCmplt : 1;
  vbittype RSRRAmbTmpOutRngHi : 1;
  vbittype RSRRAmbTmpOutRngLw : 1;
  vbittype RSRRVltgOutRngHi : 1;
  vbittype RSRRVltgOutRngLo : 1;
  vbittype RSRRSnsrBlckd : 1;
  vbittype RSRRMsalgnYawLt : 1;
  vbittype RSRRMsalgnYawRt : 1;
  vbittype RSrrBurstChecksum_0 : 8;
  vbittype RSrrBurstChecksum_1 : 8;
} R_SRR_Object_Header_RF;
typedef struct R_SRR_Object_Track1_RFTag
{
  vbittype RSrrTrkRange1_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange1_1 : 8;
  vbittype RSrrTrkRRate1_0 : 3;
  vbittype RSrrTrkObjElevation1 : 2;
  vbittype RSrrTrkDynamProp1 : 3;
  vbittype RSrrTrkRRate1_1 : 8;
  vbittype RSrrTrkAzimuth1_0 : 3;
  vbittype RSrrTrkObjID1 : 5;
  vbittype RSrrTrkAzimuth1_1 : 8;
  vbittype RSrrTrkObsRange1 : 6;
  vbittype RSrrTrkMeasStatus1 : 2;
  vbittype RSrrTrkRawAzimuth1 : 6;
  vbittype RSrrBurstID1 : 2;
} R_SRR_Object_Track1_RF;
typedef struct R_SRR_Object_Track2_RFTag
{
  vbittype RSrrTrkRange2_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange2_1 : 8;
  vbittype RSrrTrkRRate2_0 : 3;
  vbittype RSrrTrkObjElevation2 : 2;
  vbittype RSrrTrkDynamProp2 : 3;
  vbittype RSrrTrkRRate2_1 : 8;
  vbittype RSrrTrkAzimuth2_0 : 3;
  vbittype RSrrTrkObjID2 : 5;
  vbittype RSrrTrkAzimuth2_1 : 8;
  vbittype RSrrTrkObsRange2 : 6;
  vbittype RSrrTrkMeasStatus2 : 2;
  vbittype RSrrTrkRawAzimuth2 : 6;
  vbittype RSrrBurstID2 : 2;
} R_SRR_Object_Track2_RF;
typedef struct R_SRR_Object_Track3_RFTag
{
  vbittype RSrrTrkRange3_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange3_1 : 8;
  vbittype RSrrTrkRRate3_0 : 3;
  vbittype RSrrTrkObjElevation3 : 2;
  vbittype RSrrTrkDynamProp3 : 3;
  vbittype RSrrTrkRRate3_1 : 8;
  vbittype RSrrTrkAzimuth3_0 : 3;
  vbittype RSrrTrkObjID3 : 5;
  vbittype RSrrTrkAzimuth3_1 : 8;
  vbittype RSrrTrkObsRange3 : 6;
  vbittype RSrrTrkMeasStatus3 : 2;
  vbittype RSrrTrkRawAzimuth3 : 6;
  vbittype RSrrBurstID3 : 2;
} R_SRR_Object_Track3_RF;
typedef struct R_SRR_Object_Track4_RFTag
{
  vbittype RSrrTrkRange4_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange4_1 : 8;
  vbittype RSrrTrkRRate4_0 : 3;
  vbittype RSrrTrkObjElevation4 : 2;
  vbittype RSrrTrkDynamProp4 : 3;
  vbittype RSrrTrkRRate4_1 : 8;
  vbittype RSrrTrkAzimuth4_0 : 3;
  vbittype RSrrTrkObjID4 : 5;
  vbittype RSrrTrkAzimuth4_1 : 8;
  vbittype RSrrTrkObsRange4 : 6;
  vbittype RSrrTrkMeasStatus4 : 2;
  vbittype RSrrTrkRawAzimuth4 : 6;
  vbittype RSrrBurstID4 : 2;
} R_SRR_Object_Track4_RF;
typedef struct R_SRR_Object_Track5_RFTag
{
  vbittype RSrrTrkRange5_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange5_1 : 8;
  vbittype RSrrTrkRRate5_0 : 3;
  vbittype RSrrTrkObjElevation5 : 2;
  vbittype RSrrTrkDynamProp5 : 3;
  vbittype RSrrTrkRRate5_1 : 8;
  vbittype RSrrTrkAzimuth5_0 : 3;
  vbittype RSrrTrkObjID5 : 5;
  vbittype RSrrTrkAzimuth5_1 : 8;
  vbittype RSrrTrkObsRange5 : 6;
  vbittype RSrrTrkMeasStatus5 : 2;
  vbittype RSrrTrkRawAzimuth5 : 6;
  vbittype RSrrBurstID5 : 2;
} R_SRR_Object_Track5_RF;
typedef struct R_SRR_Object_Track6_RFTag
{
  vbittype RSrrTrkRange6_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange6_1 : 8;
  vbittype RSrrTrkRRate6_0 : 3;
  vbittype RSrrTrkObjElevation6 : 2;
  vbittype RSrrTrkDynamProp6 : 3;
  vbittype RSrrTrkRRate6_1 : 8;
  vbittype RSrrTrkAzimuth6_0 : 3;
  vbittype RSrrTrkObjID6 : 5;
  vbittype RSrrTrkAzimuth6_1 : 8;
  vbittype RSrrTrkObsRange6 : 6;
  vbittype RSrrTrkMeasStatus6 : 2;
  vbittype RSrrTrkRawAzimuth6 : 6;
  vbittype RSrrBurstID6 : 2;
} R_SRR_Object_Track6_RF;
typedef struct R_SRR_Object_Track7_RFTag
{
  vbittype RSrrTrkRange7_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange7_1 : 8;
  vbittype RSrrTrkRRate7_0 : 3;
  vbittype RSrrTrkObjElevation7 : 2;
  vbittype RSrrTrkDynamProp7 : 3;
  vbittype RSrrTrkRRate7_1 : 8;
  vbittype RSrrTrkAzimuth7_0 : 3;
  vbittype RSrrTrkObjID7 : 5;
  vbittype RSrrTrkAzimuth7_1 : 8;
  vbittype RSrrTrkObsRange7 : 6;
  vbittype RSrrTrkMeasStatus7 : 2;
  vbittype RSrrTrkRawAzimuth7 : 6;
  vbittype RSrrBurstID7 : 2;
} R_SRR_Object_Track7_RF;
typedef struct R_SRR_Object_Track8_RFTag
{
  vbittype RSrrTrkRange8_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange8_1 : 8;
  vbittype RSrrTrkRRate8_0 : 3;
  vbittype RSrrTrkObjElevation8 : 2;
  vbittype RSrrTrkDynamProp8 : 3;
  vbittype RSrrTrkRRate8_1 : 8;
  vbittype RSrrTrkAzimuth8_0 : 3;
  vbittype RSrrTrkObjID8 : 5;
  vbittype RSrrTrkAzimuth8_1 : 8;
  vbittype RSrrTrkObsRange8 : 6;
  vbittype RSrrTrkMeasStatus8 : 2;
  vbittype RSrrTrkRawAzimuth8 : 6;
  vbittype RSrrBurstID8 : 2;
} R_SRR_Object_Track8_RF;
typedef struct R_SRR_Object_Track9_RFTag
{
  vbittype RSrrTrkRange9_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange9_1 : 8;
  vbittype RSrrTrkRRate9_0 : 3;
  vbittype RSrrTrkObjElevation9 : 2;
  vbittype RSrrTrkDynamProp9 : 3;
  vbittype RSrrTrkRRate9_1 : 8;
  vbittype RSrrTrkAzimuth9_0 : 3;
  vbittype RSrrTrkObjID9 : 5;
  vbittype RSrrTrkAzimuth9_1 : 8;
  vbittype RSrrTrkObsRange9 : 6;
  vbittype RSrrTrkMeasStatus9 : 2;
  vbittype RSrrTrkRawAzimuth9 : 6;
  vbittype RSrrBurstID9 : 2;
} R_SRR_Object_Track9_RF;
typedef struct R_SRR_Object_Track10_RFTag
{
  vbittype RSrrTrkRange10_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange10_1 : 8;
  vbittype RSrrTrkRRate10_0 : 3;
  vbittype RSrrTrkObjElevation10 : 2;
  vbittype RSrrTrkDynamProp10 : 3;
  vbittype RSrrTrkRRate10_1 : 8;
  vbittype RSrrTrkAzimuth10_0 : 3;
  vbittype RSrrTrkObjID10 : 5;
  vbittype RSrrTrkAzimuth10_1 : 8;
  vbittype RSrrTrkObsRange10 : 6;
  vbittype RSrrTrkMeasStatus10 : 2;
  vbittype RSrrTrkRawAzimuth10 : 6;
  vbittype RSrrBurstID10 : 2;
} R_SRR_Object_Track10_RF;


union Mobileye_Generic_SensorUon
{
   uint8 Mobileye_Generic_Sensor_Buffer[7];
   Mobileye_Generic_Sensor Mobileye_Generic_Sensor_Layout;
}Mobileye_Generic_Sensor_u;

union F_Master_Time_Sync_RFUon
{
   uint8 F_Master_Time_Sync_RF_Buffer[7];
   F_Master_Time_Sync_RF F_Master_Time_Sync_RF_Layout;
}F_Master_Time_Sync_RF_u;

union F_Vehicle_Path_Estimate_RFUon
{
   uint8 F_Vehicle_Path_Estimate_RF_Buffer[8];
   F_Vehicle_Path_Estimate_RF F_Vehicle_Path_Estimate_RF_Layout;
}F_Vehicle_Path_Estimate_RF_u;

union F_Vehicle_Path_Data_2_RFUon
{
   uint8 F_Vehicle_Path_Data_2_RF_Buffer[7];
   F_Vehicle_Path_Data_2_RF F_Vehicle_Path_Data_2_RF_Layout;
}F_Vehicle_Path_Data_2_RF_u;

union Body_Info_FOB_RFUon
{
   uint8 Body_Info_FOB_RF_Buffer[6];
   Body_Info_FOB_RF Body_Info_FOB_RF_Layout;
}Body_Info_FOB_RF_u;

union R_SRR_Object_Header_RFUon
{
   uint8 R_SRR_Object_Header_RF_Buffer[8];
   R_SRR_Object_Header_RF R_SRR_Object_Header_RF_Layout;
}R_SRR_Object_Header_RF_u,RSRRDiagStatus_RF_u;

union R_SRR_Object_Track1_RFUon
{
   uint8 R_SRR_Object_Track1_RF_Buffer[8];
   R_SRR_Object_Track1_RF R_SRR_Object_Track1_RF_Layout;
}R_SRR_Object_Track1_RF_u;

union R_SRR_Object_Track2_RFUon
{
   uint8 R_SRR_Object_Track2_RF_Buffer[8];
   R_SRR_Object_Track2_RF R_SRR_Object_Track2_RF_Layout;
}R_SRR_Object_Track2_RF_u;

union R_SRR_Object_Track3_RFUon
{
   uint8 R_SRR_Object_Track3_RF_Buffer[8];
   R_SRR_Object_Track3_RF R_SRR_Object_Track3_RF_Layout;
}R_SRR_Object_Track3_RF_u;

union R_SRR_Object_Track4_RFUon
{
   uint8 R_SRR_Object_Track4_RF_Buffer[8];
   R_SRR_Object_Track4_RF R_SRR_Object_Track4_RF_Layout;
}R_SRR_Object_Track4_RF_u;

union R_SRR_Object_Track5_RFUon
{
   uint8 R_SRR_Object_Track5_RF_Buffer[8];
   R_SRR_Object_Track5_RF R_SRR_Object_Track5_RF_Layout;
}R_SRR_Object_Track5_RF_u;

union R_SRR_Object_Track6_RFUon
{
   uint8 R_SRR_Object_Track6_RF_Buffer[8];
   R_SRR_Object_Track6_RF R_SRR_Object_Track6_RF_Layout;
}R_SRR_Object_Track6_RF_u;

union R_SRR_Object_Track7_RFUon
{
   uint8 R_SRR_Object_Track7_RF_Buffer[8];
   R_SRR_Object_Track7_RF R_SRR_Object_Track7_RF_Layout;
}R_SRR_Object_Track7_RF_u;

union R_SRR_Object_Track8_RFUon
{
   uint8 R_SRR_Object_Track8_RF_Buffer[8];
   R_SRR_Object_Track8_RF R_SRR_Object_Track8_RF_Layout;
}R_SRR_Object_Track8_RF_u;

union R_SRR_Object_Track9_RFUon
{
   uint8 R_SRR_Object_Track9_RF_Buffer[8];
   R_SRR_Object_Track9_RF R_SRR_Object_Track9_RF_Layout;
}R_SRR_Object_Track9_RF_u;

union R_SRR_Object_Track10_RFUon
{
   uint8 R_SRR_Object_Track10_RF_Buffer[8];
   R_SRR_Object_Track10_RF R_SRR_Object_Track10_RF_Layout;
}R_SRR_Object_Track10_RF_u;


union Road_InformationUon
{
   uint8 Road_Information_Buffer[8];
   Road_Information Road_Information_Layout;
}Road_Information_u;

union LKA_Right_Lane_CUon
{
   uint8 LKA_Right_Lane_C_Buffer[8];
   LKA_Right_Lane_C LKA_Right_Lane_C_Layout;
}LKA_Right_Lane_C_u;

union LKA_Left_Lane_CUon
{
   uint8 LKA_Left_Lane_C_Buffer[8];
   LKA_Left_Lane_C LKA_Left_Lane_C_Layout;
}LKA_Left_Lane_C_u;

union Lane_Assignment_35mUon
{
   uint8 Lane_Assignment_35m_Buffer[8];
   Lane_Assignment_35m Lane_Assignment_35m_Layout;
}Lane_Assignment_35m_u;

union Lane_Assignment_0mUon
{
   uint8 Lane_Assignment_0m_Buffer[8];
   Lane_Assignment_0m Lane_Assignment_0m_Layout;
}Lane_Assignment_0m_u;

union Next_Right_Lane_BUon
{
   uint8 Next_Right_Lane_B_Buffer[5];
   Next_Right_Lane_B Next_Right_Lane_B_Layout;
}Next_Right_Lane_B_u;

union Next_Left_Lane_BUon
{
   uint8 Next_Left_Lane_B_Buffer[5];
   Next_Left_Lane_B Next_Left_Lane_B_Layout;
}Next_Left_Lane_B_u;

union Next_Right_Lane_AUon
{
   uint8 Next_Right_Lane_A_Buffer[8];
   Next_Right_Lane_A Next_Right_Lane_A_Layout;
}Next_Right_Lane_A_u;

union Next_Left_Lane_AUon
{
   uint8 Next_Left_Lane_A_Buffer[8];
   Next_Left_Lane_A Next_Left_Lane_A_Layout;
}Next_Left_Lane_A_u;

union LKA_Right_Lane_BUon
{
   uint8 LKA_Right_Lane_B_Buffer[7];
   LKA_Right_Lane_B LKA_Right_Lane_B_Layout;
}LKA_Right_Lane_B_u;

union LKA_Right_Lane_AUon
{
   uint8 LKA_Right_Lane_A_Buffer[8];
   LKA_Right_Lane_A LKA_Right_Lane_A_Layout;
}LKA_Right_Lane_A_u;

union LKA_Left_Lane_BUon
{
   uint8 LKA_Left_Lane_B_Buffer[7];
   LKA_Left_Lane_B LKA_Left_Lane_B_Layout;
}LKA_Left_Lane_B_u;

union LKA_Left_Lane_AUon
{
   uint8 LKA_Left_Lane_A_Buffer[8];
   LKA_Left_Lane_A LKA_Left_Lane_A_Layout;
}LKA_Left_Lane_A_u;

union ID_TFL0Uon
{
   uint8 ID_TFL0_Buffer[8];
   ID_TFL0 ID_TFL0_Layout;
}ID_TFL0_u;

union ID_TFL1Uon
{
   uint8 ID_TFL1_Buffer[8];
   ID_TFL1 ID_TFL1_Layout;
}ID_TFL1_u;

union ID_TFL2Uon
{
   uint8 ID_TFL2_Buffer[8];
   ID_TFL2 ID_TFL2_Layout;
}ID_TFL2_u;

union ID_TFL3Uon
{
   uint8 ID_TFL3_Buffer[8];
   ID_TFL3 ID_TFL3_Layout;
}ID_TFL3_u;

union ID_TSR0Uon
{
   uint8 ID_TSR0_Buffer[8];
   ID_TSR0 ID_TSR0_Layout;
}ID_TSR0_u;

union ID_TSR1Uon
{
   uint8 ID_TSR1_Buffer[8];
   ID_TSR1 ID_TSR1_Layout;
}ID_TSR1_u;

union ID_TSR2Uon
{
   uint8 ID_TSR2_Buffer[8];
   ID_TSR2 ID_TSR2_Layout;
}ID_TSR2_u;

union ID_TSR3Uon
{
   uint8 ID_TSR3_Buffer[8];
   ID_TSR3 ID_TSR3_Layout;
}ID_TSR3_u;

union TFL_HeaderUon
{
   uint8 TFL_Header_Buffer[8];
   TFL_Header TFL_Header_Layout;
}TFL_Header_u;

union TFL_Message0Uon
{
   uint8 TFL_Message0_Buffer[8];
   TFL_Message0 TFL_Message0_Layout;
}TFL_Message0_u;

union TFL_Message1Uon
{
   uint8 TFL_Message1_Buffer[8];
   TFL_Message1 TFL_Message1_Layout;
}TFL_Message1_u;

union TFL_Message2Uon
{
   uint8 TFL_Message2_Buffer[8];
   TFL_Message2 TFL_Message2_Layout;
}TFL_Message2_u;

union TFL_Message3Uon
{
   uint8 TFL_Message3_Buffer[8];
   TFL_Message3 TFL_Message3_Layout;
}TFL_Message3_u;

union TFL_Message4Uon
{
   uint8 TFL_Message4_Buffer[8];
   TFL_Message4 TFL_Message4_Layout;
}TFL_Message4_u;

union TFL_Message5Uon
{
   uint8 TFL_Message5_Buffer[8];
   TFL_Message5 TFL_Message5_Layout;
}TFL_Message5_u;

union TFL_Message6Uon
{
   uint8 TFL_Message6_Buffer[8];
   TFL_Message6 TFL_Message6_Layout;
}TFL_Message6_u;

union TFL_Message7Uon
{
   uint8 TFL_Message7_Buffer[8];
   TFL_Message7 TFL_Message7_Layout;
}TFL_Message7_u;

union TSR0Uon
{
   uint8 TSR0_Buffer[8];
   TSR0 TSR0_Layout;
}TSR0_u;

union TSR1Uon
{
   uint8 TSR1_Buffer[8];
   TSR1 TSR1_Layout;
}TSR1_u;

union TSR2Uon
{
   uint8 TSR2_Buffer[8];
   TSR2 TSR2_Layout;
}TSR2_u;

union TSR3Uon
{
   uint8 TSR3_Buffer[8];
   TSR3 TSR3_Layout;
}TSR3_u;

union TSR4Uon
{
   uint8 TSR4_Buffer[8];
   TSR4 TSR4_Layout;
}TSR4_u;

union TSR5Uon
{
   uint8 TSR5_Buffer[8];
   TSR5 TSR5_Layout;
}TSR5_u;

union TSR6Uon
{
   uint8 TSR6_Buffer[8];
   TSR6 TSR6_Layout;
}TSR6_u;

union Vision_Only_TSR_continuousUon
{
   uint8 Vision_Only_TSR_continuous_Buffer[8];
   Vision_Only_TSR_continuous Vision_Only_TSR_continuous_Layout;
}Vision_Only_TSR_continuous_u;

union ObstacleStatusBUon
{
   uint8 ObstacleStatusB_Buffer[8];
   ObstacleStatusB ObstacleStatusB_Layout;
}ObstacleStatusB_u;

union ObstacleStatusAUon
{
   uint8 ObstacleStatusA_Buffer[7];
   ObstacleStatusA ObstacleStatusA_Layout;
}ObstacleStatusA_u;

union ObstacleDataA1Uon
{
   uint8 ObstacleDataA1_Buffer[8];
   ObstacleDataA1 ObstacleDataA1_Layout;
}ObstacleDataA1_u;

union ObstacleDataB1Uon
{
   uint8 ObstacleDataB1_Buffer[8];
   ObstacleDataB1 ObstacleDataB1_Layout;
}ObstacleDataB1_u;

union ObstacleDataC1Uon
{
   uint8 ObstacleDataC1_Buffer[8];
   ObstacleDataC1 ObstacleDataC1_Layout;
}ObstacleDataC1_u;

union ObstacleDataA2Uon
{
   uint8 ObstacleDataA2_Buffer[8];
   ObstacleDataA2 ObstacleDataA2_Layout;
}ObstacleDataA2_u;

union ObstacleDataB2Uon
{
   uint8 ObstacleDataB2_Buffer[8];
   ObstacleDataB2 ObstacleDataB2_Layout;
}ObstacleDataB2_u;

union ObstacleDataC2Uon
{
   uint8 ObstacleDataC2_Buffer[8];
   ObstacleDataC2 ObstacleDataC2_Layout;
}ObstacleDataC2_u;

union ObstacleDataA3Uon
{
   uint8 ObstacleDataA3_Buffer[8];
   ObstacleDataA3 ObstacleDataA3_Layout;
}ObstacleDataA3_u;

union ObstacleDataB3Uon
{
   uint8 ObstacleDataB3_Buffer[8];
   ObstacleDataB3 ObstacleDataB3_Layout;
}ObstacleDataB3_u;

union ObstacleDataC3Uon
{
   uint8 ObstacleDataC3_Buffer[8];
   ObstacleDataC3 ObstacleDataC3_Layout;
}ObstacleDataC3_u;

union ObstacleDataA4Uon
{
   uint8 ObstacleDataA4_Buffer[8];
   ObstacleDataA4 ObstacleDataA4_Layout;
}ObstacleDataA4_u;

union ObstacleDataB4Uon
{
   uint8 ObstacleDataB4_Buffer[8];
   ObstacleDataB4 ObstacleDataB4_Layout;
}ObstacleDataB4_u;

union ObstacleDataC4Uon
{
   uint8 ObstacleDataC4_Buffer[8];
   ObstacleDataC4 ObstacleDataC4_Layout;
}ObstacleDataC4_u;

union ObstacleDataA5Uon
{
   uint8 ObstacleDataA5_Buffer[8];
   ObstacleDataA5 ObstacleDataA5_Layout;
}ObstacleDataA5_u;

union ObstacleDataB5Uon
{
   uint8 ObstacleDataB5_Buffer[8];
   ObstacleDataB5 ObstacleDataB5_Layout;
}ObstacleDataB5_u;

union ObstacleDataC5Uon
{
   uint8 ObstacleDataC5_Buffer[8];
   ObstacleDataC5 ObstacleDataC5_Layout;
}ObstacleDataC5_u;

union ObstacleDataA6Uon
{
   uint8 ObstacleDataA6_Buffer[8];
   ObstacleDataA6 ObstacleDataA6_Layout;
}ObstacleDataA6_u;

union ObstacleDataB6Uon
{
   uint8 ObstacleDataB6_Buffer[8];
   ObstacleDataB6 ObstacleDataB6_Layout;
}ObstacleDataB6_u;

union ObstacleDataC6Uon
{
   uint8 ObstacleDataC6_Buffer[8];
   ObstacleDataC6 ObstacleDataC6_Layout;
}ObstacleDataC6_u;

union ObstacleDataA7Uon
{
   uint8 ObstacleDataA7_Buffer[8];
   ObstacleDataA7 ObstacleDataA7_Layout;
}ObstacleDataA7_u;

union ObstacleDataB7Uon
{
   uint8 ObstacleDataB7_Buffer[8];
   ObstacleDataB7 ObstacleDataB7_Layout;
}ObstacleDataB7_u;

union ObstacleDataC7Uon
{
   uint8 ObstacleDataC7_Buffer[8];
   ObstacleDataC7 ObstacleDataC7_Layout;
}ObstacleDataC7_u;

union ObstacleDataA8Uon
{
   uint8 ObstacleDataA8_Buffer[8];
   ObstacleDataA8 ObstacleDataA8_Layout;
}ObstacleDataA8_u;

union ObstacleDataB8Uon
{
   uint8 ObstacleDataB8_Buffer[8];
   ObstacleDataB8 ObstacleDataB8_Layout;
}ObstacleDataB8_u;

union ObstacleDataC8Uon
{
   uint8 ObstacleDataC8_Buffer[8];
   ObstacleDataC8 ObstacleDataC8_Layout;
}ObstacleDataC8_u;

union ObstacleDataA9Uon
{
   uint8 ObstacleDataA9_Buffer[8];
   ObstacleDataA9 ObstacleDataA9_Layout;
}ObstacleDataA9_u;

union ObstacleDataB9Uon
{
   uint8 ObstacleDataB9_Buffer[8];
   ObstacleDataB9 ObstacleDataB9_Layout;
}ObstacleDataB9_u;

union ObstacleDataC9Uon
{
   uint8 ObstacleDataC9_Buffer[8];
   ObstacleDataC9 ObstacleDataC9_Layout;
}ObstacleDataC9_u;

union ObstacleDataA10Uon
{
   uint8 ObstacleDataA10_Buffer[8];
   ObstacleDataA10 ObstacleDataA10_Layout;
}ObstacleDataA10_u;

union ObstacleDataB10Uon
{
   uint8 ObstacleDataB10_Buffer[8];
   ObstacleDataB10 ObstacleDataB10_Layout;
}ObstacleDataB10_u;

union ObstacleDataC10Uon
{
   uint8 ObstacleDataC10_Buffer[8];
   ObstacleDataC10 ObstacleDataC10_Layout;
}ObstacleDataC10_u;

union ObstacleStatusCUon
{
   uint8 ObstacleStatusC_Buffer[8];
   ObstacleStatusC ObstacleStatusC_Layout;
}ObstacleStatusC_u;


uint16 Get_Road_Information_Lane_Assignment_Host_Index_0m( );
uint8 Get_Road_Information_Highway_Exit_Left( );
uint8 Get_Road_Information_Highway_Exit_Right( );
uint8 Get_Road_Information_Road_Type( );
uint8 Get_Road_Information_Construction_Area( );
uint16 Get_Road_Information_NumOfLanes_0m( );
uint8 Get_Road_Information_Lane_Assignment_Host_Index_35m( );
uint8 Get_Road_Information_reserved_bits1( );
uint8 Get_Road_Information_SnowDecision( );
uint8 Get_Road_Information_NumOfLanes_35m( );
uint8 Get_Road_Information_Left_is_JPN_HWE( );
uint8 Get_Road_Information_Right_is_JPN_HWE( );
int8 Get_Road_Information_SnowPrediction( );
uint8 Get_Road_Information_TLM_decelerationArea( );
uint8 Get_Road_Information_Left_decelLaneBoundaryWidth( );
uint8 Get_Road_Information_Right_decelLaneBoundaryWidth( );
uint8 Get_Road_Information_reserved_bits2( );
uint8 Get_Road_Information_reserved_bits3( );
uint8 Get_Road_Information_protocol_version( );
uint8 Get_LKA_Right_Lane_C_reserved_bits_2_flag( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_1_flag( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_1_isValid( );
uint8 Get_LKA_Right_Lane_C_reserved_bits_3_flag( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_2_flag( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_2_isValid( );
uint8 Get_LKA_Right_Lane_C_reserved_bits_4_flag( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_3_flag( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_3_isValid( );
uint8 Get_LKA_Right_Lane_C_reserved_bits_5_flag( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_4_flag( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_4_isValid( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_1_Segment_End( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_2_Segment_End( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_3_Segment_End( );
uint8 Get_LKA_Right_Lane_C_SF_Confidence_4_Segment_End( );
uint8 Get_LKA_Left_Lane_C_reserved_bits_2_flag( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_1_flag( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_1_isValid( );
uint8 Get_LKA_Left_Lane_C_reserved_bits_3_flag( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_2_flag( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_2_isValid( );
uint8 Get_LKA_Left_Lane_C_reserved_bits_4_flag( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_3_flag( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_3_isValid( );
uint8 Get_LKA_Left_Lane_C_reserved_bits_5_flag( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_4_flag( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_4_isValid( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_1_Segment_End( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_2_Segment_End( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_3_Segment_End( );
uint8 Get_LKA_Left_Lane_C_SF_Confidence_4_Segment_End( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_1_35m_Type( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_1_35m_Confidence( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_2_35m_Type( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_2_35m_Confidence( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_3_35m_Type( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_3_35m_Confidence( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_4_35m_Type( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_4_35m_Confidence( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_5_35m_Type( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_5_35m_Confidence( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_6_35m_Type( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_6_35m_Confidence( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_7_35m_Type( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_7_35m_Confidence( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_8_35m_Type( );
uint8 Get_Lane_Assignment_35m_Lane_Assignment_8_35m_Confidence( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_1_0m_Type( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_1_0m_Confidence( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_2_0m_Type( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_2_0m_Confidence( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_3_0m_Type( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_3_0m_Confidence( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_4_0m_Type( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_4_0m_Confidence( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_5_0m_Type( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_5_0m_Confidence( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_6_0m_Type( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_6_0m_Confidence( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_7_0m_Type( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_7_0m_Confidence( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_8_0m_Type( );
uint8 Get_Lane_Assignment_0m_Lane_Assignment_8_0m_Confidence( );
int16 Get_Next_Right_Lane_B_Lane_Model_C1( );
uint16 Get_Next_Right_Lane_B_View_Range_Start( );
uint16 Get_Next_Right_Lane_B_View_Range_End( );
uint16 Get_Next_Right_Lane_B_reserved_bits5( );
uint8 Get_Next_Right_Lane_B_Lane_mark_color( );
int16 Get_Next_Left_Lane_B_Lane_Model_C1( );
uint16 Get_Next_Left_Lane_B_View_Range_Start( );
uint16 Get_Next_Left_Lane_B_View_Range_End( );
uint16 Get_Next_Left_Lane_B_reserved_bits5( );
uint8 Get_Next_Left_Lane_B_Lane_mark_color( );
int32 Get_Next_Right_Lane_A_Lane_Model_C0( );
uint8 Get_Next_Right_Lane_A_Quality( );
uint8 Get_Next_Right_Lane_A_Lane_Type( );
int32 Get_Next_Right_Lane_A_Lane_Model_C2( );
int32 Get_Next_Right_Lane_A_Lane_Model_C3( );
uint16 Get_Next_Right_Lane_A_Width_marking( );
int32 Get_Next_Left_Lane_A_Lane_Model_C0( );
uint8 Get_Next_Left_Lane_A_Quality( );
uint8 Get_Next_Left_Lane_A_Lane_Type( );
int32 Get_Next_Left_Lane_A_Lane_Model_C2( );
int32 Get_Next_Left_Lane_A_Lane_Model_C3( );
uint16 Get_Next_Left_Lane_A_Width_marking( );
int16 Get_LKA_Right_Lane_B_Lane_Model_C1( );
uint16 Get_LKA_Right_Lane_B_View_Range_Start( );
uint16 Get_LKA_Right_Lane_B_View_Range_End( );
uint8 Get_LKA_Right_Lane_B_reserved2_laneB( );
uint8 Get_LKA_Right_Lane_B_PRED_OCCLUDED_LM_EXTRAPOLATION( );
uint8 Get_LKA_Right_Lane_B_PRED_OVERRIDE( );
uint8 Get_LKA_Right_Lane_B_PRED_OTHER_SIDE( );
uint8 Get_LKA_Right_Lane_B_PRED_DIST_BASED_EXTRAPOLATION( );
uint8 Get_LKA_Right_Lane_B_Lane_mark_color( );
uint8 Get_LKA_Right_Lane_B_Lane_Crossing( );
uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_VRTL_MERGE( );
uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_STD( );
uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_HWE_SPAIN( );
uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_GUARDRAIL_SHADOW( );
uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_DIVERGING_LANES( );
uint8 Get_LKA_Right_Lane_B_Reserved1_laneB( );
uint8 Get_LKA_Right_Lane_B_PRED_HEADWAY_ORIENTED( );
uint8 Get_LKA_Right_Lane_B_TLC( );
int32 Get_LKA_Right_Lane_A_Lane_Model_C0( );
uint8 Get_LKA_Right_Lane_A_Quality( );
uint8 Get_LKA_Right_Lane_A_Lane_Type( );
int32 Get_LKA_Right_Lane_A_Lane_Model_C2( );
int32 Get_LKA_Right_Lane_A_Lane_Model_C3( );
uint16 Get_LKA_Right_Lane_A_Width_marking( );
int16 Get_LKA_Left_Lane_B_Lane_Model_C1( );
uint16 Get_LKA_Left_Lane_B_View_Range_Start( );
uint16 Get_LKA_Left_Lane_B_View_Range_End( );
uint8 Get_LKA_Left_Lane_B_reserved2_laneB( );
uint8 Get_LKA_Left_Lane_B_PRED_OCCLUDED_LM_EXTRAPOLATION( );
uint8 Get_LKA_Left_Lane_B_PRED_OVERRIDE( );
uint8 Get_LKA_Left_Lane_B_PRED_OTHER_SIDE( );
uint8 Get_LKA_Left_Lane_B_PRED_DIST_BASED_EXTRAPOLATION( );
uint8 Get_LKA_Left_Lane_B_Lane_mark_color( );
uint8 Get_LKA_Left_Lane_B_Lane_Crossing( );
uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_VRTL_MERGE( );
uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_STD( );
uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_HWE_SPAIN( );
uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_GUARDRAIL_SHADOW( );
uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_DIVERGING_LANES( );
uint8 Get_LKA_Left_Lane_B_Reserved1_laneB( );
uint8 Get_LKA_Left_Lane_B_PRED_HEADWAY_ORIENTED( );
uint8 Get_LKA_Left_Lane_B_TLC( );
int32 Get_LKA_Left_Lane_A_Lane_Model_C0( );
uint8 Get_LKA_Left_Lane_A_Quality( );
uint8 Get_LKA_Left_Lane_A_Lane_Type( );
int32 Get_LKA_Left_Lane_A_Lane_Model_C2( );
int32 Get_LKA_Left_Lane_A_Lane_Model_C3( );
uint16 Get_LKA_Left_Lane_A_Width_marking( );
uint32 Get_ID_TFL0_Internal_ID0( );
uint32 Get_ID_TFL0_Internal_ID1( );
uint32 Get_ID_TFL1_Internal_ID0( );
uint32 Get_ID_TFL1_Internal_ID1( );
uint32 Get_ID_TFL2_Internal_ID0( );
uint32 Get_ID_TFL2_Internal_ID1( );
uint32 Get_ID_TFL3_Internal_ID0( );
uint32 Get_ID_TFL3_Internal_ID1( );
uint32 Get_ID_TSR0_Internal_ID0( );
uint32 Get_ID_TSR0_Internal_ID1( );
uint32 Get_ID_TSR1_Internal_ID0( );
uint32 Get_ID_TSR1_Internal_ID1( );
uint32 Get_ID_TSR2_Internal_ID0( );
uint32 Get_ID_TSR2_Internal_ID1( );
uint32 Get_ID_TSR3_Internal_ID0( );
uint32 Get_ID_TSR3_Internal_ID1( );
uint8 Get_TFL_Header_StopSign_Warning( );
uint8 Get_TFL_Header_TFL_Warning( );
uint8 Get_TFL_Header_Main_Object_ID( );
uint8 Get_TFL_Header_Number_Of_TFL_Objects( );
uint8 Get_TFL_Header_TFL_TTC( );
uint8 Get_TFL_Header_StopSign_TTC( );
uint16 Get_TFL_Header_Stop_Line_Dist( );
uint16 Get_TFL_Header_JNC_Distance( );
uint8 Get_TFL_Header_Junction_Status( );
uint8 Get_TFL_Header_TFL_Warning_Supression_By_Driver( );
uint8 Get_TFL_Header_TFL_Warning_Supression_By_Vision( );
uint8 Get_TFL_Header_Stop_Line_Valid( );
uint8 Get_TFL_Header_Reserved_1_flag( );
uint8 Get_TFL_Header_SS_Warning_Supression_By_Vision( );
uint16 Get_TFL_Message0_TFL_PosY( );
uint8 Get_TFL_Message0_Object_ID( );
uint16 Get_TFL_Message0_TFL_PosX( );
uint32 Get_TFL_Message0_TFL_PosZ( );
uint16 Get_TFL_Message0_TFL_Width( );
uint8 Get_TFL_Message0_TFL_Color( );
uint16 Get_TFL_Message0_TFL_Supp1_Arrow( );
uint8 Get_TFL_Message0_TFL_Type( );
uint16 Get_TFL_Message0_TFL_Supp3_Arrow( );
uint8 Get_TFL_Message0_TFL_Supp2_Arrow( );
uint8 Get_TFL_Message0_TFL_assignment( );
uint16 Get_TFL_Message1_TFL_PosY( );
uint8 Get_TFL_Message1_Object_ID( );
uint16 Get_TFL_Message1_TFL_PosX( );
uint32 Get_TFL_Message1_TFL_PosZ( );
uint16 Get_TFL_Message1_TFL_Width( );
uint8 Get_TFL_Message1_TFL_Color( );
uint16 Get_TFL_Message1_TFL_Supp1_Arrow( );
uint8 Get_TFL_Message1_TFL_Type( );
uint16 Get_TFL_Message1_TFL_Supp3_Arrow( );
uint8 Get_TFL_Message1_TFL_Supp2_Arrow( );
uint8 Get_TFL_Message1_TFL_assignment( );
uint16 Get_TFL_Message2_TFL_PosY( );
uint8 Get_TFL_Message2_Object_ID( );
uint16 Get_TFL_Message2_TFL_PosX( );
uint32 Get_TFL_Message2_TFL_PosZ( );
uint16 Get_TFL_Message2_TFL_Width( );
uint8 Get_TFL_Message2_TFL_Color( );
uint16 Get_TFL_Message2_TFL_Supp1_Arrow( );
uint8 Get_TFL_Message2_TFL_Type( );
uint16 Get_TFL_Message2_TFL_Supp3_Arrow( );
uint8 Get_TFL_Message2_TFL_Supp2_Arrow( );
uint8 Get_TFL_Message2_TFL_assignment( );
uint16 Get_TFL_Message3_TFL_PosY( );
uint8 Get_TFL_Message3_Object_ID( );
uint16 Get_TFL_Message3_TFL_PosX( );
uint32 Get_TFL_Message3_TFL_PosZ( );
uint16 Get_TFL_Message3_TFL_Width( );
uint8 Get_TFL_Message3_TFL_Color( );
uint16 Get_TFL_Message3_TFL_Supp1_Arrow( );
uint8 Get_TFL_Message3_TFL_Type( );
uint16 Get_TFL_Message3_TFL_Supp3_Arrow( );
uint8 Get_TFL_Message3_TFL_Supp2_Arrow( );
uint8 Get_TFL_Message3_TFL_assignment( );
uint16 Get_TFL_Message4_TFL_PosY( );
uint8 Get_TFL_Message4_Object_ID( );
uint16 Get_TFL_Message4_TFL_PosX( );
uint32 Get_TFL_Message4_TFL_PosZ( );
uint16 Get_TFL_Message4_TFL_Width( );
uint8 Get_TFL_Message4_TFL_Color( );
uint16 Get_TFL_Message4_TFL_Supp1_Arrow( );
uint8 Get_TFL_Message4_TFL_Type( );
uint16 Get_TFL_Message4_TFL_Supp3_Arrow( );
uint8 Get_TFL_Message4_TFL_Supp2_Arrow( );
uint8 Get_TFL_Message4_TFL_assignment( );
uint16 Get_TFL_Message5_TFL_PosY( );
uint8 Get_TFL_Message5_Object_ID( );
uint16 Get_TFL_Message5_TFL_PosX( );
uint32 Get_TFL_Message5_TFL_PosZ( );
uint16 Get_TFL_Message5_TFL_Width( );
uint8 Get_TFL_Message5_TFL_Color( );
uint16 Get_TFL_Message5_TFL_Supp1_Arrow( );
uint8 Get_TFL_Message5_TFL_Type( );
uint16 Get_TFL_Message5_TFL_Supp3_Arrow( );
uint8 Get_TFL_Message5_TFL_Supp2_Arrow( );
uint8 Get_TFL_Message5_TFL_assignment( );
uint16 Get_TFL_Message6_TFL_PosY( );
uint8 Get_TFL_Message6_Object_ID( );
uint16 Get_TFL_Message6_TFL_PosX( );
uint32 Get_TFL_Message6_TFL_PosZ( );
uint16 Get_TFL_Message6_TFL_Width( );
uint8 Get_TFL_Message6_TFL_Color( );
uint16 Get_TFL_Message6_TFL_Supp1_Arrow( );
uint8 Get_TFL_Message6_TFL_Type( );
uint16 Get_TFL_Message6_TFL_Supp3_Arrow( );
uint8 Get_TFL_Message6_TFL_Supp2_Arrow( );
uint8 Get_TFL_Message6_TFL_assignment( );
uint16 Get_TFL_Message7_TFL_PosY( );
uint8 Get_TFL_Message7_Object_ID( );
uint16 Get_TFL_Message7_TFL_PosX( );
uint32 Get_TFL_Message7_TFL_PosZ( );
uint16 Get_TFL_Message7_TFL_Width( );
uint8 Get_TFL_Message7_TFL_Color( );
uint16 Get_TFL_Message7_TFL_Supp1_Arrow( );
uint8 Get_TFL_Message7_TFL_Type( );
uint16 Get_TFL_Message7_TFL_Supp3_Arrow( );
uint8 Get_TFL_Message7_TFL_Supp2_Arrow( );
uint8 Get_TFL_Message7_TFL_assignment( );
uint8 Get_TSR0_Vision_only_Sign_Type( );
uint8 Get_TSR0_Vision_only_Supp_Sign_Type( );
uint8 Get_TSR0_Sign_Position_X( );
int8 Get_TSR0_Sign_Position_Y( );
int8 Get_TSR0_Sign_Position_Z( );
uint8 Get_TSR0_Approved_Flag( );
uint8 Get_TSR0_Filter_type( );
uint8 Get_TSR0_Sign_Height( );
uint8 Get_TSR0_No_Entry_Vision_Status( );
uint8 Get_TSR0_Sign_Width( );
uint8 Get_TSR1_Vision_only_Sign_Type( );
uint8 Get_TSR1_Vision_only_Supp_Sign_Type( );
uint8 Get_TSR1_Sign_Position_X( );
int8 Get_TSR1_Sign_Position_Y( );
int8 Get_TSR1_Sign_Position_Z( );
uint8 Get_TSR1_Approved_Flag( );
uint8 Get_TSR1_Filter_type( );
uint8 Get_TSR1_Sign_Height( );
uint8 Get_TSR1_No_Entry_Vision_Status( );
uint8 Get_TSR1_Sign_Width( );
uint8 Get_TSR2_Vision_only_Sign_Type( );
uint8 Get_TSR2_Vision_only_Supp_Sign_Type( );
uint8 Get_TSR2_Sign_Position_X( );
int8 Get_TSR2_Sign_Position_Y( );
int8 Get_TSR2_Sign_Position_Z( );
uint8 Get_TSR2_Approved_Flag( );
uint8 Get_TSR2_Filter_type( );
uint8 Get_TSR2_Sign_Height( );
uint8 Get_TSR2_No_Entry_Vision_Status( );
uint8 Get_TSR2_Sign_Width( );
uint8 Get_TSR3_Vision_only_Sign_Type( );
uint8 Get_TSR3_Vision_only_Supp_Sign_Type( );
uint8 Get_TSR3_Sign_Position_X( );
int8 Get_TSR3_Sign_Position_Y( );
int8 Get_TSR3_Sign_Position_Z( );
uint8 Get_TSR3_Approved_Flag( );
uint8 Get_TSR3_Filter_type( );
uint8 Get_TSR3_Sign_Height( );
uint8 Get_TSR3_No_Entry_Vision_Status( );
uint8 Get_TSR3_Sign_Width( );
uint8 Get_TSR4_Vision_only_Sign_Type( );
uint8 Get_TSR4_Vision_only_Supp_Sign_Type( );
uint8 Get_TSR4_Sign_Position_X( );
int8 Get_TSR4_Sign_Position_Y( );
int8 Get_TSR4_Sign_Position_Z( );
uint8 Get_TSR4_Approved_Flag( );
uint8 Get_TSR4_Filter_type( );
uint8 Get_TSR4_Sign_Height( );
uint8 Get_TSR4_No_Entry_Vision_Status( );
uint8 Get_TSR4_Sign_Width( );
uint8 Get_TSR5_Vision_only_Sign_Type( );
uint8 Get_TSR5_Vision_only_Supp_Sign_Type( );
uint8 Get_TSR5_Sign_Position_X( );
int8 Get_TSR5_Sign_Position_Y( );
int8 Get_TSR5_Sign_Position_Z( );
uint8 Get_TSR5_Approved_Flag( );
uint8 Get_TSR5_Filter_type( );
uint8 Get_TSR5_Sign_Height( );
uint8 Get_TSR5_No_Entry_Vision_Status( );
uint8 Get_TSR5_Sign_Width( );
uint8 Get_TSR6_Vision_only_Sign_Type( );
uint8 Get_TSR6_Vision_only_Supp_Sign_Type( );
uint8 Get_TSR6_Sign_Position_X( );
int8 Get_TSR6_Sign_Position_Y( );
int8 Get_TSR6_Sign_Position_Z( );
uint8 Get_TSR6_Approved_Flag( );
uint8 Get_TSR6_Filter_type( );
uint8 Get_TSR6_Sign_Height( );
uint8 Get_TSR6_No_Entry_Vision_Status( );
uint8 Get_TSR6_Sign_Width( );
uint8 Get_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D1( );
uint8 Get_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D1( );
uint8 Get_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D2( );
uint8 Get_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D2( );
uint8 Get_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D3( );
uint8 Get_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D3( );
uint8 Get_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D4( );
uint8 Get_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D4( );
uint32 Get_ObstacleStatusB_timeStamp( );
uint32 Get_ObstacleStatusB_frameIndex( );
uint8 Get_ObstacleStatusA_NumObstacles( );
uint8 Get_ObstacleStatusA_Timestamp( );
uint16 Get_ObstacleStatusA_ApplicationVersion_rc( );
uint8 Get_ObstacleStatusA_ApplicationVersion_minor( );
uint16 Get_ObstacleStatusA_ProtocolVersion( );
uint8 Get_ObstacleStatusA_LeftCloseRangeCutIn( );
uint8 Get_ObstacleStatusA_RightCloseRangeCutIn( );
uint8 Get_ObstacleStatusA_Close_Car( );
uint8 Get_ObstacleStatusA_Go( );
uint16 Get_ObstacleStatusA_Failsafe( );
uint8 Get_ObstacleStatusA_reserved_3_flag( );
uint8 Get_ObstacleDataA1_ObstacleID( );
uint16 Get_ObstacleDataA1_ObstaclePosX( );
uint8 Get_ObstacleDataA1_reserved_4_flag( );
int16 Get_ObstacleDataA1_ObstaclePosY( );
uint8 Get_ObstacleDataA1_Move_in_and_Out( );
uint8 Get_ObstacleDataA1_BlinkerInfo( );
int16 Get_ObstacleDataA1_ObstacleVelX( );
uint8 Get_ObstacleDataA1_reserved_1_flag( );
uint8 Get_ObstacleDataA1_ObstacleType( );
uint8 Get_ObstacleDataA1_ObstacleValid( );
uint8 Get_ObstacleDataA1_reserved_2_flag( );
uint8 Get_ObstacleDataA1_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA1_ObstacleStatus( );
uint8 Get_ObstacleDataB1_ObstacleLength( );
uint8 Get_ObstacleDataB1_ObstacleWidth( );
uint8 Get_ObstacleDataB1_ObstacleAge( );
uint16 Get_ObstacleDataB1_RadarPosX( );
uint8 Get_ObstacleDataB1_reserved_1_flag( );
uint8 Get_ObstacleDataB1_CIPVFlag( );
uint8 Get_ObstacleDataB1_ObstacleLane( );
int16 Get_ObstacleDataB1_RadarVelX( );
uint8 Get_ObstacleDataB1_reserved_1_b( );
uint8 Get_ObstacleDataB1_RadarMatchConfidence( );
uint8 Get_ObstacleDataB1_reserved_1_c( );
uint8 Get_ObstacleDataB1_MatchedRadarID( );
int16 Get_ObstacleDataC1_ObstacleAngleRate( );
int8 Get_ObstacleDataC1_ObstacleVelY( );
uint8 Get_ObstacleDataC1_reserved_5_flag( );
int16 Get_ObstacleDataC1_Object_Accel_X( );
uint8 Get_ObstacleDataC1_reserved_3_flag( );
uint8 Get_ObstacleDataC1_ObstacleReplaced( );
uint8 Get_ObstacleDataC1_reserved_2_flag( );
int16 Get_ObstacleDataC1_ObstacleAngle( );
uint8 Get_ObstacleDataA2_ObstacleID( );
uint16 Get_ObstacleDataA2_ObstaclePosX( );
uint8 Get_ObstacleDataA2_reserved_4_flag( );
int16 Get_ObstacleDataA2_ObstaclePosY( );
uint8 Get_ObstacleDataA2_Move_in_and_Out( );
uint8 Get_ObstacleDataA2_BlinkerInfo( );
int16 Get_ObstacleDataA2_ObstacleVelX( );
uint8 Get_ObstacleDataA2_reserved_1_flag( );
uint8 Get_ObstacleDataA2_ObstacleType( );
uint8 Get_ObstacleDataA2_ObstacleValid( );
uint8 Get_ObstacleDataA2_reserved_2_flag( );
uint8 Get_ObstacleDataA2_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA2_ObstacleStatus( );
uint8 Get_ObstacleDataB2_ObstacleLength( );
uint8 Get_ObstacleDataB2_ObstacleWidth( );
uint8 Get_ObstacleDataB2_ObstacleAge( );
uint16 Get_ObstacleDataB2_RadarPosX( );
uint8 Get_ObstacleDataB2_reserved_1_flag( );
uint8 Get_ObstacleDataB2_CIPVFlag( );
uint8 Get_ObstacleDataB2_ObstacleLane( );
int16 Get_ObstacleDataB2_RadarVelX( );
uint8 Get_ObstacleDataB2_reserved_1_b( );
uint8 Get_ObstacleDataB2_RadarMatchConfidence( );
uint8 Get_ObstacleDataB2_reserved_1_c( );
uint8 Get_ObstacleDataB2_MatchedRadarID( );
int16 Get_ObstacleDataC2_ObstacleAngleRate( );
int8 Get_ObstacleDataC2_ObstacleVelY( );
uint8 Get_ObstacleDataC2_reserved_5_flag( );
int16 Get_ObstacleDataC2_Object_Accel_X( );
uint8 Get_ObstacleDataC2_reserved_3_flag( );
uint8 Get_ObstacleDataC2_ObstacleReplaced( );
uint8 Get_ObstacleDataC2_reserved_2_flag( );
int16 Get_ObstacleDataC2_ObstacleAngle( );
uint8 Get_ObstacleDataA3_ObstacleID( );
uint16 Get_ObstacleDataA3_ObstaclePosX( );
uint8 Get_ObstacleDataA3_reserved_4_flag( );
int16 Get_ObstacleDataA3_ObstaclePosY( );
uint8 Get_ObstacleDataA3_Move_in_and_Out( );
uint8 Get_ObstacleDataA3_BlinkerInfo( );
int16 Get_ObstacleDataA3_ObstacleVelX( );
uint8 Get_ObstacleDataA3_reserved_1_flag( );
uint8 Get_ObstacleDataA3_ObstacleType( );
uint8 Get_ObstacleDataA3_ObstacleValid( );
uint8 Get_ObstacleDataA3_reserved_2_flag( );
uint8 Get_ObstacleDataA3_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA3_ObstacleStatus( );
uint8 Get_ObstacleDataB3_ObstacleLength( );
uint8 Get_ObstacleDataB3_ObstacleWidth( );
uint8 Get_ObstacleDataB3_ObstacleAge( );
uint16 Get_ObstacleDataB3_RadarPosX( );
uint8 Get_ObstacleDataB3_reserved_1_flag( );
uint8 Get_ObstacleDataB3_CIPVFlag( );
uint8 Get_ObstacleDataB3_ObstacleLane( );
int16 Get_ObstacleDataB3_RadarVelX( );
uint8 Get_ObstacleDataB3_reserved_1_b( );
uint8 Get_ObstacleDataB3_RadarMatchConfidence( );
uint8 Get_ObstacleDataB3_reserved_1_c( );
uint8 Get_ObstacleDataB3_MatchedRadarID( );
int16 Get_ObstacleDataC3_ObstacleAngleRate( );
int8 Get_ObstacleDataC3_ObstacleVelY( );
uint8 Get_ObstacleDataC3_reserved_5_flag( );
int16 Get_ObstacleDataC3_Object_Accel_X( );
uint8 Get_ObstacleDataC3_reserved_3_flag( );
uint8 Get_ObstacleDataC3_ObstacleReplaced( );
uint8 Get_ObstacleDataC3_reserved_2_flag( );
int16 Get_ObstacleDataC3_ObstacleAngle( );
uint8 Get_ObstacleDataA4_ObstacleID( );
uint16 Get_ObstacleDataA4_ObstaclePosX( );
uint8 Get_ObstacleDataA4_reserved_4_flag( );
int16 Get_ObstacleDataA4_ObstaclePosY( );
uint8 Get_ObstacleDataA4_Move_in_and_Out( );
uint8 Get_ObstacleDataA4_BlinkerInfo( );
int16 Get_ObstacleDataA4_ObstacleVelX( );
uint8 Get_ObstacleDataA4_reserved_1_flag( );
uint8 Get_ObstacleDataA4_ObstacleType( );
uint8 Get_ObstacleDataA4_ObstacleValid( );
uint8 Get_ObstacleDataA4_reserved_2_flag( );
uint8 Get_ObstacleDataA4_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA4_ObstacleStatus( );
uint8 Get_ObstacleDataB4_ObstacleLength( );
uint8 Get_ObstacleDataB4_ObstacleWidth( );
uint8 Get_ObstacleDataB4_ObstacleAge( );
uint16 Get_ObstacleDataB4_RadarPosX( );
uint8 Get_ObstacleDataB4_reserved_1_flag( );
uint8 Get_ObstacleDataB4_CIPVFlag( );
uint8 Get_ObstacleDataB4_ObstacleLane( );
int16 Get_ObstacleDataB4_RadarVelX( );
uint8 Get_ObstacleDataB4_reserved_1_b( );
uint8 Get_ObstacleDataB4_RadarMatchConfidence( );
uint8 Get_ObstacleDataB4_reserved_1_c( );
uint8 Get_ObstacleDataB4_MatchedRadarID( );
int16 Get_ObstacleDataC4_ObstacleAngleRate( );
int8 Get_ObstacleDataC4_ObstacleVelY( );
uint8 Get_ObstacleDataC4_reserved_5_flag( );
int16 Get_ObstacleDataC4_Object_Accel_X( );
uint8 Get_ObstacleDataC4_reserved_3_flag( );
uint8 Get_ObstacleDataC4_ObstacleReplaced( );
uint8 Get_ObstacleDataC4_reserved_2_flag( );
int16 Get_ObstacleDataC4_ObstacleAngle( );
uint8 Get_ObstacleDataA5_ObstacleID( );
uint16 Get_ObstacleDataA5_ObstaclePosX( );
uint8 Get_ObstacleDataA5_reserved_4_flag( );
int16 Get_ObstacleDataA5_ObstaclePosY( );
uint8 Get_ObstacleDataA5_Move_in_and_Out( );
uint8 Get_ObstacleDataA5_BlinkerInfo( );
int16 Get_ObstacleDataA5_ObstacleVelX( );
uint8 Get_ObstacleDataA5_reserved_1_flag( );
uint8 Get_ObstacleDataA5_ObstacleType( );
uint8 Get_ObstacleDataA5_ObstacleValid( );
uint8 Get_ObstacleDataA5_reserved_2_flag( );
uint8 Get_ObstacleDataA5_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA5_ObstacleStatus( );
uint8 Get_ObstacleDataB5_ObstacleLength( );
uint8 Get_ObstacleDataB5_ObstacleWidth( );
uint8 Get_ObstacleDataB5_ObstacleAge( );
uint16 Get_ObstacleDataB5_RadarPosX( );
uint8 Get_ObstacleDataB5_reserved_1_flag( );
uint8 Get_ObstacleDataB5_CIPVFlag( );
uint8 Get_ObstacleDataB5_ObstacleLane( );
int16 Get_ObstacleDataB5_RadarVelX( );
uint8 Get_ObstacleDataB5_reserved_1_b( );
uint8 Get_ObstacleDataB5_RadarMatchConfidence( );
uint8 Get_ObstacleDataB5_reserved_1_c( );
uint8 Get_ObstacleDataB5_MatchedRadarID( );
int16 Get_ObstacleDataC5_ObstacleAngleRate( );
int8 Get_ObstacleDataC5_ObstacleVelY( );
uint8 Get_ObstacleDataC5_reserved_5_flag( );
int16 Get_ObstacleDataC5_Object_Accel_X( );
uint8 Get_ObstacleDataC5_reserved_3_flag( );
uint8 Get_ObstacleDataC5_ObstacleReplaced( );
uint8 Get_ObstacleDataC5_reserved_2_flag( );
int16 Get_ObstacleDataC5_ObstacleAngle( );
uint8 Get_ObstacleDataA6_ObstacleID( );
uint16 Get_ObstacleDataA6_ObstaclePosX( );
uint8 Get_ObstacleDataA6_reserved_4_flag( );
int16 Get_ObstacleDataA6_ObstaclePosY( );
uint8 Get_ObstacleDataA6_Move_in_and_Out( );
uint8 Get_ObstacleDataA6_BlinkerInfo( );
int16 Get_ObstacleDataA6_ObstacleVelX( );
uint8 Get_ObstacleDataA6_reserved_1_flag( );
uint8 Get_ObstacleDataA6_ObstacleType( );
uint8 Get_ObstacleDataA6_ObstacleValid( );
uint8 Get_ObstacleDataA6_reserved_2_flag( );
uint8 Get_ObstacleDataA6_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA6_ObstacleStatus( );
uint8 Get_ObstacleDataB6_ObstacleLength( );
uint8 Get_ObstacleDataB6_ObstacleWidth( );
uint8 Get_ObstacleDataB6_ObstacleAge( );
uint16 Get_ObstacleDataB6_RadarPosX( );
uint8 Get_ObstacleDataB6_reserved_1_flag( );
uint8 Get_ObstacleDataB6_CIPVFlag( );
uint8 Get_ObstacleDataB6_ObstacleLane( );
int16 Get_ObstacleDataB6_RadarVelX( );
uint8 Get_ObstacleDataB6_reserved_1_b( );
uint8 Get_ObstacleDataB6_RadarMatchConfidence( );
uint8 Get_ObstacleDataB6_reserved_1_c( );
uint8 Get_ObstacleDataB6_MatchedRadarID( );
int16 Get_ObstacleDataC6_ObstacleAngleRate( );
int8 Get_ObstacleDataC6_ObstacleVelY( );
uint8 Get_ObstacleDataC6_reserved_5_flag( );
int16 Get_ObstacleDataC6_Object_Accel_X( );
uint8 Get_ObstacleDataC6_reserved_3_flag( );
uint8 Get_ObstacleDataC6_ObstacleReplaced( );
uint8 Get_ObstacleDataC6_reserved_2_flag( );
int16 Get_ObstacleDataC6_ObstacleAngle( );
uint8 Get_ObstacleDataA7_ObstacleID( );
uint16 Get_ObstacleDataA7_ObstaclePosX( );
uint8 Get_ObstacleDataA7_reserved_4_flag( );
int16 Get_ObstacleDataA7_ObstaclePosY( );
uint8 Get_ObstacleDataA7_Move_in_and_Out( );
uint8 Get_ObstacleDataA7_BlinkerInfo( );
int16 Get_ObstacleDataA7_ObstacleVelX( );
uint8 Get_ObstacleDataA7_reserved_1_flag( );
uint8 Get_ObstacleDataA7_ObstacleType( );
uint8 Get_ObstacleDataA7_ObstacleValid( );
uint8 Get_ObstacleDataA7_reserved_2_flag( );
uint8 Get_ObstacleDataA7_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA7_ObstacleStatus( );
uint8 Get_ObstacleDataB7_ObstacleLength( );
uint8 Get_ObstacleDataB7_ObstacleWidth( );
uint8 Get_ObstacleDataB7_ObstacleAge( );
uint16 Get_ObstacleDataB7_RadarPosX( );
uint8 Get_ObstacleDataB7_reserved_1_flag( );
uint8 Get_ObstacleDataB7_CIPVFlag( );
uint8 Get_ObstacleDataB7_ObstacleLane( );
int16 Get_ObstacleDataB7_RadarVelX( );
uint8 Get_ObstacleDataB7_reserved_1_b( );
uint8 Get_ObstacleDataB7_RadarMatchConfidence( );
uint8 Get_ObstacleDataB7_reserved_1_c( );
uint8 Get_ObstacleDataB7_MatchedRadarID( );
int16 Get_ObstacleDataC7_ObstacleAngleRate( );
int8 Get_ObstacleDataC7_ObstacleVelY( );
uint8 Get_ObstacleDataC7_reserved_5_flag( );
int16 Get_ObstacleDataC7_Object_Accel_X( );
uint8 Get_ObstacleDataC7_reserved_3_flag( );
uint8 Get_ObstacleDataC7_ObstacleReplaced( );
uint8 Get_ObstacleDataC7_reserved_2_flag( );
int16 Get_ObstacleDataC7_ObstacleAngle( );
uint8 Get_ObstacleDataA8_ObstacleID( );
uint16 Get_ObstacleDataA8_ObstaclePosX( );
uint8 Get_ObstacleDataA8_reserved_4_flag( );
int16 Get_ObstacleDataA8_ObstaclePosY( );
uint8 Get_ObstacleDataA8_Move_in_and_Out( );
uint8 Get_ObstacleDataA8_BlinkerInfo( );
int16 Get_ObstacleDataA8_ObstacleVelX( );
uint8 Get_ObstacleDataA8_reserved_1_flag( );
uint8 Get_ObstacleDataA8_ObstacleType( );
uint8 Get_ObstacleDataA8_ObstacleValid( );
uint8 Get_ObstacleDataA8_reserved_2_flag( );
uint8 Get_ObstacleDataA8_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA8_ObstacleStatus( );
uint8 Get_ObstacleDataB8_ObstacleLength( );
uint8 Get_ObstacleDataB8_ObstacleWidth( );
uint8 Get_ObstacleDataB8_ObstacleAge( );
uint16 Get_ObstacleDataB8_RadarPosX( );
uint8 Get_ObstacleDataB8_reserved_1_flag( );
uint8 Get_ObstacleDataB8_CIPVFlag( );
uint8 Get_ObstacleDataB8_ObstacleLane( );
int16 Get_ObstacleDataB8_RadarVelX( );
uint8 Get_ObstacleDataB8_reserved_1_b( );
uint8 Get_ObstacleDataB8_RadarMatchConfidence( );
uint8 Get_ObstacleDataB8_reserved_1_c( );
uint8 Get_ObstacleDataB8_MatchedRadarID( );
int16 Get_ObstacleDataC8_ObstacleAngleRate( );
int8 Get_ObstacleDataC8_ObstacleVelY( );
uint8 Get_ObstacleDataC8_reserved_5_flag( );
int16 Get_ObstacleDataC8_Object_Accel_X( );
uint8 Get_ObstacleDataC8_reserved_3_flag( );
uint8 Get_ObstacleDataC8_ObstacleReplaced( );
uint8 Get_ObstacleDataC8_reserved_2_flag( );
int16 Get_ObstacleDataC8_ObstacleAngle( );
uint8 Get_ObstacleDataA9_ObstacleID( );
uint16 Get_ObstacleDataA9_ObstaclePosX( );
uint8 Get_ObstacleDataA9_reserved_4_flag( );
int16 Get_ObstacleDataA9_ObstaclePosY( );
uint8 Get_ObstacleDataA9_Move_in_and_Out( );
uint8 Get_ObstacleDataA9_BlinkerInfo( );
int16 Get_ObstacleDataA9_ObstacleVelX( );
uint8 Get_ObstacleDataA9_reserved_1_flag( );
uint8 Get_ObstacleDataA9_ObstacleType( );
uint8 Get_ObstacleDataA9_ObstacleValid( );
uint8 Get_ObstacleDataA9_reserved_2_flag( );
uint8 Get_ObstacleDataA9_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA9_ObstacleStatus( );
uint8 Get_ObstacleDataB9_ObstacleLength( );
uint8 Get_ObstacleDataB9_ObstacleWidth( );
uint8 Get_ObstacleDataB9_ObstacleAge( );
uint16 Get_ObstacleDataB9_RadarPosX( );
uint8 Get_ObstacleDataB9_reserved_1_flag( );
uint8 Get_ObstacleDataB9_CIPVFlag( );
uint8 Get_ObstacleDataB9_ObstacleLane( );
int16 Get_ObstacleDataB9_RadarVelX( );
uint8 Get_ObstacleDataB9_reserved_1_b( );
uint8 Get_ObstacleDataB9_RadarMatchConfidence( );
uint8 Get_ObstacleDataB9_reserved_1_c( );
uint8 Get_ObstacleDataB9_MatchedRadarID( );
int16 Get_ObstacleDataC9_ObstacleAngleRate( );
int8 Get_ObstacleDataC9_ObstacleVelY( );
uint8 Get_ObstacleDataC9_reserved_5_flag( );
int16 Get_ObstacleDataC9_Object_Accel_X( );
uint8 Get_ObstacleDataC9_reserved_3_flag( );
uint8 Get_ObstacleDataC9_ObstacleReplaced( );
uint8 Get_ObstacleDataC9_reserved_2_flag( );
int16 Get_ObstacleDataC9_ObstacleAngle( );
uint8 Get_ObstacleDataA10_ObstacleID( );
uint16 Get_ObstacleDataA10_ObstaclePosX( );
uint8 Get_ObstacleDataA10_reserved_4_flag( );
int16 Get_ObstacleDataA10_ObstaclePosY( );
uint8 Get_ObstacleDataA10_Move_in_and_Out( );
uint8 Get_ObstacleDataA10_BlinkerInfo( );
int16 Get_ObstacleDataA10_ObstacleVelX( );
uint8 Get_ObstacleDataA10_reserved_1_flag( );
uint8 Get_ObstacleDataA10_ObstacleType( );
uint8 Get_ObstacleDataA10_ObstacleValid( );
uint8 Get_ObstacleDataA10_reserved_2_flag( );
uint8 Get_ObstacleDataA10_ObstacleBrakeLights( );
uint8 Get_ObstacleDataA10_ObstacleStatus( );
uint8 Get_ObstacleDataB10_ObstacleLength( );
uint8 Get_ObstacleDataB10_ObstacleWidth( );
uint8 Get_ObstacleDataB10_ObstacleAge( );
uint16 Get_ObstacleDataB10_RadarPosX( );
uint8 Get_ObstacleDataB10_reserved_1_flag( );
uint8 Get_ObstacleDataB10_CIPVFlag( );
uint8 Get_ObstacleDataB10_ObstacleLane( );
int16 Get_ObstacleDataB10_RadarVelX( );
uint8 Get_ObstacleDataB10_reserved_1_b( );
uint8 Get_ObstacleDataB10_RadarMatchConfidence( );
uint8 Get_ObstacleDataB10_reserved_1_c( );
uint8 Get_ObstacleDataB10_MatchedRadarID( );
int16 Get_ObstacleDataC10_ObstacleAngleRate( );
int8 Get_ObstacleDataC10_ObstacleVelY( );
uint8 Get_ObstacleDataC10_reserved_5_flag( );
int16 Get_ObstacleDataC10_Object_Accel_X( );
uint8 Get_ObstacleDataC10_reserved_3_flag( );
uint8 Get_ObstacleDataC10_ObstacleReplaced( );
uint8 Get_ObstacleDataC10_reserved_2_flag( );
int16 Get_ObstacleDataC10_ObstacleAngle( );
uint16 Get_ObstacleStatusC_grabIndex( );
uint8 Get_ObstacleStatusC_pedalConfGenObjDistFromBumper( );
uint16 Get_ObstacleStatusC_pedalConfusionGeneralObjTTC( );
uint32 Get_ObstacleStatusC_reserved_6_flag( );





uint32 Get_F_Master_Time_Sync_RF_FTimeSyncMstrClock( );
uint16 Get_F_Master_Time_Sync_RF_FTimeSyncMstrChksm( );
uint8 Get_F_Master_Time_Sync_RF_FTimeSyncMstrClockV( );
uint8 Get_F_Master_Time_Sync_RF_SensorModeCmdLRR( );
uint8 Get_F_Master_Time_Sync_RF_SensorModeCmdSRR( );
uint8 Get_F_Master_Time_Sync_RF_SensorModeCmdFCamera( );
uint8 Get_F_Vehicle_Path_Estimate_RF_Vpath_CurvatureV( );
uint8 Get_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfstV( );
uint8 Get_F_Vehicle_Path_Estimate_RF_Vpath_RollingCount( );
int8 Get_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfst( );
int16 Get_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLatOfst( );
int16 Get_F_Vehicle_Path_Estimate_RF_Vpath_Curvature( );
uint16 Get_F_Vehicle_Path_Estimate_RF_Vpath_Checksum( );
uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVelV( );
uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRateV( );
uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2TravlDirctn( );
int16 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVel( );
int16 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRate( );
int8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVel( );
uint16 Get_F_Vehicle_Path_Data_2_RF_Vpath2_Checksum( );
uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2ModeInfo( );
uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2RollCnt( );
uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVelV( );
uint8 Get_Body_Info_FOB_RF_HighBmAct( );
uint8 Get_Body_Info_FOB_RF_LowBmAct( );
uint8 Get_Body_Info_FOB_RF_WSWprAct( );
uint8 Get_Body_Info_FOB_RF_LftLwBmFld( );
uint8 Get_Body_Info_FOB_RF_RtLwBmFld( );
uint8 Get_Body_Info_FOB_RF_OtsdAmbtLtLvlStatV( );
uint8 Get_Body_Info_FOB_RF_OtsdAmbtLtLvlStat( );
uint8 Get_Body_Info_FOB_RF_SysPwrMdV( );
uint8 Get_Body_Info_FOB_RF_SysPwrMd( );
uint8 Get_Body_Info_FOB_RF_WSWshSwAtv( );
uint8 Get_Body_Info_FOB_RF_TrStLgMdAtv( );
uint8 Get_Body_Info_FOB_RF_DrvrHndsOnWhlZn3( );
uint8 Get_Body_Info_FOB_RF_DrvrHndsOnWhlZn2( );
uint8 Get_Body_Info_FOB_RF_DrvrHndsOnWhlZn1( );
uint8 Get_Body_Info_FOB_RF_DrDoorOpenSwActV( );
uint8 Get_Body_Info_FOB_RF_DrDoorOpenSwAct( );
uint8 Get_Body_Info_FOB_RF_StrgColCommsFlt( );
uint8 Get_Body_Info_FOB_RF_DrvWndPosStat( );
uint8 Get_Body_Info_FOB_RF_InterLghtStat( );
uint8 Get_Body_Info_FOB_RF_StrgColInOutPos( );
uint8 Get_Body_Info_FOB_RF_StrgColUpDwnPos( );
uint8 Get_Body_Info_FOB_RF_CPMAPINFO4( );
uint8 Get_R_SRR_Object_Header_RF_RSrrRollingCnt( );
uint8 Get_R_SRR_Object_Header_RF_RSRRModeCmdFdbk( );
uint16 Get_R_SRR_Object_Header_RF_RSrrTimeStamp( );
uint8 Get_R_SRR_Object_Header_RF_RSRRNumValidTargets( );
uint8 Get_R_SRR_Object_Header_RF_RSrrTimeStampV( );
uint8 Get_RSRRDiagStatus_RF_RSRRSnstvFltPrsntInt( );
uint8 Get_RSRRDiagStatus_RF_RSRRHWFltPrsntInt( );
uint8 Get_RSRRDiagStatus_RF_RSRRAntTngFltPrsnt( );
uint8 Get_RSRRDiagStatus_RF_RSRRCANIDAddrsUnsbl( );
uint8 Get_RSRRDiagStatus_RF_RSRRCANRxErr( );
uint8 Get_RSRRDiagStatus_RF_RSRRCANSgnlSpvFld( );
uint8 Get_RSRRDiagStatus_RF_RSRRDiagSpare( );
uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnPtchUp( );
uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnPtchDn( );
uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnRllLt( );
uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnRllRt( );
uint8 Get_RSRRDiagStatus_RF_RSRRExtIntrfrnc( );
uint8 Get_RSRRDiagStatus_RF_RSRRPlntAlgnInProc( );
uint8 Get_RSRRDiagStatus_RF_RSRRSvcAlgnInPrcs( );
uint8 Get_RSRRDiagStatus_RF_RSRRAlgnFltPrsnt( );
uint8 Get_RSRRDiagStatus_RF_RSRRInitDiagCmplt( );
uint8 Get_RSRRDiagStatus_RF_RSRRAmbTmpOutRngHi( );
uint8 Get_RSRRDiagStatus_RF_RSRRAmbTmpOutRngLw( );
uint8 Get_RSRRDiagStatus_RF_RSRRVltgOutRngHi( );
uint8 Get_RSRRDiagStatus_RF_RSRRVltgOutRngLo( );
uint8 Get_RSRRDiagStatus_RF_RSRRSnsrBlckd( );
uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnYawLt( );
uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnYawRt( );
uint16 Get_R_SRR_Object_Header_RF_RSrrBurstChecksum( );
uint16 Get_R_SRR_Object_Track1_RF_RSrrTrkRange1( );
int16 Get_R_SRR_Object_Track1_RF_RSrrTrkRRate1( );
uint8 Get_R_SRR_Object_Track1_RF_RSrrTrkObjElevation1( );
uint8 Get_R_SRR_Object_Track1_RF_RSrrTrkDynamProp1( );
int16 Get_R_SRR_Object_Track1_RF_RSrrTrkAzimuth1( );
uint8 Get_R_SRR_Object_Track1_RF_RSrrTrkObjID1( );
int8 Get_R_SRR_Object_Track1_RF_RSrrTrkObsRange1( );
uint8 Get_R_SRR_Object_Track1_RF_RSrrTrkMeasStatus1( );
int8 Get_R_SRR_Object_Track1_RF_RSrrTrkRawAzimuth1( );
uint8 Get_R_SRR_Object_Track1_RF_RSrrBurstID1( );
uint16 Get_R_SRR_Object_Track2_RF_RSrrTrkRange2( );
int16 Get_R_SRR_Object_Track2_RF_RSrrTrkRRate2( );
uint8 Get_R_SRR_Object_Track2_RF_RSrrTrkObjElevation2( );
uint8 Get_R_SRR_Object_Track2_RF_RSrrTrkDynamProp2( );
int16 Get_R_SRR_Object_Track2_RF_RSrrTrkAzimuth2( );
uint8 Get_R_SRR_Object_Track2_RF_RSrrTrkObjID2( );
int8 Get_R_SRR_Object_Track2_RF_RSrrTrkObsRange2( );
uint8 Get_R_SRR_Object_Track2_RF_RSrrTrkMeasStatus2( );
int8 Get_R_SRR_Object_Track2_RF_RSrrTrkRawAzimuth2( );
uint8 Get_R_SRR_Object_Track2_RF_RSrrBurstID2( );
uint16 Get_R_SRR_Object_Track3_RF_RSrrTrkRange3( );
int16 Get_R_SRR_Object_Track3_RF_RSrrTrkRRate3( );
uint8 Get_R_SRR_Object_Track3_RF_RSrrTrkObjElevation3( );
uint8 Get_R_SRR_Object_Track3_RF_RSrrTrkDynamProp3( );
int16 Get_R_SRR_Object_Track3_RF_RSrrTrkAzimuth3( );
uint8 Get_R_SRR_Object_Track3_RF_RSrrTrkObjID3( );
int8 Get_R_SRR_Object_Track3_RF_RSrrTrkObsRange3( );
uint8 Get_R_SRR_Object_Track3_RF_RSrrTrkMeasStatus3( );
int8 Get_R_SRR_Object_Track3_RF_RSrrTrkRawAzimuth3( );
uint8 Get_R_SRR_Object_Track3_RF_RSrrBurstID3( );
uint16 Get_R_SRR_Object_Track4_RF_RSrrTrkRange4( );
int16 Get_R_SRR_Object_Track4_RF_RSrrTrkRRate4( );
uint8 Get_R_SRR_Object_Track4_RF_RSrrTrkObjElevation4( );
uint8 Get_R_SRR_Object_Track4_RF_RSrrTrkDynamProp4( );
int16 Get_R_SRR_Object_Track4_RF_RSrrTrkAzimuth4( );
uint8 Get_R_SRR_Object_Track4_RF_RSrrTrkObjID4( );
int8 Get_R_SRR_Object_Track4_RF_RSrrTrkObsRange4( );
uint8 Get_R_SRR_Object_Track4_RF_RSrrTrkMeasStatus4( );
int8 Get_R_SRR_Object_Track4_RF_RSrrTrkRawAzimuth4( );
uint8 Get_R_SRR_Object_Track4_RF_RSrrBurstID4( );
uint16 Get_R_SRR_Object_Track5_RF_RSrrTrkRange5( );
int16 Get_R_SRR_Object_Track5_RF_RSrrTrkRRate5( );
uint8 Get_R_SRR_Object_Track5_RF_RSrrTrkObjElevation5( );
uint8 Get_R_SRR_Object_Track5_RF_RSrrTrkDynamProp5( );
int16 Get_R_SRR_Object_Track5_RF_RSrrTrkAzimuth5( );
uint8 Get_R_SRR_Object_Track5_RF_RSrrTrkObjID5( );
int8 Get_R_SRR_Object_Track5_RF_RSrrTrkObsRange5( );
uint8 Get_R_SRR_Object_Track5_RF_RSrrTrkMeasStatus5( );
int8 Get_R_SRR_Object_Track5_RF_RSrrTrkRawAzimuth5( );
uint8 Get_R_SRR_Object_Track5_RF_RSrrBurstID5( );
uint16 Get_R_SRR_Object_Track6_RF_RSrrTrkRange6( );
int16 Get_R_SRR_Object_Track6_RF_RSrrTrkRRate6( );
uint8 Get_R_SRR_Object_Track6_RF_RSrrTrkObjElevation6( );
uint8 Get_R_SRR_Object_Track6_RF_RSrrTrkDynamProp6( );
int16 Get_R_SRR_Object_Track6_RF_RSrrTrkAzimuth6( );
uint8 Get_R_SRR_Object_Track6_RF_RSrrTrkObjID6( );
int8 Get_R_SRR_Object_Track6_RF_RSrrTrkObsRange6( );
uint8 Get_R_SRR_Object_Track6_RF_RSrrTrkMeasStatus6( );
int8 Get_R_SRR_Object_Track6_RF_RSrrTrkRawAzimuth6( );
uint8 Get_R_SRR_Object_Track6_RF_RSrrBurstID6( );
uint16 Get_R_SRR_Object_Track7_RF_RSrrTrkRange7( );
int16 Get_R_SRR_Object_Track7_RF_RSrrTrkRRate7( );
uint8 Get_R_SRR_Object_Track7_RF_RSrrTrkObjElevation7( );
uint8 Get_R_SRR_Object_Track7_RF_RSrrTrkDynamProp7( );
int16 Get_R_SRR_Object_Track7_RF_RSrrTrkAzimuth7( );
uint8 Get_R_SRR_Object_Track7_RF_RSrrTrkObjID7( );
int8 Get_R_SRR_Object_Track7_RF_RSrrTrkObsRange7( );
uint8 Get_R_SRR_Object_Track7_RF_RSrrTrkMeasStatus7( );
int8 Get_R_SRR_Object_Track7_RF_RSrrTrkRawAzimuth7( );
uint8 Get_R_SRR_Object_Track7_RF_RSrrBurstID7( );
uint16 Get_R_SRR_Object_Track8_RF_RSrrTrkRange8( );
int16 Get_R_SRR_Object_Track8_RF_RSrrTrkRRate8( );
uint8 Get_R_SRR_Object_Track8_RF_RSrrTrkObjElevation8( );
uint8 Get_R_SRR_Object_Track8_RF_RSrrTrkDynamProp8( );
int16 Get_R_SRR_Object_Track8_RF_RSrrTrkAzimuth8( );
uint8 Get_R_SRR_Object_Track8_RF_RSrrTrkObjID8( );
int8 Get_R_SRR_Object_Track8_RF_RSrrTrkObsRange8( );
uint8 Get_R_SRR_Object_Track8_RF_RSrrTrkMeasStatus8( );
int8 Get_R_SRR_Object_Track8_RF_RSrrTrkRawAzimuth8( );
uint8 Get_R_SRR_Object_Track8_RF_RSrrBurstID8( );
uint16 Get_R_SRR_Object_Track9_RF_RSrrTrkRange9( );
int16 Get_R_SRR_Object_Track9_RF_RSrrTrkRRate9( );
uint8 Get_R_SRR_Object_Track9_RF_RSrrTrkObjElevation9( );
uint8 Get_R_SRR_Object_Track9_RF_RSrrTrkDynamProp9( );
int16 Get_R_SRR_Object_Track9_RF_RSrrTrkAzimuth9( );
uint8 Get_R_SRR_Object_Track9_RF_RSrrTrkObjID9( );
int8 Get_R_SRR_Object_Track9_RF_RSrrTrkObsRange9( );
uint8 Get_R_SRR_Object_Track9_RF_RSrrTrkMeasStatus9( );
int8 Get_R_SRR_Object_Track9_RF_RSrrTrkRawAzimuth9( );
uint8 Get_R_SRR_Object_Track9_RF_RSrrBurstID9( );
uint16 Get_R_SRR_Object_Track10_RF_RSrrTrkRange10( );
int16 Get_R_SRR_Object_Track10_RF_RSrrTrkRRate10( );
uint8 Get_R_SRR_Object_Track10_RF_RSrrTrkObjElevation10( );
uint8 Get_R_SRR_Object_Track10_RF_RSrrTrkDynamProp10( );
int16 Get_R_SRR_Object_Track10_RF_RSrrTrkAzimuth10( );
uint8 Get_R_SRR_Object_Track10_RF_RSrrTrkObjID10( );
int8 Get_R_SRR_Object_Track10_RF_RSrrTrkObsRange10( );
uint8 Get_R_SRR_Object_Track10_RF_RSrrTrkMeasStatus10( );
int8 Get_R_SRR_Object_Track10_RF_RSrrTrkRawAzimuth10( );
uint8 Get_R_SRR_Object_Track10_RF_RSrrBurstID10( );
uint8 Get_Mobileye_Generic_Sensor_Brakes( );
uint8 Get_Mobileye_Generic_Sensor_Left_Blink( );
uint8 Get_Mobileye_Generic_Sensor_Right_blink( );
uint8 Get_Mobileye_Generic_Sensor_Wipers( );
uint8 Get_Mobileye_Generic_Sensor_High_Beam( );
uint8 Get_Mobileye_Generic_Sensor_Reverse_gear( );
uint16 Get_Mobileye_Generic_Sensor_Vehicle_Speed( );
int16 Get_Mobileye_Generic_Sensor_Yaw_rate( );
int16 Get_Mobileye_Generic_Sensor_Steering_Wheel_Angle( );

void Put_Mobileye_Generic_Sensor_Brakes(uint8 sigData);
void Put_Mobileye_Generic_Sensor_Left_Blink(uint8 sigData);
void Put_Mobileye_Generic_Sensor_Right_blink(uint8 sigData);
void Put_Mobileye_Generic_Sensor_Wipers(uint8 sigData);
void Put_Mobileye_Generic_Sensor_High_Beam(uint8 sigData);
void Put_Mobileye_Generic_Sensor_Reverse_gear(uint8 sigData);
void Put_Mobileye_Generic_Sensor_Vehicle_Speed(uint16 sigData);
void Put_Mobileye_Generic_Sensor_Yaw_rate(int16 sigData);
void Put_Mobileye_Generic_Sensor_Steering_Wheel_Angle(int16 sigData);

void Put_F_Master_Time_Sync_RF_FTimeSyncMstrClock(uint32 sigData);
void Put_F_Master_Time_Sync_RF_FTimeSyncMstrChksm(uint16 sigData);
void Put_F_Master_Time_Sync_RF_FTimeSyncMstrClockV(uint8 sigData);
void Put_F_Master_Time_Sync_RF_SensorModeCmdLRR(uint8 sigData);
void Put_F_Master_Time_Sync_RF_SensorModeCmdSRR(uint8 sigData);
void Put_F_Master_Time_Sync_RF_SensorModeCmdFCamera(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_RF_Vpath_CurvatureV(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfstV(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_RF_Vpath_RollingCount(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfst(int8 sigData);
void Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLatOfst(int16 sigData);
void Put_F_Vehicle_Path_Estimate_RF_Vpath_Curvature(int16 sigData);
void Put_F_Vehicle_Path_Estimate_RF_Vpath_Checksum(uint16 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVelV(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRateV(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2TravlDirctn(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVel(int16 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRate(int16 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVel(int8 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath2_Checksum(uint16 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2ModeInfo(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2RollCnt(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVelV(uint8 sigData);
void Put_Body_Info_FOB_RF_HighBmAct(uint8 sigData);
void Put_Body_Info_FOB_RF_LowBmAct(uint8 sigData);
void Put_Body_Info_FOB_RF_WSWprAct(uint8 sigData);
void Put_Body_Info_FOB_RF_LftLwBmFld(uint8 sigData);
void Put_Body_Info_FOB_RF_RtLwBmFld(uint8 sigData);
void Put_Body_Info_FOB_RF_OtsdAmbtLtLvlStatV(uint8 sigData);
void Put_Body_Info_FOB_RF_OtsdAmbtLtLvlStat(uint8 sigData);
void Put_Body_Info_FOB_RF_SysPwrMdV(uint8 sigData);
void Put_Body_Info_FOB_RF_SysPwrMd(uint8 sigData);
void Put_Body_Info_FOB_RF_WSWshSwAtv(uint8 sigData);
void Put_Body_Info_FOB_RF_TrStLgMdAtv(uint8 sigData);
void Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn3(uint8 sigData);
void Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn2(uint8 sigData);
void Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn1(uint8 sigData);
void Put_Body_Info_FOB_RF_DrDoorOpenSwActV(uint8 sigData);
void Put_Body_Info_FOB_RF_DrDoorOpenSwAct(uint8 sigData);
void Put_Body_Info_FOB_RF_StrgColCommsFlt(uint8 sigData);
void Put_Body_Info_FOB_RF_DrvWndPosStat(uint8 sigData);
void Put_Body_Info_FOB_RF_InterLghtStat(uint8 sigData);
void Put_Body_Info_FOB_RF_StrgColInOutPos(uint8 sigData);
void Put_Body_Info_FOB_RF_StrgColUpDwnPos(uint8 sigData);
void Put_Body_Info_FOB_RF_CPMAPINFO4(uint8 sigData);
void Put_R_SRR_Object_Header_RF_RSrrRollingCnt(uint8 sigData);
void Put_R_SRR_Object_Header_RF_RSRRModeCmdFdbk(uint8 sigData);
void Put_R_SRR_Object_Header_RF_RSrrTimeStamp(uint16 sigData);
void Put_R_SRR_Object_Header_RF_RSRRNumValidTargets(uint8 sigData);
void Put_R_SRR_Object_Header_RF_RSrrTimeStampV(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRSnstvFltPrsntInt(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRHWFltPrsntInt(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRAntTngFltPrsnt(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRCANIDAddrsUnsbl(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRCANRxErr(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRCANSgnlSpvFld(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRDiagSpare(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRMsalgnPtchUp(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRMsalgnPtchDn(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRMsalgnRllLt(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRMsalgnRllRt(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRExtIntrfrnc(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRPlntAlgnInProc(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRSvcAlgnInPrcs(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRAlgnFltPrsnt(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRInitDiagCmplt(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRAmbTmpOutRngHi(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRAmbTmpOutRngLw(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRVltgOutRngHi(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRVltgOutRngLo(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRSnsrBlckd(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRMsalgnYawLt(uint8 sigData);
void Put_RSRRDiagStatus_RF_RSRRMsalgnYawRt(uint8 sigData);
void Put_R_SRR_Object_Header_RF_RSrrBurstChecksum(uint16 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkRange1(uint16 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkRRate1(int16 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkObjElevation1(uint8 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkDynamProp1(uint8 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkAzimuth1(int16 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkObjID1(uint8 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkObsRange1(int8 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkMeasStatus1(uint8 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrTrkRawAzimuth1(int8 sigData);
void Put_R_SRR_Object_Track1_RF_RSrrBurstID1(uint8 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkRange2(uint16 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkRRate2(int16 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkObjElevation2(uint8 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkDynamProp2(uint8 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkAzimuth2(int16 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkObjID2(uint8 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkObsRange2(int8 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkMeasStatus2(uint8 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrTrkRawAzimuth2(int8 sigData);
void Put_R_SRR_Object_Track2_RF_RSrrBurstID2(uint8 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkRange3(uint16 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkRRate3(int16 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkObjElevation3(uint8 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkDynamProp3(uint8 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkAzimuth3(int16 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkObjID3(uint8 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkObsRange3(int8 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkMeasStatus3(uint8 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrTrkRawAzimuth3(int8 sigData);
void Put_R_SRR_Object_Track3_RF_RSrrBurstID3(uint8 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkRange4(uint16 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkRRate4(int16 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkObjElevation4(uint8 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkDynamProp4(uint8 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkAzimuth4(int16 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkObjID4(uint8 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkObsRange4(int8 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkMeasStatus4(uint8 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrTrkRawAzimuth4(int8 sigData);
void Put_R_SRR_Object_Track4_RF_RSrrBurstID4(uint8 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkRange5(uint16 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkRRate5(int16 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkObjElevation5(uint8 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkDynamProp5(uint8 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkAzimuth5(int16 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkObjID5(uint8 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkObsRange5(int8 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkMeasStatus5(uint8 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrTrkRawAzimuth5(int8 sigData);
void Put_R_SRR_Object_Track5_RF_RSrrBurstID5(uint8 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkRange6(uint16 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkRRate6(int16 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkObjElevation6(uint8 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkDynamProp6(uint8 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkAzimuth6(int16 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkObjID6(uint8 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkObsRange6(int8 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkMeasStatus6(uint8 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrTrkRawAzimuth6(int8 sigData);
void Put_R_SRR_Object_Track6_RF_RSrrBurstID6(uint8 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkRange7(uint16 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkRRate7(int16 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkObjElevation7(uint8 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkDynamProp7(uint8 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkAzimuth7(int16 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkObjID7(uint8 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkObsRange7(int8 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkMeasStatus7(uint8 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrTrkRawAzimuth7(int8 sigData);
void Put_R_SRR_Object_Track7_RF_RSrrBurstID7(uint8 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkRange8(uint16 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkRRate8(int16 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkObjElevation8(uint8 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkDynamProp8(uint8 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkAzimuth8(int16 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkObjID8(uint8 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkObsRange8(int8 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkMeasStatus8(uint8 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrTrkRawAzimuth8(int8 sigData);
void Put_R_SRR_Object_Track8_RF_RSrrBurstID8(uint8 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkRange9(uint16 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkRRate9(int16 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkObjElevation9(uint8 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkDynamProp9(uint8 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkAzimuth9(int16 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkObjID9(uint8 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkObsRange9(int8 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkMeasStatus9(uint8 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrTrkRawAzimuth9(int8 sigData);
void Put_R_SRR_Object_Track9_RF_RSrrBurstID9(uint8 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkRange10(uint16 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkRRate10(int16 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkObjElevation10(uint8 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkDynamProp10(uint8 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkAzimuth10(int16 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkObjID10(uint8 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkObsRange10(int8 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkMeasStatus10(uint8 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrTrkRawAzimuth10(int8 sigData);
void Put_R_SRR_Object_Track10_RF_RSrrBurstID10(uint8 sigData);


void Put_Road_Information_Lane_Assignment_Host_Index_0m(uint16 sigData);
void Put_Road_Information_Highway_Exit_Left(uint8 sigData);
void Put_Road_Information_Highway_Exit_Right(uint8 sigData);
void Put_Road_Information_Road_Type(uint8 sigData);
void Put_Road_Information_Construction_Area(uint8 sigData);
void Put_Road_Information_NumOfLanes_0m(uint16 sigData);
void Put_Road_Information_Lane_Assignment_Host_Index_35m(uint8 sigData);
void Put_Road_Information_reserved_bits1(uint8 sigData);
void Put_Road_Information_SnowDecision(uint8 sigData);
void Put_Road_Information_NumOfLanes_35m(uint8 sigData);
void Put_Road_Information_Left_is_JPN_HWE(uint8 sigData);
void Put_Road_Information_Right_is_JPN_HWE(uint8 sigData);
void Put_Road_Information_SnowPrediction(int8 sigData);
void Put_Road_Information_TLM_decelerationArea(uint8 sigData);
void Put_Road_Information_Left_decelLaneBoundaryWidth(uint8 sigData);
void Put_Road_Information_Right_decelLaneBoundaryWidth(uint8 sigData);
void Put_Road_Information_reserved_bits2(uint8 sigData);
void Put_Road_Information_reserved_bits3(uint8 sigData);
void Put_Road_Information_protocol_version(uint8 sigData);
void Put_LKA_Right_Lane_C_reserved_bits_2_flag(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_1_flag(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_1_isValid(uint8 sigData);
void Put_LKA_Right_Lane_C_reserved_bits_3_flag(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_2_flag(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_2_isValid(uint8 sigData);
void Put_LKA_Right_Lane_C_reserved_bits_4_flag(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_3_flag(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_3_isValid(uint8 sigData);
void Put_LKA_Right_Lane_C_reserved_bits_5_flag(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_4_flag(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_4_isValid(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_1_Segment_End(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_2_Segment_End(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_3_Segment_End(uint8 sigData);
void Put_LKA_Right_Lane_C_SF_Confidence_4_Segment_End(uint8 sigData);
void Put_LKA_Left_Lane_C_reserved_bits_2_flag(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_1_flag(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_1_isValid(uint8 sigData);
void Put_LKA_Left_Lane_C_reserved_bits_3_flag(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_2_flag(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_2_isValid(uint8 sigData);
void Put_LKA_Left_Lane_C_reserved_bits_4_flag(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_3_flag(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_3_isValid(uint8 sigData);
void Put_LKA_Left_Lane_C_reserved_bits_5_flag(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_4_flag(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_4_isValid(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_1_Segment_End(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_2_Segment_End(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_3_Segment_End(uint8 sigData);
void Put_LKA_Left_Lane_C_SF_Confidence_4_Segment_End(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_1_35m_Type(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_1_35m_Confidence(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_2_35m_Type(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_2_35m_Confidence(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_3_35m_Type(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_3_35m_Confidence(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_4_35m_Type(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_4_35m_Confidence(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_5_35m_Type(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_5_35m_Confidence(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_6_35m_Type(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_6_35m_Confidence(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_7_35m_Type(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_7_35m_Confidence(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_8_35m_Type(uint8 sigData);
void Put_Lane_Assignment_35m_Lane_Assignment_8_35m_Confidence(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_1_0m_Type(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_1_0m_Confidence(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_2_0m_Type(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_2_0m_Confidence(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_3_0m_Type(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_3_0m_Confidence(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_4_0m_Type(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_4_0m_Confidence(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_5_0m_Type(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_5_0m_Confidence(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_6_0m_Type(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_6_0m_Confidence(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_7_0m_Type(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_7_0m_Confidence(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_8_0m_Type(uint8 sigData);
void Put_Lane_Assignment_0m_Lane_Assignment_8_0m_Confidence(uint8 sigData);
void Put_Next_Right_Lane_B_Lane_Model_C1(int16 sigData);
void Put_Next_Right_Lane_B_View_Range_Start(uint16 sigData);
void Put_Next_Right_Lane_B_View_Range_End(uint16 sigData);
void Put_Next_Right_Lane_B_reserved_bits5(uint16 sigData);
void Put_Next_Right_Lane_B_Lane_mark_color(uint8 sigData);
void Put_Next_Left_Lane_B_Lane_Model_C1(int16 sigData);
void Put_Next_Left_Lane_B_View_Range_Start(uint16 sigData);
void Put_Next_Left_Lane_B_View_Range_End(uint16 sigData);
void Put_Next_Left_Lane_B_reserved_bits5(uint16 sigData);
void Put_Next_Left_Lane_B_Lane_mark_color(uint8 sigData);
void Put_Next_Right_Lane_A_Lane_Model_C0(int32 sigData);
void Put_Next_Right_Lane_A_Quality(uint8 sigData);
void Put_Next_Right_Lane_A_Lane_Type(uint8 sigData);
void Put_Next_Right_Lane_A_Lane_Model_C2(int32 sigData);
void Put_Next_Right_Lane_A_Lane_Model_C3(int32 sigData);
void Put_Next_Right_Lane_A_Width_marking(uint16 sigData);
void Put_Next_Left_Lane_A_Lane_Model_C0(int32 sigData);
void Put_Next_Left_Lane_A_Quality(uint8 sigData);
void Put_Next_Left_Lane_A_Lane_Type(uint8 sigData);
void Put_Next_Left_Lane_A_Lane_Model_C2(int32 sigData);
void Put_Next_Left_Lane_A_Lane_Model_C3(int32 sigData);
void Put_Next_Left_Lane_A_Width_marking(uint16 sigData);
void Put_LKA_Right_Lane_B_Lane_Model_C1(int16 sigData);
void Put_LKA_Right_Lane_B_View_Range_Start(uint16 sigData);
void Put_LKA_Right_Lane_B_View_Range_End(uint16 sigData);
void Put_LKA_Right_Lane_B_reserved2_laneB(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_OCCLUDED_LM_EXTRAPOLATION(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_OVERRIDE(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_OTHER_SIDE(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_DIST_BASED_EXTRAPOLATION(uint8 sigData);
void Put_LKA_Right_Lane_B_Lane_mark_color(uint8 sigData);
void Put_LKA_Right_Lane_B_Lane_Crossing(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_SOURCE_VRTL_MERGE(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_SOURCE_STD(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_SOURCE_HWE_SPAIN(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_SOURCE_GUARDRAIL_SHADOW(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_SOURCE_DIVERGING_LANES(uint8 sigData);
void Put_LKA_Right_Lane_B_Reserved1_laneB(uint8 sigData);
void Put_LKA_Right_Lane_B_PRED_HEADWAY_ORIENTED(uint8 sigData);
void Put_LKA_Right_Lane_B_TLC(uint8 sigData);
void Put_LKA_Right_Lane_A_Lane_Model_C0(int32 sigData);
void Put_LKA_Right_Lane_A_Quality(uint8 sigData);
void Put_LKA_Right_Lane_A_Lane_Type(uint8 sigData);
void Put_LKA_Right_Lane_A_Lane_Model_C2(int32 sigData);
void Put_LKA_Right_Lane_A_Lane_Model_C3(int32 sigData);
void Put_LKA_Right_Lane_A_Width_marking(uint16 sigData);
void Put_LKA_Left_Lane_B_Lane_Model_C1(int16 sigData);
void Put_LKA_Left_Lane_B_View_Range_Start(uint16 sigData);
void Put_LKA_Left_Lane_B_View_Range_End(uint16 sigData);
void Put_LKA_Left_Lane_B_reserved2_laneB(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_OCCLUDED_LM_EXTRAPOLATION(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_OVERRIDE(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_OTHER_SIDE(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_DIST_BASED_EXTRAPOLATION(uint8 sigData);
void Put_LKA_Left_Lane_B_Lane_mark_color(uint8 sigData);
void Put_LKA_Left_Lane_B_Lane_Crossing(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_SOURCE_VRTL_MERGE(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_SOURCE_STD(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_SOURCE_HWE_SPAIN(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_SOURCE_GUARDRAIL_SHADOW(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_SOURCE_DIVERGING_LANES(uint8 sigData);
void Put_LKA_Left_Lane_B_Reserved1_laneB(uint8 sigData);
void Put_LKA_Left_Lane_B_PRED_HEADWAY_ORIENTED(uint8 sigData);
void Put_LKA_Left_Lane_B_TLC(uint8 sigData);
void Put_LKA_Left_Lane_A_Lane_Model_C0(int32 sigData);
void Put_LKA_Left_Lane_A_Quality(uint8 sigData);
void Put_LKA_Left_Lane_A_Lane_Type(uint8 sigData);
void Put_LKA_Left_Lane_A_Lane_Model_C2(int32 sigData);
void Put_LKA_Left_Lane_A_Lane_Model_C3(int32 sigData);
void Put_LKA_Left_Lane_A_Width_marking(uint16 sigData);
void Put_ID_TFL0_Internal_ID0(uint32 sigData);
void Put_ID_TFL0_Internal_ID1(uint32 sigData);
void Put_ID_TFL1_Internal_ID0(uint32 sigData);
void Put_ID_TFL1_Internal_ID1(uint32 sigData);
void Put_ID_TFL2_Internal_ID0(uint32 sigData);
void Put_ID_TFL2_Internal_ID1(uint32 sigData);
void Put_ID_TFL3_Internal_ID0(uint32 sigData);
void Put_ID_TFL3_Internal_ID1(uint32 sigData);
void Put_ID_TSR0_Internal_ID0(uint32 sigData);
void Put_ID_TSR0_Internal_ID1(uint32 sigData);
void Put_ID_TSR1_Internal_ID0(uint32 sigData);
void Put_ID_TSR1_Internal_ID1(uint32 sigData);
void Put_ID_TSR2_Internal_ID0(uint32 sigData);
void Put_ID_TSR2_Internal_ID1(uint32 sigData);
void Put_ID_TSR3_Internal_ID0(uint32 sigData);
void Put_ID_TSR3_Internal_ID1(uint32 sigData);
void Put_TFL_Header_StopSign_Warning(uint8 sigData);
void Put_TFL_Header_TFL_Warning(uint8 sigData);
void Put_TFL_Header_Main_Object_ID(uint8 sigData);
void Put_TFL_Header_Number_Of_TFL_Objects(uint8 sigData);
void Put_TFL_Header_TFL_TTC(uint8 sigData);
void Put_TFL_Header_StopSign_TTC(uint8 sigData);
void Put_TFL_Header_Stop_Line_Dist(uint16 sigData);
void Put_TFL_Header_JNC_Distance(uint16 sigData);
void Put_TFL_Header_Junction_Status(uint8 sigData);
void Put_TFL_Header_TFL_Warning_Supression_By_Driver(uint8 sigData);
void Put_TFL_Header_TFL_Warning_Supression_By_Vision(uint8 sigData);
void Put_TFL_Header_Stop_Line_Valid(uint8 sigData);
void Put_TFL_Header_Reserved_1_flag(uint8 sigData);
void Put_TFL_Header_SS_Warning_Supression_By_Vision(uint8 sigData);
void Put_TFL_Message0_TFL_PosY(uint16 sigData);
void Put_TFL_Message0_Object_ID(uint8 sigData);
void Put_TFL_Message0_TFL_PosX(uint16 sigData);
void Put_TFL_Message0_TFL_PosZ(uint32 sigData);
void Put_TFL_Message0_TFL_Width(uint16 sigData);
void Put_TFL_Message0_TFL_Color(uint8 sigData);
void Put_TFL_Message0_TFL_Supp1_Arrow(uint16 sigData);
void Put_TFL_Message0_TFL_Type(uint8 sigData);
void Put_TFL_Message0_TFL_Supp3_Arrow(uint16 sigData);
void Put_TFL_Message0_TFL_Supp2_Arrow(uint8 sigData);
void Put_TFL_Message0_TFL_assignment(uint8 sigData);
void Put_TFL_Message1_TFL_PosY(uint16 sigData);
void Put_TFL_Message1_Object_ID(uint8 sigData);
void Put_TFL_Message1_TFL_PosX(uint16 sigData);
void Put_TFL_Message1_TFL_PosZ(uint32 sigData);
void Put_TFL_Message1_TFL_Width(uint16 sigData);
void Put_TFL_Message1_TFL_Color(uint8 sigData);
void Put_TFL_Message1_TFL_Supp1_Arrow(uint16 sigData);
void Put_TFL_Message1_TFL_Type(uint8 sigData);
void Put_TFL_Message1_TFL_Supp3_Arrow(uint16 sigData);
void Put_TFL_Message1_TFL_Supp2_Arrow(uint8 sigData);
void Put_TFL_Message1_TFL_assignment(uint8 sigData);
void Put_TFL_Message2_TFL_PosY(uint16 sigData);
void Put_TFL_Message2_Object_ID(uint8 sigData);
void Put_TFL_Message2_TFL_PosX(uint16 sigData);
void Put_TFL_Message2_TFL_PosZ(uint32 sigData);
void Put_TFL_Message2_TFL_Width(uint16 sigData);
void Put_TFL_Message2_TFL_Color(uint8 sigData);
void Put_TFL_Message2_TFL_Supp1_Arrow(uint16 sigData);
void Put_TFL_Message2_TFL_Type(uint8 sigData);
void Put_TFL_Message2_TFL_Supp3_Arrow(uint16 sigData);
void Put_TFL_Message2_TFL_Supp2_Arrow(uint8 sigData);
void Put_TFL_Message2_TFL_assignment(uint8 sigData);
void Put_TFL_Message3_TFL_PosY(uint16 sigData);
void Put_TFL_Message3_Object_ID(uint8 sigData);
void Put_TFL_Message3_TFL_PosX(uint16 sigData);
void Put_TFL_Message3_TFL_PosZ(uint32 sigData);
void Put_TFL_Message3_TFL_Width(uint16 sigData);
void Put_TFL_Message3_TFL_Color(uint8 sigData);
void Put_TFL_Message3_TFL_Supp1_Arrow(uint16 sigData);
void Put_TFL_Message3_TFL_Type(uint8 sigData);
void Put_TFL_Message3_TFL_Supp3_Arrow(uint16 sigData);
void Put_TFL_Message3_TFL_Supp2_Arrow(uint8 sigData);
void Put_TFL_Message3_TFL_assignment(uint8 sigData);
void Put_TFL_Message4_TFL_PosY(uint16 sigData);
void Put_TFL_Message4_Object_ID(uint8 sigData);
void Put_TFL_Message4_TFL_PosX(uint16 sigData);
void Put_TFL_Message4_TFL_PosZ(uint32 sigData);
void Put_TFL_Message4_TFL_Width(uint16 sigData);
void Put_TFL_Message4_TFL_Color(uint8 sigData);
void Put_TFL_Message4_TFL_Supp1_Arrow(uint16 sigData);
void Put_TFL_Message4_TFL_Type(uint8 sigData);
void Put_TFL_Message4_TFL_Supp3_Arrow(uint16 sigData);
void Put_TFL_Message4_TFL_Supp2_Arrow(uint8 sigData);
void Put_TFL_Message4_TFL_assignment(uint8 sigData);
void Put_TFL_Message5_TFL_PosY(uint16 sigData);
void Put_TFL_Message5_Object_ID(uint8 sigData);
void Put_TFL_Message5_TFL_PosX(uint16 sigData);
void Put_TFL_Message5_TFL_PosZ(uint32 sigData);
void Put_TFL_Message5_TFL_Width(uint16 sigData);
void Put_TFL_Message5_TFL_Color(uint8 sigData);
void Put_TFL_Message5_TFL_Supp1_Arrow(uint16 sigData);
void Put_TFL_Message5_TFL_Type(uint8 sigData);
void Put_TFL_Message5_TFL_Supp3_Arrow(uint16 sigData);
void Put_TFL_Message5_TFL_Supp2_Arrow(uint8 sigData);
void Put_TFL_Message5_TFL_assignment(uint8 sigData);
void Put_TFL_Message6_TFL_PosY(uint16 sigData);
void Put_TFL_Message6_Object_ID(uint8 sigData);
void Put_TFL_Message6_TFL_PosX(uint16 sigData);
void Put_TFL_Message6_TFL_PosZ(uint32 sigData);
void Put_TFL_Message6_TFL_Width(uint16 sigData);
void Put_TFL_Message6_TFL_Color(uint8 sigData);
void Put_TFL_Message6_TFL_Supp1_Arrow(uint16 sigData);
void Put_TFL_Message6_TFL_Type(uint8 sigData);
void Put_TFL_Message6_TFL_Supp3_Arrow(uint16 sigData);
void Put_TFL_Message6_TFL_Supp2_Arrow(uint8 sigData);
void Put_TFL_Message6_TFL_assignment(uint8 sigData);
void Put_TFL_Message7_TFL_PosY(uint16 sigData);
void Put_TFL_Message7_Object_ID(uint8 sigData);
void Put_TFL_Message7_TFL_PosX(uint16 sigData);
void Put_TFL_Message7_TFL_PosZ(uint32 sigData);
void Put_TFL_Message7_TFL_Width(uint16 sigData);
void Put_TFL_Message7_TFL_Color(uint8 sigData);
void Put_TFL_Message7_TFL_Supp1_Arrow(uint16 sigData);
void Put_TFL_Message7_TFL_Type(uint8 sigData);
void Put_TFL_Message7_TFL_Supp3_Arrow(uint16 sigData);
void Put_TFL_Message7_TFL_Supp2_Arrow(uint8 sigData);
void Put_TFL_Message7_TFL_assignment(uint8 sigData);
void Put_TSR0_Vision_only_Sign_Type(uint8 sigData);
void Put_TSR0_Vision_only_Supp_Sign_Type(uint8 sigData);
void Put_TSR0_Sign_Position_X(uint8 sigData);
void Put_TSR0_Sign_Position_Y(int8 sigData);
void Put_TSR0_Sign_Position_Z(int8 sigData);
void Put_TSR0_Approved_Flag(uint8 sigData);
void Put_TSR0_Filter_type(uint8 sigData);
void Put_TSR0_Sign_Height(uint8 sigData);
void Put_TSR0_No_Entry_Vision_Status(uint8 sigData);
void Put_TSR0_Sign_Width(uint8 sigData);
void Put_TSR1_Vision_only_Sign_Type(uint8 sigData);
void Put_TSR1_Vision_only_Supp_Sign_Type(uint8 sigData);
void Put_TSR1_Sign_Position_X(uint8 sigData);
void Put_TSR1_Sign_Position_Y(int8 sigData);
void Put_TSR1_Sign_Position_Z(int8 sigData);
void Put_TSR1_Approved_Flag(uint8 sigData);
void Put_TSR1_Filter_type(uint8 sigData);
void Put_TSR1_Sign_Height(uint8 sigData);
void Put_TSR1_No_Entry_Vision_Status(uint8 sigData);
void Put_TSR1_Sign_Width(uint8 sigData);
void Put_TSR2_Vision_only_Sign_Type(uint8 sigData);
void Put_TSR2_Vision_only_Supp_Sign_Type(uint8 sigData);
void Put_TSR2_Sign_Position_X(uint8 sigData);
void Put_TSR2_Sign_Position_Y(int8 sigData);
void Put_TSR2_Sign_Position_Z(int8 sigData);
void Put_TSR2_Approved_Flag(uint8 sigData);
void Put_TSR2_Filter_type(uint8 sigData);
void Put_TSR2_Sign_Height(uint8 sigData);
void Put_TSR2_No_Entry_Vision_Status(uint8 sigData);
void Put_TSR2_Sign_Width(uint8 sigData);
void Put_TSR3_Vision_only_Sign_Type(uint8 sigData);
void Put_TSR3_Vision_only_Supp_Sign_Type(uint8 sigData);
void Put_TSR3_Sign_Position_X(uint8 sigData);
void Put_TSR3_Sign_Position_Y(int8 sigData);
void Put_TSR3_Sign_Position_Z(int8 sigData);
void Put_TSR3_Approved_Flag(uint8 sigData);
void Put_TSR3_Filter_type(uint8 sigData);
void Put_TSR3_Sign_Height(uint8 sigData);
void Put_TSR3_No_Entry_Vision_Status(uint8 sigData);
void Put_TSR3_Sign_Width(uint8 sigData);
void Put_TSR4_Vision_only_Sign_Type(uint8 sigData);
void Put_TSR4_Vision_only_Supp_Sign_Type(uint8 sigData);
void Put_TSR4_Sign_Position_X(uint8 sigData);
void Put_TSR4_Sign_Position_Y(int8 sigData);
void Put_TSR4_Sign_Position_Z(int8 sigData);
void Put_TSR4_Approved_Flag(uint8 sigData);
void Put_TSR4_Filter_type(uint8 sigData);
void Put_TSR4_Sign_Height(uint8 sigData);
void Put_TSR4_No_Entry_Vision_Status(uint8 sigData);
void Put_TSR4_Sign_Width(uint8 sigData);
void Put_TSR5_Vision_only_Sign_Type(uint8 sigData);
void Put_TSR5_Vision_only_Supp_Sign_Type(uint8 sigData);
void Put_TSR5_Sign_Position_X(uint8 sigData);
void Put_TSR5_Sign_Position_Y(int8 sigData);
void Put_TSR5_Sign_Position_Z(int8 sigData);
void Put_TSR5_Approved_Flag(uint8 sigData);
void Put_TSR5_Filter_type(uint8 sigData);
void Put_TSR5_Sign_Height(uint8 sigData);
void Put_TSR5_No_Entry_Vision_Status(uint8 sigData);
void Put_TSR5_Sign_Width(uint8 sigData);
void Put_TSR6_Vision_only_Sign_Type(uint8 sigData);
void Put_TSR6_Vision_only_Supp_Sign_Type(uint8 sigData);
void Put_TSR6_Sign_Position_X(uint8 sigData);
void Put_TSR6_Sign_Position_Y(int8 sigData);
void Put_TSR6_Sign_Position_Z(int8 sigData);
void Put_TSR6_Approved_Flag(uint8 sigData);
void Put_TSR6_Filter_type(uint8 sigData);
void Put_TSR6_Sign_Height(uint8 sigData);
void Put_TSR6_No_Entry_Vision_Status(uint8 sigData);
void Put_TSR6_Sign_Width(uint8 sigData);
void Put_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D1(uint8 sigData);
void Put_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D1(uint8 sigData);
void Put_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D2(uint8 sigData);
void Put_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D2(uint8 sigData);
void Put_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D3(uint8 sigData);
void Put_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D3(uint8 sigData);
void Put_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D4(uint8 sigData);
void Put_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D4(uint8 sigData);
void Put_ObstacleStatusB_timeStamp(uint32 sigData);
void Put_ObstacleStatusB_frameIndex(uint32 sigData);
void Put_ObstacleStatusA_NumObstacles(uint8 sigData);
void Put_ObstacleStatusA_Timestamp(uint8 sigData);
void Put_ObstacleStatusA_ApplicationVersion_rc(uint16 sigData);
void Put_ObstacleStatusA_ApplicationVersion_minor(uint8 sigData);
void Put_ObstacleStatusA_ProtocolVersion(uint16 sigData);
void Put_ObstacleStatusA_LeftCloseRangeCutIn(uint8 sigData);
void Put_ObstacleStatusA_RightCloseRangeCutIn(uint8 sigData);
void Put_ObstacleStatusA_Close_Car(uint8 sigData);
void Put_ObstacleStatusA_Go(uint8 sigData);
void Put_ObstacleStatusA_Failsafe(uint16 sigData);
void Put_ObstacleStatusA_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataA1_ObstacleID(uint8 sigData);
void Put_ObstacleDataA1_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA1_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA1_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA1_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA1_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA1_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA1_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA1_ObstacleType(uint8 sigData);
void Put_ObstacleDataA1_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA1_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA1_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA1_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB1_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB1_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB1_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB1_RadarPosX(uint16 sigData);
void Put_ObstacleDataB1_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB1_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB1_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB1_RadarVelX(int16 sigData);
void Put_ObstacleDataB1_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB1_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB1_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB1_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC1_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC1_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC1_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC1_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC1_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC1_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC1_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC1_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA2_ObstacleID(uint8 sigData);
void Put_ObstacleDataA2_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA2_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA2_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA2_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA2_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA2_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA2_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA2_ObstacleType(uint8 sigData);
void Put_ObstacleDataA2_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA2_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA2_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA2_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB2_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB2_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB2_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB2_RadarPosX(uint16 sigData);
void Put_ObstacleDataB2_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB2_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB2_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB2_RadarVelX(int16 sigData);
void Put_ObstacleDataB2_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB2_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB2_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB2_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC2_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC2_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC2_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC2_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC2_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC2_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC2_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC2_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA3_ObstacleID(uint8 sigData);
void Put_ObstacleDataA3_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA3_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA3_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA3_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA3_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA3_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA3_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA3_ObstacleType(uint8 sigData);
void Put_ObstacleDataA3_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA3_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA3_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA3_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB3_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB3_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB3_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB3_RadarPosX(uint16 sigData);
void Put_ObstacleDataB3_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB3_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB3_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB3_RadarVelX(int16 sigData);
void Put_ObstacleDataB3_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB3_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB3_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB3_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC3_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC3_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC3_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC3_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC3_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC3_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC3_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC3_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA4_ObstacleID(uint8 sigData);
void Put_ObstacleDataA4_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA4_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA4_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA4_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA4_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA4_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA4_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA4_ObstacleType(uint8 sigData);
void Put_ObstacleDataA4_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA4_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA4_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA4_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB4_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB4_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB4_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB4_RadarPosX(uint16 sigData);
void Put_ObstacleDataB4_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB4_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB4_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB4_RadarVelX(int16 sigData);
void Put_ObstacleDataB4_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB4_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB4_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB4_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC4_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC4_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC4_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC4_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC4_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC4_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC4_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC4_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA5_ObstacleID(uint8 sigData);
void Put_ObstacleDataA5_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA5_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA5_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA5_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA5_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA5_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA5_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA5_ObstacleType(uint8 sigData);
void Put_ObstacleDataA5_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA5_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA5_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA5_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB5_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB5_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB5_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB5_RadarPosX(uint16 sigData);
void Put_ObstacleDataB5_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB5_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB5_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB5_RadarVelX(int16 sigData);
void Put_ObstacleDataB5_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB5_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB5_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB5_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC5_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC5_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC5_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC5_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC5_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC5_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC5_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC5_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA6_ObstacleID(uint8 sigData);
void Put_ObstacleDataA6_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA6_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA6_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA6_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA6_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA6_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA6_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA6_ObstacleType(uint8 sigData);
void Put_ObstacleDataA6_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA6_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA6_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA6_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB6_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB6_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB6_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB6_RadarPosX(uint16 sigData);
void Put_ObstacleDataB6_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB6_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB6_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB6_RadarVelX(int16 sigData);
void Put_ObstacleDataB6_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB6_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB6_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB6_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC6_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC6_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC6_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC6_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC6_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC6_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC6_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC6_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA7_ObstacleID(uint8 sigData);
void Put_ObstacleDataA7_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA7_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA7_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA7_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA7_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA7_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA7_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA7_ObstacleType(uint8 sigData);
void Put_ObstacleDataA7_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA7_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA7_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA7_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB7_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB7_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB7_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB7_RadarPosX(uint16 sigData);
void Put_ObstacleDataB7_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB7_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB7_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB7_RadarVelX(int16 sigData);
void Put_ObstacleDataB7_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB7_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB7_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB7_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC7_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC7_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC7_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC7_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC7_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC7_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC7_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC7_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA8_ObstacleID(uint8 sigData);
void Put_ObstacleDataA8_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA8_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA8_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA8_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA8_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA8_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA8_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA8_ObstacleType(uint8 sigData);
void Put_ObstacleDataA8_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA8_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA8_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA8_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB8_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB8_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB8_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB8_RadarPosX(uint16 sigData);
void Put_ObstacleDataB8_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB8_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB8_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB8_RadarVelX(int16 sigData);
void Put_ObstacleDataB8_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB8_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB8_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB8_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC8_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC8_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC8_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC8_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC8_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC8_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC8_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC8_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA9_ObstacleID(uint8 sigData);
void Put_ObstacleDataA9_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA9_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA9_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA9_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA9_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA9_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA9_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA9_ObstacleType(uint8 sigData);
void Put_ObstacleDataA9_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA9_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA9_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA9_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB9_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB9_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB9_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB9_RadarPosX(uint16 sigData);
void Put_ObstacleDataB9_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB9_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB9_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB9_RadarVelX(int16 sigData);
void Put_ObstacleDataB9_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB9_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB9_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB9_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC9_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC9_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC9_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC9_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC9_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC9_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC9_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC9_ObstacleAngle(int16 sigData);
void Put_ObstacleDataA10_ObstacleID(uint8 sigData);
void Put_ObstacleDataA10_ObstaclePosX(uint16 sigData);
void Put_ObstacleDataA10_reserved_4_flag(uint8 sigData);
void Put_ObstacleDataA10_ObstaclePosY(int16 sigData);
void Put_ObstacleDataA10_Move_in_and_Out(uint8 sigData);
void Put_ObstacleDataA10_BlinkerInfo(uint8 sigData);
void Put_ObstacleDataA10_ObstacleVelX(int16 sigData);
void Put_ObstacleDataA10_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataA10_ObstacleType(uint8 sigData);
void Put_ObstacleDataA10_ObstacleValid(uint8 sigData);
void Put_ObstacleDataA10_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataA10_ObstacleBrakeLights(uint8 sigData);
void Put_ObstacleDataA10_ObstacleStatus(uint8 sigData);
void Put_ObstacleDataB10_ObstacleLength(uint8 sigData);
void Put_ObstacleDataB10_ObstacleWidth(uint8 sigData);
void Put_ObstacleDataB10_ObstacleAge(uint8 sigData);
void Put_ObstacleDataB10_RadarPosX(uint16 sigData);
void Put_ObstacleDataB10_reserved_1_flag(uint8 sigData);
void Put_ObstacleDataB10_CIPVFlag(uint8 sigData);
void Put_ObstacleDataB10_ObstacleLane(uint8 sigData);
void Put_ObstacleDataB10_RadarVelX(int16 sigData);
void Put_ObstacleDataB10_reserved_1_b(uint8 sigData);
void Put_ObstacleDataB10_RadarMatchConfidence(uint8 sigData);
void Put_ObstacleDataB10_reserved_1_c(uint8 sigData);
void Put_ObstacleDataB10_MatchedRadarID(uint8 sigData);
void Put_ObstacleDataC10_ObstacleAngleRate(int16 sigData);
void Put_ObstacleDataC10_ObstacleVelY(int8 sigData);
void Put_ObstacleDataC10_reserved_5_flag(uint8 sigData);
void Put_ObstacleDataC10_Object_Accel_X(int16 sigData);
void Put_ObstacleDataC10_reserved_3_flag(uint8 sigData);
void Put_ObstacleDataC10_ObstacleReplaced(uint8 sigData);
void Put_ObstacleDataC10_reserved_2_flag(uint8 sigData);
void Put_ObstacleDataC10_ObstacleAngle(int16 sigData);
void Put_ObstacleStatusC_grabIndex(uint16 sigData);
void Put_ObstacleStatusC_pedalConfGenObjDistFromBumper(uint8 sigData);
void Put_ObstacleStatusC_pedalConfusionGeneralObjTTC(uint16 sigData);
void Put_ObstacleStatusC_reserved_6_flag(uint32 sigData);
