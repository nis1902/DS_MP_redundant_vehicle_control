/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.160
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed May 18 12:34:32 2022
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
    136.0,                             /* '<S519>/Sum5' */
    204.0,                             /* '<S519>/Sum18' */
    92.0,                              /* '<S519>/Sum6' */
    44.0,                              /* '<S519>/Sum1' */
    48.0,                              /* '<S519>/Sum2' */
    40.0,                              /* '<S519>/Sum4' */
    88.0,                              /* '<S519>/Sum3' */
    0.015625,                          /* '<S605>/Power' */
    64.0,                              /* '<S605>/Power1' */
    0.125,                             /* '<S606>/Power' */
    8.0,                               /* '<S606>/Power1' */
    0.015625,                          /* '<S607>/Power' */
    64.0,                              /* '<S607>/Power1' */
    52.0,                              /* '<S518>/Sum17' */
    208.0,                             /* '<S518>/Sum16' */
    44.0,                              /* '<S518>/Sum1' */
    48.0,                              /* '<S518>/Sum2' */
    40.0,                              /* '<S518>/Sum4' */
    204.0,                             /* '<S163>/Sum18' */
    92.0,                              /* '<S163>/Sum5' */
    44.0,                              /* '<S163>/Sum1' */
    48.0,                              /* '<S163>/Sum2' */
    40.0,                              /* '<S163>/Sum4' */
    88.0,                              /* '<S163>/Sum3' */
    64.0,                              /* '<S471>/Power1' */
    0.015625,                          /* '<S471>/Power' */
    64.0,                              /* '<S470>/Power1' */
    0.015625,                          /* '<S470>/Power' */
    8.0,                               /* '<S472>/Power1' */
    0.125,                             /* '<S472>/Power' */
    0.015625,                          /* '<S410>/Power' */
    64.0,                              /* '<S410>/Power1' */
    0.125,                             /* '<S411>/Power' */
    8.0,                               /* '<S411>/Power1' */
    0.015625,                          /* '<S412>/Power' */
    64.0,                              /* '<S412>/Power1' */
    200.0,                             /* '<S162>/Sum14' */
    204.0,                             /* '<S162>/Sum15' */
    212.0,                             /* '<S162>/Sum17' */
    208.0,                             /* '<S162>/Sum16' */
    44.0,                              /* '<S162>/Sum1' */
    48.0,                              /* '<S162>/Sum2' */
    52.0,                              /* '<S162>/Sum3' */
    100.0,                             /* '<S162>/Sum7' */
    96.0,                              /* '<S162>/Sum6' */
    148.0,                             /* '<S162>/Sum10' */
    144.0,                             /* '<S162>/Sum9' */
    196.0,                             /* '<S162>/Sum11' */
    192.0,                             /* '<S162>/Sum13' */
    40.0,                              /* '<S162>/Sum4' */
    188.0,                             /* '<S162>/Sum12' */
    92.0,                              /* '<S162>/Sum5' */
    140.0,                             /* '<S162>/Sum8' */
    1.0,                               /* '<S115>/Add1' */
    0U,                                /* '<S140>/Cast' */
    0U,                                /* '<S633>/Cast6' */
    0U,                                /* '<S545>/Cast6' */
    0U,                                /* '<S261>/Cast6' */
    0U,                                /* '<S140>/Cast1' */
    0U,                                /* '<S115>/Cast' */
    0,                                 /* '<S633>/Cast' */
    1,                                 /* '<S633>/NOT' */
    0,                                 /* '<S545>/Cast' */
    1,                                 /* '<S545>/NOT' */
    0,                                 /* '<S262>/Cast' */
    0,                                 /* '<S261>/Cast' */
    1,                                 /* '<S261>/NOT' */

    /* Start of '<S519>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S165>/Transmission subtasks' */
      {
        1U,                            /* '<S626>/Cast8' */
        1U                             /* '<S620>/Cast' */
      }
      ,

      /* End of '<S165>/Transmission subtasks' */

      /* Start of '<S165>/Reception substasks' */
      {
        1U,                            /* '<S616>/Cast13' */
        1U,                            /* '<S616>/Cast3' */
        0U,                            /* '<S616>/Cast15' */
        0U,                            /* '<S616>/Cast6' */
        0,                             /* '<S616>/Cast14' */
        0                              /* '<S616>/Cast5' */
      }
      /* End of '<S165>/Reception substasks' */
    }
    ,

    /* End of '<S519>/COMM Task - Sync bc 1' */

    /* Start of '<S588>/Check msg transmission CAN2' */
    {
      21U                              /* '<S599>/Cast8' */
    }
    ,

    /* End of '<S588>/Check msg transmission CAN2' */

    /* Start of '<S588>/Check msg transmission CAN1' */
    {
      21U                              /* '<S593>/Cast' */
    }
    ,

    /* End of '<S588>/Check msg transmission CAN1' */

    /* Start of '<S580>/Reception substasks' */
    {
      21U,                             /* '<S589>/Cast13' */
      21U,                             /* '<S589>/Cast3' */
      0U,                              /* '<S589>/Cast15' */
      0U,                              /* '<S589>/Cast6' */
      0,                               /* '<S589>/Cast14' */
      0                                /* '<S589>/Cast5' */
    }
    ,

    /* End of '<S580>/Reception substasks' */

    /* Start of '<S518>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S165>/Transmission subtasks' */
      {
        1U,                            /* '<S538>/Cast8' */
        1U                             /* '<S532>/Cast' */
      }
      ,

      /* End of '<S165>/Transmission subtasks' */

      /* Start of '<S165>/Reception substasks' */
      {
        1U,                            /* '<S528>/Cast13' */
        1U,                            /* '<S528>/Cast3' */
        0U,                            /* '<S528>/Cast15' */
        0U,                            /* '<S528>/Cast6' */
        0,                             /* '<S528>/Cast14' */
        0                              /* '<S528>/Cast5' */
      }
      /* End of '<S165>/Reception substasks' */
    }
    ,

    /* End of '<S518>/COMM Task - Sync bc 0' */

    /* Start of '<S387>/Transmission subtasks1' */
    {
      1U,                              /* '<S431>/Cast8' */
      1U                               /* '<S425>/Cast' */
    }
    ,

    /* End of '<S387>/Transmission subtasks1' */

    /* Start of '<S387>/Reception substasks' */
    {
      1U,                              /* '<S421>/Cast13' */
      1U,                              /* '<S421>/Cast3' */
      0U,                              /* '<S421>/Cast15' */
      0U,                              /* '<S421>/Cast6' */
      0,                               /* '<S421>/Cast14' */
      0                                /* '<S421>/Cast5' */
    }
    ,

    /* End of '<S387>/Reception substasks' */

    /* Start of '<S393>/Check msg transmission CAN2' */
    {
      21U                              /* '<S404>/Cast8' */
    }
    ,

    /* End of '<S393>/Check msg transmission CAN2' */

    /* Start of '<S393>/Check msg transmission CAN1' */
    {
      21U                              /* '<S398>/Cast' */
    }
    ,

    /* End of '<S393>/Check msg transmission CAN1' */

    /* Start of '<S386>/Reception substasks' */
    {
      21U,                             /* '<S394>/Cast13' */
      21U,                             /* '<S394>/Cast3' */
      0U,                              /* '<S394>/Cast15' */
      0U,                              /* '<S394>/Cast6' */
      0,                               /* '<S394>/Cast14' */
      0                                /* '<S394>/Cast5' */
    }
    ,

    /* End of '<S386>/Reception substasks' */

    /* Start of '<S168>/Transmission subtasks' */
    {
      13U,                             /* '<S248>/Cast8' */
      13U                              /* '<S242>/Cast' */
    }
    ,

    /* End of '<S168>/Transmission subtasks' */

    /* Start of '<S168>/Reception substasks' */
    {
      13U,                             /* '<S238>/Cast13' */
      13U,                             /* '<S238>/Cast3' */
      0U,                              /* '<S238>/Cast15' */
      0U,                              /* '<S238>/Cast6' */
      0,                               /* '<S238>/Cast14' */
      0                                /* '<S238>/Cast5' */
    }
    ,

    /* End of '<S168>/Reception substasks' */

    /* Start of '<S167>/Transmission subtasks' */
    {
      12U,                             /* '<S230>/Cast8' */
      12U                              /* '<S224>/Cast' */
    }
    ,

    /* End of '<S167>/Transmission subtasks' */

    /* Start of '<S167>/Reception substasks' */
    {
      12U,                             /* '<S220>/Cast13' */
      12U,                             /* '<S220>/Cast3' */
      0U,                              /* '<S220>/Cast15' */
      0U,                              /* '<S220>/Cast6' */
      0,                               /* '<S220>/Cast14' */
      0                                /* '<S220>/Cast5' */
    }
    ,

    /* End of '<S167>/Reception substasks' */

    /* Start of '<S166>/Transmission subtasks' */
    {
      11U,                             /* '<S212>/Cast8' */
      11U                              /* '<S206>/Cast' */
    }
    ,

    /* End of '<S166>/Transmission subtasks' */

    /* Start of '<S166>/Reception substasks' */
    {
      11U,                             /* '<S202>/Cast13' */
      11U,                             /* '<S202>/Cast3' */
      0U,                              /* '<S202>/Cast15' */
      0U,                              /* '<S202>/Cast6' */
      0,                               /* '<S202>/Cast14' */
      0                                /* '<S202>/Cast5' */
    }
    ,

    /* End of '<S166>/Reception substasks' */

    /* Start of '<S162>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S165>/Transmission subtasks' */
      {
        1U,                            /* '<S194>/Cast8' */
        1U                             /* '<S188>/Cast' */
      }
      ,

      /* End of '<S165>/Transmission subtasks' */

      /* Start of '<S165>/Reception substasks' */
      {
        1U,                            /* '<S184>/Cast13' */
        1U,                            /* '<S184>/Cast3' */
        0U,                            /* '<S184>/Cast15' */
        0U,                            /* '<S184>/Cast6' */
        0,                             /* '<S184>/Cast14' */
        0                              /* '<S184>/Cast5' */
      }
      /* End of '<S165>/Reception substasks' */
    }
    /* End of '<S162>/COMM Task - Sync bc 0' */
  }
  /* End of '<S10>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S127>/Constant'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 50.0, 52.0, 92.0, 96.0, 100.0, 140.0, 142.0,
    144.0, 148.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S127>/Constant4'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 88.0, 90.0, 92.0, 132.0, 134.0, 200.0, 202.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S127>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S127>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0 },

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
