/*
 * File: Factorial.c
 *
 * Code generated for Simulink model 'Factorial'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 09:10:15 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial.h"
#include "Factorial_private.h"

/* Block states (default storage) */
DW_Factorial_T Factorial_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_T Factorial_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_T Factorial_Y;

/* Real-time model */
static RT_MODEL_Factorial_T Factorial_M_;
RT_MODEL_Factorial_T *const Factorial_M = &Factorial_M_;
void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T absIn0;
  uint32_T absIn1;
  uint32_T in0Hi;
  uint32_T in0Lo;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  absIn0 = in0 < 0 ? ~(uint32_T)in0 + 1U : (uint32_T)in0;
  absIn1 = in1 < 0 ? ~(uint32_T)in1 + 1U : (uint32_T)in1;
  in0Hi = absIn0 >> 16U;
  in0Lo = absIn0 & 65535U;
  in1Hi = absIn1 >> 16U;
  absIn0 = absIn1 & 65535U;
  productHiLo = in0Hi * absIn0;
  productLoHi = in0Lo * in1Hi;
  absIn0 *= in0Lo;
  absIn1 = 0U;
  in0Lo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ absIn0;
  if (in0Lo < absIn0) {
    absIn1 = 1U;
  }

  absIn0 = in0Lo;
  in0Lo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (in0Lo < absIn0) {
    absIn1++;
  }

  absIn0 = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi) +
    absIn1;
  if ((in0 != 0) && ((in1 != 0) && ((in0 > 0) != (in1 > 0)))) {
    absIn0 = ~absIn0;
    in0Lo = ~in0Lo;
    in0Lo++;
    if (in0Lo == 0U) {
      absIn0++;
    }
  }

  *ptrOutBitsHi = absIn0;
  *ptrOutBitsLo = in0Lo;
}

int32_T mul_s32_sat(int32_T a, int32_T b)
{
  int32_T result;
  uint32_T u32_chi;
  uint32_T u32_clo;
  mul_wide_s32(a, b, &u32_chi, &u32_clo);
  if (((int32_T)u32_chi > 0) || ((u32_chi == 0U) && (u32_clo >= 2147483648U))) {
    result = MAX_int32_T;
  } else if (((int32_T)u32_chi < -1) || (((int32_T)u32_chi == -1) && (u32_clo <
               2147483648U))) {
    result = MIN_int32_T;
  } else {
    result = (int32_T)u32_clo;
  }

  return result;
}

/* Model step function */
void Factorial_step(void)
{
  int32_T s1_iter;
  int32_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/Input' */
  tmp = Factorial_U.Input;
  if (Factorial_U.Input > 2147483646) {
    tmp = 2147483646;
  } else if (Factorial_U.Input < 0) {
    tmp = 0;
  }

  /* End of Inport: '<Root>/Input' */
  for (s1_iter = 1; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  MATLAB Function: '<S1>/Factorial'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    /* MATLAB Function 'For Iterator Subsystem/Factorial': '<S2>:1' */
    /* '<S2>:1:3' y = u_old * u; */
    Factorial_Y.Out1 = mul_s32_sat(Factorial_DW.UnitDelay_DSTATE, s1_iter);

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    Factorial_DW.UnitDelay_DSTATE = Factorial_Y.Out1;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Factorial_DW, 0,
                sizeof(DW_Factorial_T));

  /* external inputs */
  Factorial_U.Input = 0;

  /* external outputs */
  Factorial_Y.Out1 = 0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Factorial_DW.UnitDelay_DSTATE = 1;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
