/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.293
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun 15 20:34:01 2022
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
    1070.0,                            /* '<S1266>/Sum18' */
    910.0,                             /* '<S1266>/Sum17' */
    380.0,                             /* '<S1266>/Sum7' */
    110.0,                             /* '<S1266>/Sum1' */
    160.0,                             /* '<S1266>/Sum2' */
    60.0,                              /* '<S1266>/Sum4' */
    860.0,                             /* '<S1266>/Sum16' */
    330.0,                             /* '<S1266>/Sum6' */
    0.21200000000000002,               /* '<S1456>/Multiply' */
    16.0,                              /* '<S1458>/Power1' */
    0.0625,                            /* '<S1458>/Power' */
    16.0,                              /* '<S1459>/Power1' */
    0.0625,                            /* '<S1459>/Power' */
    16.0,                              /* '<S1460>/Power1' */
    0.0625,                            /* '<S1460>/Power' */
    16.0,                              /* '<S1461>/Power1' */
    0.0625,                            /* '<S1461>/Power' */
    0.25,                              /* '<S1395>/Power' */
    4.0,                               /* '<S1395>/Power1' */
    0.25,                              /* '<S1396>/Power' */
    4.0,                               /* '<S1396>/Power1' */
    0.25,                              /* '<S1397>/Power' */
    4.0,                               /* '<S1397>/Power1' */
    0.25,                              /* '<S1398>/Power' */
    4.0,                               /* '<S1398>/Power1' */
    480.0,                             /* '<S1265>/Sum17' */
    1000.0,                            /* '<S1265>/Sum16' */
    110.0,                             /* '<S1265>/Sum1' */
    160.0,                             /* '<S1265>/Sum2' */
    320.0,                             /* '<S1265>/Sum6' */
    60.0,                              /* '<S1265>/Sum4' */
    380.0,                             /* '<S1113>/Sum5' */
    1070.0,                            /* '<S1113>/Sum18' */
    270.0,                             /* '<S1113>/Sum6' */
    110.0,                             /* '<S1113>/Sum1' */
    160.0,                             /* '<S1113>/Sum2' */
    60.0,                              /* '<S1113>/Sum4' */
    220.0,                             /* '<S1113>/Sum3' */
    210.0,                             /* '<S1112>/Sum17' */
    1000.0,                            /* '<S1112>/Sum16' */
    110.0,                             /* '<S1112>/Sum1' */
    160.0,                             /* '<S1112>/Sum2' */
    60.0,                              /* '<S1112>/Sum4' */
    530.0,                             /* '<S176>/Sum13' */
    430.0,                             /* '<S176>/Sum26' */
    480.0,                             /* '<S176>/Sum27' */
    1020.0,                            /* '<S176>/Sum7' */
    1070.0,                            /* '<S176>/Sum18' */
    640.0,                             /* '<S176>/Sum16' */
    750.0,                             /* '<S176>/Sum17' */
    910.0,                             /* '<S176>/Sum21' */
    380.0,                             /* '<S176>/Sum25' */
    270.0,                             /* '<S176>/Sum5' */
    110.0,                             /* '<S176>/Sum1' */
    800.0,                             /* '<S176>/Sum19' */
    160.0,                             /* '<S176>/Sum2' */
    60.0,                              /* '<S176>/Sum4' */
    600.0,                             /* '<S176>/Sum15' */
    700.0,                             /* '<S176>/Sum14' */
    860.0,                             /* '<S176>/Sum20' */
    330.0,                             /* '<S176>/Sum24' */
    220.0,                             /* '<S176>/Sum3' */
    970.0,                             /* '<S176>/Sum6' */
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
    1.0,                               /* '<S1063>/Gain' */
    1.0,                               /* '<S1063>/Gain1' */
    1.0,                               /* '<S1063>/Gain2' */
    1.0,                               /* '<S1063>/Gain3' */
    1.0,                               /* '<S1063>/Gain4' */
    1.0,                               /* '<S1063>/Gain5' */
    1.0,                               /* '<S1063>/Gain6' */
    1.0,                               /* '<S1063>/Gain7' */
    16.0,                              /* '<S1043>/Power1' */
    0.0625,                            /* '<S1043>/Power' */
    16.0,                              /* '<S1044>/Power1' */
    0.0625,                            /* '<S1044>/Power' */
    16.0,                              /* '<S1045>/Power1' */
    0.0625,                            /* '<S1045>/Power' */
    16.0,                              /* '<S1046>/Power1' */
    0.0625,                            /* '<S1046>/Power' */
    16.0,                              /* '<S1023>/Power1' */
    0.0625,                            /* '<S1023>/Power' */
    16.0,                              /* '<S1024>/Power1' */
    0.0625,                            /* '<S1024>/Power' */
    16.0,                              /* '<S1025>/Power1' */
    0.0625,                            /* '<S1025>/Power' */
    16.0,                              /* '<S1026>/Power1' */
    0.0625,                            /* '<S1026>/Power' */
    64.0,                              /* '<S977>/Power1' */
    0.015625,                          /* '<S977>/Power' */
    64.0,                              /* '<S976>/Power1' */
    0.015625,                          /* '<S976>/Power' */
    8.0,                               /* '<S978>/Power1' */
    0.125,                             /* '<S978>/Power' */
    4.0,                               /* '<S925>/Power1' */
    0.25,                              /* '<S925>/Power' */
    4.0,                               /* '<S926>/Power1' */
    0.25,                              /* '<S926>/Power' */
    4.0,                               /* '<S927>/Power1' */
    0.25,                              /* '<S927>/Power' */
    4.0,                               /* '<S928>/Power1' */
    0.25,                              /* '<S928>/Power' */
    0.21200000000000002,               /* '<S923>/Gain' */
    0.0625,                            /* '<S670>/Power' */
    16.0,                              /* '<S670>/Power1' */
    0.0625,                            /* '<S671>/Power' */
    16.0,                              /* '<S671>/Power1' */
    0.0625,                            /* '<S672>/Power' */
    16.0,                              /* '<S672>/Power1' */
    0.0625,                            /* '<S673>/Power' */
    16.0,                              /* '<S673>/Power1' */
    0.0625,                            /* '<S640>/Power' */
    16.0,                              /* '<S640>/Power1' */
    0.0625,                            /* '<S641>/Power' */
    16.0,                              /* '<S641>/Power1' */
    0.0625,                            /* '<S642>/Power' */
    16.0,                              /* '<S642>/Power1' */
    0.0625,                            /* '<S643>/Power' */
    16.0,                              /* '<S643>/Power1' */
    0.0625,                            /* '<S609>/Power' */
    16.0,                              /* '<S609>/Power1' */
    0.0625,                            /* '<S610>/Power' */
    16.0,                              /* '<S610>/Power1' */
    0.0625,                            /* '<S611>/Power' */
    16.0,                              /* '<S611>/Power1' */
    0.0625,                            /* '<S612>/Power' */
    16.0,                              /* '<S612>/Power1' */
    900.0,                             /* '<S175>/Sum12' */
    950.0,                             /* '<S175>/Sum15' */
    1050.0,                            /* '<S175>/Sum17' */
    1000.0,                            /* '<S175>/Sum16' */
    110.0,                             /* '<S175>/Sum1' */
    160.0,                             /* '<S175>/Sum2' */
    210.0,                             /* '<S175>/Sum18' */
    370.0,                             /* '<S175>/Sum7' */
    320.0,                             /* '<S175>/Sum6' */
    530.0,                             /* '<S175>/Sum10' */
    480.0,                             /* '<S175>/Sum9' */
    690.0,                             /* '<S175>/Sum11' */
    640.0,                             /* '<S175>/Sum13' */
    850.0,                             /* '<S175>/Sum14' */
    800.0,                             /* '<S175>/Sum19' */
    60.0,                              /* '<S175>/Sum4' */
    750.0,                             /* '<S175>/Sum20' */
    270.0,                             /* '<S175>/Sum3' */
    430.0,                             /* '<S175>/Sum5' */
    590.0,                             /* '<S175>/Sum8' */
    1.0,                               /* '<S127>/Add1' */
    0U,                                /* '<S152>/Cast' */
    0U,                                /* '<S1365>/Cast' */
    0U,                                /* '<S1365>/Cast1' */
    0U,                                /* '<S1365>/Cast2' */
    0U,                                /* '<S1366>/Cast' */
    0U,                                /* '<S1366>/Cast1' */
    0U,                                /* '<S1366>/Cast2' */
    0U,                                /* '<S1367>/Cast' */
    0U,                                /* '<S1367>/Cast1' */
    0U,                                /* '<S1367>/Cast2' */
    0U,                                /* '<S1368>/Cast' */
    0U,                                /* '<S1368>/Cast1' */
    0U,                                /* '<S1368>/Cast2' */
    0U,                                /* '<S1227>/Cast6' */
    0U,                                /* '<S1022>/Cast3' */
    0U,                                /* '<S1022>/Cast6' */
    0U,                                /* '<S1022>/Cast15' */
    0U,                                /* '<S700>/Cast' */
    0U,                                /* '<S700>/Cast1' */
    0U,                                /* '<S700>/Cast2' */
    0U,                                /* '<S701>/Cast' */
    0U,                                /* '<S701>/Cast1' */
    0U,                                /* '<S701>/Cast2' */
    0U,                                /* '<S702>/Cast' */
    0U,                                /* '<S702>/Cast1' */
    0U,                                /* '<S702>/Cast2' */
    0U,                                /* '<S703>/Cast' */
    0U,                                /* '<S703>/Cast1' */
    0U,                                /* '<S703>/Cast2' */
    0U,                                /* '<S397>/Cast1' */
    0U,                                /* '<S396>/Cast6' */
    0U,                                /* '<S152>/Cast1' */
    0U,                                /* '<S127>/Cast' */
    0,                                 /* '<S1227>/Cast' */
    1,                                 /* '<S1227>/NOT' */
    0,                                 /* '<S397>/Cast' */
    0,                                 /* '<S396>/Cast' */
    1,                                 /* '<S396>/NOT' */

    /* Start of '<S1266>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1419>/Cast8' */
        1U                             /* '<S1413>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1409>/Cast13' */
        1U,                            /* '<S1409>/Cast3' */
        0U,                            /* '<S1409>/Cast15' */
        0U,                            /* '<S1409>/Cast6' */
        0,                             /* '<S1409>/Cast14' */
        0                              /* '<S1409>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1266>/COMM Task - Sync bc 1' */

    /* Start of '<S1378>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1389>/Cast8' */
    }
    ,

    /* End of '<S1378>/Check msg transmission CAN2' */

    /* Start of '<S1378>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1383>/Cast' */
    }
    ,

    /* End of '<S1378>/Check msg transmission CAN1' */

    /* Start of '<S1340>/Reception substasks' */
    {
      22U,                             /* '<S1379>/Cast13' */
      22U,                             /* '<S1379>/Cast3' */
      0U,                              /* '<S1379>/Cast15' */
      0U,                              /* '<S1379>/Cast6' */
      0,                               /* '<S1379>/Cast14' */
      0                                /* '<S1379>/Cast5' */
    }
    ,

    /* End of '<S1340>/Reception substasks' */

    /* Start of '<S1348>/Check msg transmission CAN2' */
    {
      25U                              /* '<S1359>/Cast8' */
    }
    ,

    /* End of '<S1348>/Check msg transmission CAN2' */

    /* Start of '<S1348>/Check msg transmission CAN1' */
    {
      25U                              /* '<S1353>/Cast' */
    }
    ,

    /* End of '<S1348>/Check msg transmission CAN1' */

    /* Start of '<S1339>/Reception substasks' */
    {
      25U,                             /* '<S1349>/Cast13' */
      25U,                             /* '<S1349>/Cast3' */
      0U,                              /* '<S1349>/Cast15' */
      0U,                              /* '<S1349>/Cast6' */
      0,                               /* '<S1349>/Cast14' */
      0                                /* '<S1349>/Cast5' */
    }
    ,

    /* End of '<S1339>/Reception substasks' */

    /* Start of '<S1268>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1294>/Cast6' */
      0,                               /* '<S1294>/Cast' */
      1                                /* '<S1294>/NOT' */
    }
    ,

    /* End of '<S1268>/RESET Board - Return to initialization' */

    /* Start of '<S1265>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1287>/Cast8' */
        1U                             /* '<S1281>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1277>/Cast13' */
        1U,                            /* '<S1277>/Cast3' */
        0U,                            /* '<S1277>/Cast15' */
        0U,                            /* '<S1277>/Cast6' */
        0,                             /* '<S1277>/Cast14' */
        0                              /* '<S1277>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1265>/COMM Task - Sync bc 0' */

    /* Start of '<S1113>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1220>/Cast8' */
        1U                             /* '<S1214>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1210>/Cast13' */
        1U,                            /* '<S1210>/Cast3' */
        0U,                            /* '<S1210>/Cast15' */
        0U,                            /* '<S1210>/Cast6' */
        0,                             /* '<S1210>/Cast14' */
        0                              /* '<S1210>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1113>/COMM Task - Sync bc 1' */

    /* Start of '<S1174>/Transmission subtasks' */
    {
      -6.0,                            /* '<S1199>/Gain' */
      0.015625,                        /* '<S1199>/Power' */
      64.0,                            /* '<S1199>/Power1' */
      -3.0,                            /* '<S1200>/Gain' */
      0.125,                           /* '<S1200>/Power' */
      8.0,                             /* '<S1200>/Power1' */
      -6.0,                            /* '<S1201>/Gain' */
      0.015625,                        /* '<S1201>/Power' */
      64.0,                            /* '<S1201>/Power1' */

      /* Start of '<S713>/Check msg transmission CAN2' */
      {
        21U                            /* '<S1193>/Cast8' */
      }
      ,

      /* End of '<S713>/Check msg transmission CAN2' */

      /* Start of '<S713>/Check msg transmission CAN1' */
      {
        21U                            /* '<S1187>/Cast' */
      }
      /* End of '<S713>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S1174>/Transmission subtasks' */

    /* Start of '<S1174>/Reception substasks' */
    {
      21U,                             /* '<S1183>/Cast13' */
      21U,                             /* '<S1183>/Cast3' */
      0U,                              /* '<S1183>/Cast15' */
      0U,                              /* '<S1183>/Cast6' */
      0,                               /* '<S1183>/Cast14' */
      0                                /* '<S1183>/Cast5' */
    }
    ,

    /* End of '<S1174>/Reception substasks' */

    /* Start of '<S1116>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1139>/Cast6' */
      0,                               /* '<S1139>/Cast' */
      1                                /* '<S1139>/NOT' */
    }
    ,

    /* End of '<S1116>/RESET Board - Return to initialization' */

    /* Start of '<S1112>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S178>/Transmission subtasks' */
      {
        1U,                            /* '<S1132>/Cast8' */
        1U                             /* '<S1126>/Cast' */
      }
      ,

      /* End of '<S178>/Transmission subtasks' */

      /* Start of '<S178>/Reception substasks' */
      {
        1U,                            /* '<S1122>/Cast13' */
        1U,                            /* '<S1122>/Cast3' */
        0U,                            /* '<S1122>/Cast15' */
        0U,                            /* '<S1122>/Cast6' */
        0,                             /* '<S1122>/Cast14' */
        0                              /* '<S1122>/Cast5' */
      }
      /* End of '<S178>/Reception substasks' */
    }
    ,

    /* End of '<S1112>/COMM Task - Sync bc 0' */

    /* Start of '<S557>/Transmission subtasks1' */
    {
      1U,                              /* '<S751>/Cast8' */
      1U                               /* '<S745>/Cast' */
    }
    ,

    /* End of '<S557>/Transmission subtasks1' */

    /* Start of '<S557>/Reception substasks' */
    {
      1U,                              /* '<S741>/Cast13' */
      1U,                              /* '<S741>/Cast3' */
      0U,                              /* '<S741>/Cast15' */
      0U,                              /* '<S741>/Cast6' */
      0,                               /* '<S741>/Cast14' */
      0                                /* '<S741>/Cast5' */
    }
    ,

    /* End of '<S557>/Reception substasks' */

    /* Start of '<S556>/Transmission subtasks' */
    {
      -6.0,                            /* '<S730>/Gain' */
      0.015625,                        /* '<S730>/Power' */
      64.0,                            /* '<S730>/Power1' */
      -3.0,                            /* '<S731>/Gain' */
      0.125,                           /* '<S731>/Power' */
      8.0,                             /* '<S731>/Power1' */
      -6.0,                            /* '<S732>/Gain' */
      0.015625,                        /* '<S732>/Power' */
      64.0,                            /* '<S732>/Power1' */

      /* Start of '<S713>/Check msg transmission CAN2' */
      {
        21U                            /* '<S724>/Cast8' */
      }
      ,

      /* End of '<S713>/Check msg transmission CAN2' */

      /* Start of '<S713>/Check msg transmission CAN1' */
      {
        21U                            /* '<S718>/Cast' */
      }
      /* End of '<S713>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S556>/Transmission subtasks' */

    /* Start of '<S556>/Reception substasks' */
    {
      21U,                             /* '<S714>/Cast13' */
      21U,                             /* '<S714>/Cast3' */
      0U,                              /* '<S714>/Cast15' */
      0U,                              /* '<S714>/Cast6' */
      0,                               /* '<S714>/Cast14' */
      0                                /* '<S714>/Cast5' */
    }
    ,

    /* End of '<S556>/Reception substasks' */

    /* Start of '<S683>/Check msg transmission CAN2' */
    {
      22U                              /* '<S694>/Cast8' */
    }
    ,

    /* End of '<S683>/Check msg transmission CAN2' */

    /* Start of '<S683>/Check msg transmission CAN1' */
    {
      22U                              /* '<S688>/Cast' */
    }
    ,

    /* End of '<S683>/Check msg transmission CAN1' */

    /* Start of '<S555>/Reception substasks' */
    {
      22U,                             /* '<S684>/Cast13' */
      22U,                             /* '<S684>/Cast3' */
      0U,                              /* '<S684>/Cast15' */
      0U,                              /* '<S684>/Cast6' */
      0,                               /* '<S684>/Cast14' */
      0                                /* '<S684>/Cast5' */
    }
    ,

    /* End of '<S555>/Reception substasks' */

    /* Start of '<S653>/Check msg transmission CAN2' */
    {
      25U                              /* '<S664>/Cast8' */
    }
    ,

    /* End of '<S653>/Check msg transmission CAN2' */

    /* Start of '<S653>/Check msg transmission CAN1' */
    {
      25U                              /* '<S658>/Cast' */
    }
    ,

    /* End of '<S653>/Check msg transmission CAN1' */

    /* Start of '<S554>/Reception substasks' */
    {
      25U,                             /* '<S654>/Cast13' */
      25U,                             /* '<S654>/Cast3' */
      0U,                              /* '<S654>/Cast15' */
      0U,                              /* '<S654>/Cast6' */
      0,                               /* '<S654>/Cast14' */
      0                                /* '<S654>/Cast5' */
    }
    ,

    /* End of '<S554>/Reception substasks' */

    /* Start of '<S623>/Check msg transmission CAN2' */
    {
      24U                              /* '<S634>/Cast8' */
    }
    ,

    /* End of '<S623>/Check msg transmission CAN2' */

    /* Start of '<S623>/Check msg transmission CAN1' */
    {
      24U                              /* '<S628>/Cast' */
    }
    ,

    /* End of '<S623>/Check msg transmission CAN1' */

    /* Start of '<S553>/Reception substasks' */
    {
      24U,                             /* '<S624>/Cast13' */
      24U,                             /* '<S624>/Cast3' */
      0U,                              /* '<S624>/Cast15' */
      0U,                              /* '<S624>/Cast6' */
      0,                               /* '<S624>/Cast14' */
      0                                /* '<S624>/Cast5' */
    }
    ,

    /* End of '<S553>/Reception substasks' */

    /* Start of '<S592>/Check msg transmission CAN2' */
    {
      23U                              /* '<S603>/Cast8' */
    }
    ,

    /* End of '<S592>/Check msg transmission CAN2' */

    /* Start of '<S592>/Check msg transmission CAN1' */
    {
      23U                              /* '<S597>/Cast' */
    }
    ,

    /* End of '<S592>/Check msg transmission CAN1' */

    /* Start of '<S552>/Reception substasks' */
    {
      23U,                             /* '<S593>/Cast13' */
      23U,                             /* '<S593>/Cast3' */
      0U,                              /* '<S593>/Cast15' */
      0U,                              /* '<S593>/Cast6' */
      0,                               /* '<S593>/Cast14' */
      0                                /* '<S593>/Cast5' */
    }
    ,

    /* End of '<S552>/Reception substasks' */

    /* Start of '<S573>/Check msg transmission CAN2' */
    {
      31U                              /* '<S584>/Cast8' */
    }
    ,

    /* End of '<S573>/Check msg transmission CAN2' */

    /* Start of '<S573>/Check msg transmission CAN1' */
    {
      31U                              /* '<S578>/Cast' */
    }
    ,

    /* End of '<S573>/Check msg transmission CAN1' */

    /* Start of '<S551>/Reception substasks' */
    {
      31U,                             /* '<S574>/Cast13' */
      31U,                             /* '<S574>/Cast3' */
      0U,                              /* '<S574>/Cast15' */
      0U,                              /* '<S574>/Cast6' */
      0,                               /* '<S574>/Cast14' */
      0                                /* '<S574>/Cast5' */
    }
    ,

    /* End of '<S551>/Reception substasks' */

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
  { 0.0, 60.0, 110.0, 116.0, 160.0, 166.0, 210.0, 270.0, 320.0, 370.0, 430.0,
    436.0, 480.0, 530.0, 590.0, 640.0, 690.0, 750.0, 800.0, 850.0, 900.0, 950.0,
    1000.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S139>/Constant4'
   */
  { 0.0, 60.0, 110.0, 116.0, 160.0, 220.0, 226.0, 270.0, 330.0, 336.0, 380.0,
    430.0, 480.0, 540.0, 546.0, 590.0, 640.0, 700.0, 750.0, 751.0, 753.0, 800.0,
    860.0, 866.0, 910.0, 970.0, 976.0, 1020.0, 1026.0 },

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
