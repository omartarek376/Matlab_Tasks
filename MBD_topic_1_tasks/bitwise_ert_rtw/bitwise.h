/*
 * File: bitwise.h
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

#ifndef RTW_HEADER_bitwise_h_
#define RTW_HEADER_bitwise_h_
#include <string.h>
#include <stddef.h>
#ifndef bitwise_COMMON_INCLUDES_
#define bitwise_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* bitwise_COMMON_INCLUDES_ */

#include "bitwise_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint32_T Num1;                       /* '<Root>/Num1' */
  uint32_T Num2;                       /* '<Root>/Num2' */
} ExtU_bitwise_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T or_out;                     /* '<Root>/or_out' */
  uint32_T not1_out;                   /* '<Root>/not1_out' */
  uint32_T and_out;                    /* '<Root>/and_out' */
  uint32_T nand_out;                   /* '<Root>/nand_out' */
  uint32_T nor_out;                    /* '<Root>/nor_out' */
  uint32_T not2_out;                   /* '<Root>/not2_out' */
  uint32_T xor_out;                    /* '<Root>/xor_out' */
} ExtY_bitwise_T;

/* Real-time Model Data Structure */
struct tag_RTM_bitwise_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_bitwise_T bitwise_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_bitwise_T bitwise_Y;

/* Model entry point functions */
extern void bitwise_initialize(void);
extern void bitwise_step(void);
extern void bitwise_terminate(void);

/* Real-time Model object */
extern RT_MODEL_bitwise_T *const bitwise_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'bitwise'
 * '<S1>'   : 'bitwise/Subsystem'
 */
#endif                                 /* RTW_HEADER_bitwise_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
