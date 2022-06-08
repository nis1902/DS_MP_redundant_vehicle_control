/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.253
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun  8 12:41:07 2022
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
    336.0,                             /* '<S1112>/Sum18' */
    416.0,                             /* '<S1112>/Sum17' */
    184.0,                             /* '<S1112>/Sum7' */
    56.0,                              /* '<S1112>/Sum1' */
    72.0,                              /* '<S1112>/Sum2' */
    40.0,                              /* '<S1112>/Sum4' */
    400.0,                             /* '<S1112>/Sum16' */
    168.0,                             /* '<S1112>/Sum6' */
    0.088000000000000009,              /* '<S1302>/Multiply' */
    16.0,                              /* '<S1304>/Power1' */
    0.0625,                            /* '<S1304>/Power' */
    16.0,                              /* '<S1305>/Power1' */
    0.0625,                            /* '<S1305>/Power' */
    16.0,                              /* '<S1306>/Power1' */
    0.0625,                            /* '<S1306>/Power' */
    16.0,                              /* '<S1307>/Power1' */
    0.0625,                            /* '<S1307>/Power' */
    0.125,                             /* '<S1241>/Power' */
    8.0,                               /* '<S1241>/Power1' */
    0.125,                             /* '<S1242>/Power' */
    8.0,                               /* '<S1242>/Power1' */
    0.125,                             /* '<S1243>/Power' */
    8.0,                               /* '<S1243>/Power1' */
    0.125,                             /* '<S1244>/Power' */
    8.0,                               /* '<S1244>/Power1' */
    216.0,                             /* '<S1111>/Sum17' */
    424.0,                             /* '<S1111>/Sum16' */
    56.0,                              /* '<S1111>/Sum1' */
    72.0,                              /* '<S1111>/Sum2' */
    144.0,                             /* '<S1111>/Sum6' */
    40.0,                              /* '<S1111>/Sum4' */
    184.0,                             /* '<S959>/Sum5' */
    336.0,                             /* '<S959>/Sum18' */
    128.0,                             /* '<S959>/Sum6' */
    56.0,                              /* '<S959>/Sum1' */
    72.0,                              /* '<S959>/Sum2' */
    40.0,                              /* '<S959>/Sum4' */
    112.0,                             /* '<S959>/Sum3' */
    0.015625,                          /* '<S1045>/Power' */
    64.0,                              /* '<S1045>/Power1' */
    0.125,                             /* '<S1046>/Power' */
    8.0,                               /* '<S1046>/Power1' */
    0.015625,                          /* '<S1047>/Power' */
    64.0,                              /* '<S1047>/Power1' */
    88.0,                              /* '<S958>/Sum17' */
    424.0,                             /* '<S958>/Sum16' */
    56.0,                              /* '<S958>/Sum1' */
    72.0,                              /* '<S958>/Sum2' */
    40.0,                              /* '<S958>/Sum4' */
    232.0,                             /* '<S170>/Sum13' */
    200.0,                             /* '<S170>/Sum26' */
    216.0,                             /* '<S170>/Sum27' */
    336.0,                             /* '<S170>/Sum18' */
    288.0,                             /* '<S170>/Sum16' */
    344.0,                             /* '<S170>/Sum17' */
    416.0,                             /* '<S170>/Sum21' */
    184.0,                             /* '<S170>/Sum25' */
    128.0,                             /* '<S170>/Sum5' */
    56.0,                              /* '<S170>/Sum1' */
    360.0,                             /* '<S170>/Sum19' */
    72.0,                              /* '<S170>/Sum2' */
    40.0,                              /* '<S170>/Sum4' */
    296.0,                             /* '<S170>/Sum15' */
    328.0,                             /* '<S170>/Sum14' */
    400.0,                             /* '<S170>/Sum20' */
    168.0,                             /* '<S170>/Sum24' */
    112.0,                             /* '<S170>/Sum3' */
    1.0,                               /* '<S911>/Gain' */
    1.0,                               /* '<S911>/Gain1' */
    1.0,                               /* '<S911>/Gain2' */
    1.0,                               /* '<S911>/Gain3' */
    1.0,                               /* '<S911>/Gain4' */
    1.0,                               /* '<S911>/Gain5' */
    1.0,                               /* '<S911>/Gain6' */
    1.0,                               /* '<S911>/Gain7' */
    1.0,                               /* '<S910>/Gain' */
    1.0,                               /* '<S910>/Gain1' */
    1.0,                               /* '<S910>/Gain2' */
    1.0,                               /* '<S910>/Gain3' */
    1.0,                               /* '<S910>/Gain4' */
    1.0,                               /* '<S910>/Gain5' */
    1.0,                               /* '<S910>/Gain6' */
    1.0,                               /* '<S910>/Gain7' */
    1.0,                               /* '<S909>/Gain' */
    1.0,                               /* '<S909>/Gain1' */
    1.0,                               /* '<S909>/Gain2' */
    1.0,                               /* '<S909>/Gain3' */
    1.0,                               /* '<S909>/Gain4' */
    1.0,                               /* '<S909>/Gain5' */
    1.0,                               /* '<S909>/Gain6' */
    1.0,                               /* '<S909>/Gain7' */
    16.0,                              /* '<S889>/Power1' */
    0.0625,                            /* '<S889>/Power' */
    16.0,                              /* '<S890>/Power1' */
    0.0625,                            /* '<S890>/Power' */
    16.0,                              /* '<S891>/Power1' */
    0.0625,                            /* '<S891>/Power' */
    16.0,                              /* '<S892>/Power1' */
    0.0625,                            /* '<S892>/Power' */
    16.0,                              /* '<S869>/Power1' */
    0.0625,                            /* '<S869>/Power' */
    16.0,                              /* '<S870>/Power1' */
    0.0625,                            /* '<S870>/Power' */
    16.0,                              /* '<S871>/Power1' */
    0.0625,                            /* '<S871>/Power' */
    16.0,                              /* '<S872>/Power1' */
    0.0625,                            /* '<S872>/Power' */
    64.0,                              /* '<S823>/Power1' */
    0.015625,                          /* '<S823>/Power' */
    64.0,                              /* '<S822>/Power1' */
    0.015625,                          /* '<S822>/Power' */
    8.0,                               /* '<S824>/Power1' */
    0.125,                             /* '<S824>/Power' */
    8.0,                               /* '<S771>/Power1' */
    0.125,                             /* '<S771>/Power' */
    8.0,                               /* '<S772>/Power1' */
    0.125,                             /* '<S772>/Power' */
    8.0,                               /* '<S773>/Power1' */
    0.125,                             /* '<S773>/Power' */
    8.0,                               /* '<S774>/Power1' */
    0.125,                             /* '<S774>/Power' */
    0.088000000000000009,              /* '<S769>/Gain' */
    0.015625,                          /* '<S607>/Power' */
    64.0,                              /* '<S607>/Power1' */
    0.125,                             /* '<S608>/Power' */
    8.0,                               /* '<S608>/Power1' */
    0.015625,                          /* '<S609>/Power' */
    64.0,                              /* '<S609>/Power1' */
    0.0625,                            /* '<S547>/Power' */
    16.0,                              /* '<S547>/Power1' */
    0.0625,                            /* '<S548>/Power' */
    16.0,                              /* '<S548>/Power1' */
    0.0625,                            /* '<S549>/Power' */
    16.0,                              /* '<S549>/Power1' */
    0.0625,                            /* '<S550>/Power' */
    16.0,                              /* '<S550>/Power1' */
    392.0,                             /* '<S169>/Sum12' */
    408.0,                             /* '<S169>/Sum15' */
    440.0,                             /* '<S169>/Sum17' */
    424.0,                             /* '<S169>/Sum16' */
    56.0,                              /* '<S169>/Sum1' */
    72.0,                              /* '<S169>/Sum2' */
    88.0,                              /* '<S169>/Sum18' */
    160.0,                             /* '<S169>/Sum7' */
    144.0,                             /* '<S169>/Sum6' */
    232.0,                             /* '<S169>/Sum10' */
    216.0,                             /* '<S169>/Sum9' */
    304.0,                             /* '<S169>/Sum11' */
    288.0,                             /* '<S169>/Sum13' */
    376.0,                             /* '<S169>/Sum14' */
    360.0,                             /* '<S169>/Sum19' */
    40.0,                              /* '<S169>/Sum4' */
    344.0,                             /* '<S169>/Sum20' */
    128.0,                             /* '<S169>/Sum3' */
    200.0,                             /* '<S169>/Sum5' */
    272.0,                             /* '<S169>/Sum8' */
    1.0,                               /* '<S121>/Add1' */
    0U,                                /* '<S146>/Cast' */
    0U,                                /* '<S1211>/Cast' */
    0U,                                /* '<S1211>/Cast1' */
    0U,                                /* '<S1211>/Cast2' */
    0U,                                /* '<S1212>/Cast' */
    0U,                                /* '<S1212>/Cast1' */
    0U,                                /* '<S1212>/Cast2' */
    0U,                                /* '<S1213>/Cast' */
    0U,                                /* '<S1213>/Cast1' */
    0U,                                /* '<S1213>/Cast2' */
    0U,                                /* '<S1214>/Cast' */
    0U,                                /* '<S1214>/Cast1' */
    0U,                                /* '<S1214>/Cast2' */
    0U,                                /* '<S1073>/Cast6' */
    0U,                                /* '<S577>/Cast' */
    0U,                                /* '<S577>/Cast1' */
    0U,                                /* '<S577>/Cast2' */
    0U,                                /* '<S578>/Cast' */
    0U,                                /* '<S578>/Cast1' */
    0U,                                /* '<S578>/Cast2' */
    0U,                                /* '<S579>/Cast' */
    0U,                                /* '<S579>/Cast1' */
    0U,                                /* '<S579>/Cast2' */
    0U,                                /* '<S580>/Cast' */
    0U,                                /* '<S580>/Cast1' */
    0U,                                /* '<S580>/Cast2' */
    0U,                                /* '<S293>/Cast6' */
    0U,                                /* '<S146>/Cast1' */
    0U,                                /* '<S121>/Cast' */
    0,                                 /* '<S1073>/Cast' */
    1,                                 /* '<S1073>/NOT' */
    0,                                 /* '<S294>/Cast' */
    0,                                 /* '<S293>/Cast' */
    1,                                 /* '<S293>/NOT' */

    /* Start of '<S1112>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S172>/Transmission subtasks' */
      {
        1U,                            /* '<S1265>/Cast8' */
        1U                             /* '<S1259>/Cast' */
      }
      ,

      /* End of '<S172>/Transmission subtasks' */

      /* Start of '<S172>/Reception substasks' */
      {
        1U,                            /* '<S1255>/Cast13' */
        1U,                            /* '<S1255>/Cast3' */
        0U,                            /* '<S1255>/Cast15' */
        0U,                            /* '<S1255>/Cast6' */
        0,                             /* '<S1255>/Cast14' */
        0                              /* '<S1255>/Cast5' */
      }
      /* End of '<S172>/Reception substasks' */
    }
    ,

    /* End of '<S1112>/COMM Task - Sync bc 1' */

    /* Start of '<S1224>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1235>/Cast8' */
    }
    ,

    /* End of '<S1224>/Check msg transmission CAN2' */

    /* Start of '<S1224>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1229>/Cast' */
    }
    ,

    /* End of '<S1224>/Check msg transmission CAN1' */

    /* Start of '<S1186>/Reception substasks' */
    {
      22U,                             /* '<S1225>/Cast13' */
      22U,                             /* '<S1225>/Cast3' */
      0U,                              /* '<S1225>/Cast15' */
      0U,                              /* '<S1225>/Cast6' */
      0,                               /* '<S1225>/Cast14' */
      0                                /* '<S1225>/Cast5' */
    }
    ,

    /* End of '<S1186>/Reception substasks' */

    /* Start of '<S1194>/Check msg transmission CAN2' */
    {
      25U                              /* '<S1205>/Cast8' */
    }
    ,

    /* End of '<S1194>/Check msg transmission CAN2' */

    /* Start of '<S1194>/Check msg transmission CAN1' */
    {
      25U                              /* '<S1199>/Cast' */
    }
    ,

    /* End of '<S1194>/Check msg transmission CAN1' */

    /* Start of '<S1185>/Reception substasks' */
    {
      25U,                             /* '<S1195>/Cast13' */
      25U,                             /* '<S1195>/Cast3' */
      0U,                              /* '<S1195>/Cast15' */
      0U,                              /* '<S1195>/Cast6' */
      0,                               /* '<S1195>/Cast14' */
      0                                /* '<S1195>/Cast5' */
    }
    ,

    /* End of '<S1185>/Reception substasks' */

    /* Start of '<S1114>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1140>/Cast6' */
      0,                               /* '<S1140>/Cast' */
      1                                /* '<S1140>/NOT' */
    }
    ,

    /* End of '<S1114>/RESET Board - Return to initialization' */

    /* Start of '<S1111>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S172>/Transmission subtasks' */
      {
        1U,                            /* '<S1133>/Cast8' */
        1U                             /* '<S1127>/Cast' */
      }
      ,

      /* End of '<S172>/Transmission subtasks' */

      /* Start of '<S172>/Reception substasks' */
      {
        1U,                            /* '<S1123>/Cast13' */
        1U,                            /* '<S1123>/Cast3' */
        0U,                            /* '<S1123>/Cast15' */
        0U,                            /* '<S1123>/Cast6' */
        0,                             /* '<S1123>/Cast14' */
        0                              /* '<S1123>/Cast5' */
      }
      /* End of '<S172>/Reception substasks' */
    }
    ,

    /* End of '<S1111>/COMM Task - Sync bc 0' */

    /* Start of '<S959>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S172>/Transmission subtasks' */
      {
        1U,                            /* '<S1066>/Cast8' */
        1U                             /* '<S1060>/Cast' */
      }
      ,

      /* End of '<S172>/Transmission subtasks' */

      /* Start of '<S172>/Reception substasks' */
      {
        1U,                            /* '<S1056>/Cast13' */
        1U,                            /* '<S1056>/Cast3' */
        0U,                            /* '<S1056>/Cast15' */
        0U,                            /* '<S1056>/Cast6' */
        0,                             /* '<S1056>/Cast14' */
        0                              /* '<S1056>/Cast5' */
      }
      /* End of '<S172>/Reception substasks' */
    }
    ,

    /* End of '<S959>/COMM Task - Sync bc 1' */

    /* Start of '<S1028>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1039>/Cast8' */
    }
    ,

    /* End of '<S1028>/Check msg transmission CAN2' */

    /* Start of '<S1028>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1033>/Cast' */
    }
    ,

    /* End of '<S1028>/Check msg transmission CAN1' */

    /* Start of '<S1020>/Reception substasks' */
    {
      21U,                             /* '<S1029>/Cast13' */
      21U,                             /* '<S1029>/Cast3' */
      0U,                              /* '<S1029>/Cast15' */
      0U,                              /* '<S1029>/Cast6' */
      0,                               /* '<S1029>/Cast14' */
      0                                /* '<S1029>/Cast5' */
    }
    ,

    /* End of '<S1020>/Reception substasks' */

    /* Start of '<S962>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S985>/Cast6' */
      0,                               /* '<S985>/Cast' */
      1                                /* '<S985>/NOT' */
    }
    ,

    /* End of '<S962>/RESET Board - Return to initialization' */

    /* Start of '<S958>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S172>/Transmission subtasks' */
      {
        1U,                            /* '<S978>/Cast8' */
        1U                             /* '<S972>/Cast' */
      }
      ,

      /* End of '<S172>/Transmission subtasks' */

      /* Start of '<S172>/Reception substasks' */
      {
        1U,                            /* '<S968>/Cast13' */
        1U,                            /* '<S968>/Cast3' */
        0U,                            /* '<S968>/Cast15' */
        0U,                            /* '<S968>/Cast6' */
        0,                             /* '<S968>/Cast14' */
        0                              /* '<S968>/Cast5' */
      }
      /* End of '<S172>/Reception substasks' */
    }
    ,

    /* End of '<S958>/COMM Task - Sync bc 0' */

    /* Start of '<S453>/Transmission subtasks1' */
    {
      1U,                              /* '<S628>/Cast8' */
      1U                               /* '<S622>/Cast' */
    }
    ,

    /* End of '<S453>/Transmission subtasks1' */

    /* Start of '<S453>/Reception substasks' */
    {
      1U,                              /* '<S618>/Cast13' */
      1U,                              /* '<S618>/Cast3' */
      0U,                              /* '<S618>/Cast15' */
      0U,                              /* '<S618>/Cast6' */
      0,                               /* '<S618>/Cast14' */
      0                                /* '<S618>/Cast5' */
    }
    ,

    /* End of '<S453>/Reception substasks' */

    /* Start of '<S590>/Check msg transmission CAN2' */
    {
      21U                              /* '<S601>/Cast8' */
    }
    ,

    /* End of '<S590>/Check msg transmission CAN2' */

    /* Start of '<S590>/Check msg transmission CAN1' */
    {
      21U                              /* '<S595>/Cast' */
    }
    ,

    /* End of '<S590>/Check msg transmission CAN1' */

    /* Start of '<S452>/Reception substasks' */
    {
      21U,                             /* '<S591>/Cast13' */
      21U,                             /* '<S591>/Cast3' */
      0U,                              /* '<S591>/Cast15' */
      0U,                              /* '<S591>/Cast6' */
      0,                               /* '<S591>/Cast14' */
      0                                /* '<S591>/Cast5' */
    }
    ,

    /* End of '<S452>/Reception substasks' */

    /* Start of '<S560>/Check msg transmission CAN2' */
    {
      22U                              /* '<S571>/Cast8' */
    }
    ,

    /* End of '<S560>/Check msg transmission CAN2' */

    /* Start of '<S560>/Check msg transmission CAN1' */
    {
      22U                              /* '<S565>/Cast' */
    }
    ,

    /* End of '<S560>/Check msg transmission CAN1' */

    /* Start of '<S451>/Reception substasks' */
    {
      22U,                             /* '<S561>/Cast13' */
      22U,                             /* '<S561>/Cast3' */
      0U,                              /* '<S561>/Cast15' */
      0U,                              /* '<S561>/Cast6' */
      0,                               /* '<S561>/Cast14' */
      0                                /* '<S561>/Cast5' */
    }
    ,

    /* End of '<S451>/Reception substasks' */

    /* Start of '<S530>/Check msg transmission CAN2' */
    {
      25U                              /* '<S541>/Cast8' */
    }
    ,

    /* End of '<S530>/Check msg transmission CAN2' */

    /* Start of '<S530>/Check msg transmission CAN1' */
    {
      25U                              /* '<S535>/Cast' */
    }
    ,

    /* End of '<S530>/Check msg transmission CAN1' */

    /* Start of '<S450>/Reception substasks' */
    {
      25U,                             /* '<S531>/Cast13' */
      25U,                             /* '<S531>/Cast3' */
      0U,                              /* '<S531>/Cast15' */
      0U,                              /* '<S531>/Cast6' */
      0,                               /* '<S531>/Cast14' */
      0                                /* '<S531>/Cast5' */
    }
    ,

    /* End of '<S450>/Reception substasks' */

    /* Start of '<S449>/Transmission subtasks' */
    {
      -4.0,                            /* '<S517>/Gain' */
      0.0625,                          /* '<S517>/Power' */
      16.0,                            /* '<S517>/Power1' */
      -4.0,                            /* '<S518>/Gain' */
      0.0625,                          /* '<S518>/Power' */
      16.0,                            /* '<S518>/Power1' */
      -4.0,                            /* '<S519>/Gain' */
      0.0625,                          /* '<S519>/Power' */
      16.0,                            /* '<S519>/Power1' */
      -4.0,                            /* '<S520>/Gain' */
      0.0625,                          /* '<S520>/Power' */
      16.0,                            /* '<S520>/Power1' */

      /* Start of '<S469>/Check msg transmission CAN2' */
      {
        24U                            /* '<S511>/Cast8' */
      }
      ,

      /* End of '<S469>/Check msg transmission CAN2' */

      /* Start of '<S469>/Check msg transmission CAN1' */
      {
        24U                            /* '<S505>/Cast' */
      }
      /* End of '<S469>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S449>/Transmission subtasks' */

    /* Start of '<S449>/Reception substasks' */
    {
      24U,                             /* '<S501>/Cast13' */
      24U,                             /* '<S501>/Cast3' */
      0U,                              /* '<S501>/Cast15' */
      0U,                              /* '<S501>/Cast6' */
      0,                               /* '<S501>/Cast14' */
      0                                /* '<S501>/Cast5' */
    }
    ,

    /* End of '<S449>/Reception substasks' */

    /* Start of '<S448>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S486>/Gain' */
      0.0625,                          /* '<S486>/Power' */
      16.0,                            /* '<S486>/Power1' */
      -4.0,                            /* '<S487>/Gain' */
      0.0625,                          /* '<S487>/Power' */
      16.0,                            /* '<S487>/Power1' */
      -4.0,                            /* '<S488>/Gain' */
      0.0625,                          /* '<S488>/Power' */
      16.0,                            /* '<S488>/Power1' */
      -4.0,                            /* '<S489>/Gain' */
      0.0625,                          /* '<S489>/Power' */
      16.0,                            /* '<S489>/Power1' */

      /* Start of '<S469>/Check msg transmission CAN2' */
      {
        23U                            /* '<S480>/Cast8' */
      }
      ,

      /* End of '<S469>/Check msg transmission CAN2' */

      /* Start of '<S469>/Check msg transmission CAN1' */
      {
        23U                            /* '<S474>/Cast' */
      }
      /* End of '<S469>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S448>/Transmission subtasks1' */

    /* Start of '<S448>/Reception substasks' */
    {
      23U,                             /* '<S470>/Cast13' */
      23U,                             /* '<S470>/Cast3' */
      0U,                              /* '<S470>/Cast15' */
      0U,                              /* '<S470>/Cast6' */
      0,                               /* '<S470>/Cast14' */
      0                                /* '<S470>/Cast5' */
    }
    ,

    /* End of '<S448>/Reception substasks' */

    /* Start of '<S176>/Transmission subtasks' */
    {
      14U,                             /* '<S276>/Cast8' */
      14U                              /* '<S270>/Cast' */
    }
    ,

    /* End of '<S176>/Transmission subtasks' */

    /* Start of '<S176>/Reception substasks' */
    {
      14U,                             /* '<S266>/Cast13' */
      14U,                             /* '<S266>/Cast3' */
      0U,                              /* '<S266>/Cast15' */
      0U,                              /* '<S266>/Cast6' */
      0,                               /* '<S266>/Cast14' */
      0                                /* '<S266>/Cast5' */
    }
    ,

    /* End of '<S176>/Reception substasks' */

    /* Start of '<S175>/Transmission subtasks' */
    {
      13U,                             /* '<S258>/Cast8' */
      13U                              /* '<S252>/Cast' */
    }
    ,

    /* End of '<S175>/Transmission subtasks' */

    /* Start of '<S175>/Reception substasks' */
    {
      13U,                             /* '<S248>/Cast13' */
      13U,                             /* '<S248>/Cast3' */
      0U,                              /* '<S248>/Cast15' */
      0U,                              /* '<S248>/Cast6' */
      0,                               /* '<S248>/Cast14' */
      0                                /* '<S248>/Cast5' */
    }
    ,

    /* End of '<S175>/Reception substasks' */

    /* Start of '<S174>/Transmission subtasks' */
    {
      12U,                             /* '<S240>/Cast8' */
      12U                              /* '<S234>/Cast' */
    }
    ,

    /* End of '<S174>/Transmission subtasks' */

    /* Start of '<S174>/Reception substasks' */
    {
      12U,                             /* '<S230>/Cast13' */
      12U,                             /* '<S230>/Cast3' */
      0U,                              /* '<S230>/Cast15' */
      0U,                              /* '<S230>/Cast6' */
      0,                               /* '<S230>/Cast14' */
      0                                /* '<S230>/Cast5' */
    }
    ,

    /* End of '<S174>/Reception substasks' */

    /* Start of '<S173>/Transmission subtasks' */
    {
      11U,                             /* '<S222>/Cast8' */
      11U                              /* '<S216>/Cast' */
    }
    ,

    /* End of '<S173>/Transmission subtasks' */

    /* Start of '<S173>/Reception substasks' */
    {
      11U,                             /* '<S212>/Cast13' */
      11U,                             /* '<S212>/Cast3' */
      0U,                              /* '<S212>/Cast15' */
      0U,                              /* '<S212>/Cast6' */
      0,                               /* '<S212>/Cast14' */
      0                                /* '<S212>/Cast5' */
    }
    ,

    /* End of '<S173>/Reception substasks' */

    /* Start of '<S169>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S172>/Transmission subtasks' */
      {
        1U,                            /* '<S204>/Cast8' */
        1U                             /* '<S198>/Cast' */
      }
      ,

      /* End of '<S172>/Transmission subtasks' */

      /* Start of '<S172>/Reception substasks' */
      {
        1U,                            /* '<S194>/Cast13' */
        1U,                            /* '<S194>/Cast3' */
        0U,                            /* '<S194>/Cast15' */
        0U,                            /* '<S194>/Cast6' */
        0,                             /* '<S194>/Cast14' */
        0                              /* '<S194>/Cast5' */
      }
      /* End of '<S172>/Reception substasks' */
    }
    /* End of '<S169>/COMM Task - Sync bc 0' */
  }
  /* End of '<S10>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S133>/Constant'
   */
  { 0.0, 40.0, 56.0, 58.0, 72.0, 74.0, 88.0, 128.0, 144.0, 160.0, 200.0, 202.0,
    216.0, 232.0, 272.0, 288.0, 304.0, 344.0, 360.0, 376.0, 392.0, 408.0, 424.0
  },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S133>/Constant4'
   */
  { 0.0, 40.0, 56.0, 58.0, 72.0, 112.0, 114.0, 128.0, 168.0, 170.0, 184.0, 200.0,
    216.0, 256.0, 258.0, 272.0, 288.0, 328.0, 344.0, 345.0, 347.0, 360.0, 400.0,
    402.0, 320.0, 322.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S133>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S133>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0,
    1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0 },

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
