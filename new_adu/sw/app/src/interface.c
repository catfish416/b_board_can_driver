#include "interface.h"
#include "inter_comm.h"

/*LF SRR*/
real_T LFSRR_Data[50] = {0.0};
uint8_T Side_LFSRR_flag = false;
real_T Side_LFSRR_stamp = 0.0;

/*LR SRR*/
real_T LRSRR_Data[50] = {0.0};
uint8_T Side_LRSRR_flag = false;
real_T Side_LRSRR_stamp = 0.0;

/*RF SRR*/
real_T RFSRR_Data[50] = {0.0};
uint8_T Side_RFSRR_flag = false;
real_T Side_RFSRR_stamp = 0.0;

/*RR SRR*/
real_T RRSRR_Data[50] = {0.0};
uint8_T Side_RRSRR_flag = false;
real_T Side_RRSRR_stamp = 0.0;


/*Side Fus*/
real_T Gobal_Side_Data[160]={0.0};
real_T Gobal_Side_stamp = {0.0};
uint8_T Gobal_Side_Flag = false;

/*Camera */
real_T Camera_Data[200] = {0.0};
uint8_T Gloabl_Camera_flag = false;
real_T gloab_Camera_stamp = 0.0;


/*ESR */
real_T ESR_Data[256] = {0.0};
uint8_T Gloabl_ESR_flag = false;
real_T gloab_ESR_stamp = 0.0;



/*EPM objgen*/
EPM_TO_CONTROL_TRIG  epm_data;

FUSING_OUTPUT_TRIG Fusing_output;   /*global fusing to map and pathplan*/
SIDEOCC SideOcc_output;                  /*Side occpy to pathplan*/               
MAPOUTPUT_TRIG  Map_output;       /*map to pathplan*/
double Ego_lane;  /*map to fusing and pathplan*/
 uint_T Get_ESR_RxTime(void)
{
   return (trggier[ESR_ID].time_stamp);
}
	
 uint8_T Get_ESR_Trigger(void)
{
   
    return (trggier[ESR_ID].flag);
}
 void ESR_Global_initialize(void)
{
   memset(ESR_Data,0,256*sizeof(double));
  Gloabl_ESR_flag = false;
  gloab_ESR_stamp = 0.0;
}
void Set_ESR_Obj_CoAl(uint16_T index,real_T value)	
{
    ESR_Data[index] = value;
}

void Set_Global_Trigger_ESR(uint8_T flag)
{
    Gloabl_ESR_flag = flag;
	
}

 void Set_Global_ESR_RxTime(real_T stamp)
{
     gloab_ESR_stamp = stamp;
}


/*Camera*/
 void Camera_Global_initialize(void)
{
   memset(Camera_Data,0,200*sizeof(double));
  Gloabl_Camera_flag = false;
  gloab_Camera_stamp = 0.0;
}
void Set_Camera_Obj(uint16_T index,real_T value)	
{
    Camera_Data[index] = value;
}

 void Set_Global_Trigger_Camera(uint8_T flag)
{
    Gloabl_Camera_flag = flag;
	
}

 void Set_Global_Camera_RxTime(real_T stamp)
{
  
     gloab_Camera_stamp = stamp;
	 
}


 uint_T Get_Camera_RxTime(void)
{
 
   return (trggier[CAMERA_ID].time_stamp);
}
	
 uint8_T Get_Camera_Trigger(void)
{
    
    return (trggier[CAMERA_ID].flag);
}
/*LF SRR*/
 uint_T Get_LFSRR_RxTime(void)
{
   return (trggier[SRR_LF_ID].time_stamp);
}
	
 uint8_T Get_LFSRR_Trigger(void)
{
   
    return (trggier[SRR_LF_ID].flag);
}
 void LFSRR_Side_initialize(void)
{
   memset(LFSRR_Data,0,50*sizeof(double));
  Side_LFSRR_flag = false;
  Side_LFSRR_stamp = 0.0;
}
 void Set_LF_SRR_Data(uint16_T index,real_T value)	
{
    LFSRR_Data[index] = value;
}

real_T Get_LFSRR_ObjData_Input(uint16_T index)
{

    return  LFSRR_Data[index];
}


