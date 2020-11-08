/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: commtest.c
 *
 * Code generated for Simulink model 'commtest'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Oct 31 15:48:02 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "commtest.h"
#include "commtest_private.h"
#include "commtest_dt.h"

/* Block signals (default storage) */
B_commtest_T commtest_B;

/* Block states (default storage) */
DW_commtest_T commtest_DW;

/* Real-time model */
static RT_MODEL_commtest_T commtest_M_;
RT_MODEL_commtest_T *const commtest_M = &commtest_M_;

/* Forward declaration for local functions */
static void commtest_SystemCore_setup(codertarget_arduinobase_inter_T *obj);
static void commtest_SystemCore_setup(codertarget_arduinobase_inter_T *obj)
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
void commtest_step(void)
{
  /* MATLABSystem: '<Root>/WiFi TCP//IP Receive' */
  if (commtest_DW.obj.TunablePropsChanged) {
    commtest_DW.obj.TunablePropsChanged = false;
  }

  /* MATLABSystem: '<Root>/WiFi TCP//IP Receive' */
  MW_WifiTCPFinalread(0, &commtest_B.WiFiTCPIPReceive_o1, 1,
                      &commtest_B.WiFiTCPIPReceive_o2, commtest_DW.obj.isServer_,
                      0U);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(0, (real_T)commtest_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(commtest_M)!=-1) &&
        !((rtmGetTFinal(commtest_M)-commtest_M->Timing.taskTime0) >
          commtest_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(commtest_M, "Simulation finished");
    }

    if (rtmGetStopRequested(commtest_M)) {
      rtmSetErrorStatus(commtest_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  commtest_M->Timing.taskTime0 =
    ((time_T)(++commtest_M->Timing.clockTick0)) * commtest_M->Timing.stepSize0;
}

/* Model initialize function */
void commtest_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(commtest_M, -1);
  commtest_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  commtest_M->Sizes.checksums[0] = (2885876306U);
  commtest_M->Sizes.checksums[1] = (90893539U);
  commtest_M->Sizes.checksums[2] = (1744338538U);
  commtest_M->Sizes.checksums[3] = (870593715U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    commtest_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(commtest_M->extModeInfo,
      &commtest_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(commtest_M->extModeInfo, commtest_M->Sizes.checksums);
    rteiSetTPtr(commtest_M->extModeInfo, rtmGetTPtr(commtest_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    commtest_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;
  }

  /* Start for MATLABSystem: '<Root>/WiFi TCP//IP Receive' */
  commtest_DW.obj.isInitialized = 0;
  commtest_SystemCore_setup(&commtest_DW.obj);
}

/* Model terminate function */
void commtest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
