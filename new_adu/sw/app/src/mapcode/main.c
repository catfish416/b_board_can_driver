/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 27-Apr-2017 16:26:20
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "main.h"
#include "slam_ekf_patac_map_pose_output_terminate.h"
#include "slam_ekf_patac_map_pose_output_initialize.h"
#include "matio_pubconf.h"
#include "matio.h"
#include "matio_private.h"

/* Function Declarations */
static void argInit_1000x1_real_T(double result[1000]);
static void argInit_127x26_real_T(double result[3302]);
static void argInit_1701x3_real_T(double result[5103]);
static void argInit_1781x2_real_T(double result[3562]);
static void argInit_1841x2_real_T(double result[3682]);
static void argInit_40x4_real_T(double result[160]);
static void argInit_4x2_real_T(double result[8]);
static void argInit_6x4_real_T(double result[24]);
static void argInit_99x6_real_T(double result[594]);
static double argInit_real_T(void);
static void argInit_struct0_T(struct0_T *result);
static void argInit_struct1_T(struct1_T *result);
static void argInit_struct2_T(struct2_T *result);
static void c_main_slam_ekf_patac_map_pose_(void);
static void argInit_workspace_real_T(mat_t *mat, matvar_t *matvar, matlab_record_data_t* result);
/* Function Definitions */

/*
 * Arguments    : double result[1000]
 * Return Type  : void
 */
static void argInit_1000x1_real_T(double result[1000])
{
	int err = 0;
	int start[3] = { 0, 0, 0 }, stride[3] = { 1, 1, 1 }, edge[3] = { 2, 2, 1 };
	mat_t *mat;
	matvar_t *matvar;
	enum matio_classes matvar_class;
	char * inputFile = "DATA\\chi2_dat.mat";
	char * var = "chi2_dat";

	matvar_class = MAT_C_DOUBLE;
	mat = Mat_Open(inputFile, MAT_ACC_RDONLY);
	if (mat) {
		matvar = Mat_VarReadInfo(mat, var);
	}
	else{
		printf("Open Mat file Error!\n");
		return;
	}
	if (matvar != NULL) {
		matvar->class_type = matvar_class;
		edge[0] = matvar->dims[0];
		edge[1] = matvar->dims[1];

		Mat_VarReadData(mat, matvar, result, start, stride, edge);
		Mat_VarFree(matvar);
	}
	else{
		printf("Read Mat Error!\n");
		return;
	}
	Mat_Close(mat);

	///* Loop over the array to initialize each element. */
	//for (idx0 = 0; idx0 < 1000; idx0++) {
	//  /* Set the value of the array element.
	//     Change this value to the value that the application requires. */
	//  result[idx0] = argInit_real_T();
	//}
}

/*
 * Arguments    : double result[3302]
 * Return Type  : void
 */
static void argInit_127x26_real_T(double result[3302])
{
	int idx0;
	int idx1;

	/* Loop over the array to initialize each element. */
	for (idx0 = 0; idx0 < 127; idx0++) {
		for (idx1 = 0; idx1 < 26; idx1++) {
			/* Set the value of the array element.
			   Change this value to the value that the application requires. */
			result[idx0 + 127 * idx1] = argInit_real_T();
		}
	}
}

/*
 * Arguments    : double result[5103]
 * Return Type  : void
 */
static void argInit_1701x3_real_T(double result[5103])
{
	int idx0;
	int idx1;

	/* Loop over the array to initialize each element. */
	for (idx0 = 0; idx0 < 1701; idx0++) {
		for (idx1 = 0; idx1 < 3; idx1++) {
			/* Set the value of the array element.
			   Change this value to the value that the application requires. */
			result[idx0 + 1701 * idx1] = argInit_real_T();
		}
	}
}

/*
 * Arguments    : double result[3562]
 * Return Type  : void
 */
static void argInit_1781x2_real_T(double result[3562])
{
	int idx0;
	int idx1;

	/* Loop over the array to initialize each element. */
	for (idx0 = 0; idx0 < 1781; idx0++) {
		for (idx1 = 0; idx1 < 2; idx1++) {
			/* Set the value of the array element.
			   Change this value to the value that the application requires. */
			result[idx0 + 1781 * idx1] = argInit_real_T();
		}
	}
}

