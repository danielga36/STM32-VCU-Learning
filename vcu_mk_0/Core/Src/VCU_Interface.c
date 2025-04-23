/*
 * File: VCU_Interface.c
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

#include "VCU_Interface.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart1' */
#define VCU_Interface_IN_Idle          ((uint8_T)1U)
#define VCU_Interface_IN_forward_motor ((uint8_T)2U)
#define VCU_Interface_IN_reverse_motor ((uint8_T)3U)

/* Named constants for Chart: '<Root>/indicator logic' */
#define VCU_Interfac_IN_Hazard_Blinking ((uint8_T)1U)
#define VCU_Interface_IN_Idle_b        ((uint8_T)2U)
#define VCU_Interface_IN_Left_Blinking ((uint8_T)3U)
#define VCU_Interface_IN_Right_Blinking ((uint8_T)4U)

/* Block states (default storage) */
DW_VCU_Interface_T VCU_Interface_DW;

/* External inputs (root inport signals with default storage) */
ExtU_VCU_Interface_T VCU_Interface_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_VCU_Interface_T VCU_Interface_Y;

/* Real-time model */
static RT_MODEL_VCU_Interface_T VCU_Interface_M_;
RT_MODEL_VCU_Interface_T *const VCU_Interface_M = &VCU_Interface_M_;

