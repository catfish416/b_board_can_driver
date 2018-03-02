#include <stdio.h>
#include <string.h>
#include "M2S_Map.h"
#include "CodeGen_LaneMarkMessage.h"
#include "CodeGen_LaneMessage.h"
#include "CodeGen_PositionMessage.h"
#include "CodeGen_ProfileLongMessage.h"
#include "CodeGen_ProfileShortMessage.h"
#include "CodeGen_RTKMessage.h"
#include "CodeGen_SegmentMessage.h"
#include "CodeGen_StubMessage.h"
#include "CodeGen_TrafficSignMessage.h"
#include "CodeGen_LanInfoSys.h"
#include "CodeGen_TrackProc.h"
/*add by wjr*/
RTK_TRIG  rtk;
MAP_TIMESTAMP timestamp;
uint32_t getStubTimeCnt(void)
{
     return timestamp.StubTimeCnt;
}
uint32_t getLaneMarkTimeCnt(void)
{
      return timestamp.LaneMarkTimeCnt;
}

uint32_t getLaneTimeCnt(void)  
{
    return timestamp.LaneTimeCnt;
}
uint32_t getPositionTimeCnt(void) 
{
     return timestamp.PositionTimeCnt;
}
uint32_t getProfileLongTimeCnt(void)  
{
     return timestamp.ProfileLongTimeCnt;
}
uint32_t getProfileShortCnt(void)
{
      return timestamp.ProfileShortCnt;
}
uint32_t getTrafficSignTimeCnt(void)  
{
    return timestamp.TrafficSignTimeCnt;
}


double getRTK_GPS_LATITUDE(void)
{
   return  rtk.ylat;
}
double getRTK_GPS_LONGITUDE(void)  
{
     return  rtk.ylon;
}
	
double getRTK_GPS_TS(void)   
{
     return  rtk.ytime_GPGLL;
}
double  getRTK_GPS_YAW(void) 
{
    return rtk.ycrouse_range;
}
double getClearAllFlag(void)   
{
     return ClearAllFalg;
}

double getX_UTM(void)
{
    return X_IN_UTM;
}
double getORIG_X_UTM(void)
{
     return Orig_X_UTM;
}
double getY_UTM(void) 
{
     return Y_IN_UTM;
}
double getORIG_Y_UTM(void)
{
     return Orig_Y_UTM;
}
double getHeadingAngle(void)
{
    return HeadingAngle;
}
 double getPositionMap_Index(void)
 {
     return  ValidPositionIndex;
 }
double getPositionMapInput(int32_t index)
{
       return PositionMap[index];
}

double getProfileLongMapInput(int32_t index)
{
    return ProfileLongMap[index];
}
 double getProfileShortMap1Input(int32_t index)
 {
     return ProfileShortMap1[index];
 }

double getSegmentMap(int32_t index)
{
   return SegmentMap[index];
}
double getLaneMap(int32_t index)
{
    return LaneMap[index];
}
double getEnd_Point(int32_t index)
{
    return End_Point[index];
}
double getEgoTrackPoint (int32_t index)
{
    return EgoTrackPoint[index];
}

double getVehicleState(int32_t index)
{
      return VehicleState[ index];
}
/*end  by wjr*/

uint32_t Analy_Map(uint8_t* Can_Data)
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
case 161:
   memcpy( F_Master_Time_Sync_u.F_Master_Time_Sync_Buffer,Temp_Buffer,6);
   break;
case 608:
   memcpy( PPS_ElevHdSpd_u.PPS_ElevHdSpd_Buffer,Temp_Buffer,8);
   break;
case 611:
   memcpy( PPS_SigAcqTime_u.PPS_SigAcqTime_Buffer,Temp_Buffer,6);
   break;
case 612:
   memcpy( PPS_Time_u.PPS_Time_Buffer,Temp_Buffer,8);
   break;
case 1540:
   memcpy( ADAS_Position_u.ADAS_Position_Buffer,Temp_Buffer,8);
   break;
case 1541:
   memcpy( ADAS_Segment_u.ADAS_Segment_Buffer,Temp_Buffer,8);
   break;
case 1542:
   memcpy( ADAS_Stub_u.ADAS_Stub_Buffer,Temp_Buffer,8);
     break;
case 1544:
   memcpy( ADAS_ProfileShort_u.ADAS_ProfileShort_Buffer,Temp_Buffer,8);
   break;
case 1543:
   memcpy( ADAS_ProfileLong_u.ADAS_ProfileLong_Buffer,Temp_Buffer,8);
   break;
case 1545:
   memcpy( ADAS_Metadata_u.ADAS_Metadata_Buffer,Temp_Buffer,8);
   break;
case 1546:
   memcpy( ADAS_Protection_u.ADAS_Protection_Buffer,Temp_Buffer,4);
   break;
case 354:
   memcpy( Map_Retrans_Request_u.Map_Retrans_Request_Buffer,Temp_Buffer,1);
   break;
case 610:
   memcpy( PPS_PosLong_u.PPS_PosLong_Buffer,Temp_Buffer,6);
   break;
case 609:
   memcpy( PPS_PosLat_u.PPS_PosLat_Buffer,Temp_Buffer,6);
   break;
case 1548:
   memcpy( ADAS_Lane_u.ADAS_Lane_Buffer,Temp_Buffer,8);
   break;
case 1549:
   memcpy( ADAS_TrafficSign_u.ADAS_TrafficSign_Buffer,Temp_Buffer,8);
   break;
case 1550:
   memcpy( ADAS_LaneMark_u.ADAS_LaneMark_Buffer,Temp_Buffer,8);
   break;
case 1001:
   memcpy( PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Vehicle_Speed_and_Distance_Buffer,Temp_Buffer,6);
   break;
case 501:
   memcpy( PPEI_Trans_General_Status_2_umap.PPEI_Trans_General_Status_2_Buffer,Temp_Buffer,7);
   break;
case 228:
   memcpy( PPS_Navigation_Status_u.PPS_Navigation_Status_Buffer,Temp_Buffer,1);
   break;
case 234:
   memcpy( Peripheral_Indication_1_u.Peripheral_Indication_1_Buffer,Temp_Buffer,8);
   break;
case 235:
   memcpy( Peripheral_Indication_2_u.Peripheral_Indication_2_Buffer,Temp_Buffer,8);
   break;
case 672:
   memcpy( Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Buffer,Temp_Buffer,6);
   break;
case 673:
   memcpy( APA_Indication_u.APA_Indication_Buffer,Temp_Buffer,1);
   break;
case 674:
   memcpy( APA_Control_u.APA_Control_Buffer,Temp_Buffer,1);
   break;

   break;
    default:
	break;
		}
return Can_ID;
}


