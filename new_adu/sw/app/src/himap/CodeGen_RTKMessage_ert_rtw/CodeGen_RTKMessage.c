/*
 * File: CodeGen_RTKMessage.c
 *
 * Code generated for Simulink model 'CodeGen_RTKMessage'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 18:53:03 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_RTKMessage.h"
#include "CodeGen_RTKMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T PPS_VALIDITY_MSG;               /* '<S1>/Constant' */
real_T PPS_BURST_ID_MSG;               /* '<S1>/Data Type Conversion' */
real_T PPS_LATITUDE_MSG;               /* '<Root>/Gain2' */
real_T PPS_LONGITUDE_MSG;              /* '<Root>/Gain1' */
real_T X_IN_UTM;                       /* '<S1>/WGS2UTM' */
real_T Y_IN_UTM;                       /* '<S1>/WGS2UTM' */
real_T HeadingAngle;                   /* '<S1>/RTKRAW2WGS' */
real_T WGS_TS_IN_SEC;                  /* '<S1>/RTKRAW2WGS' */

/* Block signals (auto storage) */
B_CodeGen_RTKMessage_T CodeGen_RTKMessage_B;

/* Block states (auto storage) */
DW_CodeGen_RTKMessage_T CodeGen_RTKMessage_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_CodeGen_RTKMessage_T CodeGen_RTKMessage_Y;

/* Real-time model */
RT_MODEL_CodeGen_RTKMessage_T CodeGen_RTKMessage_M_;
RT_MODEL_CodeGen_RTKMessage_T *const CodeGen_RTKMessage_M =
  &CodeGen_RTKMessage_M_;