void Set_Side_Trigger_LFSRR(uint8_T flag)
{
    Side_LFSRR_flag = flag;
	 
	
}
uint8_T Get_Side_Fus_LFSRR_Trigger(void)
{
     //printf("Side_LFSRR_flag = %d\n  ",Side_LFSRR_flag);
     return Side_LFSRR_flag;
}


 void Set_Side_LFSRR_RxTime(real_T stamp)
{
     Side_LFSRR_stamp = stamp;
}

real_T Get_LFSRR_RxTime_Local(void)
{

    return Side_LFSRR_stamp;
}




/*LR SRR*/

 uint_T Get_LRSRR_RxTime(void)
{
   return (trggier[SRR_LR_ID].time_stamp);
}
	
 uint8_T Get_LRSRR_Trigger(void)
{
   
    return (trggier[SRR_LR_ID].flag);
}
void LRSRR_Side_initialize(void)
{
   memset(LRSRR_Data,0,50*sizeof(double));
  Side_LRSRR_flag = false;
  Side_LRSRR_stamp = 0.0;
}
 void Set_LR_SRR_Data(uint16_T index,real_T value)	
{
    LRSRR_Data[index] = value;
	
}

real_T Get_LRSRR_ObjData_Input(uint16_T index)
{
    /* printf("%8lf  ",LRSRR_Data[index]);
	 if((index+1)%10 ==0)
	 	printf("\n");*/
    return  LRSRR_Data[index];
}

void Set_Side_Trigger_LRSRR(uint8_T flag)
{
    Side_LRSRR_flag = flag;
	
}
uint8_T Get_Side_Fus_LRSRR_Trigger(void)
{
 //   printf("Side_LRSRR_flag = %d\n  ",Side_LRSRR_flag);
     return Side_LRSRR_flag;
    
}

 void Set_Side_LRSRR_RxTime(real_T stamp)
{
     Side_LRSRR_stamp = stamp;
	//  printf("Side_LRSRR_stamp = %8lf\n  ",Side_LRSRR_stamp);
}

 real_T Get_LRSRR_RxTime_Local(void)
 {
    
     return Side_LRSRR_stamp;
 }



/*RF SRR*/
 uint_T Get_RFSRR_RxTime(void)
{
   return (trggier[SRR_RF_ID].time_stamp);
}
	
uint8_T Get_RFSRR_Trigger(void)
{
   
    return (trggier[SRR_RF_ID].flag);
}
void RFSRR_Side_initialize(void)
{
   memset(RFSRR_Data,0,50*sizeof(double));
  Side_RFSRR_flag = false;
  Side_RFSRR_stamp = 0.0;
}
void Set_RF_SRR_Data(uint16_T index,real_T value)	
{
    RFSRR_Data[index] = value;
}
real_T Get_RFSRR_ObjData_Input(uint16_T index)
{
    /* printf("%8lf  ",RFSRR_Data[index]);
	 if((index+1)%10 ==0)
	 	printf("\n");*/
    return  RFSRR_Data[index];
}

 void Set_Side_Trigger_RFSRR(uint8_T flag)
{
    Side_RFSRR_flag = flag;
	
}
uint8_T Get_Side_Fus_RFSRR_Trigger(void)
{
      // printf("Side_RFSRR_flag = %d\n  ",Side_RFSRR_flag);
     return Side_RFSRR_flag;
}

void Set_Side_RFSRR_RxTime(real_T stamp)
{
    
     Side_RFSRR_stamp = stamp;
    // printf("Side_RFSRR_stamp = %8lf\n  ",Side_RFSRR_stamp);
}

 real_T Get_RFSRR_RxTime_Local(void)
 {
     return Side_RFSRR_stamp;
 }



