#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include "resue.h"
#include "rtwtypes.h"
#include "M2S_CAN1.h"
#include "M2S_CAN2.h"
#include "M2S_CAN3.h"
#include "M2S_CAN4.h"
#include <time.h>
#include<string.h>

extern uint_T Get_ESR_RxTime(void);
	
extern uint8_T Get_ESR_Trigger(void);

extern void ESR_Global_initialize(void);

extern void Set_ESR_Obj_CoAl(uint16_T index,real_T value);	

extern void Set_Global_Trigger_ESR(uint8_T flag);


extern void Set_Global_ESR_RxTime(real_T stamp);


/*Camera*/
extern void Camera_Global_initialize(void);

extern void Set_Camera_Obj(uint16_T index,real_T value);	

 extern void Set_Global_Trigger_Camera(uint8_T flag);
 extern void Set_Global_Camera_RxTime(real_T stamp);
extern uint_T Get_Camera_RxTime(void);

 extern uint8_T Get_Camera_Trigger(void);

extern uint_T Get_LFSRR_RxTime(void);
extern  uint8_T Get_LFSRR_Trigger(void);
extern void LFSRR_Side_initialize(void);
extern void Set_LF_SRR_Data(uint16_T index,real_T value)	;
extern void Set_Side_Trigger_LFSRR(uint8_T flag);
extern void Set_Side_LFSRR_RxTime(real_T stamp);
extern uint_T Get_LRSRR_RxTime(void);
extern uint8_T Get_LRSRR_Trigger(void);
extern void LRSRR_Side_initialize(void);
extern void Set_LR_SRR_Data(uint16_T index,real_T value);	
extern void Set_Side_Trigger_LRSRR(uint8_T flag);
extern void Set_Side_LRSRR_RxTime(real_T stamp);
extern uint_T Get_RFSRR_RxTime(void);
extern uint8_T Get_RFSRR_Trigger(void);
extern void RFSRR_Side_initialize(void);
extern void Set_RF_SRR_Data(uint16_T index,real_T value);	
extern void Set_Side_Trigger_RFSRR(uint8_T flag);
extern void Set_Side_RFSRR_RxTime(real_T stamp);
extern uint_T Get_RRSRR_RxTime(void);
extern uint8_T Get_RRSRR_Trigger(void);
extern void RRSRR_Side_initialize(void);
extern void Set_RR_SRR_Data(uint16_T index,real_T value);	
extern void Set_Side_Trigger_RRSRR(uint8_T flag);
extern void Set_Side_RRSRR_RxTime(real_T stamp);
extern real_T Get_LFSRR_RxTime_Local(void);
                                            
extern real_T Get_RFSRR_RxTime_Local(void);
                                            
 extern real_T Get_LRSRR_RxTime_Local(void);
                                            
 extern real_T Get_LFSRR_ObjData_Input( uint16_T index );
                                               
 extern real_T Get_RFSRR_ObjData_Input( uint16_T index );
                                                 
 extern real_T Get_LRSRR_ObjData_Input( uint16_T index);
                                                  
 extern real_T Get_RRSRR_ObjData_Input( uint16_T index );
                                                  
 extern real_T Get_RRSRR_RxTime_Local(void);
                                             
 extern uint8_T Get_Side_Fus_LFSRR_Trigger(void);
                                             
  extern uint8_T Get_Side_Fus_RFSRR_Trigger(void);
                                            
  extern uint8_T Get_Side_Fus_LRSRR_Trigger(void);
                                             
  extern uint8_T Get_Side_Fus_RRSRR_Trigger(void);
  extern void  Set_Global_Trigger_SideFus(uint8_T flag);
  extern void Gobal_Side_initialize(void);
  extern void Set_SideFus_Data( uint16_T index , real_T value);
  extern  void  Set_SideFus_Time(real_T stamp);
extern void Glbal_Data_initialize (void);
extern void Set_SRR_ObjData_Input(uint16_T index,real_T value)	;
extern real_T Get_SRR_ObjData_Input(uint16_T index);
extern real_T Get_ESR_ObjData_Input(uint16_T index);
extern real_T Get_Camera_ObjData_Input(uint16_T index);
 extern void Set_SRR_Rx_Time_Local(real_T stamp);
extern real_T Get_SRR_Rx_Time_Local(void);
extern real_T Get_ESR_RxTime_Local(void);
 extern real_T Get_Camera_RxTime_Local(void);
extern uint8_T Get_Global_Fus_Camera_Trigger(void);
extern  uint8_T Get_Global_Fus_ESR_Trigger(void);
extern void Set_Global_Fus_SRR_Trigger(uint8_T flag);
extern  uint8_T Get_Global_Fus_SRR_Trigger(void);
extern  void Set_GlobalFusOut(uint16_T index,real_T value);
 extern  void Set_Total_FusTargetNum(uint16_T num);
extern  real_T  Get_Global_FusObj( uint16_T index );
                                        
extern uint16_T Get_Global_FusObj_Num(void);
extern void  Set_Side_Occ_Flg(uint16_T index,real_T value);
 extern  void  Set_Side_Index(uint16_T index,real_T value);
          
extern void Clear_Global_Fus_Con(void);

extern void Set_ObsCutInStatus(uint8_T  Value);

extern void Set_ObsCutInVelX(int16_T  Value);

extern void Set_ObsCutInPosY(int16_T  Value);


extern void Set_ObsCutInPosX(uint16_T  Value);
extern void Set_ObsCutInID(uint8_T  Value);
extern void Set_ObsCutInLane(uint8_T  Value);
extern void Set_ObsCutInCutIn(uint8_T  Value);
extern void Set_ObsCutInAngle(int16_T  Value);
extern void Set_ObsCutInAccelX(int16_T  Value);
extern void Set_ObsCutInFlg(uint8_T  Value);
extern void Set_ObsCutInTTC(uint8_T  Value);
extern void Set_ObsCutInWidth(uint8_T  Value);
extern void Set_ObsCutInCutInTime(uint8_T  Value);

extern void Set_BusOff(uint8_T  Value);


extern void Set_ObsMVelX(int16_T  Value);


extern void Set_ObsMPosX(uint16_T  Value);

extern void Set_ObsMID(uint8_T  Value);


extern void Set_ObsMCutIn(uint8_T  Value);

extern void Set_ObsMPosY(int16_T  Value);


extern void Set_ObsMFlg(uint8_T  Value);

extern void Set_ObsMLane(uint8_T  Value);

extern void Set_ObsMAngle(int16_T  Value);

extern void Set_ObsMITTC(uint8_T  Value);

extern void Set_ObsMWidth(uint8_T  Value);
extern void Set_LeftCloseRangeCutIn(uint8_T  Value);
extern void Set_RightCloseRangeCutIn(uint8_T  Value);
extern void Set_ObsMAccelX (int16_T  Value);
extern void Set_ObsMStatus(uint8_T  Value);

extern double Get_GlobalFus_Ego_Lane_Position(void);
extern double Get_Ego_Lane_Position(void);
void Set_SEN_LKA_Left_Lane_Quality(uint8_T  Value);

void Set_SEN_LKA_Left_Lane_C0_PosRght(int16_T  Value)  ;   

void Set_SEN_LKA_Left_Lane_C2_PosTRght(int16_T  Value) ; 

void Set_SEN_LKA_Left_Lane_C3_PosTRght(int16_T  Value);

void Set_SEN_LKA_Left_Lane_C1_PosTLeft (int16_T  Value) ;

void Set_SEN_LKA_Left_Lane_End (uint16_T  Value);    

void Set_SEN_LKA_Right_Lane_Quality (uint8_T  Value) ;  

