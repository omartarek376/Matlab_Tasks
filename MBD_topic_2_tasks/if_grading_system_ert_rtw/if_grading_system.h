/*
 * File: if_grading_system.h
 *
 * Code generated for Simulink model 'if_grading_system'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 11:31:08 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_if_grading_system_h_
#define RTW_HEADER_if_grading_system_h_
#include <string.h>
#include <stddef.h>
#ifndef if_grading_system_COMMON_INCLUDES_
#define if_grading_system_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* if_grading_system_COMMON_INCLUDES_ */

#include "if_grading_system_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_a
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_a[256];

  /* Computed Parameter: StringConstant_String_e
   * Referenced by: '<S4>/String Constant'
   */
  char_T StringConstant_String_e[256];

  /* Computed Parameter: StringConstant_String_g
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_g[256];
} ConstP_if_grading_system_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_if_grading_system_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_if_grading_system_T;

/* Real-time Model Data Structure */
struct tag_RTM_if_grading_system_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_if_grading_system_T if_grading_system_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_if_grading_system_T if_grading_system_Y;

/* Constant parameters (default storage) */
extern const ConstP_if_grading_system_T if_grading_system_ConstP;

/* Model entry point functions */
extern void if_grading_system_initialize(void);
extern void if_grading_system_step(void);
extern void if_grading_system_terminate(void);

/* Real-time Model object */
extern RT_MODEL_if_grading_system_T *const if_grading_system_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'if_grading_system'
 * '<S1>'   : 'if_grading_system/Grading'
 * '<S2>'   : 'if_grading_system/Grading/If Action Subsystem'
 * '<S3>'   : 'if_grading_system/Grading/If Action Subsystem1'
 * '<S4>'   : 'if_grading_system/Grading/If Action Subsystem2'
 * '<S5>'   : 'if_grading_system/Grading/If Action Subsystem3'
 */
#endif                                 /* RTW_HEADER_if_grading_system_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