/*
 * Arguments    : double result[3682]
 * Return Type  : void
 */
static void argInit_1841x2_real_T(double result[3682])
{
	int idx0;
	int idx1;

	/* Loop over the array to initialize each element. */
	for (idx0 = 0; idx0 < 1841; idx0++) {
		for (idx1 = 0; idx1 < 2; idx1++) {
			/* Set the value of the array element.
			   Change this value to the value that the application requires. */
			result[idx0 + 1841 * idx1] = argInit_real_T();
		}
	}
}

/*
 * Arguments    : double result[160]
 * Return Type  : void
 */
static void argInit_40x4_real_T(double result[160])
{
	int idx0;
	int idx1;

	/* Loop over the array to initialize each element. */
	for (idx0 = 0; idx0 < 40; idx0++) {
		for (idx1 = 0; idx1 < 4; idx1++) {
			/* Set the value of the array element.
			   Change this value to the value that the application requires. */
			result[idx0 + 40 * idx1] = argInit_real_T();
		}
	}
}

/*
 * Arguments    : double result[8]
 * Return Type  : void
 */
static void argInit_4x2_real_T(double result[8])
{
	int idx0;
	int idx1;

	/* Loop over the array to initialize each element. */
	for (idx0 = 0; idx0 < 4; idx0++) {
		for (idx1 = 0; idx1 < 2; idx1++) {
			/* Set the value of the array element.
			   Change this value to the value that the application requires. */
			result[idx0 + (idx1 << 2)] = argInit_real_T();
		}
	}
}

/*
 * Arguments    : double result[24]
 * Return Type  : void
 */
static void argInit_6x4_real_T(double result[24])
{
	int err = 0;
	int start[3] = { 0, 0, 0 }, stride[3] = { 1, 1, 1 }, edge[3] = { 2, 2, 1 };
	mat_t *mat;
	matvar_t *matvar;
	enum matio_classes matvar_class;
	char * inputFile = "DATA\\patac_navi_array.mat";
	char * var = "patac_navi_array";

	matvar_class = MAT_C_DOUBLE;
	mat = Mat_Open(inputFile, MAT_ACC_RDONLY);
	if (mat) {
		matvar = Mat_VarReadInfo(mat, var);
	}
	else{
		printf("Open Mat file Error!\n");
		return;
	}
	if (matvar != NULL) {
		matvar->class_type = matvar_class;
		edge[0] = matvar->dims[0];
		edge[1] = matvar->dims[1];

		Mat_VarReadData(mat, matvar, result, start, stride, edge);
		Mat_VarFree(matvar);
	}
	else{
		printf("Read Mat Error!\n");
		return;
	}
	Mat_Close(mat);
	return;

	//int idx0;
	//int idx1;

	///* Loop over the array to initialize each element. */
	//for (idx0 = 0; idx0 < 6; idx0++) {
	//  for (idx1 = 0; idx1 < 4; idx1++) {
	//    /* Set the value of the array element.
	//       Change this value to the value that the application requires. */
	//    result[idx0 + 6 * idx1] = argInit_real_T();
	//  }
	//}
}

/*
* Arguments    : double result[24]
* Return Type  : void
*/