void Set_SEN_LKA_Right_Lane_C0_PosRght  (int16_T  Value) ; 

void Set_SEN_LKA_Right_Lane_C2_PosTRght(int16_T  Value); 

void Set_SEN_LKA_Right_Lane_C3_PosTRght  (int16_T  Value) ;  

void Set_SEN_LKA_Right_Lane_C1_PosTLeft  (int16_T  Value);      

void Set_SEN_LKA_Right_Lane_End(uint16_T  Value) ;  


void Set_SEN_LKA_Next_Left_Lane_Quality (uint8_T  Value);  

void Set_SEN_LKA_Next_Left_Lane_C0_PosRght (int16_T  Value);   

void Set_SEN_LKA_Next_Left_Lane_C2_PosTRght(int16_T  Value);    

void Set_SEN_LKA_Next_Left_Lane_C3_PosTRght (int16_T  Value) ;

void Set_SEN_LKA_Next_Left_Lane_C1_PosTLeft   (int16_T  Value);  

void Set_SEN_LKA_Left_Lane_TLC(uint8_T  Value);    


void Set_SEN_LKA_Next_Right_Lane_Quality  (uint8_T  Value) ;

void Set_SEN_LKA_Next_Right_Lane_C0_PosRght(int16_T  Value) ; 

void Set_SEN_LKA_Next_Right_Lane_C2_PosTRght (int16_T  Value) ;

void Set_SEN_LKA_Next_Right_Lane_C3_PosTRght  (int16_T  Value);   

void Set_SEN_LKA_Next_Right_Lane_C1_PosTLeft   (int16_T  Value);    

void Set_SEN_LKA_Right_Lane_TLC (uint8_T  Value)  ;


#define CAN_TO_FUSING_MSG(id,type)    Get_##id##_##type
 
#define FUSING_TO_CAN_MSG(id,type)    Put_##id##_##type

/*global fusing*/
#define Get_Global_Fus_VehSpdAvgDrvn                   CAN_TO_FUSING_MSG(PPEI_Vehicle_Speed_and_Distance,VehSpdAvgDrvn)
#define Get_Global_Fus_VehDynYawRate                  CAN_TO_FUSING_MSG(PPEI_Chassis_General_Status_1,VehDynYawRate)
#define Get_Global_Fus_StrWhAng                              CAN_TO_FUSING_MSG(PPEI_Steering_Wheel_Angle,StrWhAng)
 
/*EPM driver*/
#define Get_StrWhAng             CAN_TO_FUSING_MSG(PPEI_Steering_Wheel_Angle,StrWhAng)

#define Get_VehDynYawRate        CAN_TO_FUSING_MSG(PPEI_Chassis_General_Status_1,VehDynYawRate)

#define Get_VehSpdAvgDrvn        CAN_TO_FUSING_MSG(PPEI_Vehicle_Speed_and_Distance,VehSpdAvgDrvn)

#define Set_Steering_Wheel_Angle_550  FUSING_TO_CAN_MSG(Mobileye_Generic_Sensor,Steering_Wheel_Angle)

#define Set_Yaw_Rate_550              FUSING_TO_CAN_MSG(Mobileye_Generic_Sensor,Yaw_rate)

#define Set_Vehicle_Speed_550         FUSING_TO_CAN_MSG(Mobileye_Generic_Sensor,Vehicle_Speed)

#define Set_Brakes_550                FUSING_TO_CAN_MSG(Mobileye_Generic_Sensor,Brakes)

#define Set_Left_Blink_550            FUSING_TO_CAN_MSG(Mobileye_Generic_Sensor,Left_Blink)

#define Set_Right_blink_550           FUSING_TO_CAN_MSG(Mobileye_Generic_Sensor,Right_blink)

#define Set_Wipers_550                FUSING_TO_CAN_MSG(Mobileye_Generic_Sensor,Wipers)

#define Set_Reverse_gear_550     FUSING_TO_CAN_MSG(Mobileye_Generic_Sensor,Reverse_gear)

/*ESR driver*/
#define Get_StrWhAngGrd                  CAN_TO_FUSING_MSG(PPEI_Steering_Wheel_Angle,StrWhAngGrd)

#define Set_STEERING_ANGLE_RATE_4F0      FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_STEERING_ANGLE_RATE)    

#define Set_STEERING_ANGLE_4F0           FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_STEERING_ANGLE)

#define Set_STEERING_ANGLE_VALIDITY_4F0  FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_STEERING_ANGLE_VALIDITY)

#define Set_RADIUS_CURVATURE_4F0         FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_RADIUS_CURVATURE)

#define Set_STEERING_ANGLE_RATE_SIGN_4F0  FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_STEERING_ANGLE_RATE_SIGN)

#define Set_YAW_RATE_VALIDITY_4F0         FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_YAW_RATE_VALIDITY)

#define Set_YAW_RATE_4F0                  FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_YAW_RATE)

#define Set_VEHICLE_SPEED_4F0             FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_VEHICLE_SPEED)
#define Set_VEHICLE_SPEED_DIRECTION_4F0   FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_VEHICLE_SPEED_DIRECTION)
#define Set_STEERING_ANGLE_SIGN_4F0       FUSING_TO_CAN_MSG(Vehicle1,CAN_RX_STEERING_ANGLE_SIGN)


/*ESR CoorAlig*/
#define Get_Track_TRACK_RANGE_1          CAN_TO_FUSING_MSG(ESR_Track01,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_1          CAN_TO_FUSING_MSG(ESR_Track01,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_1         CAN_TO_FUSING_MSG(ESR_Track01,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_2          CAN_TO_FUSING_MSG(ESR_Track02,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_2          CAN_TO_FUSING_MSG(ESR_Track02,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_2         CAN_TO_FUSING_MSG(ESR_Track02,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_3          CAN_TO_FUSING_MSG(ESR_Track03,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_3          CAN_TO_FUSING_MSG(ESR_Track03,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_3         CAN_TO_FUSING_MSG(ESR_Track03,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_4          CAN_TO_FUSING_MSG(ESR_Track04,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_4          CAN_TO_FUSING_MSG(ESR_Track04,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_4         CAN_TO_FUSING_MSG(ESR_Track04,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_5          CAN_TO_FUSING_MSG(ESR_Track05,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_5          CAN_TO_FUSING_MSG(ESR_Track05,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_5         CAN_TO_FUSING_MSG(ESR_Track05,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_6          CAN_TO_FUSING_MSG(ESR_Track06,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_6          CAN_TO_FUSING_MSG(ESR_Track06,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_6         CAN_TO_FUSING_MSG(ESR_Track06,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_7          CAN_TO_FUSING_MSG(ESR_Track07,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_7          CAN_TO_FUSING_MSG(ESR_Track07,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_7         CAN_TO_FUSING_MSG(ESR_Track07,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_8         CAN_TO_FUSING_MSG(ESR_Track08,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_8         CAN_TO_FUSING_MSG(ESR_Track08,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_8         CAN_TO_FUSING_MSG(ESR_Track08,CAN_TX_TRACK_STATUS) 



