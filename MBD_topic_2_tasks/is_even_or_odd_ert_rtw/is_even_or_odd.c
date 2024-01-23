/*
 * File: is_even_or_odd.c
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

#include "is_even_or_odd.h"
#include "is_even_or_odd_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_is_even_or_odd_T is_even_or_odd_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_is_even_or_odd_T is_even_or_odd_Y;

/* Real-time model */
static RT_MODEL_is_even_or_odd_T is_even_or_odd_M_;
RT_MODEL_is_even_or_odd_T *const is_even_or_odd_M = &is_even_or_odd_M_;

/* Model step function */
void is_even_or_odd_step(void)
{
  /* MATLAB Function: '<Root>/Is_Even' incorporates:
   *  Inport: '<Root>/Input'
   */
  /* MATLAB Function 'Is_Even': '<S1>:1' */
  /* '<S1>:1:2' if mod(Num, 2) == 0 */
  if (is_even_or_odd_U.Input - ((is_even_or_odd_U.Input >> 1) << 1) == 0) {
    /* Outport: '<Root>/y' */
    /* '<S1>:1:3' y = 1; */
    is_even_or_odd_Y.y = 1.0;

    /*  means number is even */
  } else {
    /* Outport: '<Root>/y' */
    /* '<S1>:1:5' else */
    /* '<S1>:1:6' y = 0; */
    is_even_or_odd_Y.y = 0.0;

    /*  means number is odd */
  }

  /* End of MATLAB Function: '<Root>/Is_Even' */
}

/* Model initialize function */
void is_even_or_odd_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(is_even_or_odd_M, (NULL));

  /* external inputs */
  is_even_or_odd_U.Input = 0;

  /* external outputs */
  is_even_or_odd_Y.y = 0.0;
}

/* Model terminate function */
void is_even_or_odd_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