/*RR  SRR*/
uint_T Get_RRSRR_RxTime(void)
{
   return (trggier[SRR_RR_ID].time_stamp);
}
	
 uint8_T Get_RRSRR_Trigger(void)
{
   
    return (trggier[SRR_RR_ID].flag);
}
 void RRSRR_Side_initialize(void)
{
   memset(RRSRR_Data,0.0,50*sizeof(double));
  Side_RRSRR_flag = false;
  Side_RRSRR_stamp = 0.0;
}
 void Set_RR_SRR_Data(uint16_T index,real_T value)	
{
   
    RRSRR_Data[index] = value;
}
real_T Get_RRSRR_ObjData_Input(uint16_T index)
{
   /*  printf("%8lf  ",RRSRR_Data[index]);
	 if((index+1)%10 ==0)
	 	printf("\n");*/
    return  RRSRR_Data[index];
}

 void Set_Side_Trigger_RRSRR(uint8_T flag)
{
    Side_RRSRR_flag = flag;
	
}
uint8_T Get_Side_Fus_RRSRR_Trigger(void)
{  
    //printf("Side_RRSRR_flag = %d\n",Side_RRSRR_flag);
     return Side_RRSRR_flag;
}

 void Set_Side_RRSRR_RxTime(real_T stamp)
{
     Side_RRSRR_stamp = stamp;
}

 real_T Get_RRSRR_RxTime_Local(void)
 {
     return Side_RRSRR_stamp;
 }

 /*side Fus*/                                           
   void Gobal_Side_initialize(void)
{
   memset(Gobal_Side_Data,0,160*sizeof(double));
  Gobal_Side_Flag = false;
  Gobal_Side_stamp = 0.0;
}                                      
                                                
void Set_SideFus_Data( uint16_T index , real_T value)
 {
     
      Gobal_Side_Data[index] = value;
	/*printf("%8lf ",Gobal_Side_Data[index]);
	if((index+1)%20 == 0)
	{
	   printf("\n");
	}*/
 }
   
 void  Set_SideFus_Time(real_T stamp)
   {
  
       Gobal_Side_stamp = stamp;
	  //   printf("Gobal_Side_stamp = %8lf\n ",Gobal_Side_stamp);
   }
   
 void  Set_Global_Trigger_SideFus(uint8_T flag)
 {
    
   	Gobal_Side_Flag = flag;
	// printf("Gobal_Side_Flag = %8lf\n ",Gobal_Side_Flag);
 }



/*global fusing*/

void Glbal_Data_initialize (void)
{
  uint16_T i;
  // memset(Gobal_Side_Data,0,160);
   Gobal_Side_Flag= false;
   Gobal_Side_stamp= 0.0;
   for(i=0;i<3302;i++)
   {
      Fusing_output.FusingObj[i] = 1.11;
   	}
   
      Fusing_output.TagetNum = 0;
   	
}

real_T Get_SRR_ObjData_Input(uint16_T index)
{
    return Gobal_Side_Data[index];
}

 real_T Get_ESR_ObjData_Input(uint16_T index)
{
 
	return ESR_Data[index];
} 


real_T Get_Camera_ObjData_Input(uint16_T index)
{
    return Camera_Data[index];
}

 void Set_SRR_Rx_Time_Local(real_T stamp)
 {
     Gobal_Side_stamp = stamp;
 }

 real_T Get_SRR_Rx_Time_Local(void)
{
     return Gobal_Side_stamp;
}

 real_T Get_ESR_RxTime_Local(void)
{
     return gloab_ESR_stamp;
}
real_T Get_Camera_RxTime_Local(void)
{
     return gloab_Camera_stamp;
}
 uint8_T Get_Global_Fus_Camera_Trigger(void)
{
    return Gloabl_ESR_flag;
}

 uint8_T Get_Global_Fus_ESR_Trigger(void)
{
    return Gloabl_Camera_flag;
}
void Set_Global_Fus_SRR_Trigger(uint8_T flag)
{
   Gobal_Side_Flag= flag;
}

 uint8_T Get_Global_Fus_SRR_Trigger(void)
{
    return Gobal_Side_Flag;
}

void Clear_Global_Fus_Con(void)
{
   Gobal_Side_stamp = 0;
   gloab_ESR_stamp = 0;
   gloab_Camera_stamp = 0;

   Gobal_Side_Flag= false;
   Gloabl_ESR_flag = false;
   Gloabl_Camera_flag = false;

   memset(Gobal_Side_Data,0,160* sizeof(real_T));
   memset(ESR_Data,0,256* sizeof(real_T));
   memset(Camera_Data,0,200* sizeof(real_T));
}


  void Set_GlobalFusOut(uint16_T index,real_T value)
 {

      
     Fusing_output.FusingObj[index] = value;
	
	 	
	   	
 }

 
   void Set_Total_FusTargetNum(uint16_T num)
  {
      Fusing_output.TagetNum = num;
      //printf("TagetNum = %d\n",num);
  }




  /*Side occupy*/
 real_T  Get_Global_FusObj( uint16_T index )
  {
       return  Fusing_output.FusingObj[index];
     
  }
                                              
