/* Include files */

#include "modelInterface.h"
#include "m_3p3lAHZKbasWvD6nFrjFR.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "arduinoWiFiTCPReceive",             /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020b\\toolbox\\target\\supportpackages\\arduinobase\\+codertarget\\+arduinobase\\+internal\\ardu"
  "inoWiFiTCPReceive.p"                /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "D:\\Program Files (x86)\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "D:\\Program Files (x86)\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "D:\\Program Files (x86)\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "D:\\Program Files (x86)\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Propagates.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "D:\\Program Files (x86)\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\+internal\\CustomIcon.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "SampleTime",                        /* fcnName */
  "D:\\Program Files (x86)\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\SampleTime.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 20,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 46,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 48,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 53,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "D:\\Program Files (x86)\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "arduinoWiFiTCPReceive",             /* fName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2020b\\toolbox\\target\\supportpackages\\arduinobase\\+codertarget\\+arduinobase\\+internal\\ardu"
  "inoWiFiTCPReceive.p"                /* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const emlrtStack *sp);
static codertarget_arduinobase_internal_arduinoWiFiTCPReceive
  *arduinoWiFiTCPReceive_arduinoWiFiTCPReceive
  (codertarget_arduinobase_internal_arduinoWiFiTCPReceive *obj);
static void SystemCore_setup(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoWiFiTCPReceive *obj);
static void arduinoWiFiTCPReceive_validatePropertiesImpl(const emlrtStack *sp);
static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoWiFiTCPReceive *obj);
static void mw__internal__call__reset(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const emlrtStack *sp, uint8_T *c_y0, int32_T *c_y1);
static boolean_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_coder_internal_ifWhileCondExtrinsic_, const char_T *identifier);
static boolean_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static const mxArray *emlrt_marshallOut(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance);
static void c_emlrt_marshallIn(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static codertarget_arduinobase_internal_arduinoWiFiTCPReceive d_emlrt_marshallIn
  (const emlrtStack *sp, const mxArray *b_sysobj, const char_T *identifier);
static codertarget_arduinobase_internal_arduinoWiFiTCPReceive e_emlrt_marshallIn
  (const emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static const mxArray *bdroot(const emlrtStack *sp, emlrtMCInfo *location);
static const mxArray *getActiveConfigSet(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *codertarget_arduinobase_board_GetBoard(const emlrtStack
  *sp, emlrtMCInfo *location);
static const mxArray *getProperty(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *codertarget_targethardware_getTargetHardware(const
  emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *isempty(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *not(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location);
static const mxArray *coder_internal_ifWhileCondExtrinsic(const emlrtStack *sp,
  const mxArray *b, emlrtMCInfo *location);
static const mxArray *codertarget_arduinobase_internal_isESP8266Selected(const
  emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, moduleInstance->b_y0,
    moduleInstance->b_y1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    arduinoWiFiTCPReceive_arduinoWiFiTCPReceive(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &i_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static codertarget_arduinobase_internal_arduinoWiFiTCPReceive
  *arduinoWiFiTCPReceive_arduinoWiFiTCPReceive
  (codertarget_arduinobase_internal_arduinoWiFiTCPReceive *obj)
{
  codertarget_arduinobase_internal_arduinoWiFiTCPReceive *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  b_obj = obj;
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  b_obj->isInitialized = 0;
  b_obj->TunablePropsChanged = false;
  c_st.site = &d_emlrtRSI;
  st.site = &emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &e_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &f_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &g_emlrtRSI;
  return b_obj;
}

static void SystemCore_setup(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoWiFiTCPReceive *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  b_st.site = &d_emlrtRSI;
  arduinoWiFiTCPReceive_validatePropertiesImpl(&b_st);
  st.site = &d_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
  obj->TunablePropsChanged = false;
}

static void arduinoWiFiTCPReceive_validatePropertiesImpl(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 13 };

  static char_T b_u[13] = { 'I', 's', 'W', 'i', 'F', 'i', 'O', 'n', 'b', 'o',
    'a', 'r', 'd' };

  emlrtStack st;
  const mxArray *board;
  const mxArray *configSet;
  const mxArray *m;
  const mxArray *onBoardWiFi;
  const mxArray *y;
  int32_T i;
  char_T u[13];
  st.prev = sp;
  st.tls = sp->tls;
  configSet = NULL;
  board = NULL;
  onBoardWiFi = NULL;
  st.site = &emlrtRSI;
  emlrtAssign(&configSet, getActiveConfigSet(&st, bdroot(&st, &b_emlrtMCI),
    &b_emlrtMCI));
  st.site = &emlrtRSI;
  emlrtAssign(&board, codertarget_arduinobase_board_GetBoard(&st, &b_emlrtMCI));
  for (i = 0; i < 13; i++) {
    u[i] = b_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 13, m, &u[0]);
  emlrtAssign(&y, m);
  st.site = &emlrtRSI;
  emlrtAssign(&onBoardWiFi, getProperty(&st, emlrtAlias(board), y, &b_emlrtMCI));
  st.site = &emlrtRSI;
  if (emlrt_marshallIn(&st, coder_internal_ifWhileCondExtrinsic(&st, not(&st,
         isempty(&st, codertarget_targethardware_getTargetHardware(&st,
           emlrtAlias(configSet), &b_emlrtMCI), &b_emlrtMCI), &b_emlrtMCI),
        &b_emlrtMCI), "<output of coder.internal.ifWhileCondExtrinsic>")) {
    st.site = &emlrtRSI;
    emlrt_marshallIn(&st, coder_internal_ifWhileCondExtrinsic(&st, emlrtAlias
      (onBoardWiFi), &b_emlrtMCI),
                     "<output of coder.internal.ifWhileCondExtrinsic>");
  }

  st.site = &emlrtRSI;
  if (emlrt_marshallIn(&st, coder_internal_ifWhileCondExtrinsic(&st, not(&st,
         isempty(&st, codertarget_targethardware_getTargetHardware(&st,
           emlrtAlias(configSet), &b_emlrtMCI), &b_emlrtMCI), &b_emlrtMCI),
        &b_emlrtMCI), "<output of coder.internal.ifWhileCondExtrinsic>")) {
    st.site = &emlrtRSI;
    emlrt_marshallIn(&st, coder_internal_ifWhileCondExtrinsic(&st,
      codertarget_arduinobase_internal_isESP8266Selected(&st, emlrtAlias
      (configSet), &b_emlrtMCI), &b_emlrtMCI),
                     "<output of coder.internal.ifWhileCondExtrinsic>");
  }

  emlrtDestroyArray(&configSet);
  emlrtDestroyArray(&board);
  emlrtDestroyArray(&onBoardWiFi);
}

static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoWiFiTCPReceive *obj)
{
  static const int32_T iv[2] = { 1, 44 };

  static const int32_T iv1[2] = { 1, 44 };

  static char_T b_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[44];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static void mw__internal__call__reset(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 44 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 44 };

  static const int32_T iv4[2] = { 1, 5 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  codertarget_arduinobase_internal_arduinoWiFiTCPReceive *obj;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T b_u[44];
  char_T e_u[5];
  boolean_T tunablePropChangedBeforeResetImpl;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    arduinoWiFiTCPReceive_arduinoWiFiTCPReceive(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &j_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, c_y, e_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      b_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 44; i++) {
      b_u[i] = d_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &b_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, b_message(&b_st, d_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const emlrtStack *sp, uint8_T *c_y0, int32_T *c_y1)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  codertarget_arduinobase_internal_arduinoWiFiTCPReceive *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &h_emlrtRSI;
    arduinoWiFiTCPReceive_arduinoWiFiTCPReceive(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &k_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    c_st.site = &d_emlrtRSI;
    arduinoWiFiTCPReceive_validatePropertiesImpl(&c_st);
    obj->TunablePropsChanged = false;
  }

  b_st.site = &d_emlrtRSI;
  SystemCore_checkTunablePropChange(&b_st, obj);
  *c_y0 = 0U;
  *c_y1 = 0;
}

static boolean_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_coder_internal_ifWhileCondExtrinsic_, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias
    (a__output_of_coder_internal_ifWhileCondExtrinsic_), &thisId);
  emlrtDestroyArray(&a__output_of_coder_internal_ifWhileCondExtrinsic_);
  return y;
}

static boolean_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance)
{
  static const char_T *sv[2] = { "isInitialized", "TunablePropsChanged" };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T u;
  boolean_T b_u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv));
  u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  b_u = moduleInstance->sysobj.TunablePropsChanged;
  d_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", d_y, 1);
  emlrtSetCell(y, 0, b_y);
  e_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&e_y, m);
  emlrtSetCell(y, 1, e_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void c_emlrt_marshallIn(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "sysobj";
  moduleInstance->sysobj = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp,
    &thisId, u, 0)), "sysobj");
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = h_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, &thisId, u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static codertarget_arduinobase_internal_arduinoWiFiTCPReceive d_emlrt_marshallIn
  (const emlrtStack *sp, const mxArray *b_sysobj, const char_T *identifier)
{
  codertarget_arduinobase_internal_arduinoWiFiTCPReceive y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_arduinobase_internal_arduinoWiFiTCPReceive e_emlrt_marshallIn
  (const emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[2] = { "isInitialized", "TunablePropsChanged"
  };

  codertarget_arduinobase_internal_arduinoWiFiTCPReceive y;
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y.TunablePropsChanged = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 1, "TunablePropsChanged")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  c_emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *bdroot(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m;
  return emlrtCallMATLABR2012b(sp, 1, &m, 0, NULL, "bdroot", true, location);
}

static const mxArray *getActiveConfigSet(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getActiveConfigSet", true,
    location);
}

static const mxArray *codertarget_arduinobase_board_GetBoard(const emlrtStack
  *sp, emlrtMCInfo *location)
{
  const mxArray *m;
  return emlrtCallMATLABR2012b(sp, 1, &m, 0, NULL,
    "codertarget.arduinobase.board.GetBoard", true, location);
}

static const mxArray *getProperty(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "getProperty", true,
    location);
}

static const mxArray *codertarget_targethardware_getTargetHardware(const
  emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray,
    "codertarget.targethardware.getTargetHardware", true, location);
}

static const mxArray *isempty(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "isempty", true, location);
}

static const mxArray *not(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "not", true, location);
}

static const mxArray *coder_internal_ifWhileCondExtrinsic(const emlrtStack *sp,
  const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray,
    "coder.internal.ifWhileCondExtrinsic", true, location);
}

static const mxArray *codertarget_arduinobase_internal_isESP8266Selected(const
  emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray,
    "codertarget.arduinobase.internal.isESP8266Selected", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "message", true, location);
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_3p3lAHZKbasWvD6nFrjFR
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (uint8_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y1 = (int32_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    1);
}

/* CGXE Glue Code */
static void mdlOutputs_3p3lAHZKbasWvD6nFrjFR(SimStruct *S, int_T tid)
{
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_3p3lAHZKbasWvD6nFrjFR(SimStruct *S)
{
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_3p3lAHZKbasWvD6nFrjFR(SimStruct *S, int_T tid)
{
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_3p3lAHZKbasWvD6nFrjFR(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_3p3lAHZKbasWvD6nFrjFR(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_3p3lAHZKbasWvD6nFrjFR(SimStruct *S)
{
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_3p3lAHZKbasWvD6nFrjFR(SimStruct *S)
{
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_3p3lAHZKbasWvD6nFrjFR(SimStruct *S)
{
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_3p3lAHZKbasWvD6nFrjFR(SimStruct *S)
{
  InstanceStruct_3p3lAHZKbasWvD6nFrjFR *moduleInstance =
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR *)calloc(1, sizeof
    (InstanceStruct_3p3lAHZKbasWvD6nFrjFR));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_3p3lAHZKbasWvD6nFrjFR);
  ssSetmdlInitializeConditions(S, mdlInitialize_3p3lAHZKbasWvD6nFrjFR);
  ssSetmdlUpdate(S, mdlUpdate_3p3lAHZKbasWvD6nFrjFR);
  ssSetmdlTerminate(S, mdlTerminate_3p3lAHZKbasWvD6nFrjFR);
  ssSetmdlEnable(S, mdlEnable_3p3lAHZKbasWvD6nFrjFR);
  ssSetmdlDisable(S, mdlDisable_3p3lAHZKbasWvD6nFrjFR);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_3p3lAHZKbasWvD6nFrjFR(SimStruct *S)
{
}

void method_dispatcher_3p3lAHZKbasWvD6nFrjFR(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_3p3lAHZKbasWvD6nFrjFR(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_3p3lAHZKbasWvD6nFrjFR(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_3p3lAHZKbasWvD6nFrjFR(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_3p3lAHZKbasWvD6nFrjFR(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: 3p3lAHZKbasWvD6nFrjFR.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_3p3lAHZKbasWvD6nFrjFR_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString(
    "codertarget.arduinobase.internal.arduinoWiFiTCPReceive");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_3p3lAHZKbasWvD6nFrjFR_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.arduinobase.internal.arduinoWiFiTCPReceive");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
