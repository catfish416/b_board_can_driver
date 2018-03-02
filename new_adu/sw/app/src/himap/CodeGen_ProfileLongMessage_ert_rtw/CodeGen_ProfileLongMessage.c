/*
 * File: CodeGen_ProfileLongMessage.c
 *
 * Code generated for Simulink model 'CodeGen_ProfileLongMessage'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 18:17:38 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_ProfileLongMessage.h"
#include "CodeGen_ProfileLongMessage_private.h"
#include "M2S_Map.h"

/* Exported block signals */
real_T ValidProfileLongIndex;          /* '<Root>/MATLAB Function' */
real_T ProfileLongMap[6000];           /* '<Root>/MATLAB Function' */
real_T Orig_X_UTM;                     /* '<Root>/MATLAB Function' */
real_T Orig_Y_UTM;                     /* '<Root>/MATLAB Function' */
real_T End_Point[4];                   /* '<Root>/MATLAB Function' */
real_T CurrentPoint[2];                /* '<Root>/MATLAB Function' */

/* Block states (auto storage) */
DW_CodeGen_ProfileLongMessage_T CodeGen_ProfileLongMessage_DW;

/* Real-time model */
RT_MODEL_CodeGen_ProfileLongM_T CodeGen_ProfileLongMessage_M_;
RT_MODEL_CodeGen_ProfileLongM_T *const CodeGen_ProfileLongMessage_M =
  &CodeGen_ProfileLongMessage_M_;
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
void CodeGen_ProfileLongMessage_step(void)
{
  real_T lat;
  real_T N;
  real_T T;
  real_T C;
  real_T A;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/ClearAllFlag'
   *  Inport: '<Root>/MessageCompleteFlag'
   *  Inport: '<Root>/MessageCompleteFlag1'
   *  Inport: '<Root>/MessageCompleteFlag2'
   *  Inport: '<Root>/MessageCompleteFlag3'
   *  Inport: '<Root>/MessageCompleteFlag4'
   *  Inport: '<Root>/MessageCompleteFlag5'
   *  Inport: '<Root>/MessageCompleteFlag6'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* ProfileLong Map Profile */
  /* |1.AbsoluteProfileLongOffset|2.ProfileLongEntOrTerPoint|3.ProfileLongStraightOrNot|4.X_UTM|5.Y_UTM| */
  /* |6.ProfileType| */
  /*  Max offset distance. 65535 centimeters. 6553.5 meter. */
  /*  use this thresh to judge if there is position offset is exceed over than 6553.5 meters. */
  /* init persistent variables */
  if ((!CodeGen_ProfileLongMessage_DW.gPreProfileLongTimeCnt_not_empt) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:31' */
    /* '<S1>:1:32' */
    CodeGen_ProfileLongMessage_DW.gPreProfileLongTimeCnt = 0.0;
    CodeGen_ProfileLongMessage_DW.gPreProfileLongTimeCnt_not_empt = true;
  }

  if ((!CodeGen_ProfileLongMessage_DW.gPreProfileLongOffset_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:35' */
    /* '<S1>:1:36' */
    CodeGen_ProfileLongMessage_DW.gPreProfileLongOffset = 1000.0;
    CodeGen_ProfileLongMessage_DW.gPreProfileLongOffset_not_empty = true;
  }

  if ((!CodeGen_ProfileLongMessage_DW.gProfileLongCircleCnt_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:38' */
    /* '<S1>:1:39' */
    CodeGen_ProfileLongMessage_DW.gProfileLongCircleCnt = 0.0;
    CodeGen_ProfileLongMessage_DW.gProfileLongCircleCnt_not_empty = true;
  }

  if ((!CodeGen_ProfileLongMessage_DW.gProfileLongMap_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:42' */
    /* '<S1>:1:43' */
    memset(&CodeGen_ProfileLongMessage_DW.gProfileLongMap[0], 0, 6000U * sizeof
           (real_T));
    CodeGen_ProfileLongMessage_DW.gProfileLongMap_not_empty = true;
  }

  if ((!CodeGen_ProfileLongMessage_DW.pValidMessageIndex_not_empty) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:45' */
    /* '<S1>:1:46' */
    CodeGen_ProfileLongMessage_DW.pValidMessageIndex = 0.0;
    CodeGen_ProfileLongMessage_DW.pValidMessageIndex_not_empty = true;
  }

  if ((!CodeGen_ProfileLongMessage_DW.gOrig_X_UTM_not_empty) || (getClearAllFlag
       () == 1.0)) {
    /* '<S1>:1:49' */
    /* '<S1>:1:50' */
    CodeGen_ProfileLongMessage_DW.gOrig_X_UTM = 0.0;
    CodeGen_ProfileLongMessage_DW.gOrig_X_UTM_not_empty = true;
  }

  if ((!CodeGen_ProfileLongMessage_DW.gOrig_Y_UTM_not_empty) || (getClearAllFlag
       () == 1.0)) {
    /* '<S1>:1:54' */
    /* '<S1>:1:55' */
    CodeGen_ProfileLongMessage_DW.gOrig_Y_UTM = 0.0;
    CodeGen_ProfileLongMessage_DW.gOrig_Y_UTM_not_empty = true;
  }

  if ((!CodeGen_ProfileLongMessage_DW.gMessageSentCompleteFlag_not_em) ||
      (getClearAllFlag() == 1.0)) {
    /* '<S1>:1:58' */
    /* '<S1>:1:59' */
    CodeGen_ProfileLongMessage_DW.gMessageSentCompleteFlag = 0.0;
    CodeGen_ProfileLongMessage_DW.gMessageSentCompleteFlag_not_em = true;
  }

  if ((getAdvDrAstMpPrfLngProfileType() == (real_T)PT_LONGITUDE) ||
      (getAdvDrAstMpPrfLngProfileType() == (real_T)PT_LATITUDE)) {
    /* '<S1>:1:62' */
    /* filter for the all zero message. */
    if (getProfileLongTimeCnt() !=
        CodeGen_ProfileLongMessage_DW.gPreProfileLongTimeCnt) {
      /* '<S1>:1:64' */
      /*  New message arrived. */
      if (getAdvDrAstMpPrfLngOffset() !=
          CodeGen_ProfileLongMessage_DW.gPreProfileLongOffset) {
        /* '<S1>:1:66' */
        /*  Different position point */
        /* CyclicInc(index,MaxIndex)  */
        /* '<S1>:1:70' */
        if (CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 1.0 > 1000.0) {
          CodeGen_ProfileLongMessage_DW.pValidMessageIndex = 1.0;
        } else {
          CodeGen_ProfileLongMessage_DW.pValidMessageIndex++;
        }

        if (getAdvDrAstMpPrfLngOffset() <
            CodeGen_ProfileLongMessage_DW.gPreProfileLongOffset -
            CodeGen_ProfileLongMessage_DW.gOffsetThresh) {
          /* '<S1>:1:72' */
          /* '<S1>:1:73' */
          CodeGen_ProfileLongMessage_DW.gProfileLongCircleCnt++;
        }

        /* '<S1>:1:76' */
        /* '<S1>:1:78' */
        CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
          CodeGen_ProfileLongMessage_DW.pValidMessageIndex - 1] =
          CodeGen_ProfileLongMessage_DW.gMaxOffset *
          CodeGen_ProfileLongMessage_DW.gProfileLongCircleCnt +
          getAdvDrAstMpPrfLngOffset();

        /* '<S1>:1:79' */
        CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
          CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 999] =
          getAdvDrAstMpCurEntranceOrTerminalPoint();

        /* '<S1>:1:80' */
        CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
          CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 1999] =
          getAdvDrAstMpStaightOrCurve();

        /* '<S1>:1:81' */
        CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
          CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 4999] =
          getAdvDrAstMpPrfLngProfileType();
      }

      if (CodeGen_ProfileLongMessage_DW.pValidMessageIndex > 0.0) {
        /* '<S1>:1:84' */
        if (getAdvDrAstMpPrfLngProfileType() == (real_T)PT_LONGITUDE) {
          /* '<S1>:1:85' */
          /* '<S1>:1:87' */
          CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
            CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 2999] =
            (getAdvDrAstMpPrfLngValue() - 1.8E+9) / 1.0E+7;

          /*   180*10^7 is for longtitude unit transform. */
        }

        if (getAdvDrAstMpPrfLngProfileType() == (real_T)PT_LATITUDE) {
          /* '<S1>:1:90' */
          /* '<S1>:1:92' */
          CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
            CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 3999] =
            (getAdvDrAstMpPrfLngValue() - 9.0E+8) / 1.0E+7;

          /*  90*10^7 is for latitude unit transform. */
        }
      }
    }

    /* get the first valid point(both longtitude and latitude are valid) as the */
    /* original point. gOrig_X_UTM, gOrig_Y_UTM. */
    if ((CodeGen_ProfileLongMessage_DW.pValidMessageIndex == 1.0) &&
        (CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
         CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 2999] != 0.0) &&
        (CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
         CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 3999] != 0.0)) {
      /* '<S1>:1:102' */
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
      lat = CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
        CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 3999] *
        3.1415926535897931 / 180.0;

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
      C = sin(lat);
      N = 6.378137E+6 / sqrt(1.0 - C * C * 0.0066943799901975076);
      C = tan(lat);
      T = C * C;
      C = cos(lat);
      C = C * C * 0.0067394967423333859;
      A = (CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
           CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 2999] *
           3.1415926535897931 / 180.0 - 2.1467549799530254) * cos(lat);

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
      /* '<S1>:1:104' */
      CodeGen_ProfileLongMessage_DW.gOrig_X_UTM = (((((5.0 - 18.0 * T) + T * T)
        + 72.0 * C) - 0.39089081105533641) * rt_powd_snf(A, 5.0) / 120.0 +
        (((1.0 - T) + C) * rt_powd_snf(A, 3.0) / 6.0 + A)) * (0.9996 * N) +
        500000.0;

      /* '<S1>:1:104' */
      CodeGen_ProfileLongMessage_DW.gOrig_Y_UTM = (((((61.0 - 58.0 * T) + T * T)
        + 600.0 * C) - 2.2240339249700174) * rt_powd_snf(A, 6.0) / 720.0 +
        ((((5.0 - T) + 9.0 * C) + C * C * 4.0) * rt_powd_snf(A, 4.0) / 24.0 + A *
         A / 2.0)) * (0.9996 * N * tan(lat)) + (((0.99832429845278126 * lat -
        sin(2.0 * lat) * 0.0025146070605398477) + sin(4.0 * lat) *
        2.6390465943820355E-6) - sin(6.0 * lat) * 3.4180460866818588E-9) *
        6.378137E+6 * 0.9996;
    }

    if ((CodeGen_ProfileLongMessage_DW.pValidMessageIndex > 0.0) &&
        (CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
         CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 2999] != 0.0) &&
        (CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
         CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 3999] != 0.0)) {
      /* '<S1>:1:108' */
      /*  if both longitude and latitude are filled with valid value. */
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
      lat = CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
        CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 3999] *
        3.1415926535897931 / 180.0;

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
      C = sin(lat);
      N = 6.378137E+6 / sqrt(1.0 - C * C * 0.0066943799901975076);
      C = tan(lat);
      T = C * C;
      C = cos(lat);
      C = C * C * 0.0067394967423333859;
      A = (CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
           CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 2999] *
           3.1415926535897931 / 180.0 - 2.1467549799530254) * cos(lat);

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
      /* '<S1>:1:112' */
      CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
        CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 2999] = ((((((5.0 -
        18.0 * T) + T * T) + 72.0 * C) - 0.39089081105533641) * rt_powd_snf(A,
        5.0) / 120.0 + (((1.0 - T) + C) * rt_powd_snf(A, 3.0) / 6.0 + A)) *
        (0.9996 * N) + 500000.0) - CodeGen_ProfileLongMessage_DW.gOrig_X_UTM;

      /* '<S1>:1:114' */
      CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
        CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 3999] = ((((((61.0 -
        58.0 * T) + T * T) + 600.0 * C) - 2.2240339249700174) * rt_powd_snf(A,
        6.0) / 720.0 + ((((5.0 - T) + 9.0 * C) + C * C * 4.0) * rt_powd_snf(A,
        4.0) / 24.0 + A * A / 2.0)) * (0.9996 * N * tan(lat)) +
        (((0.99832429845278126 * lat - sin(2.0 * lat) * 0.0025146070605398477) +
          sin(4.0 * lat) * 2.6390465943820355E-6) - sin(6.0 * lat) *
         3.4180460866818588E-9) * 6.378137E+6 * 0.9996) -
        CodeGen_ProfileLongMessage_DW.gOrig_Y_UTM;
    }

    /*  store the relative utm_coordinates */
    /* '<S1>:1:119' */
    CodeGen_ProfileLongMessage_DW.gPreProfileLongTimeCnt = getProfileLongTimeCnt
      ();

    /* '<S1>:1:121' */
    CodeGen_ProfileLongMessage_DW.gPreProfileLongOffset =
      getAdvDrAstMpPrfLngOffset();

    /* Patch for initial state.that when offset of lat/long are both 0. */
  }

  /* '<S1>:1:126' */
  lat = CodeGen_ProfileLongMessage_DW.pValidMessageIndex;
  if (!(lat >= 1.0)) {
    lat = 1.0;
  }

  CurrentPoint[0] = CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)lat +
    2999];
  lat = CodeGen_ProfileLongMessage_DW.pValidMessageIndex;
  if (!(lat >= 1.0)) {
    lat = 1.0;
  }

  CurrentPoint[1] = CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)lat +
    3999];
  if ((getMessageCompleteFlag() == 1.0) ||
      (CodeGen_ProfileLongMessage_DW.gMessageSentCompleteFlag == 1.0)) {
    /* '<S1>:1:128' */
    /* '<S1>:1:130' */
    CodeGen_ProfileLongMessage_DW.gMessageSentCompleteFlag = 1.0;

    /* '<S1>:1:131' */
    End_Point[0] = CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
      CodeGen_ProfileLongMessage_DW.pValidMessageIndex - 1];
    End_Point[1] = CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
      CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 2999];
    End_Point[2] = CodeGen_ProfileLongMessage_DW.gProfileLongMap[(int32_T)
      CodeGen_ProfileLongMessage_DW.pValidMessageIndex + 3999];
    End_Point[3] = 1.0;

    /* store the end_point */
  } else {
    /* '<S1>:1:134' */
    End_Point[0] = 0.0;
    End_Point[1] = 0.0;
    End_Point[2] = 0.0;
    End_Point[3] = 0.0;
  }

  /* '<S1>:1:136' */
  memcpy(&ProfileLongMap[0], &CodeGen_ProfileLongMessage_DW.gProfileLongMap[0],
         6000U * sizeof(real_T));

  /* '<S1>:1:137' */
  ValidProfileLongIndex = CodeGen_ProfileLongMessage_DW.pValidMessageIndex;

  /* '<S1>:1:138' */
  Orig_X_UTM = CodeGen_ProfileLongMessage_DW.gOrig_X_UTM;

  /* '<S1>:1:139' */
  Orig_Y_UTM = CodeGen_ProfileLongMessage_DW.gOrig_Y_UTM;

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_ProfileLongMessage_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_ProfileLongMessage_M, (NULL));

  /* block I/O */

  /* exported global signals */
  ValidProfileLongIndex = 0.0;

  {
    int_T i;
    for (i = 0; i < 6000; i++) {
      ProfileLongMap[i] = 0.0;
    }
  }

  Orig_X_UTM = 0.0;
  Orig_Y_UTM = 0.0;
  End_Point[0] = 0.0;
  End_Point[1] = 0.0;
  End_Point[2] = 0.0;
  End_Point[3] = 0.0;
  CurrentPoint[0] = 0.0;
  CurrentPoint[1] = 0.0;

  /* states (dwork) */
  (void) memset((void *)&CodeGen_ProfileLongMessage_DW, 0,
                sizeof(DW_CodeGen_ProfileLongMessage_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_ProfileLongMessage_DW.gPreProfileLongTimeCnt_not_empt = false;
  CodeGen_ProfileLongMessage_DW.gPreProfileLongOffset_not_empty = false;
  CodeGen_ProfileLongMessage_DW.gProfileLongCircleCnt_not_empty = false;
  CodeGen_ProfileLongMessage_DW.gProfileLongMap_not_empty = false;
  CodeGen_ProfileLongMessage_DW.pValidMessageIndex_not_empty = false;
  CodeGen_ProfileLongMessage_DW.gOrig_X_UTM_not_empty = false;
  CodeGen_ProfileLongMessage_DW.gOrig_Y_UTM_not_empty = false;
  CodeGen_ProfileLongMessage_DW.gMessageSentCompleteFlag_not_em = false;
  CodeGen_ProfileLongMessage_DW.gMaxOffset = 6553.5;
  CodeGen_ProfileLongMessage_DW.gOffsetThresh = 2000.0;
}

/* Model terminate function */
void CodeGen_ProfileLongMessage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
