/*
 * File: array_task.c
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

#include "array_task.h"
#include "array_task_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_array_task_T array_task_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_array_task_T array_task_Y;

/* Real-time model */
static RT_MODEL_array_task_T array_task_M_;
RT_MODEL_array_task_T *const array_task_M = &array_task_M_;

/* Model step function */
void array_task_step(void)
{
  /* Outport: '<Root>/avg_out' incorporates:
   *  Inport: '<Root>/Input'
   */
  /* MATLAB Function 'vector_operations/Get_Size': '<S2>:1' */
  /* '<S2>:1:2' y = length(u); */
  array_task_Y.avg_out = array_task_U.Input;

  /* Outport: '<Root>/max_out' incorporates:
   *  Inport: '<Root>/Input'
   */
  array_task_Y.max_out = array_task_U.Input;

  /* Outport: '<Root>/min_out' incorporates:
   *  Inport: '<Root>/Input'
   */
  array_task_Y.min_out = array_task_U.Input;

  /* Outport: '<Root>/sum_out' incorporates:
   *  Inport: '<Root>/Input'
   */
  array_task_Y.sum_out = array_task_U.Input;
}

/* Model initialize function */
void array_task_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(array_task_M, (NULL));

  /* external inputs */
  array_task_U.Input = 0.0;

  /* external outputs */
  (void) memset((void *)&array_task_Y, 0,
                sizeof(ExtY_array_task_T));
}

/* Model terminate function */
void array_task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
