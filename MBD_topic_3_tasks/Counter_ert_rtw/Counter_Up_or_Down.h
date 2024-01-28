/*
 * File: Counter_Up_or_Down.h
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

#ifndef RTW_HEADER_Counter_Up_or_Down_h_
#define RTW_HEADER_Counter_Up_or_Down_h_
#ifndef Counter_COMMON_INCLUDES_
#define Counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Counter_COMMON_INCLUDES_ */

#include "Counter_types.h"

/* Block signals for system '<Root>/Counter_Up_or_Down' */
typedef struct {
  real_T Merge;                        /* '<S1>/Merge' */
  real_T Switch;                       /* '<S3>/Switch' */
  real_T Switch_j;                     /* '<S2>/Switch' */
} B_Counter_Up_or_Down_Counter_T;

/* Block states (default storage) for system '<Root>/Counter_Up_or_Down' */
typedef struct {
  real_T UnitDelay_DSTATE_b;           /* '<S2>/Unit Delay' */
} DW_Counter_Up_or_Down_Counter_T;

extern void Counter_Counter_Up_or_Down_Init(DW_Counter_Up_or_Down_Counter_T
  *localDW);
extern void Counter_Counter_Up_or_Down(real_T rtu_CounterValue, real_T
  rtu_Choice, B_Counter_Up_or_Down_Counter_T *localB,
  DW_Counter_Up_or_Down_Counter_T *localDW);

#endif                                 /* RTW_HEADER_Counter_Up_or_Down_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
