/*
 * File: Factorial_private.h
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

#ifndef RTW_HEADER_Factorial_private_h_
#define RTW_HEADER_Factorial_private_h_
#include "rtwtypes.h"

extern void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo);
extern int32_T mul_s32_sat(int32_T a, int32_T b);

#endif                                 /* RTW_HEADER_Factorial_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