/* Model step function */
void VCU_Interface_step(void)
{
  /* Chart: '<Root>/indicator logic' incorporates:
   *  Inport: '<Root>/LEFT_BUTTON'
   *  Inport: '<Root>/RIGHT_BUTTON'
   */
  if (VCU_Interface_DW.is_active_c3_VCU_Interface == 0U) {
    VCU_Interface_DW.is_active_c3_VCU_Interface = 1U;
    VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interface_IN_Idle_b;

    /* Outport: '<Root>/LEFT_LED' */
    VCU_Interface_Y.LEFT_LED = 0.0;

    /* Outport: '<Root>/RIGHT_LED' */
    VCU_Interface_Y.RIGHT_LED = 0.0;
  } else {
    switch (VCU_Interface_DW.is_c3_VCU_Interface) {
     case VCU_Interfac_IN_Hazard_Blinking:
      /* Outport: '<Root>/LEFT_LED' */
      VCU_Interface_Y.LEFT_LED = 1.0;

      /* Outport: '<Root>/RIGHT_LED' */
      VCU_Interface_Y.RIGHT_LED = 1.0;
      if ((VCU_Interface_U.LEFT_BUTTON == 1.0) || (VCU_Interface_U.RIGHT_BUTTON ==
           1.0)) {
        VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interface_IN_Idle_b;

        /* Outport: '<Root>/LEFT_LED' */
        VCU_Interface_Y.LEFT_LED = 0.0;

        /* Outport: '<Root>/RIGHT_LED' */
        VCU_Interface_Y.RIGHT_LED = 0.0;
      }
      break;

     case VCU_Interface_IN_Idle_b:
      /* Outport: '<Root>/LEFT_LED' */
      VCU_Interface_Y.LEFT_LED = 0.0;

      /* Outport: '<Root>/RIGHT_LED' */
      VCU_Interface_Y.RIGHT_LED = 0.0;
      if ((VCU_Interface_U.LEFT_BUTTON == 1.0) && (VCU_Interface_U.RIGHT_BUTTON ==
           1.0)) {
        VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interfac_IN_Hazard_Blinking;

        /* Outport: '<Root>/LEFT_LED' */
        VCU_Interface_Y.LEFT_LED = 1.0;

        /* Outport: '<Root>/RIGHT_LED' */
        VCU_Interface_Y.RIGHT_LED = 1.0;
      } else if (VCU_Interface_U.LEFT_BUTTON == 1.0) {
        VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interface_IN_Left_Blinking;

        /* Outport: '<Root>/LEFT_LED' */
        VCU_Interface_Y.LEFT_LED = 1.0;
      } else if (VCU_Interface_U.RIGHT_BUTTON == 1.0) {
        VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interface_IN_Right_Blinking;

        /* Outport: '<Root>/RIGHT_LED' */
        VCU_Interface_Y.RIGHT_LED = 1.0;
      }
      break;

     case VCU_Interface_IN_Left_Blinking:
      /* Outport: '<Root>/LEFT_LED' */
      VCU_Interface_Y.LEFT_LED = 1.0;

      /* Outport: '<Root>/RIGHT_LED' */
      VCU_Interface_Y.RIGHT_LED = 0.0;
      if (VCU_Interface_U.RIGHT_BUTTON == 1.0) {
        VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interface_IN_Right_Blinking;

        /* Outport: '<Root>/LEFT_LED' */
        VCU_Interface_Y.LEFT_LED = 0.0;

        /* Outport: '<Root>/RIGHT_LED' */
        VCU_Interface_Y.RIGHT_LED = 1.0;
      } else if (VCU_Interface_U.LEFT_BUTTON == 1.0) {
        VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interface_IN_Idle_b;

        /* Outport: '<Root>/LEFT_LED' */
        VCU_Interface_Y.LEFT_LED = 0.0;
      }
      break;

     default:
      /* Outport: '<Root>/LEFT_LED' */
      /* case IN_Right_Blinking: */
      VCU_Interface_Y.LEFT_LED = 0.0;

      /* Outport: '<Root>/RIGHT_LED' */
      VCU_Interface_Y.RIGHT_LED = 1.0;
      if (VCU_Interface_U.LEFT_BUTTON == 1.0) {
        VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interface_IN_Left_Blinking;

        /* Outport: '<Root>/LEFT_LED' */
        VCU_Interface_Y.LEFT_LED = 1.0;

        /* Outport: '<Root>/RIGHT_LED' */
        VCU_Interface_Y.RIGHT_LED = 0.0;
      } else if (VCU_Interface_U.RIGHT_BUTTON == 1.0) {
        VCU_Interface_DW.is_c3_VCU_Interface = VCU_Interface_IN_Idle_b;

        /* Outport: '<Root>/RIGHT_LED' */
        VCU_Interface_Y.RIGHT_LED = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/indicator logic' */

  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/Forward_btn'
   *  Inport: '<Root>/Reverse_btn'
   */
  if (VCU_Interface_DW.is_active_c1_VCU_Interface == 0U) {
    VCU_Interface_DW.is_active_c1_VCU_Interface = 1U;
    VCU_Interface_DW.is_c1_VCU_Interface = VCU_Interface_IN_Idle;

    /* Outport: '<Root>/motor_direction' */
    VCU_Interface_Y.motor_direction = 0.0;
  } else {
    switch (VCU_Interface_DW.is_c1_VCU_Interface) {
     case VCU_Interface_IN_Idle:
      /* Outport: '<Root>/motor_direction' */
      VCU_Interface_Y.motor_direction = 0.0;
      if (VCU_Interface_U.Forward_btn == 1.0) {
        VCU_Interface_DW.is_c1_VCU_Interface = VCU_Interface_IN_forward_motor;

        /* Outport: '<Root>/motor_direction' */
        VCU_Interface_Y.motor_direction = 1.0;
      } else if (VCU_Interface_U.Reverse_btn == 1.0) {
        VCU_Interface_DW.is_c1_VCU_Interface = VCU_Interface_IN_reverse_motor;
      }
      break;

     case VCU_Interface_IN_forward_motor:
      /* Outport: '<Root>/motor_direction' */
      VCU_Interface_Y.motor_direction = 1.0;
      if (VCU_Interface_U.Forward_btn == 1.0) {
        VCU_Interface_DW.is_c1_VCU_Interface = VCU_Interface_IN_Idle;

        /* Outport: '<Root>/motor_direction' */
        VCU_Interface_Y.motor_direction = 0.0;
      }
      break;

     default:
      /* Outport: '<Root>/motor_direction' */
      /* case IN_reverse_motor: */
      VCU_Interface_Y.motor_direction = 0.0;
      if (VCU_Interface_U.Reverse_btn == 1.0) {
        VCU_Interface_DW.is_c1_VCU_Interface = VCU_Interface_IN_Idle;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* Outport: '<Root>/motor_speed' incorporates:
   *  Inport: '<Root>/input_throttle_adc'
   */
  VCU_Interface_Y.motor_speed = VCU_Interface_U.input_throttle_adc;
}

/* Model initialize function */
void VCU_Interface_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void VCU_Interface_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