#define Get_Track_TRACK_RANGE_9          CAN_TO_FUSING_MSG(ESR_Track09,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_9          CAN_TO_FUSING_MSG(ESR_Track09,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_9        CAN_TO_FUSING_MSG(ESR_Track09,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_10          CAN_TO_FUSING_MSG(ESR_Track10,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_10          CAN_TO_FUSING_MSG(ESR_Track10,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_10         CAN_TO_FUSING_MSG(ESR_Track10,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_11          CAN_TO_FUSING_MSG(ESR_Track11,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_11          CAN_TO_FUSING_MSG(ESR_Track11,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_11         CAN_TO_FUSING_MSG(ESR_Track11,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_12          CAN_TO_FUSING_MSG(ESR_Track12,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_12          CAN_TO_FUSING_MSG(ESR_Track12,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_12         CAN_TO_FUSING_MSG(ESR_Track12,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_13          CAN_TO_FUSING_MSG(ESR_Track13,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_13          CAN_TO_FUSING_MSG(ESR_Track13,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_13         CAN_TO_FUSING_MSG(ESR_Track13,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_14          CAN_TO_FUSING_MSG(ESR_Track14,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_14          CAN_TO_FUSING_MSG(ESR_Track14,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_14         CAN_TO_FUSING_MSG(ESR_Track14,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_15          CAN_TO_FUSING_MSG(ESR_Track15,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_15          CAN_TO_FUSING_MSG(ESR_Track15,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_15         CAN_TO_FUSING_MSG(ESR_Track15,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_16          CAN_TO_FUSING_MSG(ESR_Track16,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_16          CAN_TO_FUSING_MSG(ESR_Track16,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_16         CAN_TO_FUSING_MSG(ESR_Track16,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_17          CAN_TO_FUSING_MSG(ESR_Track17,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_17          CAN_TO_FUSING_MSG(ESR_Track17,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_17         CAN_TO_FUSING_MSG(ESR_Track17,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_18          CAN_TO_FUSING_MSG(ESR_Track18,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_18          CAN_TO_FUSING_MSG(ESR_Track18,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_18         CAN_TO_FUSING_MSG(ESR_Track18,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_19          CAN_TO_FUSING_MSG(ESR_Track19,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_19          CAN_TO_FUSING_MSG(ESR_Track19,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_19         CAN_TO_FUSING_MSG(ESR_Track19,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_20          CAN_TO_FUSING_MSG(ESR_Track20,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_20          CAN_TO_FUSING_MSG(ESR_Track20,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_20         CAN_TO_FUSING_MSG(ESR_Track20,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_21          CAN_TO_FUSING_MSG(ESR_Track21,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_21         CAN_TO_FUSING_MSG(ESR_Track21,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_21         CAN_TO_FUSING_MSG(ESR_Track21,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_22          CAN_TO_FUSING_MSG(ESR_Track22,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_22          CAN_TO_FUSING_MSG(ESR_Track22,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_22         CAN_TO_FUSING_MSG(ESR_Track22,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_23         CAN_TO_FUSING_MSG(ESR_Track23,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_23         CAN_TO_FUSING_MSG(ESR_Track23,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_23         CAN_TO_FUSING_MSG(ESR_Track23,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_24          CAN_TO_FUSING_MSG(ESR_Track24,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_24          CAN_TO_FUSING_MSG(ESR_Track24,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_24         CAN_TO_FUSING_MSG(ESR_Track24,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_25          CAN_TO_FUSING_MSG(ESR_Track25,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_25          CAN_TO_FUSING_MSG(ESR_Track25,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_25         CAN_TO_FUSING_MSG(ESR_Track25,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_26          CAN_TO_FUSING_MSG(ESR_Track26,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_26          CAN_TO_FUSING_MSG(ESR_Track26,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_26         CAN_TO_FUSING_MSG(ESR_Track26,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_27          CAN_TO_FUSING_MSG(ESR_Track27,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_27          CAN_TO_FUSING_MSG(ESR_Track27,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_27         CAN_TO_FUSING_MSG(ESR_Track27,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_28          CAN_TO_FUSING_MSG(ESR_Track28,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_28          CAN_TO_FUSING_MSG(ESR_Track28,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_28         CAN_TO_FUSING_MSG(ESR_Track28,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_29         CAN_TO_FUSING_MSG(ESR_Track29,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_29          CAN_TO_FUSING_MSG(ESR_Track29,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_29         CAN_TO_FUSING_MSG(ESR_Track29,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_30          CAN_TO_FUSING_MSG(ESR_Track30,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_30          CAN_TO_FUSING_MSG(ESR_Track30,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_30         CAN_TO_FUSING_MSG(ESR_Track30,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_31         CAN_TO_FUSING_MSG(ESR_Track31,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_31         CAN_TO_FUSING_MSG(ESR_Track31,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_31         CAN_TO_FUSING_MSG(ESR_Track31,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_32          CAN_TO_FUSING_MSG(ESR_Track32,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_32          CAN_TO_FUSING_MSG(ESR_Track32,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_32         CAN_TO_FUSING_MSG(ESR_Track32,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_33          CAN_TO_FUSING_MSG(ESR_Track33,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_33         CAN_TO_FUSING_MSG(ESR_Track33,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_33         CAN_TO_FUSING_MSG(ESR_Track33,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_34          CAN_TO_FUSING_MSG(ESR_Track34,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_34          CAN_TO_FUSING_MSG(ESR_Track34,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_34         CAN_TO_FUSING_MSG(ESR_Track34,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_35          CAN_TO_FUSING_MSG(ESR_Track35,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_35          CAN_TO_FUSING_MSG(ESR_Track35,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_35         CAN_TO_FUSING_MSG(ESR_Track35,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_36         CAN_TO_FUSING_MSG(ESR_Track36,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_36        CAN_TO_FUSING_MSG(ESR_Track36,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_36         CAN_TO_FUSING_MSG(ESR_Track36,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_37        CAN_TO_FUSING_MSG(ESR_Track37,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_37         CAN_TO_FUSING_MSG(ESR_Track37,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_37         CAN_TO_FUSING_MSG(ESR_Track37,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_38         CAN_TO_FUSING_MSG(ESR_Track38,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_38          CAN_TO_FUSING_MSG(ESR_Track38,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_38         CAN_TO_FUSING_MSG(ESR_Track38,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_39         CAN_TO_FUSING_MSG(ESR_Track39,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_39         CAN_TO_FUSING_MSG(ESR_Track39,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_39         CAN_TO_FUSING_MSG(ESR_Track39,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_40          CAN_TO_FUSING_MSG(ESR_Track40,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_40          CAN_TO_FUSING_MSG(ESR_Track40,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_40         CAN_TO_FUSING_MSG(ESR_Track40,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_41          CAN_TO_FUSING_MSG(ESR_Track41,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_41         CAN_TO_FUSING_MSG(ESR_Track41,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_41         CAN_TO_FUSING_MSG(ESR_Track41,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_42          CAN_TO_FUSING_MSG(ESR_Track42,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_42          CAN_TO_FUSING_MSG(ESR_Track42,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_42         CAN_TO_FUSING_MSG(ESR_Track42,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_43          CAN_TO_FUSING_MSG(ESR_Track43,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_43          CAN_TO_FUSING_MSG(ESR_Track43,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_43         CAN_TO_FUSING_MSG(ESR_Track43,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_44          CAN_TO_FUSING_MSG(ESR_Track44,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_44          CAN_TO_FUSING_MSG(ESR_Track44,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_44         CAN_TO_FUSING_MSG(ESR_Track44,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_45          CAN_TO_FUSING_MSG(ESR_Track45,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_45          CAN_TO_FUSING_MSG(ESR_Track45,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_45         CAN_TO_FUSING_MSG(ESR_Track45,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_46          CAN_TO_FUSING_MSG(ESR_Track46,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_46          CAN_TO_FUSING_MSG(ESR_Track46,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_46         CAN_TO_FUSING_MSG(ESR_Track46,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_47          CAN_TO_FUSING_MSG(ESR_Track47,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_47          CAN_TO_FUSING_MSG(ESR_Track47,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_47         CAN_TO_FUSING_MSG(ESR_Track47,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_48         CAN_TO_FUSING_MSG(ESR_Track48,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_48         CAN_TO_FUSING_MSG(ESR_Track48,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_48         CAN_TO_FUSING_MSG(ESR_Track48,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_49         CAN_TO_FUSING_MSG(ESR_Track49,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_49         CAN_TO_FUSING_MSG(ESR_Track49,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_49         CAN_TO_FUSING_MSG(ESR_Track49,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_50         CAN_TO_FUSING_MSG(ESR_Track50,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_50         CAN_TO_FUSING_MSG(ESR_Track50,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_50         CAN_TO_FUSING_MSG(ESR_Track50,CAN_TX_TRACK_STATUS) 



