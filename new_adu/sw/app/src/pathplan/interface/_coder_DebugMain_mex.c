/*
 * File: _coder_DebugMain_mex.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "_coder_DebugMain_api.h"
#include "_coder_DebugMain_mex.h"

/* Function Declarations */
static void DebugMain_mexFunction(int32_T nlhs, mxArray *plhs[12], int32_T nrhs,
  const mxArray *prhs[16]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[12]
 *                int32_T nrhs
 *                const mxArray *prhs[16]
 * Return Type  : void
 */
static void DebugMain_mexFunction(int32_T nlhs, mxArray *plhs[12], int32_T nrhs,
  const mxArray *prhs[16])
{
  int32_T n;
  const mxArray *inputs[16];
  const mxArray *outputs[12];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 16) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 16, 4,
                        9, "DebugMain");
  }

  if (nlhs > 12) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "DebugMain");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
  }

  /* Call the function. */
  DebugMain_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  DebugMain_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(DebugMain_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  DebugMain_initialize();

  /* Dispatch the entry-point. */
  DebugMain_mexFunction(nlhs, plhs, nrhs, prhs);
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_DebugMain_mex.c
 *
 * [EOF]
 */
