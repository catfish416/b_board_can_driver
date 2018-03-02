			 
#include "RTK_M2S.h"
#include "stdio.h"
#include <math.h>


void Analys_RTK( char *RTK_Data,unsigned char RTK_length)
{


//printf("rtk length = %d\n",RTK_length);

char RTK_GPHPR_Data[120]={0};
char RTK_GPGGA_Data[120]={0};

char Index_T=0;
char T_end=0;

char Index_G=0;
char G_end=0;
char GPG_flag=0;



char temp_time_GPHPR[9]={48,48,48,48,48,48,48,48,48};
char temp_crouse_range[7]={48,48,48,48,48,48,48};
char temp_pitch_angle[6]={48,48,48,48,48,48};
char temp_roll_range[3]={48,48,48};

char len_crouse_range=0;
char len_pitch_angle=0;
char len_time_GPHPR=0;
char len_roll_range=0;

double ycrouse_range_temp=0;
double ypitch_angle_temp=0;


char i_num_GPHPR=0;
char beginGPHPR=10;
char m_end=0;

char temp_lat[13]={48,48,48,48,48,48,48,48,48,48,48,48,48};
char temp_lon[14]={48,48,48,48,48,48,48,48,48,48,48,48,48,48};
char temp_time_GPGGA[9]={48,48,48,48,48,48,48,48,48};
char temp_GPS_flag=48;
char temp_star_num[2]={48,48};
char temp_delay_time[4]={48,48,48,48};


char len_lat=0;
char len_lon=0;
char len_time_GPGGA=0;
char len_star_num=0;
char len_delay_time=0;

double ystar_num_temp=0;
double ydelay_time_temp=0;

char i_num_GPGGA=0;
char beginGPGGA=7;
char n_end=0;

int Tol_num,temp_T,len_GPHPR,temp_G,len_GPGGA,m,i,j,n;


for(Tol_num=0;Tol_num<RTK_length;Tol_num++)
{
	//printf("%d\n",RTK_Data[Tol_num]);
	if(RTK_Data[Tol_num]==84)
	{
		//printf("%d\n",1);	
		Index_T=Tol_num;
		for(temp_T=Index_T;temp_T<RTK_length;temp_T++)
		{
			if(RTK_Data[temp_T]==10)
			{
				T_end=temp_T;
				break;
			}
		}
		for(len_GPHPR=0;len_GPHPR<T_end-Index_T+5;len_GPHPR++)
		{
			RTK_GPHPR_Data[len_GPHPR]=RTK_Data[Index_T-4+len_GPHPR];

		}
	}


	if(RTK_Data[Tol_num]==71&&GPG_flag==0)
	{
		//printf("%d\n",2);
		Index_G=Tol_num;
		for(temp_G=Index_G;temp_G<RTK_length;temp_G++)
		{
			if(RTK_Data[temp_G]==10)
			{
				G_end=temp_G;
				break;
			}
		}
		for(len_GPGGA=0;len_GPGGA<G_end-Index_G+2;len_GPGGA++)
		{
			RTK_GPGGA_Data[len_GPGGA]=RTK_Data[Index_G-1+len_GPGGA];
			//printf("%d\n",RTK_GPGLL_Data[len_GPGLL]);

		}
		GPG_flag=1;
	}

}




if(RTK_GPHPR_Data[0]==36&&RTK_GPHPR_Data[1]==80&&RTK_GPHPR_Data[2]==83&&RTK_GPHPR_Data[3]==65&&RTK_GPHPR_Data[4]==84&&RTK_GPHPR_Data[5]==44)
{
    for(m=0;m<120;m++)
    {
        if(RTK_GPHPR_Data[m]==10)
	{
            m_end=m;
            break;
        }
    }
    for(i=10;i<m_end;i++)
    {
        if(RTK_GPHPR_Data[i]==44)
		{
            i_num_GPHPR=i_num_GPHPR+1;
            if(i_num_GPHPR==1)
			{
                if(i!=beginGPHPR)
				{
                    len_time_GPHPR=i-beginGPHPR;
                    for(j=0;j<len_time_GPHPR;j++)
					{
                        temp_time_GPHPR[j]=RTK_GPHPR_Data[beginGPHPR+j];
						
					}
                    beginGPHPR=i+1;
				}
			}
            if(i_num_GPHPR==2)
			{
                if(i!=beginGPHPR)
				{
                    len_crouse_range=i-beginGPHPR;
                    for(j=0;j<len_crouse_range;j++)
					{
                        temp_crouse_range[j]=RTK_GPHPR_Data[beginGPHPR+j];
						
					}
                    beginGPHPR=i+1;
				}
                else
				{
                    beginGPHPR=i+1;
				}
			}
            if(i_num_GPHPR==3)
			{
                if(i!=beginGPHPR)
				{
                    len_pitch_angle=i-beginGPHPR;
                    if(len_pitch_angle<7)
					{
                        for(j=0;j<len_pitch_angle;j++)
						{
                            temp_pitch_angle[j]=RTK_GPHPR_Data[beginGPHPR+j];
							
						}
                    beginGPHPR=i+1;
					}
				}
                else
				{
                    beginGPHPR=i+1;
				}
			}
            if(i_num_GPHPR==4)
			{
                if(i!=beginGPHPR)
				{
                    len_roll_range=i-beginGPHPR;
                    for(j=0;j<len_roll_range;j++)
					{
                        temp_roll_range[j]=RTK_GPHPR_Data[beginGPHPR+j];
						
					}
                    beginGPHPR=i+1;
				}
                else
				{
                    beginGPHPR=i+1;
				}
			}
		}
    }
    ytime_GPHPR=(temp_time_GPHPR[0]-48)*100000+(temp_time_GPHPR[1]-48)*10000+(temp_time_GPHPR[2]-48)*1000+\
        (temp_time_GPHPR[3]-48)*100+(temp_time_GPHPR[4]-48)*10+(temp_time_GPHPR[5]-48)+\
        (temp_time_GPHPR[7]-48)*0.1+(temp_time_GPHPR[8]-48)*0.01;
   // printf("ytime_GPHPR = %.8f",ytime_GPHPR);
    if(len_crouse_range==7)
	{
        ycrouse_range_temp=(temp_crouse_range[0]-48)*100+(temp_crouse_range[1]-48)*10+(temp_crouse_range[2]-48)+\
        (temp_crouse_range[4]-48)*0.1+(temp_crouse_range[5]-48)*0.01+(temp_crouse_range[6]-48)*0.001;
	}
    if(len_crouse_range==6)
	{
        ycrouse_range_temp=(temp_crouse_range[0]-48)*10+(temp_crouse_range[1]-48)+(temp_crouse_range[3]-48)*0.1+\
        (temp_crouse_range[4]-48)*0.01+(temp_crouse_range[5]-48)*0.001;
	}
    if(len_crouse_range==5)
	{
        ycrouse_range_temp=(temp_crouse_range[0]-48)+(temp_crouse_range[2]-48)*0.1+(temp_crouse_range[3]-48)*0.01+(temp_crouse_range[4]-48)*0.001;
	}
    ycrouse_range=ycrouse_range_temp;
    if(len_pitch_angle==6)
	{
        ypitch_angle_temp=(0-(temp_pitch_angle[1]-48))+(0-(temp_pitch_angle[3]-48)*0.1)+(0-(temp_pitch_angle[4]-48)*0.01)+(0-(temp_pitch_angle[5]-48)*0.001);
	}
    if(len_pitch_angle==5)
	{
        ypitch_angle_temp=(temp_pitch_angle[0]-48)+(temp_pitch_angle[2]-48)*0.1+(temp_pitch_angle[3]-48)*0.01+(temp_pitch_angle[4]-48)*0.001;
	}
    ypitch_angle=ypitch_angle_temp;
    yroll_range=(temp_roll_range[0]-48)+(temp_roll_range[2]-48)*0.1;  
	//printf("ylat = %.8f,ylon= %.8f,ycrouse_range=%.8f,ytime_GPGLL=%.8f\n",ylat, ylon,ycrouse_range, ytime_GPGLL);
}

else
{
    ytime_GPHPR=0;
    ycrouse_range=0;
    ypitch_angle=0;
    yroll_range=0;
}





if(RTK_GPGGA_Data[0]==36&&RTK_GPGGA_Data[1]==71&&RTK_GPGGA_Data[2]==80&&RTK_GPGGA_Data[3]==71&&RTK_GPGGA_Data[4]==71&&RTK_GPGGA_Data[5]==65)
{
	for(n=0;n<120;n++)
	{
        if(RTK_GPGGA_Data[n]==10)
		{
            n_end=n;
			//printf("%d\n",n_end);
            break;
        }
    }
    for(i=7;i<n_end;i++)
	{
        if(RTK_GPGGA_Data[i]==44)
		{
            i_num_GPGGA=i_num_GPGGA+1;
            if(i_num_GPGGA==1)
			{
                if(i!=beginGPGGA)
				{
                    len_time_GPGGA=i-beginGPGGA;
                    for(j=0;j<len_time_GPGGA;j++)
					{
                        temp_time_GPGGA[j]=RTK_GPGGA_Data[beginGPGGA+j];
						//printf("%d\n",temp_lat[j]);
					}
                    beginGPGGA=i+1;
				}
			}
            if(i_num_GPGGA==2)
			{
               if(i!=beginGPGGA)
				{
                    len_lat=i-beginGPGGA;
                    for(j=0;j<len_lat;j++)
					{
                        temp_lat[j]=RTK_GPGGA_Data[beginGPGGA+j];
			//printf("temp_lat%x\n",temp_lat[j]);
					}
                }
                beginGPGGA=i+1;
			}
        	if(i_num_GPGGA==3)
			{
                beginGPGGA=i+1;
			}
            if(i_num_GPGGA==4)
			{
                if(i!=beginGPGGA)
				{
                    len_lon=i-beginGPGGA;
                    for(j=0;j<len_lon;j++)
					{
                        temp_lon[j]=RTK_GPGGA_Data[beginGPGGA+j];
					}
                }
                beginGPGGA=i+1;
			}
  
            if(i_num_GPGGA==5)
			{
                beginGPGGA=i+1;
			}

            if(i_num_GPGGA==6)
			{
			//printf("temp_GPS_flag%x\n",temp_GPS_flag);
				if(i!=beginGPGGA)
				{
                    temp_GPS_flag=RTK_GPGGA_Data[beginGPGGA];
			//printf("temp_GPS_flag%x\n",temp_GPS_flag);
				}
                beginGPGGA=i+1;
			}
			if(i_num_GPGGA==7)
			{
                if(i!=beginGPGGA)
				{
                    len_star_num=i-beginGPGGA;
                    for(j=0;j<len_star_num;j++)
					{
                        temp_star_num[j]=RTK_GPGGA_Data[beginGPGGA+j];
			//printf("temp_star_num%x\n",temp_star_num[j]);
					}
                }
                beginGPGGA=i+1;
			}
			if(i_num_GPGGA==8)
			{
                beginGPGGA=i+1;
			}
			if(i_num_GPGGA==9)
			{
                beginGPGGA=i+1;
			}
			if(i_num_GPGGA==10)
			{
                beginGPGGA=i+1;
			}
			if(i_num_GPGGA==11)
			{
                beginGPGGA=i+1;
			}
			if(i_num_GPGGA==12)
			{
                beginGPGGA=i+1;
			}
			if(i_num_GPGGA==13)
			{
                if(i!=beginGPGGA)
				{
                    len_delay_time=i-beginGPGGA;
                    for(j=0;j<len_delay_time;j++)
					{
                        temp_delay_time[j]=RTK_GPGGA_Data[beginGPGGA+j];
			//printf("temp_delay_time%x\n",temp_delay_time[j]);
					}
                }
                beginGPGGA=i+1;
			}
  
		}
	}
    

  
    ylat=(temp_lat[0]-48)*1000+(temp_lat[1]-48)*100+(temp_lat[2]-48)*10+(temp_lat[3]-48)+(temp_lat[5]-48)*0.1\
        +(temp_lat[6]-48)*0.01+(temp_lat[7]-48)*0.001+(temp_lat[8]-48)*0.0001+(temp_lat[9]-48)*0.00001\
        +(temp_lat[10]-48)*0.000001+(temp_lat[11]-48)*0.0000001+(temp_lat[12]-48)*0.00000001;
    //printf("ylat_test = %.8f\n",ylat);

    //printf("ylat_test2 = %ld\n",(long long)(ylat*100000000));
    //printf("ylat_test3 = %f\n",(ylat*100000000)-(long long)(ylat*100000000));

    ylon=(temp_lon[0]-48)*10000+(temp_lon[1]-48)*1000+(temp_lon[2]-48)*100+(temp_lon[3]-48)*10+(temp_lon[4]-48)\
        +(temp_lon[6]-48)*0.1+(temp_lon[7]-48)*0.01+(temp_lon[8]-48)*0.001+(temp_lon[9]-48)*0.0001+(temp_lon[10]-48)*0.00001\
        +(temp_lon[11]-48)*0.000001+(temp_lon[12]-48)*0.0000001+(temp_lon[13]-48)*0.00000001;

    ytime_GPGGA= (temp_time_GPGGA[0]-48)*100000+(temp_time_GPGGA[1]-48)*10000+(temp_time_GPGGA[2]-48)*1000+\
                        (temp_time_GPGGA[3]-48)*100+(temp_time_GPGGA[4]-48)*10+(temp_time_GPGGA[5]-48)+\
                        (temp_time_GPGGA[7]-48)*0.1+(temp_time_GPGGA[8]-48)*0.01;

	yGPS_flag=temp_GPS_flag-48;

	if(len_star_num==2)
	{
		ystar_num_temp=(temp_star_num[0]-48)*10+(temp_star_num[1]-48);
	}
	if(len_star_num==1)
	{
		ystar_num_temp=temp_star_num[0]-48;
	}
	ystar_num=ystar_num_temp;
	if(len_delay_time==4)
	{
		ydelay_time_temp=(temp_delay_time[0]-48)*10+(temp_delay_time[1]-48)+(temp_delay_time[3]-48)*0.1;
	}
	if(len_delay_time==3)
	{
		ydelay_time_temp=(temp_delay_time[0]-48)+(temp_delay_time[2]-48)*0.1;
	}
	ydelay_time=ydelay_time_temp;

	//printf("ylat = %.8f,ylon= %.8f,ycrouse_range=%.8f,ytime_GPGLL=%.8f\n",ylat, ylon,ycrouse_range, ytime_GPGGA);
	//printf("GPS_flag = %d\n",yGPS_flag);
}
else
{
   
    ylat=0;
    ylon=0;
    ytime_GPGGA=0;
	yGPS_flag=0;
	ystar_num=0;
	ydelay_time=0;
	//printf("ylat = %.8f,ylon= %.8f,ycrouse_range=%.8f,ytime_GPGLL=%.8f\n",ylat, ylon,ycrouse_range, ytime_GPGGA);
	
}


}