static void argInit_workspace_real_T(mat_t *mat, matvar_t *matvar, matlab_record_data_t* result)
{
	int err = 0;
	int start[3] = { 0, 0, 0 }, stride[3] = { 1, 1, 1 }, edge[3] = { 1, 1, 1 };
	matvar_t *field_L1, *field_L2, *field;

	if (!mat) {
		printf("Input Mat file Null!\n");
		return;
	}
	else
	{
		if (matvar != NULL && matvar->class_type == MAT_C_STRUCT) {
			int numFields;
			numFields = Mat_VarGetNumberOfFields(matvar);
			for (int i = 1; i <= numFields; i++)
			{
				field_L1 = Mat_VarGetStructField(matvar, (void*)&i, MAT_BY_INDEX, 0);
				if (field_L1 != NULL && strcmp(field_L1->name, "Y") == 0) {
					edge[0] = field_L1->dims[0];
					edge[1] = field_L1->dims[1];

					result->struct_size = edge[0] * edge[1];
					result->struct_name = (char **)malloc(result->struct_size* sizeof(char *));
					result->struct_data = (double **)malloc(result->struct_size * sizeof(double *));
					if (field_L1 != NULL && field_L1->class_type == MAT_C_STRUCT) {

						int numFields1;
						numFields1 = Mat_VarGetNumberOfFields(field_L1);

						for (int ii = 1; ii <= numFields1; ii++)
						{
							field_L2 = Mat_VarGetStructField(field_L1, (void*)&ii, MAT_BY_INDEX, 0);
							if (field_L2 != NULL && strcmp(field_L2->name, "Name") == 0) {
								for (int iii = 0; iii < result->struct_size; iii++)
								{
									field = Mat_VarGetStructField(field_L1, (void*)&ii, MAT_BY_INDEX, iii);
									int read_err = Mat_VarReadDataAll(mat, field);
									result->struct_name[iii] = (char *)field->data;
									//printf("%s\n", structName[iii]);							
								}
							}
							else if (field_L2 != NULL && strcmp(field_L2->name, "Data") == 0) {
								field = Mat_VarGetStructField(field_L1, (void*)&ii, MAT_BY_INDEX, 0);

								for (int iii = 0; iii < result->struct_size; iii++)
								{
									field = Mat_VarGetStructField(field_L1, (void*)&ii, MAT_BY_INDEX, iii);
									if (result->data_size != field->dims[0] * field->dims[1])
									{
										printf("recorded data size doesn't match!\nQuit\n");
										return;
									}
									int read_err = Mat_VarReadDataAll(mat, field);
									result->struct_data[iii] = (double *)field->data;
									printf("%s: %f %f %f %f %f \n", result->struct_name[iii], result->struct_data[iii][0], \
										result->struct_data[iii][1], result->struct_data[iii][2], result->struct_data[iii][3], result->struct_data[iii][4]);
								}
							}
						}
					}
				}
				else if (field_L1 != NULL && strcmp(field_L1->name, "X") == 0)
				{
					edge[0] = field_L1->dims[0];
					edge[1] = field_L1->dims[1];
					if (field_L1 != NULL ) {

						int numFields1;
						numFields1 = Mat_VarGetNumberOfFields(field_L1);

						for (int ii = 1; ii <= numFields1; ii++)
						{
							field_L2 = Mat_VarGetStructField(field_L1, (void*)&ii, MAT_BY_INDEX, 0);
							if (field_L2 != NULL && strcmp(field_L2->name, "Data") == 0) {
								field = Mat_VarGetStructField(field_L1, (void*)&ii, MAT_BY_INDEX, 0);
								result->data_size = field->dims[0] * field->dims[1];

								int read_err = Mat_VarReadDataAll(mat, field);
								result->time_stamp = (double *)field->data;
								printf("Time Stamp:%.3f;%.3f;%.3f;%.3f;%.3f\n", result->time_stamp[0], result->time_stamp[1000], \
									result->time_stamp[3000], result->time_stamp[4000], result->time_stamp[5000], result->time_stamp[6000]);
								
							}
						}
					}
				}
			}
		}else{
			printf("Mat Variable Read Error or Not a struct!\nQuit\n");
			return;
		}
	}

	return;
}

/*
 * Arguments    : double result[594]
 * Return Type  : void
 */
static void argInit_99x6_real_T(double result[594])
{
	int err = 0;
	int start[3] = { 0, 0, 0 }, stride[3] = { 1, 1, 1 }, edge[3] = { 2, 2, 1 };
	mat_t *mat;
	matvar_t *matvar;
	enum matio_classes matvar_class;
	char * inputFile = "DATA\\landmarks_patac_schimmel_ccw.mat";
	char * var = "landmarks_patac_schimmel_ccw";

	matvar_class = MAT_C_DOUBLE;
	mat = Mat_Open(inputFile, MAT_ACC_RDONLY);
	if (mat) {
		matvar = Mat_VarReadInfo(mat, var);
	}
	else{
		printf("Open Mat file Error!\n");
		return;
	}
	if (matvar != NULL) {
		matvar->class_type = matvar_class;
		edge[0] = matvar->dims[0];
		edge[1] = matvar->dims[1];

		Mat_VarReadData(mat, matvar, result, start, stride, edge);
		Mat_VarFree(matvar);
	}
	else{
		printf("Read Mat Error!\n");
		return;
	}
	Mat_Close(mat);
	return;

	//int idx0;
	//int idx1;

	///* Loop over the array to initialize each element. */
	//for (idx0 = 0; idx0 < 99; idx0++) {
	//  for (idx1 = 0; idx1 < 6; idx1++) {
	//    /* Set the value of the array element.
	//       Change this value to the value that the application requires. */
	//    result[idx0 + 99 * idx1] = argInit_real_T();
	//  }
	//}
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
	return 0.0;
}

