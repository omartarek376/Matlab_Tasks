/*
 * File: Calculator_Simulink.c
 *
 * Code generated for Simulink model 'Calculator_Simulink'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 17 19:59:33 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator_Simulink.h"
#include "Calculator_Simulink_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_Simulink_T Calculator_Simulink_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_Simulink_T Calculator_Simulink_Y;

/* Real-time model */
static RT_MODEL_Calculator_Simulink_T Calculator_Simulink_M_;
RT_MODEL_Calculator_Simulink_T *const Calculator_Simulink_M =
  &Calculator_Simulink_M_;

/* Model step function */
void Calculator_Simulink_step(void)
{
  real_T rtb_Compare_0;
  boolean_T rtb_Compare;

  /* Outport: '<Root>/add_out' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  Sum: '<S1>/Add'
   */
  Calculator_Simulink_Y.add_out = Calculator_Simulink_U.Num1 +
    Calculator_Simulink_U.Num2;

  /* Outport: '<Root>/sub_out' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  Sum: '<S1>/Subtract'
   */
  Calculator_Simulink_Y.sub_out = Calculator_Simulink_U.Num1 -
    Calculator_Simulink_U.Num2;

  /* Outport: '<Root>/multiply_out' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  Product: '<S1>/Multiply'
   */
  Calculator_Simulink_Y.multiply_out = Calculator_Simulink_U.Num1 *
    Calculator_Simulink_U.Num2;

  /* Outport: '<Root>/unary_out' incorporates:
   *  Inport: '<Root>/Num3'
   *  UnaryMinus: '<S1>/Unary Minus'
   */
  Calculator_Simulink_Y.unary_out = -Calculator_Simulink_U.Num3;

  /* Outport: '<Root>/inc_out' incorporates:
   *  Constant: '<S4>/FixPt Constant'
   *  Inport: '<Root>/Num3'
   *  Sum: '<S4>/FixPt Sum1'
   */
  Calculator_Simulink_Y.inc_out = Calculator_Simulink_U.Num3 + 1.0;

  /* Outport: '<Root>/dec_out' incorporates:
   *  Constant: '<S3>/FixPt Constant'
   *  Inport: '<Root>/Num3'
   *  Sum: '<S3>/FixPt Sum1'
   */
  Calculator_Simulink_Y.dec_out = Calculator_Simulink_U.Num3 - 1.0;

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   *  Inport: '<Root>/Num2'
   */
  rtb_Compare = (Calculator_Simulink_U.Num2 == 0.0);

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/Num2'
   */
  if (rtb_Compare) {
    rtb_Compare_0 = 1.0;
  } else {
    rtb_Compare_0 = Calculator_Simulink_U.Num2;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Outport: '<Root>/divide_out' incorporates:
   *  Inport: '<Root>/Num1'
   *  Product: '<S1>/Divide'
   */
  Calculator_Simulink_Y.divide_out = Calculator_Simulink_U.Num1 / rtb_Compare_0;

  /* Switch: '<S1>/Switch1' incorporates:
   *  Outport: '<Root>/error_out'
   */
  if (rtb_Compare) {
    strncpy(&Calculator_Simulink_Y.error_out[0],
            &Calculator_Simulink_ConstB.StringConstant[0], 255U);
    Calculator_Simulink_Y.error_out[255] = '\x00';
  } else {
    strncpy(&Calculator_Simulink_Y.error_out[0],
            &Calculator_Simulink_ConstB.StringConstant1[0], 255U);
    Calculator_Simulink_Y.error_out[255] = '\x00';
  }

  /* End of Switch: '<S1>/Switch1' */
}

/* Model initialize function */
void Calculator_Simulink_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_Simulink_M, (NULL));

  /* external inputs */
  (void)memset(&Calculator_Simulink_U, 0, sizeof(ExtU_Calculator_Simulink_T));

  /* external outputs */
  (void) memset((void *)&Calculator_Simulink_Y, 0,
                sizeof(ExtY_Calculator_Simulink_T));
}

/* Model terminate function */
void Calculator_Simulink_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
