/*
 * File: wgs2utm.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "wgs2utm.h"

/* Function Declarations */
static double rt_powd_snf(double u0, double u1);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d0;
  double d1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d0 = fabs(u0);
    d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d0 == 1.0) {
        y = rtNaN;
      } else if (d0 > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
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
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Argument checking
 * Arguments    : double Lat
 *                double Lon
 *                double *utmzone
 *                double *x
 *                double *y
 *                char *utmhemi
 * Return Type  : void
 */
void wgs2utm(double Lat, double Lon, double *utmzone, double *x, double *y, char
             *utmhemi)
{
  double lat;
  double N;
  double T;
  double C;
  double A;

  /*  [x,y,utmzone] = wgs2utm(Lat,Lon,Zone) */
  /*  @verbatim */
  /*  \brief Description: */
  /*     Convert WGS84 coordinates (Latitude, Longitude) into UTM coordinates */
  /*     (northing, easting) according to (optional) input UTM zone and */
  /*     hemisphere. */
  /*  */
  /*  Input: */
  /*  \param   Lat: WGS84 Latitude scalar, vector or array in decimal degrees.   */
  /*  \param   Lon: WGS84 Longitude scalar, vector or array in decimal degrees.  */
  /*  \param   utmzone (optional): UTM longitudinal zone. Scalar or same size as Lat */
  /*        and Lon. */
  /*  \param   utmhemi (optional): UTM hemisphere as a single character, 'N' or 'S', */
  /*        or array of 'N' or 'S' characters of same size as Lat and Lon. */
  /*  */
  /*  Output: */
  /*   \param  x: UTM easting in meters. */
  /*   \param  y: UTM northing in meters. */
  /*   \param  utmzone: UTM longitudinal zone. */
  /*   \param  utmhemi: UTM hemisphere as array of 'N' or 'S' characters.  */
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
  /*  \Author:  */
  /*    Alexandre Schimel */
  /*    MetOcean Solutions Ltd */
  /*    New Plymouth, New Zealand */
  /*  */
  /*  Version 2: */
  /*    February 2011 */
  /*  @endverbatim */
  /* ------------------------------------------------------------------------- */
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
  /*  coordinates in radians */
  lat = Lat * 3.1415926535897931 / 180.0;

  /*  WGS84 parameters */
  /* semi-major axis */
  /* semi-minor axis */
  /*  b = 6356752.314140;  %GRS80 value, originally used for WGS84 before refinements */
  /*  eccentricity */
  /*  UTM parameters */
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
  /*  Equations parameters */
  /*  e prime square */
  /*  N: radius of curvature of the earth perpendicular to meridian plane */
  /*  Also, distance from point to polar axis */
  *x = sin(lat);
  N = 6.378137E+6 / sqrt(1.0 - 0.0066943799901975076 * (*x * *x));
  *x = tan(lat);
  T = *x * *x;
  *x = cos(lat);
  C = 0.0067394967423333859 * (*x * *x);
  A = (Lon * 3.1415926535897931 / 180.0 - 2.1467549799530254) * cos(lat);

  /*  M: true distance along the central meridian from the equator to lat */
  /*  easting */
  *x = 500000.0 + 0.9996 * N * ((A + ((1.0 - T) + C) * rt_powd_snf(A, 3.0) / 6.0)
    + ((((5.0 - 18.0 * T) + T * T) + 72.0 * C) - 0.39089081105533641) *
    rt_powd_snf(A, 5.0) / 120.0);

  /*  northing  */
  /*  M(lat0) = 0 so not used in following formula */
  *y = 0.9996 * (6.378137E+6 * (((0.99832429845278126 * lat -
    0.0025146070605398477 * sin(2.0 * lat)) + 2.6390465943820355E-6 * sin(4.0 *
    lat)) - 3.4180460866818588E-9 * sin(6.0 * lat))) + 0.9996 * N * tan(lat) *
    ((A * A / 2.0 + (((5.0 - T) + 9.0 * C) + 4.0 * (C * C)) * rt_powd_snf(A, 4.0)
      / 24.0) + ((((61.0 - 58.0 * T) + T * T) + 600.0 * C) - 2.2240339249700174)
     * rt_powd_snf(A, 6.0) / 720.0);

  /*  UTM zone */
  /* if exist('utmzone','var') && exist('utmhemi','var') */
  *utmzone = 51.0;
  *utmhemi = 'N';

  /*  else  */
  /*     utmzone = floor(Lon0./6)+31; */
  /*     utmhemi = char( 83.* (Lat < 0) + 78.* (Lat >= 0) ); */
  /*  end */
}

/*
 * File trailer for wgs2utm.c
 *
 * [EOF]
 */
