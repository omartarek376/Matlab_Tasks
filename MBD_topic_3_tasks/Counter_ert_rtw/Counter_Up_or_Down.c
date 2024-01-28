/*
 * File: Counter_Up_or_Down.c
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

#include "Counter_Up_or_Down.h"

/* Include model header file for global data */
#include "Counter.h"
#include "Counter_private.h"

/* System initialize for atomic system: '<Root>/Counter_Up_or_Down' */
void Counter_Counter_Up_or_Down_Init(DW_Counter_Up_or_Down_Counter_T *localDW)
{
  /* SystemInitialize for IfAction SubSystem: '<S1>/If Action Subsystem' */
  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  localDW->UnitDelay_DSTATE_b = -1.0;

  /* End of SystemInitialize for SubSystem: '<S1>/If Action Subsystem' */
}

/* Output and update for atomic system: '<Root>/Counter_Up_or_Down' */
void Counter_Counter_Up_or_Down(real_T rtu_CounterValue, real_T rtu_Choice,
  B_Counter_Up_or_Down_Counter_T *localB, DW_Counter_Up_or_Down_Counter_T
  *localDW)
{
  /* If: '<S1>/If' */
  if (rtu_Choice == 1.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  RelationalOperator: '<S2>/GreaterThan'
     *  Sum: '<S2>/Add'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    if (localDW->UnitDelay_DSTATE_b + 1.0 > rtu_CounterValue) {
      /* Switch: '<S2>/Switch' incorporates:
       *  Constant: '<S2>/Constant1'
       */
      localB->Switch_j = 0.0;
    } else {
      /* Switch: '<S2>/Switch' */
      localB->Switch_j = localDW->UnitDelay_DSTATE_b + 1.0;
    }

    /* End of Switch: '<S2>/Switch' */

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    localDW->UnitDelay_DSTATE_b = localB->Switch_j;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else if (rtu_Choice == 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/Constant'
     *  Sum: '<S3>/Add'
     *  UnitDelay: '<S3>/Unit Delay'
     */
    if (localB->Switch - 1.0 >= 0.0) {
      /* Switch: '<S3>/Switch' */
      localB->Switch--;
    } else {
      /* Switch: '<S3>/Switch' */
      localB->Switch = rtu_CounterValue;
    }

    /* End of Switch: '<S3>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  }

  /* End of If: '<S1>/If' */

  /* Merge: '<S1>/Merge' incorporates:
   *  SignalConversion: '<S1>/Signal Conversion1'
   */
  localB->Merge = localB->Switch;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
