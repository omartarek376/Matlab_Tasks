/*
 * File: array_task.h
 *
 * Code generated for Simulink model 'array_task'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 17 20:29:02 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_array_task_h_
#define RTW_HEADER_array_task_h_
#include <stddef.h>
#include <string.h>
#ifndef array_task_COMMON_INCLUDES_
#define array_task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* array_task_COMMON_INCLUDES_ */

#include "array_task_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_array_task_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T avg_out;                      /* '<Root>/avg_out' */
  real_T max_out;                      /* '<Root>/max_out' */
  real_T min_out;                      /* '<Root>/min_out' */
  real_T sum_out;                      /* '<Root>/sum_out' */
} ExtY_array_task_T;

/* Real-time Model Data Structure */
struct tag_RTM_array_task_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_array_task_T array_task_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_array_task_T array_task_Y;

/* Model entry point functions */
extern void array_task_initialize(void);
extern void array_task_step(void);
extern void array_task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_array_task_T *const array_task_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<S1>/Max of Elements' : Eliminated since input is scalar
 * Block '<S1>/Min of Elements' : Eliminated since input is scalar
 */

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
 * '<Root>' : 'array_task'
 * '<S1>'   : 'array_task/vector_operations'
 * '<S2>'   : 'array_task/vector_operations/Get_Size'
 */
#endif                                 /* RTW_HEADER_array_task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
