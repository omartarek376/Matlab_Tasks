/*
 * File: is_even_or_odd.h
 *
 * Code generated for Simulink model 'is_even_or_odd'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 11:44:55 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_is_even_or_odd_h_
#define RTW_HEADER_is_even_or_odd_h_
#include <stddef.h>
#ifndef is_even_or_odd_COMMON_INCLUDES_
#define is_even_or_odd_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* is_even_or_odd_COMMON_INCLUDES_ */

#include "is_even_or_odd_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T Input;                       /* '<Root>/Input' */
} ExtU_is_even_or_odd_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T y;                            /* '<Root>/y' */
} ExtY_is_even_or_odd_T;

/* Real-time Model Data Structure */
struct tag_RTM_is_even_or_odd_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_is_even_or_odd_T is_even_or_odd_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_is_even_or_odd_T is_even_or_odd_Y;

/* Model entry point functions */
extern void is_even_or_odd_initialize(void);
extern void is_even_or_odd_step(void);
extern void is_even_or_odd_terminate(void);

/* Real-time Model object */
extern RT_MODEL_is_even_or_odd_T *const is_even_or_odd_M;

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
 * '<Root>' : 'is_even_or_odd'
 * '<S1>'   : 'is_even_or_odd/Is_Even'
 */
#endif                                 /* RTW_HEADER_is_even_or_odd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
