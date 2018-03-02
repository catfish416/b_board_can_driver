#ifndef _INTEL_COMM_H_
#define _INTEL_COMM_H_
#include "rtwtypes.h"
/**
*@brief  trigger data fusing device id
*/
enum trigger_id
{
        ESR_ID,
	SRR_LF_ID,
	SRR_RR_ID,
	CAMERA_ID,
	SRR_RF_ID,
	SRR_LR_ID,
    TRIG_NUM,
};

/**
*@brief :data fusing trigger time stamp and flag
*/
 typedef struct Fusing_trigger
{
   uint32_t time_stamp;
   bool flag;
}__attribute__((packed)) FUSING_TRIG;

/**
*@brief :data fusing output
*/

typedef struct Fusing_to_MapandPath
{
  real_T FusingObj[3302];   //127*26
  int16  YawRate; 
  int16 StrWhAng;
  uint8 TurnLight; 
   uint16_t TagetNum;   
}__attribute__((packed)) FUSING_OUTPUT_TRIG;

typedef struct Motion_to_Path
{
    uint8  EPS_Status;
    uint8 ResSwAct; 
    uint8 DrvBrkEng;
}__attribute__((packed)) MOTION_OUTPUT_TRIG;
/**
*@brief :Side occoy output
*/

typedef struct SideOcc_to_Path
{
   real_T SideObj[4];   //4 //4*1
   real_T area_array[762];  
  }__attribute__((packed)) SIDEOCC;


typedef struct Map_to_Path
{
   real_T Lane_NumInfo[3];    
   real_T outLine_ShapeInfo[100];  
   real_T VehicleState[8];   
   real_T Navi_InfoTurn[28];      
   real_T End_Point[4];
 }__attribute__((packed)) MAPOUTPUT_TRIG;



 
typedef struct EPM_TO_CONTROL
{
    /*1 block*/
         uint16_T ObsMPosX;
         int16_T ObsMVelX;
	 uint8_T ObsMFlg;
         uint8_T ObsCutInFlg;
         uint8_T RightCloseRangeCutIn;
	 uint8_T LeftCloseRangeCutIn;
	 uint8_T ObsMID;
	  uint16_T ObsCutInPosX;
	 uint8_T ObsCutInID;
         uint8_T  ObsCutInCutInTime;
	 uint8_T ObsCutInStatus;
	 int16_T ObsCutInVelX;
  /*2 block*/
         int16_T Left_Lane_C3_PosTRght;    
         int16_T Left_Lane_C2_PosTRght;
         int16_T Left_Lane_C1_PosTLeft; 
         int16_T Left_Lane_C0_PosRght;  
         int16_T Right_Lane_C3_PosTRght; 
         int16_T Right_Lane_C2_PosTRght;
         int16_T Right_Lane_C1_PosTLeft; 
         int16_T Right_Lane_C0_PosRght ;    
 /*3 block*/
        uint8_T Left_Lane_Quality ; 
        uint8_T Right_Lane_Quality;
        uint8_T BusOff;
        uint8_T ObsMStatus;
        uint16_T Left_Lane_End; 
       uint16_T Right_Lane_End;   
      int16_T Next_Left_Lane_C0_PosRght;
      int16_T Next_Left_Lane_C2_PosTRght ;
      int16_T Next_Left_Lane_C3_PosTRght  ; 
      int16_T Next_Right_Lane_C0_PosRght;
 /*4 block*/
    int16_T Next_Right_Lane_C2_PosTRght;  
    int16_T Next_Right_Lane_C3_PosTRght;
    int16_T Next_Left_Lane_C1_PosTLeft ; 
    int16_T Next_Right_Lane_C1_PosTLeft;
    int16_T Left_Lane_TLC;    
    int16_T Right_Lane_TLC  ; 
    int16_T ObsCutInAngle;  
   int16_T ObsCutInPosY;
   int16_T  ObsCutInAccelX;

   /*5block*/                     
     uint8_T ObsCutInWidth;             
     int16_T ObsMAccelX;         
     uint8_T ObsMPosY;       
     uint8_T ObsMAngle;          
     uint8_T ObsMWidth;                         
     uint8_T ObsCutInTTC;
     uint8_T ObsMITTC;                 
     uint8_T ObsMLane; 
     uint8_T ObsCutInCutIn;
     uint8_T ObsMCutIn;
     uint8_T ObsCutInLane;
     uint8_T Next_Left_Lane_Quality;   
     uint8_T Next_Right_Lane_Quality ;
  }__attribute__((packed)) EPM_TO_CONTROL_TRIG;

