#include <stdio.h>
#include <string.h>
#include "M2S_CAN3.h"
uint32_t Analy_Can3(uint8 *Can_Data)
{
	uint32_t Can_ID=0;
    uint8_t  Data_len=0;
	uint8_t Temp_Buffer[8]={0};
	uint8_t i;
	//uint16_t temp;
	Data_len = Can_Data[0] & 0x0F;
	Can_ID=(Can_Data[1]<<24)|(Can_Data[2]<<16)|(Can_Data[3]<<8)|(Can_Data[4]);
	for(i=0;i< Data_len;i++)
	{
		Temp_Buffer[i]=Can_Data[i+5];
		
	}
		switch(Can_ID)
		{
			
case 161:
   memcpy( F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Buffer,Temp_Buffer,7);
   break;
case 774:
   memcpy( F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Buffer,Temp_Buffer,8);
   break;
case 776:
   memcpy( F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Buffer,Temp_Buffer,7);
   break;
case 784:
   memcpy( Body_Info_FOB_RF_u.Body_Info_FOB_RF_Buffer,Temp_Buffer,6);
   break;
case 1184:
   memcpy( R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Buffer,Temp_Buffer,8);
   break;
case 1185:
   memcpy( R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Buffer,Temp_Buffer,8);
   break;
case 1186:
   memcpy( R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Buffer,Temp_Buffer,8);
   break;
case 1187:
   memcpy( R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Buffer,Temp_Buffer,8);
   break;
case 1188:
   memcpy( R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Buffer,Temp_Buffer,8);
   break;
case 1189:
   memcpy( R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Buffer,Temp_Buffer,8);
   break;
case 1190:
   memcpy( R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Buffer,Temp_Buffer,8);
   break;
case 1191:
   memcpy( R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Buffer,Temp_Buffer,8);
   break;
case 1192:
   memcpy( R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Buffer,Temp_Buffer,8);
   break;
case 1193:
   memcpy( R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Buffer,Temp_Buffer,8);
   break;
case 1194:
   memcpy( R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Buffer,Temp_Buffer,8);
   break;
case 1360:
   memcpy( Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Buffer,Temp_Buffer,7);
   break;
case 1621:
   memcpy( ID_TFL0_u.ID_TFL0_Buffer,Temp_Buffer,8);
   break;
case 1622:
   memcpy( ID_TFL1_u.ID_TFL1_Buffer,Temp_Buffer,8);
   break;
case 1623:
   memcpy( ID_TFL2_u.ID_TFL2_Buffer,Temp_Buffer,8);
   break;
case 1624:
   memcpy( ID_TFL3_u.ID_TFL3_Buffer,Temp_Buffer,8);
   break;
case 1625:
   memcpy( ID_TSR0_u.ID_TSR0_Buffer,Temp_Buffer,8);
   break;
case 1626:
   memcpy( ID_TSR1_u.ID_TSR1_Buffer,Temp_Buffer,8);
   break;
case 1627:
   memcpy( ID_TSR2_u.ID_TSR2_Buffer,Temp_Buffer,8);
   break;
case 1628:
   memcpy( ID_TSR3_u.ID_TSR3_Buffer,Temp_Buffer,8);
   break;
case 1810:
   memcpy( TFL_Header_u.TFL_Header_Buffer,Temp_Buffer,8);
   break;
case 1811:
   memcpy( TFL_Message0_u.TFL_Message0_Buffer,Temp_Buffer,8);
   break;
case 1812:
   memcpy( TFL_Message1_u.TFL_Message1_Buffer,Temp_Buffer,8);
   break;
case 1813:
   memcpy( TFL_Message2_u.TFL_Message2_Buffer,Temp_Buffer,8);
   break;
case 1814:
   memcpy( TFL_Message3_u.TFL_Message3_Buffer,Temp_Buffer,8);
   break;
case 1815:
   memcpy( TFL_Message4_u.TFL_Message4_Buffer,Temp_Buffer,8);
   break;
case 1816:
   memcpy( TFL_Message5_u.TFL_Message5_Buffer,Temp_Buffer,8);
   break;
case 1817:
   memcpy( TFL_Message6_u.TFL_Message6_Buffer,Temp_Buffer,8);
   break;
case 1818:
   memcpy( TFL_Message7_u.TFL_Message7_Buffer,Temp_Buffer,8);
   break;
case 1824:
   memcpy( TSR0_u.TSR0_Buffer,Temp_Buffer,8);
   break;
case 1825:
   memcpy( TSR1_u.TSR1_Buffer,Temp_Buffer,8);
   break;
case 1826:
   memcpy( TSR2_u.TSR2_Buffer,Temp_Buffer,8);
   break;
case 1827:
   memcpy( TSR3_u.TSR3_Buffer,Temp_Buffer,8);
   break;
case 1828:
   memcpy( TSR4_u.TSR4_Buffer,Temp_Buffer,8);
   break;
case 1829:
   memcpy( TSR5_u.TSR5_Buffer,Temp_Buffer,8);
   break;
case 1830:
   memcpy( TSR6_u.TSR6_Buffer,Temp_Buffer,8);
   break;
case 1831:
   memcpy( Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Buffer,Temp_Buffer,8);
   break;
case 1847:
   memcpy( ObstacleStatusB_u.ObstacleStatusB_Buffer,Temp_Buffer,8);
   break;
case 1848:
   memcpy( ObstacleStatusA_u.ObstacleStatusA_Buffer,Temp_Buffer,7);
   break;
case 1849:
   memcpy( ObstacleDataA1_u.ObstacleDataA1_Buffer,Temp_Buffer,8);
   break;
case 1850:
   memcpy( ObstacleDataB1_u.ObstacleDataB1_Buffer,Temp_Buffer,8);
   break;
case 1851:
   memcpy( ObstacleDataC1_u.ObstacleDataC1_Buffer,Temp_Buffer,8);
   break;
case 1852:
   memcpy( ObstacleDataA2_u.ObstacleDataA2_Buffer,Temp_Buffer,8);
   break;
case 1853:
   memcpy( ObstacleDataB2_u.ObstacleDataB2_Buffer,Temp_Buffer,8);
   break;
case 1854:
   memcpy( ObstacleDataC2_u.ObstacleDataC2_Buffer,Temp_Buffer,8);
   break;
case 1855:
   memcpy( ObstacleDataA3_u.ObstacleDataA3_Buffer,Temp_Buffer,8);
   break;
case 1856:
   memcpy( ObstacleDataB3_u.ObstacleDataB3_Buffer,Temp_Buffer,8);
   break;
case 1857:
   memcpy( ObstacleDataC3_u.ObstacleDataC3_Buffer,Temp_Buffer,8);
   break;
case 1858:
   memcpy( ObstacleDataA4_u.ObstacleDataA4_Buffer,Temp_Buffer,8);
   break;
case 1859:
   memcpy( ObstacleDataB4_u.ObstacleDataB4_Buffer,Temp_Buffer,8);
   break;
case 1860:
   memcpy( ObstacleDataC4_u.ObstacleDataC4_Buffer,Temp_Buffer,8);
   break;
case 1861:
   memcpy( ObstacleDataA5_u.ObstacleDataA5_Buffer,Temp_Buffer,8);
   break;
case 1862:
   memcpy( ObstacleDataB5_u.ObstacleDataB5_Buffer,Temp_Buffer,8);
   break;
case 1863:
   memcpy( ObstacleDataC5_u.ObstacleDataC5_Buffer,Temp_Buffer,8);
   break;
case 1864:
   memcpy( ObstacleDataA6_u.ObstacleDataA6_Buffer,Temp_Buffer,8);
   break;
case 1865:
   memcpy( ObstacleDataB6_u.ObstacleDataB6_Buffer,Temp_Buffer,8);
   break;
case 1866:
   memcpy( ObstacleDataC6_u.ObstacleDataC6_Buffer,Temp_Buffer,8);
   break;
case 1867:
   memcpy( ObstacleDataA7_u.ObstacleDataA7_Buffer,Temp_Buffer,8);
   break;
case 1868:
   memcpy( ObstacleDataB7_u.ObstacleDataB7_Buffer,Temp_Buffer,8);
   
   break;
case 1869:
   memcpy( ObstacleDataC7_u.ObstacleDataC7_Buffer,Temp_Buffer,8);
   break;
case 1870:
   memcpy( ObstacleDataA8_u.ObstacleDataA8_Buffer,Temp_Buffer,8);
   break;
case 1871:
   memcpy( ObstacleDataB8_u.ObstacleDataB8_Buffer,Temp_Buffer,8);
   break;
case 1872:
   memcpy( ObstacleDataC8_u.ObstacleDataC8_Buffer,Temp_Buffer,8);
   break;
case 1873:
   memcpy( ObstacleDataA9_u.ObstacleDataA9_Buffer,Temp_Buffer,8);
   break;
case 1874:
   memcpy( ObstacleDataB9_u.ObstacleDataB9_Buffer,Temp_Buffer,8);
   break;
case 1875:
   memcpy( ObstacleDataC9_u.ObstacleDataC9_Buffer,Temp_Buffer,8);
   break;
case 1876:
   memcpy( ObstacleDataA10_u.ObstacleDataA10_Buffer,Temp_Buffer,8);
   break;
case 1877:
   memcpy( ObstacleDataB10_u.ObstacleDataB10_Buffer,Temp_Buffer,8);
   break;
case 1878:
   memcpy( ObstacleDataC10_u.ObstacleDataC10_Buffer,Temp_Buffer,8);
   break;
case 1879:
   memcpy( ObstacleStatusC_u.ObstacleStatusC_Buffer,Temp_Buffer,8);
   break;
case 1899:
   memcpy( Road_Information_u.Road_Information_Buffer,Temp_Buffer,8);
   break;
case 1891:
   memcpy( LKA_Right_Lane_C_u.LKA_Right_Lane_C_Buffer,Temp_Buffer,8);
   break;
case 1890:
   memcpy( LKA_Left_Lane_C_u.LKA_Left_Lane_C_Buffer,Temp_Buffer,8);
   break;
case 1893:
   memcpy( Lane_Assignment_35m_u.Lane_Assignment_35m_Buffer,Temp_Buffer,8);
   break;
case 1892:
   memcpy( Lane_Assignment_0m_u.Lane_Assignment_0m_Buffer,Temp_Buffer,8);
   break;
case 1903:
   memcpy( Next_Right_Lane_B_u.Next_Right_Lane_B_Buffer,Temp_Buffer,5);
   break;
case 1901:
   memcpy( Next_Left_Lane_B_u.Next_Left_Lane_B_Buffer,Temp_Buffer,4);
   break;
case 1902:
   memcpy( Next_Right_Lane_A_u.Next_Right_Lane_A_Buffer,Temp_Buffer,8);
   break;
case 1900:
   memcpy( Next_Left_Lane_A_u.Next_Left_Lane_A_Buffer,Temp_Buffer,8);
   break;
case 1897:
   memcpy( LKA_Right_Lane_B_u.LKA_Right_Lane_B_Buffer,Temp_Buffer,7);
   break;
case 1896:
   memcpy( LKA_Right_Lane_A_u.LKA_Right_Lane_A_Buffer,Temp_Buffer,8);
   break;
case 1895:
   memcpy( LKA_Left_Lane_B_u.LKA_Left_Lane_B_Buffer,Temp_Buffer,7);
   break;
case 1894:
   memcpy( LKA_Left_Lane_A_u.LKA_Left_Lane_A_Buffer,Temp_Buffer,8);
   break;
    default:
		//printf("CAN3 error");
			break;
		}
	return Can_ID;
}