uint16_T Get_Global_FusObj_Num()
{
    return Fusing_output.TagetNum;
   
}


 void  Set_Side_Occ_Flg(uint16_T index,real_T value)
 {
       SideOcc_output.SideObj[index] = value;
 }
     
  void  Set_Side_Index(uint16_T index,real_T value)
  {
       SideOcc_output.area_array[index] = value;
  }
                                                   
double Get_GlobalFus_Ego_Lane_Position(void)
{
   return  Ego_lane;
}
double Get_Ego_Lane_Position(void)
{
    return Ego_lane;
}


/*pathpal interface*/



/*EPM obj*/
 void Set_ObsCutInStatus(uint8_T  Value)
{
     epm_data.ObsCutInStatus = Value;
}
void Set_ObsCutInVelX(int16_T  Value)
{
     epm_data.ObsCutInVelX = Value;
}

void Set_ObsCutInPosY(int16_T  Value)
{
     epm_data.ObsCutInPosY = Value;
}

void Set_ObsCutInPosX(uint16_T  Value)
{
     epm_data.ObsCutInPosX = Value;
}


void Set_ObsCutInID(uint8_T  Value)
{
    epm_data.ObsCutInID = Value;
}

void Set_ObsCutInLane(uint8_T  Value)
{
     epm_data.ObsCutInLane = Value;
}

 void Set_ObsCutInCutIn(uint8_T  Value)
{
     epm_data.ObsCutInCutIn = Value;
}

void Set_ObsCutInAngle(int16_T  Value)
{
     epm_data.ObsCutInAngle = Value;
}

 void Set_ObsCutInAccelX(int16_T  Value)
{
     epm_data.ObsCutInAccelX = Value;
}


void Set_ObsCutInFlg(uint8_T  Value)
{
    epm_data.ObsCutInFlg = Value;
}


 void Set_ObsCutInTTC(uint8_T  Value)
{
     epm_data.ObsCutInTTC = Value;
}

void Set_ObsCutInWidth(uint8_T  Value)
{
     epm_data.ObsCutInWidth = Value;
}

 void Set_ObsCutInCutInTime(uint8_T  Value)
{
     epm_data.ObsCutInCutInTime = Value;
}

 void Set_BusOff(uint8_T  Value)
{
     epm_data.BusOff = Value;
}

void Set_ObsMVelX(int16_T  Value)
{
     epm_data.ObsMVelX = Value;
}

 void Set_ObsMPosX(uint16_T  Value)
{
     epm_data.ObsMPosX = Value;
}

 void Set_ObsMID(uint8_T  Value)
{
     epm_data.ObsMID = Value;
}

 void Set_ObsMCutIn(uint8_T  Value)
{
     epm_data.ObsMCutIn = Value;
}

 void Set_ObsMPosY(int16_T Value)
{
     epm_data.ObsMPosY = Value;
}

 void Set_ObsMFlg(uint8_T  Value)
{
     epm_data.ObsMFlg = Value;
}

void Set_ObsMLane(uint8_T  Value)
{
     epm_data.ObsMLane = Value;
}

 void Set_ObsMAngle(int16_T  Value)
{
     epm_data.ObsMAngle = Value;
}

 void Set_ObsMITTC(uint8_T  Value)
{
     epm_data.ObsMITTC = Value;
}

 void Set_ObsMWidth(uint8_T  Value)
{
     epm_data.ObsMWidth = Value;
}

 void Set_LeftCloseRangeCutIn(uint8_T  Value)
{
     epm_data.LeftCloseRangeCutIn = Value;
}

 void Set_RightCloseRangeCutIn(uint8_T  Value)
{
     epm_data.RightCloseRangeCutIn = Value;
}