/*
 * Arguments    : struct0_T *result
 * Return Type  : void
 */
static void argInit_struct0_T(struct0_T *result)
{
	int i, err = 0;
	int nmemb;
	int start[3] = { 0, 0, 0 }, stride[3] = { 1, 1, 1 }, edge[3] = { 2, 2, 1 };
	mat_t *mat;
	matvar_t *matvar_struct, *matvar;
	enum matio_classes matvar_class;
	char * inputFile = "DATA\\innerLNM_1.mat";
	char * var = "innerLNM_1";

	matvar_class = MAT_C_DOUBLE;
	mat = Mat_Open(inputFile, MAT_ACC_RDONLY);
	if (mat) {
		matvar_struct = Mat_VarReadInfo(mat, var);
	}
	else{
		printf("Open Mat file Error!\n");
		return;
	}
	if (matvar_struct != NULL && matvar_struct->class_type == MAT_C_STRUCT) {
		nmemb = 1;
		for (i = 0; i < matvar_struct->rank; i++)
		{
			nmemb *= matvar_struct->dims[i];
		}
		int index = 1;
		matvar = Mat_VarGetStructField(matvar_struct, (void*)&index, MAT_BY_INDEX, 0);
		if (matvar != NULL) {
			matvar->class_type = matvar_class;
			edge[0] = matvar->dims[0];
			edge[1] = matvar->dims[1];

			Mat_VarReadData(mat, matvar, result->coordinate, start, stride, edge);
			Mat_VarFree(matvar);
		}
		else{
			printf("Read Mat Error!\n");
			return;
		}
		index = 2;
		matvar = Mat_VarGetStructField(matvar_struct, (void*)&index, MAT_BY_INDEX, 0);
		if (matvar != NULL) {
			matvar->class_type = matvar_class;
			edge[0] = matvar->dims[0];
			edge[1] = matvar->dims[1];

			Mat_VarReadData(mat, matvar, result->Vertex_index, start, stride, edge);
			Mat_VarFree(matvar);
		}
		else{
			printf("Read Mat Error!\n");
			return;
		}

	}
	else{
		printf("Matvar is not a struct!");
		return;
	}

	Mat_Close(mat);



	///* Set the value of each structure field.
	//    Change this value to the value that the application requires. */
	// argInit_1781x2_real_T(result->coordinate);
	// argInit_4x2_real_T(result->Vertex_index);
}

/*
 * Arguments    : struct1_T *result
 * Return Type  : void
 */
static void argInit_struct1_T(struct1_T *result)
{
	int i, err = 0;
	int nmemb;
	int start[3] = { 0, 0, 0 }, stride[3] = { 1, 1, 1 }, edge[3] = { 2, 2, 1 };
	mat_t *mat;
	matvar_t *matvar_struct, *matvar;
	enum matio_classes matvar_class;
	char * inputFile = "DATA\\middleLNM_2.mat";
	char * var = "middleLNM_2";

	matvar_class = MAT_C_DOUBLE;
	mat = Mat_Open(inputFile, MAT_ACC_RDONLY);
	if (mat) {
		matvar_struct = Mat_VarReadInfo(mat, var);
	}
	else{
		printf("Open Mat file Error!\n");
		return;
	}
	if (matvar_struct != NULL && matvar_struct->class_type == MAT_C_STRUCT) {
		nmemb = 1;
		for (i = 0; i < matvar_struct->rank; i++)
		{
			nmemb *= matvar_struct->dims[i];
		}
		int index = 1;
		matvar = Mat_VarGetStructField(matvar_struct, (void*)&index, MAT_BY_INDEX, 0);
		if (matvar != NULL) {
			matvar->class_type = matvar_class;
			edge[0] = matvar->dims[0];
			edge[1] = matvar->dims[1];

			Mat_VarReadData(mat, matvar, result->coordinate, start, stride, edge);
			Mat_VarFree(matvar);
		}
		else{
			printf("Read Mat Error!\n");
			return;
		}
		index = 2;
		matvar = Mat_VarGetStructField(matvar_struct, (void*)&index, MAT_BY_INDEX, 0);
		if (matvar != NULL) {
			matvar->class_type = matvar_class;
			edge[0] = matvar->dims[0];
			edge[1] = matvar->dims[1];

			Mat_VarReadData(mat, matvar, result->Vertex_index, start, stride, edge);
			Mat_VarFree(matvar);
		}
		else{
			printf("Read Mat Error!\n");
			return;
		}

	}
	else{
		printf("Matvar is not a struct!");
		return;
	}

	Mat_Close(mat);

	///* Set the value of each structure field.
	//   Change this value to the value that the application requires. */
	//argInit_1701x3_real_T(result->coordinate);
	//argInit_4x2_real_T(result->Vertex_index);
}

