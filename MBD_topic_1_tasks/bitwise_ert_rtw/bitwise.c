/*
 * File: bitwise.c
 *
 * Code generated for Simulink model 'bitwise'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 17 20:41:11 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "bitwise.h"
#include "bitwise_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_bitwise_T bitwise_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_bitwise_T bitwise_Y;

/* Real-time model */
static RT_MODEL_bitwise_T bitwise_M_;
RT_MODEL_bitwise_T *const bitwise_M = &bitwise_M_;

/* Model step function */
void bitwise_step(void)
{
  uint32_T and_out_tmp;
  uint32_T or_out_tmp;

  /* S-Function (sfix_bitop): '<S1>/Bitwise OR' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOR'
   */
  or_out_tmp = bitwise_U.Num1 | bitwise_U.Num2;

  /* Outport: '<Root>/or_out' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise OR'
   */
  bitwise_Y.or_out = or_out_tmp;

  /* Outport: '<Root>/not1_out' incorporates:
   *  Inport: '<Root>/Num1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT_1'
   */
  bitwise_Y.not1_out = ~bitwise_U.Num1;

  /* S-Function (sfix_bitop): '<S1>/Bitwise AND' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NAND'
   */
  and_out_tmp = bitwise_U.Num1 & bitwise_U.Num2;

  /* Outport: '<Root>/and_out' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND'
   */
  bitwise_Y.and_out = and_out_tmp;

  /* Outport: '<Root>/nand_out' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise NAND'
   */
  bitwise_Y.nand_out = ~and_out_tmp;

  /* Outport: '<Root>/nor_out' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOR'
   */
  bitwise_Y.nor_out = ~or_out_tmp;

  /* Outport: '<Root>/not2_out' incorporates:
   *  Inport: '<Root>/Num2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT_2'
   */
  bitwise_Y.not2_out = ~bitwise_U.Num2;

  /* Outport: '<Root>/xor_out' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise XOR'
   */
  bitwise_Y.xor_out = bitwise_U.Num1 ^ bitwise_U.Num2;
}

/* Model initialize function */
void bitwise_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(bitwise_M, (NULL));

  /* external inputs */
  (void)memset(&bitwise_U, 0, sizeof(ExtU_bitwise_T));

  /* external outputs */
  (void) memset((void *)&bitwise_Y, 0,
                sizeof(ExtY_bitwise_T));
}

/* Model terminate function */
void bitwise_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