void Set_ObsMAccelX (int16_T  Value)
{
   epm_data.ObsMAccelX = Value;
}

 void Set_ObsMStatus(uint8_T  Value)
{
     epm_data.ObsMStatus = Value;
}

void Set_SEN_LKA_Left_Lane_Quality(uint8_T  Value)
{
       epm_data.Left_Lane_Quality = Value;
}
void Set_SEN_LKA_Left_Lane_C0_PosRght(int16_T  Value)     
{
     epm_data.Left_Lane_C0_PosRght   = Value;
}
void Set_SEN_LKA_Left_Lane_C2_PosTRght(int16_T  Value)  
{
       epm_data.Left_Lane_C2_PosTRght = Value;
}
void Set_SEN_LKA_Left_Lane_C3_PosTRght(int16_T  Value)
	{
       epm_data.Left_Lane_C3_PosTRght = Value;
}
void Set_SEN_LKA_Left_Lane_C1_PosTLeft (int16_T  Value) 
	{
       epm_data.Left_Lane_C1_PosTLeft = Value;
}
void Set_SEN_LKA_Left_Lane_End (uint16_T  Value)    
	{
       epm_data.Left_Lane_End = Value;
}

void Set_SEN_LKA_Right_Lane_Quality (uint8_T  Value)   
	{
       epm_data.Right_Lane_Quality  = Value;
}
void Set_SEN_LKA_Right_Lane_C0_PosRght  (int16_T  Value)  
	{
       epm_data.Right_Lane_C0_PosRght = Value;
}
void Set_SEN_LKA_Right_Lane_C2_PosTRght(int16_T  Value) 
	{
       epm_data.Right_Lane_C2_PosTRght = Value;
}
void Set_SEN_LKA_Right_Lane_C3_PosTRght  (int16_T  Value)   
{
       epm_data.Right_Lane_C3_PosTRght = Value;
}
void Set_SEN_LKA_Right_Lane_C1_PosTLeft  (int16_T  Value)      
	{
       epm_data.Right_Lane_C1_PosTLeft  = Value;
}
void Set_SEN_LKA_Right_Lane_End(uint16_T  Value)   
	{
       epm_data.Right_Lane_End = Value;
}

void Set_SEN_LKA_Next_Left_Lane_Quality (uint8_T  Value)  
	{
       epm_data.Left_Lane_Quality = Value;
}
void Set_SEN_LKA_Next_Left_Lane_C0_PosRght (int16_T  Value)   
	{
       epm_data.Next_Left_Lane_C0_PosRght = Value;
}
void Set_SEN_LKA_Next_Left_Lane_C2_PosTRght(int16_T  Value)    
{
       epm_data.Left_Lane_C2_PosTRght = Value;
}
void Set_SEN_LKA_Next_Left_Lane_C3_PosTRght (int16_T  Value) 
{
       epm_data.Left_Lane_C3_PosTRght = Value;
}
void Set_SEN_LKA_Next_Left_Lane_C1_PosTLeft   (int16_T  Value)  
{
       epm_data.Left_Lane_C1_PosTLeft = Value;
}
void Set_SEN_LKA_Left_Lane_TLC(uint8_T  Value)    
	{
       epm_data.Left_Lane_TLC = Value;
}

void Set_SEN_LKA_Next_Right_Lane_Quality  (uint8_T  Value) 
	{
       epm_data.Next_Right_Lane_Quality = Value;
}
void Set_SEN_LKA_Next_Right_Lane_C0_PosRght(int16_T  Value)  
	{
       epm_data.Next_Right_Lane_C0_PosRght = Value;
}
void Set_SEN_LKA_Next_Right_Lane_C2_PosTRght (int16_T  Value) 
	{
       epm_data.Next_Right_Lane_C2_PosTRght = Value;
}
void Set_SEN_LKA_Next_Right_Lane_C3_PosTRght  (int16_T  Value)   
	{
       epm_data.Next_Right_Lane_C3_PosTRght  = Value;
}
void Set_SEN_LKA_Next_Right_Lane_C1_PosTLeft   (int16_T  Value)    
	{
       epm_data.Next_Right_Lane_C1_PosTLeft = Value;
}
void Set_SEN_LKA_Right_Lane_TLC (uint8_T  Value)  
	{
       epm_data.Right_Lane_TLC = Value;
}

