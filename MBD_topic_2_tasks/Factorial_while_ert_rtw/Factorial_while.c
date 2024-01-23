/*
 * File: Factorial_while.c
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

#include "Factorial_while.h"
#include "Factorial_while_private.h"

/* Block states (default storage) */
DW_Factorial_while_T Factorial_while_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_while_T Factorial_while_Y;

/* Real-time model */
static RT_MODEL_Factorial_while_T Factorial_while_M_;
RT_MODEL_Factorial_while_T *const Factorial_while_M = &Factorial_while_M_;

/* Model step function */
void Factorial_while_step(void)
{
  int32_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* Constant: '<Root>/Constant1' */
  loopCond = true;
  while (loopCond) {
    /* Outport: '<Root>/y' incorporates:
     *  MATLAB Function: '<S1>/MATLAB Function'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    /* MATLAB Function 'While Iterator Subsystem/MATLAB Function': '<S2>:1' */
    /* '<S2>:1:2' y = Num * Input_old; */
    Factorial_while_Y.y = (real_T)s1_iter * Factorial_while_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/y'
     */
    Factorial_while_DW.UnitDelay_DSTATE = Factorial_while_Y.y;

    /* RelationalOperator: '<S1>/GreaterThan' incorporates:
     *  Constant: '<Root>/Constant'
     */
    loopCond = (5 > s1_iter);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_while_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_while_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Factorial_while_DW, 0,
                sizeof(DW_Factorial_while_T));

  /* external outputs */
  Factorial_while_Y.y = 0.0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/While Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Factorial_while_DW.UnitDelay_DSTATE = 1.0;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model terminate function */
void Factorial_while_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
