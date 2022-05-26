/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.188
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed May 25 19:29:32 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Group2.h"
#include "HANcoder_E407_TTA_Group2_private.h"

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S10>/TTA System' */
  {
    256.0,                             /* '<S576>/Sum5' */
    364.0,                             /* '<S576>/Sum18' */
    172.0,                             /* '<S576>/Sum6' */
    84.0,                              /* '<S576>/Sum1' */
    88.0,                              /* '<S576>/Sum2' */
    80.0,                              /* '<S576>/Sum4' */
    168.0,                             /* '<S576>/Sum3' */
    0.015625,                          /* '<S662>/Power' */
    64.0,                              /* '<S662>/Power1' */
    0.125,                             /* '<S663>/Power' */
    8.0,                               /* '<S663>/Power1' */
    0.015625,                          /* '<S664>/Power' */
    64.0,                              /* '<S664>/Power1' */
    92.0,                              /* '<S575>/Sum17' */
    368.0,                             /* '<S575>/Sum16' */
    84.0,                              /* '<S575>/Sum1' */
    88.0,                              /* '<S575>/Sum2' */
    80.0,                              /* '<S575>/Sum4' */
    260.0,                             /* '<S164>/Sum8' */
    364.0,                             /* '<S164>/Sum18' */
    172.0,                             /* '<S164>/Sum5' */
    84.0,                              /* '<S164>/Sum1' */
    256.0,                             /* '<S164>/Sum6' */
    88.0,                              /* '<S164>/Sum2' */
    264.0,                             /* '<S164>/Sum9' */
    80.0,                              /* '<S164>/Sum4' */
    168.0,                             /* '<S164>/Sum3' */
    252.0,                             /* '<S164>/Sum7' */
    0.015625,                          /* '<S415>/Power' */
    64.0,                              /* '<S415>/Power1' */
    0.125,                             /* '<S416>/Power' */
    8.0,                               /* '<S416>/Power1' */
    0.015625,                          /* '<S417>/Power' */
    64.0,                              /* '<S417>/Power1' */
    360.0,                             /* '<S163>/Sum14' */
    364.0,                             /* '<S163>/Sum15' */
    372.0,                             /* '<S163>/Sum17' */
    368.0,                             /* '<S163>/Sum16' */
    84.0,                              /* '<S163>/Sum1' */
    88.0,                              /* '<S163>/Sum2' */
    92.0,                              /* '<S163>/Sum3' */
    180.0,                             /* '<S163>/Sum7' */
    176.0,                             /* '<S163>/Sum6' */
    268.0,                             /* '<S163>/Sum10' */
    264.0,                             /* '<S163>/Sum9' */
    356.0,                             /* '<S163>/Sum11' */
    352.0,                             /* '<S163>/Sum13' */
    80.0,                              /* '<S163>/Sum4' */
    348.0,                             /* '<S163>/Sum12' */
    172.0,                             /* '<S163>/Sum5' */
    260.0,                             /* '<S163>/Sum8' */
    1.0,                               /* '<S115>/Add1' */
    0U,                                /* '<S140>/Cast' */
    0U,                                /* '<S690>/Cast6' */
    0U,                                /* '<S602>/Cast6' */
    0U,                                /* '<S262>/Cast6' */
    0U,                                /* '<S140>/Cast1' */
    0U,                                /* '<S115>/Cast' */
    0,                                 /* '<S690>/Cast' */
    1,                                 /* '<S690>/NOT' */
    0,                                 /* '<S602>/Cast' */
    1,                                 /* '<S602>/NOT' */
    0,                                 /* '<S263>/Cast' */
    0,                                 /* '<S262>/Cast' */
    1,                                 /* '<S262>/NOT' */

    /* Start of '<S576>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S166>/Transmission subtasks' */
      {
        1U,                            /* '<S683>/Cast8' */
        1U                             /* '<S677>/Cast' */
      }
      ,

      /* End of '<S166>/Transmission subtasks' */

      /* Start of '<S166>/Reception substasks' */
      {
        1U,                            /* '<S673>/Cast13' */
        1U,                            /* '<S673>/Cast3' */
        0U,                            /* '<S673>/Cast15' */
        0U,                            /* '<S673>/Cast6' */
        0,                             /* '<S673>/Cast14' */
        0                              /* '<S673>/Cast5' */
      }
      /* End of '<S166>/Reception substasks' */
    }
    ,

    /* End of '<S576>/COMM Task - Sync bc 1' */

    /* Start of '<S645>/Check msg transmission CAN2' */
    {
      21U                              /* '<S656>/Cast8' */
    }
    ,

    /* End of '<S645>/Check msg transmission CAN2' */

    /* Start of '<S645>/Check msg transmission CAN1' */
    {
      21U                              /* '<S650>/Cast' */
    }
    ,

    /* End of '<S645>/Check msg transmission CAN1' */

    /* Start of '<S637>/Reception substasks' */
    {
      21U,                             /* '<S646>/Cast13' */
      21U,                             /* '<S646>/Cast3' */
      0U,                              /* '<S646>/Cast15' */
      0U,                              /* '<S646>/Cast6' */
      0,                               /* '<S646>/Cast14' */
      0                                /* '<S646>/Cast5' */
    }
    ,

    /* End of '<S637>/Reception substasks' */

    /* Start of '<S575>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S166>/Transmission subtasks' */
      {
        1U,                            /* '<S595>/Cast8' */
        1U                             /* '<S589>/Cast' */
      }
      ,

      /* End of '<S166>/Transmission subtasks' */

      /* Start of '<S166>/Reception substasks' */
      {
        1U,                            /* '<S585>/Cast13' */
        1U,                            /* '<S585>/Cast3' */
        0U,                            /* '<S585>/Cast15' */
        0U,                            /* '<S585>/Cast6' */
        0,                             /* '<S585>/Cast14' */
        0                              /* '<S585>/Cast5' */
      }
      /* End of '<S166>/Reception substasks' */
    }
    ,

    /* End of '<S575>/COMM Task - Sync bc 0' */

    /* Start of '<S443>/Check msg transmission CAN2' */
    {
      22U                              /* '<S454>/Cast8' */
    }
    ,

    /* End of '<S443>/Check msg transmission CAN2' */

    /* Start of '<S443>/Check msg transmission CAN1' */
    {
      22U                              /* '<S448>/Cast' */
    }
    ,

    /* End of '<S443>/Check msg transmission CAN1' */

    /* Start of '<S389>/Reception substasks' */
    {
      22U,                             /* '<S444>/Cast13' */
      22U,                             /* '<S444>/Cast3' */
      0U,                              /* '<S444>/Cast15' */
      0U,                              /* '<S444>/Cast6' */
      0,                               /* '<S444>/Cast14' */
      0                                /* '<S444>/Cast5' */
    }
    ,

    /* End of '<S389>/Reception substasks' */

    /* Start of '<S388>/Transmission subtasks1' */
    {
      1U,                              /* '<S436>/Cast8' */
      1U                               /* '<S430>/Cast' */
    }
    ,

    /* End of '<S388>/Transmission subtasks1' */

    /* Start of '<S388>/Reception substasks' */
    {
      1U,                              /* '<S426>/Cast13' */
      1U,                              /* '<S426>/Cast3' */
      0U,                              /* '<S426>/Cast15' */
      0U,                              /* '<S426>/Cast6' */
      0,                               /* '<S426>/Cast14' */
      0                                /* '<S426>/Cast5' */
    }
    ,

    /* End of '<S388>/Reception substasks' */

    /* Start of '<S398>/Check msg transmission CAN2' */
    {
      21U                              /* '<S409>/Cast8' */
    }
    ,

    /* End of '<S398>/Check msg transmission CAN2' */

    /* Start of '<S398>/Check msg transmission CAN1' */
    {
      21U                              /* '<S403>/Cast' */
    }
    ,

    /* End of '<S398>/Check msg transmission CAN1' */

    /* Start of '<S387>/Reception substasks' */
    {
      21U,                             /* '<S399>/Cast13' */
      21U,                             /* '<S399>/Cast3' */
      0U,                              /* '<S399>/Cast15' */
      0U,                              /* '<S399>/Cast6' */
      0,                               /* '<S399>/Cast14' */
      0                                /* '<S399>/Cast5' */
    }
    ,

    /* End of '<S387>/Reception substasks' */

    /* Start of '<S169>/Transmission subtasks' */
    {
      13U,                             /* '<S249>/Cast8' */
      13U                              /* '<S243>/Cast' */
    }
    ,

    /* End of '<S169>/Transmission subtasks' */

    /* Start of '<S169>/Reception substasks' */
    {
      13U,                             /* '<S239>/Cast13' */
      13U,                             /* '<S239>/Cast3' */
      0U,                              /* '<S239>/Cast15' */
      0U,                              /* '<S239>/Cast6' */
      0,                               /* '<S239>/Cast14' */
      0                                /* '<S239>/Cast5' */
    }
    ,

    /* End of '<S169>/Reception substasks' */

    /* Start of '<S168>/Transmission subtasks' */
    {
      12U,                             /* '<S231>/Cast8' */
      12U                              /* '<S225>/Cast' */
    }
    ,

    /* End of '<S168>/Transmission subtasks' */

    /* Start of '<S168>/Reception substasks' */
    {
      12U,                             /* '<S221>/Cast13' */
      12U,                             /* '<S221>/Cast3' */
      0U,                              /* '<S221>/Cast15' */
      0U,                              /* '<S221>/Cast6' */
      0,                               /* '<S221>/Cast14' */
      0                                /* '<S221>/Cast5' */
    }
    ,

    /* End of '<S168>/Reception substasks' */

    /* Start of '<S167>/Transmission subtasks' */
    {
      11U,                             /* '<S213>/Cast8' */
      11U                              /* '<S207>/Cast' */
    }
    ,

    /* End of '<S167>/Transmission subtasks' */

    /* Start of '<S167>/Reception substasks' */
    {
      11U,                             /* '<S203>/Cast13' */
      11U,                             /* '<S203>/Cast3' */
      0U,                              /* '<S203>/Cast15' */
      0U,                              /* '<S203>/Cast6' */
      0,                               /* '<S203>/Cast14' */
      0                                /* '<S203>/Cast5' */
    }
    ,

    /* End of '<S167>/Reception substasks' */

    /* Start of '<S163>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S166>/Transmission subtasks' */
      {
        1U,                            /* '<S195>/Cast8' */
        1U                             /* '<S189>/Cast' */
      }
      ,

      /* End of '<S166>/Transmission subtasks' */

      /* Start of '<S166>/Reception substasks' */
      {
        1U,                            /* '<S185>/Cast13' */
        1U,                            /* '<S185>/Cast3' */
        0U,                            /* '<S185>/Cast15' */
        0U,                            /* '<S185>/Cast6' */
        0,                             /* '<S185>/Cast14' */
        0                              /* '<S185>/Cast5' */
      }
      /* End of '<S166>/Reception substasks' */
    }
    /* End of '<S163>/COMM Task - Sync bc 0' */
  }
  /* End of '<S10>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S127>/Constant'
   */
  { 0.0, 80.0, 84.0, 86.0, 88.0, 90.0, 92.0, 172.0, 176.0, 180.0, 260.0, 262.0,
    264.0, 268.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S127>/Constant4'
   */
  { 0.0, 80.0, 84.0, 86.0, 88.0, 168.0, 170.0, 172.0, 252.0, 254.0, 256.0, 260.0,
    360.0, 362.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S127>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S127>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S21>/Logic'
   */
  { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