#define Get_Track_TRACK_RANGE_51          CAN_TO_FUSING_MSG(ESR_Track51,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_51          CAN_TO_FUSING_MSG(ESR_Track51,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_51         CAN_TO_FUSING_MSG(ESR_Track51,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_52          CAN_TO_FUSING_MSG(ESR_Track52,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_52          CAN_TO_FUSING_MSG(ESR_Track52,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_52         CAN_TO_FUSING_MSG(ESR_Track52,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_53          CAN_TO_FUSING_MSG(ESR_Track53,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_53          CAN_TO_FUSING_MSG(ESR_Track53,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_53         CAN_TO_FUSING_MSG(ESR_Track53,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_54          CAN_TO_FUSING_MSG(ESR_Track54,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_54          CAN_TO_FUSING_MSG(ESR_Track54,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_54         CAN_TO_FUSING_MSG(ESR_Track54,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_55          CAN_TO_FUSING_MSG(ESR_Track55,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_55          CAN_TO_FUSING_MSG(ESR_Track55,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_55         CAN_TO_FUSING_MSG(ESR_Track55,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_56          CAN_TO_FUSING_MSG(ESR_Track56,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_56          CAN_TO_FUSING_MSG(ESR_Track56,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_56         CAN_TO_FUSING_MSG(ESR_Track56,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_57          CAN_TO_FUSING_MSG(ESR_Track57,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_57          CAN_TO_FUSING_MSG(ESR_Track57,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_57         CAN_TO_FUSING_MSG(ESR_Track57,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_58         CAN_TO_FUSING_MSG(ESR_Track58,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_58         CAN_TO_FUSING_MSG(ESR_Track58,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_58         CAN_TO_FUSING_MSG(ESR_Track58,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_59         CAN_TO_FUSING_MSG(ESR_Track59,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_59         CAN_TO_FUSING_MSG(ESR_Track59,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_59         CAN_TO_FUSING_MSG(ESR_Track59,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_60         CAN_TO_FUSING_MSG(ESR_Track60,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_60         CAN_TO_FUSING_MSG(ESR_Track60,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_60         CAN_TO_FUSING_MSG(ESR_Track60,CAN_TX_TRACK_STATUS) 


#define Get_Track_TRACK_RANGE_61          CAN_TO_FUSING_MSG(ESR_Track61,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_61          CAN_TO_FUSING_MSG(ESR_Track61,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_61         CAN_TO_FUSING_MSG(ESR_Track61,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_62          CAN_TO_FUSING_MSG(ESR_Track62,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_62          CAN_TO_FUSING_MSG(ESR_Track62,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_62         CAN_TO_FUSING_MSG(ESR_Track62,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_63          CAN_TO_FUSING_MSG(ESR_Track63,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_63          CAN_TO_FUSING_MSG(ESR_Track63,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_63         CAN_TO_FUSING_MSG(ESR_Track63,CAN_TX_TRACK_STATUS) 

#define Get_Track_TRACK_RANGE_64          CAN_TO_FUSING_MSG(ESR_Track64,CAN_TX_TRACK_RANGE)               
#define Get_Track_TRACK_ANGLE_64          CAN_TO_FUSING_MSG(ESR_Track64,CAN_TX_TRACK_ANGLE) 
#define Get_Track_TRACK_STATUS_64         CAN_TO_FUSING_MSG(ESR_Track64,CAN_TX_TRACK_STATUS) 



/*Camera Datagen*/
#define Get_Vis_Track_ID_1                       CAN_TO_FUSING_MSG(ObstacleDataA1,ObstacleID)
#define Get_Vis_Track_PosX_1                     CAN_TO_FUSING_MSG(ObstacleDataA1,ObstaclePosX)
#define Get_Vis_Track_PosY_1                     CAN_TO_FUSING_MSG(ObstacleDataA1,ObstaclePosY)
#define Get_Vis_Track_Type_1                     CAN_TO_FUSING_MSG(ObstacleDataA1,ObstacleType)
#define Get_Vis_Track_Width_1                    CAN_TO_FUSING_MSG(ObstacleDataB1,ObstacleWidth)
#define Get_Vis_Track_VelX_1                     CAN_TO_FUSING_MSG(ObstacleDataA1,ObstacleVelX)
#define Get_Vis_Track_VelY_1                     CAN_TO_FUSING_MSG(ObstacleDataC1,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_1                CAN_TO_FUSING_MSG(ObstacleDataA1,ObstacleStatus)

#define Get_Vis_Track_ID_2                       CAN_TO_FUSING_MSG(ObstacleDataA2,ObstacleID)
#define Get_Vis_Track_PosX_2                     CAN_TO_FUSING_MSG(ObstacleDataA2,ObstaclePosX)
#define Get_Vis_Track_PosY_2                     CAN_TO_FUSING_MSG(ObstacleDataA2,ObstaclePosY)
#define Get_Vis_Track_Type_2                     CAN_TO_FUSING_MSG(ObstacleDataA2,ObstacleType)
#define Get_Vis_Track_Width_2                    CAN_TO_FUSING_MSG(ObstacleDataB2,ObstacleWidth)
#define Get_Vis_Track_VelX_2                     CAN_TO_FUSING_MSG(ObstacleDataA2,ObstacleVelX)
#define Get_Vis_Track_VelY_2                     CAN_TO_FUSING_MSG(ObstacleDataC2,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_2                CAN_TO_FUSING_MSG(ObstacleDataA2,ObstacleStatus)

#define Get_Vis_Track_ID_3                       CAN_TO_FUSING_MSG(ObstacleDataA3,ObstacleID)
#define Get_Vis_Track_PosX_3                     CAN_TO_FUSING_MSG(ObstacleDataA3,ObstaclePosX)
#define Get_Vis_Track_PosY_3                     CAN_TO_FUSING_MSG(ObstacleDataA3,ObstaclePosY)
#define Get_Vis_Track_Type_3                     CAN_TO_FUSING_MSG(ObstacleDataA3,ObstacleType)
#define Get_Vis_Track_Width_3                    CAN_TO_FUSING_MSG(ObstacleDataB3,ObstacleWidth)
#define Get_Vis_Track_VelX_3                     CAN_TO_FUSING_MSG(ObstacleDataA3,ObstacleVelX)
#define Get_Vis_Track_VelY_3                     CAN_TO_FUSING_MSG(ObstacleDataC3,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_3                CAN_TO_FUSING_MSG(ObstacleDataA3,ObstacleStatus)

#define Get_Vis_Track_ID_4                       CAN_TO_FUSING_MSG(ObstacleDataA4,ObstacleID)
#define Get_Vis_Track_PosX_4                     CAN_TO_FUSING_MSG(ObstacleDataA4,ObstaclePosX)
#define Get_Vis_Track_PosY_4                     CAN_TO_FUSING_MSG(ObstacleDataA4,ObstaclePosY)
#define Get_Vis_Track_Type_4                     CAN_TO_FUSING_MSG(ObstacleDataA4,ObstacleType)
#define Get_Vis_Track_Width_4                    CAN_TO_FUSING_MSG(ObstacleDataB4,ObstacleWidth)
#define Get_Vis_Track_VelX_4                     CAN_TO_FUSING_MSG(ObstacleDataA4,ObstacleVelX)
#define Get_Vis_Track_VelY_4                     CAN_TO_FUSING_MSG(ObstacleDataC4,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_4                CAN_TO_FUSING_MSG(ObstacleDataA4,ObstacleStatus)