typedef struct PathPlan_bit
{

   /*0 block*/  
     uint16_T  PreviewTime:14;
    uint16_T   PathPlanControl:1;
    uint16_T  PathPlanAvaliable:1;
   
}PATH_BIT;
typedef struct Map_to_motion
{
/*6 block*/
    uint8_T End_Flag; 
    int32_T PreviewDistance;  
    int16_T TrackerLateralError;
    int32_T VehicleOffset_Now;   
    int8_T Final_a;   
   int32_T PreviewLateralDistance;               
  }__attribute__((packed)) MAPMOTION_TRIG;	
typedef struct Path_to_Control
{
  PATH_BIT  Pre_bit;
  uint16_T SpeedLimit;
  uint16_T TargetLongitudinalSpeed;
  int16_T LongitudinalError;
  int16_T PreviewDistance;
  int16_T LateralDistance;
  int16_T LateralError;
  int16_T TargetOrientationAngle;
}__attribute__((packed))PATH_TO_CONTROL_TRIG;


/**
*@brief :pbcan General_Status_2
*/
typedef struct Trans_General_Status2
{
    uint8_T temp_buffer[13];
}__attribute__((packed))GENERAL_STATUS;
/**
*@brief :declared some varible of ESR and Camera
*/
typedef struct Vehicle_Speed_and_Distance
{
    uint8_T temp_buffer[13];
}__attribute__((packed))SPEED_AND_DISTANCE;

extern FUSING_TRIG trggier[TRIG_NUM];

extern SIDEOCC SideOcc_output;
extern  MAPOUTPUT_TRIG  Map_output;       /*map to pathplan*/
extern EPM_TO_CONTROL_TRIG  epm_data;
extern double Ego_lane;
extern void Set_FusingOutput(FUSING_OUTPUT_TRIG Fusing);
extern void Get_FusingOutput(FUSING_OUTPUT_TRIG* Fusing);
extern void Set_SideOccOutput(SIDEOCC Data);
extern void Get_SideOccOutput(SIDEOCC *Data);
extern void Set_MapOutput(MAPOUTPUT_TRIG value);
extern void Get_MapOutput(MAPOUTPUT_TRIG *value);
extern void Set_Egolane_Output(double egolane);
extern void Get_Egolane_Output(double  *egolane);
extern void Set_PathPlanOutput(PATH_TO_CONTROL_TRIG *path_output);
extern void Get_PathPlanOutput(PATH_TO_CONTROL_TRIG *path_output);
extern void Set_EPMOutput(EPM_TO_CONTROL_TRIG *EPM_Data);
extern void Get_EPMOutput(EPM_TO_CONTROL_TRIG *EPM_Data);
extern void Set_StatusOutput(GENERAL_STATUS  STATUS_Data);
extern void Get_StatusOutput(GENERAL_STATUS * STATUS_Data);
extern void Set_SpeedOutput(SPEED_AND_DISTANCE  Speed_Data);
extern void Get_SpeedOutput(SPEED_AND_DISTANCE * Speed_Data);
extern void Set_MapMotion(MAPMOTION_TRIG value);
extern void Get_MapMotion(MAPMOTION_TRIG *value);
extern void Get_MotionOutput(MOTION_OUTPUT_TRIG *motion_output);
extern void Set_MotionOutput(MOTION_OUTPUT_TRIG motion_output);
#endif



