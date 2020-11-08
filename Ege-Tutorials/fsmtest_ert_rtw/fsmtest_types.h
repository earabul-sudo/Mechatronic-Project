/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: fsmtest_types.h
 *
 * Code generated for Simulink model 'fsmtest'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Oct 31 19:58:49 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_fsmtest_types_h_
#define RTW_HEADER_fsmtest_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<Root>/PWM' */
#include "MW_SVD.h"
#ifndef struct_tag_lMInmD9zWRzKpUCrv0OfsC
#define struct_tag_lMInmD9zWRzKpUCrv0OfsC

struct tag_lMInmD9zWRzKpUCrv0OfsC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_PWM_HANDLE;
  uint32_T PinPWM;
};

#endif                                 /*struct_tag_lMInmD9zWRzKpUCrv0OfsC*/

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_lMInmD9zWRzKpUCrv0OfsC codertarget_arduinobase_inter_T;

#endif                               /*typedef_codertarget_arduinobase_inter_T*/

#ifndef struct_tag_MctHCtScAGrfjHf48vRcgB
#define struct_tag_MctHCtScAGrfjHf48vRcgB

struct tag_MctHCtScAGrfjHf48vRcgB
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  real_T isServer_;
};

#endif                                 /*struct_tag_MctHCtScAGrfjHf48vRcgB*/

#ifndef typedef_codertarget_arduinobase_int_i_T
#define typedef_codertarget_arduinobase_int_i_T

typedef struct tag_MctHCtScAGrfjHf48vRcgB codertarget_arduinobase_int_i_T;

#endif                               /*typedef_codertarget_arduinobase_int_i_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_fsmtest_T RT_MODEL_fsmtest_T;

#endif                                 /* RTW_HEADER_fsmtest_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