#define Get_Vis_Track_ID_5                      CAN_TO_FUSING_MSG(ObstacleDataA5,ObstacleID)
#define Get_Vis_Track_PosX_5                    CAN_TO_FUSING_MSG(ObstacleDataA5,ObstaclePosX)
#define Get_Vis_Track_PosY_5                    CAN_TO_FUSING_MSG(ObstacleDataA5,ObstaclePosY)
#define Get_Vis_Track_Type_5                    CAN_TO_FUSING_MSG(ObstacleDataA5,ObstacleType)
#define Get_Vis_Track_Width_5                   CAN_TO_FUSING_MSG(ObstacleDataB5,ObstacleWidth)
#define Get_Vis_Track_VelX_5                    CAN_TO_FUSING_MSG(ObstacleDataA5,ObstacleVelX)
#define Get_Vis_Track_VelY_5                    CAN_TO_FUSING_MSG(ObstacleDataC5,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_5               CAN_TO_FUSING_MSG(ObstacleDataA5,ObstacleStatus)

#define Get_Vis_Track_ID_6                     CAN_TO_FUSING_MSG(ObstacleDataA6,ObstacleID)
#define Get_Vis_Track_PosX_6                   CAN_TO_FUSING_MSG(ObstacleDataA6,ObstaclePosX)
#define Get_Vis_Track_PosY_6                    CAN_TO_FUSING_MSG(ObstacleDataA6,ObstaclePosY)
#define Get_Vis_Track_Type_6                    CAN_TO_FUSING_MSG(ObstacleDataA6,ObstacleType)
#define Get_Vis_Track_Width_6                   CAN_TO_FUSING_MSG(ObstacleDataB6,ObstacleWidth)
#define Get_Vis_Track_VelX_6                    CAN_TO_FUSING_MSG(ObstacleDataA6,ObstacleVelX)
#define Get_Vis_Track_VelY_6                    CAN_TO_FUSING_MSG(ObstacleDataC6,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_6               CAN_TO_FUSING_MSG(ObstacleDataA6,ObstacleStatus)

#define Get_Vis_Track_ID_7                      CAN_TO_FUSING_MSG(ObstacleDataA7,ObstacleID)
#define Get_Vis_Track_PosX_7                    CAN_TO_FUSING_MSG(ObstacleDataA7,ObstaclePosX)
#define Get_Vis_Track_PosY_7                    CAN_TO_FUSING_MSG(ObstacleDataA7,ObstaclePosY)
#define Get_Vis_Track_Type_7                    CAN_TO_FUSING_MSG(ObstacleDataA7,ObstacleType)
#define Get_Vis_Track_Width_7                   CAN_TO_FUSING_MSG(ObstacleDataB7,ObstacleWidth)
#define Get_Vis_Track_VelX_7                   CAN_TO_FUSING_MSG(ObstacleDataA7,ObstacleVelX)
#define Get_Vis_Track_VelY_7                    CAN_TO_FUSING_MSG(ObstacleDataC7,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_7                CAN_TO_FUSING_MSG(ObstacleDataA7,ObstacleStatus)

#define Get_Vis_Track_ID_8                      CAN_TO_FUSING_MSG(ObstacleDataA8,ObstacleID)
#define Get_Vis_Track_PosX_8                    CAN_TO_FUSING_MSG(ObstacleDataA8,ObstaclePosX)
#define Get_Vis_Track_PosY_8                    CAN_TO_FUSING_MSG(ObstacleDataA8,ObstaclePosY)
#define Get_Vis_Track_Type_8                    CAN_TO_FUSING_MSG(ObstacleDataA8,ObstacleType)
#define Get_Vis_Track_Width_8                   CAN_TO_FUSING_MSG(ObstacleDataB8,ObstacleWidth)
#define Get_Vis_Track_VelX_8                    CAN_TO_FUSING_MSG(ObstacleDataA8,ObstacleVelX)
#define Get_Vis_Track_VelY_8                    CAN_TO_FUSING_MSG(ObstacleDataC8,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_8               CAN_TO_FUSING_MSG(ObstacleDataA8,ObstacleStatus)

#define Get_Vis_Track_ID_9                      CAN_TO_FUSING_MSG(ObstacleDataA9,ObstacleID)
#define Get_Vis_Track_PosX_9                    CAN_TO_FUSING_MSG(ObstacleDataA9,ObstaclePosX)
#define Get_Vis_Track_PosY_9                    CAN_TO_FUSING_MSG(ObstacleDataA9,ObstaclePosY)
#define Get_Vis_Track_Type_9                    CAN_TO_FUSING_MSG(ObstacleDataA9,ObstacleType)
#define Get_Vis_Track_Width_9                   CAN_TO_FUSING_MSG(ObstacleDataB9,ObstacleWidth)
#define Get_Vis_Track_VelX_9                    CAN_TO_FUSING_MSG(ObstacleDataA9,ObstacleVelX)
#define Get_Vis_Track_VelY_9                    CAN_TO_FUSING_MSG(ObstacleDataC9,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_9               CAN_TO_FUSING_MSG(ObstacleDataA9,ObstacleStatus)

#define Get_Vis_Track_ID_10                    CAN_TO_FUSING_MSG(ObstacleDataA10,ObstacleID)
#define Get_Vis_Track_PosX_10                    CAN_TO_FUSING_MSG(ObstacleDataA10,ObstaclePosX)
#define Get_Vis_Track_PosY_10                    CAN_TO_FUSING_MSG(ObstacleDataA10,ObstaclePosY)
#define Get_Vis_Track_Type_10                    CAN_TO_FUSING_MSG(ObstacleDataA10,ObstacleType)
#define Get_Vis_Track_Width_10                   CAN_TO_FUSING_MSG(ObstacleDataB10,ObstacleWidth)
#define Get_Vis_Track_VelX_10                    CAN_TO_FUSING_MSG(ObstacleDataA10,ObstacleVelX)
#define Get_Vis_Track_VelY_10                    CAN_TO_FUSING_MSG(ObstacleDataC10,ObstacleVelY)
#define Get_Vis_Track_ObjStatus_10               CAN_TO_FUSING_MSG(ObstacleDataA10,ObstacleStatus)


/*EPM objen*/


#define Get_LKA_Left_Lane_A_Lane_Quality                          CAN_TO_FUSING_MSG(LKA_Left_Lane_A, Quality)
#define Get_LKA_Left_Lane_A_Lane_Lane_Model_C0           CAN_TO_FUSING_MSG(LKA_Left_Lane_A_Lane, Model_C0) 
#define Get_LKA_Left_Lane_A_Lane_Lane_Model_C2           CAN_TO_FUSING_MSG(LKA_Left_Lane_A_Lane, Model_C2)
#define Get_LKA_Left_Lane_A_Lane_Lane_Model_C3          CAN_TO_FUSING_MSG(LKA_Left_Lane_A_Lane, Model_C3)
 
 #define Get_ObstacleData10_ObstacleStatus                        Get_ObstacleDataA10_ObstacleStatus


/*SRR 20ms and 100ms driver*/

#define Get_TransEstGear                                                        Get_PPEI_Trans_General_Status_2_TransEstGear

#define Get_SysPwrMd                                                            Get_PPEI_Platform_General_Status_SysPwrMd


   /*LRSRR*/
