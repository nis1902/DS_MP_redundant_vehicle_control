/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.269
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun  8 20:43:15 2022
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
    610.0,                             /* '<S1267>/Sum18' */
    520.0,                             /* '<S1267>/Sum17' */
    230.0,                             /* '<S1267>/Sum7' */
    70.0,                              /* '<S1267>/Sum1' */
    90.0,                              /* '<S1267>/Sum2' */
    50.0,                              /* '<S1267>/Sum4' */
    500.0,                             /* '<S1267>/Sum16' */
    210.0,                             /* '<S1267>/Sum6' */
    0.116,                             /* '<S1457>/Multiply' */
    16.0,                              /* '<S1459>/Power1' */
    0.0625,                            /* '<S1459>/Power' */
    16.0,                              /* '<S1460>/Power1' */
    0.0625,                            /* '<S1460>/Power' */
    16.0,                              /* '<S1461>/Power1' */
    0.0625,                            /* '<S1461>/Power' */
    16.0,                              /* '<S1462>/Power1' */
    0.0625,                            /* '<S1462>/Power' */
    0.125,                             /* '<S1396>/Power' */
    8.0,                               /* '<S1396>/Power1' */
    0.125,                             /* '<S1397>/Power' */
    8.0,                               /* '<S1397>/Power1' */
    0.125,                             /* '<S1398>/Power' */
    8.0,                               /* '<S1398>/Power1' */
    0.125,                             /* '<S1399>/Power' */
    8.0,                               /* '<S1399>/Power1' */
    270.0,                             /* '<S1266>/Sum17' */
    530.0,                             /* '<S1266>/Sum16' */
    70.0,                              /* '<S1266>/Sum1' */
    90.0,                              /* '<S1266>/Sum2' */
    180.0,                             /* '<S1266>/Sum6' */
    50.0,                              /* '<S1266>/Sum4' */
    230.0,                             /* '<S1114>/Sum5' */
    610.0,                             /* '<S1114>/Sum18' */
    160.0,                             /* '<S1114>/Sum6' */
    70.0,                              /* '<S1114>/Sum1' */
    90.0,                              /* '<S1114>/Sum2' */
    50.0,                              /* '<S1114>/Sum4' */
    140.0,                             /* '<S1114>/Sum3' */
    0.015625,                          /* '<S1200>/Power' */
    64.0,                              /* '<S1200>/Power1' */
    0.125,                             /* '<S1201>/Power' */
    8.0,                               /* '<S1201>/Power1' */
    0.015625,                          /* '<S1202>/Power' */
    64.0,                              /* '<S1202>/Power1' */
    110.0,                             /* '<S1113>/Sum17' */
    530.0,                             /* '<S1113>/Sum16' */
    70.0,                              /* '<S1113>/Sum1' */
    90.0,                              /* '<S1113>/Sum2' */
    50.0,                              /* '<S1113>/Sum4' */
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
    1.0,                               /* '<S1066>/Gain' */
    1.0,                               /* '<S1066>/Gain1' */
    1.0,                               /* '<S1066>/Gain2' */
    1.0,                               /* '<S1066>/Gain3' */
    1.0,                               /* '<S1066>/Gain4' */
    1.0,                               /* '<S1066>/Gain5' */
    1.0,                               /* '<S1066>/Gain6' */
    1.0,                               /* '<S1066>/Gain7' */
    1.0,                               /* '<S1065>/Gain' */
    1.0,                               /* '<S1065>/Gain1' */
    1.0,                               /* '<S1065>/Gain2' */
    1.0,                               /* '<S1065>/Gain3' */
    1.0,                               /* '<S1065>/Gain4' */
    1.0,                               /* '<S1065>/Gain5' */
    1.0,                               /* '<S1065>/Gain6' */
    1.0,                               /* '<S1065>/Gain7' */
    1.0,                               /* '<S1064>/Gain' */
    1.0,                               /* '<S1064>/Gain1' */
    1.0,                               /* '<S1064>/Gain2' */
    1.0,                               /* '<S1064>/Gain3' */
    1.0,                               /* '<S1064>/Gain4' */
    1.0,                               /* '<S1064>/Gain5' */
    1.0,                               /* '<S1064>/Gain6' */
    1.0,                               /* '<S1064>/Gain7' */
    16.0,                              /* '<S1044>/Power1' */
    0.0625,                            /* '<S1044>/Power' */
    16.0,                              /* '<S1045>/Power1' */
    0.0625,                            /* '<S1045>/Power' */
    16.0,                              /* '<S1046>/Power1' */
    0.0625,                            /* '<S1046>/Power' */
    16.0,                              /* '<S1047>/Power1' */
    0.0625,                            /* '<S1047>/Power' */
    16.0,                              /* '<S1024>/Power1' */
    0.0625,                            /* '<S1024>/Power' */
    16.0,                              /* '<S1025>/Power1' */
    0.0625,                            /* '<S1025>/Power' */
    16.0,                              /* '<S1026>/Power1' */
    0.0625,                            /* '<S1026>/Power' */
    16.0,                              /* '<S1027>/Power1' */
    0.0625,                            /* '<S1027>/Power' */
    64.0,                              /* '<S978>/Power1' */
    0.015625,                          /* '<S978>/Power' */
    64.0,                              /* '<S977>/Power1' */
    0.015625,                          /* '<S977>/Power' */
    8.0,                               /* '<S979>/Power1' */
    0.125,                             /* '<S979>/Power' */
    8.0,                               /* '<S926>/Power1' */
    0.125,                             /* '<S926>/Power' */
    8.0,                               /* '<S927>/Power1' */
    0.125,                             /* '<S927>/Power' */
    8.0,                               /* '<S928>/Power1' */
    0.125,                             /* '<S928>/Power' */
    8.0,                               /* '<S929>/Power1' */
    0.125,                             /* '<S929>/Power' */
    0.116,                             /* '<S924>/Gain' */
    0.015625,                          /* '<S731>/Power' */
    64.0,                              /* '<S731>/Power1' */
    0.125,                             /* '<S732>/Power' */
    8.0,                               /* '<S732>/Power1' */
    0.015625,                          /* '<S733>/Power' */
    64.0,                              /* '<S733>/Power1' */
    0.0625,                            /* '<S671>/Power' */
    16.0,                              /* '<S671>/Power1' */
    0.0625,                            /* '<S672>/Power' */
    16.0,                              /* '<S672>/Power1' */
    0.0625,                            /* '<S673>/Power' */
    16.0,                              /* '<S673>/Power1' */
    0.0625,                            /* '<S674>/Power' */
    16.0,                              /* '<S674>/Power1' */
    0.0625,                            /* '<S641>/Power' */
    16.0,                              /* '<S641>/Power1' */
    0.0625,                            /* '<S642>/Power' */
    16.0,                              /* '<S642>/Power1' */
    0.0625,                            /* '<S643>/Power' */
    16.0,                              /* '<S643>/Power1' */
    0.0625,                            /* '<S644>/Power' */
    16.0,                              /* '<S644>/Power1' */
    0.0625,                            /* '<S610>/Power' */
    16.0,                              /* '<S610>/Power1' */
    0.0625,                            /* '<S611>/Power' */
    16.0,                              /* '<S611>/Power1' */
    0.0625,                            /* '<S612>/Power' */
    16.0,                              /* '<S612>/Power1' */
    0.0625,                            /* '<S613>/Power' */
    16.0,                              /* '<S613>/Power1' */
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
    0U,                                /* '<S1366>/Cast' */
    0U,                                /* '<S1366>/Cast1' */
    0U,                                /* '<S1366>/Cast2' */
    0U,                                /* '<S1367>/Cast' */
    0U,                                /* '<S1367>/Cast1' */
    0U,                                /* '<S1367>/Cast2' */
    0U,                                /* '<S1368>/Cast' */
    0U,                                /* '<S1368>/Cast1' */
    0U,                                /* '<S1368>/Cast2' */
    0U,                                /* '<S1369>/Cast' */
    0U,                                /* '<S1369>/Cast1' */
    0U,                                /* '<S1369>/Cast2' */
    0U,                                /* '<S1228>/Cast6' */
    1U,                                /* '<S1023>/Cast3' */
    1U,                                /* '<S1023>/Cast4' */
    1U,                                /* '<S1023>/Cast5' */
    1U,                                /* '<S1023>/Cast6' */
    1U,                                /* '<S1023>/Cast15' */
    0U,                                /* '<S701>/Cast' */
    0U,                                /* '<S701>/Cast1' */
    0U,                                /* '<S701>/Cast2' */
    0U,                                /* '<S702>/Cast' */
    0U,                                /* '<S702>/Cast1' */
    0U,                                /* '<S702>/Cast2' */
    0U,                                /* '<S703>/Cast' */
    0U,                                /* '<S703>/Cast1' */
    0U,                                /* '<S703>/Cast2' */
    0U,                                /* '<S704>/Cast' */
    0U,                                /* '<S704>/Cast1' */
    0U,                                /* '<S704>/Cast2' */
    0U,                                /* '<S397>/Cast6' */
    0U,                                /* '<S152>/Cast1' */
    0U,                                /* '<S127>/Cast' */
    0,                                 /* '<S1228>/Cast' */
    1,                                 /* '<S1228>/NOT' */
    0,                                 /* '<S398>/Cast' */
    0,                                 /* '<S397>/Cast' */
    1,                                 /* '<S397>/NOT' */

    /* Start of '<S1267>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1420>/Cast8' */
        1U                             /* '<S1414>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1410>/Cast13' */
        1U,                            /* '<S1410>/Cast3' */
        0U,                            /* '<S1410>/Cast15' */
        0U,                            /* '<S1410>/Cast6' */
        0,                             /* '<S1410>/Cast14' */
        0                              /* '<S1410>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1267>/COMM Task - Sync bc 1' */

    /* Start of '<S1379>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1390>/Cast8' */
    }
    ,

    /* End of '<S1379>/Check msg transmission CAN2' */

    /* Start of '<S1379>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1384>/Cast' */
    }
    ,

    /* End of '<S1379>/Check msg transmission CAN1' */

    /* Start of '<S1341>/Reception substasks' */
    {
      22U,                             /* '<S1380>/Cast13' */
      22U,                             /* '<S1380>/Cast3' */
      0U,                              /* '<S1380>/Cast15' */
      0U,                              /* '<S1380>/Cast6' */
      0,                               /* '<S1380>/Cast14' */
      0                                /* '<S1380>/Cast5' */
    }
    ,

    /* End of '<S1341>/Reception substasks' */

    /* Start of '<S1349>/Check msg transmission CAN2' */
    {
      25U                              /* '<S1360>/Cast8' */
    }
    ,

    /* End of '<S1349>/Check msg transmission CAN2' */

    /* Start of '<S1349>/Check msg transmission CAN1' */
    {
      25U                              /* '<S1354>/Cast' */
    }
    ,

    /* End of '<S1349>/Check msg transmission CAN1' */

    /* Start of '<S1340>/Reception substasks' */
    {
      25U,                             /* '<S1350>/Cast13' */
      25U,                             /* '<S1350>/Cast3' */
      0U,                              /* '<S1350>/Cast15' */
      0U,                              /* '<S1350>/Cast6' */
      0,                               /* '<S1350>/Cast14' */
      0                                /* '<S1350>/Cast5' */
    }
    ,

    /* End of '<S1340>/Reception substasks' */

    /* Start of '<S1269>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1295>/Cast6' */
      0,                               /* '<S1295>/Cast' */
      1                                /* '<S1295>/NOT' */
    }
    ,

    /* End of '<S1269>/RESET Board - Return to initialization' */

    /* Start of '<S1266>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1288>/Cast8' */
        1U                             /* '<S1282>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1278>/Cast13' */
        1U,                            /* '<S1278>/Cast3' */
        0U,                            /* '<S1278>/Cast15' */
        0U,                            /* '<S1278>/Cast6' */
        0,                             /* '<S1278>/Cast14' */
        0                              /* '<S1278>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1266>/COMM Task - Sync bc 0' */

    /* Start of '<S1114>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1221>/Cast8' */
        1U                             /* '<S1215>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1211>/Cast13' */
        1U,                            /* '<S1211>/Cast3' */
        0U,                            /* '<S1211>/Cast15' */
        0U,                            /* '<S1211>/Cast6' */
        0,                             /* '<S1211>/Cast14' */
        0                              /* '<S1211>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1114>/COMM Task - Sync bc 1' */

    /* Start of '<S1183>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1194>/Cast8' */
    }
    ,

    /* End of '<S1183>/Check msg transmission CAN2' */

    /* Start of '<S1183>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1188>/Cast' */
    }
    ,

    /* End of '<S1183>/Check msg transmission CAN1' */

    /* Start of '<S1175>/Reception substasks' */
    {
      21U,                             /* '<S1184>/Cast13' */
      21U,                             /* '<S1184>/Cast3' */
      0U,                              /* '<S1184>/Cast15' */
      0U,                              /* '<S1184>/Cast6' */
      0,                               /* '<S1184>/Cast14' */
      0                                /* '<S1184>/Cast5' */
    }
    ,

    /* End of '<S1175>/Reception substasks' */

    /* Start of '<S1117>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1140>/Cast6' */
      0,                               /* '<S1140>/Cast' */
      1                                /* '<S1140>/NOT' */
    }
    ,

    /* End of '<S1117>/RESET Board - Return to initialization' */

    /* Start of '<S1113>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1133>/Cast8' */
        1U                             /* '<S1127>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1123>/Cast13' */
        1U,                            /* '<S1123>/Cast3' */
        0U,                            /* '<S1123>/Cast15' */
        0U,                            /* '<S1123>/Cast6' */
        0,                             /* '<S1123>/Cast14' */
        0                              /* '<S1123>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1113>/COMM Task - Sync bc 0' */

    /* Start of '<S558>/Transmission subtasks1' */
    {
      1U,                              /* '<S752>/Cast8' */
      1U                               /* '<S746>/Cast' */
    }
    ,

    /* End of '<S558>/Transmission subtasks1' */

    /* Start of '<S558>/Reception substasks' */
    {
      1U,                              /* '<S742>/Cast13' */
      1U,                              /* '<S742>/Cast3' */
      0U,                              /* '<S742>/Cast15' */
      0U,                              /* '<S742>/Cast6' */
      0,                               /* '<S742>/Cast14' */
      0                                /* '<S742>/Cast5' */
    }
    ,

    /* End of '<S558>/Reception substasks' */

    /* Start of '<S714>/Check msg transmission CAN2' */
    {
      21U                              /* '<S725>/Cast8' */
    }
    ,

    /* End of '<S714>/Check msg transmission CAN2' */

    /* Start of '<S714>/Check msg transmission CAN1' */
    {
      21U                              /* '<S719>/Cast' */
    }
    ,

    /* End of '<S714>/Check msg transmission CAN1' */

    /* Start of '<S557>/Reception substasks' */
    {
      21U,                             /* '<S715>/Cast13' */
      21U,                             /* '<S715>/Cast3' */
      0U,                              /* '<S715>/Cast15' */
      0U,                              /* '<S715>/Cast6' */
      0,                               /* '<S715>/Cast14' */
      0                                /* '<S715>/Cast5' */
    }
    ,

    /* End of '<S557>/Reception substasks' */

    /* Start of '<S684>/Check msg transmission CAN2' */
    {
      22U                              /* '<S695>/Cast8' */
    }
    ,

    /* End of '<S684>/Check msg transmission CAN2' */

    /* Start of '<S684>/Check msg transmission CAN1' */
    {
      22U                              /* '<S689>/Cast' */
    }
    ,

    /* End of '<S684>/Check msg transmission CAN1' */

    /* Start of '<S556>/Reception substasks' */
    {
      22U,                             /* '<S685>/Cast13' */
      22U,                             /* '<S685>/Cast3' */
      0U,                              /* '<S685>/Cast15' */
      0U,                              /* '<S685>/Cast6' */
      0,                               /* '<S685>/Cast14' */
      0                                /* '<S685>/Cast5' */
    }
    ,

    /* End of '<S556>/Reception substasks' */

    /* Start of '<S654>/Check msg transmission CAN2' */
    {
      25U                              /* '<S665>/Cast8' */
    }
    ,

    /* End of '<S654>/Check msg transmission CAN2' */

    /* Start of '<S654>/Check msg transmission CAN1' */
    {
      25U                              /* '<S659>/Cast' */
    }
    ,

    /* End of '<S654>/Check msg transmission CAN1' */

    /* Start of '<S555>/Reception substasks' */
    {
      25U,                             /* '<S655>/Cast13' */
      25U,                             /* '<S655>/Cast3' */
      0U,                              /* '<S655>/Cast15' */
      0U,                              /* '<S655>/Cast6' */
      0,                               /* '<S655>/Cast14' */
      0                                /* '<S655>/Cast5' */
    }
    ,

    /* End of '<S555>/Reception substasks' */

    /* Start of '<S624>/Check msg transmission CAN2' */
    {
      24U                              /* '<S635>/Cast8' */
    }
    ,

    /* End of '<S624>/Check msg transmission CAN2' */

    /* Start of '<S624>/Check msg transmission CAN1' */
    {
      24U                              /* '<S629>/Cast' */
    }
    ,

    /* End of '<S624>/Check msg transmission CAN1' */

    /* Start of '<S554>/Reception substasks' */
    {
      24U,                             /* '<S625>/Cast13' */
      24U,                             /* '<S625>/Cast3' */
      0U,                              /* '<S625>/Cast15' */
      0U,                              /* '<S625>/Cast6' */
      0,                               /* '<S625>/Cast14' */
      0                                /* '<S625>/Cast5' */
    }
    ,

    /* End of '<S554>/Reception substasks' */

    /* Start of '<S593>/Check msg transmission CAN2' */
    {
      23U                              /* '<S604>/Cast8' */
    }
    ,

    /* End of '<S593>/Check msg transmission CAN2' */

    /* Start of '<S593>/Check msg transmission CAN1' */
    {
      23U                              /* '<S598>/Cast' */
    }
    ,

    /* End of '<S593>/Check msg transmission CAN1' */

    /* Start of '<S553>/Reception substasks' */
    {
      23U,                             /* '<S594>/Cast13' */
      23U,                             /* '<S594>/Cast3' */
      0U,                              /* '<S594>/Cast15' */
      0U,                              /* '<S594>/Cast6' */
      0,                               /* '<S594>/Cast14' */
      0                                /* '<S594>/Cast5' */
    }
    ,

    /* End of '<S553>/Reception substasks' */

    /* Start of '<S574>/Check msg transmission CAN2' */
    {
      31U                              /* '<S585>/Cast8' */
    }
    ,

    /* End of '<S574>/Check msg transmission CAN2' */

    /* Start of '<S574>/Check msg transmission CAN1' */
    {
      31U                              /* '<S579>/Cast' */
    }
    ,

    /* End of '<S574>/Check msg transmission CAN1' */

    /* Start of '<S552>/Reception substasks' */
    {
      31U,                             /* '<S575>/Cast13' */
      31U,                             /* '<S575>/Cast3' */
      0U,                              /* '<S575>/Cast15' */
      0U,                              /* '<S575>/Cast6' */
      0,                               /* '<S575>/Cast14' */
      0                                /* '<S575>/Cast5' */
    }
    ,

    /* End of '<S552>/Reception substasks' */

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
