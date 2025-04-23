/*
 * File: VCU_Interface.h
 *
 * Code generated for Simulink model 'VCU_Interface'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Tue Apr 22 13:10:09 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VCU_Interface_h_
#define RTW_HEADER_VCU_Interface_h_
#ifndef VCU_Interface_COMMON_INCLUDES_
#define VCU_Interface_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* VCU_Interface_COMMON_INCLUDES_ */

#include "VCU_Interface_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_VCU_Interface;  /* '<Root>/indicator logic' */
  uint8_T is_c3_VCU_Interface;         /* '<Root>/indicator logic' */
  uint8_T is_active_c1_VCU_Interface;  /* '<Root>/Chart1' */
  uint8_T is_c1_VCU_Interface;         /* '<Root>/Chart1' */
} DW_VCU_Interface_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T input_throttle_adc;           /* '<Root>/input_throttle_adc' */
  real_T Forward_btn;                  /* '<Root>/Forward_btn' */
  real_T Reverse_btn;                  /* '<Root>/Reverse_btn' */
  real_T LEFT_BUTTON;                  /* '<Root>/LEFT_BUTTON' */
  real_T RIGHT_BUTTON;                 /* '<Root>/RIGHT_BUTTON' */
  real_T input_brake_in;               /* '<Root>/input_brake_in' */
  real_T input_can_bms_data;           /* '<Root>/input_can_bms_data' */
} ExtU_VCU_Interface_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T LEFT_LED;                     /* '<Root>/LEFT_LED' */
  real_T RIGHT_LED;                    /* '<Root>/RIGHT_LED' */
  real_T motor_direction;              /* '<Root>/motor_direction' */
  real_T output_vcu_status_led;        /* '<Root>/output_vcu_status_led' */
  real_T output_can_vcu_command;       /* '<Root>/output_can_vcu_command' */
  real_T motor_speed;                  /* '<Root>/motor_speed' */
} ExtY_VCU_Interface_T;

/* Real-time Model Data Structure */
struct tag_RTM_VCU_Interface_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_VCU_Interface_T VCU_Interface_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_VCU_Interface_T VCU_Interface_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_VCU_Interface_T VCU_Interface_Y;

/* Model entry point functions */
extern void VCU_Interface_initialize(void);
extern void VCU_Interface_step(void);
extern void VCU_Interface_terminate(void);

/* Real-time Model object */
extern RT_MODEL_VCU_Interface_T *const VCU_Interface_M;

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
 * '<Root>' : 'VCU_Interface'
 * '<S1>'   : 'VCU_Interface/Chart1'
 * '<S2>'   : 'VCU_Interface/indicator logic'
 */
#endif                                 /* RTW_HEADER_VCU_Interface_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