#define   Get_LR_SrrTrkObjID1                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LF,RSrrTrkObjID1) 
#define  Get_LR_SrrTrkRange1                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LF,RSrrTrkRange1)                     
#define  Get_LR_SrrTrkAzimuth1                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LF,RSrrTrkAzimuth1)     
#define  Get_LR_SrrTrkRRate1                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LF,RSrrTrkRRate1)     
#define  Get_LR_SrrTrkDynamProp1                               CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LF,RSrrTrkDynamProp1)     

#define   Get_LR_SrrTrkObjID2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LF,RSrrTrkObjID2) 
#define  Get_LR_SrrTrkRange2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LF,RSrrTrkRange2)                     
#define  Get_LR_SrrTrkAzimuth2                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LF,RSrrTrkAzimuth2)     
#define  Get_LR_SrrTrkRRate2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LF,RSrrTrkRRate2)     
#define  Get_LR_SrrTrkDynamProp2                              CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LF,RSrrTrkDynamProp2) 


#define   Get_LR_SrrTrkObjID3                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LF,RSrrTrkObjID3) 
#define  Get_LR_SrrTrkRange3                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LF,RSrrTrkRange3)                     
#define  Get_LR_SrrTrkAzimuth3                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LF,RSrrTrkAzimuth3)     
#define  Get_LR_SrrTrkRRate3                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LF,RSrrTrkRRate3)     
#define  Get_LR_SrrTrkDynamProp3                               CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LF,RSrrTrkDynamProp3)    

#define   Get_LR_SrrTrkObjID4                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LF,RSrrTrkObjID4) 
#define  Get_LR_SrrTrkRange4                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LF,RSrrTrkRange4)                     
#define  Get_LR_SrrTrkAzimuth4                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LF,RSrrTrkAzimuth4)     
#define  Get_LR_SrrTrkRRate4                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LF,RSrrTrkRRate4)     
#define  Get_LR_SrrTrkDynamProp4                               CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LF,RSrrTrkDynamProp4)  

#define   Get_LR_SrrTrkObjID5                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LF,RSrrTrkObjID5) 
#define  Get_LR_SrrTrkRange5                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LF,RSrrTrkRange5)                     
#define  Get_LR_SrrTrkAzimuth5                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LF,RSrrTrkAzimuth5)     
#define  Get_LR_SrrTrkRRate5                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LF,RSrrTrkRRate5)     
#define  Get_LR_SrrTrkDynamProp5                               CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LF,RSrrTrkDynamProp5)   

#define   Get_LR_SrrTrkObjID6                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LF,RSrrTrkObjID6) 
#define  Get_LR_SrrTrkRange6                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LF,RSrrTrkRange6)                     
#define  Get_LR_SrrTrkAzimuth6                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LF,RSrrTrkAzimuth6)     
#define  Get_LR_SrrTrkRRate6                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LF,RSrrTrkRRate6)     
#define  Get_LR_SrrTrkDynamProp6                               CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LF,RSrrTrkDynamProp6)   

#define   Get_LR_SrrTrkObjID7                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LF,RSrrTrkObjID7) 
#define  Get_LR_SrrTrkRange7                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LF,RSrrTrkRange7)                     
#define  Get_LR_SrrTrkAzimuth7                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LF,RSrrTrkAzimuth7)     
#define  Get_LR_SrrTrkRRate7                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LF,RSrrTrkRRate7)     
#define  Get_LR_SrrTrkDynamProp7                               CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LF,RSrrTrkDynamProp7)   

#define   Get_LR_SrrTrkObjID8                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LF,RSrrTrkObjID8) 
#define  Get_LR_SrrTrkRange8                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LF,RSrrTrkRange8)                     
#define  Get_LR_SrrTrkAzimuth8                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LF,RSrrTrkAzimuth8)     
#define  Get_LR_SrrTrkRRate8                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LF,RSrrTrkRRate8)     
#define  Get_LR_SrrTrkDynamProp8                               CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LF,RSrrTrkDynamProp8)    

#define   Get_LR_SrrTrkObjID9                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LF,RSrrTrkObjID9) 
#define  Get_LR_SrrTrkRange9                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LF,RSrrTrkRange9)                     
#define  Get_LR_SrrTrkAzimuth9                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LF,RSrrTrkAzimuth9)     
#define  Get_LR_SrrTrkRRate9                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LF,RSrrTrkRRate9)     
#define  Get_LR_SrrTrkDynamProp9                               CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LF,RSrrTrkDynamProp9)    


#define   Get_LR_SrrTrkObjID10                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LF,RSrrTrkObjID10) 
#define  Get_LR_SrrTrkRange10                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LF,RSrrTrkRange10)                     
#define  Get_LR_SrrTrkAzimuth10                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LF,RSrrTrkAzimuth10)     
#define  Get_LR_SrrTrkRRate10                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LF,RSrrTrkRRate10)     
#define  Get_LR_SrrTrkDynamProp10                               CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LF,RSrrTrkDynamProp10)  


/*LFSRR*/
#define   Get_LF_SrrTrkObjID1                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LR,RSrrTrkObjID1) 
#define  Get_LF_SrrTrkRange1                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LR,RSrrTrkRange1)                     
#define  Get_LF_SrrTrkAzimuth1                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LR,RSrrTrkAzimuth1)     
#define  Get_LF_SrrTrkRRate1                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LR,RSrrTrkRRate1)     
#define  Get_LF_SrrTrkDynamProp1                               CAN_TO_FUSING_MSG(R_SRR_Object_Track1_LR,RSrrTrkDynamProp1)     

#define   Get_LF_SrrTrkObjID2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LR,RSrrTrkObjID2) 
#define  Get_LF_SrrTrkRange2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LR,RSrrTrkRange2)                     
#define  Get_LF_SrrTrkAzimuth2                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LR,RSrrTrkAzimuth2)     
#define  Get_LF_SrrTrkRRate2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LR,RSrrTrkRRate2)     
#define  Get_LF_SrrTrkDynamProp2                              CAN_TO_FUSING_MSG(R_SRR_Object_Track2_LR,RSrrTrkDynamProp2) 


#define   Get_LF_SrrTrkObjID3                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LR,RSrrTrkObjID3) 
#define  Get_LF_SrrTrkRange3                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LR,RSrrTrkRange3)                     
#define  Get_LF_SrrTrkAzimuth3                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LR,RSrrTrkAzimuth3)     
#define  Get_LF_SrrTrkRRate3                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LR,RSrrTrkRRate3)     
#define  Get_LF_SrrTrkDynamProp3                               CAN_TO_FUSING_MSG(R_SRR_Object_Track3_LR,RSrrTrkDynamProp3)    

#define   Get_LF_SrrTrkObjID4                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LR,RSrrTrkObjID4) 
#define  Get_LF_SrrTrkRange4                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LR,RSrrTrkRange4)                     
#define  Get_LF_SrrTrkAzimuth4                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LR,RSrrTrkAzimuth4)     
#define  Get_LF_SrrTrkRRate4                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LR,RSrrTrkRRate4)     
#define  Get_LF_SrrTrkDynamProp4                               CAN_TO_FUSING_MSG(R_SRR_Object_Track4_LR,RSrrTrkDynamProp4)  

#define   Get_LF_SrrTrkObjID5                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LR,RSrrTrkObjID5) 
#define  Get_LF_SrrTrkRange5                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LR,RSrrTrkRange5)                     
#define  Get_LF_SrrTrkAzimuth5                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LR,RSrrTrkAzimuth5)     
#define  Get_LF_SrrTrkRRate5                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LR,RSrrTrkRRate5)     
#define  Get_LF_SrrTrkDynamProp5                               CAN_TO_FUSING_MSG(R_SRR_Object_Track5_LR,RSrrTrkDynamProp5)   

