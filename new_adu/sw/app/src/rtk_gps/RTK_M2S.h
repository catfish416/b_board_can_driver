
#ifndef _RTK_M2S_H
#define _RTK_M2S_H

double  ylat;
double  ylon;
double  ytime_GPGGA;
double	yGPS_flag;
double	ystar_num;
double	ydelay_time;


double ytime_GPHPR;
double ypitch_angle;
double yroll_range;
double ycrouse_range;

//char len_crouse_range=0;
//char temp_lat[13]={48,48,48,48,48,48,48,48,48,48,48,48,48};
//char temp_lon[14]={48,48,48,48,48,48,48,48,48,48,48,48,48,48};
//char temp_time_GPGLL[9]={48,48,48,48,48,48,48,48,48};
//char temp_crouse_range[7]={48,48,48,48,48,48,48};

void Analys_RTK( char *RTK_Data,unsigned char RTK_length);
#endif			
