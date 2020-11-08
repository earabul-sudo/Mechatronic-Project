/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: fsmtest.c
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

#include "fsmtest.h"
#include "fsmtest_private.h"

/* Block states (default storage) */
DW_fsmtest_T fsmtest_DW;

/* Real-time model */
static RT_MODEL_fsmtest_T fsmtest_M_;
RT_MODEL_fsmtest_T *const fsmtest_M = &fsmtest_M_;

/* Forward declaration for local functions */
static void fsmtest_SystemCore_setup(codertarget_arduinobase_int_i_T *obj);
static void fsmtest_SystemCore_setup(codertarget_arduinobase_int_i_T *obj)
{
  obj->isInitialized = 1;
  if (obj->isInitialized == 1) {
    obj->TunablePropsChanged = true;
  }

  obj->isServer_ = 1.0;
  MW_WifiAndWifiTCPServerBegin(0, 25000.0, obj->isServer_, 192, 168, 1, 2);
  obj->TunablePropsChanged = false;
}

/* Model step function */
void fsmtest_step(void)
{
  codertarget_arduinobase_inter_T *obj;
  int32_T b_varargout_2;
  uint8_T b_varargout_1;

  /* MATLABSystem: '<Root>/WiFi TCP//IP Receive' */
  if (fsmtest_DW.obj_l.TunablePropsChanged) {
    fsmtest_DW.obj_l.TunablePropsChanged = false;
  }

  MW_WifiTCPFinalread(0, &b_varargout_1, 1, &b_varargout_2,
                      fsmtest_DW.obj_l.isServer_, 0U);

  /* MATLABSystem: '<Root>/PWM' incorporates:
   *  MATLABSystem: '<Root>/WiFi TCP//IP Receive'
   */
  obj = &fsmtest_DW.obj;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle(fsmtest_DW.obj.PinPWM);
  MW_PWM_SetDutyCycle(fsmtest_DW.obj.MW_PWM_HANDLE, (real_T)b_varargout_1);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(0, (real_T)fsmtest_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(fsmtest_M)!=-1) &&
        !((rtmGetTFinal(fsmtest_M)-fsmtest_M->Timing.taskTime0) >
          fsmtest_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(fsmtest_M, "Simulation finished");
    }

    if (rtmGetStopRequested(fsmtest_M)) {
      rtmSetErrorStatus(fsmtest_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  fsmtest_M->Timing.taskTime0 =
    ((time_T)(++fsmtest_M->Timing.clockTick0)) * fsmtest_M->Timing.stepSize0;
}

/* Model initialize function */
void fsmtest_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(fsmtest_M, -1);
  fsmtest_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  fsmtest_M->Sizes.checksums[0] = (3105880511U);
  fsmtest_M->Sizes.checksums[1] = (3730774049U);
  fsmtest_M->Sizes.checksums[2] = (3017127249U);
  fsmtest_M->Sizes.checksums[3] = (4081982100U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    fsmtest_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(fsmtest_M->extModeInfo,
      &fsmtest_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(fsmtest_M->extModeInfo, fsmtest_M->Sizes.checksums);
    rteiSetTPtr(fsmtest_M->extModeInfo, rtmGetTPtr(fsmtest_M));
  }

  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<Root>/WiFi TCP//IP Receive' */
    fsmtest_DW.obj_l.isInitialized = 0;
    fsmtest_SystemCore_setup(&fsmtest_DW.obj_l);

    /* Start for MATLABSystem: '<Root>/PWM' */
    fsmtest_DW.obj.matlabCodegenIsDeleted = true;
    fsmtest_DW.obj.isInitialized = 0;
    fsmtest_DW.obj.matlabCodegenIsDeleted = false;
    fsmtest_DW.obj.PinPWM = 9U;
    obj = &fsmtest_DW.obj;
    fsmtest_DW.obj.isSetupComplete = false;
    fsmtest_DW.obj.isInitialized = 1;
    obj->MW_PWM_HANDLE = MW_PWM_Open(fsmtest_DW.obj.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(fsmtest_DW.obj.PinPWM);
    MW_PWM_Start(fsmtest_DW.obj.MW_PWM_HANDLE);
    fsmtest_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void fsmtest_terminate(void)
{
  codertarget_arduinobase_inter_T *obj;

  /* Terminate for MATLABSystem: '<Root>/PWM' */
  obj = &fsmtest_DW.obj;
  if (!fsmtest_DW.obj.matlabCodegenIsDeleted) {
    fsmtest_DW.obj.matlabCodegenIsDeleted = true;
    if ((fsmtest_DW.obj.isInitialized == 1) && fsmtest_DW.obj.isSetupComplete) {
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(fsmtest_DW.obj.PinPWM);
      MW_PWM_SetDutyCycle(fsmtest_DW.obj.MW_PWM_HANDLE, 0.0);
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(fsmtest_DW.obj.PinPWM);
      MW_PWM_Close(fsmtest_DW.obj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/PWM' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