#define   Get_LF_SrrTrkObjID6                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LR,RSrrTrkObjID6) 
#define  Get_LF_SrrTrkRange6                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LR,RSrrTrkRange6)                     
#define  Get_LF_SrrTrkAzimuth6                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LR,RSrrTrkAzimuth6)     
#define  Get_LF_SrrTrkRRate6                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LR,RSrrTrkRRate6)     
#define  Get_LF_SrrTrkDynamProp6                               CAN_TO_FUSING_MSG(R_SRR_Object_Track6_LR,RSrrTrkDynamProp6)   

#define   Get_LF_SrrTrkObjID7                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LR,RSrrTrkObjID7) 
#define  Get_LF_SrrTrkRange7                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LR,RSrrTrkRange7)                     
#define  Get_LF_SrrTrkAzimuth7                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LR,RSrrTrkAzimuth7)     
#define  Get_LF_SrrTrkRRate7                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LR,RSrrTrkRRate7)     
#define  Get_LF_SrrTrkDynamProp7                               CAN_TO_FUSING_MSG(R_SRR_Object_Track7_LR,RSrrTrkDynamProp7)   

#define   Get_LF_SrrTrkObjID8                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LR,RSrrTrkObjID8) 
#define  Get_LF_SrrTrkRange8                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LR,RSrrTrkRange8)                     
#define  Get_LF_SrrTrkAzimuth8                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LR,RSrrTrkAzimuth8)     
#define  Get_LF_SrrTrkRRate8                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LR,RSrrTrkRRate8)     
#define  Get_LF_SrrTrkDynamProp8                               CAN_TO_FUSING_MSG(R_SRR_Object_Track8_LR,RSrrTrkDynamProp8)    

#define   Get_LF_SrrTrkObjID9                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LR,RSrrTrkObjID9) 
#define  Get_LF_SrrTrkRange9                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LR,RSrrTrkRange9)                     
#define  Get_LF_SrrTrkAzimuth9                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LR,RSrrTrkAzimuth9)     
#define  Get_LF_SrrTrkRRate9                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LR,RSrrTrkRRate9)     
#define  Get_LF_SrrTrkDynamProp9                               CAN_TO_FUSING_MSG(R_SRR_Object_Track9_LR,RSrrTrkDynamProp9)    


#define   Get_LF_SrrTrkObjID10                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LR,RSrrTrkObjID10) 
#define  Get_LF_SrrTrkRange10                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LR,RSrrTrkRange10)                     
#define  Get_LF_SrrTrkAzimuth10                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LR,RSrrTrkAzimuth10)     
#define  Get_LF_SrrTrkRRate10                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LR,RSrrTrkRRate10)     
#define  Get_LF_SrrTrkDynamProp10                               CAN_TO_FUSING_MSG(R_SRR_Object_Track10_LR,RSrrTrkDynamProp10)  
  
/*RF SRR*/

#define   Get_RF_SrrTrkObjID1                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RF,RSrrTrkObjID1) 
#define  Get_RF_SrrTrkRange1                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RF,RSrrTrkRange1)                     
#define  Get_RF_SrrTrkAzimuth1                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RF,RSrrTrkAzimuth1)     
#define  Get_RF_SrrTrkRRate1                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RF,RSrrTrkRRate1)     
#define  Get_RF_SrrTrkDynamProp1                               CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RF,RSrrTrkDynamProp1)     

#define   Get_RF_SrrTrkObjID2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RF,RSrrTrkObjID2) 
#define  Get_RF_SrrTrkRange2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RF,RSrrTrkRange2)                     
#define  Get_RF_SrrTrkAzimuth2                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RF,RSrrTrkAzimuth2)     
#define  Get_RF_SrrTrkRRate2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RF,RSrrTrkRRate2)     
#define  Get_RF_SrrTrkDynamProp2                              CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RF,RSrrTrkDynamProp2) 


#define   Get_RF_SrrTrkObjID3                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RF,RSrrTrkObjID3) 
#define  Get_RF_SrrTrkRange3                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RF,RSrrTrkRange3)                     
#define  Get_RF_SrrTrkAzimuth3                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RF,RSrrTrkAzimuth3)     
#define  Get_RF_SrrTrkRRate3                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RF,RSrrTrkRRate3)     
#define  Get_RF_SrrTrkDynamProp3                               CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RF,RSrrTrkDynamProp3)    

#define   Get_RF_SrrTrkObjID4                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RF,RSrrTrkObjID4) 
#define  Get_RF_SrrTrkRange4                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RF,RSrrTrkRange4)                     
#define  Get_RF_SrrTrkAzimuth4                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RF,RSrrTrkAzimuth4)     
#define  Get_RF_SrrTrkRRate4                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RF,RSrrTrkRRate4)     
#define  Get_RF_SrrTrkDynamProp4                               CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RF,RSrrTrkDynamProp4)  

#define   Get_RF_SrrTrkObjID5                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RF,RSrrTrkObjID5) 
#define  Get_RF_SrrTrkRange5                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RF,RSrrTrkRange5)                     
#define  Get_RF_SrrTrkAzimuth5                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RF,RSrrTrkAzimuth5)     
#define  Get_RF_SrrTrkRRate5                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RF,RSrrTrkRRate5)     
#define  Get_RF_SrrTrkDynamProp5                               CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RF,RSrrTrkDynamProp5)   

#define   Get_RF_SrrTrkObjID6                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RF,RSrrTrkObjID6) 
#define  Get_RF_SrrTrkRange6                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RF,RSrrTrkRange6)                     
#define  Get_RF_SrrTrkAzimuth6                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RF,RSrrTrkAzimuth6)     
#define  Get_RF_SrrTrkRRate6                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RF,RSrrTrkRRate6)     
#define  Get_RF_SrrTrkDynamProp6                               CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RF,RSrrTrkDynamProp6)   

#define   Get_RF_SrrTrkObjID7                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RF,RSrrTrkObjID7) 
#define  Get_RF_SrrTrkRange7                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RF,RSrrTrkRange7)                     
#define  Get_RF_SrrTrkAzimuth7                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RF,RSrrTrkAzimuth7)     
#define  Get_RF_SrrTrkRRate7                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RF,RSrrTrkRRate7)     
#define  Get_RF_SrrTrkDynamProp7                               CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RF,RSrrTrkDynamProp7)   

#define   Get_RF_SrrTrkObjID8                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RF,RSrrTrkObjID8) 
#define  Get_RF_SrrTrkRange8                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RF,RSrrTrkRange8)                     
#define  Get_RF_SrrTrkAzimuth8                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RF,RSrrTrkAzimuth8)     
#define  Get_RF_SrrTrkRRate8                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RF,RSrrTrkRRate8)     
#define  Get_RF_SrrTrkDynamProp8                               CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RF,RSrrTrkDynamProp8)    

#define   Get_RF_SrrTrkObjID9                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RF,RSrrTrkObjID9) 
#define  Get_RF_SrrTrkRange9                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RF,RSrrTrkRange9)                     
#define  Get_RF_SrrTrkAzimuth9                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RF,RSrrTrkAzimuth9)     
#define  Get_RF_SrrTrkRRate9                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RF,RSrrTrkRRate9)     
#define  Get_RF_SrrTrkDynamProp9                               CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RF,RSrrTrkDynamProp9)    


#define   Get_RF_SrrTrkObjID10                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RF,RSrrTrkObjID10) 
#define  Get_RF_SrrTrkRange10                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RF,RSrrTrkRange10)                     
#define  Get_RF_SrrTrkAzimuth10                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RF,RSrrTrkAzimuth10)     
#define  Get_RF_SrrTrkRRate10                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RF,RSrrTrkRRate10)     
#define  Get_RF_SrrTrkDynamProp10                               CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RF,RSrrTrkDynamProp10)  

