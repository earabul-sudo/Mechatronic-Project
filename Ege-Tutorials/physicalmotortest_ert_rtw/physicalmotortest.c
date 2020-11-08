/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: physicalmotortest.c
 *
 * Code generated for Simulink model 'physicalmotortest'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sun Nov  8 13:32:19 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "physicalmotortest.h"
#include "physicalmotortest_private.h"

/* Block signals (default storage) */
B_physicalmotortest_T physicalmotortest_B;

/* Block states (default storage) */
DW_physicalmotortest_T physicalmotortest_DW;

/* Real-time model */
static RT_MODEL_physicalmotortest_T physicalmotortest_M_;
RT_MODEL_physicalmotortest_T *const physicalmotortest_M = &physicalmotortest_M_;

/* Model step function */
void physicalmotortest_step(void)
{
  codertarget_arduinobase_inter_T *obj;
  real_T y;

  /* Constant: '<Root>/Constant' */
  physicalmotortest_B.Constant = physicalmotortest_P.Constant_Value;

  /* MATLABSystem: '<Root>/Forward' */
  obj = &physicalmotortest_DW.obj;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle(physicalmotortest_DW.obj.PinPWM);
  if (physicalmotortest_B.Constant < 255.0) {
    y = physicalmotortest_B.Constant;
  } else {
    y = 255.0;
  }

  if (!(y > 0.0)) {
    y = 0.0;
  }

  MW_PWM_SetDutyCycle(physicalmotortest_DW.obj.MW_PWM_HANDLE, y);

  /* End of MATLABSystem: '<Root>/Forward' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.2s, 0.0s] */
    rtExtModeUpload(0, (real_T)physicalmotortest_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(physicalmotortest_M)!=-1) &&
        !((rtmGetTFinal(physicalmotortest_M)-
           physicalmotortest_M->Timing.taskTime0) >
          physicalmotortest_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(physicalmotortest_M, "Simulation finished");
    }

    if (rtmGetStopRequested(physicalmotortest_M)) {
      rtmSetErrorStatus(physicalmotortest_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  physicalmotortest_M->Timing.taskTime0 =
    ((time_T)(++physicalmotortest_M->Timing.clockTick0)) *
    physicalmotortest_M->Timing.stepSize0;
}

/* Model initialize function */
void physicalmotortest_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(physicalmotortest_M, -1);
  physicalmotortest_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  physicalmotortest_M->Sizes.checksums[0] = (1284859533U);
  physicalmotortest_M->Sizes.checksums[1] = (1708006615U);
  physicalmotortest_M->Sizes.checksums[2] = (2029634113U);
  physicalmotortest_M->Sizes.checksums[3] = (2872850533U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    physicalmotortest_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(physicalmotortest_M->extModeInfo,
      &physicalmotortest_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(physicalmotortest_M->extModeInfo,
                        physicalmotortest_M->Sizes.checksums);
    rteiSetTPtr(physicalmotortest_M->extModeInfo, rtmGetTPtr(physicalmotortest_M));
  }

  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<Root>/Forward' */
    physicalmotortest_DW.obj.matlabCodegenIsDeleted = true;
    physicalmotortest_DW.obj.isInitialized = 0;
    physicalmotortest_DW.obj.matlabCodegenIsDeleted = false;
    physicalmotortest_DW.obj.PinPWM = 10U;
    obj = &physicalmotortest_DW.obj;
    physicalmotortest_DW.obj.isSetupComplete = false;
    physicalmotortest_DW.obj.isInitialized = 1;
    obj->MW_PWM_HANDLE = MW_PWM_Open(physicalmotortest_DW.obj.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(physicalmotortest_DW.obj.PinPWM);
    MW_PWM_Start(physicalmotortest_DW.obj.MW_PWM_HANDLE);
    physicalmotortest_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void physicalmotortest_terminate(void)
{
  codertarget_arduinobase_inter_T *obj;

  /* Terminate for MATLABSystem: '<Root>/Forward' */
  obj = &physicalmotortest_DW.obj;
  if (!physicalmotortest_DW.obj.matlabCodegenIsDeleted) {
    physicalmotortest_DW.obj.matlabCodegenIsDeleted = true;
    if ((physicalmotortest_DW.obj.isInitialized == 1) &&
        physicalmotortest_DW.obj.isSetupComplete) {
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(physicalmotortest_DW.obj.PinPWM);
      MW_PWM_SetDutyCycle(physicalmotortest_DW.obj.MW_PWM_HANDLE, 0.0);
      obj->MW_PWM_HANDLE = MW_PWM_GetHandle(physicalmotortest_DW.obj.PinPWM);
      MW_PWM_Close(physicalmotortest_DW.obj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Forward' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