/*
 * Arguments    : struct2_T *result
 * Return Type  : void
 */
static void argInit_struct2_T(struct2_T *result)
{
	int i, err = 0;
	int nmemb;
	int start[3] = { 0, 0, 0 }, stride[3] = { 1, 1, 1 }, edge[3] = { 2, 2, 1 };
	mat_t *mat;
	matvar_t *matvar_struct, *matvar;
	enum matio_classes matvar_class;
	char * inputFile = "DATA\\outerLNM_1.mat";
	char * var = "outerLNM_1";

	matvar_class = MAT_C_DOUBLE;
	mat = Mat_Open(inputFile, MAT_ACC_RDONLY);
	if (mat) {
		matvar_struct = Mat_VarReadInfo(mat, var);
	}
	else{
		printf("Open Mat file Error!\n");
		return;
	}
	if (matvar_struct != NULL && matvar_struct->class_type == MAT_C_STRUCT) {
		nmemb = 1;
		for (i = 0; i < matvar_struct->rank; i++)
		{
			nmemb *= matvar_struct->dims[i];
		}
		int index = 1;
		matvar = Mat_VarGetStructField(matvar_struct, (void*)&index, MAT_BY_INDEX, 0);
		if (matvar != NULL) {
			matvar->class_type = matvar_class;
			edge[0] = matvar->dims[0];
			edge[1] = matvar->dims[1];

			Mat_VarReadData(mat, matvar, result->coordinate, start, stride, edge);
			Mat_VarFree(matvar);
		}
		else{
			printf("Read Mat Error!\n");
			return;
		}
		index = 2;
		matvar = Mat_VarGetStructField(matvar_struct, (void*)&index, MAT_BY_INDEX, 0);
		if (matvar != NULL) {
			matvar->class_type = matvar_class;
			edge[0] = matvar->dims[0];
			edge[1] = matvar->dims[1];

			Mat_VarReadData(mat, matvar, result->Vertex_index, start, stride, edge);
			Mat_VarFree(matvar);
		}
		else{
			printf("Read Mat Error!\n");
			return;
		}

	}
	else{
		printf("Matvar is not a struct!");
		return;
	}

	Mat_Close(mat);
	return;
	///* Set the value of each structure field.
	//   Change this value to the value that the application requires. */
	//argInit_1841x2_real_T(result->coordinate);
	//argInit_4x2_real_T(result->Vertex_index);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void c_main_slam_ekf_patac_map_pose_(void)
{
	double chi2_dat[1000];
	static struct0_T innerLine;
	static struct1_T middleLine;
	static struct2_T outerLine;
	double lane_offset;
	double landmarks[594];
	double sensor_data_raw[160];
	double object_list[3302];
	double patac_navi[24];
	double global_landmarks[594];
	double vehicle_state[5];
	double object_list_update[3302];
	double CIPO_id[10];
	double CIPO_next_id[10];
	double c_landmarks_in_proximity_id_in_[99];
	double d_landmarks_in_proximity_id_in_[99];
	double maneuvers[24];
	static double innerLaneMark[3562];
	static double middleLaneMark[3402];
	static double outerLaneMark[3682];
	double cubic_poly_coef[4];
	double ego_location;
	double odo_state_v;
	double t_in_utm;
	double x_in_utm;
	double y_in_utm;
	double a_in_utm;
	double delta_t;
	double x_last;
	double y_last;
	double v_last[2];
	double state_flag;
	double veh_ori_pos[4];
	double step_out;
	matlab_record_data_t workspace_var;
	mat_t *mat,*mat_ss;
	matvar_t *matvar, *matvar_ss;
	char * inputFile = "DATA\\TestData_001.mat";
	char * var = "TestData_001";
	double odo_motion_v, rtk_gps_lat, rtk_gps_lon, rtk_gps_yaw, rtk_gps_ts, object_num;
	char * inputFile_snap = "DATA\\test_snapshot_result.mat";
	char * var_rtk_lat = "rtk_gps_lat";
	char * var_rtk_lon = "rtk_gps_lon";
	char * var_rtk_yaw = "rtk_gps_yaw";
	char * var_rtk_ts = "rtk_gps_ts";
	char * var_sensor_raw = "sensor_data_raw";
	char * var_object_list = "object_list";
	char * var_object_num = "object_num";
	char * var_odo_motion_v = "odo_motion_v";

	

	/* Initialize function 'slam_ekf_patac_map_pose_output' input arguments. */
	mat = Mat_Open(inputFile, MAT_ACC_RDONLY);
	if (!mat) {
		printf("Open Mat file Error!\n");
		return;
	}
	else
	{
		matvar = Mat_VarReadInfo(mat, (char *)var);
		if(matvar == NULL || matvar->class_type != MAT_C_STRUCT ){
			printf("Open Mat Variable Error or Not a Mat Struct!\n");
			return;
		}
	}
	
	argInit_workspace_real_T(mat, matvar, &workspace_var);
	/* Initialize function input argument 'chi2_dat'. */
	argInit_1000x1_real_T(chi2_dat);

	/* Initialize function input argument 'innerLine'. */
	argInit_struct0_T(&innerLine);

	/* Initialize function input argument 'middleLine'. */
	argInit_struct1_T(&middleLine);

	/* Initialize function input argument 'outerLine'. */
	argInit_struct2_T(&outerLine);

	argInit_99x6_real_T(landmarks);//dv9
	argInit_6x4_real_T(patac_navi);//dv12

	/*Load Snapshot data*/
#define SIMULATION
#ifdef SIMULATION
	mat_ss = Mat_Open(inputFile_snap, MAT_ACC_RDONLY);
	if (!mat_ss) {
		printf("Open Mat file Error!\n");
		return;
	}
	else
	{
		matvar_ss = Mat_VarRead(mat_ss, (char *)var_odo_motion_v);
		if(matvar_ss == NULL || matvar_ss->class_type != MAT_C_DOUBLE ){
			printf("Open Mat Variable Error or Not a Mat Double!\n");
			return;
		}
		odo_motion_v = *((double *)matvar_ss->data);

		matvar_ss = Mat_VarRead(mat_ss, (char *)var_rtk_lat);
		if (matvar_ss == NULL || matvar_ss->class_type != MAT_C_DOUBLE){
			printf("Open Mat Variable Error or Not a Mat Double!\n");
			return;
		}
		rtk_gps_lat = *((double *)matvar_ss->data);

		matvar_ss = Mat_VarRead(mat_ss, (char *)var_rtk_lon);
		if (matvar_ss == NULL || matvar_ss->class_type != MAT_C_DOUBLE){
			printf("Open Mat Variable Error or Not a Mat Double!\n");
			return;
		}
		rtk_gps_lon = *((double *)matvar_ss->data);

		matvar_ss = Mat_VarRead(mat_ss, (char *)var_rtk_yaw);
		if (matvar_ss == NULL || matvar_ss->class_type != MAT_C_DOUBLE){
			printf("Open Mat Variable Error or Not a Mat Double!\n");
			return;
		}
		rtk_gps_yaw = *((double *)matvar_ss->data);

		matvar_ss = Mat_VarRead(mat_ss, (char *)var_rtk_ts);
		if (matvar_ss == NULL || matvar_ss->class_type != MAT_C_DOUBLE){
			printf("Open Mat Variable Error or Not a Mat Double!\n");
			return;
		}
		rtk_gps_ts = *((double *)matvar_ss->data);

		matvar_ss = Mat_VarRead(mat_ss, (char *)var_object_num);
		if (matvar_ss == NULL || matvar_ss->class_type != MAT_C_DOUBLE){
			printf("Open Mat Variable Error or Not a Mat Double!\n");
			return;
		}
		object_num = *((double *)matvar_ss->data);

		matvar_ss = Mat_VarRead(mat_ss, (char *)var_sensor_raw);
		if (matvar_ss == NULL || matvar_ss->class_type != MAT_C_DOUBLE){
			printf("Open Mat Variable Error or Not a Mat Double!\n");
			return;
		}
		memcpy(sensor_data_raw, matvar_ss->data, 160*sizeof(double));


		matvar_ss = Mat_VarRead(mat_ss, (char *)var_object_list);
		if (matvar_ss == NULL || matvar_ss->class_type != MAT_C_DOUBLE){
			printf("Open Mat Variable Error or Not a Mat Double!\n");
			return;
		}
		memcpy(object_list, matvar_ss->data, 3302 * sizeof(double));
	}
	lane_offset = argInit_real_T();//input from configuration.

	//odo_motion_v, rtk_gps_lat, rtk_gps_lon, rtk_gps_yaw, rtk_gps_ts, object_num;
	//char * var_odo_motion_v = "odo_motion_v";
	//char * var_rtk_lat = "rtk_gps_lat";
	//char * var_rtk_lon = "rtk_gps_lon";
	//char * var_rtk_yaw = "rtk_gps_yaw";
	//char * var_rtk_ts = "rtk_gps_ts";
	//char * var_sensor_raw = "sensor_data_raw";
	//char * var_object_list = "object_list";
	//char * var_object_num = "object_num";

#else
	lane_offset = argInit_real_T();
	argInit_40x4_real_T(sensor_data_raw);
	argInit_127x26_real_T(object_list);
	odo_motion_v = argInit_real_T();
	rtk_gps_lat = argInit_real_T();
	rtk_gps_lon = argInit_real_T();
	rtk_gps_yaw = argInit_real_T();
	rtk_gps_ts = argInit_real_T();
	object_num = argInit_real_T();
	lane_offset = argInit_real_T();


	argInit_40x4_real_T(sensor_data_raw);
	argInit_127x26_real_T(object_list);
#endif


	/* Initialize function input argument 'landmarks'. */
	/* Initialize function input argument 'sensor_data_raw'. */
	/* Initialize function input argument 'object_list'. */
	/* Initialize function input argument 'patac_navi'. */
	/* Call the entry-point 'slam_ekf_patac_map_pose_output'. */

	slam_ekf_patac_map_pose_output(chi2_dat, &innerLine, &middleLine, &outerLine,
		lane_offset, landmarks, odo_motion_v, rtk_gps_lat, rtk_gps_lon,
	rtk_gps_yaw, rtk_gps_ts, sensor_data_raw, object_list, object_num, patac_navi,
		global_landmarks, vehicle_state, object_list_update, CIPO_id, CIPO_next_id,
		c_landmarks_in_proximity_id_in_, d_landmarks_in_proximity_id_in_, maneuvers,
		innerLaneMark, middleLaneMark, outerLaneMark, cubic_poly_coef, &ego_location,
		&odo_state_v, &t_in_utm, &x_in_utm, &y_in_utm, &a_in_utm, &delta_t, &x_last,
		&y_last, v_last, &state_flag, veh_ori_pos, &step_out);

	Mat_VarFree(matvar);
	Mat_Close(mat);
	Mat_VarFree(matvar_ss);
	Mat_Close(mat_ss);
	
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
	(void)argc;
	(void)argv;

	/* Initialize the application.
	   You do not need to do this more than one time. */
	slam_ekf_patac_map_pose_output_initialize();

	/* Invoke the entry-point functions.
	   You can call entry-point functions multiple times. */
	c_main_slam_ekf_patac_map_pose_();

	/* Terminate the application.
	   You do not need to do this more than one time. */
	slam_ekf_patac_map_pose_output_terminate();
	return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