/*RR SRRS*/
#define   Get_RR_SrrTrkObjID1                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RR,RSrrTrkObjID1) 
#define  Get_RR_SrrTrkRange1                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RR,RSrrTrkRange1)                     
#define  Get_RR_SrrTrkAzimuth1                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RR,RSrrTrkAzimuth1)     
#define  Get_RR_SrrTrkRRate1                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RR,RSrrTrkRRate1)     
#define  Get_RR_SrrTrkDynamProp1                               CAN_TO_FUSING_MSG(R_SRR_Object_Track1_RR,RSrrTrkDynamProp1)     

#define   Get_RR_SrrTrkObjID2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RR,RSrrTrkObjID2) 
#define  Get_RR_SrrTrkRange2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RR,RSrrTrkRange2)                     
#define  Get_RR_SrrTrkAzimuth2                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RR,RSrrTrkAzimuth2)     
#define  Get_RR_SrrTrkRRate2                                      CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RR,RSrrTrkRRate2)     
#define  Get_RR_SrrTrkDynamProp2                              CAN_TO_FUSING_MSG(R_SRR_Object_Track2_RR,RSrrTrkDynamProp2) 


#define   Get_RR_SrrTrkObjID3                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RR,RSrrTrkObjID3) 
#define  Get_RR_SrrTrkRange3                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RR,RSrrTrkRange3)                     
#define  Get_RR_SrrTrkAzimuth3                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RR,RSrrTrkAzimuth3)     
#define  Get_RR_SrrTrkRRate3                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RR,RSrrTrkRRate3)     
#define  Get_RR_SrrTrkDynamProp3                               CAN_TO_FUSING_MSG(R_SRR_Object_Track3_RR,RSrrTrkDynamProp3)    

#define   Get_RR_SrrTrkObjID4                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RR,RSrrTrkObjID4) 
#define  Get_RR_SrrTrkRange4                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RR,RSrrTrkRange4)                     
#define  Get_RR_SrrTrkAzimuth4                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RR,RSrrTrkAzimuth4)     
#define  Get_RR_SrrTrkRRate4                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RR,RSrrTrkRRate4)     
#define  Get_RR_SrrTrkDynamProp4                               CAN_TO_FUSING_MSG(R_SRR_Object_Track4_RR,RSrrTrkDynamProp4)  

#define   Get_RR_SrrTrkObjID5                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RR,RSrrTrkObjID5) 
#define  Get_RR_SrrTrkRange5                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RR,RSrrTrkRange5)                     
#define  Get_RR_SrrTrkAzimuth5                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RR,RSrrTrkAzimuth5)     
#define  Get_RR_SrrTrkRRate5                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RR,RSrrTrkRRate5)     
#define  Get_RR_SrrTrkDynamProp5                               CAN_TO_FUSING_MSG(R_SRR_Object_Track5_RR,RSrrTrkDynamProp5)   

#define   Get_RR_SrrTrkObjID6                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RR,RSrrTrkObjID6) 
#define  Get_RR_SrrTrkRange6                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RR,RSrrTrkRange6)                     
#define  Get_RR_SrrTrkAzimuth6                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RR,RSrrTrkAzimuth6)     
#define  Get_RR_SrrTrkRRate6                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RR,RSrrTrkRRate6)     
#define  Get_RR_SrrTrkDynamProp6                               CAN_TO_FUSING_MSG(R_SRR_Object_Track6_RR,RSrrTrkDynamProp6)   

#define   Get_RR_SrrTrkObjID7                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RR,RSrrTrkObjID7) 
#define  Get_RR_SrrTrkRange7                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RR,RSrrTrkRange7)                     
#define  Get_RR_SrrTrkAzimuth7                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RR,RSrrTrkAzimuth7)     
#define  Get_RR_SrrTrkRRate7                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RR,RSrrTrkRRate7)     
#define  Get_RR_SrrTrkDynamProp7                               CAN_TO_FUSING_MSG(R_SRR_Object_Track7_RR,RSrrTrkDynamProp7)   

#define   Get_RR_SrrTrkObjID8                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RR,RSrrTrkObjID8) 
#define  Get_RR_SrrTrkRange8                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RR,RSrrTrkRange8)                     
#define  Get_RR_SrrTrkAzimuth8                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RR,RSrrTrkAzimuth8)     
#define  Get_RR_SrrTrkRRate8                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RR,RSrrTrkRRate8)     
#define  Get_RR_SrrTrkDynamProp8                               CAN_TO_FUSING_MSG(R_SRR_Object_Track8_RR,RSrrTrkDynamProp8)    

#define   Get_RR_SrrTrkObjID9                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RR,RSrrTrkObjID9) 
#define  Get_RR_SrrTrkRange9                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RR,RSrrTrkRange9)                     
#define  Get_RR_SrrTrkAzimuth9                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RR,RSrrTrkAzimuth9)     
#define  Get_RR_SrrTrkRRate9                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RR,RSrrTrkRRate9)     
#define  Get_RR_SrrTrkDynamProp9                               CAN_TO_FUSING_MSG(R_SRR_Object_Track9_RR,RSrrTrkDynamProp9)    


#define   Get_RR_SrrTrkObjID10                                   CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RR,RSrrTrkObjID10) 
#define  Get_RR_SrrTrkRange10                                    CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RR,RSrrTrkRange10)                     
#define  Get_RR_SrrTrkAzimuth10                                 CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RR,RSrrTrkAzimuth10)     
#define  Get_RR_SrrTrkRRate10                                       CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RR,RSrrTrkRRate10)     
#define  Get_RR_SrrTrkDynamProp10                               CAN_TO_FUSING_MSG(R_SRR_Object_Track10_RR,RSrrTrkDynamProp10)  


/*side occupy*/

 #define   Get_Fus_Left_Lane_A_Lane_Lane_Model_C0                                  CAN_TO_FUSING_MSG(LKA_Left_Lane_A_Lane, Model_C0)
      
#define     Get_Fus_Left_Lane_B_Lane_Model_C1                                          CAN_TO_FUSING_MSG(LKA_Left_Lane_B_Lane, Model_C1)
      
#define     Get_Fus_Left_Lane_A_Lane_Lane_Model_C2                              CAN_TO_FUSING_MSG(LKA_Left_Lane_A_Lane, Model_C2)
      
 #define    Get_Fus_Left_Lane_A_Lane_Lane_Model_C3                               CAN_TO_FUSING_MSG(LKA_Left_Lane_A_Lane, Model_C3)
      
 #define    Get_Fus_Left_Lane_A_Lane_Quality                                               CAN_TO_FUSING_MSG(LKA_Left_Lane_A, Quality)
 
      
  #define   Get_Fus_Rt_Lane_A_Lane_Lane_Model_C0                                 CAN_TO_FUSING_MSG(LKA_Right_Lane_A_Lane, Model_C0)
      
 #define    Get_Fus_Rt_Lane_B_Lane_Model_C1                                         CAN_TO_FUSING_MSG(LKA_Right_Lane_B_Lane, Model_C1)
      
  #define   Get_Fus_Rt_Lane_A_Lane_Lane_Model_C2                               CAN_TO_FUSING_MSG(LKA_Right_Lane_A_Lane, Model_C2)
       
  #define   Get_Fus_Rt_Lane_A_Lane_Lane_Model_C3                                CAN_TO_FUSING_MSG(LKA_Right_Lane_A_Lane, Model_C3)
      
   #define Get_Fus_Rt_Lane_A_Lane_Quality                                                CAN_TO_FUSING_MSG(LKA_Right_Lane_A, Quality)
#endif



