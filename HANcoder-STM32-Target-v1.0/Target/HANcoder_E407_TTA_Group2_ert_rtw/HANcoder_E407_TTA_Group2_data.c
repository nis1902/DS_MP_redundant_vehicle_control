/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.264
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun  8 18:25:48 2022
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
    610.0,                             /* '<S1169>/Sum18' */
    520.0,                             /* '<S1169>/Sum17' */
    230.0,                             /* '<S1169>/Sum7' */
    70.0,                              /* '<S1169>/Sum1' */
    90.0,                              /* '<S1169>/Sum2' */
    50.0,                              /* '<S1169>/Sum4' */
    500.0,                             /* '<S1169>/Sum16' */
    210.0,                             /* '<S1169>/Sum6' */
    0.116,                             /* '<S1359>/Multiply' */
    16.0,                              /* '<S1361>/Power1' */
    0.0625,                            /* '<S1361>/Power' */
    16.0,                              /* '<S1362>/Power1' */
    0.0625,                            /* '<S1362>/Power' */
    16.0,                              /* '<S1363>/Power1' */
    0.0625,                            /* '<S1363>/Power' */
    16.0,                              /* '<S1364>/Power1' */
    0.0625,                            /* '<S1364>/Power' */
    0.125,                             /* '<S1298>/Power' */
    8.0,                               /* '<S1298>/Power1' */
    0.125,                             /* '<S1299>/Power' */
    8.0,                               /* '<S1299>/Power1' */
    0.125,                             /* '<S1300>/Power' */
    8.0,                               /* '<S1300>/Power1' */
    0.125,                             /* '<S1301>/Power' */
    8.0,                               /* '<S1301>/Power1' */
    270.0,                             /* '<S1168>/Sum17' */
    530.0,                             /* '<S1168>/Sum16' */
    70.0,                              /* '<S1168>/Sum1' */
    90.0,                              /* '<S1168>/Sum2' */
    180.0,                             /* '<S1168>/Sum6' */
    50.0,                              /* '<S1168>/Sum4' */
    230.0,                             /* '<S1016>/Sum5' */
    610.0,                             /* '<S1016>/Sum18' */
    160.0,                             /* '<S1016>/Sum6' */
    70.0,                              /* '<S1016>/Sum1' */
    90.0,                              /* '<S1016>/Sum2' */
    50.0,                              /* '<S1016>/Sum4' */
    140.0,                             /* '<S1016>/Sum3' */
    0.015625,                          /* '<S1102>/Power' */
    64.0,                              /* '<S1102>/Power1' */
    0.125,                             /* '<S1103>/Power' */
    8.0,                               /* '<S1103>/Power1' */
    0.015625,                          /* '<S1104>/Power' */
    64.0,                              /* '<S1104>/Power1' */
    110.0,                             /* '<S1015>/Sum17' */
    530.0,                             /* '<S1015>/Sum16' */
    70.0,                              /* '<S1015>/Sum1' */
    90.0,                              /* '<S1015>/Sum2' */
    50.0,                              /* '<S1015>/Sum4' */
    290.0,                             /* '<S176>/Sum13' */
    250.0,                             /* '<S176>/Sum26' */
    270.0,                             /* '<S176>/Sum27' */
    590.0,                             /* '<S176>/Sum7' */
    610.0,                             /* '<S176>/Sum18' */
    360.0,                             /* '<S176>/Sum16' */
    430.0,                             /* '<S176>/Sum17' */
    520.0,                             /* '<S176>/Sum21' */
    230.0,                             /* '<S176>/Sum25' */
    160.0,                             /* '<S176>/Sum5' */
    70.0,                              /* '<S176>/Sum1' */
    450.0,                             /* '<S176>/Sum19' */
    90.0,                              /* '<S176>/Sum2' */
    50.0,                              /* '<S176>/Sum4' */
    370.0,                             /* '<S176>/Sum15' */
    410.0,                             /* '<S176>/Sum14' */
    500.0,                             /* '<S176>/Sum20' */
    210.0,                             /* '<S176>/Sum24' */
    140.0,                             /* '<S176>/Sum3' */
    570.0,                             /* '<S176>/Sum6' */
    1.0,                               /* '<S968>/Gain' */
    1.0,                               /* '<S968>/Gain1' */
    1.0,                               /* '<S968>/Gain2' */
    1.0,                               /* '<S968>/Gain3' */
    1.0,                               /* '<S968>/Gain4' */
    1.0,                               /* '<S968>/Gain5' */
    1.0,                               /* '<S968>/Gain6' */
    1.0,                               /* '<S968>/Gain7' */
    1.0,                               /* '<S967>/Gain' */
    1.0,                               /* '<S967>/Gain1' */
    1.0,                               /* '<S967>/Gain2' */
    1.0,                               /* '<S967>/Gain3' */
    1.0,                               /* '<S967>/Gain4' */
    1.0,                               /* '<S967>/Gain5' */
    1.0,                               /* '<S967>/Gain6' */
    1.0,                               /* '<S967>/Gain7' */
    1.0,                               /* '<S966>/Gain' */
    1.0,                               /* '<S966>/Gain1' */
    1.0,                               /* '<S966>/Gain2' */
    1.0,                               /* '<S966>/Gain3' */
    1.0,                               /* '<S966>/Gain4' */
    1.0,                               /* '<S966>/Gain5' */
    1.0,                               /* '<S966>/Gain6' */
    1.0,                               /* '<S966>/Gain7' */
    16.0,                              /* '<S946>/Power1' */
    0.0625,                            /* '<S946>/Power' */
    16.0,                              /* '<S947>/Power1' */
    0.0625,                            /* '<S947>/Power' */
    16.0,                              /* '<S948>/Power1' */
    0.0625,                            /* '<S948>/Power' */
    16.0,                              /* '<S949>/Power1' */
    0.0625,                            /* '<S949>/Power' */
    16.0,                              /* '<S926>/Power1' */
    0.0625,                            /* '<S926>/Power' */
    16.0,                              /* '<S927>/Power1' */
    0.0625,                            /* '<S927>/Power' */
    16.0,                              /* '<S928>/Power1' */
    0.0625,                            /* '<S928>/Power' */
    16.0,                              /* '<S929>/Power1' */
    0.0625,                            /* '<S929>/Power' */
    64.0,                              /* '<S880>/Power1' */
    0.015625,                          /* '<S880>/Power' */
    64.0,                              /* '<S879>/Power1' */
    0.015625,                          /* '<S879>/Power' */
    8.0,                               /* '<S881>/Power1' */
    0.125,                             /* '<S881>/Power' */
    8.0,                               /* '<S828>/Power1' */
    0.125,                             /* '<S828>/Power' */
    8.0,                               /* '<S829>/Power1' */
    0.125,                             /* '<S829>/Power' */
    8.0,                               /* '<S830>/Power1' */
    0.125,                             /* '<S830>/Power' */
    8.0,                               /* '<S831>/Power1' */
    0.125,                             /* '<S831>/Power' */
    0.116,                             /* '<S826>/Gain' */
    0.015625,                          /* '<S633>/Power' */
    64.0,                              /* '<S633>/Power1' */
    0.125,                             /* '<S634>/Power' */
    8.0,                               /* '<S634>/Power1' */
    0.015625,                          /* '<S635>/Power' */
    64.0,                              /* '<S635>/Power1' */
    0.0625,                            /* '<S573>/Power' */
    16.0,                              /* '<S573>/Power1' */
    0.0625,                            /* '<S574>/Power' */
    16.0,                              /* '<S574>/Power1' */
    0.0625,                            /* '<S575>/Power' */
    16.0,                              /* '<S575>/Power1' */
    0.0625,                            /* '<S576>/Power' */
    16.0,                              /* '<S576>/Power1' */
    0.0625,                            /* '<S543>/Power' */
    16.0,                              /* '<S543>/Power1' */
    0.0625,                            /* '<S544>/Power' */
    16.0,                              /* '<S544>/Power1' */
    0.0625,                            /* '<S545>/Power' */
    16.0,                              /* '<S545>/Power1' */
    0.0625,                            /* '<S546>/Power' */
    16.0,                              /* '<S546>/Power1' */
    0.0625,                            /* '<S512>/Power' */
    16.0,                              /* '<S512>/Power1' */
    0.0625,                            /* '<S513>/Power' */
    16.0,                              /* '<S513>/Power1' */
    0.0625,                            /* '<S514>/Power' */
    16.0,                              /* '<S514>/Power1' */
    0.0625,                            /* '<S515>/Power' */
    16.0,                              /* '<S515>/Power1' */
    490.0,                             /* '<S175>/Sum12' */
    510.0,                             /* '<S175>/Sum15' */
    550.0,                             /* '<S175>/Sum17' */
    530.0,                             /* '<S175>/Sum16' */
    70.0,                              /* '<S175>/Sum1' */
    90.0,                              /* '<S175>/Sum2' */
    110.0,                             /* '<S175>/Sum18' */
    200.0,                             /* '<S175>/Sum7' */
    180.0,                             /* '<S175>/Sum6' */
    290.0,                             /* '<S175>/Sum10' */
    270.0,                             /* '<S175>/Sum9' */
    380.0,                             /* '<S175>/Sum11' */
    360.0,                             /* '<S175>/Sum13' */
    470.0,                             /* '<S175>/Sum14' */
    450.0,                             /* '<S175>/Sum19' */
    50.0,                              /* '<S175>/Sum4' */
    430.0,                             /* '<S175>/Sum20' */
    160.0,                             /* '<S175>/Sum3' */
    250.0,                             /* '<S175>/Sum5' */
    340.0,                             /* '<S175>/Sum8' */
    1.0,                               /* '<S127>/Add1' */
    0U,                                /* '<S152>/Cast' */
    0U,                                /* '<S1268>/Cast' */
    0U,                                /* '<S1268>/Cast1' */
    0U,                                /* '<S1268>/Cast2' */
    0U,                                /* '<S1269>/Cast' */
    0U,                                /* '<S1269>/Cast1' */
    0U,                                /* '<S1269>/Cast2' */
    0U,                                /* '<S1270>/Cast' */
    0U,                                /* '<S1270>/Cast1' */
    0U,                                /* '<S1270>/Cast2' */
    0U,                                /* '<S1271>/Cast' */
    0U,                                /* '<S1271>/Cast1' */
    0U,                                /* '<S1271>/Cast2' */
    0U,                                /* '<S1130>/Cast6' */
    0U,                                /* '<S603>/Cast' */
    0U,                                /* '<S603>/Cast1' */
    0U,                                /* '<S603>/Cast2' */
    0U,                                /* '<S604>/Cast' */
    0U,                                /* '<S604>/Cast1' */
    0U,                                /* '<S604>/Cast2' */
    0U,                                /* '<S605>/Cast' */
    0U,                                /* '<S605>/Cast1' */
    0U,                                /* '<S605>/Cast2' */
    0U,                                /* '<S606>/Cast' */
    0U,                                /* '<S606>/Cast1' */
    0U,                                /* '<S606>/Cast2' */
    0U,                                /* '<S299>/Cast6' */
    0U,                                /* '<S152>/Cast1' */
    0U,                                /* '<S127>/Cast' */
    0,                                 /* '<S1130>/Cast' */
    1,                                 /* '<S1130>/NOT' */
    0,                                 /* '<S300>/Cast' */
    0,                                 /* '<S299>/Cast' */
    1,                                 /* '<S299>/NOT' */

    /* Start of '<S1169>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1322>/Cast8' */
        1U                             /* '<S1316>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1312>/Cast13' */
        1U,                            /* '<S1312>/Cast3' */
        0U,                            /* '<S1312>/Cast15' */
        0U,                            /* '<S1312>/Cast6' */
        0,                             /* '<S1312>/Cast14' */
        0                              /* '<S1312>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1169>/COMM Task - Sync bc 1' */

    /* Start of '<S1281>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1292>/Cast8' */
    }
    ,

    /* End of '<S1281>/Check msg transmission CAN2' */

    /* Start of '<S1281>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1286>/Cast' */
    }
    ,

    /* End of '<S1281>/Check msg transmission CAN1' */

    /* Start of '<S1243>/Reception substasks' */
    {
      22U,                             /* '<S1282>/Cast13' */
      22U,                             /* '<S1282>/Cast3' */
      0U,                              /* '<S1282>/Cast15' */
      0U,                              /* '<S1282>/Cast6' */
      0,                               /* '<S1282>/Cast14' */
      0                                /* '<S1282>/Cast5' */
    }
    ,

    /* End of '<S1243>/Reception substasks' */

    /* Start of '<S1251>/Check msg transmission CAN2' */
    {
      25U                              /* '<S1262>/Cast8' */
    }
    ,

    /* End of '<S1251>/Check msg transmission CAN2' */

    /* Start of '<S1251>/Check msg transmission CAN1' */
    {
      25U                              /* '<S1256>/Cast' */
    }
    ,

    /* End of '<S1251>/Check msg transmission CAN1' */

    /* Start of '<S1242>/Reception substasks' */
    {
      25U,                             /* '<S1252>/Cast13' */
      25U,                             /* '<S1252>/Cast3' */
      0U,                              /* '<S1252>/Cast15' */
      0U,                              /* '<S1252>/Cast6' */
      0,                               /* '<S1252>/Cast14' */
      0                                /* '<S1252>/Cast5' */
    }
    ,

    /* End of '<S1242>/Reception substasks' */

    /* Start of '<S1171>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1197>/Cast6' */
      0,                               /* '<S1197>/Cast' */
      1                                /* '<S1197>/NOT' */
    }
    ,

    /* End of '<S1171>/RESET Board - Return to initialization' */

    /* Start of '<S1168>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1190>/Cast8' */
        1U                             /* '<S1184>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1180>/Cast13' */
        1U,                            /* '<S1180>/Cast3' */
        0U,                            /* '<S1180>/Cast15' */
        0U,                            /* '<S1180>/Cast6' */
        0,                             /* '<S1180>/Cast14' */
        0                              /* '<S1180>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1168>/COMM Task - Sync bc 0' */

    /* Start of '<S1016>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1123>/Cast8' */
        1U                             /* '<S1117>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1113>/Cast13' */
        1U,                            /* '<S1113>/Cast3' */
        0U,                            /* '<S1113>/Cast15' */
        0U,                            /* '<S1113>/Cast6' */
        0,                             /* '<S1113>/Cast14' */
        0                              /* '<S1113>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1016>/COMM Task - Sync bc 1' */

    /* Start of '<S1085>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1096>/Cast8' */
    }
    ,

    /* End of '<S1085>/Check msg transmission CAN2' */

    /* Start of '<S1085>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1090>/Cast' */
    }
    ,

    /* End of '<S1085>/Check msg transmission CAN1' */

    /* Start of '<S1077>/Reception substasks' */
    {
      21U,                             /* '<S1086>/Cast13' */
      21U,                             /* '<S1086>/Cast3' */
      0U,                              /* '<S1086>/Cast15' */
      0U,                              /* '<S1086>/Cast6' */
      0,                               /* '<S1086>/Cast14' */
      0                                /* '<S1086>/Cast5' */
    }
    ,

    /* End of '<S1077>/Reception substasks' */

    /* Start of '<S1019>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1042>/Cast6' */
      0,                               /* '<S1042>/Cast' */
      1                                /* '<S1042>/NOT' */
    }
    ,

    /* End of '<S1019>/RESET Board - Return to initialization' */

    /* Start of '<S1015>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1035>/Cast8' */
        1U                             /* '<S1029>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1025>/Cast13' */
        1U,                            /* '<S1025>/Cast3' */
        0U,                            /* '<S1025>/Cast15' */
        0U,                            /* '<S1025>/Cast6' */
        0,                             /* '<S1025>/Cast14' */
        0                              /* '<S1025>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1015>/COMM Task - Sync bc 0' */

    /* Start of '<S460>/Transmission subtasks1' */
    {
      1U,                              /* '<S654>/Cast8' */
      1U                               /* '<S648>/Cast' */
    }
    ,

    /* End of '<S460>/Transmission subtasks1' */

    /* Start of '<S460>/Reception substasks' */
    {
      1U,                              /* '<S644>/Cast13' */
      1U,                              /* '<S644>/Cast3' */
      0U,                              /* '<S644>/Cast15' */
      0U,                              /* '<S644>/Cast6' */
      0,                               /* '<S644>/Cast14' */
      0                                /* '<S644>/Cast5' */
    }
    ,

    /* End of '<S460>/Reception substasks' */

    /* Start of '<S616>/Check msg transmission CAN2' */
    {
      21U                              /* '<S627>/Cast8' */
    }
    ,

    /* End of '<S616>/Check msg transmission CAN2' */

    /* Start of '<S616>/Check msg transmission CAN1' */
    {
      21U                              /* '<S621>/Cast' */
    }
    ,

    /* End of '<S616>/Check msg transmission CAN1' */

    /* Start of '<S459>/Reception substasks' */
    {
      21U,                             /* '<S617>/Cast13' */
      21U,                             /* '<S617>/Cast3' */
      0U,                              /* '<S617>/Cast15' */
      0U,                              /* '<S617>/Cast6' */
      0,                               /* '<S617>/Cast14' */
      0                                /* '<S617>/Cast5' */
    }
    ,

    /* End of '<S459>/Reception substasks' */

    /* Start of '<S586>/Check msg transmission CAN2' */
    {
      22U                              /* '<S597>/Cast8' */
    }
    ,

    /* End of '<S586>/Check msg transmission CAN2' */

    /* Start of '<S586>/Check msg transmission CAN1' */
    {
      22U                              /* '<S591>/Cast' */
    }
    ,

    /* End of '<S586>/Check msg transmission CAN1' */

    /* Start of '<S458>/Reception substasks' */
    {
      22U,                             /* '<S587>/Cast13' */
      22U,                             /* '<S587>/Cast3' */
      0U,                              /* '<S587>/Cast15' */
      0U,                              /* '<S587>/Cast6' */
      0,                               /* '<S587>/Cast14' */
      0                                /* '<S587>/Cast5' */
    }
    ,

    /* End of '<S458>/Reception substasks' */

    /* Start of '<S556>/Check msg transmission CAN2' */
    {
      25U                              /* '<S567>/Cast8' */
    }
    ,

    /* End of '<S556>/Check msg transmission CAN2' */

    /* Start of '<S556>/Check msg transmission CAN1' */
    {
      25U                              /* '<S561>/Cast' */
    }
    ,

    /* End of '<S556>/Check msg transmission CAN1' */

    /* Start of '<S457>/Reception substasks' */
    {
      25U,                             /* '<S557>/Cast13' */
      25U,                             /* '<S557>/Cast3' */
      0U,                              /* '<S557>/Cast15' */
      0U,                              /* '<S557>/Cast6' */
      0,                               /* '<S557>/Cast14' */
      0                                /* '<S557>/Cast5' */
    }
    ,

    /* End of '<S457>/Reception substasks' */

    /* Start of '<S526>/Check msg transmission CAN2' */
    {
      24U                              /* '<S537>/Cast8' */
    }
    ,

    /* End of '<S526>/Check msg transmission CAN2' */

    /* Start of '<S526>/Check msg transmission CAN1' */
    {
      24U                              /* '<S531>/Cast' */
    }
    ,

    /* End of '<S526>/Check msg transmission CAN1' */

    /* Start of '<S456>/Reception substasks' */
    {
      24U,                             /* '<S527>/Cast13' */
      24U,                             /* '<S527>/Cast3' */
      0U,                              /* '<S527>/Cast15' */
      0U,                              /* '<S527>/Cast6' */
      0,                               /* '<S527>/Cast14' */
      0                                /* '<S527>/Cast5' */
    }
    ,

    /* End of '<S456>/Reception substasks' */

    /* Start of '<S495>/Check msg transmission CAN2' */
    {
      23U                              /* '<S506>/Cast8' */
    }
    ,

    /* End of '<S495>/Check msg transmission CAN2' */

    /* Start of '<S495>/Check msg transmission CAN1' */
    {
      23U                              /* '<S500>/Cast' */
    }
    ,

    /* End of '<S495>/Check msg transmission CAN1' */

    /* Start of '<S455>/Reception substasks' */
    {
      23U,                             /* '<S496>/Cast13' */
      23U,                             /* '<S496>/Cast3' */
      0U,                              /* '<S496>/Cast15' */
      0U,                              /* '<S496>/Cast6' */
      0,                               /* '<S496>/Cast14' */
      0                                /* '<S496>/Cast5' */
    }
    ,

    /* End of '<S455>/Reception substasks' */

    /* Start of '<S476>/Check msg transmission CAN2' */
    {
      31U                              /* '<S487>/Cast8' */
    }
    ,

    /* End of '<S476>/Check msg transmission CAN2' */

    /* Start of '<S476>/Check msg transmission CAN1' */
    {
      31U                              /* '<S481>/Cast' */
    }
    ,

    /* End of '<S476>/Check msg transmission CAN1' */

    /* Start of '<S454>/Reception substasks' */
    {
      31U,                             /* '<S477>/Cast13' */
      31U,                             /* '<S477>/Cast3' */
      0U,                              /* '<S477>/Cast15' */
      0U,                              /* '<S477>/Cast6' */
      0,                               /* '<S477>/Cast14' */
      0                                /* '<S477>/Cast5' */
    }
    ,

    /* End of '<S454>/Reception substasks' */

    /* Start of '<S182>/Transmission subtasks' */
    {
      14U,                             /* '<S282>/Cast8' */
      14U                              /* '<S276>/Cast' */
    }
    ,

    /* End of '<S182>/Transmission subtasks' */

    /* Start of '<S182>/Reception substasks' */
    {
      14U,                             /* '<S272>/Cast13' */
      14U,                             /* '<S272>/Cast3' */
      0U,                              /* '<S272>/Cast15' */
      0U,                              /* '<S272>/Cast6' */
      0,                               /* '<S272>/Cast14' */
      0                                /* '<S272>/Cast5' */
    }
    ,

    /* End of '<S182>/Reception substasks' */

    /* Start of '<S181>/Transmission subtasks' */
    {
      13U,                             /* '<S264>/Cast8' */
      13U                              /* '<S258>/Cast' */
    }
    ,

    /* End of '<S181>/Transmission subtasks' */

    /* Start of '<S181>/Reception substasks' */
    {
      13U,                             /* '<S254>/Cast13' */
      13U,                             /* '<S254>/Cast3' */
      0U,                              /* '<S254>/Cast15' */
      0U,                              /* '<S254>/Cast6' */
      0,                               /* '<S254>/Cast14' */
      0                                /* '<S254>/Cast5' */
    }
    ,

    /* End of '<S181>/Reception substasks' */

    /* Start of '<S180>/Transmission subtasks' */
    {
      12U,                             /* '<S246>/Cast8' */
      12U                              /* '<S240>/Cast' */
    }
    ,

    /* End of '<S180>/Transmission subtasks' */

    /* Start of '<S180>/Reception substasks' */
    {
      12U,                             /* '<S236>/Cast13' */
      12U,                             /* '<S236>/Cast3' */
      0U,                              /* '<S236>/Cast15' */
      0U,                              /* '<S236>/Cast6' */
      0,                               /* '<S236>/Cast14' */
      0                                /* '<S236>/Cast5' */
    }
    ,

    /* End of '<S180>/Reception substasks' */

    /* Start of '<S179>/Transmission subtasks' */
    {
      11U,                             /* '<S228>/Cast8' */
      11U                              /* '<S222>/Cast' */
    }
    ,

    /* End of '<S179>/Transmission subtasks' */

    /* Start of '<S179>/Reception substasks' */
    {
      11U,                             /* '<S218>/Cast13' */
      11U,                             /* '<S218>/Cast3' */
      0U,                              /* '<S218>/Cast15' */
      0U,                              /* '<S218>/Cast6' */
      0,                               /* '<S218>/Cast14' */
      0                                /* '<S218>/Cast5' */
    }
    ,

    /* End of '<S179>/Reception substasks' */

    /* Start of '<S175>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S210>/Cast8' */
        1U                             /* '<S204>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S200>/Cast13' */
        1U,                            /* '<S200>/Cast3' */
        0U,                            /* '<S200>/Cast15' */
        0U,                            /* '<S200>/Cast6' */
        0,                             /* '<S200>/Cast14' */
        0                              /* '<S200>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    /* End of '<S175>/COMM Task - Sync bc 0' */
  }
  /* End of '<S10>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S139>/Constant'
   */
  { 0.0, 50.0, 70.0, 72.0, 90.0, 92.0, 110.0, 160.0, 180.0, 200.0, 250.0, 252.0,
    270.0, 290.0, 340.0, 360.0, 380.0, 430.0, 450.0, 470.0, 490.0, 510.0, 530.0
  },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S139>/Constant4'
   */
  { 0.0, 50.0, 70.0, 72.0, 90.0, 140.0, 142.0, 160.0, 210.0, 212.0, 230.0, 250.0,
    270.0, 320.0, 322.0, 340.0, 360.0, 410.0, 430.0, 431.0, 433.0, 450.0, 500.0,
    502.0, 520.0, 570.0, 572.0, 590.0, 592.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S139>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S139>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0,
    1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0 },

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
