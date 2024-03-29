/*
 * File: Factorial_while.h
 *
 * Code generated for Simulink model 'Factorial_while'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 11:03:18 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Factorial_while_h_
#define RTW_HEADER_Factorial_while_h_
#include <stddef.h>
#include <string.h>
#ifndef Factorial_while_COMMON_INCLUDES_
#define Factorial_while_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_while_COMMON_INCLUDES_ */

#include "Factorial_while_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
} DW_Factorial_while_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T y;                            /* '<Root>/y' */
} ExtY_Factorial_while_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_while_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Factorial_while_T Factorial_while_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Factorial_while_T Factorial_while_Y;

/* Model entry point functions */
extern void Factorial_while_initialize(void);
extern void Factorial_while_step(void);
extern void Factorial_while_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_while_T *const Factorial_while_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'Factorial_while'
 * '<S1>'   : 'Factorial_while/While Iterator Subsystem'
 * '<S2>'   : 'Factorial_while/While Iterator Subsystem/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Factorial_while_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
