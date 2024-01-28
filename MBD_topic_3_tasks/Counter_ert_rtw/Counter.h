/*
 * File: Counter.h
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

#ifndef RTW_HEADER_Counter_h_
#define RTW_HEADER_Counter_h_
#include <string.h>
#include <stddef.h>
#ifndef Counter_COMMON_INCLUDES_
#define Counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Counter_COMMON_INCLUDES_ */

#include "Counter_types.h"

/* Child system includes */
#include "Counter_Up_or_Down.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  B_Counter_Up_or_Down_Counter_T Counter_Up_or_Down;/* '<Root>/Counter_Up_or_Down' */
} B_Counter_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_Counter_Up_or_Down_Counter_T Counter_Up_or_Down;/* '<Root>/Counter_Up_or_Down' */
} DW_Counter_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T CounterValue;                 /* '<Root>/CounterValue' */
  real_T Enter1forcountupand0forcountdow;/* '<Root>/Choice' */
} ExtU_Counter_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_Counter_T;

/* Real-time Model Data Structure */
struct tag_RTM_Counter_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Counter_T Counter_B;

/* Block states (default storage) */
extern DW_Counter_T Counter_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Counter_T Counter_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Counter_T Counter_Y;

/* Model entry point functions */
extern void Counter_initialize(void);
extern void Counter_step(void);
extern void Counter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Counter_T *const Counter_M;

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
 * '<Root>' : 'Counter'
 * '<S1>'   : 'Counter/Counter_Up_or_Down'
 * '<S2>'   : 'Counter/Counter_Up_or_Down/If Action Subsystem'
 * '<S3>'   : 'Counter/Counter_Up_or_Down/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
