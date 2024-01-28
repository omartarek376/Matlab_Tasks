/*
 * File: Counter.c
 *
 * Code generated for Simulink model 'Counter'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 12:47:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Counter.h"
#include "Counter_private.h"

/* Block signals (default storage) */
B_Counter_T Counter_B;

/* Block states (default storage) */
DW_Counter_T Counter_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Counter_T Counter_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Counter_T Counter_Y;

/* Real-time model */
static RT_MODEL_Counter_T Counter_M_;
RT_MODEL_Counter_T *const Counter_M = &Counter_M_;

/* Model step function */
void Counter_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Counter_Up_or_Down' */

  /* Inport: '<Root>/CounterValue' incorporates:
   *  Inport: '<Root>/Choice'
   */
  Counter_Counter_Up_or_Down(Counter_U.CounterValue,
    Counter_U.Enter1forcountupand0forcountdow, &Counter_B.Counter_Up_or_Down,
    &Counter_DW.Counter_Up_or_Down);

  /* End of Outputs for SubSystem: '<Root>/Counter_Up_or_Down' */

  /* Outport: '<Root>/Output' */
  Counter_Y.Output = Counter_B.Counter_Up_or_Down.Merge;
}

/* Model initialize function */
void Counter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Counter_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Counter_B), 0,
                sizeof(B_Counter_T));

  /* states (dwork) */
  (void) memset((void *)&Counter_DW, 0,
                sizeof(DW_Counter_T));

  /* external inputs */
  (void)memset(&Counter_U, 0, sizeof(ExtU_Counter_T));

  /* external outputs */
  Counter_Y.Output = 0.0;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Counter_Up_or_Down' */
  Counter_Counter_Up_or_Down_Init(&Counter_DW.Counter_Up_or_Down);

  /* End of SystemInitialize for SubSystem: '<Root>/Counter_Up_or_Down' */
}

/* Model terminate function */
void Counter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
