#include <stdio.h>
#include <string.h>
#include "M2S_CAN4.h"
uint32_t Analy_Can4(uint8 *Can_Data)
{
	uint32_t Can_ID=0;
    uint8_t  Data_len=0;
	uint8_t Temp_Buffer[8]={0};
	uint8_t i;
	Data_len = Can_Data[0] & 0x0F;
	Can_ID=(Can_Data[1]<<24)|(Can_Data[2]<<16)|(Can_Data[3]<<8)|(Can_Data[4]);
	for(i=0;i< Data_len;i++)
	{
		Temp_Buffer[i]=Can_Data[i+5];
		
	}
		switch(Can_ID)
		{
			case 784:
   memcpy( Body_Info_FOB_LF_u.Body_Info_FOB_LF_Buffer,Temp_Buffer,6);
   break;
case 776:
   memcpy( F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Buffer,Temp_Buffer,7);
   break;
case 161:
   memcpy( F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Buffer,Temp_Buffer,7);
  
   break;
case 774:
   memcpy( F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Buffer,Temp_Buffer,8);
   break;
case 1184:
   memcpy( R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Buffer,Temp_Buffer,8);
   break;
case 1185:
   memcpy( R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Buffer,Temp_Buffer,8);
   break;
case 1186:
   memcpy( R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Buffer,Temp_Buffer,8);
   break;
case 1187:
   memcpy( R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Buffer,Temp_Buffer,8);
   break;
case 1188:
   memcpy( R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Buffer,Temp_Buffer,8);
   break;
case 1189:
   memcpy( R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Buffer,Temp_Buffer,8);
   break;
case 1190:
   memcpy( R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Buffer,Temp_Buffer,8);
   break;
case 1191:
   memcpy( R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Buffer,Temp_Buffer,8);
   break;
case 1192:
   memcpy( R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Buffer,Temp_Buffer,8);
   break;
case 1193:
   memcpy( R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Buffer,Temp_Buffer,8);
   break;
case 1194:
   memcpy( R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Buffer,Temp_Buffer,8);
   break;

default:
	//printf("CAN4 error\n");
	   break;
		}
	return Can_ID;
}

