/*
 * File: Calculator_Simulink.h
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

#ifndef RTW_HEADER_Calculator_Simulink_h_
#define RTW_HEADER_Calculator_Simulink_h_
#include <string.h>
#include <stddef.h>
#ifndef Calculator_Simulink_COMMON_INCLUDES_
#define Calculator_Simulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                /* Calculator_Simulink_COMMON_INCLUDES_ */

#include "Calculator_Simulink_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S1>/String Constant' */
  const char_T StringConstant1[256];   /* '<S1>/String Constant1' */
} ConstB_Calculator_Simulink_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Num3;                         /* '<Root>/Num3' */
  real_T Num1;                         /* '<Root>/Num1' */
  real_T Num2;                         /* '<Root>/Num2' */
} ExtU_Calculator_Simulink_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T add_out;                      /* '<Root>/add_out' */
  real_T sub_out;                      /* '<Root>/sub_out' */
  real_T multiply_out;                 /* '<Root>/multiply_out' */
  real_T unary_out;                    /* '<Root>/unary_out' */
  real_T inc_out;                      /* '<Root>/inc_out' */
  real_T dec_out;                      /* '<Root>/dec_out' */
  real_T divide_out;                   /* '<Root>/divide_out' */
  char_T error_out[256];               /* '<Root>/error_out' */
} ExtY_Calculator_Simulink_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_Simulink_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Calculator_Simulink_T Calculator_Simulink_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calculator_Simulink_T Calculator_Simulink_Y;
extern const ConstB_Calculator_Simulink_T Calculator_Simulink_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Calculator_Simulink_initialize(void);
extern void Calculator_Simulink_step(void);
extern void Calculator_Simulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calculator_Simulink_T *const Calculator_Simulink_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S3>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S3>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S4>/FixPt Gateway In' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'Calculator_Simulink'
 * '<S1>'   : 'Calculator_Simulink/Full_calculator'
 * '<S2>'   : 'Calculator_Simulink/Full_calculator/Compare To Zero'
 * '<S3>'   : 'Calculator_Simulink/Full_calculator/Decrement Stored Integer'
 * '<S4>'   : 'Calculator_Simulink/Full_calculator/Increment Stored Integer'
 */
#endif                                 /* RTW_HEADER_Calculator_Simulink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