static real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void CodeGen_RTKMessage_step(void)
{
  real_T wgs_lat;
  real_T wgs_lon;
  real_T wgs_ts_s;
  real_T wgs_ts_h;
  real_T lat;
  real_T N;
  real_T T;

  /* Constant: '<S1>/Constant' */
  PPS_VALIDITY_MSG = CodeGen_RTKMessage_P.Constant_Value;

  /* UnitDelay: '<S2>/Output' */
  CodeGen_RTKMessage_B.Output = CodeGen_RTKMessage_DW.Output_DSTATE;

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  PPS_BURST_ID_MSG = CodeGen_RTKMessage_B.Output;

  /* MATLAB Function: '<S1>/RTKRAW2WGS' incorporates:
   *  Inport: '<Root>/RTK_GPS_LATITUDE'
   *  Inport: '<Root>/RTK_GPS_LONGITUDE'
   *  Inport: '<Root>/RTK_GPS_TS'
   *  Inport: '<Root>/RTK_GPS_YAW'
   */
  /* MATLAB Function 'RTK_TO_PPS/RTKRAW2WGS': '<S3>:1' */
  /* ------------------------------------------------------- */
  /*  University of Zaragoza */
  /*  Centro Politecnico Superior */
  /*  Robotics and Real Time Group */
  /* ------------------------------------------------------- */
  /*  Authors:  J. Neira, J. Tardos */
  /*  Date   :  7-2002 */
  /*  */
  /*  calculates the inverse of one or more transformations */
  /* ------------------------------------------------------- */
  /* '<S3>:1:14' */
  wgs_lat = (getRTK_GPS_LATITUDE() - floor(getRTK_GPS_LATITUDE() / 100.0) *
             100.0) / 60.0 + floor(getRTK_GPS_LATITUDE() / 100.0);

  /* '<S3>:1:15' */
  wgs_lon = (getRTK_GPS_LONGITUDE() - floor(getRTK_GPS_LONGITUDE() / 100.0) *
             100.0) / 60.0 + floor(getRTK_GPS_LONGITUDE() / 100.0);

  /* '<S3>:1:17' */
  wgs_ts_s = getRTK_GPS_TS() - floor(getRTK_GPS_TS() / 100.0) * 100.0;

  /* '<S3>:1:18' */
  wgs_ts_h = floor(getRTK_GPS_TS() / 10000.0);

  /* '<S3>:1:19' */
  /* '<S3>:1:20' */
  WGS_TS_IN_SEC = (floor(((getRTK_GPS_TS() - wgs_ts_h * 10000.0) - wgs_ts_s) /
    100.0) * 60.0 + wgs_ts_h * 3600.0) + wgs_ts_s;

  /* '<S3>:1:21' */
  HeadingAngle = getRTK_GPS_YAW() * 3.1415926535897931 / 180.0;

  /*  ------------------------------------------------------------------------- */
  /*  [x,y,utmzone] = wgs2utm(Lat,Lon,Zone) */
  /*  */
  /*  Description: */
  /*     Convert WGS84 coordinates (Latitude, Longitude) into UTM coordinates */
  /*     (northing, easting) according to (optional) input UTM zone and */
  /*     hemisphere. */
  /*  */
  /*  Input: */
  /*     Lat: WGS84 Latitude scalar, vector or array in decimal degrees.   */
  /*     Lon: WGS84 Longitude scalar, vector or array in decimal degrees.  */
  /*     utmzone (optional): UTM longitudinal zone. Scalar or same size as Lat */
  /*        and Lon. */
  /*     utmhemi (optional): UTM hemisphere as a single character, 'N' or 'S', */
  /*        or array of 'N' or 'S' characters of same size as Lat and Lon. */
  /*  */
  /*  Output: */
  /*     x: UTM easting in meters. */
  /*     y: UTM northing in meters. */
  /*     utmzone: UTM longitudinal zone. */
  /*     utmhemi: UTM hemisphere as array of 'N' or 'S' characters.  */
  /*  */
  /*  Author notes: */
  /*     I downloaded and tried deg2utm.m from Rafael Palacios but found */
  /*     differences of up to 1m with my reference converters in southern */
  /*     hemisphere so I wrote my own code based on "Map Projections - A */
  /*     Working Manual" by J.P. Snyder (1987). Quick quality control performed */
  /*     only by comparing with LINZ converter */
  /*     (www.linz.govt.nz/apps/coordinateconversions/) and Chuck Taylor's  */
  /*     (http://home.hiwaay.net/~taylorc/toolbox/geography/geoutm.html) on a  */
  /*     few test points, so use results with caution. Equations not suitable */
  /*     for a latitude of +/- 90deg. */
  /*  */
  /*     UPDATE: Following requests, this new version allows forcing UTM zone */
  /*     in input. */
  /*  */
  /*  Examples: */
  /*  */
  /*     % set random latitude and longitude arrays */
  /*     Lat= 90.*(2.*rand(3)-1) */
  /*     Lon= 180.*(2.*rand(3)-1) */
  /*  */
  /*     % let the function find appropriate UTM zone and hemisphere from data  */
  /*     [x1,y1,utmzone1,utmhemi1] = wgs2utm(Lat,Lon) */
  /*  */
  /*     % forcing unique UTM zone and hemisphere for all data entries */
  /*     % note: resulting easting and northing are way off the usual values */
  /*     [x2,y2,utmzone2,utmhemi2] = wgs2utm(Lat,Lon,60,'S') */
  /*  */
  /*     % forcing different UTM zone and hemisphere for each data entry */
  /*     % note: resulting easting and northing are way off the usual values */
  /*     utmzone = floor(59.*rand(3))+1 */
  /*     utmhemi = char(78 + 5.*round(rand(3))) */
  /*     [x3,y3,utmzone3,utmhemi3] = wgs2utm(Lat,Lon,utmzone,utmhemi) */
  /*  */
  /*  Author:  */
  /*    Alexandre Schimel */
  /*    MetOcean Solutions Ltd */
  /*    New Plymouth, New Zealand */
  /*  */
  /*  Version 2: */
  /*    February 2011 */
  /* ------------------------------------------------------------------------- */
  /* % Argument checking */
  /*  if (n1~=n2) */
  /*      error('Lat and Lon should have same size');return */
  /*  end */
  /*  if exist('utmzone','var') && exist('utmhemi','var') */
  /*      n3=size(utmzone); */
  /*      n4=size(utmhemi); */
  /*      if (sort(n3)~=sort(n4)) */
  /*          error('utmzone and utmhemi should have same size');return */
  /*      end */
  /*      if max(n3)~=1 && max(n3)~=max(n1) */
  /*          error('utmzone should have either same size as Lat and Long, or size=1');return */
  /*      end */
  /*  end */
  /*  % expand utmzone and utmhemi if needed */
  /*  if exist('utmzone','var') && exist('utmhemi','var') */
  /*      n3=size(utmzone); */
  /*      n4=size(utmhemi); */
  /*      if n3==[1 1] */
  /*          utmzone = utmzone.*ones(size(Lat)); */
  /*          utmhemi = char(utmhemi.*ones(size(Lat))); */
  /*      end */
  /*  end */
  /* % coordinates in radians */
  lat = wgs_lat * 3.1415926535897931 / 180.0;

  /* % WGS84 parameters */
  /* semi-major axis */
  /* semi-minor axis */
  /*  b = 6356752.314140;  %GRS80 value, originally used for WGS84 before refinements */
  /*  eccentricity */
  /* % UTM parameters */
  /*  lat0 = 0;                % reference latitude, not used here */
  /* if exist('utmzone','var') */
  /*  reference longitude in degrees */
  /*  else */
  /*      Lon0 = floor(Lon./6).*6+3; % reference longitude in degrees */
  /*  end */
  /*  in radians */
  /*  scale on central meridian */
  /*  false easting */
  /* if exist('utmhemi','var') */
  /*  else */
  /*      FN = (Lat < 0).*10000000; % false northing  */
  /*  end */
  /* % Equations parameters */
  /*  e prime square */
  /*  N: radius of curvature of the earth perpendicular to meridian plane */
  /*  Also, distance from point to polar axis */
  wgs_ts_s = sin(lat);
  N = 6.378137E+6 / sqrt(1.0 - wgs_ts_s * wgs_ts_s * 0.0066943799901975076);
  wgs_ts_s = tan(lat);
  T = wgs_ts_s * wgs_ts_s;
  wgs_ts_s = cos(lat);
  wgs_ts_s = wgs_ts_s * wgs_ts_s * 0.0067394967423333859;
  wgs_ts_h = (wgs_lon * 3.1415926535897931 / 180.0 - 2.1467549799530254) * cos
    (lat);

  /*  M: true distance along the central meridian from the equator to lat */
  /* % easting */
  /* % northing  */
  /*  M(lat0) = 0 so not used in following formula */
  /* % UTM zone */
  /* if exist('utmzone','var') && exist('utmhemi','var') */
  /*  else  */
  /*     utmzone = floor(Lon0./6)+31; */
  /*     utmhemi = char( 83.* (Lat < 0) + 78.* (Lat >= 0) ); */
  /*  end */
  /* '<S3>:1:22' */
  CodeGen_RTKMessage_B.utm_x = (((((5.0 - 18.0 * T) + T * T) + 72.0 * wgs_ts_s)
    - 0.39089081105533641) * rt_powd_snf(wgs_ts_h, 5.0) / 120.0 + (((1.0 - T) +
    wgs_ts_s) * rt_powd_snf(wgs_ts_h, 3.0) / 6.0 + wgs_ts_h)) * (0.9996 * N) +
    500000.0;

  /* '<S3>:1:22' */
  CodeGen_RTKMessage_B.utm_y = (((((61.0 - 58.0 * T) + T * T) + 600.0 * wgs_ts_s)
    - 2.2240339249700174) * rt_powd_snf(wgs_ts_h, 6.0) / 720.0 + ((((5.0 - T) +
    9.0 * wgs_ts_s) + wgs_ts_s * wgs_ts_s * 4.0) * rt_powd_snf(wgs_ts_h, 4.0) /
    24.0 + wgs_ts_h * wgs_ts_h / 2.0)) * (0.9996 * N * tan(lat)) +
    (((0.99832429845278126 * lat - sin(2.0 * lat) * 0.0025146070605398477) + sin
      (4.0 * lat) * 2.6390465943820355E-6) - sin(6.0 * lat) *
     3.4180460866818588E-9) * 6.378137E+6 * 0.9996;

  /* Outport: '<Root>/X_IN_UTM1' incorporates:
   *  MATLAB Function: '<S1>/RTKRAW2WGS'
   */
  CodeGen_RTKMessage_Y.X_IN_UTM1 = wgs_lat;

  /* Outport: '<Root>/X_IN_UTM2' incorporates:
   *  MATLAB Function: '<S1>/RTKRAW2WGS'
   */
  CodeGen_RTKMessage_Y.X_IN_UTM2 = wgs_lon;

  /* Gain: '<Root>/Gain2' */
  PPS_LATITUDE_MSG = CodeGen_RTKMessage_P.Gain2_Gain *
    CodeGen_RTKMessage_Y.X_IN_UTM1;

  /* Gain: '<Root>/Gain1' */
  PPS_LONGITUDE_MSG = CodeGen_RTKMessage_P.Gain1_Gain *
    CodeGen_RTKMessage_Y.X_IN_UTM2;

  /* Outport: '<Root>/HeadingAngle' incorporates:
   *  Gain: '<Root>/Gain3'
   */
  CodeGen_RTKMessage_Y.HeadingAngle_e = CodeGen_RTKMessage_P.Gain3_Gain *
    HeadingAngle;

  /* MATLAB Function: '<S1>/WGS2UTM' incorporates:
   *  Constant: '<S1>/UTMHEMI'
   *  Constant: '<S1>/UTMZONE'
   */
  /* MATLAB Function 'RTK_TO_PPS/WGS2UTM': '<S4>:1' */
  /*  ------------------------------------------------------------------------- */
  /*  [x,y,utmzone] = wgs2utm(Lat,Lon,Zone) */
  /*  */
  /*  Description: */
  /*     Convert WGS84 coordinates (Latitude, Longitude) into UTM coordinates */
  /*     (northing, easting) according to (optional) input UTM zone and */
  /*     hemisphere. */
  /*  */
  /*  Input: */
  /*     Lat: WGS84 Latitude scalar, vector or array in decimal degrees.   */
  /*     Lon: WGS84 Longitude scalar, vector or array in decimal degrees.  */
  /*     utmzone (optional): UTM longitudinal zone. Scalar or same size as Lat */
  /*        and Lon. */
  /*     utmhemi (optional): UTM hemisphere as a single character, 'N' or 'S', */
  /*        or array of 'N' or 'S' characters of same size as Lat and Lon. */
  /*  */
  /*  Output: */
  /*     x: UTM easting in meters. */
  /*     y: UTM northing in meters. */
  /*     utmzone: UTM longitudinal zone. */
  /*     utmhemi: UTM hemisphere as array of 'N' or 'S' characters.  */
  /*  */
  /*  Author notes: */
  /*     I downloaded and tried deg2utm.m from Rafael Palacios but found */
  /*     differences of up to 1m with my reference converters in southern */
  /*     hemisphere so I wrote my own code based on "Map Projections - A */
  /*     Working Manual" by J.P. Snyder (1987). Quick quality control performed */
  /*     only by comparing with LINZ converter */
  /*     (www.linz.govt.nz/apps/coordinateconversions/) and Chuck Taylor's  */
  /*     (http://home.hiwaay.net/~taylorc/toolbox/geography/geoutm.html) on a  */
  /*     few test points, so use results with caution. Equations not suitable */
  /*     for a latitude of +/- 90deg. */
  /*  */
  /*     UPDATE: Following requests, this new version allows forcing UTM zone */
  /*     in input. */
  /*  */
  /*  Examples: */
  /*  */
  /*     % set random latitude and longitude arrays */
  /*     Lat= 90.*(2.*rand(3)-1) */
  /*     Lon= 180.*(2.*rand(3)-1) */
  /*  */
  /*     % let the function find appropriate UTM zone and hemisphere from data  */
  /*     [x1,y1,utmzone1,utmhemi1] = wgs2utm(Lat,Lon) */
  /*  */
  /*     % forcing unique UTM zone and hemisphere for all data entries */
  /*     % note: resulting easting and northing are way off the usual values */
  /*     [x2,y2,utmzone2,utmhemi2] = wgs2utm(Lat,Lon,60,'S') */
  /*  */
  /*     % forcing different UTM zone and hemisphere for each data entry */
  /*     % note: resulting easting and northing are way off the usual values */
  /*     utmzone = floor(59.*rand(3))+1 */
  /*     utmhemi = char(78 + 5.*round(rand(3))) */
  /*     [x3,y3,utmzone3,utmhemi3] = wgs2utm(Lat,Lon,utmzone,utmhemi) */
  /*  */
  /*  Author:  */
  /*    Alexandre Schimel */
  /*    MetOcean Solutions Ltd */
  /*    New Plymouth, New Zealand */
  /*  */
  /*  Version 2: */
  /*    February 2011 */
  /* ------------------------------------------------------------------------- */
  /* % Argument checking */
  /*  if (n1~=n2) */
  /*      error('Lat and Lon should have same size');return */
  /*  end */
  /*  if exist('utmzone','var') && exist('utmhemi','var') */
  /*      n3=size(utmzone); */
  /*      n4=size(utmhemi); */
  /*      if (sort(n3)~=sort(n4)) */
  /*          error('utmzone and utmhemi should have same size');return */
  /*      end */
  /*      if max(n3)~=1 && max(n3)~=max(n1) */
  /*          error('utmzone should have either same size as Lat and Long, or size=1');return */
  /*      end */
  /*  end */
  /*  % expand utmzone and utmhemi if needed */
  /*  if exist('utmzone','var') && exist('utmhemi','var') */
  /*      n3=size(utmzone); */
  /*      n4=size(utmhemi); */
  /*      if n3==[1 1] */
  /*          utmzone = utmzone.*ones(size(Lat)); */
  /*          utmhemi = char(utmhemi.*ones(size(Lat))); */
  /*      end */
  /*  end */
  /* % coordinates in radians */
  /* '<S4>:1:97' */
  lat = CodeGen_RTKMessage_Y.X_IN_UTM1 * 3.1415926535897931 / 180.0;

  /* '<S4>:1:98' */
  /* % WGS84 parameters */
  /* '<S4>:1:101' */
  /* semi-major axis */
  /* semi-minor axis */
  /*  b = 6356752.314140;  %GRS80 value, originally used for WGS84 before refinements */
  /*  eccentricity */
  /* % UTM parameters */
  /*  lat0 = 0;                % reference latitude, not used here */
  /* if exist('utmzone','var') */
  /* '<S4>:1:109' */
  /*  reference longitude in degrees */
  /*  else */
  /*      Lon0 = floor(Lon./6).*6+3; % reference longitude in degrees */
  /*  end */
  /* '<S4>:1:113' */
  /*  in radians */
  /* '<S4>:1:114' */
  /*  scale on central meridian */
  /* '<S4>:1:116' */
  /*  false easting */
  /* if exist('utmhemi','var') */
  /* '<S4>:1:118' */
  /*  else */
  /*      FN = (Lat < 0).*10000000; % false northing  */
  /*  end */
  /* % Equations parameters */
  /* '<S4>:1:124' */
  /*  e prime square */
  /*  N: radius of curvature of the earth perpendicular to meridian plane */
  /*  Also, distance from point to polar axis */
  /* '<S4>:1:127' */
  wgs_ts_s = sin(lat);
  N = 6.378137E+6 / sqrt(1.0 - wgs_ts_s * wgs_ts_s * 0.0066943799901975076);

  /* '<S4>:1:128' */
  wgs_ts_s = tan(lat);
  T = wgs_ts_s * wgs_ts_s;

  /* '<S4>:1:129' */
  wgs_ts_s = cos(lat);
  wgs_ts_s = wgs_ts_s * wgs_ts_s * 0.0067394967423333859;

  /* '<S4>:1:130' */
  wgs_ts_h = (CodeGen_RTKMessage_Y.X_IN_UTM2 * 3.1415926535897931 / 180.0 - (6.0
    * CodeGen_RTKMessage_P.UTMZONE_Value - 183.0) * 3.1415926535897931 / 180.0) *
    cos(lat);

  /*  M: true distance along the central meridian from the equator to lat */
  /* '<S4>:1:132' */
  /* % easting */
  /* '<S4>:1:138' */
  X_IN_UTM = (((((5.0 - 18.0 * T) + T * T) + 72.0 * wgs_ts_s) -
               0.39089081105533641) * rt_powd_snf(wgs_ts_h, 5.0) / 120.0 +
              (((1.0 - T) + wgs_ts_s) * rt_powd_snf(wgs_ts_h, 3.0) / 6.0 +
               wgs_ts_h)) * (0.9996 * N) + 500000.0;

  /* % northing  */
  /*  M(lat0) = 0 so not used in following formula */
  /* '<S4>:1:144' */
  Y_IN_UTM = (((((61.0 - 58.0 * T) + T * T) + 600.0 * wgs_ts_s) -
               2.2240339249700174) * rt_powd_snf(wgs_ts_h, 6.0) / 720.0 +
              ((((5.0 - T) + 9.0 * wgs_ts_s) + wgs_ts_s * wgs_ts_s * 4.0) *
               rt_powd_snf(wgs_ts_h, 4.0) / 24.0 + wgs_ts_h * wgs_ts_h / 2.0)) *
    (0.9996 * N * tan(lat)) + ((((0.99832429845278126 * lat - sin(2.0 * lat) *
    0.0025146070605398477) + sin(4.0 * lat) * 2.6390465943820355E-6) - sin(6.0 *
    lat) * 3.4180460866818588E-9) * 6.378137E+6 * 0.9996 + (real_T)
    (CodeGen_RTKMessage_P.UTMHEMI_Value == 83.0) * 1.0E+7);

  /* % UTM zone */
  /* if exist('utmzone','var') && exist('utmhemi','var') */
  /* '<S4>:1:150' */
  CodeGen_RTKMessage_B.utmzone1 = CodeGen_RTKMessage_P.UTMZONE_Value;

  /* '<S4>:1:151' */
  CodeGen_RTKMessage_B.utmhemi1 = CodeGen_RTKMessage_P.UTMHEMI_Value;

  /*  else  */
  /*     utmzone = floor(Lon0./6)+31; */
  /*     utmhemi = char( 83.* (Lat < 0) + 78.* (Lat >= 0) ); */
  /*  end */

  /* Sum: '<S5>/FixPt Sum1' incorporates:
   *  Constant: '<S5>/FixPt Constant'
   */
  CodeGen_RTKMessage_B.FixPtSum1 = (uint8_T)((uint32_T)
    CodeGen_RTKMessage_B.Output + CodeGen_RTKMessage_P.FixPtConstant_Value);

  /* Switch: '<S6>/FixPt Switch' incorporates:
   *  Constant: '<S6>/Constant'
   */
  if (CodeGen_RTKMessage_B.FixPtSum1 >
      CodeGen_RTKMessage_P.FixPtSwitch_Threshold) {
    CodeGen_RTKMessage_B.FixPtSwitch = CodeGen_RTKMessage_P.Constant_Value_j;
  } else {
    CodeGen_RTKMessage_B.FixPtSwitch = CodeGen_RTKMessage_B.FixPtSum1;
  }

  /* End of Switch: '<S6>/FixPt Switch' */

  /* Update for UnitDelay: '<S2>/Output' */
  CodeGen_RTKMessage_DW.Output_DSTATE = CodeGen_RTKMessage_B.FixPtSwitch;
}

/* Model initialize function */
void CodeGen_RTKMessage_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_RTKMessage_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &CodeGen_RTKMessage_B), 0,
                sizeof(B_CodeGen_RTKMessage_T));

  /* exported global signals */
  PPS_VALIDITY_MSG = 0.0;
  PPS_BURST_ID_MSG = 0.0;
  PPS_LATITUDE_MSG = 0.0;
  PPS_LONGITUDE_MSG = 0.0;
  X_IN_UTM = 0.0;
  Y_IN_UTM = 0.0;
  HeadingAngle = 0.0;
  WGS_TS_IN_SEC = 0.0;

  /* states (dwork) */
  (void) memset((void *)&CodeGen_RTKMessage_DW, 0,
                sizeof(DW_CodeGen_RTKMessage_T));

  /* external outputs */
  (void) memset((void *)&CodeGen_RTKMessage_Y, 0,
                sizeof(ExtY_CodeGen_RTKMessage_T));

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  CodeGen_RTKMessage_DW.Output_DSTATE =
    CodeGen_RTKMessage_P.Output_InitialCondition;
}

/* Model terminate function */
void CodeGen_RTKMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
