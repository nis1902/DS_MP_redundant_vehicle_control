/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.161
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed May 18 18:55:39 2022
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
    136.0,                             /* '<S570>/Sum5' */
    204.0,                             /* '<S570>/Sum18' */
    92.0,                              /* '<S570>/Sum6' */
    44.0,                              /* '<S570>/Sum1' */
    48.0,                              /* '<S570>/Sum2' */
    40.0,                              /* '<S570>/Sum4' */
    88.0,                              /* '<S570>/Sum3' */
    0.015625,                          /* '<S656>/Power' */
    64.0,                              /* '<S656>/Power1' */
    0.125,                             /* '<S657>/Power' */
    8.0,                               /* '<S657>/Power1' */
    0.015625,                          /* '<S658>/Power' */
    64.0,                              /* '<S658>/Power1' */
    52.0,                              /* '<S569>/Sum17' */
    208.0,                             /* '<S569>/Sum16' */
    44.0,                              /* '<S569>/Sum1' */
    48.0,                              /* '<S569>/Sum2' */
    40.0,                              /* '<S569>/Sum4' */
    204.0,                             /* '<S163>/Sum18' */
    92.0,                              /* '<S163>/Sum5' */
    44.0,                              /* '<S163>/Sum1' */
    136.0,                             /* '<S163>/Sum6' */
    48.0,                              /* '<S163>/Sum2' */
    40.0,                              /* '<S163>/Sum4' */
    88.0,                              /* '<S163>/Sum3' */
    132.0,                             /* '<S163>/Sum7' */
    0.015625,                          /* '<S412>/Power' */
    64.0,                              /* '<S412>/Power1' */
    0.125,                             /* '<S413>/Power' */
    8.0,                               /* '<S413>/Power1' */
    0.015625,                          /* '<S414>/Power' */
    64.0,                              /* '<S414>/Power1' */
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
    1U,                                /* '<S451>/Cast8' */
    1U,                                /* '<S445>/Cast' */
    0U,                                /* '<S140>/Cast' */
    0U,                                /* '<S684>/Cast6' */
    0U,                                /* '<S596>/Cast6' */
    0U,                                /* '<S261>/Cast6' */
    0U,                                /* '<S140>/Cast1' */
    0U,                                /* '<S115>/Cast' */
    0,                                 /* '<S684>/Cast' */
    1,                                 /* '<S684>/NOT' */
    0,                                 /* '<S596>/Cast' */
    1,                                 /* '<S596>/NOT' */
    0,                                 /* '<S262>/Cast' */
    0,                                 /* '<S261>/Cast' */
    1,                                 /* '<S261>/NOT' */

    /* Start of '<S570>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S165>/Transmission subtasks' */
      {
        1U,                            /* '<S677>/Cast8' */
        1U                             /* '<S671>/Cast' */
      }
      ,

      /* End of '<S165>/Transmission subtasks' */

      /* Start of '<S165>/Reception substasks' */
      {
        1U,                            /* '<S667>/Cast13' */
        1U,                            /* '<S667>/Cast3' */
        0U,                            /* '<S667>/Cast15' */
        0U,                            /* '<S667>/Cast6' */
        0,                             /* '<S667>/Cast14' */
        0                              /* '<S667>/Cast5' */
      }
      /* End of '<S165>/Reception substasks' */
    }
    ,

    /* End of '<S570>/COMM Task - Sync bc 1' */

    /* Start of '<S639>/Check msg transmission CAN2' */
    {
      21U                              /* '<S650>/Cast8' */
    }
    ,

    /* End of '<S639>/Check msg transmission CAN2' */

    /* Start of '<S639>/Check msg transmission CAN1' */
    {
      21U                              /* '<S644>/Cast' */
    }
    ,

    /* End of '<S639>/Check msg transmission CAN1' */

    /* Start of '<S631>/Reception substasks' */
    {
      21U,                             /* '<S640>/Cast13' */
      21U,                             /* '<S640>/Cast3' */
      0U,                              /* '<S640>/Cast15' */
      0U,                              /* '<S640>/Cast6' */
      0,                               /* '<S640>/Cast14' */
      0                                /* '<S640>/Cast5' */
    }
    ,

    /* End of '<S631>/Reception substasks' */

    /* Start of '<S569>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S165>/Transmission subtasks' */
      {
        1U,                            /* '<S589>/Cast8' */
        1U                             /* '<S583>/Cast' */
      }
      ,

      /* End of '<S165>/Transmission subtasks' */

      /* Start of '<S165>/Reception substasks' */
      {
        1U,                            /* '<S579>/Cast13' */
        1U,                            /* '<S579>/Cast3' */
        0U,                            /* '<S579>/Cast15' */
        0U,                            /* '<S579>/Cast6' */
        0,                             /* '<S579>/Cast14' */
        0                              /* '<S579>/Cast5' */
      }
      /* End of '<S165>/Reception substasks' */
    }
    ,

    /* End of '<S569>/COMM Task - Sync bc 0' */

    /* Start of '<S388>/Reception substasks' */
    {
      1U,                              /* '<S441>/Cast13' */
      1U,                              /* '<S441>/Cast3' */
      0U,                              /* '<S441>/Cast15' */
      0U,                              /* '<S441>/Cast6' */
      0,                               /* '<S441>/Cast14' */
      0                                /* '<S441>/Cast5' */
    }
    ,

    /* End of '<S388>/Reception substasks' */

    /* Start of '<S387>/Transmission subtasks1' */
    {
      1U,                              /* '<S433>/Cast8' */
      1U                               /* '<S427>/Cast' */
    }
    ,

    /* End of '<S387>/Transmission subtasks1' */

    /* Start of '<S387>/Reception substasks' */
    {
      1U,                              /* '<S423>/Cast13' */
      1U,                              /* '<S423>/Cast3' */
      0U,                              /* '<S423>/Cast15' */
      0U,                              /* '<S423>/Cast6' */
      0,                               /* '<S423>/Cast14' */
      0                                /* '<S423>/Cast5' */
    }
    ,

    /* End of '<S387>/Reception substasks' */

    /* Start of '<S395>/Check msg transmission CAN2' */
    {
      21U                              /* '<S406>/Cast8' */
    }
    ,

    /* End of '<S395>/Check msg transmission CAN2' */

    /* Start of '<S395>/Check msg transmission CAN1' */
    {
      21U                              /* '<S400>/Cast' */
    }
    ,

    /* End of '<S395>/Check msg transmission CAN1' */

    /* Start of '<S386>/Reception substasks' */
    {
      21U,                             /* '<S396>/Cast13' */
      21U,                             /* '<S396>/Cast3' */
      0U,                              /* '<S396>/Cast15' */
      0U,                              /* '<S396>/Cast6' */
      0,                               /* '<S396>/Cast14' */
      0                                /* '<S396>/Cast5' */
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
