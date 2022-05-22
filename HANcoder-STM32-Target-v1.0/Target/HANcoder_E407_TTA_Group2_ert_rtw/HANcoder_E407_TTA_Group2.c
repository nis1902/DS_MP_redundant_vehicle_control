/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.163
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun May 22 14:05:37 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Group2.h"
#include "HANcoder_E407_TTA_Group2_private.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);
const msg_buffer_type HANcoder_E407_TTA_Group2_rtZmsg_buffer_type = {
  0U,                                  /* Buffer_1 */
  0U,                                  /* Buffer_2 */
  0U,                                  /* Buffer_3 */
  0U,                                  /* Buffer_4 */
  0U,                                  /* Buffer_5 */
  0U,                                  /* Buffer_6 */
  0U,                                  /* Buffer_7 */
  0U                                   /* Buffer_8 */
} ;                                    /* msg_buffer_type ground */

/* Exported block signals */
real_T simulation_time;                /* '<S10>/Digital Clock' */
real_T script_run_s;                   /* '<S10>/Constant' */
real_T Board_ID_s;                     /* '<S31>/Add' */
uint32_T SI_FreeHeap;                  /* '<S24>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S25>/Level-2 M-file S-Function' */
uint16_T local_ticks_interrupt;        /* '<S33>/Switch' */
uint8_T SI_CPUload;                    /* '<S23>/Level-2 M-file S-Function' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */
real_T Master_ID_ing_s;                /* '<S568>/Data Store Read' */
real_T Role_ID_ing_s;                  /* '<S568>/Data Store Read1' */
real_T sync_bc1_miss_counter_ing;      /* '<S568>/Data Store Read3' */
real_T sync_bc0_miss_counter_ing;      /* '<S568>/Data Store Read4' */
real_T msg_count_DEBUG_ing_s;          /* '<S571>/Data Store Read24' */
real_T Desync_Sync_bc1_ing_s;          /* '<S691>/Saturation' */
real_T v_set_s;                        /* '<S643>/Constant12' */
real_T Desync_Sync_bc0_ing_s;          /* '<S602>/Saturation' */
real_T Master_ID_s;                    /* '<S161>/Data Store Read' */
real_T Role_ID_s;                      /* '<S161>/Data Store Read1' */
real_T sync_bc0_miss_counter_s;        /* '<S161>/Data Store Read11' */
real_T sync_bc1_miss_counter_s;        /* '<S161>/Data Store Read12' */
real_T votes_Board_1_DEBUG;            /* '<S161>/Data Store Read3' */
real_T votes_Board_2_DEBUG;            /* '<S161>/Data Store Read3' */
real_T votes_Board_3_DEBUG;            /* '<S161>/Data Store Read3' */
real_T Board_1_error_counter_s;        /* '<S161>/Data Store Read4' */
real_T Board_2_error_counter_s;        /* '<S161>/Data Store Read5' */
real_T Board_3_error_counter_s;        /* '<S161>/Data Store Read6' */
real_T msg_count_DEBUG_s;              /* '<S164>/Data Store Read24' */
real_T Desync_Sync_bc1_s;              /* '<S509>/Saturation' */
real_T Desync_Sync_bc0_s;              /* '<S267>/Saturation' */
real_T TM1_timeout_counter_s;          /* '<S255>/Switch' */
real_T TM2_timeout_counter_s;          /* '<S256>/Switch' */
real_T TM3_timeout_counter_s;          /* '<S257>/Switch' */
uint16_T Rx_init_LT;                   /* '<S141>/Cast' */
uint16_T beer_s;                       /* '<S563>/Gain1' */
uint16_T panda_s;                      /* '<S563>/Gain' */
uint8_T Vote_s;                        /* '<S295>/Cast' */
uint8_T Rx_init_id;                    /* '<S145>/bit_shift' */
uint8_T Rx_init_mc;                    /* '<S144>/bit_shift' */
uint8_T Rx_init_bc;                    /* '<S143>/bit_shift' */
uint8_T bacic_cycle_s;                 /* '<S115>/Switch' */
boolean_T BC1_sync_processed_ing_s;    /* '<S568>/Data Store Read10' */
boolean_T BC0_sync_processed_ing_s;    /* '<S568>/Data Store Read2' */
boolean_T reset_ing_s;                 /* '<S573>/Data Store Read' */
boolean_T BC1_sync_processed_s;        /* '<S161>/Data Store Read10' */
boolean_T BC0_sync_processed_s;        /* '<S161>/Data Store Read2' */
boolean_T BC0_vote1_processed_s;       /* '<S161>/Data Store Read7' */
boolean_T BC0_vote2_processed_s;       /* '<S161>/Data Store Read8' */
boolean_T BC0_vote3_processed_s;       /* '<S161>/Data Store Read9' */
boolean_T new_sensor_rx_s;             /* '<S536>/Data Store Read5' */
boolean_T new_set_rx_s;                /* '<S461>/Data Store Read5' */
boolean_T reset_s;                     /* '<S171>/Data Store Read' */
real_T Tx_temporal_msg_CAN2;           /* '<S29>/Cast To Double' */
uint32_T TxCAN2_counter_s;             /* '<S29>/Sum1' */
uint32_T TxID_CAN2_s;                  /* '<S29>/Data Store Read3' */
real_T Rx_temporal_msg_CAN2;           /* '<S74>/Cast To Double' */
uint32_T RxCAN2_counter_s;             /* '<S28>/Sum1' */
uint32_T RxID_CAN2_s;                  /* '<S28>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN2;            /* '<S74>/Local_Time' */
real_T Rx_temporal_msg_CAN1;           /* '<S40>/Cast To Double' */
uint32_T RxCAN1_counter_s;             /* '<S26>/Sum1' */
uint32_T RxID_CAN1_s;                  /* '<S26>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN1;            /* '<S40>/Local_Time' */
real_T Tx_temporal_msg_CAN1;           /* '<S27>/Cast To Double' */
uint32_T TxCAN1_counter_s;             /* '<S27>/Sum1' */
uint32_T TxID_CAN1_s;                  /* '<S27>/Data Store Read3' */

/* Exported block parameters */
real_T COMM_Phase1 = 10.0;             /* Variable: COMM_Phase1
                                        * Referenced by:
                                        *   '<S127>/Constant2'
                                        *   '<S141>/Constant1'
                                        *   '<S185>/Constant24'
                                        *   '<S185>/Constant27'
                                        *   '<S203>/Constant24'
                                        *   '<S203>/Constant27'
                                        *   '<S221>/Constant24'
                                        *   '<S221>/Constant27'
                                        *   '<S239>/Constant24'
                                        *   '<S239>/Constant27'
                                        *   '<S267>/Constant'
                                        *   '<S397>/Constant24'
                                        *   '<S397>/Constant27'
                                        *   '<S424>/Constant24'
                                        *   '<S424>/Constant27'
                                        *   '<S442>/Constant24'
                                        *   '<S442>/Constant27'
                                        *   '<S509>/Constant'
                                        *   '<S580>/Constant24'
                                        *   '<S580>/Constant27'
                                        *   '<S602>/Constant'
                                        *   '<S641>/Constant24'
                                        *   '<S641>/Constant27'
                                        *   '<S668>/Constant24'
                                        *   '<S668>/Constant27'
                                        *   '<S691>/Constant'
                                        */
real_T COMM_Phase2 = 10.0;             /* Variable: COMM_Phase2
                                        * Referenced by:
                                        *   '<S127>/Constant3'
                                        *   '<S141>/Constant2'
                                        *   '<S186>/Constant24'
                                        *   '<S186>/Constant27'
                                        *   '<S204>/Constant24'
                                        *   '<S204>/Constant27'
                                        *   '<S222>/Constant24'
                                        *   '<S222>/Constant27'
                                        *   '<S240>/Constant24'
                                        *   '<S240>/Constant27'
                                        *   '<S267>/Constant1'
                                        *   '<S398>/Constant24'
                                        *   '<S398>/Constant27'
                                        *   '<S425>/Constant24'
                                        *   '<S425>/Constant27'
                                        *   '<S443>/Constant24'
                                        *   '<S443>/Constant27'
                                        *   '<S509>/Constant1'
                                        *   '<S581>/Constant24'
                                        *   '<S581>/Constant27'
                                        *   '<S602>/Constant1'
                                        *   '<S642>/Constant24'
                                        *   '<S642>/Constant27'
                                        *   '<S669>/Constant24'
                                        *   '<S669>/Constant27'
                                        *   '<S691>/Constant1'
                                        */
real_T COMM_Phase_init1 = 0.0;         /* Variable: COMM_Phase_init1
                                        * Referenced by:
                                        *   '<S127>/Constant6'
                                        *   '<S185>/Constant'
                                        *   '<S203>/Constant'
                                        *   '<S221>/Constant'
                                        *   '<S239>/Constant'
                                        *   '<S397>/Constant'
                                        *   '<S424>/Constant'
                                        *   '<S442>/Constant'
                                        *   '<S580>/Constant'
                                        *   '<S641>/Constant'
                                        *   '<S668>/Constant'
                                        */
real_T COMM_Phase_init2 = 5.0;         /* Variable: COMM_Phase_init2
                                        * Referenced by:
                                        *   '<S127>/Constant7'
                                        *   '<S186>/Constant'
                                        *   '<S204>/Constant'
                                        *   '<S222>/Constant'
                                        *   '<S240>/Constant'
                                        *   '<S398>/Constant'
                                        *   '<S425>/Constant'
                                        *   '<S443>/Constant'
                                        *   '<S581>/Constant'
                                        *   '<S642>/Constant'
                                        *   '<S669>/Constant'
                                        */
real_T delta_a_set = 0.0;              /* Variable: delta_a_set
                                        * Referenced by:
                                        *   '<S399>/Constant11'
                                        *   '<S643>/Constant11'
                                        */
real_T delta_f_set = 0.0;              /* Variable: delta_f_set
                                        * Referenced by:
                                        *   '<S399>/Constant10'
                                        *   '<S444>/Constant10'
                                        *   '<S643>/Constant10'
                                        */
real_T script_run = 0.0;               /* Variable: script_run
                                        * Referenced by: '<S10>/Constant'
                                        */
real_T v_set = 0.0;                    /* Variable: v_set
                                        * Referenced by:
                                        *   '<S399>/Constant12'
                                        *   '<S643>/Constant12'
                                        */
boolean_T HANtuneOverride = 0;         /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void rate_scheduler(void);
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_23U;
static tCanDataTypes canRxData_0_24U;
static tCanDataTypes canRxData_0_25U;
static tCanDataTypes canRxData_0_22U;
static tCanDataTypes canRxData_0_21U;
static tCanDataTypes canRxData_0_1U;
static tCanDataTypes canRxData_0_11U;
static tCanDataTypes canRxData_0_12U;
static tCanDataTypes canRxData_0_13U;
static tCanDataTypes canRxData_1_23U;
static tCanDataTypes canRxData_1_24U;
static tCanDataTypes canRxData_1_25U;
static tCanDataTypes canRxData_1_22U;
static tCanDataTypes canRxData_1_21U;
static tCanDataTypes canRxData_1_1U;
static tCanDataTypes canRxData_1_11U;
static tCanDataTypes canRxData_1_12U;
static tCanDataTypes canRxData_1_13U;

/*
 * Swaps the values of two bytes.
 * a, b pointers to data values that need swapping
 */
static void swap(unsigned char *a, unsigned char *b)
{
  register char i = *a;
  *a = *b;
  *b = i;
}                                      /*** end of swap ***/

/*
 * Swaps all bytes in b. Typically used to fix endianes.
 * b pointer to data with bytes to swap
 * n number of bytes to swap
 */
void ByteSwap_x(uint8_t *b, size_t n)
{
  int i = 0;
  int j = n-1;
  while (i<j) {
    swap(&b[i], &b[j]);
    i++, j--;
  }
}

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void)
{
  /* Output and update for function-call system: '<S10>/Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S33>/Constant2'
     *  DataStoreRead: '<S33>/Data Store Read'
     *  DataStoreRead: '<S33>/Data Store Read1'
     *  Sum: '<S33>/Sum1'
     */
    if (rtB.Logic[0]) {
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S33>/Switch' */

    /* DataStoreWrite: '<S33>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* Chart: '<S33>/Chart' */
    /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
    /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
    if (rtDWork.bitsForTID1.is_active_c9_HANcoder_E407_TTA_ == 0U) {
      /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
      rtDWork.bitsForTID1.is_active_c9_HANcoder_E407_TTA_ = 1U;

      /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/Local Time generation/Chart */
      /* Transition: '<S110>:10' */
      /* Entry 'Send_Trigger': '<S110>:9' */
      if (rtB.Logic[0]) {
        /* Outputs for Function Call SubSystem: '<S10>/TTA System' */
        /* Event: '<S110>:3' */
        TTASystem(&rtB.TTASystem_c, &rtConstB.TTASystem_c, &rtDWork.TTASystem_c,
                  &rtDWork.Board_ID, &rtDWork.Local_Ticks, &rtDWork.Master_ID,
                  &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
                  &rtDWork.Msg_Rx_Ticks_CAN1, &rtDWork.Msg_Rx_Ticks_CAN2,
                  &rtDWork.Msg_Tx_CAN1, &rtDWork.Msg_Tx_CAN2,
                  &rtDWork.New_Msg_Ready_CAN1, &rtDWork.New_Msg_Ready_CAN2,
                  &rtDWork.RxID_CAN1, &rtDWork.RxID_CAN2, &rtDWork.Rx_State_CAN1,
                  &rtDWork.Rx_State_CAN2, &rtDWork.Toggle_Pin_A0,
                  &rtDWork.Toggle_Pin_D12, &rtDWork.Toggle_Pin_D13,
                  &rtDWork.Toggle_Pin_D8, &rtDWork.Toggle_Pin_D9,
                  &rtDWork.TxID_CAN1, &rtDWork.TxID_CAN2,
                  &rtDWork.Tx_msg_count_CAN1, &rtDWork.Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S10>/TTA System' */
      }
    } else {
      /* During 'Send_Trigger': '<S110>:9' */
      if (rtB.Logic[0]) {
        /* Outputs for Function Call SubSystem: '<S10>/TTA System' */
        /* Event: '<S110>:3' */
        TTASystem(&rtB.TTASystem_c, &rtConstB.TTASystem_c, &rtDWork.TTASystem_c,
                  &rtDWork.Board_ID, &rtDWork.Local_Ticks, &rtDWork.Master_ID,
                  &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
                  &rtDWork.Msg_Rx_Ticks_CAN1, &rtDWork.Msg_Rx_Ticks_CAN2,
                  &rtDWork.Msg_Tx_CAN1, &rtDWork.Msg_Tx_CAN2,
                  &rtDWork.New_Msg_Ready_CAN1, &rtDWork.New_Msg_Ready_CAN2,
                  &rtDWork.RxID_CAN1, &rtDWork.RxID_CAN2, &rtDWork.Rx_State_CAN1,
                  &rtDWork.Rx_State_CAN2, &rtDWork.Toggle_Pin_A0,
                  &rtDWork.Toggle_Pin_D12, &rtDWork.Toggle_Pin_D13,
                  &rtDWork.Toggle_Pin_D8, &rtDWork.Toggle_Pin_D9,
                  &rtDWork.TxID_CAN1, &rtDWork.TxID_CAN2,
                  &rtDWork.Tx_msg_count_CAN1, &rtDWork.Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S10>/TTA System' */
      }
    }

    /* End of Chart: '<S33>/Chart' */
    /* M-S-Function: '<S111>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S33>/Sum' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)100U));

    /* Update for M-S-Function: '<S112>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S33>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.1s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }

  (rtM->Timing.TaskCounters.TID[2])++;
  if ((rtM->Timing.TaskCounters.TID[2]) > 19) {/* Sample time: [0.2s, 0.0s] */
    rtM->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Output and update for function-call system: '<S10>/CAN1 Send' */
void CAN1Send(rtB_CAN1Send *localB, rtDW_CAN1Send *localDW, msg_buffer_type
              *rtd_Msg_Tx_CAN1, boolean_T *rtd_Toggle_Pin_A0, real_T
              *rtd_Toggle_Pin_D13, uint32_T *rtd_TxID_CAN1, real_T
              *rtd_Tx_msg_count_CAN1)
{
  /* DataStoreWrite: '<S27>/Data Store Write2' incorporates:
   *  Constant: '<S27>/Constant8'
   *  Sum: '<S27>/Plus'
   */
  *rtd_Tx_msg_count_CAN1 += 1.0;

  /* DataStoreWrite: '<S27>/Data Store Write1' incorporates:
   *  Constant: '<S27>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S27>/Sum1' incorporates:
   *  Constant: '<S27>/Constant3'
   *  DataStoreRead: '<S27>/Data Store Read'
   */
  TxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S27>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN1_counter_s;

  /* Outputs for Enabled SubSystem: '<S27>/Logic Analyzer - COMM delay measurement' incorporates:
   *  EnablePort: '<S70>/Enable'
   */
  /* Logic: '<S27>/AND' incorporates:
   *  Constant: '<S27>/Constant1'
   *  Constant: '<S27>/Constant2'
   *  RelationalOperator: '<S27>/Equal'
   */
  if ((*rtd_TxID_CAN1 == 1.0) && (1.0 != 0.0)) {
    /* DataStoreWrite: '<S70>/Data Store Write2' incorporates:
     *  Constant: '<S70>/Constant2'
     */
    *rtd_Toggle_Pin_D13 = 1.0;
  }

  /* End of Logic: '<S27>/AND' */
  /* End of Outputs for SubSystem: '<S27>/Logic Analyzer - COMM delay measurement' */
  /* DataTypeConversion: '<S27>/Cast To Double' */
  Tx_temporal_msg_CAN1 = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataStoreRead: '<S27>/Data Store Read3' */
  TxID_CAN1_s = *rtd_TxID_CAN1;

  /* DataTypeConversion: '<S27>/Data Type Conversion' */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataTypeConversion: '<S27>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN1_s;

  /* DataTypeConversion: '<S27>/Data Type Conversion10' */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN1->Buffer_8;

  /* DataTypeConversion: '<S27>/Data Type Conversion4' */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN1->Buffer_2;

  /* DataTypeConversion: '<S27>/Data Type Conversion5' */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN1->Buffer_3;

  /* DataTypeConversion: '<S27>/Data Type Conversion6' */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN1->Buffer_4;

  /* DataTypeConversion: '<S27>/Data Type Conversion7' */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN1->Buffer_5;

  /* DataTypeConversion: '<S27>/Data Type Conversion8' */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN1->Buffer_6;

  /* DataTypeConversion: '<S27>/Data Type Conversion9' */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN1->Buffer_7;

  /* Update for M-S-Function: '<S69>/S-Function' */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = localB->DataTypeConversion;
    canTxData.uint8_T_info[1] = localB->DataTypeConversion4;
    canTxData.uint8_T_info[2] = localB->DataTypeConversion5;
    canTxData.uint8_T_info[3] = localB->DataTypeConversion6;
    canTxData.uint8_T_info[4] = localB->DataTypeConversion7;
    canTxData.uint8_T_info[5] = localB->DataTypeConversion8;
    canTxData.uint8_T_info[6] = localB->DataTypeConversion9;
    canTxData.uint8_T_info[7] = localB->DataTypeConversion10;

    /* send the data */
    CanTransmit(0, localB->DataTypeConversion1, 8, &canTxData.uint8_T_info[0]);
  }
}

/* Disable for function-call system: '<S10>/CAN1 Recieve' */
void CAN1Recieve_Disable(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S39>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for Outport: '<S46>/CAN_new' */
    localB->SFunction_o1_h = 0;

    /* Disable for Outport: '<S46>/Out2' */
    localB->In1_p = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out3' */
    localB->In2_k = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out4' */
    localB->In3_b = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out5' */
    localB->In4_l = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out6' */
    localB->In5_c = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out7' */
    localB->In6_i = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out8' */
    localB->In7_m = ((uint8_T)0U);

    /* Disable for Outport: '<S46>/Out9' */
    localB->In8_c = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for Outport: '<S47>/CAN_new' */
    localB->SFunction_o1_m = 0;

    /* Disable for Outport: '<S47>/Out2' */
    localB->In1_d = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out3' */
    localB->In2_a = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out4' */
    localB->In3_n = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out5' */
    localB->In4_m = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out6' */
    localB->In5_k = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out7' */
    localB->In6_j = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out8' */
    localB->In7_o = ((uint8_T)0U);

    /* Disable for Outport: '<S47>/Out9' */
    localB->In8_k = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for Outport: '<S48>/CAN_new' */
    localB->SFunction_o1_e = 0;

    /* Disable for Outport: '<S48>/Out2' */
    localB->In1_j = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out3' */
    localB->In2_l = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out4' */
    localB->In3_o = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out5' */
    localB->In4_c = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out6' */
    localB->In5_g = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out7' */
    localB->In6_h = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out8' */
    localB->In7_b = ((uint8_T)0U);

    /* Disable for Outport: '<S48>/Out9' */
    localB->In8_a = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for Outport: '<S49>/CAN_new' */
    localB->SFunction_o1 = 0;

    /* Disable for Outport: '<S49>/Out2' */
    localB->In1 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out3' */
    localB->In2 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out4' */
    localB->In3 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out5' */
    localB->In4 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out6' */
    localB->In5 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out7' */
    localB->In6 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out8' */
    localB->In7 = ((uint8_T)0U);

    /* Disable for Outport: '<S49>/Out9' */
    localB->In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/SetValues_ID_CAN' */
  if (localDW->SetValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S45>/CAN_new' */
    localB->SFunction_o1_l = 0;

    /* Disable for Outport: '<S45>/Out2' */
    localB->In1_pn = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out3' */
    localB->In2_b = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out4' */
    localB->In3_k = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out5' */
    localB->In4_h = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out6' */
    localB->In5_l = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out7' */
    localB->In6_m = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out8' */
    localB->In7_mm = ((uint8_T)0U);

    /* Disable for Outport: '<S45>/Out9' */
    localB->In8_e = ((uint8_T)0U);
    localDW->SetValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/SetValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/SensorValues_ID_CAN' */
  if (localDW->SensorValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S44>/CAN_new' */
    localB->SFunction_o1_i = 0;

    /* Disable for Outport: '<S44>/Out2' */
    localB->In1_k = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out3' */
    localB->In2_c = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out4' */
    localB->In3_i = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out5' */
    localB->In4_b = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out6' */
    localB->In5_m = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out7' */
    localB->In6_n = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out8' */
    localB->In7_l = ((uint8_T)0U);

    /* Disable for Outport: '<S44>/Out9' */
    localB->In8_aa = ((uint8_T)0U);
    localDW->SensorValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/SensorValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/OutControl1_ID_CAN' */
  if (localDW->OutControl1_ID_CAN_MODE) {
    /* Disable for Outport: '<S41>/CAN_new' */
    localB->SFunction_o1_k = 0;

    /* Disable for Outport: '<S41>/Out2' */
    localB->In1_g = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out3' */
    localB->In2_p = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out4' */
    localB->In3_l = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out5' */
    localB->In4_n = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out6' */
    localB->In5_o = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out7' */
    localB->In6_l = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out8' */
    localB->In7_f = ((uint8_T)0U);

    /* Disable for Outport: '<S41>/Out9' */
    localB->In8_kx = ((uint8_T)0U);
    localDW->OutControl1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/OutControl1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/OutControl2_ID_CAN' */
  if (localDW->OutControl2_ID_CAN_MODE) {
    /* Disable for Outport: '<S42>/CAN_new' */
    localB->SFunction_o1_b = 0;

    /* Disable for Outport: '<S42>/Out2' */
    localB->In1_c = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out3' */
    localB->In2_i = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out4' */
    localB->In3_m = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out5' */
    localB->In4_iv = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out6' */
    localB->In5_h = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out7' */
    localB->In6_d = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out8' */
    localB->In7_bt = ((uint8_T)0U);

    /* Disable for Outport: '<S42>/Out9' */
    localB->In8_ku = ((uint8_T)0U);
    localDW->OutControl2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/OutControl2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S39>/OutEmulator_ID_CAN' */
  if (localDW->OutEmulator_ID_CAN_MODE) {
    /* Disable for Outport: '<S43>/CAN_new' */
    localB->SFunction_o1_o = 0;

    /* Disable for Outport: '<S43>/Out2' */
    localB->In1_b = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out3' */
    localB->In2_o = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out4' */
    localB->In3_oq = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out5' */
    localB->In4_i = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out6' */
    localB->In5_md = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out7' */
    localB->In6_hx = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out8' */
    localB->In7_k = ((uint8_T)0U);

    /* Disable for Outport: '<S43>/Out9' */
    localB->In8_l = ((uint8_T)0U);
    localDW->OutEmulator_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S39>/OutEmulator_ID_CAN' */
}

/* Start for function-call system: '<S10>/CAN1 Recieve' */
void CAN1Recieve_Start(void)
{
  /* Start for Enabled SubSystem: '<S39>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S60>/S-Function' incorporates:
   *  Constant: '<S46>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 1U);

  /* End of Start for SubSystem: '<S39>/Sync_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S62>/S-Function' incorporates:
   *  Constant: '<S47>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 11U);

  /* End of Start for SubSystem: '<S39>/Vote1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S64>/S-Function' incorporates:
   *  Constant: '<S48>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 12U);

  /* End of Start for SubSystem: '<S39>/Vote2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S66>/S-Function' incorporates:
   *  Constant: '<S49>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 13U);

  /* End of Start for SubSystem: '<S39>/Vote3_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/SetValues_ID_CAN' */

  /* Start for M-S-Function: '<S58>/S-Function' incorporates:
   *  Constant: '<S45>/Constant4'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 21U);

  /* End of Start for SubSystem: '<S39>/SetValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/SensorValues_ID_CAN' */

  /* Start for M-S-Function: '<S56>/S-Function' incorporates:
   *  Constant: '<S44>/Constant5'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 22U);

  /* End of Start for SubSystem: '<S39>/SensorValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/OutControl1_ID_CAN' */

  /* Start for M-S-Function: '<S50>/S-Function' incorporates:
   *  Constant: '<S41>/Constant6'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 23U);

  /* End of Start for SubSystem: '<S39>/OutControl1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/OutControl2_ID_CAN' */

  /* Start for M-S-Function: '<S52>/S-Function' incorporates:
   *  Constant: '<S42>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 24U);

  /* End of Start for SubSystem: '<S39>/OutControl2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S39>/OutEmulator_ID_CAN' */

  /* Start for M-S-Function: '<S54>/S-Function' incorporates:
   *  Constant: '<S43>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 25U);

  /* End of Start for SubSystem: '<S39>/OutEmulator_ID_CAN' */
}

/* Output and update for function-call system: '<S10>/CAN1 Recieve' */
void CAN1Recieve(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW, uint16_T
                 *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN1, uint16_T
                 *rtd_Msg_Rx_Ticks_CAN1, boolean_T *rtd_New_Msg_Ready_CAN1,
                 uint32_T *rtd_RxID_CAN1, uint8_T *rtd_Rx_State_CAN1, boolean_T *
                 rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D12)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_f;
  uint8_T rtb_SFunction_o3_m;
  uint8_T rtb_SFunction_o4_m;
  uint8_T rtb_SFunction_o5_j;
  uint8_T rtb_SFunction_o6_m;
  uint8_T rtb_SFunction_o7_h;
  uint8_T rtb_SFunction_o8_l;
  uint8_T rtb_SFunction_o9_k;
  uint8_T rtb_SFunction_o2_c;
  uint8_T rtb_SFunction_o3_c;
  uint8_T rtb_SFunction_o4_b;
  uint8_T rtb_SFunction_o5_k;
  uint8_T rtb_SFunction_o6_mm;
  uint8_T rtb_SFunction_o7_m;
  uint8_T rtb_SFunction_o8_g;
  uint8_T rtb_SFunction_o9_f;
  uint8_T rtb_SFunction_o2_c3;
  uint8_T rtb_SFunction_o3_h;
  uint8_T rtb_SFunction_o4_e;
  uint8_T rtb_SFunction_o5_m;
  uint8_T rtb_SFunction_o6_i;
  uint8_T rtb_SFunction_o7_ml;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_fm;
  uint8_T rtb_SFunction_o2_fr;
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_g;
  uint8_T rtb_SFunction_o5_c;
  uint8_T rtb_SFunction_o6_g;
  uint8_T rtb_SFunction_o7_n;
  uint8_T rtb_SFunction_o8_k;
  uint8_T rtb_SFunction_o9_d;
  uint8_T rtb_SFunction_o2_h;
  uint8_T rtb_SFunction_o3_f;
  uint8_T rtb_SFunction_o4_n;
  uint8_T rtb_SFunction_o5_p;
  uint8_T rtb_SFunction_o6_h;
  uint8_T rtb_SFunction_o7_h2;
  uint8_T rtb_SFunction_o8_lv;
  uint8_T rtb_SFunction_o9_p;
  uint8_T rtb_SFunction_o2_fu;
  uint8_T rtb_SFunction_o3_mj;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_c5;
  uint8_T rtb_SFunction_o6_p;
  uint8_T rtb_SFunction_o7_j;
  uint8_T rtb_SFunction_o8_c;
  uint8_T rtb_SFunction_o9_f0;
  uint8_T rtb_SFunction_o2_a;
  uint8_T rtb_SFunction_o3_j;
  uint8_T rtb_SFunction_o4_o;
  uint8_T rtb_SFunction_o5_o;
  uint8_T rtb_SFunction_o6_n;
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_e;
  uint8_T rtb_SFunction_o9_f2;
  uint8_T rtb_SFunction_o2_m;
  uint8_T rtb_SFunction_o3_h1;
  uint8_T rtb_SFunction_o4_i;
  uint8_T rtb_SFunction_o5_c4;
  uint8_T rtb_SFunction_o6_j;
  uint8_T rtb_SFunction_o7_o;
  uint8_T rtb_SFunction_o8_nw;
  uint8_T rtb_SFunction_o9_d5;
  boolean_T rtb_Equal_mj;
  boolean_T rtb_Equal1_bu;
  boolean_T rtb_Equal2_oo;
  boolean_T rtb_Equal3_n;
  boolean_T rtb_Equal4_gf;
  boolean_T rtb_Equal5_jt;
  boolean_T rtb_Equal6_o;
  boolean_T rtb_Equal7_g;
  int8_T rtb_signal1_jr;
  uint8_T rtb_signal2_n;
  uint8_T rtb_signal3;
  uint8_T rtb_signal4;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;

  /* Sum: '<S26>/Sum1' incorporates:
   *  Constant: '<S26>/Constant3'
   *  DataStoreRead: '<S26>/Data Store Read1'
   */
  RxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S26>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN1_counter_s;

  /* DataStoreRead: '<S26>/Data Store Read' */
  RxID_CAN1_s = *rtd_RxID_CAN1;

  /* RelationalOperator: '<S39>/Equal' incorporates:
   *  Constant: '<S39>/Constant'
   */
  rtb_Equal_mj = (RxID_CAN1_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S39>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S46>/Enable'
   */
  if (rtb_Equal_mj) {
    if (!localDW->Sync_ID_CAN_MODE) {
      localDW->Sync_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S60>/S-Function' incorporates:
     *  Constant: '<S46>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_h = CanIoGetMessage(0, 1U, NULL,
      &canRxData_0_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_h > 0) {
      /* read the data */
      rtb_SFunction_o2_c3 = canRxData_0_1U.uint8_T_info[0];
      rtb_SFunction_o3_h = canRxData_0_1U.uint8_T_info[1];
      rtb_SFunction_o4_e = canRxData_0_1U.uint8_T_info[2];
      rtb_SFunction_o5_m = canRxData_0_1U.uint8_T_info[3];
      rtb_SFunction_o6_i = canRxData_0_1U.uint8_T_info[4];
      rtb_SFunction_o7_ml = canRxData_0_1U.uint8_T_info[5];
      rtb_SFunction_o8_n = canRxData_0_1U.uint8_T_info[6];
      rtb_SFunction_o9_fm = canRxData_0_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S60>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S61>/Enable'
     */
    if (localB->SFunction_o1_h > 0) {
      /* Inport: '<S61>/In1' */
      localB->In1_p = rtb_SFunction_o2_c3;

      /* Inport: '<S61>/In2' */
      localB->In2_k = rtb_SFunction_o3_h;

      /* Inport: '<S61>/In3' */
      localB->In3_b = rtb_SFunction_o4_e;

      /* Inport: '<S61>/In4' */
      localB->In4_l = rtb_SFunction_o5_m;

      /* Inport: '<S61>/In5' */
      localB->In5_c = rtb_SFunction_o6_i;

      /* Inport: '<S61>/In6' */
      localB->In6_i = rtb_SFunction_o7_ml;

      /* Inport: '<S61>/In7' */
      localB->In7_m = rtb_SFunction_o8_n;

      /* Inport: '<S61>/In8' */
      localB->In8_c = rtb_SFunction_o9_fm;
    }

    /* End of Outputs for SubSystem: '<S60>/Enabled Subsystem' */
  } else {
    if (localDW->Sync_ID_CAN_MODE) {
      /* Disable for Outport: '<S46>/CAN_new' */
      localB->SFunction_o1_h = 0;

      /* Disable for Outport: '<S46>/Out2' */
      localB->In1_p = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out3' */
      localB->In2_k = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out4' */
      localB->In3_b = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out5' */
      localB->In4_l = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out6' */
      localB->In5_c = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out7' */
      localB->In6_i = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out8' */
      localB->In7_m = ((uint8_T)0U);

      /* Disable for Outport: '<S46>/Out9' */
      localB->In8_c = ((uint8_T)0U);
      localDW->Sync_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/Sync_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal1' incorporates:
   *  Constant: '<S39>/Constant1'
   */
  rtb_Equal1_bu = (RxID_CAN1_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S39>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S47>/Enable'
   */
  if (rtb_Equal1_bu) {
    if (!localDW->Vote1_ID_CAN_MODE) {
      localDW->Vote1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S62>/S-Function' incorporates:
     *  Constant: '<S47>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(0, 11U, NULL,
      &canRxData_0_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_c = canRxData_0_11U.uint8_T_info[0];
      rtb_SFunction_o3_c = canRxData_0_11U.uint8_T_info[1];
      rtb_SFunction_o4_b = canRxData_0_11U.uint8_T_info[2];
      rtb_SFunction_o5_k = canRxData_0_11U.uint8_T_info[3];
      rtb_SFunction_o6_mm = canRxData_0_11U.uint8_T_info[4];
      rtb_SFunction_o7_m = canRxData_0_11U.uint8_T_info[5];
      rtb_SFunction_o8_g = canRxData_0_11U.uint8_T_info[6];
      rtb_SFunction_o9_f = canRxData_0_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S62>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S63>/Enable'
     */
    if (localB->SFunction_o1_m > 0) {
      /* Inport: '<S63>/In1' */
      localB->In1_d = rtb_SFunction_o2_c;

      /* Inport: '<S63>/In2' */
      localB->In2_a = rtb_SFunction_o3_c;

      /* Inport: '<S63>/In3' */
      localB->In3_n = rtb_SFunction_o4_b;

      /* Inport: '<S63>/In4' */
      localB->In4_m = rtb_SFunction_o5_k;

      /* Inport: '<S63>/In5' */
      localB->In5_k = rtb_SFunction_o6_mm;

      /* Inport: '<S63>/In6' */
      localB->In6_j = rtb_SFunction_o7_m;

      /* Inport: '<S63>/In7' */
      localB->In7_o = rtb_SFunction_o8_g;

      /* Inport: '<S63>/In8' */
      localB->In8_k = rtb_SFunction_o9_f;
    }

    /* End of Outputs for SubSystem: '<S62>/Enabled Subsystem' */
  } else {
    if (localDW->Vote1_ID_CAN_MODE) {
      /* Disable for Outport: '<S47>/CAN_new' */
      localB->SFunction_o1_m = 0;

      /* Disable for Outport: '<S47>/Out2' */
      localB->In1_d = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out3' */
      localB->In2_a = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out4' */
      localB->In3_n = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out5' */
      localB->In4_m = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out6' */
      localB->In5_k = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out7' */
      localB->In6_j = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out8' */
      localB->In7_o = ((uint8_T)0U);

      /* Disable for Outport: '<S47>/Out9' */
      localB->In8_k = ((uint8_T)0U);
      localDW->Vote1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal2' incorporates:
   *  Constant: '<S39>/Constant2'
   */
  rtb_Equal2_oo = (RxID_CAN1_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S39>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  if (rtb_Equal2_oo) {
    if (!localDW->Vote2_ID_CAN_MODE) {
      localDW->Vote2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S64>/S-Function' incorporates:
     *  Constant: '<S48>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(0, 12U, NULL,
      &canRxData_0_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_f = canRxData_0_12U.uint8_T_info[0];
      rtb_SFunction_o3_m = canRxData_0_12U.uint8_T_info[1];
      rtb_SFunction_o4_m = canRxData_0_12U.uint8_T_info[2];
      rtb_SFunction_o5_j = canRxData_0_12U.uint8_T_info[3];
      rtb_SFunction_o6_m = canRxData_0_12U.uint8_T_info[4];
      rtb_SFunction_o7_h = canRxData_0_12U.uint8_T_info[5];
      rtb_SFunction_o8_l = canRxData_0_12U.uint8_T_info[6];
      rtb_SFunction_o9_k = canRxData_0_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S64>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S65>/Enable'
     */
    if (localB->SFunction_o1_e > 0) {
      /* Inport: '<S65>/In1' */
      localB->In1_j = rtb_SFunction_o2_f;

      /* Inport: '<S65>/In2' */
      localB->In2_l = rtb_SFunction_o3_m;

      /* Inport: '<S65>/In3' */
      localB->In3_o = rtb_SFunction_o4_m;

      /* Inport: '<S65>/In4' */
      localB->In4_c = rtb_SFunction_o5_j;

      /* Inport: '<S65>/In5' */
      localB->In5_g = rtb_SFunction_o6_m;

      /* Inport: '<S65>/In6' */
      localB->In6_h = rtb_SFunction_o7_h;

      /* Inport: '<S65>/In7' */
      localB->In7_b = rtb_SFunction_o8_l;

      /* Inport: '<S65>/In8' */
      localB->In8_a = rtb_SFunction_o9_k;
    }

    /* End of Outputs for SubSystem: '<S64>/Enabled Subsystem' */
  } else {
    if (localDW->Vote2_ID_CAN_MODE) {
      /* Disable for Outport: '<S48>/CAN_new' */
      localB->SFunction_o1_e = 0;

      /* Disable for Outport: '<S48>/Out2' */
      localB->In1_j = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out3' */
      localB->In2_l = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out4' */
      localB->In3_o = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out5' */
      localB->In4_c = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out6' */
      localB->In5_g = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out7' */
      localB->In6_h = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out8' */
      localB->In7_b = ((uint8_T)0U);

      /* Disable for Outport: '<S48>/Out9' */
      localB->In8_a = ((uint8_T)0U);
      localDW->Vote2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal3' incorporates:
   *  Constant: '<S39>/Constant3'
   */
  rtb_Equal3_n = (RxID_CAN1_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S39>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S49>/Enable'
   */
  if (rtb_Equal3_n) {
    if (!localDW->Vote3_ID_CAN_MODE) {
      localDW->Vote3_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S66>/S-Function' incorporates:
     *  Constant: '<S49>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(0, 13U, NULL,
      &canRxData_0_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_0_13U.uint8_T_info[0];
      rtb_SFunction_o3 = canRxData_0_13U.uint8_T_info[1];
      rtb_SFunction_o4 = canRxData_0_13U.uint8_T_info[2];
      rtb_SFunction_o5 = canRxData_0_13U.uint8_T_info[3];
      rtb_SFunction_o6 = canRxData_0_13U.uint8_T_info[4];
      rtb_SFunction_o7 = canRxData_0_13U.uint8_T_info[5];
      rtb_SFunction_o8 = canRxData_0_13U.uint8_T_info[6];
      rtb_SFunction_o9 = canRxData_0_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S66>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S67>/Enable'
     */
    if (localB->SFunction_o1 > 0) {
      /* Inport: '<S67>/In1' */
      localB->In1 = rtb_SFunction_o2;

      /* Inport: '<S67>/In2' */
      localB->In2 = rtb_SFunction_o3;

      /* Inport: '<S67>/In3' */
      localB->In3 = rtb_SFunction_o4;

      /* Inport: '<S67>/In4' */
      localB->In4 = rtb_SFunction_o5;

      /* Inport: '<S67>/In5' */
      localB->In5 = rtb_SFunction_o6;

      /* Inport: '<S67>/In6' */
      localB->In6 = rtb_SFunction_o7;

      /* Inport: '<S67>/In7' */
      localB->In7 = rtb_SFunction_o8;

      /* Inport: '<S67>/In8' */
      localB->In8 = rtb_SFunction_o9;
    }

    /* End of Outputs for SubSystem: '<S66>/Enabled Subsystem' */
  } else {
    if (localDW->Vote3_ID_CAN_MODE) {
      /* Disable for Outport: '<S49>/CAN_new' */
      localB->SFunction_o1 = 0;

      /* Disable for Outport: '<S49>/Out2' */
      localB->In1 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out3' */
      localB->In2 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out4' */
      localB->In3 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out5' */
      localB->In4 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out6' */
      localB->In5 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out7' */
      localB->In6 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out8' */
      localB->In7 = ((uint8_T)0U);

      /* Disable for Outport: '<S49>/Out9' */
      localB->In8 = ((uint8_T)0U);
      localDW->Vote3_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal4' incorporates:
   *  Constant: '<S39>/Constant4'
   */
  rtb_Equal4_gf = (RxID_CAN1_s == 21.0);

  /* Outputs for Enabled SubSystem: '<S39>/SetValues_ID_CAN' incorporates:
   *  EnablePort: '<S45>/Enable'
   */
  if (rtb_Equal4_gf) {
    if (!localDW->SetValues_ID_CAN_MODE) {
      localDW->SetValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S58>/S-Function' incorporates:
     *  Constant: '<S45>/Constant4'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_l = CanIoGetMessage(0, 21U, NULL,
      &canRxData_0_21U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_l > 0) {
      /* read the data */
      rtb_SFunction_o2_fr = canRxData_0_21U.uint8_T_info[0];
      rtb_SFunction_o3_g = canRxData_0_21U.uint8_T_info[1];
      rtb_SFunction_o4_g = canRxData_0_21U.uint8_T_info[2];
      rtb_SFunction_o5_c = canRxData_0_21U.uint8_T_info[3];
      rtb_SFunction_o6_g = canRxData_0_21U.uint8_T_info[4];
      rtb_SFunction_o7_n = canRxData_0_21U.uint8_T_info[5];
      rtb_SFunction_o8_k = canRxData_0_21U.uint8_T_info[6];
      rtb_SFunction_o9_d = canRxData_0_21U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S58>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S59>/Enable'
     */
    if (localB->SFunction_o1_l > 0) {
      /* Inport: '<S59>/In1' */
      localB->In1_pn = rtb_SFunction_o2_fr;

      /* Inport: '<S59>/In2' */
      localB->In2_b = rtb_SFunction_o3_g;

      /* Inport: '<S59>/In3' */
      localB->In3_k = rtb_SFunction_o4_g;

      /* Inport: '<S59>/In4' */
      localB->In4_h = rtb_SFunction_o5_c;

      /* Inport: '<S59>/In5' */
      localB->In5_l = rtb_SFunction_o6_g;

      /* Inport: '<S59>/In6' */
      localB->In6_m = rtb_SFunction_o7_n;

      /* Inport: '<S59>/In7' */
      localB->In7_mm = rtb_SFunction_o8_k;

      /* Inport: '<S59>/In8' */
      localB->In8_e = rtb_SFunction_o9_d;
    }

    /* End of Outputs for SubSystem: '<S58>/Enabled Subsystem' */
  } else {
    if (localDW->SetValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S45>/CAN_new' */
      localB->SFunction_o1_l = 0;

      /* Disable for Outport: '<S45>/Out2' */
      localB->In1_pn = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out3' */
      localB->In2_b = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out4' */
      localB->In3_k = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out5' */
      localB->In4_h = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out6' */
      localB->In5_l = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out7' */
      localB->In6_m = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out8' */
      localB->In7_mm = ((uint8_T)0U);

      /* Disable for Outport: '<S45>/Out9' */
      localB->In8_e = ((uint8_T)0U);
      localDW->SetValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/SetValues_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal5' incorporates:
   *  Constant: '<S39>/Constant5'
   */
  rtb_Equal5_jt = (RxID_CAN1_s == 22.0);

  /* Outputs for Enabled SubSystem: '<S39>/SensorValues_ID_CAN' incorporates:
   *  EnablePort: '<S44>/Enable'
   */
  if (rtb_Equal5_jt) {
    if (!localDW->SensorValues_ID_CAN_MODE) {
      localDW->SensorValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S56>/S-Function' incorporates:
     *  Constant: '<S44>/Constant5'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_i = CanIoGetMessage(0, 22U, NULL,
      &canRxData_0_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_i > 0) {
      /* read the data */
      rtb_SFunction_o2_h = canRxData_0_22U.uint8_T_info[0];
      rtb_SFunction_o3_f = canRxData_0_22U.uint8_T_info[1];
      rtb_SFunction_o4_n = canRxData_0_22U.uint8_T_info[2];
      rtb_SFunction_o5_p = canRxData_0_22U.uint8_T_info[3];
      rtb_SFunction_o6_h = canRxData_0_22U.uint8_T_info[4];
      rtb_SFunction_o7_h2 = canRxData_0_22U.uint8_T_info[5];
      rtb_SFunction_o8_lv = canRxData_0_22U.uint8_T_info[6];
      rtb_SFunction_o9_p = canRxData_0_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S56>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S57>/Enable'
     */
    if (localB->SFunction_o1_i > 0) {
      /* Inport: '<S57>/In1' */
      localB->In1_k = rtb_SFunction_o2_h;

      /* Inport: '<S57>/In2' */
      localB->In2_c = rtb_SFunction_o3_f;

      /* Inport: '<S57>/In3' */
      localB->In3_i = rtb_SFunction_o4_n;

      /* Inport: '<S57>/In4' */
      localB->In4_b = rtb_SFunction_o5_p;

      /* Inport: '<S57>/In5' */
      localB->In5_m = rtb_SFunction_o6_h;

      /* Inport: '<S57>/In6' */
      localB->In6_n = rtb_SFunction_o7_h2;

      /* Inport: '<S57>/In7' */
      localB->In7_l = rtb_SFunction_o8_lv;

      /* Inport: '<S57>/In8' */
      localB->In8_aa = rtb_SFunction_o9_p;
    }

    /* End of Outputs for SubSystem: '<S56>/Enabled Subsystem' */
  } else {
    if (localDW->SensorValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S44>/CAN_new' */
      localB->SFunction_o1_i = 0;

      /* Disable for Outport: '<S44>/Out2' */
      localB->In1_k = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out3' */
      localB->In2_c = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out4' */
      localB->In3_i = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out5' */
      localB->In4_b = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out6' */
      localB->In5_m = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out7' */
      localB->In6_n = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out8' */
      localB->In7_l = ((uint8_T)0U);

      /* Disable for Outport: '<S44>/Out9' */
      localB->In8_aa = ((uint8_T)0U);
      localDW->SensorValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/SensorValues_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal6' incorporates:
   *  Constant: '<S39>/Constant6'
   */
  rtb_Equal6_o = (RxID_CAN1_s == 23.0);

  /* Outputs for Enabled SubSystem: '<S39>/OutControl1_ID_CAN' incorporates:
   *  EnablePort: '<S41>/Enable'
   */
  if (rtb_Equal6_o) {
    if (!localDW->OutControl1_ID_CAN_MODE) {
      localDW->OutControl1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S50>/S-Function' incorporates:
     *  Constant: '<S41>/Constant6'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_k = CanIoGetMessage(0, 23U, NULL,
      &canRxData_0_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_k > 0) {
      /* read the data */
      rtb_SFunction_o2_m = canRxData_0_23U.uint8_T_info[0];
      rtb_SFunction_o3_h1 = canRxData_0_23U.uint8_T_info[1];
      rtb_SFunction_o4_i = canRxData_0_23U.uint8_T_info[2];
      rtb_SFunction_o5_c4 = canRxData_0_23U.uint8_T_info[3];
      rtb_SFunction_o6_j = canRxData_0_23U.uint8_T_info[4];
      rtb_SFunction_o7_o = canRxData_0_23U.uint8_T_info[5];
      rtb_SFunction_o8_nw = canRxData_0_23U.uint8_T_info[6];
      rtb_SFunction_o9_d5 = canRxData_0_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S50>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S51>/Enable'
     */
    if (localB->SFunction_o1_k > 0) {
      /* Inport: '<S51>/In1' */
      localB->In1_g = rtb_SFunction_o2_m;

      /* Inport: '<S51>/In2' */
      localB->In2_p = rtb_SFunction_o3_h1;

      /* Inport: '<S51>/In3' */
      localB->In3_l = rtb_SFunction_o4_i;

      /* Inport: '<S51>/In4' */
      localB->In4_n = rtb_SFunction_o5_c4;

      /* Inport: '<S51>/In5' */
      localB->In5_o = rtb_SFunction_o6_j;

      /* Inport: '<S51>/In6' */
      localB->In6_l = rtb_SFunction_o7_o;

      /* Inport: '<S51>/In7' */
      localB->In7_f = rtb_SFunction_o8_nw;

      /* Inport: '<S51>/In8' */
      localB->In8_kx = rtb_SFunction_o9_d5;
    }

    /* End of Outputs for SubSystem: '<S50>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl1_ID_CAN_MODE) {
      /* Disable for Outport: '<S41>/CAN_new' */
      localB->SFunction_o1_k = 0;

      /* Disable for Outport: '<S41>/Out2' */
      localB->In1_g = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out3' */
      localB->In2_p = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out4' */
      localB->In3_l = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out5' */
      localB->In4_n = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out6' */
      localB->In5_o = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out7' */
      localB->In6_l = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out8' */
      localB->In7_f = ((uint8_T)0U);

      /* Disable for Outport: '<S41>/Out9' */
      localB->In8_kx = ((uint8_T)0U);
      localDW->OutControl1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/OutControl1_ID_CAN' */

  /* RelationalOperator: '<S39>/Equal7' incorporates:
   *  Constant: '<S39>/Constant7'
   */
  rtb_Equal7_g = (RxID_CAN1_s == 24.0);

  /* Outputs for Enabled SubSystem: '<S39>/OutControl2_ID_CAN' incorporates:
   *  EnablePort: '<S42>/Enable'
   */
  if (rtb_Equal7_g) {
    if (!localDW->OutControl2_ID_CAN_MODE) {
      localDW->OutControl2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S52>/S-Function' incorporates:
     *  Constant: '<S42>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_b = CanIoGetMessage(0, 24U, NULL,
      &canRxData_0_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_b > 0) {
      /* read the data */
      rtb_SFunction_o2_a = canRxData_0_24U.uint8_T_info[0];
      rtb_SFunction_o3_j = canRxData_0_24U.uint8_T_info[1];
      rtb_SFunction_o4_o = canRxData_0_24U.uint8_T_info[2];
      rtb_SFunction_o5_o = canRxData_0_24U.uint8_T_info[3];
      rtb_SFunction_o6_n = canRxData_0_24U.uint8_T_info[4];
      rtb_SFunction_o7_d = canRxData_0_24U.uint8_T_info[5];
      rtb_SFunction_o8_e = canRxData_0_24U.uint8_T_info[6];
      rtb_SFunction_o9_f2 = canRxData_0_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S52>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S53>/Enable'
     */
    if (localB->SFunction_o1_b > 0) {
      /* Inport: '<S53>/In1' */
      localB->In1_c = rtb_SFunction_o2_a;

      /* Inport: '<S53>/In2' */
      localB->In2_i = rtb_SFunction_o3_j;

      /* Inport: '<S53>/In3' */
      localB->In3_m = rtb_SFunction_o4_o;

      /* Inport: '<S53>/In4' */
      localB->In4_iv = rtb_SFunction_o5_o;

      /* Inport: '<S53>/In5' */
      localB->In5_h = rtb_SFunction_o6_n;

      /* Inport: '<S53>/In6' */
      localB->In6_d = rtb_SFunction_o7_d;

      /* Inport: '<S53>/In7' */
      localB->In7_bt = rtb_SFunction_o8_e;

      /* Inport: '<S53>/In8' */
      localB->In8_ku = rtb_SFunction_o9_f2;
    }

    /* End of Outputs for SubSystem: '<S52>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl2_ID_CAN_MODE) {
      /* Disable for Outport: '<S42>/CAN_new' */
      localB->SFunction_o1_b = 0;

      /* Disable for Outport: '<S42>/Out2' */
      localB->In1_c = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out3' */
      localB->In2_i = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out4' */
      localB->In3_m = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out5' */
      localB->In4_iv = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out6' */
      localB->In5_h = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out7' */
      localB->In6_d = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out8' */
      localB->In7_bt = ((uint8_T)0U);

      /* Disable for Outport: '<S42>/Out9' */
      localB->In8_ku = ((uint8_T)0U);
      localDW->OutControl2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/OutControl2_ID_CAN' */

  /* Outputs for Enabled SubSystem: '<S39>/OutEmulator_ID_CAN' incorporates:
   *  EnablePort: '<S43>/Enable'
   */
  /* RelationalOperator: '<S39>/Equal8' incorporates:
   *  Constant: '<S39>/Constant8'
   *  Inport: '<S55>/In1'
   *  Inport: '<S55>/In2'
   *  Inport: '<S55>/In3'
   *  Inport: '<S55>/In4'
   *  Inport: '<S55>/In5'
   *  Inport: '<S55>/In6'
   *  Inport: '<S55>/In7'
   *  Inport: '<S55>/In8'
   */
  if (RxID_CAN1_s == 25.0) {
    if (!localDW->OutEmulator_ID_CAN_MODE) {
      localDW->OutEmulator_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S54>/S-Function' incorporates:
     *  Constant: '<S43>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_o = CanIoGetMessage(0, 25U, NULL,
      &canRxData_0_25U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_o > 0) {
      /* read the data */
      rtb_SFunction_o2_fu = canRxData_0_25U.uint8_T_info[0];
      rtb_SFunction_o3_mj = canRxData_0_25U.uint8_T_info[1];
      rtb_SFunction_o4_j = canRxData_0_25U.uint8_T_info[2];
      rtb_SFunction_o5_c5 = canRxData_0_25U.uint8_T_info[3];
      rtb_SFunction_o6_p = canRxData_0_25U.uint8_T_info[4];
      rtb_SFunction_o7_j = canRxData_0_25U.uint8_T_info[5];
      rtb_SFunction_o8_c = canRxData_0_25U.uint8_T_info[6];
      rtb_SFunction_o9_f0 = canRxData_0_25U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S54>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S55>/Enable'
     */
    if (localB->SFunction_o1_o > 0) {
      localB->In1_b = rtb_SFunction_o2_fu;
      localB->In2_o = rtb_SFunction_o3_mj;
      localB->In3_oq = rtb_SFunction_o4_j;
      localB->In4_i = rtb_SFunction_o5_c5;
      localB->In5_md = rtb_SFunction_o6_p;
      localB->In6_hx = rtb_SFunction_o7_j;
      localB->In7_k = rtb_SFunction_o8_c;
      localB->In8_l = rtb_SFunction_o9_f0;
    }

    /* End of Outputs for SubSystem: '<S54>/Enabled Subsystem' */
  } else {
    if (localDW->OutEmulator_ID_CAN_MODE) {
      /* Disable for Outport: '<S43>/CAN_new' */
      localB->SFunction_o1_o = 0;

      /* Disable for Outport: '<S43>/Out2' */
      localB->In1_b = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out3' */
      localB->In2_o = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out4' */
      localB->In3_oq = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out5' */
      localB->In4_i = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out6' */
      localB->In5_md = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out7' */
      localB->In6_hx = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out8' */
      localB->In7_k = ((uint8_T)0U);

      /* Disable for Outport: '<S43>/Out9' */
      localB->In8_l = ((uint8_T)0U);
      localDW->OutEmulator_ID_CAN_MODE = false;
    }
  }

  /* End of RelationalOperator: '<S39>/Equal8' */
  /* End of Outputs for SubSystem: '<S39>/OutEmulator_ID_CAN' */

  /* Switch: '<S39>/Switch' incorporates:
   *  Switch: '<S39>/Switch1'
   *  Switch: '<S39>/Switch2'
   *  Switch: '<S39>/Switch3'
   *  Switch: '<S39>/Switch4'
   *  Switch: '<S39>/Switch5'
   *  Switch: '<S39>/Switch6'
   *  Switch: '<S39>/Switch7'
   */
  if (rtb_Equal_mj) {
    rtb_signal1_jr = localB->SFunction_o1_h;
    rtb_signal2_n = localB->In1_p;
    rtb_signal3 = localB->In2_k;
    rtb_signal4 = localB->In3_b;
    rtb_signal5 = localB->In4_l;
    rtb_signal6 = localB->In5_c;
    rtb_signal7 = localB->In6_i;
    rtb_signal8 = localB->In7_m;
    rtb_signal9 = localB->In8_c;
  } else {
    if (rtb_Equal1_bu) {
      /* Switch: '<S39>/Switch1' */
      rtb_signal1_jr = localB->SFunction_o1_m;
    } else if (rtb_Equal2_oo) {
      /* Switch: '<S39>/Switch2' incorporates:
       *  Switch: '<S39>/Switch1'
       */
      rtb_signal1_jr = localB->SFunction_o1_e;
    } else if (rtb_Equal3_n) {
      /* Switch: '<S39>/Switch3' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       */
      rtb_signal1_jr = localB->SFunction_o1;
    } else if (rtb_Equal4_gf) {
      /* Switch: '<S39>/Switch4' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       */
      rtb_signal1_jr = localB->SFunction_o1_l;
    } else if (rtb_Equal5_jt) {
      /* Switch: '<S39>/Switch5' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       *  Switch: '<S39>/Switch4'
       */
      rtb_signal1_jr = localB->SFunction_o1_i;
    } else if (rtb_Equal6_o) {
      /* Switch: '<S39>/Switch6' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       *  Switch: '<S39>/Switch4'
       *  Switch: '<S39>/Switch5'
       */
      rtb_signal1_jr = localB->SFunction_o1_k;
    } else if (rtb_Equal7_g) {
      /* Switch: '<S39>/Switch7' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       *  Switch: '<S39>/Switch4'
       *  Switch: '<S39>/Switch5'
       *  Switch: '<S39>/Switch6'
       */
      rtb_signal1_jr = localB->SFunction_o1_b;
    } else {
      /* Switch: '<S39>/Switch4' incorporates:
       *  Switch: '<S39>/Switch1'
       *  Switch: '<S39>/Switch2'
       *  Switch: '<S39>/Switch3'
       *  Switch: '<S39>/Switch5'
       *  Switch: '<S39>/Switch6'
       *  Switch: '<S39>/Switch7'
       */
      rtb_signal1_jr = localB->SFunction_o1_o;
    }

    /* Switch: '<S39>/Switch1' incorporates:
     *  Switch: '<S39>/Switch2'
     *  Switch: '<S39>/Switch3'
     *  Switch: '<S39>/Switch4'
     *  Switch: '<S39>/Switch5'
     *  Switch: '<S39>/Switch6'
     *  Switch: '<S39>/Switch7'
     */
    if (rtb_Equal1_bu) {
      rtb_signal2_n = localB->In1_d;
      rtb_signal3 = localB->In2_a;
      rtb_signal4 = localB->In3_n;
      rtb_signal5 = localB->In4_m;
      rtb_signal6 = localB->In5_k;
      rtb_signal7 = localB->In6_j;
      rtb_signal8 = localB->In7_o;
      rtb_signal9 = localB->In8_k;
    } else if (rtb_Equal2_oo) {
      rtb_signal2_n = localB->In1_j;
      rtb_signal3 = localB->In2_l;
      rtb_signal4 = localB->In3_o;
      rtb_signal5 = localB->In4_c;
      rtb_signal6 = localB->In5_g;
      rtb_signal7 = localB->In6_h;
      rtb_signal8 = localB->In7_b;
      rtb_signal9 = localB->In8_a;
    } else {
      if (rtb_Equal3_n) {
        rtb_signal2_n = localB->In1;
      } else if (rtb_Equal4_gf) {
        rtb_signal2_n = localB->In1_pn;
      } else if (rtb_Equal5_jt) {
        rtb_signal2_n = localB->In1_k;
      } else if (rtb_Equal6_o) {
        rtb_signal2_n = localB->In1_g;
      } else if (rtb_Equal7_g) {
        rtb_signal2_n = localB->In1_c;
      } else {
        rtb_signal2_n = localB->In1_b;
      }

      if (rtb_Equal3_n) {
        rtb_signal3 = localB->In2;
      } else if (rtb_Equal4_gf) {
        rtb_signal3 = localB->In2_b;
      } else if (rtb_Equal5_jt) {
        rtb_signal3 = localB->In2_c;
      } else if (rtb_Equal6_o) {
        rtb_signal3 = localB->In2_p;
      } else if (rtb_Equal7_g) {
        rtb_signal3 = localB->In2_i;
      } else {
        rtb_signal3 = localB->In2_o;
      }

      if (rtb_Equal3_n) {
        rtb_signal4 = localB->In3;
      } else if (rtb_Equal4_gf) {
        rtb_signal4 = localB->In3_k;
      } else if (rtb_Equal5_jt) {
        rtb_signal4 = localB->In3_i;
      } else if (rtb_Equal6_o) {
        rtb_signal4 = localB->In3_l;
      } else if (rtb_Equal7_g) {
        rtb_signal4 = localB->In3_m;
      } else {
        rtb_signal4 = localB->In3_oq;
      }

      if (rtb_Equal3_n) {
        rtb_signal5 = localB->In4;
      } else if (rtb_Equal4_gf) {
        rtb_signal5 = localB->In4_h;
      } else if (rtb_Equal5_jt) {
        rtb_signal5 = localB->In4_b;
      } else if (rtb_Equal6_o) {
        rtb_signal5 = localB->In4_n;
      } else if (rtb_Equal7_g) {
        rtb_signal5 = localB->In4_iv;
      } else {
        rtb_signal5 = localB->In4_i;
      }

      if (rtb_Equal3_n) {
        rtb_signal6 = localB->In5;
      } else if (rtb_Equal4_gf) {
        rtb_signal6 = localB->In5_l;
      } else if (rtb_Equal5_jt) {
        rtb_signal6 = localB->In5_m;
      } else if (rtb_Equal6_o) {
        rtb_signal6 = localB->In5_o;
      } else if (rtb_Equal7_g) {
        rtb_signal6 = localB->In5_h;
      } else {
        rtb_signal6 = localB->In5_md;
      }

      if (rtb_Equal3_n) {
        rtb_signal7 = localB->In6;
      } else if (rtb_Equal4_gf) {
        rtb_signal7 = localB->In6_m;
      } else if (rtb_Equal5_jt) {
        rtb_signal7 = localB->In6_n;
      } else if (rtb_Equal6_o) {
        rtb_signal7 = localB->In6_l;
      } else if (rtb_Equal7_g) {
        rtb_signal7 = localB->In6_d;
      } else {
        rtb_signal7 = localB->In6_hx;
      }

      if (rtb_Equal3_n) {
        rtb_signal8 = localB->In7;
      } else if (rtb_Equal4_gf) {
        rtb_signal8 = localB->In7_mm;
      } else if (rtb_Equal5_jt) {
        rtb_signal8 = localB->In7_l;
      } else if (rtb_Equal6_o) {
        rtb_signal8 = localB->In7_f;
      } else if (rtb_Equal7_g) {
        rtb_signal8 = localB->In7_bt;
      } else {
        rtb_signal8 = localB->In7_k;
      }

      if (rtb_Equal3_n) {
        rtb_signal9 = localB->In8;
      } else if (rtb_Equal4_gf) {
        rtb_signal9 = localB->In8_e;
      } else if (rtb_Equal5_jt) {
        rtb_signal9 = localB->In8_aa;
      } else if (rtb_Equal6_o) {
        rtb_signal9 = localB->In8_kx;
      } else if (rtb_Equal7_g) {
        rtb_signal9 = localB->In8_ku;
      } else {
        rtb_signal9 = localB->In8_l;
      }
    }
  }

  /* End of Switch: '<S39>/Switch' */

  /* Outputs for Enabled SubSystem: '<S26>/Buffer ready' incorporates:
   *  EnablePort: '<S37>/Enable'
   */
  /* Logic: '<S26>/AND2' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S26>/Constant7'
   *  RelationalOperator: '<S26>/Equal3'
   *  RelationalOperator: '<S26>/Equal6'
   */
  if ((*rtd_Rx_State_CAN1 == 1.0) && (0.0 == rtb_signal1_jr)) {
    /* DataStoreWrite: '<S37>/Data Store Write' incorporates:
     *  Constant: '<S37>/New_Msg'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)2U);

    /* DataStoreWrite: '<S37>/Data Store Write1' incorporates:
     *  Constant: '<S37>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S26>/AND2' */
  /* End of Outputs for SubSystem: '<S26>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S26>/Update message buffers' incorporates:
   *  EnablePort: '<S40>/Enable'
   */
  /* Logic: '<S26>/AND3' incorporates:
   *  Constant: '<S26>/Constant4'
   *  Constant: '<S26>/Constant5'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S40>/Constant2'
   *  Constant: '<S40>/SET'
   *  Logic: '<S40>/AND'
   *  RelationalOperator: '<S26>/Equal4'
   *  RelationalOperator: '<S26>/Equal7'
   *  RelationalOperator: '<S40>/Equal'
   */
  if ((*rtd_Rx_State_CAN1 == 2.0) && (rtb_signal1_jr >= 1.0)) {
    /* DataStoreWrite: '<S40>/Data Store Write1' */
    rtd_Msg_Rx_CAN1->Buffer_1 = rtb_signal2_n;
    rtd_Msg_Rx_CAN1->Buffer_2 = rtb_signal3;
    rtd_Msg_Rx_CAN1->Buffer_3 = rtb_signal4;
    rtd_Msg_Rx_CAN1->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN1->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN1->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN1->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN1->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S40>/Data Store Write' incorporates:
     *  Constant: '<S40>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S40>/Data Store Write2' incorporates:
     *  Constant: '<S40>/SET'
     */
    *rtd_New_Msg_Ready_CAN1 = true;

    /* DataStoreWrite: '<S40>/Data Store Write5' incorporates:
     *  Constant: '<S40>/Idle_State'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)3U);

    /* DataStoreRead: '<S40>/Local_Time' */
    Rx_msg_ticks_CAN1 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S40>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN1 = Rx_msg_ticks_CAN1;

    /* DataTypeConversion: '<S40>/Cast To Double' */
    Rx_temporal_msg_CAN1 = rtb_signal2_n;

    /* Outputs for Enabled SubSystem: '<S40>/Logic Analyzer - COMM delay measurement' incorporates:
     *  EnablePort: '<S68>/Enable'
     */
    if ((1.0 != 0.0) && true && (*rtd_RxID_CAN1 == 1.0)) {
      /* DataStoreWrite: '<S68>/Data Store Write2' incorporates:
       *  Constant: '<S68>/Constant2'
       */
      *rtd_Toggle_Pin_D12 = 1.0;
    }

    /* End of Outputs for SubSystem: '<S40>/Logic Analyzer - COMM delay measurement' */
  }

  /* End of Logic: '<S26>/AND3' */
  /* End of Outputs for SubSystem: '<S26>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S26>/Prepare buffer' incorporates:
   *  EnablePort: '<S38>/Enable'
   */
  /* RelationalOperator: '<S26>/Equal5' incorporates:
   *  Constant: '<S26>/Constant6'
   */
  if (*rtd_Rx_State_CAN1 == 0.0) {
    /* DataStoreWrite: '<S38>/Data Store Write' incorporates:
     *  Constant: '<S38>/Constant1'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)1U);

    /* DataStoreWrite: '<S38>/Data Store Write1' incorporates:
     *  Constant: '<S38>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S26>/Equal5' */
  /* End of Outputs for SubSystem: '<S26>/Prepare buffer' */
}

/* Disable for function-call system: '<S10>/CAN2 Recieve' */
void CAN2Recieve_Disable(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S73>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for Outport: '<S80>/CAN_new' */
    localB->SFunction_o1_d = 0;

    /* Disable for Outport: '<S80>/Out2' */
    localB->In1_b = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out3' */
    localB->In2_c = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out4' */
    localB->In3_n = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out5' */
    localB->In4_m = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out6' */
    localB->In5_k = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out7' */
    localB->In6_l = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out8' */
    localB->In7_b = ((uint8_T)0U);

    /* Disable for Outport: '<S80>/Out9' */
    localB->In8_k = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for Outport: '<S81>/CAN_new' */
    localB->SFunction_o1_m = 0;

    /* Disable for Outport: '<S81>/Out2' */
    localB->In1_m = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out3' */
    localB->In2_j = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out4' */
    localB->In3_d = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out5' */
    localB->In4_n = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out6' */
    localB->In5_i = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out7' */
    localB->In6_n = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out8' */
    localB->In7_e = ((uint8_T)0U);

    /* Disable for Outport: '<S81>/Out9' */
    localB->In8_i = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for Outport: '<S82>/CAN_new' */
    localB->SFunction_o1_c = 0;

    /* Disable for Outport: '<S82>/Out2' */
    localB->In1_l = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out3' */
    localB->In2_i = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out4' */
    localB->In3_l = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out5' */
    localB->In4_e = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out6' */
    localB->In5_c = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out7' */
    localB->In6_g = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out8' */
    localB->In7_j = ((uint8_T)0U);

    /* Disable for Outport: '<S82>/Out9' */
    localB->In8_p = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for Outport: '<S83>/CAN_new' */
    localB->SFunction_o1 = 0;

    /* Disable for Outport: '<S83>/Out2' */
    localB->In1 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out3' */
    localB->In2 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out4' */
    localB->In3 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out5' */
    localB->In4 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out6' */
    localB->In5 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out7' */
    localB->In6 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out8' */
    localB->In7 = ((uint8_T)0U);

    /* Disable for Outport: '<S83>/Out9' */
    localB->In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/SetValues_ID_CAN' */
  if (localDW->SetValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S79>/CAN_new' */
    localB->SFunction_o1_e = 0;

    /* Disable for Outport: '<S79>/Out2' */
    localB->In1_mc = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out3' */
    localB->In2_i4 = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out4' */
    localB->In3_m = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out5' */
    localB->In4_f = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out6' */
    localB->In5_l = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out7' */
    localB->In6_o = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out8' */
    localB->In7_eu = ((uint8_T)0U);

    /* Disable for Outport: '<S79>/Out9' */
    localB->In8_c = ((uint8_T)0U);
    localDW->SetValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/SetValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/SensorValues_ID_CAN' */
  if (localDW->SensorValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S78>/CAN_new' */
    localB->SFunction_o1_mp = 0;

    /* Disable for Outport: '<S78>/Out2' */
    localB->In1_n = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out3' */
    localB->In2_ie = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out4' */
    localB->In3_p = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out5' */
    localB->In4_c = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out6' */
    localB->In5_kx = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out7' */
    localB->In6_f = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out8' */
    localB->In7_d = ((uint8_T)0U);

    /* Disable for Outport: '<S78>/Out9' */
    localB->In8_j = ((uint8_T)0U);
    localDW->SensorValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/SensorValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/OutControl1_ID_CAN' */
  if (localDW->OutControl1_ID_CAN_MODE) {
    /* Disable for Outport: '<S75>/CAN_new' */
    localB->SFunction_o1_f = 0;

    /* Disable for Outport: '<S75>/Out2' */
    localB->In1_b4 = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out3' */
    localB->In2_it = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out4' */
    localB->In3_c = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out5' */
    localB->In4_p = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out6' */
    localB->In5_j = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out7' */
    localB->In6_c = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out8' */
    localB->In7_f = ((uint8_T)0U);

    /* Disable for Outport: '<S75>/Out9' */
    localB->In8_kt = ((uint8_T)0U);
    localDW->OutControl1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/OutControl1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/OutControl2_ID_CAN' */
  if (localDW->OutControl2_ID_CAN_MODE) {
    /* Disable for Outport: '<S76>/CAN_new' */
    localB->SFunction_o1_ew = 0;

    /* Disable for Outport: '<S76>/Out2' */
    localB->In1_j = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out3' */
    localB->In2_a = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out4' */
    localB->In3_n2 = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out5' */
    localB->In4_k = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out6' */
    localB->In5_p = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out7' */
    localB->In6_ht = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out8' */
    localB->In7_dx = ((uint8_T)0U);

    /* Disable for Outport: '<S76>/Out9' */
    localB->In8_l = ((uint8_T)0U);
    localDW->OutControl2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/OutControl2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S73>/OutEmulator_ID_CAN' */
  if (localDW->OutEmulator_ID_CAN_MODE) {
    /* Disable for Outport: '<S77>/CAN_new' */
    localB->SFunction_o1_c5 = 0;

    /* Disable for Outport: '<S77>/Out2' */
    localB->In1_f = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out3' */
    localB->In2_h = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out4' */
    localB->In3_o = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out5' */
    localB->In4_d = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out6' */
    localB->In5_b = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out7' */
    localB->In6_h = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out8' */
    localB->In7_bb = ((uint8_T)0U);

    /* Disable for Outport: '<S77>/Out9' */
    localB->In8_p1 = ((uint8_T)0U);
    localDW->OutEmulator_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S73>/OutEmulator_ID_CAN' */
}

/* Start for function-call system: '<S10>/CAN2 Recieve' */
void CAN2Recieve_Start(void)
{
  /* Start for Enabled SubSystem: '<S73>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S94>/S-Function' incorporates:
   *  Constant: '<S80>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 1U);

  /* End of Start for SubSystem: '<S73>/Sync_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S96>/S-Function' incorporates:
   *  Constant: '<S81>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 11U);

  /* End of Start for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S98>/S-Function' incorporates:
   *  Constant: '<S82>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 12U);

  /* End of Start for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S100>/S-Function' incorporates:
   *  Constant: '<S83>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 13U);

  /* End of Start for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/SetValues_ID_CAN' */

  /* Start for M-S-Function: '<S92>/S-Function' incorporates:
   *  Constant: '<S79>/Constant4'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 21U);

  /* End of Start for SubSystem: '<S73>/SetValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/SensorValues_ID_CAN' */

  /* Start for M-S-Function: '<S90>/S-Function' incorporates:
   *  Constant: '<S78>/Constant5'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 22U);

  /* End of Start for SubSystem: '<S73>/SensorValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/OutControl1_ID_CAN' */

  /* Start for M-S-Function: '<S84>/S-Function' incorporates:
   *  Constant: '<S75>/Constant6'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 23U);

  /* End of Start for SubSystem: '<S73>/OutControl1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/OutControl2_ID_CAN' */

  /* Start for M-S-Function: '<S86>/S-Function' incorporates:
   *  Constant: '<S76>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 24U);

  /* End of Start for SubSystem: '<S73>/OutControl2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S73>/OutEmulator_ID_CAN' */

  /* Start for M-S-Function: '<S88>/S-Function' incorporates:
   *  Constant: '<S77>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 25U);

  /* End of Start for SubSystem: '<S73>/OutEmulator_ID_CAN' */
}

/* Output and update for function-call system: '<S10>/CAN2 Recieve' */
void CAN2Recieve(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW, uint16_T
                 *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
                 *rtd_Msg_Rx_Ticks_CAN2, boolean_T *rtd_New_Msg_Ready_CAN2,
                 uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN2, boolean_T *
                 rtd_Toggle_Pin_A0, real_T *rtd_Toggle_Pin_D8)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_i;
  uint8_T rtb_SFunction_o3_gj;
  uint8_T rtb_SFunction_o4_nu;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_hh;
  uint8_T rtb_SFunction_o7_ju;
  uint8_T rtb_SFunction_o8_f;
  uint8_T rtb_SFunction_o9_a;
  uint8_T rtb_SFunction_o2_h4;
  uint8_T rtb_SFunction_o3_n;
  uint8_T rtb_SFunction_o4_gz;
  uint8_T rtb_SFunction_o5_a;
  uint8_T rtb_SFunction_o6_ic;
  uint8_T rtb_SFunction_o7_np;
  uint8_T rtb_SFunction_o8_a;
  uint8_T rtb_SFunction_o9_l;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_g3;
  uint8_T rtb_SFunction_o4_mc;
  uint8_T rtb_SFunction_o5_o4;
  uint8_T rtb_SFunction_o6_a;
  uint8_T rtb_SFunction_o7_oi;
  uint8_T rtb_SFunction_o8_ne;
  uint8_T rtb_SFunction_o9_i;
  uint8_T rtb_SFunction_o2_m0;
  uint8_T rtb_SFunction_o3_h2;
  uint8_T rtb_SFunction_o4_d;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_jy;
  uint8_T rtb_SFunction_o7_hv;
  uint8_T rtb_SFunction_o8_ky;
  uint8_T rtb_SFunction_o9_g;
  uint8_T rtb_SFunction_o2_ho;
  uint8_T rtb_SFunction_o3_e;
  uint8_T rtb_SFunction_o4_ny;
  uint8_T rtb_SFunction_o5_pj;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_i;
  uint8_T rtb_SFunction_o9_j;
  uint8_T rtb_SFunction_o2_hx;
  uint8_T rtb_SFunction_o3_nv;
  uint8_T rtb_SFunction_o4_jg;
  uint8_T rtb_SFunction_o5_h;
  uint8_T rtb_SFunction_o6_aj;
  uint8_T rtb_SFunction_o7_b;
  uint8_T rtb_SFunction_o8_h;
  uint8_T rtb_SFunction_o9_e;
  uint8_T rtb_SFunction_o2_mb;
  uint8_T rtb_SFunction_o3_gq;
  uint8_T rtb_SFunction_o4_c;
  uint8_T rtb_SFunction_o5_cj;
  uint8_T rtb_SFunction_o6_jc;
  uint8_T rtb_SFunction_o7_nl;
  uint8_T rtb_SFunction_o8_m;
  uint8_T rtb_SFunction_o9_fl;
  uint8_T rtb_SFunction_o2_d;
  uint8_T rtb_SFunction_o3_gd;
  uint8_T rtb_SFunction_o4_eq;
  uint8_T rtb_SFunction_o5_n;
  uint8_T rtb_SFunction_o6_b;
  uint8_T rtb_SFunction_o7_hw;
  uint8_T rtb_SFunction_o8_hn;
  uint8_T rtb_SFunction_o9_i1;
  uint8_T rtb_SFunction_o2_ej;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_cg;
  uint8_T rtb_SFunction_o5_b;
  uint8_T rtb_SFunction_o6_o;
  uint8_T rtb_SFunction_o7_i;
  uint8_T rtb_SFunction_o8_nb;
  uint8_T rtb_SFunction_o9_ib;
  boolean_T rtb_Equal_l4;
  boolean_T rtb_Equal1_lj;
  boolean_T rtb_Equal2_b4;
  boolean_T rtb_Equal3_n;
  boolean_T rtb_Equal4_ar;
  boolean_T rtb_Equal5_on;
  boolean_T rtb_Equal6_a;
  boolean_T rtb_Equal7_j;
  int8_T rtb_signal1_f4;
  uint8_T rtb_signal2_kw;
  uint8_T rtb_signal3;
  uint8_T rtb_signal4;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;

  /* Sum: '<S28>/Sum1' incorporates:
   *  Constant: '<S28>/Constant3'
   *  DataStoreRead: '<S28>/Data Store Read1'
   */
  RxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S28>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN2_counter_s;

  /* DataStoreRead: '<S28>/Data Store Read' */
  RxID_CAN2_s = *rtd_RxID_CAN2;

  /* RelationalOperator: '<S73>/Equal' incorporates:
   *  Constant: '<S73>/Constant'
   */
  rtb_Equal_l4 = (RxID_CAN2_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S73>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S80>/Enable'
   */
  if (rtb_Equal_l4) {
    if (!localDW->Sync_ID_CAN_MODE) {
      localDW->Sync_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S94>/S-Function' incorporates:
     *  Constant: '<S80>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_d = CanIoGetMessage(1, 1U, NULL,
      &canRxData_1_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_d > 0) {
      /* read the data */
      rtb_SFunction_o2_m0 = canRxData_1_1U.uint8_T_info[0];
      rtb_SFunction_o3_h2 = canRxData_1_1U.uint8_T_info[1];
      rtb_SFunction_o4_d = canRxData_1_1U.uint8_T_info[2];
      rtb_SFunction_o5_f = canRxData_1_1U.uint8_T_info[3];
      rtb_SFunction_o6_jy = canRxData_1_1U.uint8_T_info[4];
      rtb_SFunction_o7_hv = canRxData_1_1U.uint8_T_info[5];
      rtb_SFunction_o8_ky = canRxData_1_1U.uint8_T_info[6];
      rtb_SFunction_o9_g = canRxData_1_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S94>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S95>/Enable'
     */
    if (localB->SFunction_o1_d > 0) {
      /* Inport: '<S95>/In1' */
      localB->In1_b = rtb_SFunction_o2_m0;

      /* Inport: '<S95>/In2' */
      localB->In2_c = rtb_SFunction_o3_h2;

      /* Inport: '<S95>/In3' */
      localB->In3_n = rtb_SFunction_o4_d;

      /* Inport: '<S95>/In4' */
      localB->In4_m = rtb_SFunction_o5_f;

      /* Inport: '<S95>/In5' */
      localB->In5_k = rtb_SFunction_o6_jy;

      /* Inport: '<S95>/In6' */
      localB->In6_l = rtb_SFunction_o7_hv;

      /* Inport: '<S95>/In7' */
      localB->In7_b = rtb_SFunction_o8_ky;

      /* Inport: '<S95>/In8' */
      localB->In8_k = rtb_SFunction_o9_g;
    }

    /* End of Outputs for SubSystem: '<S94>/Enabled Subsystem' */
  } else {
    if (localDW->Sync_ID_CAN_MODE) {
      /* Disable for Outport: '<S80>/CAN_new' */
      localB->SFunction_o1_d = 0;

      /* Disable for Outport: '<S80>/Out2' */
      localB->In1_b = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out3' */
      localB->In2_c = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out4' */
      localB->In3_n = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out5' */
      localB->In4_m = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out6' */
      localB->In5_k = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out7' */
      localB->In6_l = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out8' */
      localB->In7_b = ((uint8_T)0U);

      /* Disable for Outport: '<S80>/Out9' */
      localB->In8_k = ((uint8_T)0U);
      localDW->Sync_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/Sync_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal1' incorporates:
   *  Constant: '<S73>/Constant1'
   */
  rtb_Equal1_lj = (RxID_CAN2_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S81>/Enable'
   */
  if (rtb_Equal1_lj) {
    if (!localDW->Vote1_ID_CAN_MODE) {
      localDW->Vote1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S96>/S-Function' incorporates:
     *  Constant: '<S81>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(1, 11U, NULL,
      &canRxData_1_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_e = canRxData_1_11U.uint8_T_info[0];
      rtb_SFunction_o3_g3 = canRxData_1_11U.uint8_T_info[1];
      rtb_SFunction_o4_mc = canRxData_1_11U.uint8_T_info[2];
      rtb_SFunction_o5_o4 = canRxData_1_11U.uint8_T_info[3];
      rtb_SFunction_o6_a = canRxData_1_11U.uint8_T_info[4];
      rtb_SFunction_o7_oi = canRxData_1_11U.uint8_T_info[5];
      rtb_SFunction_o8_ne = canRxData_1_11U.uint8_T_info[6];
      rtb_SFunction_o9_i = canRxData_1_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S96>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S97>/Enable'
     */
    if (localB->SFunction_o1_m > 0) {
      /* Inport: '<S97>/In1' */
      localB->In1_m = rtb_SFunction_o2_e;

      /* Inport: '<S97>/In2' */
      localB->In2_j = rtb_SFunction_o3_g3;

      /* Inport: '<S97>/In3' */
      localB->In3_d = rtb_SFunction_o4_mc;

      /* Inport: '<S97>/In4' */
      localB->In4_n = rtb_SFunction_o5_o4;

      /* Inport: '<S97>/In5' */
      localB->In5_i = rtb_SFunction_o6_a;

      /* Inport: '<S97>/In6' */
      localB->In6_n = rtb_SFunction_o7_oi;

      /* Inport: '<S97>/In7' */
      localB->In7_e = rtb_SFunction_o8_ne;

      /* Inport: '<S97>/In8' */
      localB->In8_i = rtb_SFunction_o9_i;
    }

    /* End of Outputs for SubSystem: '<S96>/Enabled Subsystem' */
  } else {
    if (localDW->Vote1_ID_CAN_MODE) {
      /* Disable for Outport: '<S81>/CAN_new' */
      localB->SFunction_o1_m = 0;

      /* Disable for Outport: '<S81>/Out2' */
      localB->In1_m = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out3' */
      localB->In2_j = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out4' */
      localB->In3_d = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out5' */
      localB->In4_n = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out6' */
      localB->In5_i = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out7' */
      localB->In6_n = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out8' */
      localB->In7_e = ((uint8_T)0U);

      /* Disable for Outport: '<S81>/Out9' */
      localB->In8_i = ((uint8_T)0U);
      localDW->Vote1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal2' incorporates:
   *  Constant: '<S73>/Constant2'
   */
  rtb_Equal2_b4 = (RxID_CAN2_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S82>/Enable'
   */
  if (rtb_Equal2_b4) {
    if (!localDW->Vote2_ID_CAN_MODE) {
      localDW->Vote2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S98>/S-Function' incorporates:
     *  Constant: '<S82>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_c = CanIoGetMessage(1, 12U, NULL,
      &canRxData_1_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_c > 0) {
      /* read the data */
      rtb_SFunction_o2_h4 = canRxData_1_12U.uint8_T_info[0];
      rtb_SFunction_o3_n = canRxData_1_12U.uint8_T_info[1];
      rtb_SFunction_o4_gz = canRxData_1_12U.uint8_T_info[2];
      rtb_SFunction_o5_a = canRxData_1_12U.uint8_T_info[3];
      rtb_SFunction_o6_ic = canRxData_1_12U.uint8_T_info[4];
      rtb_SFunction_o7_np = canRxData_1_12U.uint8_T_info[5];
      rtb_SFunction_o8_a = canRxData_1_12U.uint8_T_info[6];
      rtb_SFunction_o9_l = canRxData_1_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S98>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S99>/Enable'
     */
    if (localB->SFunction_o1_c > 0) {
      /* Inport: '<S99>/In1' */
      localB->In1_l = rtb_SFunction_o2_h4;

      /* Inport: '<S99>/In2' */
      localB->In2_i = rtb_SFunction_o3_n;

      /* Inport: '<S99>/In3' */
      localB->In3_l = rtb_SFunction_o4_gz;

      /* Inport: '<S99>/In4' */
      localB->In4_e = rtb_SFunction_o5_a;

      /* Inport: '<S99>/In5' */
      localB->In5_c = rtb_SFunction_o6_ic;

      /* Inport: '<S99>/In6' */
      localB->In6_g = rtb_SFunction_o7_np;

      /* Inport: '<S99>/In7' */
      localB->In7_j = rtb_SFunction_o8_a;

      /* Inport: '<S99>/In8' */
      localB->In8_p = rtb_SFunction_o9_l;
    }

    /* End of Outputs for SubSystem: '<S98>/Enabled Subsystem' */
  } else {
    if (localDW->Vote2_ID_CAN_MODE) {
      /* Disable for Outport: '<S82>/CAN_new' */
      localB->SFunction_o1_c = 0;

      /* Disable for Outport: '<S82>/Out2' */
      localB->In1_l = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out3' */
      localB->In2_i = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out4' */
      localB->In3_l = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out5' */
      localB->In4_e = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out6' */
      localB->In5_c = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out7' */
      localB->In6_g = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out8' */
      localB->In7_j = ((uint8_T)0U);

      /* Disable for Outport: '<S82>/Out9' */
      localB->In8_p = ((uint8_T)0U);
      localDW->Vote2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal3' incorporates:
   *  Constant: '<S73>/Constant3'
   */
  rtb_Equal3_n = (RxID_CAN2_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S73>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S83>/Enable'
   */
  if (rtb_Equal3_n) {
    if (!localDW->Vote3_ID_CAN_MODE) {
      localDW->Vote3_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S100>/S-Function' incorporates:
     *  Constant: '<S83>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(1, 13U, NULL,
      &canRxData_1_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2_i = canRxData_1_13U.uint8_T_info[0];
      rtb_SFunction_o3_gj = canRxData_1_13U.uint8_T_info[1];
      rtb_SFunction_o4_nu = canRxData_1_13U.uint8_T_info[2];
      rtb_SFunction_o5_e = canRxData_1_13U.uint8_T_info[3];
      rtb_SFunction_o6_hh = canRxData_1_13U.uint8_T_info[4];
      rtb_SFunction_o7_ju = canRxData_1_13U.uint8_T_info[5];
      rtb_SFunction_o8_f = canRxData_1_13U.uint8_T_info[6];
      rtb_SFunction_o9_a = canRxData_1_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S100>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S101>/Enable'
     */
    if (localB->SFunction_o1 > 0) {
      /* Inport: '<S101>/In1' */
      localB->In1 = rtb_SFunction_o2_i;

      /* Inport: '<S101>/In2' */
      localB->In2 = rtb_SFunction_o3_gj;

      /* Inport: '<S101>/In3' */
      localB->In3 = rtb_SFunction_o4_nu;

      /* Inport: '<S101>/In4' */
      localB->In4 = rtb_SFunction_o5_e;

      /* Inport: '<S101>/In5' */
      localB->In5 = rtb_SFunction_o6_hh;

      /* Inport: '<S101>/In6' */
      localB->In6 = rtb_SFunction_o7_ju;

      /* Inport: '<S101>/In7' */
      localB->In7 = rtb_SFunction_o8_f;

      /* Inport: '<S101>/In8' */
      localB->In8 = rtb_SFunction_o9_a;
    }

    /* End of Outputs for SubSystem: '<S100>/Enabled Subsystem' */
  } else {
    if (localDW->Vote3_ID_CAN_MODE) {
      /* Disable for Outport: '<S83>/CAN_new' */
      localB->SFunction_o1 = 0;

      /* Disable for Outport: '<S83>/Out2' */
      localB->In1 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out3' */
      localB->In2 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out4' */
      localB->In3 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out5' */
      localB->In4 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out6' */
      localB->In5 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out7' */
      localB->In6 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out8' */
      localB->In7 = ((uint8_T)0U);

      /* Disable for Outport: '<S83>/Out9' */
      localB->In8 = ((uint8_T)0U);
      localDW->Vote3_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal4' incorporates:
   *  Constant: '<S73>/Constant4'
   */
  rtb_Equal4_ar = (RxID_CAN2_s == 21.0);

  /* Outputs for Enabled SubSystem: '<S73>/SetValues_ID_CAN' incorporates:
   *  EnablePort: '<S79>/Enable'
   */
  if (rtb_Equal4_ar) {
    if (!localDW->SetValues_ID_CAN_MODE) {
      localDW->SetValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S92>/S-Function' incorporates:
     *  Constant: '<S79>/Constant4'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(1, 21U, NULL,
      &canRxData_1_21U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_ho = canRxData_1_21U.uint8_T_info[0];
      rtb_SFunction_o3_e = canRxData_1_21U.uint8_T_info[1];
      rtb_SFunction_o4_ny = canRxData_1_21U.uint8_T_info[2];
      rtb_SFunction_o5_pj = canRxData_1_21U.uint8_T_info[3];
      rtb_SFunction_o6_k = canRxData_1_21U.uint8_T_info[4];
      rtb_SFunction_o7_l = canRxData_1_21U.uint8_T_info[5];
      rtb_SFunction_o8_i = canRxData_1_21U.uint8_T_info[6];
      rtb_SFunction_o9_j = canRxData_1_21U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S92>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S93>/Enable'
     */
    if (localB->SFunction_o1_e > 0) {
      /* Inport: '<S93>/In1' */
      localB->In1_mc = rtb_SFunction_o2_ho;

      /* Inport: '<S93>/In2' */
      localB->In2_i4 = rtb_SFunction_o3_e;

      /* Inport: '<S93>/In3' */
      localB->In3_m = rtb_SFunction_o4_ny;

      /* Inport: '<S93>/In4' */
      localB->In4_f = rtb_SFunction_o5_pj;

      /* Inport: '<S93>/In5' */
      localB->In5_l = rtb_SFunction_o6_k;

      /* Inport: '<S93>/In6' */
      localB->In6_o = rtb_SFunction_o7_l;

      /* Inport: '<S93>/In7' */
      localB->In7_eu = rtb_SFunction_o8_i;

      /* Inport: '<S93>/In8' */
      localB->In8_c = rtb_SFunction_o9_j;
    }

    /* End of Outputs for SubSystem: '<S92>/Enabled Subsystem' */
  } else {
    if (localDW->SetValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S79>/CAN_new' */
      localB->SFunction_o1_e = 0;

      /* Disable for Outport: '<S79>/Out2' */
      localB->In1_mc = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out3' */
      localB->In2_i4 = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out4' */
      localB->In3_m = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out5' */
      localB->In4_f = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out6' */
      localB->In5_l = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out7' */
      localB->In6_o = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out8' */
      localB->In7_eu = ((uint8_T)0U);

      /* Disable for Outport: '<S79>/Out9' */
      localB->In8_c = ((uint8_T)0U);
      localDW->SetValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/SetValues_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal5' incorporates:
   *  Constant: '<S73>/Constant5'
   */
  rtb_Equal5_on = (RxID_CAN2_s == 22.0);

  /* Outputs for Enabled SubSystem: '<S73>/SensorValues_ID_CAN' incorporates:
   *  EnablePort: '<S78>/Enable'
   */
  if (rtb_Equal5_on) {
    if (!localDW->SensorValues_ID_CAN_MODE) {
      localDW->SensorValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S90>/S-Function' incorporates:
     *  Constant: '<S78>/Constant5'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_mp = CanIoGetMessage(1, 22U, NULL,
      &canRxData_1_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_mp > 0) {
      /* read the data */
      rtb_SFunction_o2_hx = canRxData_1_22U.uint8_T_info[0];
      rtb_SFunction_o3_nv = canRxData_1_22U.uint8_T_info[1];
      rtb_SFunction_o4_jg = canRxData_1_22U.uint8_T_info[2];
      rtb_SFunction_o5_h = canRxData_1_22U.uint8_T_info[3];
      rtb_SFunction_o6_aj = canRxData_1_22U.uint8_T_info[4];
      rtb_SFunction_o7_b = canRxData_1_22U.uint8_T_info[5];
      rtb_SFunction_o8_h = canRxData_1_22U.uint8_T_info[6];
      rtb_SFunction_o9_e = canRxData_1_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S90>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S91>/Enable'
     */
    if (localB->SFunction_o1_mp > 0) {
      /* Inport: '<S91>/In1' */
      localB->In1_n = rtb_SFunction_o2_hx;

      /* Inport: '<S91>/In2' */
      localB->In2_ie = rtb_SFunction_o3_nv;

      /* Inport: '<S91>/In3' */
      localB->In3_p = rtb_SFunction_o4_jg;

      /* Inport: '<S91>/In4' */
      localB->In4_c = rtb_SFunction_o5_h;

      /* Inport: '<S91>/In5' */
      localB->In5_kx = rtb_SFunction_o6_aj;

      /* Inport: '<S91>/In6' */
      localB->In6_f = rtb_SFunction_o7_b;

      /* Inport: '<S91>/In7' */
      localB->In7_d = rtb_SFunction_o8_h;

      /* Inport: '<S91>/In8' */
      localB->In8_j = rtb_SFunction_o9_e;
    }

    /* End of Outputs for SubSystem: '<S90>/Enabled Subsystem' */
  } else {
    if (localDW->SensorValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S78>/CAN_new' */
      localB->SFunction_o1_mp = 0;

      /* Disable for Outport: '<S78>/Out2' */
      localB->In1_n = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out3' */
      localB->In2_ie = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out4' */
      localB->In3_p = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out5' */
      localB->In4_c = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out6' */
      localB->In5_kx = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out7' */
      localB->In6_f = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out8' */
      localB->In7_d = ((uint8_T)0U);

      /* Disable for Outport: '<S78>/Out9' */
      localB->In8_j = ((uint8_T)0U);
      localDW->SensorValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/SensorValues_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal6' incorporates:
   *  Constant: '<S73>/Constant6'
   */
  rtb_Equal6_a = (RxID_CAN2_s == 23.0);

  /* Outputs for Enabled SubSystem: '<S73>/OutControl1_ID_CAN' incorporates:
   *  EnablePort: '<S75>/Enable'
   */
  if (rtb_Equal6_a) {
    if (!localDW->OutControl1_ID_CAN_MODE) {
      localDW->OutControl1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S84>/S-Function' incorporates:
     *  Constant: '<S75>/Constant6'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_f = CanIoGetMessage(1, 23U, NULL,
      &canRxData_1_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_f > 0) {
      /* read the data */
      rtb_SFunction_o2_ej = canRxData_1_23U.uint8_T_info[0];
      rtb_SFunction_o3_p = canRxData_1_23U.uint8_T_info[1];
      rtb_SFunction_o4_cg = canRxData_1_23U.uint8_T_info[2];
      rtb_SFunction_o5_b = canRxData_1_23U.uint8_T_info[3];
      rtb_SFunction_o6_o = canRxData_1_23U.uint8_T_info[4];
      rtb_SFunction_o7_i = canRxData_1_23U.uint8_T_info[5];
      rtb_SFunction_o8_nb = canRxData_1_23U.uint8_T_info[6];
      rtb_SFunction_o9_ib = canRxData_1_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S84>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S85>/Enable'
     */
    if (localB->SFunction_o1_f > 0) {
      /* Inport: '<S85>/In1' */
      localB->In1_b4 = rtb_SFunction_o2_ej;

      /* Inport: '<S85>/In2' */
      localB->In2_it = rtb_SFunction_o3_p;

      /* Inport: '<S85>/In3' */
      localB->In3_c = rtb_SFunction_o4_cg;

      /* Inport: '<S85>/In4' */
      localB->In4_p = rtb_SFunction_o5_b;

      /* Inport: '<S85>/In5' */
      localB->In5_j = rtb_SFunction_o6_o;

      /* Inport: '<S85>/In6' */
      localB->In6_c = rtb_SFunction_o7_i;

      /* Inport: '<S85>/In7' */
      localB->In7_f = rtb_SFunction_o8_nb;

      /* Inport: '<S85>/In8' */
      localB->In8_kt = rtb_SFunction_o9_ib;
    }

    /* End of Outputs for SubSystem: '<S84>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl1_ID_CAN_MODE) {
      /* Disable for Outport: '<S75>/CAN_new' */
      localB->SFunction_o1_f = 0;

      /* Disable for Outport: '<S75>/Out2' */
      localB->In1_b4 = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out3' */
      localB->In2_it = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out4' */
      localB->In3_c = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out5' */
      localB->In4_p = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out6' */
      localB->In5_j = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out7' */
      localB->In6_c = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out8' */
      localB->In7_f = ((uint8_T)0U);

      /* Disable for Outport: '<S75>/Out9' */
      localB->In8_kt = ((uint8_T)0U);
      localDW->OutControl1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/OutControl1_ID_CAN' */

  /* RelationalOperator: '<S73>/Equal7' incorporates:
   *  Constant: '<S73>/Constant7'
   */
  rtb_Equal7_j = (RxID_CAN2_s == 24.0);

  /* Outputs for Enabled SubSystem: '<S73>/OutControl2_ID_CAN' incorporates:
   *  EnablePort: '<S76>/Enable'
   */
  if (rtb_Equal7_j) {
    if (!localDW->OutControl2_ID_CAN_MODE) {
      localDW->OutControl2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S86>/S-Function' incorporates:
     *  Constant: '<S76>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_ew = CanIoGetMessage(1, 24U, NULL,
      &canRxData_1_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_ew > 0) {
      /* read the data */
      rtb_SFunction_o2_d = canRxData_1_24U.uint8_T_info[0];
      rtb_SFunction_o3_gd = canRxData_1_24U.uint8_T_info[1];
      rtb_SFunction_o4_eq = canRxData_1_24U.uint8_T_info[2];
      rtb_SFunction_o5_n = canRxData_1_24U.uint8_T_info[3];
      rtb_SFunction_o6_b = canRxData_1_24U.uint8_T_info[4];
      rtb_SFunction_o7_hw = canRxData_1_24U.uint8_T_info[5];
      rtb_SFunction_o8_hn = canRxData_1_24U.uint8_T_info[6];
      rtb_SFunction_o9_i1 = canRxData_1_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S86>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S87>/Enable'
     */
    if (localB->SFunction_o1_ew > 0) {
      /* Inport: '<S87>/In1' */
      localB->In1_j = rtb_SFunction_o2_d;

      /* Inport: '<S87>/In2' */
      localB->In2_a = rtb_SFunction_o3_gd;

      /* Inport: '<S87>/In3' */
      localB->In3_n2 = rtb_SFunction_o4_eq;

      /* Inport: '<S87>/In4' */
      localB->In4_k = rtb_SFunction_o5_n;

      /* Inport: '<S87>/In5' */
      localB->In5_p = rtb_SFunction_o6_b;

      /* Inport: '<S87>/In6' */
      localB->In6_ht = rtb_SFunction_o7_hw;

      /* Inport: '<S87>/In7' */
      localB->In7_dx = rtb_SFunction_o8_hn;

      /* Inport: '<S87>/In8' */
      localB->In8_l = rtb_SFunction_o9_i1;
    }

    /* End of Outputs for SubSystem: '<S86>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl2_ID_CAN_MODE) {
      /* Disable for Outport: '<S76>/CAN_new' */
      localB->SFunction_o1_ew = 0;

      /* Disable for Outport: '<S76>/Out2' */
      localB->In1_j = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out3' */
      localB->In2_a = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out4' */
      localB->In3_n2 = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out5' */
      localB->In4_k = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out6' */
      localB->In5_p = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out7' */
      localB->In6_ht = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out8' */
      localB->In7_dx = ((uint8_T)0U);

      /* Disable for Outport: '<S76>/Out9' */
      localB->In8_l = ((uint8_T)0U);
      localDW->OutControl2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S73>/OutControl2_ID_CAN' */

  /* Outputs for Enabled SubSystem: '<S73>/OutEmulator_ID_CAN' incorporates:
   *  EnablePort: '<S77>/Enable'
   */
  /* RelationalOperator: '<S73>/Equal8' incorporates:
   *  Constant: '<S73>/Constant8'
   *  Inport: '<S89>/In1'
   *  Inport: '<S89>/In2'
   *  Inport: '<S89>/In3'
   *  Inport: '<S89>/In4'
   *  Inport: '<S89>/In5'
   *  Inport: '<S89>/In6'
   *  Inport: '<S89>/In7'
   *  Inport: '<S89>/In8'
   */
  if (RxID_CAN2_s == 25.0) {
    if (!localDW->OutEmulator_ID_CAN_MODE) {
      localDW->OutEmulator_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S88>/S-Function' incorporates:
     *  Constant: '<S77>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_c5 = CanIoGetMessage(1, 25U, NULL,
      &canRxData_1_25U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_c5 > 0) {
      /* read the data */
      rtb_SFunction_o2_mb = canRxData_1_25U.uint8_T_info[0];
      rtb_SFunction_o3_gq = canRxData_1_25U.uint8_T_info[1];
      rtb_SFunction_o4_c = canRxData_1_25U.uint8_T_info[2];
      rtb_SFunction_o5_cj = canRxData_1_25U.uint8_T_info[3];
      rtb_SFunction_o6_jc = canRxData_1_25U.uint8_T_info[4];
      rtb_SFunction_o7_nl = canRxData_1_25U.uint8_T_info[5];
      rtb_SFunction_o8_m = canRxData_1_25U.uint8_T_info[6];
      rtb_SFunction_o9_fl = canRxData_1_25U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S88>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S89>/Enable'
     */
    if (localB->SFunction_o1_c5 > 0) {
      localB->In1_f = rtb_SFunction_o2_mb;
      localB->In2_h = rtb_SFunction_o3_gq;
      localB->In3_o = rtb_SFunction_o4_c;
      localB->In4_d = rtb_SFunction_o5_cj;
      localB->In5_b = rtb_SFunction_o6_jc;
      localB->In6_h = rtb_SFunction_o7_nl;
      localB->In7_bb = rtb_SFunction_o8_m;
      localB->In8_p1 = rtb_SFunction_o9_fl;
    }

    /* End of Outputs for SubSystem: '<S88>/Enabled Subsystem' */
  } else {
    if (localDW->OutEmulator_ID_CAN_MODE) {
      /* Disable for Outport: '<S77>/CAN_new' */
      localB->SFunction_o1_c5 = 0;

      /* Disable for Outport: '<S77>/Out2' */
      localB->In1_f = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out3' */
      localB->In2_h = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out4' */
      localB->In3_o = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out5' */
      localB->In4_d = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out6' */
      localB->In5_b = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out7' */
      localB->In6_h = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out8' */
      localB->In7_bb = ((uint8_T)0U);

      /* Disable for Outport: '<S77>/Out9' */
      localB->In8_p1 = ((uint8_T)0U);
      localDW->OutEmulator_ID_CAN_MODE = false;
    }
  }

  /* End of RelationalOperator: '<S73>/Equal8' */
  /* End of Outputs for SubSystem: '<S73>/OutEmulator_ID_CAN' */

  /* Switch: '<S73>/Switch' incorporates:
   *  Switch: '<S73>/Switch1'
   *  Switch: '<S73>/Switch2'
   *  Switch: '<S73>/Switch3'
   *  Switch: '<S73>/Switch4'
   *  Switch: '<S73>/Switch5'
   *  Switch: '<S73>/Switch6'
   *  Switch: '<S73>/Switch7'
   */
  if (rtb_Equal_l4) {
    rtb_signal1_f4 = localB->SFunction_o1_d;
    rtb_signal2_kw = localB->In1_b;
    rtb_signal3 = localB->In2_c;
    rtb_signal4 = localB->In3_n;
    rtb_signal5 = localB->In4_m;
    rtb_signal6 = localB->In5_k;
    rtb_signal7 = localB->In6_l;
    rtb_signal8 = localB->In7_b;
    rtb_signal9 = localB->In8_k;
  } else {
    if (rtb_Equal1_lj) {
      /* Switch: '<S73>/Switch1' */
      rtb_signal1_f4 = localB->SFunction_o1_m;
    } else if (rtb_Equal2_b4) {
      /* Switch: '<S73>/Switch2' incorporates:
       *  Switch: '<S73>/Switch1'
       */
      rtb_signal1_f4 = localB->SFunction_o1_c;
    } else if (rtb_Equal3_n) {
      /* Switch: '<S73>/Switch3' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       */
      rtb_signal1_f4 = localB->SFunction_o1;
    } else if (rtb_Equal4_ar) {
      /* Switch: '<S73>/Switch4' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       */
      rtb_signal1_f4 = localB->SFunction_o1_e;
    } else if (rtb_Equal5_on) {
      /* Switch: '<S73>/Switch5' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       *  Switch: '<S73>/Switch4'
       */
      rtb_signal1_f4 = localB->SFunction_o1_mp;
    } else if (rtb_Equal6_a) {
      /* Switch: '<S73>/Switch6' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       *  Switch: '<S73>/Switch4'
       *  Switch: '<S73>/Switch5'
       */
      rtb_signal1_f4 = localB->SFunction_o1_f;
    } else if (rtb_Equal7_j) {
      /* Switch: '<S73>/Switch7' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       *  Switch: '<S73>/Switch4'
       *  Switch: '<S73>/Switch5'
       *  Switch: '<S73>/Switch6'
       */
      rtb_signal1_f4 = localB->SFunction_o1_ew;
    } else {
      /* Switch: '<S73>/Switch4' incorporates:
       *  Switch: '<S73>/Switch1'
       *  Switch: '<S73>/Switch2'
       *  Switch: '<S73>/Switch3'
       *  Switch: '<S73>/Switch5'
       *  Switch: '<S73>/Switch6'
       *  Switch: '<S73>/Switch7'
       */
      rtb_signal1_f4 = localB->SFunction_o1_c5;
    }

    /* Switch: '<S73>/Switch1' incorporates:
     *  Switch: '<S73>/Switch2'
     *  Switch: '<S73>/Switch3'
     *  Switch: '<S73>/Switch4'
     *  Switch: '<S73>/Switch5'
     *  Switch: '<S73>/Switch6'
     *  Switch: '<S73>/Switch7'
     */
    if (rtb_Equal1_lj) {
      rtb_signal2_kw = localB->In1_m;
      rtb_signal3 = localB->In2_j;
      rtb_signal4 = localB->In3_d;
      rtb_signal5 = localB->In4_n;
      rtb_signal6 = localB->In5_i;
      rtb_signal7 = localB->In6_n;
      rtb_signal8 = localB->In7_e;
      rtb_signal9 = localB->In8_i;
    } else if (rtb_Equal2_b4) {
      rtb_signal2_kw = localB->In1_l;
      rtb_signal3 = localB->In2_i;
      rtb_signal4 = localB->In3_l;
      rtb_signal5 = localB->In4_e;
      rtb_signal6 = localB->In5_c;
      rtb_signal7 = localB->In6_g;
      rtb_signal8 = localB->In7_j;
      rtb_signal9 = localB->In8_p;
    } else {
      if (rtb_Equal3_n) {
        rtb_signal2_kw = localB->In1;
      } else if (rtb_Equal4_ar) {
        rtb_signal2_kw = localB->In1_mc;
      } else if (rtb_Equal5_on) {
        rtb_signal2_kw = localB->In1_n;
      } else if (rtb_Equal6_a) {
        rtb_signal2_kw = localB->In1_b4;
      } else if (rtb_Equal7_j) {
        rtb_signal2_kw = localB->In1_j;
      } else {
        rtb_signal2_kw = localB->In1_f;
      }

      if (rtb_Equal3_n) {
        rtb_signal3 = localB->In2;
      } else if (rtb_Equal4_ar) {
        rtb_signal3 = localB->In2_i4;
      } else if (rtb_Equal5_on) {
        rtb_signal3 = localB->In2_ie;
      } else if (rtb_Equal6_a) {
        rtb_signal3 = localB->In2_it;
      } else if (rtb_Equal7_j) {
        rtb_signal3 = localB->In2_a;
      } else {
        rtb_signal3 = localB->In2_h;
      }

      if (rtb_Equal3_n) {
        rtb_signal4 = localB->In3;
      } else if (rtb_Equal4_ar) {
        rtb_signal4 = localB->In3_m;
      } else if (rtb_Equal5_on) {
        rtb_signal4 = localB->In3_p;
      } else if (rtb_Equal6_a) {
        rtb_signal4 = localB->In3_c;
      } else if (rtb_Equal7_j) {
        rtb_signal4 = localB->In3_n2;
      } else {
        rtb_signal4 = localB->In3_o;
      }

      if (rtb_Equal3_n) {
        rtb_signal5 = localB->In4;
      } else if (rtb_Equal4_ar) {
        rtb_signal5 = localB->In4_f;
      } else if (rtb_Equal5_on) {
        rtb_signal5 = localB->In4_c;
      } else if (rtb_Equal6_a) {
        rtb_signal5 = localB->In4_p;
      } else if (rtb_Equal7_j) {
        rtb_signal5 = localB->In4_k;
      } else {
        rtb_signal5 = localB->In4_d;
      }

      if (rtb_Equal3_n) {
        rtb_signal6 = localB->In5;
      } else if (rtb_Equal4_ar) {
        rtb_signal6 = localB->In5_l;
      } else if (rtb_Equal5_on) {
        rtb_signal6 = localB->In5_kx;
      } else if (rtb_Equal6_a) {
        rtb_signal6 = localB->In5_j;
      } else if (rtb_Equal7_j) {
        rtb_signal6 = localB->In5_p;
      } else {
        rtb_signal6 = localB->In5_b;
      }

      if (rtb_Equal3_n) {
        rtb_signal7 = localB->In6;
      } else if (rtb_Equal4_ar) {
        rtb_signal7 = localB->In6_o;
      } else if (rtb_Equal5_on) {
        rtb_signal7 = localB->In6_f;
      } else if (rtb_Equal6_a) {
        rtb_signal7 = localB->In6_c;
      } else if (rtb_Equal7_j) {
        rtb_signal7 = localB->In6_ht;
      } else {
        rtb_signal7 = localB->In6_h;
      }

      if (rtb_Equal3_n) {
        rtb_signal8 = localB->In7;
      } else if (rtb_Equal4_ar) {
        rtb_signal8 = localB->In7_eu;
      } else if (rtb_Equal5_on) {
        rtb_signal8 = localB->In7_d;
      } else if (rtb_Equal6_a) {
        rtb_signal8 = localB->In7_f;
      } else if (rtb_Equal7_j) {
        rtb_signal8 = localB->In7_dx;
      } else {
        rtb_signal8 = localB->In7_bb;
      }

      if (rtb_Equal3_n) {
        rtb_signal9 = localB->In8;
      } else if (rtb_Equal4_ar) {
        rtb_signal9 = localB->In8_c;
      } else if (rtb_Equal5_on) {
        rtb_signal9 = localB->In8_j;
      } else if (rtb_Equal6_a) {
        rtb_signal9 = localB->In8_kt;
      } else if (rtb_Equal7_j) {
        rtb_signal9 = localB->In8_l;
      } else {
        rtb_signal9 = localB->In8_p1;
      }
    }
  }

  /* End of Switch: '<S73>/Switch' */

  /* Outputs for Enabled SubSystem: '<S28>/Buffer ready' incorporates:
   *  EnablePort: '<S71>/Enable'
   */
  /* Logic: '<S28>/AND2' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S28>/Constant7'
   *  RelationalOperator: '<S28>/Equal3'
   *  RelationalOperator: '<S28>/Equal6'
   */
  if ((*rtd_Rx_State_CAN2 == 1.0) && (0.0 == rtb_signal1_f4)) {
    /* DataStoreWrite: '<S71>/Data Store Write' incorporates:
     *  Constant: '<S71>/New_Msg'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)2U);

    /* DataStoreWrite: '<S71>/Data Store Write1' incorporates:
     *  Constant: '<S71>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S28>/AND2' */
  /* End of Outputs for SubSystem: '<S28>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S28>/Update message buffers' incorporates:
   *  EnablePort: '<S74>/Enable'
   */
  /* Logic: '<S28>/AND3' incorporates:
   *  Constant: '<S28>/Constant4'
   *  Constant: '<S28>/Constant5'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S74>/Constant2'
   *  Constant: '<S74>/SET'
   *  Logic: '<S74>/AND'
   *  RelationalOperator: '<S28>/Equal4'
   *  RelationalOperator: '<S28>/Equal7'
   *  RelationalOperator: '<S74>/Equal'
   */
  if ((*rtd_Rx_State_CAN2 == 2.0) && (rtb_signal1_f4 >= 1.0)) {
    /* DataStoreWrite: '<S74>/Data Store Write1' */
    rtd_Msg_Rx_CAN2->Buffer_1 = rtb_signal2_kw;
    rtd_Msg_Rx_CAN2->Buffer_2 = rtb_signal3;
    rtd_Msg_Rx_CAN2->Buffer_3 = rtb_signal4;
    rtd_Msg_Rx_CAN2->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN2->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN2->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN2->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN2->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S74>/Data Store Write' incorporates:
     *  Constant: '<S74>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S74>/Data Store Write2' incorporates:
     *  Constant: '<S74>/SET'
     */
    *rtd_New_Msg_Ready_CAN2 = true;

    /* DataStoreWrite: '<S74>/Data Store Write5' incorporates:
     *  Constant: '<S74>/Idle_State'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)3U);

    /* DataStoreRead: '<S74>/Local_Time' */
    Rx_msg_ticks_CAN2 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S74>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN2 = Rx_msg_ticks_CAN2;

    /* DataTypeConversion: '<S74>/Cast To Double' */
    Rx_temporal_msg_CAN2 = rtb_signal2_kw;

    /* Outputs for Enabled SubSystem: '<S74>/Logic Analyzer - COMM delay measurement' incorporates:
     *  EnablePort: '<S102>/Enable'
     */
    if ((1.0 != 0.0) && true && (*rtd_RxID_CAN2 == 1.0)) {
      /* DataStoreWrite: '<S102>/Data Store Write2' incorporates:
       *  Constant: '<S102>/Constant2'
       */
      *rtd_Toggle_Pin_D8 = 1.0;
    }

    /* End of Outputs for SubSystem: '<S74>/Logic Analyzer - COMM delay measurement' */
  }

  /* End of Logic: '<S28>/AND3' */
  /* End of Outputs for SubSystem: '<S28>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S28>/Prepare buffer' incorporates:
   *  EnablePort: '<S72>/Enable'
   */
  /* RelationalOperator: '<S28>/Equal5' incorporates:
   *  Constant: '<S28>/Constant6'
   */
  if (*rtd_Rx_State_CAN2 == 0.0) {
    /* DataStoreWrite: '<S72>/Data Store Write' incorporates:
     *  Constant: '<S72>/Constant1'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)1U);

    /* DataStoreWrite: '<S72>/Data Store Write1' incorporates:
     *  Constant: '<S72>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S28>/Equal5' */
  /* End of Outputs for SubSystem: '<S28>/Prepare buffer' */
}

/* Output and update for function-call system: '<S10>/CAN2 Send' */
void CAN2Send(rtB_CAN2Send *localB, rtDW_CAN2Send *localDW, msg_buffer_type
              *rtd_Msg_Tx_CAN2, boolean_T *rtd_Toggle_Pin_A0, real_T
              *rtd_Toggle_Pin_D9, uint32_T *rtd_TxID_CAN2, real_T
              *rtd_Tx_msg_count_CAN2)
{
  /* DataStoreWrite: '<S29>/Data Store Write2' incorporates:
   *  Constant: '<S29>/Constant8'
   *  Sum: '<S29>/Plus'
   */
  *rtd_Tx_msg_count_CAN2 += 1.0;

  /* DataStoreWrite: '<S29>/Data Store Write1' incorporates:
   *  Constant: '<S29>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S29>/Sum1' incorporates:
   *  Constant: '<S29>/Constant3'
   *  DataStoreRead: '<S29>/Data Store Read'
   */
  TxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S29>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN2_counter_s;

  /* Outputs for Enabled SubSystem: '<S29>/Logic Analyzer - COMM delay measurement' incorporates:
   *  EnablePort: '<S104>/Enable'
   */
  /* Logic: '<S29>/AND' incorporates:
   *  Constant: '<S29>/Constant1'
   *  Constant: '<S29>/Constant2'
   *  RelationalOperator: '<S29>/Equal'
   */
  if ((*rtd_TxID_CAN2 == 1.0) && (1.0 != 0.0)) {
    /* DataStoreWrite: '<S104>/Data Store Write2' incorporates:
     *  Constant: '<S104>/Constant2'
     */
    *rtd_Toggle_Pin_D9 = 1.0;
  }

  /* End of Logic: '<S29>/AND' */
  /* End of Outputs for SubSystem: '<S29>/Logic Analyzer - COMM delay measurement' */
  /* DataTypeConversion: '<S29>/Cast To Double' */
  Tx_temporal_msg_CAN2 = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataStoreRead: '<S29>/Data Store Read3' */
  TxID_CAN2_s = *rtd_TxID_CAN2;

  /* DataTypeConversion: '<S29>/Data Type Conversion' */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataTypeConversion: '<S29>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN2_s;

  /* DataTypeConversion: '<S29>/Data Type Conversion10' */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN2->Buffer_8;

  /* DataTypeConversion: '<S29>/Data Type Conversion4' */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN2->Buffer_2;

  /* DataTypeConversion: '<S29>/Data Type Conversion5' */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN2->Buffer_3;

  /* DataTypeConversion: '<S29>/Data Type Conversion6' */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN2->Buffer_4;

  /* DataTypeConversion: '<S29>/Data Type Conversion7' */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN2->Buffer_5;

  /* DataTypeConversion: '<S29>/Data Type Conversion8' */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN2->Buffer_6;

  /* DataTypeConversion: '<S29>/Data Type Conversion9' */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN2->Buffer_7;

  /* Update for M-S-Function: '<S103>/S-Function' */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = localB->DataTypeConversion;
    canTxData.uint8_T_info[1] = localB->DataTypeConversion4;
    canTxData.uint8_T_info[2] = localB->DataTypeConversion5;
    canTxData.uint8_T_info[3] = localB->DataTypeConversion6;
    canTxData.uint8_T_info[4] = localB->DataTypeConversion7;
    canTxData.uint8_T_info[5] = localB->DataTypeConversion8;
    canTxData.uint8_T_info[6] = localB->DataTypeConversion9;
    canTxData.uint8_T_info[7] = localB->DataTypeConversion10;

    /* send the data */
    CanTransmit(1, localB->DataTypeConversion1, 8, &canTxData.uint8_T_info[0]);
  }
}

/* Disable for function-call system: '<S10>/Measure EXecution time' */
void MeasureEXecutiontime_Disable(rtDW_MeasureEXecutiontime *localDW)
{
  /* Disable for Enabled SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */
  if (localDW->DEBUGToggledigitalpinA3_MODE) {
    localDW->DEBUGToggledigitalpinA3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */
}

/* Start for function-call system: '<S10>/Measure EXecution time' */
void MeasureEXecutiontime_Start(void)
{
  /* Start for Enabled SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */

  /* Start for M-S-Function: '<S114>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN8, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */
}

/* Output and update for function-call system: '<S10>/Measure EXecution time' */
void MeasureEXecutiontime(rtB_MeasureEXecutiontime *localB,
  rtDW_MeasureEXecutiontime *localDW)
{
  /* Outputs for Enabled SubSystem: '<S34>/DEBUG - Toggle digital pin A3' incorporates:
   *  EnablePort: '<S113>/Enable'
   */
  /* Constant: '<S34>/Constant1' */
  if (1.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA3_MODE) {
      localDW->DEBUGToggledigitalpinA3_MODE = true;
    }

    /* Switch: '<S113>/Switch' incorporates:
     *  DataStoreRead: '<S113>/Data Store Read'
     */
    if (localDW->A3_Pin_State) {
      /* DataStoreWrite: '<S113>/Data Store Write1' incorporates:
       *  Constant: '<S113>/Constant1'
       */
      localDW->A3_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S113>/Data Store Write1' incorporates:
       *  Constant: '<S113>/Constant'
       */
      localDW->A3_Pin_State = true;
    }

    /* End of Switch: '<S113>/Switch' */
    /* DataStoreRead: '<S113>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->A3_Pin_State;

    /* Update for M-S-Function: '<S114>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA3_MODE) {
      localDW->DEBUGToggledigitalpinA3_MODE = false;
    }
  }

  /* End of Constant: '<S34>/Constant1' */
  /* End of Outputs for SubSystem: '<S34>/DEBUG - Toggle digital pin A3' */
}

/*
 * Output and update for atomic system:
 *    '<S142>/Bit Shift3'
 *    '<S268>/Bit Shift3'
 *    '<S280>/Bit Shift3'
 *    '<S304>/Bit Shift3'
 *    '<S316>/Bit Shift3'
 *    '<S333>/Bit Shift3'
 *    '<S345>/Bit Shift3'
 *    '<S362>/Bit Shift3'
 *    '<S374>/Bit Shift3'
 *    '<S464>/Bit Shift3'
 *    ...
 */
void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB)
{
  /* MATLAB Function: '<S146>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S151>:1' */
  /* '<S151>:1:6' */
  localB->y = (uint8_T)(rtu_u << 1);
}

/*
 * Output and update for atomic system:
 *    '<S142>/Bit Shift4'
 *    '<S189>/Bit Shift'
 *    '<S195>/Bit Shift'
 *    '<S207>/Bit Shift'
 *    '<S213>/Bit Shift'
 *    '<S225>/Bit Shift'
 *    '<S231>/Bit Shift'
 *    '<S243>/Bit Shift'
 *    '<S249>/Bit Shift'
 *    '<S268>/Bit Shift4'
 *    ...
 */
void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB)
{
  /* MATLAB Function: '<S147>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S152>:1' */
  /* '<S152>:1:6' */
  localB->y = (uint8_T)(rtu_u << 4);
}

/*
 * Disable for enable system:
 *    '<S165>/Reception substasks'
 *    '<S166>/Reception substasks'
 *    '<S167>/Reception substasks'
 *    '<S168>/Reception substasks'
 *    '<S386>/Reception substasks'
 *    '<S387>/Reception substasks'
 *    '<S388>/Reception substasks'
 *    '<S572>/Reception substasks'
 *    '<S631>/Reception substasks'
 *    '<S632>/Reception substasks'
 */
void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW)
{
  /* Disable for Outport: '<S182>/Receive CAN1' */
  localB->AND = false;

  /* Disable for Outport: '<S182>/Receive CAN2' */
  localB->AND1 = false;
  localDW->Receptionsubstasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S165>/Reception substasks'
 *    '<S166>/Reception substasks'
 *    '<S167>/Reception substasks'
 *    '<S168>/Reception substasks'
 *    '<S386>/Reception substasks'
 *    '<S387>/Reception substasks'
 *    '<S388>/Reception substasks'
 *    '<S572>/Reception substasks'
 *    '<S631>/Reception substasks'
 *    '<S632>/Reception substasks'
 */
void Receptionsubstasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Receptionsubstasks *localB, const rtC_Receptionsubstasks *localC,
  rtDW_Receptionsubstasks *localDW, uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_d, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2,
  uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
  *rtd_new_msg_Rx_l)
{
  boolean_T rtb_Equal2_k;

  /* Outputs for Enabled SubSystem: '<S165>/Reception substasks' incorporates:
   *  EnablePort: '<S182>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Receptionsubstasks_MODE) {
      localDW->Receptionsubstasks_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S182>/RX buffers update' incorporates:
     *  EnablePort: '<S184>/Enable'
     */
    /* RelationalOperator: '<S182>/Equal16' */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataStoreWrite: '<S184>/Data Store Write11' */
      *rtd_RxID_CAN2 = localC->Cast13;

      /* DataStoreWrite: '<S184>/Data Store Write6' */
      *rtd_RxID_CAN1 = localC->Cast3;

      /* DataStoreWrite: '<S184>/Data Store Write9' */
      *rtd_New_Msg_Ready_CAN2 = localC->Cast14;

      /* DataStoreWrite: '<S184>/Data Store Write12' */
      *rtd_Rx_State_CAN2 = localC->Cast15;

      /* DataStoreWrite: '<S184>/Data Store Write2' */
      *rtd_New_Msg_Ready_CAN1 = localC->Cast5;

      /* DataStoreWrite: '<S184>/Data Store Write7' */
      *rtd_Rx_State_CAN1 = localC->Cast6;

      /* DataStoreWrite: '<S184>/Data Store Write' incorporates:
       *  Constant: '<S184>/RESET_Msg_Rx'
       */
      *rtd_Msg_Rx_d = HANcoder_E407_TTA_Group2_rtZmsg_buffer_type;

      /* DataStoreWrite: '<S184>/Data Store Write3' incorporates:
       *  Constant: '<S184>/RESET_new_msg_Rx'
       */
      *rtd_new_msg_Rx_l = false;
    }

    /* End of RelationalOperator: '<S182>/Equal16' */
    /* End of Outputs for SubSystem: '<S182>/RX buffers update' */

    /* RelationalOperator: '<S182>/Equal2' */
    rtb_Equal2_k = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S182>/AND' incorporates:
     *  Logic: '<S182>/NOT'
     */
    localB->AND = (rtb_Equal2_k && (!*rtd_New_Msg_Ready_CAN1));

    /* Logic: '<S182>/AND1' incorporates:
     *  Logic: '<S182>/NOT1'
     */
    localB->AND1 = (rtb_Equal2_k && (!*rtd_New_Msg_Ready_CAN2));
  } else {
    if (localDW->Receptionsubstasks_MODE) {
      Receptionsubstasks_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S165>/Reception substasks' */
}

/*
 * Output and update for atomic system:
 *    '<S189>/Bit Shift1'
 *    '<S195>/Bit Shift1'
 *    '<S207>/Bit Shift1'
 *    '<S213>/Bit Shift1'
 *    '<S225>/Bit Shift1'
 *    '<S231>/Bit Shift1'
 *    '<S243>/Bit Shift1'
 *    '<S249>/Bit Shift1'
 *    '<S401>/Bit Shift1'
 *    '<S407>/Bit Shift1'
 *    ...
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S191>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S193>:1' */
  /* '<S193>:1:6' */
  localB->y = (uint8_T)(rtu_u << 7);
}

real_T rt_modd(real_T u0, real_T u1)
{
  real_T y;
  boolean_T yEq;
  real_T q;
  y = u0;
  if (u0 == 0.0) {
    y = 0.0;
  } else {
    if (u1 != 0.0) {
      y = fmod(u0, u1);
      yEq = (y == 0.0);
      if ((!yEq) && (u1 > floor(u1))) {
        q = fabs(u0 / u1);
        yEq = (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q);
      }

      if (yEq) {
        y = 0.0;
      } else {
        if ((u0 < 0.0) != (u1 < 0.0)) {
          y += u1;
        }
      }
    }
  }

  return y;
}

/*
 * Disable for enable system:
 *    '<S165>/Transmission subtasks'
 *    '<S387>/Transmission subtasks1'
 *    '<S572>/Transmission subtasks'
 *    '<S632>/Transmission subtasks'
 */
void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW)
{
  /* Disable for Enabled SubSystem: '<S183>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for Outport: '<S185>/Send CAN1' */
    localB->Equal7_a = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S183>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S183>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for Outport: '<S186>/Send CAN2' */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S183>/Check msg transmission CAN2' */

  /* Disable for Outport: '<S183>/Send CAN1' */
  localB->Equal7_a = false;

  /* Disable for Outport: '<S183>/Send CAN2' */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S165>/Transmission subtasks'
 *    '<S387>/Transmission subtasks1'
 *    '<S572>/Transmission subtasks'
 *    '<S632>/Transmission subtasks'
 */
void Transmissionsubtasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks *localB, const rtC_Transmissionsubtasks *localC,
  rtDW_Transmissionsubtasks *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2, uint8_T
  *rtd_basic_cycle_count)
{
  boolean_T rtb_Equal2_pm;
  real_T rtb_Minus2_f4;
  uint8_T rtb_Cast4_n;
  uint8_T rtb_Cast1_il;
  uint8_T rtb_Cast18_f;
  uint8_T rtb_Cast9_l;

  /* Outputs for Enabled SubSystem: '<S165>/Transmission subtasks' incorporates:
   *  EnablePort: '<S183>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Transmissionsubtasks_MODE) {
      localDW->Transmissionsubtasks_MODE = true;
    }

    /* RelationalOperator: '<S183>/Equal2' */
    rtb_Equal2_pm = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S183>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S187>/Enable'
     */
    /* RelationalOperator: '<S183>/Equal16' incorporates:
     *  Constant: '<S187>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);
    }

    /* End of RelationalOperator: '<S183>/Equal16' */
    /* End of Outputs for SubSystem: '<S183>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S183>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S185>/Enable'
     */
    /* Logic: '<S183>/AND' incorporates:
     *  Constant: '<S183>/Constant6'
     *  Constant: '<S185>/Constant22'
     *  Constant: '<S185>/Constant24'
     *  Constant: '<S185>/Constant8'
     *  Math: '<S185>/Mod'
     *  RelationalOperator: '<S183>/GreaterThan2'
     *  RelationalOperator: '<S185>/Equal4'
     *  Sum: '<S185>/Minus'
     */
    if (rtb_Equal2_pm && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN1_MODE) {
        localDW->CheckmsgtransmissionCAN1_MODE = true;
      }

      /* Sum: '<S185>/Minus2' incorporates:
       *  Constant: '<S185>/Constant'
       */
      rtb_Minus2_f4 = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S185>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S188>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_f4, COMM_Phase1)
          == 0.0) {
        /* DataTypeConversion: '<S188>/Cast4' */
        rtb_Cast4_n = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S189>/Bit Shift1' */
        BitShift1(rtb_Cast4_n, &localB->BitShift1_a);

        /* End of Outputs for SubSystem: '<S189>/Bit Shift1' */

        /* DataTypeConversion: '<S188>/Cast1' */
        rtb_Cast1_il = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S189>/Bit Shift' */
        BitShift4(rtb_Cast1_il, &localB->BitShift_f);

        /* End of Outputs for SubSystem: '<S189>/Bit Shift' */

        /* DataStoreWrite: '<S188>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S188>/Cast16'
         *  Sum: '<S189>/Minus'
         */
        rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_a.y + localB->BitShift_f.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN1->Buffer_2 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S188>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S185>/TX buffer update CAN1' */

      /* RelationalOperator: '<S185>/Equal7' incorporates:
       *  Constant: '<S185>/Constant11'
       *  Constant: '<S185>/Constant22'
       *  Constant: '<S185>/Constant24'
       *  Constant: '<S185>/Constant27'
       *  Constant: '<S185>/Constant8'
       *  Math: '<S185>/Mod'
       *  Math: '<S185>/Mod1'
       *  RelationalOperator: '<S185>/Equal4'
       *  Sum: '<S185>/Minus'
       *  Sum: '<S185>/Minus1'
       */
      localB->Equal7_a = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_f4,
        COMM_Phase1) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN1_MODE) {
        /* Disable for Outport: '<S185>/Send CAN1' */
        localB->Equal7_a = false;
        localDW->CheckmsgtransmissionCAN1_MODE = false;
      }
    }

    /* End of Logic: '<S183>/AND' */
    /* End of Outputs for SubSystem: '<S183>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S183>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S186>/Enable'
     */
    /* Logic: '<S183>/AND1' incorporates:
     *  Constant: '<S183>/Constant7'
     *  Constant: '<S186>/Constant22'
     *  Constant: '<S186>/Constant24'
     *  Constant: '<S186>/Constant8'
     *  Math: '<S186>/Mod'
     *  RelationalOperator: '<S183>/GreaterThan3'
     *  RelationalOperator: '<S186>/Equal4'
     *  Sum: '<S186>/Minus'
     */
    if (rtb_Equal2_pm && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN2_MODE) {
        localDW->CheckmsgtransmissionCAN2_MODE = true;
      }

      /* Sum: '<S186>/Minus2' incorporates:
       *  Constant: '<S186>/Constant'
       */
      rtb_Minus2_f4 = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S186>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S194>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_f4, COMM_Phase2)
          == 0.0) {
        /* DataTypeConversion: '<S194>/Cast18' */
        rtb_Cast18_f = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S195>/Bit Shift1' */
        BitShift1(rtb_Cast18_f, &localB->BitShift1_h);

        /* End of Outputs for SubSystem: '<S195>/Bit Shift1' */

        /* DataTypeConversion: '<S194>/Cast9' */
        rtb_Cast9_l = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S195>/Bit Shift' */
        BitShift4(rtb_Cast9_l, &localB->BitShift_e);

        /* End of Outputs for SubSystem: '<S195>/Bit Shift' */

        /* DataStoreWrite: '<S194>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S194>/Cast17'
         *  Sum: '<S195>/Minus'
         */
        rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_h.y + localB->BitShift_e.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN2->Buffer_2 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S194>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S186>/TX buffer update CAN2' */

      /* RelationalOperator: '<S186>/Equal7' incorporates:
       *  Constant: '<S186>/Constant11'
       *  Constant: '<S186>/Constant22'
       *  Constant: '<S186>/Constant24'
       *  Constant: '<S186>/Constant27'
       *  Constant: '<S186>/Constant8'
       *  Math: '<S186>/Mod'
       *  Math: '<S186>/Mod1'
       *  RelationalOperator: '<S186>/Equal4'
       *  Sum: '<S186>/Minus'
       *  Sum: '<S186>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_f4,
        COMM_Phase2) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN2_MODE) {
        /* Disable for Outport: '<S186>/Send CAN2' */
        localB->Equal7 = false;
        localDW->CheckmsgtransmissionCAN2_MODE = false;
      }
    }

    /* End of Logic: '<S183>/AND1' */
    /* End of Outputs for SubSystem: '<S183>/Check msg transmission CAN2' */
  } else {
    if (localDW->Transmissionsubtasks_MODE) {
      Transmissionsubtasks_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S165>/Transmission subtasks' */
}

/*
 * Disable for enable system:
 *    '<S162>/COMM Task - Sync bc 0'
 *    '<S569>/COMM Task - Sync bc 0'
 *    '<S570>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc0_Disable(rtB_COMMTaskSyncbc0 *localB, rtDW_COMMTaskSyncbc0
  *localDW)
{
  /* Disable for Enabled SubSystem: '<S165>/Reception substasks' */
  if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
    Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
      &localDW->Receptionsubstasks_h);
  }

  /* End of Disable for SubSystem: '<S165>/Reception substasks' */

  /* Disable for Enabled SubSystem: '<S165>/Transmission subtasks' */
  if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
    Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
      &localDW->Transmissionsubtasks_l);
  }

  /* End of Disable for SubSystem: '<S165>/Transmission subtasks' */

  /* Disable for Outport: '<S165>/Send CAN1' */
  localB->Transmissionsubtasks_l.Equal7_a = false;

  /* Disable for Outport: '<S165>/Receive CAN1' */
  localB->Receptionsubstasks_h.AND = false;

  /* Disable for Outport: '<S165>/Send CAN2' */
  localB->Transmissionsubtasks_l.Equal7 = false;

  /* Disable for Outport: '<S165>/Receive CAN2' */
  localB->Receptionsubstasks_h.AND1 = false;
  localDW->COMMTaskSyncbc0_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S162>/COMM Task - Sync bc 0'
 *    '<S569>/COMM Task - Sync bc 0'
 *    '<S570>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc0(boolean_T rtu_Enable, real_T rtu_TimeMark,
                     rtB_COMMTaskSyncbc0 *localB, const rtC_COMMTaskSyncbc0
                     *localC, rtDW_COMMTaskSyncbc0 *localDW, real_T
                     *rtd_Board_ID, uint16_T *rtd_Local_Ticks, msg_buffer_type
                     *rtd_Msg_Rx_d, msg_buffer_type *rtd_Msg_Tx_CAN1,
                     msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
                     *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2,
                     real_T *rtd_Role_ID, uint32_T *rtd_RxID_CAN1, uint32_T
                     *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
                     *rtd_Rx_State_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T
                     *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T
                     *rtd_Tx_msg_count_CAN2, uint8_T *rtd_basic_cycle_count,
                     boolean_T *rtd_new_msg_Rx_l)
{
  boolean_T rtb_Equal1_ie;
  boolean_T rtb_NOT_k;

  /* Outputs for Enabled SubSystem: '<S162>/COMM Task - Sync bc 0' incorporates:
   *  EnablePort: '<S165>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->COMMTaskSyncbc0_MODE) {
      localDW->COMMTaskSyncbc0_MODE = true;
    }

    /* RelationalOperator: '<S165>/Equal1' incorporates:
     *  Constant: '<S165>/Constant2'
     */
    rtb_Equal1_ie = (*rtd_Role_ID == 1.0);

    /* Logic: '<S165>/NOT' */
    rtb_NOT_k = !rtb_Equal1_ie;

    /* Outputs for Enabled SubSystem: '<S165>/Reception substasks' */
    Receptionsubstasks(rtb_NOT_k, rtu_TimeMark, &localB->Receptionsubstasks_h,
                       &localC->Receptionsubstasks_h,
                       &localDW->Receptionsubstasks_h, rtd_Local_Ticks,
                       rtd_Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                       rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                       rtd_Rx_State_CAN1, rtd_Rx_State_CAN2, rtd_new_msg_Rx_l);

    /* End of Outputs for SubSystem: '<S165>/Reception substasks' */

    /* Outputs for Enabled SubSystem: '<S165>/Transmission subtasks' */
    Transmissionsubtasks(rtb_Equal1_ie, rtu_TimeMark,
                         &localB->Transmissionsubtasks_l,
                         &localC->Transmissionsubtasks_l,
                         &localDW->Transmissionsubtasks_l, rtd_Board_ID,
                         rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                         rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                         rtd_Tx_msg_count_CAN2, rtd_basic_cycle_count);

    /* End of Outputs for SubSystem: '<S165>/Transmission subtasks' */
  } else {
    if (localDW->COMMTaskSyncbc0_MODE) {
      COMMTaskSyncbc0_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S162>/COMM Task - Sync bc 0' */
}

/*
 * Disable for enable system:
 *    '<S166>/Transmission subtasks'
 *    '<S167>/Transmission subtasks'
 *    '<S168>/Transmission subtasks'
 */
void Transmissionsubtasks_l_Disable(rtB_Transmissionsubtasks_f *localB,
  rtDW_Transmissionsubtasks_h *localDW)
{
  /* Disable for Enabled SubSystem: '<S201>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for Outport: '<S203>/Send CAN1' */
    localB->Equal7_m = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S201>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S201>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for Outport: '<S204>/Send CAN2' */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S201>/Check msg transmission CAN2' */

  /* Disable for Outport: '<S201>/Send CAN1' */
  localB->Equal7_m = false;

  /* Disable for Outport: '<S201>/Send CAN2' */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S166>/Transmission subtasks'
 *    '<S167>/Transmission subtasks'
 *    '<S168>/Transmission subtasks'
 */
void Transmissionsubtasks_p(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks_f *localB, const rtC_Transmissionsubtasks_d *localC,
  rtDW_Transmissionsubtasks_h *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint8_T *rtd_Own_Vote, uint32_T *rtd_TxID_CAN1, uint32_T
  *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2,
  uint8_T *rtd_basic_cycle_count)
{
  boolean_T rtb_Equal2_hm;
  real_T rtb_Minus2_g;
  uint8_T rtb_Cast4_d;
  uint8_T rtb_Cast1_g;
  uint8_T rtb_Cast18_d;
  uint8_T rtb_Cast9_i;

  /* Outputs for Enabled SubSystem: '<S166>/Transmission subtasks' incorporates:
   *  EnablePort: '<S201>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Transmissionsubtasks_MODE) {
      localDW->Transmissionsubtasks_MODE = true;
    }

    /* RelationalOperator: '<S201>/Equal2' */
    rtb_Equal2_hm = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S201>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S205>/Enable'
     */
    /* RelationalOperator: '<S201>/Equal16' incorporates:
     *  Constant: '<S205>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);

      /* DataStoreRead: '<S205>/Data Store Read' incorporates:
       *  Constant: '<S205>/Constant'
       */
      localB->DataStoreRead = *rtd_Own_Vote;
    }

    /* End of RelationalOperator: '<S201>/Equal16' */
    /* End of Outputs for SubSystem: '<S201>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S201>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S203>/Enable'
     */
    /* Logic: '<S201>/AND' incorporates:
     *  Constant: '<S201>/Constant6'
     *  Constant: '<S203>/Constant22'
     *  Constant: '<S203>/Constant24'
     *  Constant: '<S203>/Constant8'
     *  Math: '<S203>/Mod'
     *  RelationalOperator: '<S201>/GreaterThan2'
     *  RelationalOperator: '<S203>/Equal4'
     *  Sum: '<S203>/Minus'
     */
    if (rtb_Equal2_hm && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN1_MODE) {
        localDW->CheckmsgtransmissionCAN1_MODE = true;
      }

      /* Sum: '<S203>/Minus2' incorporates:
       *  Constant: '<S203>/Constant'
       */
      rtb_Minus2_g = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S203>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S206>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_g, COMM_Phase1) ==
          0.0) {
        /* DataTypeConversion: '<S206>/Cast4' */
        rtb_Cast4_d = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S207>/Bit Shift1' */
        BitShift1(rtb_Cast4_d, &localB->BitShift1_b);

        /* End of Outputs for SubSystem: '<S207>/Bit Shift1' */

        /* DataTypeConversion: '<S206>/Cast1' */
        rtb_Cast1_g = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S207>/Bit Shift' */
        BitShift4(rtb_Cast1_g, &localB->BitShift_o);

        /* End of Outputs for SubSystem: '<S207>/Bit Shift' */

        /* DataStoreWrite: '<S206>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S206>/Cast16'
         *  Sum: '<S207>/Minus'
         */
        rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_b.y + localB->BitShift_o.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN1->Buffer_2 = localB->DataStoreRead;
        rtd_Msg_Tx_CAN1->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S206>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S203>/TX buffer update CAN1' */

      /* RelationalOperator: '<S203>/Equal7' incorporates:
       *  Constant: '<S203>/Constant11'
       *  Constant: '<S203>/Constant22'
       *  Constant: '<S203>/Constant24'
       *  Constant: '<S203>/Constant27'
       *  Constant: '<S203>/Constant8'
       *  Math: '<S203>/Mod'
       *  Math: '<S203>/Mod1'
       *  RelationalOperator: '<S203>/Equal4'
       *  Sum: '<S203>/Minus'
       *  Sum: '<S203>/Minus1'
       */
      localB->Equal7_m = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_g,
        COMM_Phase1) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN1_MODE) {
        /* Disable for Outport: '<S203>/Send CAN1' */
        localB->Equal7_m = false;
        localDW->CheckmsgtransmissionCAN1_MODE = false;
      }
    }

    /* End of Logic: '<S201>/AND' */
    /* End of Outputs for SubSystem: '<S201>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S201>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S204>/Enable'
     */
    /* Logic: '<S201>/AND1' incorporates:
     *  Constant: '<S201>/Constant7'
     *  Constant: '<S204>/Constant22'
     *  Constant: '<S204>/Constant24'
     *  Constant: '<S204>/Constant8'
     *  Math: '<S204>/Mod'
     *  RelationalOperator: '<S201>/GreaterThan3'
     *  RelationalOperator: '<S204>/Equal4'
     *  Sum: '<S204>/Minus'
     */
    if (rtb_Equal2_hm && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN2_MODE) {
        localDW->CheckmsgtransmissionCAN2_MODE = true;
      }

      /* Sum: '<S204>/Minus2' incorporates:
       *  Constant: '<S204>/Constant'
       */
      rtb_Minus2_g = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S204>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S212>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_g, COMM_Phase2) ==
          0.0) {
        /* DataTypeConversion: '<S212>/Cast18' */
        rtb_Cast18_d = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S213>/Bit Shift1' */
        BitShift1(rtb_Cast18_d, &localB->BitShift1_f);

        /* End of Outputs for SubSystem: '<S213>/Bit Shift1' */

        /* DataTypeConversion: '<S212>/Cast9' */
        rtb_Cast9_i = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S213>/Bit Shift' */
        BitShift4(rtb_Cast9_i, &localB->BitShift_i);

        /* End of Outputs for SubSystem: '<S213>/Bit Shift' */

        /* DataStoreWrite: '<S212>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S212>/Cast17'
         *  Sum: '<S213>/Minus'
         */
        rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_f.y + localB->BitShift_i.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN2->Buffer_2 = localB->DataStoreRead;
        rtd_Msg_Tx_CAN2->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S212>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S204>/TX buffer update CAN2' */

      /* RelationalOperator: '<S204>/Equal7' incorporates:
       *  Constant: '<S204>/Constant11'
       *  Constant: '<S204>/Constant22'
       *  Constant: '<S204>/Constant24'
       *  Constant: '<S204>/Constant27'
       *  Constant: '<S204>/Constant8'
       *  Math: '<S204>/Mod'
       *  Math: '<S204>/Mod1'
       *  RelationalOperator: '<S204>/Equal4'
       *  Sum: '<S204>/Minus'
       *  Sum: '<S204>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_g,
        COMM_Phase2) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN2_MODE) {
        /* Disable for Outport: '<S204>/Send CAN2' */
        localB->Equal7 = false;
        localDW->CheckmsgtransmissionCAN2_MODE = false;
      }
    }

    /* End of Logic: '<S201>/AND1' */
    /* End of Outputs for SubSystem: '<S201>/Check msg transmission CAN2' */
  } else {
    if (localDW->Transmissionsubtasks_MODE) {
      Transmissionsubtasks_l_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S166>/Transmission subtasks' */
}

/*
 * Output and update for atomic system:
 *    '<S268>/Bit Shift'
 *    '<S280>/Bit Shift'
 *    '<S304>/Bit Shift'
 *    '<S316>/Bit Shift'
 *    '<S333>/Bit Shift'
 *    '<S345>/Bit Shift'
 *    '<S362>/Bit Shift'
 *    '<S374>/Bit Shift'
 *    '<S464>/Bit Shift'
 *    '<S476>/Bit Shift'
 *    ...
 */
void BitShift(uint8_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S270>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S275>:1' */
  /* '<S275>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S268>/Bit Shift1'
 *    '<S280>/Bit Shift1'
 *    '<S304>/Bit Shift1'
 *    '<S316>/Bit Shift1'
 *    '<S333>/Bit Shift1'
 *    '<S345>/Bit Shift1'
 *    '<S362>/Bit Shift1'
 *    '<S374>/Bit Shift1'
 *    '<S464>/Bit Shift1'
 *    '<S476>/Bit Shift1'
 *    ...
 */
void BitShift1_m(uint8_T rtu_u, rtB_BitShift1_j *localB)
{
  /* MATLAB Function: '<S271>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S276>:1' */
  /* '<S276>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 5);
}

/*
 * Output and update for atomic system:
 *    '<S268>/Bit Shift2'
 *    '<S280>/Bit Shift2'
 *    '<S304>/Bit Shift2'
 *    '<S316>/Bit Shift2'
 *    '<S333>/Bit Shift2'
 *    '<S345>/Bit Shift2'
 *    '<S362>/Bit Shift2'
 *    '<S374>/Bit Shift2'
 *    '<S464>/Bit Shift2'
 *    '<S476>/Bit Shift2'
 *    ...
 */
void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB)
{
  /* MATLAB Function: '<S272>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S277>:1' */
  /* '<S277>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 4);
}

/*
 * Disable for enable system:
 *    '<S263>/Demux message CAN1 and check coherence'
 *    '<S505>/Demux message CAN1 and check coherence'
 *    '<S534>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andchec_Disable(rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW)
{
  /* Disable for Outport: '<S265>/CAN1_msg_coherent' */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcoher_f = false;
}

/*
 * Output and update for enable system:
 *    '<S263>/Demux message CAN1 and check coherence'
 *    '<S505>/Demux message CAN1 and check coherence'
 *    '<S534>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoheren(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW, real_T *rtd_msg_count_DEBUG_i)
{
  /* Outputs for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S265>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcoher_f) {
      localDW->DemuxmessageCAN1andcheckcoher_f = true;
    }

    /* Outputs for Atomic SubSystem: '<S268>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_f);

    /* End of Outputs for SubSystem: '<S268>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S268>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_f.y, &localB->BitShift1_mg);

    /* End of Outputs for SubSystem: '<S268>/Bit Shift1' */

    /* Switch: '<S269>/Switch' incorporates:
     *  Constant: '<S269>/Constant'
     *  Constant: '<S269>/Constant1'
     *  RelationalOperator: '<S269>/GreaterThan'
     *  Sum: '<S269>/Plus'
     */
    if (localB->BitShift1_mg.y > 1.0) {
      *rtd_msg_count_DEBUG_i += 1.0;
    }

    /* End of Switch: '<S269>/Switch' */

    /* Outputs for Atomic SubSystem: '<S268>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_d);

    /* End of Outputs for SubSystem: '<S268>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S268>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_c);

    /* End of Outputs for SubSystem: '<S268>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S268>/Bit Shift2' */
    BitShift2(localB->BitShift4_c.y, &localB->BitShift2_n);

    /* End of Outputs for SubSystem: '<S268>/Bit Shift2' */

    /* Logic: '<S265>/AND' incorporates:
     *  RelationalOperator: '<S265>/Equal'
     *  RelationalOperator: '<S265>/Equal1'
     */
    localB->AND = ((localB->BitShift_d.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_n.y == rtu_expected_board_id));

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion: '<S265>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S265>/Constant' */
    localB->Constant = ((uint8_T)0U);
  } else {
    if (localDW->DemuxmessageCAN1andcheckcoher_f) {
      DemuxmessageCAN1andchec_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S263>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S263>/Demux message CAN1 and check coherence1'
 *    '<S505>/Demux message CAN1 and check coherence1'
 *    '<S534>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_l_Disable(rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW)
{
  /* Disable for Outport: '<S266>/CAN2_msg_coherent' */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcohe_me = false;
}

/*
 * Output and update for enable system:
 *    '<S263>/Demux message CAN1 and check coherence1'
 *    '<S505>/Demux message CAN1 and check coherence1'
 *    '<S534>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_p(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW, real_T *rtd_msg_count_DEBUG_i)
{
  /* Outputs for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S266>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcohe_me) {
      localDW->DemuxmessageCAN1andcheckcohe_me = true;
    }

    /* Outputs for Atomic SubSystem: '<S280>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S280>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S280>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_e);

    /* End of Outputs for SubSystem: '<S280>/Bit Shift1' */

    /* Switch: '<S281>/Switch' incorporates:
     *  Constant: '<S281>/Constant'
     *  Constant: '<S281>/Constant1'
     *  RelationalOperator: '<S281>/GreaterThan'
     *  Sum: '<S281>/Plus'
     */
    if (localB->BitShift1_e.y > 1.0) {
      *rtd_msg_count_DEBUG_i += 1.0;
    }

    /* End of Switch: '<S281>/Switch' */

    /* Outputs for Atomic SubSystem: '<S280>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S280>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S280>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_h);

    /* End of Outputs for SubSystem: '<S280>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S280>/Bit Shift2' */
    BitShift2(localB->BitShift4_h.y, &localB->BitShift2_d);

    /* End of Outputs for SubSystem: '<S280>/Bit Shift2' */

    /* Logic: '<S266>/AND' incorporates:
     *  RelationalOperator: '<S266>/Equal'
     *  RelationalOperator: '<S266>/Equal1'
     */
    localB->AND = ((localB->BitShift_h.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_d.y == rtu_expected_board_id));

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S266>/Constant' */
    localB->Constant = ((uint8_T)0U);
  } else {
    if (localDW->DemuxmessageCAN1andcheckcohe_me) {
      DemuxmessageCAN1andch_l_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
}

/*
 * Output and update for enable system:
 *    '<S173>/Reset Tx msg counter'
 *    '<S177>/Reset Tx msg counter'
 *    '<S179>/Reset Tx msg counter'
 *    '<S181>/Reset Tx msg counter'
 *    '<S390>/Reset Tx msg counter'
 *    '<S391>/Reset Tx msg counter'
 *    '<S392>/Reset Tx msg counter'
 *    '<S575>/Reset Tx msg counter'
 *    '<S635>/Reset Tx msg counter'
 *    '<S636>/Reset Tx msg counter'
 */
void ResetTxmsgcounter(boolean_T rtu_Enable, real_T *rtd_Tx_msg_count_CAN1,
  real_T *rtd_Tx_msg_count_CAN2)
{
  /* Outputs for Enabled SubSystem: '<S173>/Reset Tx msg counter' incorporates:
   *  EnablePort: '<S264>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S264>/Data Store Write2' incorporates:
     *  Constant: '<S264>/Constant1'
     */
    *rtd_Tx_msg_count_CAN2 = 1.0;

    /* DataStoreWrite: '<S264>/Data Store Write1' incorporates:
     *  Constant: '<S264>/Constant6'
     */
    *rtd_Tx_msg_count_CAN1 = 1.0;
  }

  /* End of Outputs for SubSystem: '<S173>/Reset Tx msg counter' */
}

/*
 * Output and update for enable system:
 *    '<S293>/Desync_Negative'
 *    '<S566>/Desync_Negative'
 *    '<S628>/Desync_Negative'
 *    '<S717>/Desync_Negative'
 */
void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time, real_T
                     *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks)
{
  /* Outputs for Enabled SubSystem: '<S293>/Desync_Negative' incorporates:
   *  EnablePort: '<S294>/Enable'
   */
  if (rtu_Enable) {
    /* DataTypeConversion: '<S294>/Cast' incorporates:
     *  Sum: '<S294>/Minus'
     */
    *rtd_Local_Ticks = (uint16_T)(rtu_Current_Local_Time + *rtd_Desync_Ticks);
  }

  /* End of Outputs for SubSystem: '<S293>/Desync_Negative' */
}

/*
 * Disable for enable system:
 *    '<S300>/Demux message CAN1 and check coherence'
 *    '<S329>/Demux message CAN1 and check coherence'
 *    '<S358>/Demux message CAN1 and check coherence'
 *    '<S459>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andch_p_Disable(rtB_DemuxmessageCAN1andcheckc_c *localB,
  rtDW_DemuxmessageCAN1andcheck_f *localDW)
{
  /* Disable for Outport: '<S302>/CAN1_msg_coherent' */
  localB->Equal = false;
  localDW->DemuxmessageCAN1andcheckcohe_dz = false;
}

/*
 * Output and update for enable system:
 *    '<S300>/Demux message CAN1 and check coherence'
 *    '<S329>/Demux message CAN1 and check coherence'
 *    '<S358>/Demux message CAN1 and check coherence'
 *    '<S459>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoher_e(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_board_id,
  rtB_DemuxmessageCAN1andcheckc_c *localB, rtDW_DemuxmessageCAN1andcheck_f
  *localDW, real_T *rtd_msg_count_DEBUG_i)
{
  /* Outputs for Enabled SubSystem: '<S300>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S302>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcohe_dz) {
      localDW->DemuxmessageCAN1andcheckcohe_dz = true;
    }

    /* Outputs for Atomic SubSystem: '<S304>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_a);

    /* End of Outputs for SubSystem: '<S304>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S304>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_a.y, &localB->BitShift1_i);

    /* End of Outputs for SubSystem: '<S304>/Bit Shift1' */

    /* Switch: '<S305>/Switch' incorporates:
     *  Constant: '<S305>/Constant'
     *  Constant: '<S305>/Constant1'
     *  RelationalOperator: '<S305>/GreaterThan'
     *  Sum: '<S305>/Plus'
     */
    if (localB->BitShift1_i.y > 1.0) {
      *rtd_msg_count_DEBUG_i += 1.0;
    }

    /* End of Switch: '<S305>/Switch' */

    /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion: '<S302>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S302>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S304>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_i);

    /* End of Outputs for SubSystem: '<S304>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S304>/Bit Shift2' */
    BitShift2(localB->BitShift4_i.y, &localB->BitShift2_e);

    /* End of Outputs for SubSystem: '<S304>/Bit Shift2' */

    /* RelationalOperator: '<S302>/Equal' */
    localB->Equal = (localB->BitShift2_e.y == rtu_expected_board_id);

    /* Outputs for Atomic SubSystem: '<S304>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_b);

    /* End of Outputs for SubSystem: '<S304>/Bit Shift' */
  } else {
    if (localDW->DemuxmessageCAN1andcheckcohe_dz) {
      DemuxmessageCAN1andch_p_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S300>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S300>/Demux message CAN1 and check coherence1'
 *    '<S329>/Demux message CAN1 and check coherence1'
 *    '<S358>/Demux message CAN1 and check coherence1'
 *    '<S459>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_a_Disable(rtB_DemuxmessageCAN1andcheckc_p *localB,
  rtDW_DemuxmessageCAN1andcheck_c *localDW)
{
  /* Disable for Outport: '<S303>/CAN2_msg_coherent' */
  localB->Equal = false;
  localDW->DemuxmessageCAN1andcheckcoher_g = false;
}

/*
 * Output and update for enable system:
 *    '<S300>/Demux message CAN1 and check coherence1'
 *    '<S329>/Demux message CAN1 and check coherence1'
 *    '<S358>/Demux message CAN1 and check coherence1'
 *    '<S459>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_m(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_board_id,
  rtB_DemuxmessageCAN1andcheckc_p *localB, rtDW_DemuxmessageCAN1andcheck_c
  *localDW, real_T *rtd_msg_count_DEBUG_i)
{
  /* Outputs for Enabled SubSystem: '<S300>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S303>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcoher_g) {
      localDW->DemuxmessageCAN1andcheckcoher_g = true;
    }

    /* Outputs for Atomic SubSystem: '<S316>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_e);

    /* End of Outputs for SubSystem: '<S316>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S316>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_e.y, &localB->BitShift1_g);

    /* End of Outputs for SubSystem: '<S316>/Bit Shift1' */

    /* Switch: '<S317>/Switch' incorporates:
     *  Constant: '<S317>/Constant'
     *  Constant: '<S317>/Constant1'
     *  RelationalOperator: '<S317>/GreaterThan'
     *  Sum: '<S317>/Plus'
     */
    if (localB->BitShift1_g.y > 1.0) {
      *rtd_msg_count_DEBUG_i += 1.0;
    }

    /* End of Switch: '<S317>/Switch' */

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S303>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S316>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_k);

    /* End of Outputs for SubSystem: '<S316>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S316>/Bit Shift2' */
    BitShift2(localB->BitShift4_k.y, &localB->BitShift2_b);

    /* End of Outputs for SubSystem: '<S316>/Bit Shift2' */

    /* RelationalOperator: '<S303>/Equal' */
    localB->Equal = (localB->BitShift2_b.y == rtu_expected_board_id);

    /* Outputs for Atomic SubSystem: '<S316>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S316>/Bit Shift' */
  } else {
    if (localDW->DemuxmessageCAN1andcheckcoher_g) {
      DemuxmessageCAN1andch_a_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S300>/Demux message CAN1 and check coherence1' */
}

/*
 * Disable for enable system:
 *    '<S177>/Process_Messages1'
 *    '<S179>/Process_Messages'
 *    '<S181>/Process_Messages'
 */
void Process_Messages1_Disable(rtB_Process_Messages1 *localB,
  rtDW_Process_Messages1 *localDW)
{
  /* Disable for Enabled SubSystem: '<S300>/Demux message CAN1 and check coherence' */
  if (localDW->DemuxmessageCAN1andcheckcohe_eo.DemuxmessageCAN1andcheckcohe_dz)
  {
    DemuxmessageCAN1andch_p_Disable(&localB->DemuxmessageCAN1andcheckcohe_eo,
      &localDW->DemuxmessageCAN1andcheckcohe_eo);
  }

  /* End of Disable for SubSystem: '<S300>/Demux message CAN1 and check coherence' */

  /* Disable for Enabled SubSystem: '<S300>/Demux message CAN1 and check coherence1' */
  if (localDW->DemuxmessageCAN1andcheckcohe_ml.DemuxmessageCAN1andcheckcoher_g)
  {
    DemuxmessageCAN1andch_a_Disable(&localB->DemuxmessageCAN1andcheckcohe_ml,
      &localDW->DemuxmessageCAN1andcheckcohe_ml);
  }

  /* End of Disable for SubSystem: '<S300>/Demux message CAN1 and check coherence1' */
  localDW->Process_Messages1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S177>/Process_Messages1'
 *    '<S179>/Process_Messages'
 *    '<S181>/Process_Messages'
 */
void Process_Messages1(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
  boolean_T rtu_new_CAN2_msg, const msg_buffer_type *rtu_Rx_msg_CAN1, const
  msg_buffer_type *rtu_Rx_Msg_CAN2, real_T rtu_expected_board_id,
  rtB_Process_Messages1 *localB, rtDW_Process_Messages1 *localDW,
  msg_buffer_type *rtd_Msg_Rx_d, boolean_T *rtd_Toggle_Pin_A0, real_T
  *rtd_msg_count_DEBUG_i, boolean_T *rtd_new_msg_Rx_l)
{
  /* Outputs for Enabled SubSystem: '<S177>/Process_Messages1' incorporates:
   *  EnablePort: '<S300>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Process_Messages1_MODE) {
      localDW->Process_Messages1_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S300>/Demux message CAN1 and check coherence' */
    DemuxmessageCAN1andcheckcoher_e(rtu_new_CAN1_msg, rtu_Rx_msg_CAN1,
      rtu_expected_board_id, &localB->DemuxmessageCAN1andcheckcohe_eo,
      &localDW->DemuxmessageCAN1andcheckcohe_eo, rtd_msg_count_DEBUG_i);

    /* End of Outputs for SubSystem: '<S300>/Demux message CAN1 and check coherence' */

    /* Outputs for Enabled SubSystem: '<S300>/Demux message CAN1 and check coherence1' */
    DemuxmessageCAN1andcheckcoher_m(rtu_new_CAN2_msg, rtu_Rx_Msg_CAN2,
      rtu_expected_board_id, &localB->DemuxmessageCAN1andcheckcohe_ml,
      &localDW->DemuxmessageCAN1andcheckcohe_ml, rtd_msg_count_DEBUG_i);

    /* End of Outputs for SubSystem: '<S300>/Demux message CAN1 and check coherence1' */

    /* Switch: '<S300>/Switch' incorporates:
     *  DataStoreWrite: '<S300>/Data Store Write'
     */
    if (localB->DemuxmessageCAN1andcheckcohe_eo.Equal) {
      rtd_Msg_Rx_d->Buffer_1 = localB->DemuxmessageCAN1andcheckcohe_eo.Constant;
      rtd_Msg_Rx_d->Buffer_2 = localB->DemuxmessageCAN1andcheckcohe_eo.Buffer_2;
      rtd_Msg_Rx_d->Buffer_3 = localB->DemuxmessageCAN1andcheckcohe_eo.Buffer_3;
      rtd_Msg_Rx_d->Buffer_4 = localB->DemuxmessageCAN1andcheckcohe_eo.Buffer_4;
      rtd_Msg_Rx_d->Buffer_5 = localB->DemuxmessageCAN1andcheckcohe_eo.Buffer_5;
      rtd_Msg_Rx_d->Buffer_6 = localB->DemuxmessageCAN1andcheckcohe_eo.Buffer_6;
      rtd_Msg_Rx_d->Buffer_7 = localB->DemuxmessageCAN1andcheckcohe_eo.Buffer_7;
      rtd_Msg_Rx_d->Buffer_8 = localB->DemuxmessageCAN1andcheckcohe_eo.Buffer_8;
    } else {
      rtd_Msg_Rx_d->Buffer_1 = localB->DemuxmessageCAN1andcheckcohe_ml.Constant;
      rtd_Msg_Rx_d->Buffer_2 = localB->DemuxmessageCAN1andcheckcohe_ml.Buffer_2;
      rtd_Msg_Rx_d->Buffer_3 = localB->DemuxmessageCAN1andcheckcohe_ml.Buffer_3;
      rtd_Msg_Rx_d->Buffer_4 = localB->DemuxmessageCAN1andcheckcohe_ml.Buffer_4;
      rtd_Msg_Rx_d->Buffer_5 = localB->DemuxmessageCAN1andcheckcohe_ml.Buffer_5;
      rtd_Msg_Rx_d->Buffer_6 = localB->DemuxmessageCAN1andcheckcohe_ml.Buffer_6;
      rtd_Msg_Rx_d->Buffer_7 = localB->DemuxmessageCAN1andcheckcohe_ml.Buffer_7;
      rtd_Msg_Rx_d->Buffer_8 = localB->DemuxmessageCAN1andcheckcohe_ml.Buffer_8;
    }

    /* End of Switch: '<S300>/Switch' */

    /* Logic: '<S300>/OR' */
    *rtd_new_msg_Rx_l = (localB->DemuxmessageCAN1andcheckcohe_eo.Equal ||
                         localB->DemuxmessageCAN1andcheckcohe_ml.Equal);

    /* DataStoreWrite: '<S300>/Data Store Write3' incorporates:
     *  Constant: '<S300>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = true;
  } else {
    if (localDW->Process_Messages1_MODE) {
      Process_Messages1_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S177>/Process_Messages1' */
}

/*
 * Disable for enable system:
 *    '<S395>/Check msg transmission CAN1'
 *    '<S639>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN_Disable(rtB_CheckmsgtransmissionCAN1 *localB,
  rtDW_CheckmsgtransmissionCAN1 *localDW)
{
  /* Disable for Outport: '<S397>/Send CAN1' */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S395>/Check msg transmission CAN1'
 *    '<S639>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN1(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_i,
  uint8_T rtu_ValueDomainMsg_p, uint8_T rtu_ValueDomainMsg_o,
  rtB_CheckmsgtransmissionCAN1 *localB, const rtC_CheckmsgtransmissionCAN1
  *localC, rtDW_CheckmsgtransmissionCAN1 *localDW, real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T *rtd_TxID_CAN1, real_T
  *rtd_Tx_msg_count_CAN1, uint8_T *rtd_basic_cycle_count)
{
  real_T rtb_Minus2_d;
  uint8_T rtb_Cast4_h;
  uint8_T rtb_Cast1_h;

  /* Outputs for Enabled SubSystem: '<S395>/Check msg transmission CAN1' incorporates:
   *  EnablePort: '<S397>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->CheckmsgtransmissionCAN1_MODE) {
      localDW->CheckmsgtransmissionCAN1_MODE = true;
    }

    /* Sum: '<S397>/Minus2' incorporates:
     *  Constant: '<S397>/Constant'
     */
    rtb_Minus2_d = rtu_TimeMark + COMM_Phase_init1;

    /* Outputs for Enabled SubSystem: '<S397>/TX buffer update CAN1' incorporates:
     *  EnablePort: '<S400>/Enable'
     */
    /* RelationalOperator: '<S397>/Equal4' incorporates:
     *  Constant: '<S397>/Constant22'
     *  Constant: '<S397>/Constant24'
     *  Constant: '<S397>/Constant8'
     *  Math: '<S397>/Mod'
     *  Sum: '<S397>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_d, COMM_Phase1) ==
        0.0) {
      /* DataTypeConversion: '<S400>/Cast4' */
      rtb_Cast4_h = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S401>/Bit Shift1' */
      BitShift1(rtb_Cast4_h, &localB->BitShift1_g);

      /* End of Outputs for SubSystem: '<S401>/Bit Shift1' */

      /* DataTypeConversion: '<S400>/Cast1' */
      rtb_Cast1_h = (uint8_T)*rtd_Tx_msg_count_CAN1;

      /* Outputs for Atomic SubSystem: '<S401>/Bit Shift' */
      BitShift4(rtb_Cast1_h, &localB->BitShift_h);

      /* End of Outputs for SubSystem: '<S401>/Bit Shift' */

      /* DataStoreWrite: '<S400>/Data Store Write10' incorporates:
       *  DataTypeConversion: '<S400>/Cast16'
       *  Sum: '<S401>/Minus'
       */
      rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_g.y + localB->BitShift_h.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN1->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN1->Buffer_3 = rtu_ValueDomainMsg_i;
      rtd_Msg_Tx_CAN1->Buffer_4 = rtu_ValueDomainMsg_p;
      rtd_Msg_Tx_CAN1->Buffer_5 = rtu_ValueDomainMsg_o;
      rtd_Msg_Tx_CAN1->Buffer_6 = rtu_ValueDomainMsg_o;
      rtd_Msg_Tx_CAN1->Buffer_7 = rtu_ValueDomainMsg_o;
      rtd_Msg_Tx_CAN1->Buffer_8 = rtu_ValueDomainMsg_o;

      /* DataStoreWrite: '<S400>/Data Store Write8' */
      *rtd_TxID_CAN1 = localC->Cast;
    }

    /* End of RelationalOperator: '<S397>/Equal4' */
    /* End of Outputs for SubSystem: '<S397>/TX buffer update CAN1' */

    /* RelationalOperator: '<S397>/Equal7' incorporates:
     *  Constant: '<S397>/Constant11'
     *  Constant: '<S397>/Constant27'
     *  Math: '<S397>/Mod1'
     *  Sum: '<S397>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_d, COMM_Phase1)
                      == 0.0);
  } else {
    if (localDW->CheckmsgtransmissionCAN1_MODE) {
      CheckmsgtransmissionCAN_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S395>/Check msg transmission CAN1' */
}

/*
 * Disable for enable system:
 *    '<S395>/Check msg transmission CAN2'
 *    '<S639>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionC_d_Disable(rtB_CheckmsgtransmissionCAN2 *localB,
  rtDW_CheckmsgtransmissionCAN2 *localDW)
{
  /* Disable for Outport: '<S398>/Send CAN2' */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN2_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S395>/Check msg transmission CAN2'
 *    '<S639>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionCAN2(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_d,
  uint8_T rtu_ValueDomainMsg_dl, uint8_T rtu_ValueDomainMsg_n,
  rtB_CheckmsgtransmissionCAN2 *localB, const rtC_CheckmsgtransmissionCAN2
  *localC, rtDW_CheckmsgtransmissionCAN2 *localDW, real_T *rtd_Board_ID,
  msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN2, uint8_T *rtd_basic_cycle_count)
{
  real_T rtb_Minus2_l;
  uint8_T rtb_Cast18_e;
  uint8_T rtb_Cast9_k;

  /* Outputs for Enabled SubSystem: '<S395>/Check msg transmission CAN2' incorporates:
   *  EnablePort: '<S398>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->CheckmsgtransmissionCAN2_MODE) {
      localDW->CheckmsgtransmissionCAN2_MODE = true;
    }

    /* Sum: '<S398>/Minus2' incorporates:
     *  Constant: '<S398>/Constant'
     */
    rtb_Minus2_l = rtu_TimeMark + COMM_Phase_init2;

    /* Outputs for Enabled SubSystem: '<S398>/TX buffer update CAN2' incorporates:
     *  EnablePort: '<S406>/Enable'
     */
    /* RelationalOperator: '<S398>/Equal4' incorporates:
     *  Constant: '<S398>/Constant22'
     *  Constant: '<S398>/Constant24'
     *  Constant: '<S398>/Constant8'
     *  Math: '<S398>/Mod'
     *  Sum: '<S398>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_l, COMM_Phase2) ==
        0.0) {
      /* DataTypeConversion: '<S406>/Cast18' */
      rtb_Cast18_e = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S407>/Bit Shift1' */
      BitShift1(rtb_Cast18_e, &localB->BitShift1_i);

      /* End of Outputs for SubSystem: '<S407>/Bit Shift1' */

      /* DataTypeConversion: '<S406>/Cast9' */
      rtb_Cast9_k = (uint8_T)*rtd_Tx_msg_count_CAN2;

      /* Outputs for Atomic SubSystem: '<S407>/Bit Shift' */
      BitShift4(rtb_Cast9_k, &localB->BitShift_p);

      /* End of Outputs for SubSystem: '<S407>/Bit Shift' */

      /* DataStoreWrite: '<S406>/Data Store Write4' incorporates:
       *  DataTypeConversion: '<S406>/Cast17'
       *  Sum: '<S407>/Minus'
       */
      rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_i.y + localB->BitShift_p.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN2->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN2->Buffer_3 = rtu_ValueDomainMsg_d;
      rtd_Msg_Tx_CAN2->Buffer_4 = rtu_ValueDomainMsg_dl;
      rtd_Msg_Tx_CAN2->Buffer_5 = rtu_ValueDomainMsg_n;
      rtd_Msg_Tx_CAN2->Buffer_6 = rtu_ValueDomainMsg_n;
      rtd_Msg_Tx_CAN2->Buffer_7 = rtu_ValueDomainMsg_n;
      rtd_Msg_Tx_CAN2->Buffer_8 = rtu_ValueDomainMsg_n;

      /* DataStoreWrite: '<S406>/Data Store Write5' */
      *rtd_TxID_CAN2 = localC->Cast8;
    }

    /* End of RelationalOperator: '<S398>/Equal4' */
    /* End of Outputs for SubSystem: '<S398>/TX buffer update CAN2' */

    /* RelationalOperator: '<S398>/Equal7' incorporates:
     *  Constant: '<S398>/Constant11'
     *  Constant: '<S398>/Constant27'
     *  Math: '<S398>/Mod1'
     *  Sum: '<S398>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_l, COMM_Phase2)
                      == 0.0);
  } else {
    if (localDW->CheckmsgtransmissionCAN2_MODE) {
      CheckmsgtransmissionC_d_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S395>/Check msg transmission CAN2' */
}

/*
 * Output and update for enable system:
 *    '<S389>/Reset Variables'
 *    '<S634>/Reset Variables'
 */
void ResetVariables(boolean_T rtu_Enable, boolean_T *rtd_BC1_Sync_processed,
                    boolean_T *rtd_Desync_Positive, boolean_T *rtd_Toggle_Pin_A0)
{
  /* Outputs for Enabled SubSystem: '<S389>/Reset Variables' incorporates:
   *  EnablePort: '<S458>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S458>/Data Store Write' incorporates:
     *  Constant: '<S458>/Constant'
     */
    *rtd_Desync_Positive = false;

    /* DataStoreWrite: '<S458>/Data Store Write1' incorporates:
     *  Constant: '<S458>/Constant'
     */
    *rtd_BC1_Sync_processed = false;

    /* DataStoreWrite: '<S458>/Data Store Write3' incorporates:
     *  Constant: '<S458>/Constant3'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Outputs for SubSystem: '<S389>/Reset Variables' */
}

/*
 * Output and update for enable system:
 *    '<S393>/Local Time Update'
 *    '<S637>/Local Time Update'
 */
void LocalTimeUpdate(boolean_T rtu_Enable, real_T rtu_Time_Mark, boolean_T
                     *rtd_BC1_Sync_processed, boolean_T *rtd_Desync_Positive,
                     real_T *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks,
                     boolean_T *rtd_Toggle_Pin_A0, boolean_T *rtd_Toggle_Pin_D10)
{
  boolean_T rtb_NOT_ou;

  /* Outputs for Enabled SubSystem: '<S393>/Local Time Update' incorporates:
   *  EnablePort: '<S566>/Enable'
   */
  if (rtu_Enable) {
    /* RelationalOperator: '<S566>/GreaterThan' incorporates:
     *  Constant: '<S566>/Constant4'
     */
    *rtd_Desync_Positive = (*rtd_Desync_Ticks > 0.0);

    /* Logic: '<S566>/NOT' */
    rtb_NOT_ou = !*rtd_Desync_Positive;

    /* Outputs for Enabled SubSystem: '<S566>/Desync_Negative' */
    Desync_Negative(rtb_NOT_ou, rtu_Time_Mark, rtd_Desync_Ticks, rtd_Local_Ticks);

    /* End of Outputs for SubSystem: '<S566>/Desync_Negative' */

    /* DataStoreWrite: '<S566>/Data Store Write13' incorporates:
     *  Constant: '<S566>/Constant3'
     */
    *rtd_BC1_Sync_processed = true;

    /* DataStoreWrite: '<S566>/Data Store Write3' incorporates:
     *  Constant: '<S566>/Constant1'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S566>/Data Store Write1' incorporates:
     *  Constant: '<S566>/Constant2'
     */
    *rtd_Toggle_Pin_D10 = true;
  }

  /* End of Outputs for SubSystem: '<S393>/Local Time Update' */
}

/*
 * Disable for enable system:
 *    '<S598>/Demux message CAN1 and check coherence'
 *    '<S687>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andc_ls_Disable(rtB_DemuxmessageCAN1andcheckc_a *localB,
  rtDW_DemuxmessageCAN1andcheck_k *localDW)
{
  /* Disable for Outport: '<S600>/CAN1_msg_coherent' */
  localB->Equal1 = false;
  localDW->DemuxmessageCAN1andcheckcohe_mm = false;
}

/*
 * Output and update for enable system:
 *    '<S598>/Demux message CAN1 and check coherence'
 *    '<S687>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoher_d(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle,
  rtB_DemuxmessageCAN1andcheckc_a *localB, rtDW_DemuxmessageCAN1andcheck_k
  *localDW, real_T *rtd_msg_count_DEBUG)
{
  /* Outputs for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S600>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcohe_mm) {
      localDW->DemuxmessageCAN1andcheckcohe_mm = true;
    }

    /* Outputs for Atomic SubSystem: '<S603>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S603>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S603>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_b);

    /* End of Outputs for SubSystem: '<S603>/Bit Shift1' */

    /* Switch: '<S604>/Switch' incorporates:
     *  Constant: '<S604>/Constant'
     *  Constant: '<S604>/Constant1'
     *  RelationalOperator: '<S604>/GreaterThan'
     *  Sum: '<S604>/Plus'
     */
    if (localB->BitShift1_b.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S604>/Switch' */

    /* SignalConversion: '<S600>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion: '<S600>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion: '<S600>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion: '<S600>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion: '<S600>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion: '<S600>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion: '<S600>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S600>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S603>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_a);

    /* End of Outputs for SubSystem: '<S603>/Bit Shift' */

    /* RelationalOperator: '<S600>/Equal1' */
    localB->Equal1 = (localB->BitShift_a.y == rtu_expected_basic_cycle);

    /* Outputs for Atomic SubSystem: '<S603>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_n);

    /* End of Outputs for SubSystem: '<S603>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S603>/Bit Shift2' */
    BitShift2(localB->BitShift4_n.y, &localB->BitShift2_j);

    /* End of Outputs for SubSystem: '<S603>/Bit Shift2' */
  } else {
    if (localDW->DemuxmessageCAN1andcheckcohe_mm) {
      DemuxmessageCAN1andc_ls_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S598>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S598>/Demux message CAN1 and check coherence1'
 *    '<S687>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_k_Disable(rtB_DemuxmessageCAN1andcheckc_i *localB,
  rtDW_DemuxmessageCAN1andcheck_b *localDW)
{
  /* Disable for Outport: '<S601>/CAN2_msg_coherent' */
  localB->Equal1 = false;
  localDW->DemuxmessageCAN1andcheckcohe_ek = false;
}

/*
 * Output and update for enable system:
 *    '<S598>/Demux message CAN1 and check coherence1'
 *    '<S687>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_h(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle,
  rtB_DemuxmessageCAN1andcheckc_i *localB, rtDW_DemuxmessageCAN1andcheck_b
  *localDW, real_T *rtd_msg_count_DEBUG)
{
  /* Outputs for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S601>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcohe_ek) {
      localDW->DemuxmessageCAN1andcheckcohe_ek = true;
    }

    /* Outputs for Atomic SubSystem: '<S615>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_e);

    /* End of Outputs for SubSystem: '<S615>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S615>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_e.y, &localB->BitShift1_d);

    /* End of Outputs for SubSystem: '<S615>/Bit Shift1' */

    /* Switch: '<S616>/Switch' incorporates:
     *  Constant: '<S616>/Constant'
     *  Constant: '<S616>/Constant1'
     *  RelationalOperator: '<S616>/GreaterThan'
     *  Sum: '<S616>/Plus'
     */
    if (localB->BitShift1_d.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S616>/Switch' */

    /* SignalConversion: '<S601>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion: '<S601>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion: '<S601>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion: '<S601>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion: '<S601>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion: '<S601>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion: '<S601>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S601>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S615>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_k);

    /* End of Outputs for SubSystem: '<S615>/Bit Shift' */

    /* RelationalOperator: '<S601>/Equal1' */
    localB->Equal1 = (localB->BitShift_k.y == rtu_expected_basic_cycle);

    /* Outputs for Atomic SubSystem: '<S615>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_k);

    /* End of Outputs for SubSystem: '<S615>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S615>/Bit Shift2' */
    BitShift2(localB->BitShift4_k.y, &localB->BitShift2_l);

    /* End of Outputs for SubSystem: '<S615>/Bit Shift2' */
  } else {
    if (localDW->DemuxmessageCAN1andcheckcohe_ek) {
      DemuxmessageCAN1andch_k_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
}

real_T rt_roundd(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* System initialize for function-call system: '<S10>/TTA System' */
void TTASystem_Init(rtB_TTASystem *localB)
{
  /* SystemInitialize for Enabled SubSystem: '<S36>/Initialization' */
  /* SystemInitialize for Enabled SubSystem: '<S126>/RoleID and Global Time init' */
  /* SystemInitialize for Outport: '<S139>/Finish Initialization' */
  localB->SET = 0.0;

  /* End of SystemInitialize for SubSystem: '<S126>/RoleID and Global Time init' */
  /* End of SystemInitialize for SubSystem: '<S36>/Initialization' */
}

/* System reset for function-call system: '<S10>/TTA System' */
void TTASystem_Reset(rtDW_TTASystem *localDW)
{
  /* SystemReset for Chart: '<S36>/Chart' */
  localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S36>/Chart1' */
  localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S36>/Chart2' */
  localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S36>/Chart3' */
  localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S36>/Chart4' */
  localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ = 0U;
}

/* Disable for function-call system: '<S10>/TTA System' */
void TTASystem_Disable(rtB_TTASystem *localB, rtDW_TTASystem *localDW)
{
  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */
  if (localDW->DEBUGToggledigitalpinA2_MODE) {
    localDW->DEBUGToggledigitalpinA2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */

  /* Disable for Enabled SubSystem: '<S36>/Initialization' */
  if (localDW->Initialization_MODE) {
    /* Disable for Enabled SubSystem: '<S126>/RoleID and Global Time init' */
    if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for Outport: '<S139>/Finish Initialization' */
      localB->SET = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Disable for SubSystem: '<S126>/RoleID and Global Time init' */
    localDW->Initialization_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/Initialization' */

  /* Disable for Enabled SubSystem: '<S36>/Matrix Cycle Manager' */
  if (localDW->MatrixCycleManager_MODE) {
    /* Disable for Enabled SubSystem: '<S132>/Controller Matrix Cycle' */
    if (localDW->ControllerMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S162>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S173>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S173>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S177>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S177>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S179>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S179>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S181>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S181>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S162>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
            &localDW->COMMTaskSyncbc0_b);
        }

        /* End of Disable for SubSystem: '<S162>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S166>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

          /* Disable for Outport: '<S166>/Send CAN1' */
          localB->Transmissionsubtasks_pw.Equal7_m = false;

          /* Disable for Outport: '<S166>/Receive CAN1' */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S166>/Send CAN2' */
          localB->Transmissionsubtasks_pw.Equal7 = false;

          /* Disable for Outport: '<S166>/Receive CAN2' */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S167>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

          /* Disable for Outport: '<S167>/Send CAN1' */
          localB->Transmissionsubtasks_d.Equal7_m = false;

          /* Disable for Outport: '<S167>/Receive CAN1' */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for Outport: '<S167>/Send CAN2' */
          localB->Transmissionsubtasks_d.Equal7 = false;

          /* Disable for Outport: '<S167>/Receive CAN2' */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S168>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

          /* Disable for Outport: '<S168>/Send CAN1' */
          localB->Transmissionsubtasks_a.Equal7_m = false;

          /* Disable for Outport: '<S168>/Receive CAN1' */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for Outport: '<S168>/Send CAN2' */
          localB->Transmissionsubtasks_a.Equal7 = false;

          /* Disable for Outport: '<S168>/Receive CAN2' */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S162>/COMM Task - Vote3' */

        /* Disable for Outport: '<S162>/Send_Message_CAN1' */
        localB->OR1_oo = false;

        /* Disable for Outport: '<S162>/Send_Message_CAN2' */
        localB->OR4_o = false;

        /* Disable for Outport: '<S162>/Receive_Message_CAN1' */
        localB->OR2_p = false;

        /* Disable for Outport: '<S162>/Receive_Message_CAN2' */
        localB->OR3_bn = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */
        if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
          /* Disable for Enabled SubSystem: '<S390>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
            {
              DemuxmessageCAN1andch_p_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_a_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_g5,
                 &localDW->DemuxmessageCAN1andcheckcohe_g5);
            }

            /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S390>/Process_Messages' */
          localDW->COMPTaskRx_Set_Values_Check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */

        /* Disable for Enabled SubSystem: '<S163>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S391>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_a,
                 &localDW->DemuxmessageCAN1andcheckcoher_a);
            }

            /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S391>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S163>/COMP Task - Test' */
        if (localDW->COMPTaskTest_MODE) {
          /* Disable for Enabled SubSystem: '<S392>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_k,
                 &localDW->DemuxmessageCAN1andcheckcoher_k);
            }

            /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_et.DemuxmessageCAN1andcheckcohe_me)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_et,
                 &localDW->DemuxmessageCAN1andcheckcohe_et);
            }

            /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S392>/Process_Messages' */
          localDW->COMPTaskTest_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMP Task - Test' */

        /* Disable for Enabled SubSystem: '<S163>/COMM Task - Set_Values' */
        if (localDW->COMMTaskSet_Values_MODE_i) {
          /* Disable for Enabled SubSystem: '<S386>/Reception substasks' */
          if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
              &localDW->Receptionsubstasks_j);
          }

          /* End of Disable for SubSystem: '<S386>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S386>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_d_Disable
                (&localB->CheckmsgtransmissionCAN2_i,
                 &localDW->CheckmsgtransmissionCAN2_i);
            }

            /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S395>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S395>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S386>/Transmission subtasks' */

          /* Disable for Outport: '<S386>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

          /* Disable for Outport: '<S386>/Receive CAN1' */
          localB->Receptionsubstasks_j.AND = false;

          /* Disable for Outport: '<S386>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

          /* Disable for Outport: '<S386>/Receive CAN2' */
          localB->Receptionsubstasks_j.AND1 = false;
          localDW->COMMTaskSet_Values_MODE_i = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMM Task - Set_Values' */

        /* Disable for Enabled SubSystem: '<S163>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_MODE) {
          /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
          if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
              &localDW->Receptionsubstasks_jz);
          }

          /* End of Disable for SubSystem: '<S387>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks1' */
          if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
              &localDW->Transmissionsubtasks1);
          }

          /* End of Disable for SubSystem: '<S387>/Transmission subtasks1' */

          /* Disable for Outport: '<S387>/Send CAN1' */
          localB->Transmissionsubtasks1.Equal7_a = false;

          /* Disable for Outport: '<S387>/Receive CAN1' */
          localB->Receptionsubstasks_jz.AND = false;

          /* Disable for Outport: '<S387>/Send CAN2' */
          localB->Transmissionsubtasks1.Equal7 = false;

          /* Disable for Outport: '<S387>/Receive CAN2' */
          localB->Receptionsubstasks_jz.AND1 = false;
          localDW->COMMTaskSyncbc1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMM Task - Sync bc 1' */

        /* Disable for Enabled SubSystem: '<S163>/COMM Task - Test' */
        if (localDW->COMMTaskTest_MODE) {
          /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
          if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
              &localDW->Receptionsubstasks_l);
          }

          /* End of Disable for SubSystem: '<S388>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
          if (localDW->Transmissionsubtasks1_MODE) {
            /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE) {
              /* Disable for Outport: '<S442>/Send CAN1' */
              localB->Equal7_l = false;
              localDW->CheckmsgtransmissionCAN1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE) {
              /* Disable for Outport: '<S443>/Send CAN2' */
              localB->Equal7 = false;
              localDW->CheckmsgtransmissionCAN2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S440>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S440>/Send CAN2' */
            localB->Equal7 = false;
            localDW->Transmissionsubtasks1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

          /* Disable for Outport: '<S388>/Send CAN1' */
          localB->Equal7_l = false;

          /* Disable for Outport: '<S388>/Receive CAN1' */
          localB->Receptionsubstasks_l.AND = false;

          /* Disable for Outport: '<S388>/Send CAN2' */
          localB->Equal7 = false;

          /* Disable for Outport: '<S388>/Receive CAN2' */
          localB->Receptionsubstasks_l.AND1 = false;
          localDW->COMMTaskTest_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMM Task - Test' */

        /* Disable for Outport: '<S163>/Send_Message_CAN1' */
        localB->OR1_o = false;

        /* Disable for Outport: '<S163>/Send_Message_CAN2' */
        localB->OR2_k = false;

        /* Disable for Outport: '<S163>/Receive_Message_CAN1' */
        localB->OR3_b = false;

        /* Disable for Outport: '<S163>/Receive_Message_CAN2' */
        localB->OR4_h = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S159>/controller basic cycle 1' */

      /* Disable for Outport: '<S159>/Send_CAN1' */
      localB->signal1_n = false;

      /* Disable for Outport: '<S159>/Send_CAN2' */
      localB->signal2_j = false;

      /* Disable for Outport: '<S159>/Receive_CAN1' */
      localB->signal3_k = false;

      /* Disable for Outport: '<S159>/Receive_CAN2' */
      localB->signal4_e = false;
      localDW->ControllerMatrixCycle_MODE = false;
    }

    /* End of Disable for SubSystem: '<S132>/Controller Matrix Cycle' */

    /* Disable for Enabled SubSystem: '<S132>/Input Generator Matrix Cycle' */
    if (localDW->InputGeneratorMatrixCycle_MODE) {
      /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 0' */
      if (localDW->inputgeneratorbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S569>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S575>/Process_Messages' */
          if (localDW->Process_Messages_MODE_n) {
            /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
            {
              DemuxmessageCAN1andc_ls_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_d0,
                 &localDW->DemuxmessageCAN1andcheckcohe_d0);
            }

            /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
            {
              DemuxmessageCAN1andch_k_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_h5,
                 &localDW->DemuxmessageCAN1andcheckcohe_h5);
            }

            /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_n = false;
          }

          /* End of Disable for SubSystem: '<S575>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S569>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S569>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_e.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_e,
            &localDW->COMMTaskSyncbc0_e);
        }

        /* End of Disable for SubSystem: '<S569>/COMM Task - Sync bc 0' */

        /* Disable for Outport: '<S569>/Send_Message_CAN1' */
        localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a = false;

        /* Disable for Outport: '<S569>/Send_Message_CAN2' */
        localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7 = false;

        /* Disable for Outport: '<S569>/Receive_Message_CAN1' */
        localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND = false;

        /* Disable for Outport: '<S569>/Receive_Message_CAN2' */
        localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1 = false;
        localDW->inputgeneratorbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S160>/input generator basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 1' */
      if (localDW->inputgeneratorbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S570>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S636>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
            {
              DemuxmessageCAN1andc_ls_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_o,
                 &localDW->DemuxmessageCAN1andcheckcoher_o);
            }

            /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_kb.DemuxmessageCAN1andcheckcohe_ek)
            {
              DemuxmessageCAN1andch_k_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_kb,
                 &localDW->DemuxmessageCAN1andcheckcohe_kb);
            }

            /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S636>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S570>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S570>/COMM Task - Set_Values' */
        if (localDW->COMMTaskSet_Values_MODE) {
          /* Disable for Enabled SubSystem: '<S631>/Reception substasks' */
          if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
              &localDW->Receptionsubstasks_n);
          }

          /* End of Disable for SubSystem: '<S631>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S631>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_a,
                 &localDW->CheckmsgtransmissionCAN1_a);
            }

            /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_d_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S639>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S639>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S631>/Transmission subtasks' */

          /* Disable for Outport: '<S631>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

          /* Disable for Outport: '<S631>/Receive CAN1' */
          localB->Receptionsubstasks_n.AND = false;

          /* Disable for Outport: '<S631>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S631>/Receive CAN2' */
          localB->Receptionsubstasks_n.AND1 = false;
          localDW->COMMTaskSet_Values_MODE = false;
        }

        /* End of Disable for SubSystem: '<S570>/COMM Task - Set_Values' */

        /* Disable for Enabled SubSystem: '<S570>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S570>/COMM Task - Sync bc 1' */

        /* Disable for Outport: '<S570>/Send_Message_CAN1' */
        localB->OR1 = false;

        /* Disable for Outport: '<S570>/Send_Message_CAN2' */
        localB->OR4 = false;

        /* Disable for Outport: '<S570>/Receive_Message_CAN1' */
        localB->OR3 = false;

        /* Disable for Outport: '<S570>/Receive_Message_CAN2' */
        localB->OR2 = false;
        localDW->inputgeneratorbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S160>/input generator basic cycle 1' */

      /* Disable for Outport: '<S160>/Send_CAN1' */
      localB->signal1 = false;

      /* Disable for Outport: '<S160>/Send_CAN2' */
      localB->signal2 = false;

      /* Disable for Outport: '<S160>/Receive_CAN1' */
      localB->signal3 = false;

      /* Disable for Outport: '<S160>/Receive_CAN2' */
      localB->signal4 = false;
      localDW->InputGeneratorMatrixCycle_MODE = false;
    }

    /* End of Disable for SubSystem: '<S132>/Input Generator Matrix Cycle' */

    /* Disable for Outport: '<S132>/Send_Message_CAN1' */
    localB->Switch1[0] = false;

    /* Disable for Outport: '<S132>/Send_Message_CAN2' */
    localB->Switch1[1] = false;

    /* Disable for Outport: '<S132>/Receive_Message_CAN1' */
    localB->Switch1[2] = false;

    /* Disable for Outport: '<S132>/Receive_Message_CAN2' */
    localB->Switch1[3] = false;
    localDW->MatrixCycleManager_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/Matrix Cycle Manager' */

  /* Disable for Chart: '<S36>/Chart1' incorporates:
   *  SubSystem: '<S10>/CAN1 Recieve'
   */
  CAN1Recieve_Disable(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h);

  /* Disable for Chart: '<S36>/Chart2' incorporates:
   *  SubSystem: '<S10>/CAN2 Recieve'
   */
  CAN2Recieve_Disable(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b);

  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */
  if (localDW->DEBUGToggledigitalpinA0_MODE) {
    localDW->DEBUGToggledigitalpinA0_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */

  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */
  if (localDW->DEBUGToggledigitalpinA1_MODE) {
    localDW->DEBUGToggledigitalpinA1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */

  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */
  if (localDW->DEBUGToggledigitalpinD10_MODE) {
    localDW->DEBUGToggledigitalpinD10_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */

  /* Disable for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */
  if (localDW->DEBUGToggledigitalpinA4_MODE) {
    localDW->DEBUGToggledigitalpinA4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */

  /* Disable for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = false;
  }

  /* End of Disable for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Disable for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = false;
  }

  /* End of Disable for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Disable for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = false;
  }

  /* End of Disable for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Disable for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */
  if (localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
    localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = false;
  }

  /* End of Disable for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Disable for Chart: '<S36>/Chart4' incorporates:
   *  SubSystem: '<S10>/Measure EXecution time'
   */
  MeasureEXecutiontime_Disable(&localDW->MeasureEXecutiontime_d);
}

/* Start for function-call system: '<S10>/TTA System' */
void TTASystem_Start(rtDW_TTASystem *localDW)
{
  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */

  /* Start for M-S-Function: '<S135>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN7, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */

  /* Start for DataStoreMemory: '<S36>/Data Store Memory13' */
  localDW->Initialization_flag = true;

  /* Start for Chart: '<S36>/Chart1' incorporates:
   *  SubSystem: '<S10>/CAN1 Recieve'
   */
  CAN1Recieve_Start();

  /* Start for Chart: '<S36>/Chart2' incorporates:
   *  SubSystem: '<S10>/CAN2 Recieve'
   */
  CAN2Recieve_Start();

  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */

  /* Start for M-S-Function: '<S133>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTC_PIN0, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */

  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */

  /* Start for M-S-Function: '<S134>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */

  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */

  /* Start for M-S-Function: '<S137>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN4, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */

  /* Start for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */

  /* Start for M-S-Function: '<S136>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN9, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */

  /* Start for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Start for M-S-Function: '<S155>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Start for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Start for M-S-Function: '<S156>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTA_PIN5, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Start for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Start for M-S-Function: '<S157>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN12, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Start for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Start for M-S-Function: '<S158>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTG_PIN15, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Start for Chart: '<S36>/Chart4' incorporates:
   *  SubSystem: '<S10>/Measure EXecution time'
   */
  MeasureEXecutiontime_Start();
}

/* Output and update for function-call system: '<S10>/TTA System' */
void TTASystem(rtB_TTASystem *localB, const rtC_TTASystem *localC,
               rtDW_TTASystem *localDW, real_T *rtd_Board_ID, uint16_T
               *rtd_Local_Ticks, real_T *rtd_Master_ID, msg_buffer_type
               *rtd_Msg_Rx_CAN1, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
               *rtd_Msg_Rx_Ticks_CAN1, uint16_T *rtd_Msg_Rx_Ticks_CAN2,
               msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
               *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
               *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T
               *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
               *rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0, real_T
               *rtd_Toggle_Pin_D12, real_T *rtd_Toggle_Pin_D13, real_T
               *rtd_Toggle_Pin_D8, real_T *rtd_Toggle_Pin_D9, uint32_T
               *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
               *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2)
{
  int32_T sigIdx;
  int_T linIx;
  boolean_T rtb_OR1_l;
  boolean_T rtb_Equal_kj;
  real_T rtb_Switch1_f;
  uint16_T rtb_DataStoreRead8_c;
  boolean_T rtb_AND_ck;
  boolean_T rtb_AND1_e;
  boolean_T rtb_AND2_n;
  boolean_T rtb_AND6_f;
  boolean_T rtb_AND8_k;
  boolean_T rtb_AND7_m;
  real_T rtb_Plus_j;
  real_T rtb_Plus1_b;
  real_T rtb_Plus2_p;
  int8_T rtb_FindNonzeroElements[3];
  real_T rtb_signal1[20];
  real_T rtb_signal2[20];
  boolean_T rtb_AND17_f;
  boolean_T rtb_AND17_b;
  boolean_T rtb_AND17;
  uint8_T rtb_Switch_j_Buffer_1;
  boolean_T rtb_DataStoreRead1_bw;
  boolean_T rtb_DataStoreRead2_e;
  msg_buffer_type rtb_DataStoreRead_pt;
  msg_buffer_type rtb_DataStoreRead3_nn;
  real_T rtb_DataStoreRead15_b;
  boolean_T rtb_AND1_ml;
  boolean_T rtb_DataStoreRead1_il;
  boolean_T rtb_DataStoreRead2_oh;
  msg_buffer_type rtb_DataStoreRead_m3;
  msg_buffer_type rtb_DataStoreRead3_ez;
  boolean_T rtb_AND_br;
  boolean_T rtb_AND1_km;
  boolean_T rtb_DataStoreRead1_j2;
  boolean_T rtb_DataStoreRead2_fq;
  msg_buffer_type rtb_DataStoreRead_ak;
  msg_buffer_type rtb_DataStoreRead3_d;
  boolean_T rtb_AND_b0;
  boolean_T rtb_AND1_bt;
  boolean_T rtb_DataStoreRead1_ax;
  boolean_T rtb_DataStoreRead2_cx;
  msg_buffer_type rtb_DataStoreRead_l5i;
  msg_buffer_type rtb_DataStoreRead3_op;
  boolean_T rtb_AND_fe;
  boolean_T rtb_AND1_ky;
  boolean_T rtb_Equal2_ic;
  boolean_T rtb_NOT_ch;
  boolean_T rtb_Equal2_hs;
  boolean_T rtb_NOT_jr;
  boolean_T rtb_Equal2_o;
  boolean_T rtb_NOT_ar;
  boolean_T rtb_Equal1_hs;
  boolean_T rtb_DataStoreRead1_b5;
  boolean_T rtb_DataStoreRead2_na;
  msg_buffer_type rtb_DataStoreRead_i25;
  msg_buffer_type rtb_DataStoreRead3_km;
  boolean_T rtb_AND1_dx;
  boolean_T rtb_DataStoreRead1_b;
  boolean_T rtb_DataStoreRead2_pe;
  msg_buffer_type rtb_DataStoreRead_dg;
  msg_buffer_type rtb_DataStoreRead3_ll;
  real_T rtb_DataStoreRead15_k;
  boolean_T rtb_AND1_b;
  boolean_T rtb_DataStoreRead1_dj;
  boolean_T rtb_DataStoreRead2_k;
  msg_buffer_type rtb_DataStoreRead_m;
  msg_buffer_type rtb_DataStoreRead3_e;
  real_T rtb_DataStoreRead15;
  boolean_T rtb_AND1_ob;
  boolean_T rtb_AND_o;
  boolean_T rtb_NOT_jl;
  boolean_T rtb_Equal1_dc;
  boolean_T rtb_NOT_d;
  boolean_T rtb_NOT_k;
  boolean_T rtb_DataStoreRead1_af;
  boolean_T rtb_DataStoreRead2_f;
  msg_buffer_type rtb_DataStoreRead_c;
  msg_buffer_type rtb_DataStoreRead3_ou;
  boolean_T rtb_AND1_p3;
  boolean_T rtb_Equal2_d;
  boolean_T rtb_AND1_ke;
  boolean_T rtb_DataStoreRead1_ab;
  boolean_T rtb_DataStoreRead2_ph;
  msg_buffer_type rtb_DataStoreRead_hs;
  msg_buffer_type rtb_DataStoreRead3;
  boolean_T rtb_AND1_ly;
  boolean_T rtb_AND2_o;
  boolean_T rtb_NOT_l;
  boolean_T rtb_NOT_id;
  uint16_T rtb_DataStoreRead_om;
  boolean_T rtb_AND_oxj;
  boolean_T rtb_AND1_gy;
  boolean_T rtb_NOT_h4;
  uint16_T rtb_DataStoreRead_i;
  boolean_T rtb_AND_ex;
  boolean_T rtb_AND1_ai;
  uint8_T rtb_Cast_c;
  uint8_T rtb_Cast_db;
  uint8_T rtb_Cast_nt;
  uint8_T rtb_Cast_k;
  uint8_T rtb_Cast_p;
  uint8_T rtb_Cast_kq;
  uint8_T rtb_Cast4;
  uint8_T rtb_Cast1_g;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast9;
  msg_buffer_type Msg_Rx_g;
  msg_buffer_type Msg_Rx;
  uint32_T qY;
  uint32_T qY_0;
  uint16_T u0;
  uint16_T u1;
  boolean_T rtb_AND6_d_tmp;
  int32_T exitg1;

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A2' incorporates:
   *  EnablePort: '<S123>/Enable'
   */
  /* Constant: '<S36>/Constant2' */
  if (1.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA2_MODE) {
      localDW->DEBUGToggledigitalpinA2_MODE = true;
    }

    /* Switch: '<S123>/Switch' incorporates:
     *  DataStoreRead: '<S123>/Data Store Read'
     */
    if (localDW->A2_Pin_State) {
      /* DataStoreWrite: '<S123>/Data Store Write1' incorporates:
       *  Constant: '<S123>/Constant1'
       */
      localDW->A2_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S123>/Data Store Write1' incorporates:
       *  Constant: '<S123>/Constant'
       */
      localDW->A2_Pin_State = true;
    }

    /* End of Switch: '<S123>/Switch' */
    /* DataStoreRead: '<S123>/Data Store Read1' */
    localB->DataStoreRead1_o = localDW->A2_Pin_State;

    /* Update for M-S-Function: '<S135>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o == 0) {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA2_MODE) {
      localDW->DEBUGToggledigitalpinA2_MODE = false;
    }
  }

  /* End of Constant: '<S36>/Constant2' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin A2' */

  /* Outputs for Enabled SubSystem: '<S36>/Initialization' incorporates:
   *  EnablePort: '<S126>/Enable'
   */
  /* DataStoreRead: '<S36>/Data Store Read' incorporates:
   *  Constant: '<S126>/Board nr1'
   *  Constant: '<S126>/Board nr2'
   *  Constant: '<S126>/Board nr3'
   *  Constant: '<S139>/SET'
   *  DataStoreRead: '<S126>/Data Store Read1'
   *  Logic: '<S126>/AND'
   *  Logic: '<S126>/OR'
   *  Logic: '<S126>/OR2'
   *  RelationalOperator: '<S126>/Equal'
   *  RelationalOperator: '<S126>/Equal1'
   *  RelationalOperator: '<S126>/Equal2'
   */
  if (localDW->Initialization_flag) {
    if (!localDW->Initialization_MODE) {
      localDW->Initialization_MODE = true;
    }

    /* Logic: '<S126>/OR1' */
    rtb_OR1_l = ((*rtd_New_Msg_Ready_CAN1) || (*rtd_New_Msg_Ready_CAN2));

    /* Outputs for Enabled SubSystem: '<S126>/RoleID and Global Time init' incorporates:
     *  EnablePort: '<S139>/Enable'
     */
    if ((((*rtd_Board_ID == 1.0) || (*rtd_Board_ID == 2.0) || (*rtd_Board_ID ==
           3.0)) && localDW->Initialization_Timeout) || rtb_OR1_l) {
      if (!localDW->RoleIDandGlobalTimeinit_MODE) {
        localDW->RoleIDandGlobalTimeinit_MODE = true;
      }

      /* Outputs for Enabled SubSystem: '<S139>/Global Time Initialization Slave' incorporates:
       *  EnablePort: '<S141>/Enable'
       */
      if (rtb_OR1_l) {
        /* DataStoreWrite: '<S141>/Data Store Write4' incorporates:
         *  Constant: '<S141>/SET1 '
         */
        localDW->BC0_Sync_processed = true;

        /* RelationalOperator: '<S141>/Equal' incorporates:
         *  Constant: '<S141>/Constant'
         */
        rtb_Equal_kj = (*rtd_New_Msg_Ready_CAN1 == 1.0);

        /* Switch: '<S141>/Switch' incorporates:
         *  DataStoreRead: '<S141>/Data Store Read1'
         *  DataStoreRead: '<S141>/Data Store Read2'
         */
        if (rtb_Equal_kj) {
          rtb_Switch_j_Buffer_1 = rtd_Msg_Rx_CAN1->Buffer_1;
        } else {
          rtb_Switch_j_Buffer_1 = rtd_Msg_Rx_CAN2->Buffer_1;
        }

        /* End of Switch: '<S141>/Switch' */

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift3' */
        BitShift3(rtb_Switch_j_Buffer_1, &localB->BitShift3_i);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift3' */

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift1' */
        /* MATLAB Function: '<S144>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S149>:1' */
        /* '<S149>:1:8' */
        Rx_init_mc = (uint8_T)((uint32_T)localB->BitShift3_i.y >> 5);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift1' */

        /* Switch: '<S141>/Switch1' */
        if (rtb_Equal_kj) {
          /* DataTypeConversion: '<S141>/Cast' incorporates:
           *  Constant: '<S141>/Constant1'
           *  Constant: '<S141>/Constant3'
           *  Constant: '<S141>/delay_estimation_1'
           *  Product: '<S141>/Multiply'
           *  Sum: '<S141>/Sum'
           */
          Rx_init_LT = (uint16_T)((COMM_Phase1 * (real_T)Rx_init_mc + 0.0) + 3.0);
        } else {
          /* DataTypeConversion: '<S141>/Cast' incorporates:
           *  Constant: '<S141>/Constant2'
           *  Constant: '<S141>/Constant3'
           *  Constant: '<S141>/delay_estimation_2'
           *  Product: '<S141>/Multiply1'
           *  Sum: '<S141>/Sum1'
           */
          Rx_init_LT = (uint16_T)((COMM_Phase2 * (real_T)Rx_init_mc + 0.0) + 3.0);
        }

        /* End of Switch: '<S141>/Switch1' */

        /* DataStoreWrite: '<S141>/Data Store Write1' */
        *rtd_Local_Ticks = Rx_init_LT;

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift' */
        /* MATLAB Function: '<S143>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S148>:1' */
        /* '<S148>:1:8' */
        Rx_init_bc = (uint8_T)((uint32_T)rtb_Switch_j_Buffer_1 >> 7);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift' */

        /* DataStoreWrite: '<S141>/Data Store Write2' */
        localDW->basic_cycle_count = Rx_init_bc;

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift4' */
        BitShift4(rtb_Switch_j_Buffer_1, &localB->BitShift4_d);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift4' */

        /* Outputs for Atomic SubSystem: '<S142>/Bit Shift2' */
        /* MATLAB Function: '<S145>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S150>:1' */
        /* '<S150>:1:8' */
        Rx_init_id = (uint8_T)((uint32_T)localB->BitShift4_d.y >> 4);

        /* End of Outputs for SubSystem: '<S142>/Bit Shift2' */

        /* DataStoreWrite: '<S141>/Data Store Write3' incorporates:
         *  DataTypeConversion: '<S141>/Cast1'
         */
        *rtd_Master_ID = Rx_init_id;
      }

      /* End of Outputs for SubSystem: '<S139>/Global Time Initialization Slave' */

      /* Outputs for Enabled SubSystem: '<S139>/Global Time Initialization Master' incorporates:
       *  EnablePort: '<S140>/Enable'
       */
      if (localDW->Initialization_Timeout) {
        /* DataStoreWrite: '<S140>/Data Store Write3' incorporates:
         *  Constant: '<S140>/Board nr1'
         */
        *rtd_Master_ID = 1.0;

        /* DataStoreWrite: '<S140>/Data Store Write' */
        *rtd_Local_Ticks = localC->Cast_i;

        /* DataStoreWrite: '<S140>/Data Store Write1' */
        localDW->basic_cycle_count = localC->Cast1;
      }

      /* End of Outputs for SubSystem: '<S139>/Global Time Initialization Master' */

      /* Switch: '<S139>/Switch2' incorporates:
       *  Constant: '<S139>/Constant1'
       *  DataStoreWrite: '<S139>/Data Store Write'
       *  Switch: '<S139>/Switch1'
       */
      if (rtb_OR1_l) {
        localDW->Role_ID = 2.0;
      } else {
        if (localDW->Initialization_Timeout) {
          /* Switch: '<S139>/Switch1' incorporates:
           *  Constant: '<S139>/Constant'
           *  DataStoreWrite: '<S139>/Data Store Write'
           */
          localDW->Role_ID = 1.0;
        }
      }

      /* End of Switch: '<S139>/Switch2' */

      /* DataStoreWrite: '<S139>/Data Store Write3' incorporates:
       *  Constant: '<S139>/RESET2'
       */
      *rtd_New_Msg_Ready_CAN1 = false;

      /* DataStoreWrite: '<S139>/Data Store Write5' incorporates:
       *  Constant: '<S139>/RESET3'
       */
      *rtd_New_Msg_Ready_CAN2 = false;

      /* DataStoreWrite: '<S139>/Data Store Write4' incorporates:
       *  Constant: '<S139>/RESET'
       */
      localDW->Initialization_Timeout = false;

      /* DataStoreWrite: '<S139>/Data Store Write2' incorporates:
       *  Constant: '<S139>/RESET1'
       */
      localDW->Delay_Counter = 0.0;
      localB->SET = 1.0;
    } else {
      if (localDW->RoleIDandGlobalTimeinit_MODE) {
        /* Disable for Outport: '<S139>/Finish Initialization' */
        localB->SET = 0.0;
        localDW->RoleIDandGlobalTimeinit_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S126>/RoleID and Global Time init' */

    /* Logic: '<S126>/NOT' incorporates:
     *  Constant: '<S126>/Board nr1'
     *  Constant: '<S126>/Board nr2'
     *  Constant: '<S126>/Board nr3'
     *  Constant: '<S139>/SET'
     *  DataStoreRead: '<S126>/Data Store Read1'
     *  DataStoreWrite: '<S126>/Data Store Write1'
     *  Logic: '<S126>/AND'
     *  Logic: '<S126>/OR'
     *  Logic: '<S126>/OR2'
     *  RelationalOperator: '<S126>/Equal'
     *  RelationalOperator: '<S126>/Equal1'
     *  RelationalOperator: '<S126>/Equal2'
     */
    localDW->Initialization_flag = (localB->SET == 0.0);

    /* RelationalOperator: '<S138>/GreaterThan' incorporates:
     *  Constant: '<S126>/Constant'
     *  DataStoreRead: '<S138>/Data Store Read1'
     *  DataStoreWrite: '<S126>/Data Store Write'
     */
    localDW->Initialization_Timeout = (localDW->Delay_Counter >= 424.0);

    /* Switch: '<S138>/Switch' incorporates:
     *  Constant: '<S138>/Increment1'
     *  Constant: '<S138>/Reset'
     *  DataStoreRead: '<S138>/Data Store Read'
     *  DataStoreWrite: '<S126>/Data Store Write'
     *  DataStoreWrite: '<S138>/Data Store Write2'
     *  Sum: '<S138>/Add2'
     */
    if (localDW->Initialization_Timeout) {
      localDW->Delay_Counter = (-1.0);
    } else {
      localDW->Delay_Counter += 1.0;
    }

    /* End of Switch: '<S138>/Switch' */
  } else {
    if (localDW->Initialization_MODE) {
      /* Disable for Enabled SubSystem: '<S126>/RoleID and Global Time init' */
      if (localDW->RoleIDandGlobalTimeinit_MODE) {
        /* Disable for Outport: '<S139>/Finish Initialization' */
        localB->SET = 0.0;
        localDW->RoleIDandGlobalTimeinit_MODE = false;
      }

      /* End of Disable for SubSystem: '<S126>/RoleID and Global Time init' */
      localDW->Initialization_MODE = false;
    }
  }

  /* End of DataStoreRead: '<S36>/Data Store Read' */
  /* End of Outputs for SubSystem: '<S36>/Initialization' */

  /* Outputs for Enabled SubSystem: '<S36>/Basic Cycle Increment' incorporates:
   *  EnablePort: '<S115>/Enable'
   */
  /* RelationalOperator: '<S36>/Equal' incorporates:
   *  Constant: '<S36>/Constant'
   *  Switch: '<S36>/Switch'
   */
  if (*rtd_Local_Ticks == 212.0) {
    /* DataStoreWrite: '<S115>/Data Store Write' incorporates:
     *  Constant: '<S115>/Reset'
     */
    *rtd_Local_Ticks = ((uint16_T)0U);

    /* Switch: '<S115>/Switch' incorporates:
     *  Constant: '<S115>/Increment'
     *  DataStoreRead: '<S115>/Data Store Read4'
     *  DataStoreRead: '<S115>/Data Store Read5'
     *  RelationalOperator: '<S115>/LessThanOrEqual'
     *  Sum: '<S115>/Add'
     */
    if (localDW->basic_cycle_count < localC->Add1) {
      bacic_cycle_s = (uint8_T)((uint32_T)localDW->basic_cycle_count + ((uint8_T)
        1U));
    } else {
      bacic_cycle_s = localC->Cast_e;
    }

    /* End of Switch: '<S115>/Switch' */

    /* DataStoreWrite: '<S115>/Data Store Write3' */
    localDW->basic_cycle_count = bacic_cycle_s;
  }

  /* End of RelationalOperator: '<S36>/Equal' */
  /* End of Outputs for SubSystem: '<S36>/Basic Cycle Increment' */

  /* Outputs for Enabled SubSystem: '<S36>/Matrix Cycle Manager' incorporates:
   *  EnablePort: '<S132>/Enable'
   */
  /* Logic: '<S36>/NOT1' incorporates:
   *  Constant: '<S132>/Constant3'
   *  Constant: '<S159>/Constant1'
   *  Constant: '<S160>/Constant1'
   *  Constant: '<S162>/Constant'
   *  Constant: '<S162>/Constant12'
   *  Constant: '<S162>/Constant14'
   *  Constant: '<S162>/Constant17'
   *  Constant: '<S162>/Constant19'
   *  Constant: '<S162>/Constant2'
   *  Constant: '<S162>/Constant21'
   *  Constant: '<S162>/Constant23'
   *  Constant: '<S162>/Constant25'
   *  Constant: '<S162>/Constant27'
   *  Constant: '<S162>/Constant28'
   *  Constant: '<S162>/Constant3'
   *  Constant: '<S162>/Constant31'
   *  Constant: '<S162>/Constant33'
   *  Constant: '<S162>/Constant34'
   *  Constant: '<S162>/Constant6'
   *  Constant: '<S162>/Constant8'
   *  Constant: '<S162>/Constant9'
   *  Constant: '<S163>/Constant'
   *  Constant: '<S163>/Constant12'
   *  Constant: '<S163>/Constant13'
   *  Constant: '<S163>/Constant16'
   *  Constant: '<S163>/Constant19'
   *  Constant: '<S163>/Constant4'
   *  Constant: '<S163>/Constant5'
   *  Constant: '<S163>/Constant6'
   *  Constant: '<S163>/Constant7'
   *  Constant: '<S163>/Constant8'
   *  Constant: '<S173>/Constant'
   *  Constant: '<S174>/Constant1'
   *  Constant: '<S174>/Constant4'
   *  Constant: '<S176>/Constant4'
   *  Constant: '<S177>/Constant1'
   *  Constant: '<S178>/Constant4'
   *  Constant: '<S179>/Constant1'
   *  Constant: '<S180>/Constant4'
   *  Constant: '<S181>/Constant1'
   *  Constant: '<S390>/Constant51'
   *  Constant: '<S391>/Constant'
   *  Constant: '<S392>/Constant'
   *  Constant: '<S393>/Constant1'
   *  Constant: '<S399>/Constant'
   *  Constant: '<S440>/Constant6'
   *  Constant: '<S440>/Constant7'
   *  Constant: '<S442>/Constant22'
   *  Constant: '<S442>/Constant24'
   *  Constant: '<S442>/Constant8'
   *  Constant: '<S443>/Constant22'
   *  Constant: '<S443>/Constant24'
   *  Constant: '<S443>/Constant8'
   *  Constant: '<S444>/Constant'
   *  Constant: '<S444>/Constant2'
   *  Constant: '<S569>/Constant'
   *  Constant: '<S569>/Constant17'
   *  Constant: '<S569>/Constant2'
   *  Constant: '<S569>/Constant25'
   *  Constant: '<S569>/Constant31'
   *  Constant: '<S569>/Constant4'
   *  Constant: '<S570>/Constant'
   *  Constant: '<S570>/Constant12'
   *  Constant: '<S570>/Constant16'
   *  Constant: '<S570>/Constant4'
   *  Constant: '<S570>/Constant5'
   *  Constant: '<S570>/Constant6'
   *  Constant: '<S570>/Constant7'
   *  Constant: '<S570>/Constant8'
   *  Constant: '<S575>/Constant'
   *  Constant: '<S576>/Constant1'
   *  Constant: '<S636>/Constant'
   *  Constant: '<S637>/Constant1'
   *  Constant: '<S643>/Constant'
   *  Constant: '<S643>/Constant12'
   *  DataStoreRead: '<S132>/Data Store Read10'
   *  DataStoreRead: '<S163>/Data Store Read11'
   *  DataStoreRead: '<S163>/Data Store Read2'
   *  DataStoreRead: '<S163>/Data Store Read3'
   *  DataStoreRead: '<S163>/Data Store Read6'
   *  DataStoreRead: '<S163>/Data Store Read7'
   *  DataStoreRead: '<S174>/Data Store Read'
   *  DataStoreRead: '<S174>/Data Store Read1'
   *  DataStoreRead: '<S176>/Data Store Read5'
   *  DataStoreRead: '<S178>/Data Store Read5'
   *  DataStoreRead: '<S180>/Data Store Read5'
   *  DataStoreRead: '<S36>/Data Store Read8'
   *  DataStoreRead: '<S461>/Data Store Read6'
   *  DataStoreRead: '<S576>/Data Store Read'
   *  DataStoreRead: '<S633>/Data Store Read'
   *  DataStoreRead: '<S637>/Data Store Read1'
   *  DataStoreWrite: '<S263>/Data Store Write2'
   *  DataStoreWrite: '<S505>/Data Store Write2'
   *  DataStoreWrite: '<S598>/Data Store Write2'
   *  DataStoreWrite: '<S687>/Data Store Write2'
   *  Logic: '<S162>/AND1'
   *  Logic: '<S162>/AND10'
   *  Logic: '<S162>/AND11'
   *  Logic: '<S162>/AND12'
   *  Logic: '<S162>/AND13'
   *  Logic: '<S162>/AND14'
   *  Logic: '<S162>/AND15'
   *  Logic: '<S162>/AND16'
   *  Logic: '<S162>/AND18'
   *  Logic: '<S162>/AND19'
   *  Logic: '<S162>/AND2'
   *  Logic: '<S162>/AND3'
   *  Logic: '<S162>/AND4'
   *  Logic: '<S162>/AND5'
   *  Logic: '<S162>/AND6'
   *  Logic: '<S162>/AND7'
   *  Logic: '<S162>/AND8'
   *  Logic: '<S162>/AND9'
   *  Logic: '<S162>/NOT1'
   *  Logic: '<S163>/AND'
   *  Logic: '<S163>/AND1'
   *  Logic: '<S163>/AND17'
   *  Logic: '<S163>/AND18'
   *  Logic: '<S163>/AND19'
   *  Logic: '<S163>/AND2'
   *  Logic: '<S163>/AND20'
   *  Logic: '<S163>/AND3'
   *  Logic: '<S163>/AND4'
   *  Logic: '<S163>/AND5'
   *  Logic: '<S163>/AND6'
   *  Logic: '<S163>/AND7'
   *  Logic: '<S163>/AND8'
   *  Logic: '<S163>/NOT1'
   *  Logic: '<S163>/NOT2'
   *  Logic: '<S163>/NOT3'
   *  Logic: '<S163>/NOT4'
   *  Logic: '<S163>/NOT5'
   *  Logic: '<S171>/AND'
   *  Logic: '<S173>/AND'
   *  Logic: '<S174>/AND'
   *  Logic: '<S174>/AND1'
   *  Logic: '<S176>/AND'
   *  Logic: '<S178>/AND'
   *  Logic: '<S180>/AND'
   *  Logic: '<S390>/AND'
   *  Logic: '<S390>/AND2'
   *  Logic: '<S391>/AND'
   *  Logic: '<S392>/AND'
   *  Logic: '<S392>/AND4'
   *  Logic: '<S393>/AND1'
   *  Logic: '<S440>/AND'
   *  Logic: '<S440>/AND1'
   *  Logic: '<S569>/AND1'
   *  Logic: '<S569>/AND15'
   *  Logic: '<S569>/AND16'
   *  Logic: '<S569>/AND18'
   *  Logic: '<S569>/AND19'
   *  Logic: '<S569>/AND2'
   *  Logic: '<S569>/NOT1'
   *  Logic: '<S570>/AND1'
   *  Logic: '<S570>/AND18'
   *  Logic: '<S570>/AND19'
   *  Logic: '<S570>/AND2'
   *  Logic: '<S570>/AND20'
   *  Logic: '<S570>/AND3'
   *  Logic: '<S570>/AND4'
   *  Logic: '<S570>/AND5'
   *  Logic: '<S570>/NOT2'
   *  Logic: '<S573>/AND'
   *  Logic: '<S575>/AND'
   *  Logic: '<S576>/AND'
   *  Logic: '<S576>/AND1'
   *  Logic: '<S576>/AND2'
   *  Logic: '<S576>/NOT'
   *  Logic: '<S633>/AND'
   *  Logic: '<S636>/AND'
   *  Logic: '<S637>/AND3'
   *  Logic: '<S637>/AND4'
   *  Logic: '<S637>/NOT1'
   *  Math: '<S442>/Mod'
   *  Math: '<S443>/Mod'
   *  RelationalOperator: '<S132>/Equal3'
   *  RelationalOperator: '<S159>/Equal1'
   *  RelationalOperator: '<S160>/Equal1'
   *  RelationalOperator: '<S162>/GreaterThan10'
   *  RelationalOperator: '<S162>/GreaterThan11'
   *  RelationalOperator: '<S162>/GreaterThan12'
   *  RelationalOperator: '<S162>/GreaterThan13'
   *  RelationalOperator: '<S162>/GreaterThan14'
   *  RelationalOperator: '<S162>/GreaterThan15'
   *  RelationalOperator: '<S162>/GreaterThan16'
   *  RelationalOperator: '<S162>/GreaterThan17'
   *  RelationalOperator: '<S162>/GreaterThan18'
   *  RelationalOperator: '<S162>/GreaterThan19'
   *  RelationalOperator: '<S162>/GreaterThan2'
   *  RelationalOperator: '<S162>/GreaterThan20'
   *  RelationalOperator: '<S162>/GreaterThan21'
   *  RelationalOperator: '<S162>/GreaterThan22'
   *  RelationalOperator: '<S162>/GreaterThan23'
   *  RelationalOperator: '<S162>/GreaterThan24'
   *  RelationalOperator: '<S162>/GreaterThan25'
   *  RelationalOperator: '<S162>/GreaterThan26'
   *  RelationalOperator: '<S162>/GreaterThan27'
   *  RelationalOperator: '<S162>/GreaterThan28'
   *  RelationalOperator: '<S162>/GreaterThan29'
   *  RelationalOperator: '<S162>/GreaterThan3'
   *  RelationalOperator: '<S162>/GreaterThan30'
   *  RelationalOperator: '<S162>/GreaterThan31'
   *  RelationalOperator: '<S162>/GreaterThan32'
   *  RelationalOperator: '<S162>/GreaterThan33'
   *  RelationalOperator: '<S162>/GreaterThan4'
   *  RelationalOperator: '<S162>/GreaterThan5'
   *  RelationalOperator: '<S162>/GreaterThan6'
   *  RelationalOperator: '<S162>/GreaterThan7'
   *  RelationalOperator: '<S162>/GreaterThan8'
   *  RelationalOperator: '<S162>/GreaterThan9'
   *  RelationalOperator: '<S163>/GreaterThan'
   *  RelationalOperator: '<S163>/GreaterThan1'
   *  RelationalOperator: '<S163>/GreaterThan10'
   *  RelationalOperator: '<S163>/GreaterThan11'
   *  RelationalOperator: '<S163>/GreaterThan12'
   *  RelationalOperator: '<S163>/GreaterThan13'
   *  RelationalOperator: '<S163>/GreaterThan2'
   *  RelationalOperator: '<S163>/GreaterThan3'
   *  RelationalOperator: '<S163>/GreaterThan34'
   *  RelationalOperator: '<S163>/GreaterThan35'
   *  RelationalOperator: '<S163>/GreaterThan4'
   *  RelationalOperator: '<S163>/GreaterThan5'
   *  RelationalOperator: '<S163>/GreaterThan6'
   *  RelationalOperator: '<S163>/GreaterThan7'
   *  RelationalOperator: '<S163>/GreaterThan8'
   *  RelationalOperator: '<S163>/GreaterThan9'
   *  RelationalOperator: '<S169>/Equal'
   *  RelationalOperator: '<S170>/Equal'
   *  RelationalOperator: '<S171>/Equal2'
   *  RelationalOperator: '<S172>/Equal2'
   *  RelationalOperator: '<S174>/Equal'
   *  RelationalOperator: '<S174>/Equal1'
   *  RelationalOperator: '<S174>/Equal2'
   *  RelationalOperator: '<S175>/Equal'
   *  RelationalOperator: '<S176>/Equal'
   *  RelationalOperator: '<S176>/Equal2'
   *  RelationalOperator: '<S178>/Equal'
   *  RelationalOperator: '<S178>/Equal2'
   *  RelationalOperator: '<S180>/Equal'
   *  RelationalOperator: '<S180>/Equal2'
   *  RelationalOperator: '<S389>/Equal2'
   *  RelationalOperator: '<S390>/Equal1'
   *  RelationalOperator: '<S392>/Equal1'
   *  RelationalOperator: '<S393>/Equal3'
   *  RelationalOperator: '<S395>/Equal16'
   *  RelationalOperator: '<S440>/Equal16'
   *  RelationalOperator: '<S440>/GreaterThan2'
   *  RelationalOperator: '<S440>/GreaterThan3'
   *  RelationalOperator: '<S442>/Equal4'
   *  RelationalOperator: '<S443>/Equal4'
   *  RelationalOperator: '<S569>/GreaterThan2'
   *  RelationalOperator: '<S569>/GreaterThan3'
   *  RelationalOperator: '<S569>/GreaterThan30'
   *  RelationalOperator: '<S569>/GreaterThan31'
   *  RelationalOperator: '<S569>/GreaterThan32'
   *  RelationalOperator: '<S569>/GreaterThan33'
   *  RelationalOperator: '<S569>/GreaterThan4'
   *  RelationalOperator: '<S569>/GreaterThan5'
   *  RelationalOperator: '<S570>/GreaterThan10'
   *  RelationalOperator: '<S570>/GreaterThan11'
   *  RelationalOperator: '<S570>/GreaterThan2'
   *  RelationalOperator: '<S570>/GreaterThan3'
   *  RelationalOperator: '<S570>/GreaterThan34'
   *  RelationalOperator: '<S570>/GreaterThan35'
   *  RelationalOperator: '<S570>/GreaterThan4'
   *  RelationalOperator: '<S570>/GreaterThan5'
   *  RelationalOperator: '<S570>/GreaterThan6'
   *  RelationalOperator: '<S570>/GreaterThan7'
   *  RelationalOperator: '<S570>/GreaterThan8'
   *  RelationalOperator: '<S570>/GreaterThan9'
   *  RelationalOperator: '<S573>/Equal1'
   *  RelationalOperator: '<S573>/Equal2'
   *  RelationalOperator: '<S574>/Equal2'
   *  RelationalOperator: '<S576>/Equal3'
   *  RelationalOperator: '<S633>/Equal1'
   *  RelationalOperator: '<S633>/Equal2'
   *  RelationalOperator: '<S637>/Equal3'
   *  RelationalOperator: '<S639>/Equal16'
   *  Sum: '<S442>/Minus'
   *  Sum: '<S443>/Minus'
   */
  if (!localDW->Initialization_flag) {
    if (!localDW->MatrixCycleManager_MODE) {
      localDW->MatrixCycleManager_MODE = true;
    }

    /* Logic: '<S132>/OR' incorporates:
     *  Constant: '<S132>/Constant'
     *  Constant: '<S132>/Constant1'
     *  Constant: '<S132>/Constant2'
     *  RelationalOperator: '<S132>/Equal'
     *  RelationalOperator: '<S132>/Equal1'
     *  RelationalOperator: '<S132>/Equal2'
     */
    rtb_OR1_l = ((*rtd_Board_ID == 1.0) || (*rtd_Board_ID == 2.0) ||
                 (*rtd_Board_ID == 3.0));

    /* Outputs for Enabled SubSystem: '<S132>/Controller Matrix Cycle' incorporates:
     *  EnablePort: '<S159>/Enable'
     */
    if (rtb_OR1_l) {
      if (!localDW->ControllerMatrixCycle_MODE) {
        localDW->ControllerMatrixCycle_MODE = true;
      }

      /* RelationalOperator: '<S159>/Equal' incorporates:
       *  Constant: '<S159>/Constant'
       *  DataStoreRead: '<S132>/Data Store Read10'
       */
      rtb_Equal_kj = (localDW->basic_cycle_count == 0.0);

      /* Outputs for Enabled SubSystem: '<S159>/controller basic cycle 0' incorporates:
       *  EnablePort: '<S162>/Enable'
       */
      if (rtb_Equal_kj) {
        if (!localDW->controllerbasiccycle0_MODE) {
          localDW->controllerbasiccycle0_MODE = true;
        }

        /* DataStoreRead: '<S162>/Data Store Read8' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Check Timeouts' incorporates:
         *  EnablePort: '<S169>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S169>/Timeout and Board error counter' incorporates:
         *  EnablePort: '<S254>/Enable'
         */
        if ((*rtd_Local_Ticks >= 196.0) && (*rtd_Local_Ticks < localC->Sum14) &&
            (*rtd_Local_Ticks == 196.0)) {
          /* Logic: '<S254>/AND' incorporates:
           *  Constant: '<S254>/Constant'
           *  DataStoreRead: '<S254>/Data Store Read1'
           *  Logic: '<S254>/NOT'
           *  RelationalOperator: '<S254>/Equal'
           */
          rtb_AND_ck = ((1.0 != *rtd_Board_ID) && (!localDW->BC0_Vote1_processed));

          /* Switch: '<S254>/Switch2' incorporates:
           *  Constant: '<S254>/Constant6'
           *  DataStoreRead: '<S254>/Data Store Read5'
           *  DataStoreWrite: '<S254>/Data Store Write1'
           *  Sum: '<S254>/Plus'
           */
          if (rtb_AND_ck) {
            localDW->Board1_error_counter += 1.0;
          }

          /* End of Switch: '<S254>/Switch2' */

          /* Logic: '<S254>/AND1' incorporates:
           *  Constant: '<S254>/Constant3'
           *  DataStoreRead: '<S254>/Data Store Read2'
           *  Logic: '<S254>/NOT1'
           *  RelationalOperator: '<S254>/Equal1'
           */
          rtb_AND1_e = ((2.0 != *rtd_Board_ID) && (!localDW->BC0_Vote2_processed));

          /* Switch: '<S254>/Switch1' incorporates:
           *  Constant: '<S254>/Constant1'
           *  DataStoreRead: '<S254>/Data Store Read6'
           *  DataStoreWrite: '<S254>/Data Store Write2'
           *  Sum: '<S254>/Plus1'
           */
          if (rtb_AND1_e) {
            localDW->Board2_error_counter += 1.0;
          }

          /* End of Switch: '<S254>/Switch1' */

          /* Logic: '<S254>/AND2' incorporates:
           *  Constant: '<S254>/Constant4'
           *  DataStoreRead: '<S254>/Data Store Read3'
           *  Logic: '<S254>/NOT2'
           *  RelationalOperator: '<S254>/Equal2'
           */
          rtb_AND2_n = ((3.0 != *rtd_Board_ID) && (!localDW->BC0_Vote3_processed));

          /* Switch: '<S254>/Switch3' incorporates:
           *  Constant: '<S254>/Constant2'
           *  DataStoreRead: '<S254>/Data Store Read8'
           *  DataStoreWrite: '<S254>/Data Store Write3'
           *  Sum: '<S254>/Plus2'
           */
          if (rtb_AND2_n) {
            localDW->Board3_error_counter += 1.0;
          }

          /* End of Switch: '<S254>/Switch3' */

          /* Logic: '<S254>/NOT3' incorporates:
           *  DataStoreRead: '<S254>/Data Store Read13'
           *  Logic: '<S254>/NOT4'
           */
          rtb_AND6_d_tmp = !localDW->BC0_Sync_processed;

          /* Logic: '<S254>/AND8' incorporates:
           *  Constant: '<S254>/Constant10'
           *  Constant: '<S254>/Constant9'
           *  Logic: '<S254>/AND5'
           *  Logic: '<S254>/NOT3'
           *  RelationalOperator: '<S254>/Equal5'
           *  RelationalOperator: '<S254>/Equal6'
           */
          rtb_AND8_k = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 3.0) && (3.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S254>/Switch4' incorporates:
           *  Constant: '<S254>/Constant13'
           *  DataStoreRead: '<S254>/Data Store Read18'
           *  DataStoreWrite: '<S254>/Data Store Write5'
           *  Sum: '<S254>/Plus3'
           */
          if (rtb_AND8_k) {
            localDW->Board3_error_counter += 1.0;
          }

          /* End of Switch: '<S254>/Switch4' */

          /* Logic: '<S254>/AND7' incorporates:
           *  Constant: '<S254>/Constant11'
           *  Constant: '<S254>/Constant8'
           *  Logic: '<S254>/AND4'
           *  Logic: '<S254>/NOT3'
           *  RelationalOperator: '<S254>/Equal4'
           *  RelationalOperator: '<S254>/Equal7'
           */
          rtb_AND7_m = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 2.0) && (2.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S254>/Switch5' incorporates:
           *  Constant: '<S254>/Constant14'
           *  DataStoreRead: '<S254>/Data Store Read20'
           *  DataStoreWrite: '<S254>/Data Store Write6'
           *  Sum: '<S254>/Plus4'
           */
          if (rtb_AND7_m) {
            localDW->Board2_error_counter += 1.0;
          }

          /* End of Switch: '<S254>/Switch5' */

          /* Logic: '<S254>/AND6' incorporates:
           *  Constant: '<S254>/Constant12'
           *  Constant: '<S254>/Constant7'
           *  Logic: '<S254>/AND3'
           *  Logic: '<S254>/NOT3'
           *  RelationalOperator: '<S254>/Equal3'
           *  RelationalOperator: '<S254>/Equal8'
           */
          rtb_AND6_f = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 1.0) && (1.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S254>/Switch6' incorporates:
           *  Constant: '<S254>/Constant15'
           *  DataStoreRead: '<S254>/Data Store Read22'
           *  DataStoreWrite: '<S254>/Data Store Write7'
           *  Sum: '<S254>/Plus5'
           */
          if (rtb_AND6_f) {
            localDW->Board1_error_counter += 1.0;
          }

          /* End of Switch: '<S254>/Switch6' */

          /* Logic: '<S254>/OR' incorporates:
           *  DataStoreWrite: '<S254>/Data Store Write8'
           */
          localDW->Toggle_Pin_A1 = (rtb_AND_ck || rtb_AND1_e || rtb_AND2_n ||
            rtb_AND6_f || rtb_AND7_m || rtb_AND8_k);

          /* Switch: '<S255>/Switch' incorporates:
           *  Constant: '<S255>/Constant'
           *  DataStoreRead: '<S255>/Data Store Read'
           *  DataStoreRead: '<S255>/Data Store Read1'
           *  Sum: '<S255>/Plus'
           */
          if (rtb_AND_ck) {
            TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter + 1.0;
          } else {
            TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter;
          }

          /* End of Switch: '<S255>/Switch' */

          /* DataStoreWrite: '<S255>/Data Store Write' */
          localDW->BC0_TM1_timeout_counter = TM1_timeout_counter_s;

          /* Switch: '<S256>/Switch' incorporates:
           *  Constant: '<S256>/Constant'
           *  DataStoreRead: '<S256>/Data Store Read'
           *  DataStoreRead: '<S256>/Data Store Read1'
           *  Sum: '<S256>/Plus'
           */
          if (rtb_AND1_e) {
            TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter + 1.0;
          } else {
            TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter;
          }

          /* End of Switch: '<S256>/Switch' */

          /* DataStoreWrite: '<S256>/Data Store Write' */
          localDW->BC0_TM2_timeout_counter = TM2_timeout_counter_s;

          /* Switch: '<S257>/Switch' incorporates:
           *  Constant: '<S257>/Constant'
           *  DataStoreRead: '<S257>/Data Store Read'
           *  DataStoreRead: '<S257>/Data Store Read1'
           *  Sum: '<S257>/Plus'
           */
          if (rtb_AND2_n) {
            TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter + 1.0;
          } else {
            TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter;
          }

          /* End of Switch: '<S257>/Switch' */

          /* DataStoreWrite: '<S257>/Data Store Write' */
          localDW->BC0_TM3_timeout_counter = TM3_timeout_counter_s;

          /* Switch: '<S254>/Switch7' incorporates:
           *  Constant: '<S254>/Constant16'
           *  DataStoreRead: '<S254>/Data Store Read23'
           *  DataStoreWrite: '<S254>/Data Store Write9'
           *  Logic: '<S254>/AND9'
           *  RelationalOperator: '<S254>/Equal9'
           *  Sum: '<S254>/Plus6'
           */
          if (rtb_AND6_d_tmp && (*rtd_Master_ID != *rtd_Board_ID)) {
            localDW->Sync_bc0_missed_counter_j += 1.0;
          }

          /* End of Switch: '<S254>/Switch7' */

          /* DataStoreWrite: '<S254>/Data Store Write4' incorporates:
           *  Constant: '<S254>/Constant5'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S169>/Timeout and Board error counter' */
        /* End of Outputs for SubSystem: '<S162>/COMP Task - Check Timeouts' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - New Master' incorporates:
         *  EnablePort: '<S170>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S170>/New Master' incorporates:
         *  EnablePort: '<S258>/Enable'
         */
        if ((*rtd_Local_Ticks >= 200.0) && (*rtd_Local_Ticks < localC->Sum15) &&
            (*rtd_Local_Ticks == 200.0)) {
          /* MinMax: '<S259>/Max1' incorporates:
           *  DataStoreRead: '<S259>/Data Store Read25'
           */
          if (localDW->Votes_count.First_Board >
              localDW->Votes_count.Second_Board) {
            rtb_Switch1_f = localDW->Votes_count.First_Board;
          } else {
            rtb_Switch1_f = localDW->Votes_count.Second_Board;
          }

          if (rtb_Switch1_f <= localDW->Votes_count.Third_Board) {
            rtb_Switch1_f = localDW->Votes_count.Third_Board;
          }

          /* RelationalOperator: '<S259>/Equal' incorporates:
           *  Constant: '<S259>/Constant'
           *  DataStoreWrite: '<S258>/Data Store Write'
           *  MinMax: '<S259>/Max1'
           */
          localDW->Reset_Board_n = (0.0 == rtb_Switch1_f);

          /* Sum: '<S259>/Plus' incorporates:
           *  Constant: '<S259>/Constant15'
           *  DataStoreRead: '<S259>/Data Store Read25'
           *  DataStoreRead: '<S259>/Data Store Read29'
           *  RelationalOperator: '<S259>/Equal17'
           */
          rtb_Plus_j = (real_T)(1.0 == localDW->Own_Vote) +
            localDW->Votes_count.First_Board;

          /* Sum: '<S259>/Plus1' incorporates:
           *  Constant: '<S259>/Constant16'
           *  DataStoreRead: '<S259>/Data Store Read25'
           *  DataStoreRead: '<S259>/Data Store Read29'
           *  RelationalOperator: '<S259>/Equal18'
           */
          rtb_Plus1_b = (real_T)(2.0 == localDW->Own_Vote) +
            localDW->Votes_count.Second_Board;

          /* Sum: '<S259>/Plus2' incorporates:
           *  Constant: '<S259>/Constant17'
           *  DataStoreRead: '<S259>/Data Store Read25'
           *  DataStoreRead: '<S259>/Data Store Read29'
           *  RelationalOperator: '<S259>/Equal19'
           */
          rtb_Plus2_p = (real_T)(3.0 == localDW->Own_Vote) +
            localDW->Votes_count.Third_Board;

          /* MinMax: '<S259>/Max' */
          if (rtb_Plus_j > rtb_Plus1_b) {
            rtb_Switch1_f = rtb_Plus_j;
          } else {
            rtb_Switch1_f = rtb_Plus1_b;
          }

          if (rtb_Switch1_f <= rtb_Plus2_p) {
            rtb_Switch1_f = rtb_Plus2_p;
          }

          /* Find: '<S259>/Find Nonzero Elements' incorporates:
           *  Constant: '<S260>/Constant'
           *  MinMax: '<S259>/Max'
           *  RelationalOperator: '<S260>/Compare'
           *  Sum: '<S259>/Subtract'
           */
          sigIdx = 0;
          if (rtb_Plus_j - rtb_Switch1_f == 0.0) {
            rtb_FindNonzeroElements[0] = 0;
            sigIdx = 1;
          }

          if (rtb_Plus1_b - rtb_Switch1_f == 0.0) {
            rtb_FindNonzeroElements[sigIdx] = 1;
            sigIdx++;
          }

          if (rtb_Plus2_p - rtb_Switch1_f == 0.0) {
            rtb_FindNonzeroElements[sigIdx] = 2;
            sigIdx++;
          }

          localDW->FindNonzeroElements_DIMS1 = sigIdx;

          /* End of Find: '<S259>/Find Nonzero Elements' */

          /* MinMax: '<S259>/Min' */
          linIx = rtb_FindNonzeroElements[0];
          for (sigIdx = 1; sigIdx < localDW->FindNonzeroElements_DIMS1; sigIdx++)
          {
            if (linIx >= rtb_FindNonzeroElements[sigIdx]) {
              linIx = rtb_FindNonzeroElements[sigIdx];
            }
          }

          /* Sum: '<S259>/Minus' incorporates:
           *  Constant: '<S259>/Index Corrector'
           *  MinMax: '<S259>/Min'
           */
          rtb_Switch1_f = (real_T)linIx + 1.0;

          /* DataStoreWrite: '<S258>/Data Store Write13' */
          *rtd_Master_ID = rtb_Switch1_f;

          /* Switch: '<S258>/Switch16' incorporates:
           *  Constant: '<S258>/Constant10'
           *  Constant: '<S258>/Constant9'
           *  DataStoreWrite: '<S258>/Data Store Write15'
           *  RelationalOperator: '<S258>/Equal6'
           */
          if (rtb_Switch1_f == *rtd_Board_ID) {
            localDW->Role_ID = 1.0;
          } else {
            localDW->Role_ID = 2.0;
          }

          /* End of Switch: '<S258>/Switch16' */

          /* DataStoreWrite: '<S258>/Data Store Write3' incorporates:
           *  Constant: '<S258>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S170>/New Master' */
        /* End of Outputs for SubSystem: '<S162>/COMP Task - New Master' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S171>/Enable'
         */
        if ((*rtd_Local_Ticks >= 208.0) && (*rtd_Local_Ticks < localC->Sum17_a))
        {
          /* DataStoreRead: '<S171>/Data Store Read' */
          reset_s = localDW->Reset_Board_n;

          /* Outputs for Enabled SubSystem: '<S171>/RESET Board - Return to initialization' incorporates:
           *  EnablePort: '<S261>/Enable'
           */
          if ((*rtd_Local_Ticks == 208.0) && reset_s) {
            /* DataStoreWrite: '<S261>/Data Store Write' */
            localDW->Reset_Board_n = localC->Cast_p;

            /* DataStoreWrite: '<S261>/Data Store Write1' */
            *rtd_New_Msg_Ready_CAN1 = localC->Cast_p;

            /* DataStoreWrite: '<S261>/Data Store Write10' */
            *rtd_New_Msg_Ready_CAN2 = localC->Cast_p;

            /* DataStoreWrite: '<S261>/Data Store Write2' */
            localDW->Initialization_flag = localC->NOT_p;

            /* DataStoreWrite: '<S261>/Data Store Write4' incorporates:
             *  Constant: '<S261>/Constant'
             */
            localDW->Role_ID = 0.0;

            /* DataStoreWrite: '<S261>/Data Store Write5' incorporates:
             *  Constant: '<S261>/Constant'
             */
            *rtd_Master_ID = 0.0;

            /* DataStoreWrite: '<S261>/Data Store Write6' */
            *rtd_Rx_State_CAN1 = localC->Cast6_d;

            /* DataStoreWrite: '<S261>/Data Store Write9' */
            *rtd_Rx_State_CAN2 = localC->Cast6_d;

            /* DataStoreWrite: '<S261>/Data Store Write3' incorporates:
             *  Constant: '<S261>/Constant1'
             */
            *rtd_RxID_CAN1 = 1U;

            /* DataStoreWrite: '<S261>/Data Store Write8' incorporates:
             *  Constant: '<S261>/Constant1'
             */
            *rtd_RxID_CAN2 = 1U;

            /* DataStoreWrite: '<S261>/Data Store Write7' incorporates:
             *  Constant: '<S261>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S171>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Reset Variables BC0' incorporates:
         *  EnablePort: '<S172>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S172>/Reset variables' incorporates:
         *  EnablePort: '<S262>/Enable'
         */
        if ((*rtd_Local_Ticks >= 204.0) && (*rtd_Local_Ticks < localC->Sum16_h) &&
            (*rtd_Local_Ticks == 204.0)) {
          /* DataStoreWrite: '<S262>/Data Store Write' */
          localDW->Desync_Positive = localC->Cast_h;

          /* DataStoreWrite: '<S262>/Data Store Write1' */
          localDW->BC0_Sync_processed = localC->Cast_h;

          /* DataStoreWrite: '<S262>/Data Store Write16' incorporates:
           *  Constant: '<S262>/Constant'
           */
          localDW->Votes_count.First_Board = 0.0;
          localDW->Votes_count.Second_Board = 0.0;
          localDW->Votes_count.Third_Board = 0.0;

          /* DataStoreWrite: '<S262>/Data Store Write2' */
          localDW->BC0_Vote1_processed = localC->Cast_h;

          /* DataStoreWrite: '<S262>/Data Store Write3' */
          localDW->BC0_Vote2_processed = localC->Cast_h;

          /* DataStoreWrite: '<S262>/Data Store Write4' */
          localDW->BC0_Vote3_processed = localC->Cast_h;

          /* DataStoreWrite: '<S262>/Data Store Write5' incorporates:
           *  Constant: '<S262>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S172>/Reset variables' */
        /* End of Outputs for SubSystem: '<S162>/COMP Task - Reset Variables BC0' */

        /* Logic: '<S162>/NOT1' incorporates:
         *  Constant: '<S162>/Constant12'
         *  Constant: '<S162>/Constant14'
         *  Constant: '<S162>/Constant25'
         *  Constant: '<S162>/Constant31'
         *  DataStoreRead: '<S162>/Data Store Read6'
         *  Logic: '<S162>/AND13'
         *  Logic: '<S162>/AND14'
         *  Logic: '<S162>/AND15'
         *  Logic: '<S162>/AND16'
         *  Logic: '<S162>/NOT3'
         *  Logic: '<S171>/AND'
         *  RelationalOperator: '<S162>/GreaterThan26'
         *  RelationalOperator: '<S162>/GreaterThan27'
         *  RelationalOperator: '<S162>/GreaterThan28'
         *  RelationalOperator: '<S162>/GreaterThan29'
         *  RelationalOperator: '<S162>/GreaterThan30'
         *  RelationalOperator: '<S162>/GreaterThan31'
         *  RelationalOperator: '<S162>/GreaterThan32'
         *  RelationalOperator: '<S162>/GreaterThan33'
         *  RelationalOperator: '<S169>/Equal'
         *  RelationalOperator: '<S170>/Equal'
         *  RelationalOperator: '<S171>/Equal2'
         *  RelationalOperator: '<S172>/Equal2'
         */
        rtb_AND2_n = !localDW->BC0_Sync_processed;

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Sync bc0 check' incorporates:
         *  EnablePort: '<S173>/Enable'
         */
        if ((*rtd_Local_Ticks >= 40.0) && (*rtd_Local_Ticks < localC->Sum1_j) &&
            rtb_AND2_n) {
          if (!localDW->COMPTaskSyncbc0check_MODE_g) {
            localDW->COMPTaskSyncbc0check_MODE_g = true;
          }

          /* DataStoreRead: '<S173>/Data Store Read1' */
          rtb_DataStoreRead1_bw = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S173>/Data Store Read2' */
          rtb_DataStoreRead2_e = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S173>/Data Store Read' */
          rtb_DataStoreRead_pt = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S173>/Data Store Read3' */
          rtb_DataStoreRead3_nn = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S173>/Data Store Read15' */
          rtb_DataStoreRead15_b = *rtd_Master_ID;

          /* RelationalOperator: '<S173>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 40.0);

          /* RelationalOperator: '<S173>/Equal5' incorporates:
           *  Constant: '<S173>/Constant26'
           *  DataStoreRead: '<S173>/Data Store Read6'
           */
          rtb_AND1_e = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S173>/Process_Messages' incorporates:
           *  EnablePort: '<S263>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_e) {
            if (!localDW->Process_Messages_MODE_ek) {
              localDW->Process_Messages_MODE_ek = true;
            }

            /* Outputs for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_bw,
              &rtb_DataStoreRead_pt, 0.0, rtb_DataStoreRead15_b,
              &localB->DemuxmessageCAN1andcheckcoher_g,
              &localDW->DemuxmessageCAN1andcheckcoher_g,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S263>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_e,
              &rtb_DataStoreRead3_nn, 0.0, rtb_DataStoreRead15_b,
              &localB->DemuxmessageCAN1andcheckcohe_p3,
              &localDW->DemuxmessageCAN1andcheckcohe_p3,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S263>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S263>/Switch' incorporates:
             *  Constant: '<S173>/Constant'
             *  DataStoreWrite: '<S263>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_g.AND) {
              localDW->Msg_Rx_d.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_g.Constant;
              localDW->Msg_Rx_d.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_2;
              localDW->Msg_Rx_d.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_3;
              localDW->Msg_Rx_d.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_4;
              localDW->Msg_Rx_d.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_5;
              localDW->Msg_Rx_d.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_6;
              localDW->Msg_Rx_d.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_7;
              localDW->Msg_Rx_d.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_g.Buffer_8;
            } else {
              localDW->Msg_Rx_d.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Constant;
              localDW->Msg_Rx_d.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_2;
              localDW->Msg_Rx_d.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_3;
              localDW->Msg_Rx_d.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_4;
              localDW->Msg_Rx_d.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_5;
              localDW->Msg_Rx_d.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_6;
              localDW->Msg_Rx_d.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_7;
              localDW->Msg_Rx_d.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_p3.Buffer_8;
            }

            /* End of Switch: '<S263>/Switch' */

            /* Logic: '<S263>/OR' incorporates:
             *  DataStoreWrite: '<S263>/Data Store Write2'
             */
            localDW->new_msg_Rx_l = (localB->DemuxmessageCAN1andcheckcoher_g.AND
              || localB->DemuxmessageCAN1andcheckcohe_p3.AND);

            /* Outputs for Enabled SubSystem: '<S263>/Desync calculation' incorporates:
             *  EnablePort: '<S267>/Enable'
             */
            if (localDW->new_msg_Rx_l) {
              /* Switch: '<S267>/Switch1' incorporates:
               *  Constant: '<S162>/Constant'
               *  Constant: '<S267>/Constant'
               *  Constant: '<S267>/Constant1'
               *  Constant: '<S267>/delay_estimation_1'
               *  Constant: '<S267>/delay_estimation_2'
               *  Product: '<S267>/Multiply'
               *  Product: '<S267>/Multiply1'
               *  Sum: '<S267>/Minus'
               *  Sum: '<S267>/Minus1'
               *  Sum: '<S267>/Sum'
               *  Sum: '<S267>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_g.AND) {
                rtb_Switch1_f = ((COMM_Phase1 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_g.BitShift1_mg.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_Switch1_f = ((COMM_Phase2 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcohe_p3.BitShift1_e.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S267>/Switch1' */

              /* Saturate: '<S267>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc0_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc0_s = (-15.0);
              } else {
                Desync_Sync_bc0_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S267>/Saturation' */

              /* DataStoreWrite: '<S267>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc0_s;
            }

            /* End of Outputs for SubSystem: '<S263>/Desync calculation' */

            /* DataStoreWrite: '<S263>/Data Store Write3' incorporates:
             *  Constant: '<S263>/Constant2'
             *  DataStoreWrite: '<S263>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_ek) {
              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_ek = false;
            }
          }

          /* End of Outputs for SubSystem: '<S173>/Process_Messages' */

          /* Logic: '<S173>/AND1' incorporates:
           *  Constant: '<S173>/Constant'
           *  DataStoreWrite: '<S263>/Data Store Write2'
           *  Logic: '<S173>/AND'
           *  Logic: '<S173>/NOT'
           */
          rtb_AND1_ml = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S173>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ml, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S173>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc0check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S173>/Process_Messages' */
            if (localDW->Process_Messages_MODE_ek) {
              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_ek = false;
            }

            /* End of Disable for SubSystem: '<S173>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE_g = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Sync bc0 check' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S174>/Enable'
         */
        if ((*rtd_Local_Ticks >= 44.0) && (*rtd_Local_Ticks < localC->Sum2_n) &&
            rtb_AND2_n) {
          /* Outputs for Enabled SubSystem: '<S174>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S292>/Enable'
           */
          if ((*rtd_Local_Ticks == 44.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S292>/Data Store Write1' incorporates:
             *  Constant: '<S292>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S174>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S174>/Local Time Update' incorporates:
           *  EnablePort: '<S293>/Enable'
           */
          if ((*rtd_Local_Ticks == 46.0) && (localDW->Role_ID == 2.0) &&
              localDW->new_msg_Rx_l) {
            /* RelationalOperator: '<S293>/GreaterThan' incorporates:
             *  Constant: '<S293>/Constant4'
             *  DataStoreRead: '<S293>/Data Store Read1'
             *  DataStoreWrite: '<S293>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S293>/NOT' incorporates:
             *  DataStoreWrite: '<S293>/Data Store Write'
             */
            rtb_NOT_id = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S293>/Desync_Negative' */
            Desync_Negative(rtb_NOT_id, 44.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S293>/Desync_Negative' */

            /* DataStoreWrite: '<S293>/Data Store Write13' incorporates:
             *  Constant: '<S293>/Constant3'
             */
            localDW->BC0_Sync_processed = true;

            /* DataStoreWrite: '<S293>/Data Store Write3' incorporates:
             *  Constant: '<S293>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S174>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Update LT' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Vote Decision' incorporates:
         *  EnablePort: '<S175>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S175>/Vote Decision' incorporates:
         *  EnablePort: '<S295>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 48.0) && (rtb_DataStoreRead8_c <
             localC->Sum3_h) && (*rtd_Local_Ticks == 48.0)) {
          /* Switch: '<S296>/Switch' incorporates:
           *  Constant: '<S295>/Constant'
           *  Constant: '<S296>/MAX error count'
           *  DataStoreRead: '<S295>/Data Store Read'
           *  DataStoreRead: '<S295>/Data Store Read1'
           *  Logic: '<S296>/AND'
           *  Logic: '<S296>/NOT'
           *  Logic: '<S296>/OR'
           *  RelationalOperator: '<S296>/Equal1'
           *  RelationalOperator: '<S296>/Equal2'
           */
          if ((1.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 1.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Switch1_f = 4294967295U;
          } else {
            rtb_Switch1_f = localDW->Board1_error_counter;
          }

          /* End of Switch: '<S296>/Switch' */

          /* Switch: '<S297>/Switch' incorporates:
           *  Constant: '<S295>/Constant1'
           *  Constant: '<S297>/MAX error count'
           *  DataStoreRead: '<S295>/Data Store Read'
           *  DataStoreRead: '<S295>/Data Store Read2'
           *  Logic: '<S297>/AND'
           *  Logic: '<S297>/NOT'
           *  Logic: '<S297>/OR'
           *  RelationalOperator: '<S297>/Equal1'
           *  RelationalOperator: '<S297>/Equal2'
           */
          if ((2.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 2.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Plus_j = 4294967295U;
          } else {
            rtb_Plus_j = localDW->Board2_error_counter;
          }

          /* End of Switch: '<S297>/Switch' */

          /* Switch: '<S298>/Switch' incorporates:
           *  Constant: '<S295>/Constant2'
           *  Constant: '<S298>/MAX error count'
           *  DataStoreRead: '<S295>/Data Store Read'
           *  DataStoreRead: '<S295>/Data Store Read3'
           *  Logic: '<S298>/AND'
           *  Logic: '<S298>/NOT'
           *  Logic: '<S298>/OR'
           *  RelationalOperator: '<S298>/Equal1'
           *  RelationalOperator: '<S298>/Equal2'
           */
          if ((3.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 3.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Plus1_b = 4294967295U;
          } else {
            rtb_Plus1_b = localDW->Board3_error_counter;
          }

          /* End of Switch: '<S298>/Switch' */

          /* MinMax: '<S295>/Max' */
          if (rtb_Switch1_f < rtb_Plus_j) {
            rtb_Plus2_p = rtb_Switch1_f;
          } else {
            rtb_Plus2_p = rtb_Plus_j;
          }

          if (rtb_Plus2_p < rtb_Plus1_b) {
            rtb_Plus1_b = rtb_Plus2_p;
          }

          /* End of MinMax: '<S295>/Max' */

          /* Switch: '<S295>/Switch5' incorporates:
           *  DataStoreRead: '<S295>/Data Store Read'
           *  RelationalOperator: '<S295>/Equal'
           *  RelationalOperator: '<S295>/Equal5'
           *  Switch: '<S295>/Switch6'
           *  Switch: '<S295>/Switch7'
           */
          if (localDW->BC0_Sync_processed) {
            /* DataTypeConversion: '<S295>/Cast' */
            Vote_s = (uint8_T)*rtd_Master_ID;
          } else if (rtb_Switch1_f == rtb_Plus1_b) {
            /* Switch: '<S295>/Switch6' incorporates:
             *  Constant: '<S295>/Constant4'
             *  DataTypeConversion: '<S295>/Cast'
             */
            Vote_s = (uint8_T)1.0;
          } else if (rtb_Plus1_b == rtb_Plus_j) {
            /* Switch: '<S295>/Switch7' incorporates:
             *  Constant: '<S295>/Constant5'
             *  DataTypeConversion: '<S295>/Cast'
             */
            Vote_s = (uint8_T)2.0;
          } else {
            /* DataTypeConversion: '<S295>/Cast' incorporates:
             *  Constant: '<S295>/Constant6'
             *  Switch: '<S295>/Switch7'
             */
            Vote_s = (uint8_T)3.0;
          }

          /* End of Switch: '<S295>/Switch5' */

          /* DataStoreWrite: '<S295>/Data Store Write5' */
          localDW->Own_Vote = Vote_s;

          /* DataStoreWrite: '<S295>/Data Store Write3' incorporates:
           *  Constant: '<S295>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S175>/Vote Decision' */
        /* End of Outputs for SubSystem: '<S162>/COMP Task - Vote Decision' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Vote1 Count' incorporates:
         *  EnablePort: '<S176>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S176>/Vote Count 1' incorporates:
         *  EnablePort: '<S299>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 96.0) && (rtb_DataStoreRead8_c <
             localC->Sum7_p) && ((*rtd_Local_Ticks == 96.0) &&
             localDW->new_msg_Rx_l && (*rtd_Board_ID != 1.0))) {
          /* DataStoreWrite: '<S299>/Data Store Write12' incorporates:
           *  Constant: '<S299>/Constant10'
           *  Constant: '<S299>/Constant11'
           *  Constant: '<S299>/Constant12'
           *  DataStoreRead: '<S176>/Data Store Read4'
           *  DataStoreRead: '<S299>/Data Store Read15'
           *  DataStoreRead: '<S299>/Data Store Read16'
           *  DataStoreRead: '<S299>/Data Store Read17'
           *  RelationalOperator: '<S299>/Equal13'
           *  RelationalOperator: '<S299>/Equal15'
           *  RelationalOperator: '<S299>/Equal17'
           *  Sum: '<S299>/Add'
           *  Sum: '<S299>/Add1'
           *  Sum: '<S299>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S299>/Data Store Write3' incorporates:
           *  Constant: '<S299>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S299>/Data Store Write' incorporates:
           *  Constant: '<S299>/HIGH'
           */
          localDW->BC0_Vote1_processed = true;
        }

        /* End of Outputs for SubSystem: '<S176>/Vote Count 1' */
        /* End of Outputs for SubSystem: '<S162>/COMP Task - Vote1 Count' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Vote1 check' incorporates:
         *  EnablePort: '<S177>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 92.0) && (rtb_DataStoreRead8_c <
             localC->Sum6_ph)) {
          if (!localDW->COMPTaskVote1check_MODE) {
            localDW->COMPTaskVote1check_MODE = true;
          }

          /* DataStoreRead: '<S177>/Data Store Read1' */
          rtb_DataStoreRead1_il = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S177>/Data Store Read2' */
          rtb_DataStoreRead2_oh = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S177>/Data Store Read' */
          rtb_DataStoreRead_m3 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S177>/Data Store Read3' */
          rtb_DataStoreRead3_ez = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S177>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 92.0);

          /* RelationalOperator: '<S177>/Equal6' incorporates:
           *  Constant: '<S177>/Constant2'
           */
          rtb_AND1_e = (*rtd_Board_ID != 1.0);

          /* Logic: '<S177>/AND' */
          rtb_AND_br = (rtb_AND_ck && rtb_AND1_e);

          /* Outputs for Enabled SubSystem: '<S177>/Process_Messages1' */
          Process_Messages1(rtb_AND_br, rtb_DataStoreRead1_il,
                            rtb_DataStoreRead2_oh, &rtb_DataStoreRead_m3,
                            &rtb_DataStoreRead3_ez, 1.0,
                            &localB->Process_Messages1_c,
                            &localDW->Process_Messages1_c, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG_i,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S177>/Process_Messages1' */

          /* Logic: '<S177>/AND1' incorporates:
           *  Constant: '<S177>/Constant1'
           *  Logic: '<S177>/NOT'
           */
          rtb_AND1_km = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S177>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_km, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S177>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S177>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S177>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Vote1 check' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Vote2 Count' incorporates:
         *  EnablePort: '<S178>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S178>/Vote Count 2' incorporates:
         *  EnablePort: '<S328>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 144.0) && (rtb_DataStoreRead8_c <
             localC->Sum10) && ((*rtd_Local_Ticks == 144.0) &&
                                localDW->new_msg_Rx_l && (*rtd_Board_ID != 2.0)))
        {
          /* DataStoreWrite: '<S328>/Data Store Write12' incorporates:
           *  Constant: '<S328>/Constant10'
           *  Constant: '<S328>/Constant11'
           *  Constant: '<S328>/Constant12'
           *  DataStoreRead: '<S178>/Data Store Read4'
           *  DataStoreRead: '<S328>/Data Store Read15'
           *  DataStoreRead: '<S328>/Data Store Read16'
           *  DataStoreRead: '<S328>/Data Store Read17'
           *  RelationalOperator: '<S328>/Equal13'
           *  RelationalOperator: '<S328>/Equal15'
           *  RelationalOperator: '<S328>/Equal17'
           *  Sum: '<S328>/Add'
           *  Sum: '<S328>/Add1'
           *  Sum: '<S328>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S328>/Data Store Write3' incorporates:
           *  Constant: '<S328>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S328>/Data Store Write' incorporates:
           *  Constant: '<S328>/HIGH'
           */
          localDW->BC0_Vote2_processed = true;
        }

        /* End of Outputs for SubSystem: '<S178>/Vote Count 2' */
        /* End of Outputs for SubSystem: '<S162>/COMP Task - Vote2 Count' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Vote2 check' incorporates:
         *  EnablePort: '<S179>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 140.0) && (rtb_DataStoreRead8_c <
             localC->Sum9)) {
          if (!localDW->COMPTaskVote2check_MODE) {
            localDW->COMPTaskVote2check_MODE = true;
          }

          /* DataStoreRead: '<S179>/Data Store Read1' */
          rtb_DataStoreRead1_j2 = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S179>/Data Store Read2' */
          rtb_DataStoreRead2_fq = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S179>/Data Store Read' */
          rtb_DataStoreRead_ak = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S179>/Data Store Read3' */
          rtb_DataStoreRead3_d = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S179>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 140.0);

          /* RelationalOperator: '<S179>/Equal6' incorporates:
           *  Constant: '<S179>/Constant2'
           */
          rtb_AND1_e = (*rtd_Board_ID != 2.0);

          /* Logic: '<S179>/AND' */
          rtb_AND_b0 = (rtb_AND_ck && rtb_AND1_e);

          /* Outputs for Enabled SubSystem: '<S179>/Process_Messages' */
          Process_Messages1(rtb_AND_b0, rtb_DataStoreRead1_j2,
                            rtb_DataStoreRead2_fq, &rtb_DataStoreRead_ak,
                            &rtb_DataStoreRead3_d, 2.0,
                            &localB->Process_Messages_g,
                            &localDW->Process_Messages_g, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG_i,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S179>/Process_Messages' */

          /* Logic: '<S179>/AND1' incorporates:
           *  Constant: '<S179>/Constant1'
           *  Logic: '<S179>/NOT'
           */
          rtb_AND1_bt = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S179>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_bt, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S179>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S179>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S179>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Vote2 check' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Vote3 Count' incorporates:
         *  EnablePort: '<S180>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S180>/Vote Count 3' incorporates:
         *  EnablePort: '<S357>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 192.0) && (rtb_DataStoreRead8_c <
             localC->Sum11) && ((*rtd_Local_Ticks == 192.0) &&
                                localDW->new_msg_Rx_l && (*rtd_Board_ID != 3.0)))
        {
          /* DataStoreWrite: '<S357>/Data Store Write12' incorporates:
           *  Constant: '<S357>/Constant10'
           *  Constant: '<S357>/Constant11'
           *  Constant: '<S357>/Constant12'
           *  DataStoreRead: '<S180>/Data Store Read4'
           *  DataStoreRead: '<S357>/Data Store Read15'
           *  DataStoreRead: '<S357>/Data Store Read16'
           *  DataStoreRead: '<S357>/Data Store Read17'
           *  RelationalOperator: '<S357>/Equal13'
           *  RelationalOperator: '<S357>/Equal15'
           *  RelationalOperator: '<S357>/Equal17'
           *  Sum: '<S357>/Add'
           *  Sum: '<S357>/Add1'
           *  Sum: '<S357>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S357>/Data Store Write3' incorporates:
           *  Constant: '<S357>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S357>/Data Store Write' incorporates:
           *  Constant: '<S357>/HIGH'
           */
          localDW->BC0_Vote3_processed = true;
        }

        /* End of Outputs for SubSystem: '<S180>/Vote Count 3' */
        /* End of Outputs for SubSystem: '<S162>/COMP Task - Vote3 Count' */

        /* Outputs for Enabled SubSystem: '<S162>/COMP Task - Vote3 check' incorporates:
         *  EnablePort: '<S181>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 188.0) && (rtb_DataStoreRead8_c <
             localC->Sum13)) {
          if (!localDW->COMPTaskVote3check_MODE) {
            localDW->COMPTaskVote3check_MODE = true;
          }

          /* DataStoreRead: '<S181>/Data Store Read1' */
          rtb_DataStoreRead1_ax = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S181>/Data Store Read2' */
          rtb_DataStoreRead2_cx = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S181>/Data Store Read' */
          rtb_DataStoreRead_l5i = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S181>/Data Store Read3' */
          rtb_DataStoreRead3_op = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S181>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 188.0);

          /* RelationalOperator: '<S181>/Equal6' incorporates:
           *  Constant: '<S181>/Constant2'
           */
          rtb_AND1_e = (*rtd_Board_ID != 3.0);

          /* Logic: '<S181>/AND' */
          rtb_AND_fe = (rtb_AND_ck && rtb_AND1_e);

          /* Outputs for Enabled SubSystem: '<S181>/Process_Messages' */
          Process_Messages1(rtb_AND_fe, rtb_DataStoreRead1_ax,
                            rtb_DataStoreRead2_cx, &rtb_DataStoreRead_l5i,
                            &rtb_DataStoreRead3_op, 3.0,
                            &localB->Process_Messages_gc,
                            &localDW->Process_Messages_gc, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG_i,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S181>/Process_Messages' */

          /* Logic: '<S181>/AND1' incorporates:
           *  Constant: '<S181>/Constant1'
           *  Logic: '<S181>/NOT'
           */
          rtb_AND1_ky = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S181>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ky, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S181>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S181>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S181>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMP Task - Vote3 check' */

        /* Logic: '<S162>/AND17' incorporates:
         *  Constant: '<S162>/Constant'
         *  Constant: '<S162>/Constant17'
         *  Constant: '<S162>/Constant19'
         *  Constant: '<S162>/Constant2'
         *  Constant: '<S162>/Constant21'
         *  Constant: '<S162>/Constant23'
         *  Constant: '<S162>/Constant27'
         *  Constant: '<S162>/Constant33'
         *  Constant: '<S162>/Constant34'
         *  Constant: '<S162>/Constant6'
         *  Constant: '<S162>/Constant8'
         *  Constant: '<S173>/Constant'
         *  Constant: '<S174>/Constant1'
         *  Constant: '<S174>/Constant4'
         *  Constant: '<S176>/Constant4'
         *  Constant: '<S177>/Constant1'
         *  Constant: '<S178>/Constant4'
         *  Constant: '<S179>/Constant1'
         *  Constant: '<S180>/Constant4'
         *  Constant: '<S181>/Constant1'
         *  DataStoreRead: '<S162>/Data Store Read11'
         *  DataStoreRead: '<S174>/Data Store Read'
         *  DataStoreRead: '<S174>/Data Store Read1'
         *  DataStoreRead: '<S176>/Data Store Read5'
         *  DataStoreRead: '<S178>/Data Store Read5'
         *  DataStoreRead: '<S180>/Data Store Read5'
         *  DataStoreWrite: '<S263>/Data Store Write2'
         *  Logic: '<S162>/AND'
         *  Logic: '<S162>/AND1'
         *  Logic: '<S162>/AND11'
         *  Logic: '<S162>/AND12'
         *  Logic: '<S162>/AND18'
         *  Logic: '<S162>/AND19'
         *  Logic: '<S162>/AND2'
         *  Logic: '<S162>/AND3'
         *  Logic: '<S162>/AND5'
         *  Logic: '<S162>/AND6'
         *  Logic: '<S162>/AND8'
         *  Logic: '<S162>/AND9'
         *  Logic: '<S162>/NOT1'
         *  Logic: '<S162>/NOT2'
         *  Logic: '<S173>/AND'
         *  Logic: '<S174>/AND'
         *  Logic: '<S174>/AND1'
         *  Logic: '<S176>/AND'
         *  Logic: '<S178>/AND'
         *  Logic: '<S180>/AND'
         *  RelationalOperator: '<S162>/GreaterThan'
         *  RelationalOperator: '<S162>/GreaterThan1'
         *  RelationalOperator: '<S162>/GreaterThan10'
         *  RelationalOperator: '<S162>/GreaterThan11'
         *  RelationalOperator: '<S162>/GreaterThan12'
         *  RelationalOperator: '<S162>/GreaterThan13'
         *  RelationalOperator: '<S162>/GreaterThan14'
         *  RelationalOperator: '<S162>/GreaterThan15'
         *  RelationalOperator: '<S162>/GreaterThan16'
         *  RelationalOperator: '<S162>/GreaterThan17'
         *  RelationalOperator: '<S162>/GreaterThan2'
         *  RelationalOperator: '<S162>/GreaterThan20'
         *  RelationalOperator: '<S162>/GreaterThan21'
         *  RelationalOperator: '<S162>/GreaterThan22'
         *  RelationalOperator: '<S162>/GreaterThan23'
         *  RelationalOperator: '<S162>/GreaterThan3'
         *  RelationalOperator: '<S162>/GreaterThan4'
         *  RelationalOperator: '<S162>/GreaterThan5'
         *  RelationalOperator: '<S162>/GreaterThan6'
         *  RelationalOperator: '<S162>/GreaterThan7'
         *  RelationalOperator: '<S174>/Equal'
         *  RelationalOperator: '<S174>/Equal1'
         *  RelationalOperator: '<S174>/Equal2'
         *  RelationalOperator: '<S175>/Equal'
         *  RelationalOperator: '<S176>/Equal'
         *  RelationalOperator: '<S176>/Equal2'
         *  RelationalOperator: '<S178>/Equal'
         *  RelationalOperator: '<S178>/Equal2'
         *  RelationalOperator: '<S180>/Equal'
         *  RelationalOperator: '<S180>/Equal2'
         */
        rtb_AND17_f = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4_p) && (!localDW->BC0_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S162>/COMM Task - Sync bc 0' */
        COMMTaskSyncbc0(rtb_AND17_f, 0.0, &localB->COMMTaskSyncbc0_b,
                        &localC->COMMTaskSyncbc0_b, &localDW->COMMTaskSyncbc0_b,
                        rtd_Board_ID, rtd_Local_Ticks, &localDW->Msg_Rx_d,
                        rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, rtd_New_Msg_Ready_CAN1,
                        rtd_New_Msg_Ready_CAN2, &localDW->Role_ID, rtd_RxID_CAN1,
                        rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                        rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx_l);

        /* End of Outputs for SubSystem: '<S162>/COMM Task - Sync bc 0' */

        /* Outputs for Enabled SubSystem: '<S162>/COMM Task - Vote1' incorporates:
         *  EnablePort: '<S166>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 52.0) && (rtb_DataStoreRead8_c <
             localC->Sum5_d)) {
          if (!localDW->COMMTaskVote1_MODE) {
            localDW->COMMTaskVote1_MODE = true;
          }

          /* RelationalOperator: '<S166>/Equal2' incorporates:
           *  Constant: '<S166>/Constant3'
           */
          rtb_Equal2_ic = (*rtd_Board_ID == 1.0);

          /* Logic: '<S166>/NOT' */
          rtb_NOT_ch = !rtb_Equal2_ic;

          /* Outputs for Enabled SubSystem: '<S166>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_ch, 52.0, &localB->Receptionsubstasks_k,
                             &localC->Receptionsubstasks_k,
                             &localDW->Receptionsubstasks_k, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S166>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S166>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_ic, 52.0,
            &localB->Transmissionsubtasks_pw, &localC->Transmissionsubtasks_pw,
            &localDW->Transmissionsubtasks_pw, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S166>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S166>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

            /* Disable for Outport: '<S166>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S166>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S166>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S166>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMM Task - Vote1' */

        /* Outputs for Enabled SubSystem: '<S162>/COMM Task - Vote2' incorporates:
         *  EnablePort: '<S167>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 100.0) && (rtb_DataStoreRead8_c <
             localC->Sum8)) {
          if (!localDW->COMMTaskVote2_MODE) {
            localDW->COMMTaskVote2_MODE = true;
          }

          /* RelationalOperator: '<S167>/Equal2' incorporates:
           *  Constant: '<S167>/Constant3'
           */
          rtb_Equal2_hs = (*rtd_Board_ID == 2.0);

          /* Logic: '<S167>/NOT' */
          rtb_NOT_jr = !rtb_Equal2_hs;

          /* Outputs for Enabled SubSystem: '<S167>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_jr, 100.0, &localB->Receptionsubstasks_g,
                             &localC->Receptionsubstasks_g,
                             &localDW->Receptionsubstasks_g, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S167>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S167>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_hs, 100.0,
            &localB->Transmissionsubtasks_d, &localC->Transmissionsubtasks_d,
            &localDW->Transmissionsubtasks_d, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S167>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMM Task - Vote2' */

        /* Outputs for Enabled SubSystem: '<S162>/COMM Task - Vote3' incorporates:
         *  EnablePort: '<S168>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 148.0) && (rtb_DataStoreRead8_c <
             localC->Sum12)) {
          if (!localDW->COMMTaskVote3_MODE) {
            localDW->COMMTaskVote3_MODE = true;
          }

          /* RelationalOperator: '<S168>/Equal2' incorporates:
           *  Constant: '<S168>/Constant3'
           */
          rtb_Equal2_o = (*rtd_Board_ID == 3.0);

          /* Logic: '<S168>/NOT' */
          rtb_NOT_ar = !rtb_Equal2_o;

          /* Outputs for Enabled SubSystem: '<S168>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_ar, 148.0, &localB->Receptionsubstasks_e,
                             &localC->Receptionsubstasks_e,
                             &localDW->Receptionsubstasks_e, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S168>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S168>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_o, 148.0,
            &localB->Transmissionsubtasks_a, &localC->Transmissionsubtasks_a,
            &localDW->Transmissionsubtasks_a, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S168>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S168>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

            /* Disable for Outport: '<S168>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S168>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S168>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S168>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S162>/COMM Task - Vote3' */

        /* Logic: '<S162>/OR1' incorporates:
         *  Constant: '<S162>/Constant'
         *  Constant: '<S162>/Constant28'
         *  Constant: '<S162>/Constant3'
         *  Constant: '<S162>/Constant9'
         *  Logic: '<S162>/AND10'
         *  Logic: '<S162>/AND4'
         *  Logic: '<S162>/AND7'
         *  RelationalOperator: '<S162>/GreaterThan18'
         *  RelationalOperator: '<S162>/GreaterThan19'
         *  RelationalOperator: '<S162>/GreaterThan24'
         *  RelationalOperator: '<S162>/GreaterThan25'
         *  RelationalOperator: '<S162>/GreaterThan8'
         *  RelationalOperator: '<S162>/GreaterThan9'
         */
        localB->OR1_oo =
          (localB->COMMTaskSyncbc0_b.Transmissionsubtasks_l.Equal7_a ||
           localB->Transmissionsubtasks_pw.Equal7_m ||
           localB->Transmissionsubtasks_d.Equal7_m ||
           localB->Transmissionsubtasks_a.Equal7_m);

        /* Logic: '<S162>/OR2' */
        localB->OR2_p = (localB->COMMTaskSyncbc0_b.Receptionsubstasks_h.AND ||
                         localB->Receptionsubstasks_k.AND ||
                         localB->Receptionsubstasks_g.AND ||
                         localB->Receptionsubstasks_e.AND);

        /* Logic: '<S162>/OR3' */
        localB->OR3_bn = (localB->COMMTaskSyncbc0_b.Receptionsubstasks_h.AND1 ||
                          localB->Receptionsubstasks_k.AND1 ||
                          localB->Receptionsubstasks_g.AND1 ||
                          localB->Receptionsubstasks_e.AND1);

        /* Logic: '<S162>/OR4' */
        localB->OR4_o = (localB->COMMTaskSyncbc0_b.Transmissionsubtasks_l.Equal7
                         || localB->Transmissionsubtasks_pw.Equal7 ||
                         localB->Transmissionsubtasks_d.Equal7 ||
                         localB->Transmissionsubtasks_a.Equal7);
      } else {
        if (localDW->controllerbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S173>/Process_Messages' */
            if (localDW->Process_Messages_MODE_ek) {
              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_ek = false;
            }

            /* End of Disable for SubSystem: '<S173>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S177>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S177>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S179>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S179>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S181>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S181>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
              &localDW->COMMTaskSyncbc0_b);
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S166>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

            /* Disable for Outport: '<S166>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S166>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S166>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S166>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S168>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

            /* Disable for Outport: '<S168>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S168>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S168>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S168>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote3' */

          /* Disable for Outport: '<S162>/Send_Message_CAN1' */
          localB->OR1_oo = false;

          /* Disable for Outport: '<S162>/Send_Message_CAN2' */
          localB->OR4_o = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN1' */
          localB->OR2_p = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN2' */
          localB->OR3_bn = false;
          localDW->controllerbasiccycle0_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S159>/controller basic cycle 0' */

      /* Outputs for Enabled SubSystem: '<S159>/controller basic cycle 1' incorporates:
       *  EnablePort: '<S163>/Enable'
       */
      if (localDW->basic_cycle_count == 1.0) {
        if (!localDW->controllerbasiccycle1_MODE) {
          localDW->controllerbasiccycle1_MODE = true;
        }

        /* DataStoreRead: '<S163>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Reset Variables BC1' incorporates:
         *  EnablePort: '<S389>/Enable'
         */
        if ((*rtd_Local_Ticks >= 200.0) && (*rtd_Local_Ticks < localC->Sum18_e))
        {
          /* Outputs for Enabled SubSystem: '<S389>/Check Timeouts' incorporates:
           *  EnablePort: '<S457>/Enable'
           */
          if (*rtd_Local_Ticks == 200.0) {
            /* Logic: '<S457>/AND9' incorporates:
             *  DataStoreRead: '<S457>/Data Store Read25'
             *  DataStoreWrite: '<S457>/Data Store Write8'
             *  Logic: '<S457>/NOT4'
             *  RelationalOperator: '<S457>/Equal9'
             */
            localDW->Toggle_Pin_A1 = ((!localDW->BC1_Sync_processed) &&
              (*rtd_Master_ID != *rtd_Board_ID));

            /* Switch: '<S457>/Switch7' incorporates:
             *  Constant: '<S457>/Constant16'
             *  DataStoreRead: '<S457>/Data Store Read23'
             *  DataStoreWrite: '<S457>/Data Store Write8'
             *  DataStoreWrite: '<S457>/Data Store Write9'
             *  Sum: '<S457>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc1_missed_counter_h += 1.0;
            }

            /* End of Switch: '<S457>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S389>/Check Timeouts' */

          /* RelationalOperator: '<S389>/Equal1' incorporates:
           *  Constant: '<S163>/Constant41'
           *  RelationalOperator: '<S389>/Equal2'
           */
          rtb_Equal1_hs = (*rtd_Local_Ticks == 202.0);

          /* Outputs for Enabled SubSystem: '<S389>/Reset Variables' */
          ResetVariables(rtb_Equal1_hs, &localDW->BC1_Sync_processed,
                         &localDW->Desync_Positive, rtd_Toggle_Pin_A0);

          /* End of Outputs for SubSystem: '<S389>/Reset Variables' */
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Reset Variables BC1' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' incorporates:
         *  EnablePort: '<S390>/Enable'
         */
        if ((*rtd_Local_Ticks >= 88.0) && (*rtd_Local_Ticks < localC->Sum5_h)) {
          if (!localDW->COMPTaskRx_Set_Values_Check_MOD) {
            localDW->COMPTaskRx_Set_Values_Check_MOD = true;
          }

          /* DataStoreRead: '<S390>/Data Store Read1' */
          rtb_DataStoreRead1_b5 = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S390>/Data Store Read2' */
          rtb_DataStoreRead2_na = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S390>/Data Store Read' */
          rtb_DataStoreRead_i25 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S390>/Data Store Read3' */
          rtb_DataStoreRead3_km = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S390>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 88.0);

          /* RelationalOperator: '<S390>/Equal13' incorporates:
           *  Constant: '<S390>/Constant57'
           */
          rtb_AND1_e = (*rtd_Board_ID != 5.0);

          /* Outputs for Enabled SubSystem: '<S390>/Process_Messages' incorporates:
           *  EnablePort: '<S459>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_e) {
            if (!localDW->Process_Messages_MODE_g) {
              localDW->Process_Messages_MODE_g = true;
            }

            /* Outputs for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_b5,
              &rtb_DataStoreRead_i25, 5.0,
              &localB->DemuxmessageCAN1andcheckcoher_f,
              &localDW->DemuxmessageCAN1andcheckcoher_f,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S459>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_m(rtb_DataStoreRead2_na,
              &rtb_DataStoreRead3_km, 5.0,
              &localB->DemuxmessageCAN1andcheckcohe_g5,
              &localDW->DemuxmessageCAN1andcheckcohe_g5,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S459>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S459>/Switch' incorporates:
             *  Constant: '<S390>/Constant51'
             *  DataStoreWrite: '<S459>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_f.Equal) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_f.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_f.Buffer_8;
            } else {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_g5.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_g5.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_g5.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_g5.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_g5.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_g5.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_g5.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_g5.Buffer_8;
            }

            /* End of Switch: '<S459>/Switch' */

            /* Logic: '<S459>/OR' incorporates:
             *  DataStoreWrite: '<S459>/Data Store Write1'
             */
            localDW->new_msg_Rx_g =
              (localB->DemuxmessageCAN1andcheckcoher_f.Equal ||
               localB->DemuxmessageCAN1andcheckcohe_g5.Equal);

            /* DataStoreWrite: '<S459>/Data Store Write3' incorporates:
             *  Constant: '<S459>/Constant2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }
          }

          /* End of Outputs for SubSystem: '<S390>/Process_Messages' */

          /* Logic: '<S390>/AND1' incorporates:
           *  Constant: '<S390>/Constant51'
           *  Logic: '<S390>/AND'
           *  Logic: '<S390>/NOT'
           */
          rtb_AND1_dx = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S390>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_dx, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S390>/Reset Tx msg counter' */

          /* Outputs for Enabled SubSystem: '<S390>/Update Msg buffer' incorporates:
           *  EnablePort: '<S461>/Enable'
           */
          if ((*rtd_Local_Ticks == 90.0) && rtb_AND1_e) {
            /* DataStoreRead: '<S461>/Data Store Read5' */
            new_set_rx_s = localDW->new_msg_Rx_g;

            /* Outputs for Enabled SubSystem: '<S461>/Set Values Update' incorporates:
             *  EnablePort: '<S488>/Enable'
             */
            if (new_set_rx_s) {
              /* Outputs for Atomic SubSystem: '<S491>/Bit Shift' */
              BitShift(localDW->Msg_Rx_f.Buffer_3, &localB->BitShift_a);

              /* End of Outputs for SubSystem: '<S491>/Bit Shift' */

              /* Outputs for Atomic SubSystem: '<S491>/Bit Shift1' */
              BitShift1(localB->BitShift_a.y, &localB->BitShift1_j);

              /* End of Outputs for SubSystem: '<S491>/Bit Shift1' */

              /* Outputs for Atomic SubSystem: '<S490>/Bit Shift' */
              BitShift(localDW->Msg_Rx_f.Buffer_2, &localB->BitShift_gr);

              /* End of Outputs for SubSystem: '<S490>/Bit Shift' */

              /* Outputs for Atomic SubSystem: '<S490>/Bit Shift1' */
              BitShift1(localB->BitShift_gr.y, &localB->BitShift1_k);

              /* End of Outputs for SubSystem: '<S490>/Bit Shift1' */

              /* Outputs for Atomic SubSystem: '<S492>/Bit Shift' */
              BitShift(localDW->Msg_Rx_f.Buffer_4, &localB->BitShift_o);

              /* End of Outputs for SubSystem: '<S492>/Bit Shift' */

              /* Outputs for Atomic SubSystem: '<S492>/Bit Shift1' */
              BitShift1(localB->BitShift_o.y, &localB->BitShift1_kf);

              /* End of Outputs for SubSystem: '<S492>/Bit Shift1' */
            }

            /* End of Outputs for SubSystem: '<S461>/Set Values Update' */
          }

          /* End of Outputs for SubSystem: '<S390>/Update Msg buffer' */
        } else {
          if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
            /* Disable for Enabled SubSystem: '<S390>/Process_Messages' */
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }

            /* End of Disable for SubSystem: '<S390>/Process_Messages' */
            localDW->COMPTaskRx_Set_Values_Check_MOD = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S391>/Enable'
         */
        if ((*rtd_Local_Ticks >= 40.0) && (*rtd_Local_Ticks < localC->Sum1_h) &&
            (!localDW->BC1_Sync_processed)) {
          if (!localDW->COMPTaskSyncbc1check_MODE_g) {
            localDW->COMPTaskSyncbc1check_MODE_g = true;
          }

          /* DataStoreRead: '<S391>/Data Store Read1' */
          rtb_DataStoreRead1_b = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S391>/Data Store Read2' */
          rtb_DataStoreRead2_pe = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S391>/Data Store Read' */
          rtb_DataStoreRead_dg = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S391>/Data Store Read3' */
          rtb_DataStoreRead3_ll = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S391>/Data Store Read15' */
          rtb_DataStoreRead15_k = *rtd_Master_ID;

          /* RelationalOperator: '<S391>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 40.0);

          /* RelationalOperator: '<S391>/Equal5' incorporates:
           *  Constant: '<S391>/Constant26'
           *  DataStoreRead: '<S391>/Data Store Read6'
           */
          rtb_AND1_e = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S391>/Process_Messages' incorporates:
           *  EnablePort: '<S505>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_e) {
            if (!localDW->Process_Messages_MODE_j) {
              localDW->Process_Messages_MODE_j = true;
            }

            /* Outputs for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_b,
              &rtb_DataStoreRead_dg, 1.0, rtb_DataStoreRead15_k,
              &localB->DemuxmessageCAN1andcheckcoher_a,
              &localDW->DemuxmessageCAN1andcheckcoher_a,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S505>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_pe,
              &rtb_DataStoreRead3_ll, 1.0, rtb_DataStoreRead15_k,
              &localB->DemuxmessageCAN1andcheckcoher_i,
              &localDW->DemuxmessageCAN1andcheckcoher_i,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S505>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S505>/Switch' incorporates:
             *  Constant: '<S391>/Constant'
             *  DataStoreWrite: '<S505>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_a.AND) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_a.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_a.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_a.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_a.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_a.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_a.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_a.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_a.Buffer_8;
            } else {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_i.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_i.Buffer_8;
            }

            /* End of Switch: '<S505>/Switch' */

            /* Logic: '<S505>/OR' incorporates:
             *  DataStoreWrite: '<S505>/Data Store Write2'
             */
            localDW->new_msg_Rx_g = (localB->DemuxmessageCAN1andcheckcoher_a.AND
              || localB->DemuxmessageCAN1andcheckcoher_i.AND);

            /* Outputs for Enabled SubSystem: '<S505>/Desync calculation' incorporates:
             *  EnablePort: '<S509>/Enable'
             */
            if (localDW->new_msg_Rx_g) {
              /* Switch: '<S509>/Switch1' incorporates:
               *  Constant: '<S163>/Constant'
               *  Constant: '<S509>/Constant'
               *  Constant: '<S509>/Constant1'
               *  Constant: '<S509>/delay_estimation_1'
               *  Constant: '<S509>/delay_estimation_2'
               *  Product: '<S509>/Multiply'
               *  Product: '<S509>/Multiply1'
               *  Sum: '<S509>/Minus'
               *  Sum: '<S509>/Minus1'
               *  Sum: '<S509>/Sum'
               *  Sum: '<S509>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_a.AND) {
                rtb_Switch1_f = ((COMM_Phase1 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_a.BitShift1_mg.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_Switch1_f = ((COMM_Phase2 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_i.BitShift1_e.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S509>/Switch1' */

              /* Saturate: '<S509>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc1_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc1_s = (-15.0);
              } else {
                Desync_Sync_bc1_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S509>/Saturation' */

              /* DataStoreWrite: '<S509>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_s;
            }

            /* End of Outputs for SubSystem: '<S505>/Desync calculation' */

            /* DataStoreWrite: '<S505>/Data Store Write3' incorporates:
             *  Constant: '<S505>/Constant2'
             *  DataStoreWrite: '<S505>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }
          }

          /* End of Outputs for SubSystem: '<S391>/Process_Messages' */

          /* Logic: '<S391>/AND1' incorporates:
           *  Constant: '<S391>/Constant'
           *  DataStoreWrite: '<S505>/Data Store Write2'
           *  Logic: '<S391>/AND'
           *  Logic: '<S391>/NOT'
           */
          rtb_AND1_b = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S391>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_b, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S391>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc1check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S391>/Process_Messages' */
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }

            /* End of Disable for SubSystem: '<S391>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE_g = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Sync bc1 check' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Test' incorporates:
         *  EnablePort: '<S392>/Enable'
         */
        if ((*rtd_Local_Ticks >= 132.0) && (*rtd_Local_Ticks < localC->Sum6_p) &&
            (!localDW->BC1_Sync_processed)) {
          if (!localDW->COMPTaskTest_MODE) {
            localDW->COMPTaskTest_MODE = true;
          }

          /* DataStoreRead: '<S392>/Data Store Read1' */
          rtb_DataStoreRead1_dj = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S392>/Data Store Read2' */
          rtb_DataStoreRead2_k = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S392>/Data Store Read' */
          rtb_DataStoreRead_m = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S392>/Data Store Read3' */
          rtb_DataStoreRead3_e = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S392>/Data Store Read15' */
          rtb_DataStoreRead15 = *rtd_Master_ID;

          /* RelationalOperator: '<S392>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 132.0);

          /* RelationalOperator: '<S392>/Equal5' incorporates:
           *  Constant: '<S392>/Constant26'
           *  DataStoreRead: '<S392>/Data Store Read6'
           */
          rtb_AND1_e = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S392>/Process_Messages' incorporates:
           *  EnablePort: '<S534>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_e) {
            if (!localDW->Process_Messages_MODE_e) {
              localDW->Process_Messages_MODE_e = true;
            }

            /* Outputs for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_dj,
              &rtb_DataStoreRead_m, 1.0, rtb_DataStoreRead15,
              &localB->DemuxmessageCAN1andcheckcoher_k,
              &localDW->DemuxmessageCAN1andcheckcoher_k,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S534>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_k,
              &rtb_DataStoreRead3_e, 1.0, rtb_DataStoreRead15,
              &localB->DemuxmessageCAN1andcheckcohe_et,
              &localDW->DemuxmessageCAN1andcheckcohe_et,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S534>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S534>/Switch' incorporates:
             *  Constant: '<S392>/Constant'
             *  DataStoreWrite: '<S534>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_k.AND) {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcoher_k.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcoher_k.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcoher_k.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcoher_k.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcoher_k.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcoher_k.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcoher_k.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcoher_k.Buffer_8;
            } else {
              localDW->Msg_Rx_f.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_et.Constant;
              localDW->Msg_Rx_f.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_et.Buffer_2;
              localDW->Msg_Rx_f.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_et.Buffer_3;
              localDW->Msg_Rx_f.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_et.Buffer_4;
              localDW->Msg_Rx_f.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_et.Buffer_5;
              localDW->Msg_Rx_f.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_et.Buffer_6;
              localDW->Msg_Rx_f.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_et.Buffer_7;
              localDW->Msg_Rx_f.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_et.Buffer_8;
            }

            /* End of Switch: '<S534>/Switch' */

            /* Logic: '<S534>/OR' incorporates:
             *  DataStoreWrite: '<S534>/Data Store Write2'
             */
            localDW->new_msg_Rx_g = (localB->DemuxmessageCAN1andcheckcoher_k.AND
              || localB->DemuxmessageCAN1andcheckcohe_et.AND);

            /* DataStoreWrite: '<S534>/Data Store Write3' incorporates:
             *  Constant: '<S534>/Constant2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_et.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_et,
                   &localDW->DemuxmessageCAN1andcheckcohe_et);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }
          }

          /* End of Outputs for SubSystem: '<S392>/Process_Messages' */

          /* Logic: '<S392>/AND1' incorporates:
           *  Constant: '<S392>/Constant'
           *  Logic: '<S392>/AND'
           *  Logic: '<S392>/NOT'
           */
          rtb_AND1_ob = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S392>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ob, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S392>/Reset Tx msg counter' */

          /* Outputs for Enabled SubSystem: '<S392>/Update Msg buffer' incorporates:
           *  EnablePort: '<S536>/Enable'
           */
          if ((*rtd_Local_Ticks == 134.0) && rtb_AND1_e) {
            /* DataStoreRead: '<S536>/Data Store Read5' */
            new_sensor_rx_s = localDW->new_msg_Rx_g;

            /* Outputs for Enabled SubSystem: '<S536>/Set Values Update' incorporates:
             *  EnablePort: '<S563>/Enable'
             */
            if (new_sensor_rx_s) {
              /* Gain: '<S563>/Gain1' incorporates:
               *  DataStoreRead: '<S536>/Data Store Read6'
               */
              beer_s = (uint16_T)((uint32_T)((uint8_T)128U) *
                                  localDW->Msg_Rx_f.Buffer_3);

              /* Gain: '<S563>/Gain' incorporates:
               *  DataStoreRead: '<S536>/Data Store Read6'
               */
              panda_s = (uint16_T)((uint32_T)((uint8_T)128U) *
                                   localDW->Msg_Rx_f.Buffer_2);
            }

            /* End of Outputs for SubSystem: '<S536>/Set Values Update' */
          }

          /* End of Outputs for SubSystem: '<S392>/Update Msg buffer' */
        } else {
          if (localDW->COMPTaskTest_MODE) {
            /* Disable for Enabled SubSystem: '<S392>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_et.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_et,
                   &localDW->DemuxmessageCAN1andcheckcohe_et);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S392>/Process_Messages' */
            localDW->COMPTaskTest_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Test' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Update LT1' incorporates:
         *  EnablePort: '<S393>/Enable'
         */
        if ((*rtd_Local_Ticks >= 44.0) && (*rtd_Local_Ticks < localC->Sum2_a) &&
            (!localDW->BC1_Sync_processed)) {
          /* Outputs for Enabled SubSystem: '<S393>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S565>/Enable'
           */
          if ((*rtd_Local_Ticks == 44.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S565>/Data Store Write1' incorporates:
             *  Constant: '<S565>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S393>/LA - Ensemble precision' */

          /* Logic: '<S393>/AND' incorporates:
           *  Constant: '<S163>/Constant17'
           *  Constant: '<S393>/Constant1'
           *  Constant: '<S393>/Constant4'
           *  DataStoreRead: '<S393>/Data Store Read'
           *  DataStoreRead: '<S393>/Data Store Read1'
           *  Logic: '<S393>/AND1'
           *  RelationalOperator: '<S393>/Equal1'
           *  RelationalOperator: '<S393>/Equal2'
           *  RelationalOperator: '<S393>/Equal3'
           */
          rtb_AND_o = ((*rtd_Local_Ticks == 46.0) && (localDW->Role_ID == 2.0) &&
                       localDW->new_msg_Rx_g);

          /* Outputs for Enabled SubSystem: '<S393>/Local Time Update' */
          LocalTimeUpdate(rtb_AND_o, 44.0, &localDW->BC1_Sync_processed,
                          &localDW->Desync_Positive, &localDW->Desync_Ticks,
                          rtd_Local_Ticks, rtd_Toggle_Pin_A0,
                          &localDW->Toggle_Pin_D10);

          /* End of Outputs for SubSystem: '<S393>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Update LT1' */

        /* Outputs for Enabled SubSystem: '<S163>/COMM Task - Set_Values' incorporates:
         *  EnablePort: '<S386>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 48.0) && (rtb_DataStoreRead8_c <
             localC->Sum3_g)) {
          if (!localDW->COMMTaskSet_Values_MODE_i) {
            localDW->COMMTaskSet_Values_MODE_i = true;
          }

          /* RelationalOperator: '<S386>/Equal12' incorporates:
           *  Constant: '<S386>/Constant55'
           */
          rtb_AND_ck = (*rtd_Board_ID == 5.0);

          /* Logic: '<S386>/NOT' */
          rtb_NOT_jl = !rtb_AND_ck;

          /* Outputs for Enabled SubSystem: '<S386>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_jl, 48.0, &localB->Receptionsubstasks_j,
                             &localC->Receptionsubstasks_j,
                             &localDW->Receptionsubstasks_j, rtd_Local_Ticks,
                             &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S386>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S386>/Transmission subtasks' incorporates:
           *  EnablePort: '<S395>/Enable'
           */
          if (rtb_AND_ck) {
            if (!localDW->Transmissionsubtasks_MODE_c) {
              localDW->Transmissionsubtasks_MODE_c = true;
            }

            /* DataStoreRead: '<S395>/Data Store Read' */
            rtb_DataStoreRead_om = *rtd_Local_Ticks;

            /* RelationalOperator: '<S395>/Equal2' */
            rtb_AND_ck = (rtb_DataStoreRead_om > 48.0);

            /* Logic: '<S395>/AND' incorporates:
             *  Constant: '<S395>/Constant6'
             *  RelationalOperator: '<S395>/GreaterThan2'
             */
            rtb_AND_oxj = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S395>/AND1' incorporates:
             *  Constant: '<S395>/Constant7'
             *  RelationalOperator: '<S395>/GreaterThan3'
             */
            rtb_AND1_gy = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S395>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S399>/Enable'
             */
            if (rtb_DataStoreRead_om == 48.0) {
              localB->Constant_l = ((uint8_T)0U);

              /* Switch: '<S412>/Switch2' incorporates:
               *  Constant: '<S399>/Constant'
               *  Constant: '<S399>/Constant11'
               *  Constant: '<S399>/Constant6'
               *  Constant: '<S399>/Constant7'
               *  RelationalOperator: '<S412>/LessThanOrEqual1'
               *  RelationalOperator: '<S412>/LessThanOrEqual2'
               *  Switch: '<S412>/Switch1'
               */
              if (1.0 < delta_a_set) {
                /* Switch: '<S412>/Switch' */
                rtb_Switch1_f = 1.0;
              } else if (delta_a_set >= (-1.0)) {
                /* Switch: '<S412>/Switch1' */
                rtb_Switch1_f = delta_a_set;
              } else {
                rtb_Switch1_f = (-1.0);
              }

              /* End of Switch: '<S412>/Switch2' */

              /* RelationalOperator: '<S412>/GreaterThan' incorporates:
               *  Constant: '<S412>/Constant'
               */
              rtb_AND_ck = (rtb_Switch1_f < 0.0);

              /* Abs: '<S412>/Abs' */
              rtb_Switch1_f = fabs(rtb_Switch1_f);

              /* Rounding: '<S412>/Fix' */
              rtb_Plus_j = floor(rtb_Switch1_f);

              /* Sum: '<S412>/Minus' */
              rtb_Switch1_f -= rtb_Plus_j;

              /* DataTypeConversion: '<S412>/Cast' */
              rtb_Cast_c = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S412>/Bit Shift' */
              BitShift1(rtb_Cast_c, &localB->BitShift_p);

              /* End of Outputs for SubSystem: '<S412>/Bit Shift' */

              /* Product: '<S412>/Multiply' */
              rtb_Plus_j *= localC->Power1_g;

              /* Product: '<S412>/Divide' */
              rtb_Plus1_b = rtb_Switch1_f / localC->Power_f;

              /* Rounding: '<S412>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S412>/Fix1' */

              /* Sum: '<S412>/Plus' incorporates:
               *  DataTypeConversion: '<S412>/Cast1'
               *  DataTypeConversion: '<S412>/Cast2'
               */
              localB->Plus_j = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_p.y + (uint8_T)rtb_Plus_j) + (uint8_T)
                rtb_Plus1_b);

              /* Switch: '<S413>/Switch2' incorporates:
               *  Constant: '<S399>/Constant12'
               *  Constant: '<S399>/Constant8'
               *  Constant: '<S399>/Constant9'
               *  RelationalOperator: '<S413>/LessThanOrEqual1'
               *  RelationalOperator: '<S413>/LessThanOrEqual2'
               *  Switch: '<S413>/Switch1'
               */
              if (10.0 < v_set) {
                /* Switch: '<S413>/Switch' */
                rtb_Plus_j = 10.0;
              } else if (v_set >= (-10.0)) {
                /* Switch: '<S413>/Switch1' */
                rtb_Plus_j = v_set;
              } else {
                rtb_Plus_j = (-10.0);
              }

              /* End of Switch: '<S413>/Switch2' */

              /* RelationalOperator: '<S413>/GreaterThan' incorporates:
               *  Constant: '<S413>/Constant'
               */
              rtb_AND_ck = (rtb_Plus_j < 0.0);

              /* Abs: '<S413>/Abs' */
              rtb_Plus_j = fabs(rtb_Plus_j);

              /* Rounding: '<S413>/Fix' */
              rtb_Switch1_f = floor(rtb_Plus_j);

              /* Sum: '<S413>/Minus' */
              rtb_Plus_j -= rtb_Switch1_f;

              /* DataTypeConversion: '<S413>/Cast' */
              rtb_Cast_db = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S413>/Bit Shift' */
              BitShift1(rtb_Cast_db, &localB->BitShift_k);

              /* End of Outputs for SubSystem: '<S413>/Bit Shift' */

              /* Product: '<S413>/Multiply' */
              rtb_Switch1_f *= localC->Power1_ag;

              /* Product: '<S413>/Divide' */
              rtb_Plus1_b = rtb_Plus_j / localC->Power_fb;

              /* Rounding: '<S413>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S413>/Fix1' */

              /* Sum: '<S413>/Plus' incorporates:
               *  DataTypeConversion: '<S413>/Cast1'
               *  DataTypeConversion: '<S413>/Cast2'
               */
              localB->Plus_bx = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_k.y + (uint8_T)rtb_Switch1_f) + (uint8_T)
                rtb_Plus1_b);

              /* Switch: '<S414>/Switch2' incorporates:
               *  Constant: '<S399>/Constant10'
               *  Constant: '<S399>/Constant4'
               *  Constant: '<S399>/Constant5'
               *  RelationalOperator: '<S414>/LessThanOrEqual1'
               *  RelationalOperator: '<S414>/LessThanOrEqual2'
               *  Switch: '<S414>/Switch1'
               */
              if (1.0 < delta_f_set) {
                /* Switch: '<S414>/Switch' */
                rtb_Plus_j = 1.0;
              } else if (delta_f_set >= (-1.0)) {
                /* Switch: '<S414>/Switch1' */
                rtb_Plus_j = delta_f_set;
              } else {
                rtb_Plus_j = (-1.0);
              }

              /* End of Switch: '<S414>/Switch2' */

              /* RelationalOperator: '<S414>/GreaterThan' incorporates:
               *  Constant: '<S414>/Constant'
               */
              rtb_AND_ck = (rtb_Plus_j < 0.0);

              /* Abs: '<S414>/Abs' */
              rtb_Plus_j = fabs(rtb_Plus_j);

              /* Rounding: '<S414>/Fix' */
              rtb_Switch1_f = floor(rtb_Plus_j);

              /* Sum: '<S414>/Minus' */
              rtb_Plus_j -= rtb_Switch1_f;

              /* DataTypeConversion: '<S414>/Cast' */
              rtb_Cast_nt = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S414>/Bit Shift' */
              BitShift1(rtb_Cast_nt, &localB->BitShift_d);

              /* End of Outputs for SubSystem: '<S414>/Bit Shift' */

              /* Product: '<S414>/Multiply' */
              rtb_Switch1_f *= localC->Power1_ly;

              /* Product: '<S414>/Divide' */
              rtb_Plus1_b = rtb_Plus_j / localC->Power_l;

              /* Rounding: '<S414>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S414>/Fix1' */

              /* Sum: '<S414>/Plus' incorporates:
               *  DataTypeConversion: '<S414>/Cast1'
               *  DataTypeConversion: '<S414>/Cast2'
               */
              localB->Plus_jp = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_d.y + (uint8_T)rtb_Switch1_f) + (uint8_T)
                rtb_Plus1_b);
            }

            /* End of Outputs for SubSystem: '<S395>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S395>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_oxj, rtb_DataStoreRead_om, 48.0,
              localB->Plus_jp, localB->Plus_j, localB->Plus_bx,
              localB->Constant_l, &localB->CheckmsgtransmissionCAN1_m,
              &localC->CheckmsgtransmissionCAN1_m,
              &localDW->CheckmsgtransmissionCAN1_m, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S395>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S395>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_gy, rtb_DataStoreRead_om, 48.0,
              localB->Plus_jp, localB->Plus_j, localB->Plus_bx,
              localB->Constant_l, &localB->CheckmsgtransmissionCAN2_i,
              &localC->CheckmsgtransmissionCAN2_i,
              &localDW->CheckmsgtransmissionCAN2_i, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S395>/Check msg transmission CAN2' */
          } else {
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S395>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S395>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }
          }

          /* End of Outputs for SubSystem: '<S386>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskSet_Values_MODE_i) {
            /* Disable for Enabled SubSystem: '<S386>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S386>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S386>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S395>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S395>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }

            /* End of Disable for SubSystem: '<S386>/Transmission subtasks' */

            /* Disable for Outport: '<S386>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S386>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S386>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

            /* Disable for Outport: '<S386>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSet_Values_MODE_i = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMM Task - Set_Values' */

        /* Outputs for Enabled SubSystem: '<S163>/COMM Task - Sync bc 1' incorporates:
         *  EnablePort: '<S387>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
             localC->Sum4_k) && (!localDW->BC1_Sync_processed)) {
          if (!localDW->COMMTaskSyncbc1_MODE) {
            localDW->COMMTaskSyncbc1_MODE = true;
          }

          /* RelationalOperator: '<S387>/Equal1' incorporates:
           *  Constant: '<S387>/Constant2'
           *  DataStoreRead: '<S387>/Data Store Read1'
           */
          rtb_Equal1_dc = (localDW->Role_ID == 1.0);

          /* Logic: '<S387>/NOT' */
          rtb_NOT_d = !rtb_Equal1_dc;

          /* Outputs for Enabled SubSystem: '<S387>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_d, 0.0, &localB->Receptionsubstasks_jz,
                             &localC->Receptionsubstasks_jz,
                             &localDW->Receptionsubstasks_jz, rtd_Local_Ticks,
                             &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S387>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S387>/Transmission subtasks1' */
          Transmissionsubtasks(rtb_Equal1_dc, 0.0,
                               &localB->Transmissionsubtasks1,
                               &localC->Transmissionsubtasks1,
                               &localDW->Transmissionsubtasks1, rtd_Board_ID,
                               rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                               rtd_TxID_CAN1, rtd_TxID_CAN2,
                               rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
                               &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S387>/Transmission subtasks1' */
        } else {
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
            if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
                &localDW->Receptionsubstasks_jz);
            }

            /* End of Disable for SubSystem: '<S387>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S387>/Transmission subtasks1' */

            /* Disable for Outport: '<S387>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S387>/Receive CAN1' */
            localB->Receptionsubstasks_jz.AND = false;

            /* Disable for Outport: '<S387>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN2' */
            localB->Receptionsubstasks_jz.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMM Task - Sync bc 1' */

        /* Outputs for Enabled SubSystem: '<S163>/COMM Task - Test' incorporates:
         *  EnablePort: '<S388>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 92.0) && (rtb_DataStoreRead8_c <
             localC->Sum7) && (!localDW->BC1_Sync_processed)) {
          if (!localDW->COMMTaskTest_MODE) {
            localDW->COMMTaskTest_MODE = true;
          }

          /* RelationalOperator: '<S388>/Equal1' incorporates:
           *  Constant: '<S388>/Constant2'
           *  DataStoreRead: '<S388>/Data Store Read1'
           */
          rtb_AND_ck = (localDW->Role_ID == 1.0);

          /* Logic: '<S388>/NOT' */
          rtb_NOT_k = !rtb_AND_ck;

          /* Outputs for Enabled SubSystem: '<S388>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_k, 92.0, &localB->Receptionsubstasks_l,
                             &localC->Receptionsubstasks_l,
                             &localDW->Receptionsubstasks_l, rtd_Local_Ticks,
                             &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S388>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S388>/Transmission subtasks1' incorporates:
           *  EnablePort: '<S440>/Enable'
           */
          if (rtb_AND_ck) {
            if (!localDW->Transmissionsubtasks1_MODE) {
              localDW->Transmissionsubtasks1_MODE = true;
            }

            /* RelationalOperator: '<S440>/Equal2' */
            rtb_AND_ck = (*rtd_Local_Ticks > 92.0);

            /* Outputs for Enabled SubSystem: '<S440>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S444>/Enable'
             */
            if (*rtd_Local_Ticks == 92.0) {
              localB->Constant_m = ((uint8_T)0U);
              localB->Constant2 = ((uint8_T)9U);

              /* DataTypeConversion: '<S444>/Data Type Conversion' incorporates:
               *  Constant: '<S444>/Constant'
               *  Constant: '<S444>/Constant10'
               *  Constant: '<S444>/Constant2'
               */
              rtb_Switch1_f = fabs(delta_f_set);
              if (rtb_Switch1_f < 4.503599627370496E+15) {
                if (rtb_Switch1_f >= 0.5) {
                  localB->DataTypeConversion = (uint8_T)floor(delta_f_set + 0.5);
                } else {
                  localB->DataTypeConversion = 0U;
                }
              } else {
                localB->DataTypeConversion = (uint8_T)delta_f_set;
              }

              /* End of DataTypeConversion: '<S444>/Data Type Conversion' */
            }

            /* End of Outputs for SubSystem: '<S440>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S440>/Check msg transmission CAN1' incorporates:
             *  EnablePort: '<S442>/Enable'
             */
            if (rtb_AND_ck && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
              if (!localDW->CheckmsgtransmissionCAN1_MODE) {
                localDW->CheckmsgtransmissionCAN1_MODE = true;
              }

              /* Sum: '<S442>/Minus2' incorporates:
               *  Constant: '<S442>/Constant'
               */
              rtb_Switch1_f = 92.0 + COMM_Phase_init1;

              /* Outputs for Enabled SubSystem: '<S442>/TX buffer update CAN1' incorporates:
               *  EnablePort: '<S445>/Enable'
               */
              if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Switch1_f,
                          COMM_Phase1) == 0.0) {
                /* DataTypeConversion: '<S445>/Cast4' incorporates:
                 *  DataStoreRead: '<S445>/Data Store Read3'
                 */
                rtb_Cast4 = localDW->basic_cycle_count;

                /* Outputs for Atomic SubSystem: '<S446>/Bit Shift1' */
                BitShift1(rtb_Cast4, &localB->BitShift1_mp);

                /* End of Outputs for SubSystem: '<S446>/Bit Shift1' */

                /* DataTypeConversion: '<S445>/Cast1' */
                rtb_Cast1_g = (uint8_T)*rtd_Tx_msg_count_CAN1;

                /* Outputs for Atomic SubSystem: '<S446>/Bit Shift' */
                BitShift4(rtb_Cast1_g, &localB->BitShift_i);

                /* End of Outputs for SubSystem: '<S446>/Bit Shift' */

                /* DataStoreWrite: '<S445>/Data Store Write10' incorporates:
                 *  DataTypeConversion: '<S445>/Cast16'
                 *  Sum: '<S446>/Minus'
                 */
                rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)
                  ((uint32_T)localB->BitShift1_mp.y + localB->BitShift_i.y) +
                  (uint8_T)*rtd_Board_ID);
                rtd_Msg_Tx_CAN1->Buffer_2 = localB->DataTypeConversion;
                rtd_Msg_Tx_CAN1->Buffer_3 = localB->Constant2;
                rtd_Msg_Tx_CAN1->Buffer_4 = localB->Constant_m;
                rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant_m;
                rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant_m;
                rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant_m;
                rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant_m;

                /* DataStoreWrite: '<S445>/Data Store Write8' */
                *rtd_TxID_CAN1 = localC->Cast;
              }

              /* End of Outputs for SubSystem: '<S442>/TX buffer update CAN1' */

              /* RelationalOperator: '<S442>/Equal7' incorporates:
               *  Constant: '<S442>/Constant11'
               *  Constant: '<S442>/Constant22'
               *  Constant: '<S442>/Constant24'
               *  Constant: '<S442>/Constant27'
               *  Constant: '<S442>/Constant8'
               *  Math: '<S442>/Mod'
               *  Math: '<S442>/Mod1'
               *  RelationalOperator: '<S442>/Equal4'
               *  Sum: '<S442>/Minus'
               *  Sum: '<S442>/Minus1'
               */
              localB->Equal7_l = (rt_modd((real_T)*rtd_Local_Ticks -
                rtb_Switch1_f, COMM_Phase1) == 0.0);
            } else {
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S442>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }
            }

            /* End of Outputs for SubSystem: '<S440>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S440>/Check msg transmission CAN2' incorporates:
             *  EnablePort: '<S443>/Enable'
             */
            if (rtb_AND_ck && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
              if (!localDW->CheckmsgtransmissionCAN2_MODE) {
                localDW->CheckmsgtransmissionCAN2_MODE = true;
              }

              /* Sum: '<S443>/Minus2' incorporates:
               *  Constant: '<S443>/Constant'
               */
              rtb_Switch1_f = 92.0 + COMM_Phase_init2;

              /* Outputs for Enabled SubSystem: '<S443>/TX buffer update CAN2' incorporates:
               *  EnablePort: '<S451>/Enable'
               */
              if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Switch1_f,
                          COMM_Phase2) == 0.0) {
                /* DataTypeConversion: '<S451>/Cast18' incorporates:
                 *  DataStoreRead: '<S451>/Data Store Read6'
                 */
                rtb_Cast18 = localDW->basic_cycle_count;

                /* Outputs for Atomic SubSystem: '<S452>/Bit Shift1' */
                BitShift1(rtb_Cast18, &localB->BitShift1_d);

                /* End of Outputs for SubSystem: '<S452>/Bit Shift1' */

                /* DataTypeConversion: '<S451>/Cast9' */
                rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

                /* Outputs for Atomic SubSystem: '<S452>/Bit Shift' */
                BitShift4(rtb_Cast9, &localB->BitShift_g);

                /* End of Outputs for SubSystem: '<S452>/Bit Shift' */

                /* DataStoreWrite: '<S451>/Data Store Write4' incorporates:
                 *  DataTypeConversion: '<S451>/Cast17'
                 *  Sum: '<S452>/Minus'
                 */
                rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)
                  ((uint32_T)localB->BitShift1_d.y + localB->BitShift_g.y) +
                  (uint8_T)*rtd_Board_ID);
                rtd_Msg_Tx_CAN2->Buffer_2 = localB->DataTypeConversion;
                rtd_Msg_Tx_CAN2->Buffer_3 = localB->Constant2;
                rtd_Msg_Tx_CAN2->Buffer_4 = localB->Constant_m;
                rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant_m;
                rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant_m;
                rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant_m;
                rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant_m;

                /* DataStoreWrite: '<S451>/Data Store Write5' */
                *rtd_TxID_CAN2 = localC->Cast8;
              }

              /* End of Outputs for SubSystem: '<S443>/TX buffer update CAN2' */

              /* RelationalOperator: '<S443>/Equal7' incorporates:
               *  Constant: '<S443>/Constant11'
               *  Constant: '<S443>/Constant22'
               *  Constant: '<S443>/Constant24'
               *  Constant: '<S443>/Constant27'
               *  Constant: '<S443>/Constant8'
               *  Math: '<S443>/Mod'
               *  Math: '<S443>/Mod1'
               *  RelationalOperator: '<S443>/Equal4'
               *  Sum: '<S443>/Minus'
               *  Sum: '<S443>/Minus1'
               */
              localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Switch1_f,
                COMM_Phase2) == 0.0);
            } else {
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S443>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }
            }

            /* End of Outputs for SubSystem: '<S440>/Check msg transmission CAN2' */
          } else {
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S442>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S443>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S440>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S388>/Transmission subtasks1' */
        } else {
          if (localDW->COMMTaskTest_MODE) {
            /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
            if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
                &localDW->Receptionsubstasks_l);
            }

            /* End of Disable for SubSystem: '<S388>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S442>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S443>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S440>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

            /* Disable for Outport: '<S388>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S388>/Receive CAN1' */
            localB->Receptionsubstasks_l.AND = false;

            /* Disable for Outport: '<S388>/Send CAN2' */
            localB->Equal7 = false;

            /* Disable for Outport: '<S388>/Receive CAN2' */
            localB->Receptionsubstasks_l.AND1 = false;
            localDW->COMMTaskTest_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMM Task - Test' */

        /* Logic: '<S163>/OR1' incorporates:
         *  Constant: '<S163>/Constant'
         *  Constant: '<S163>/Constant12'
         *  Constant: '<S163>/Constant13'
         *  Constant: '<S163>/Constant16'
         *  Constant: '<S163>/Constant19'
         *  Constant: '<S163>/Constant4'
         *  Constant: '<S163>/Constant5'
         *  Constant: '<S163>/Constant6'
         *  Constant: '<S163>/Constant7'
         *  Constant: '<S163>/Constant8'
         *  Constant: '<S390>/Constant51'
         *  Constant: '<S391>/Constant'
         *  Constant: '<S392>/Constant'
         *  Constant: '<S393>/Constant1'
         *  Constant: '<S399>/Constant'
         *  Constant: '<S440>/Constant6'
         *  Constant: '<S440>/Constant7'
         *  Constant: '<S442>/Constant22'
         *  Constant: '<S442>/Constant24'
         *  Constant: '<S442>/Constant8'
         *  Constant: '<S443>/Constant22'
         *  Constant: '<S443>/Constant24'
         *  Constant: '<S443>/Constant8'
         *  Constant: '<S444>/Constant'
         *  Constant: '<S444>/Constant2'
         *  DataStoreRead: '<S163>/Data Store Read11'
         *  DataStoreRead: '<S163>/Data Store Read2'
         *  DataStoreRead: '<S163>/Data Store Read3'
         *  DataStoreRead: '<S163>/Data Store Read6'
         *  DataStoreRead: '<S163>/Data Store Read7'
         *  DataStoreRead: '<S461>/Data Store Read6'
         *  DataStoreWrite: '<S505>/Data Store Write2'
         *  Logic: '<S163>/AND'
         *  Logic: '<S163>/AND1'
         *  Logic: '<S163>/AND17'
         *  Logic: '<S163>/AND18'
         *  Logic: '<S163>/AND19'
         *  Logic: '<S163>/AND2'
         *  Logic: '<S163>/AND20'
         *  Logic: '<S163>/AND3'
         *  Logic: '<S163>/AND4'
         *  Logic: '<S163>/AND5'
         *  Logic: '<S163>/AND6'
         *  Logic: '<S163>/AND7'
         *  Logic: '<S163>/AND8'
         *  Logic: '<S163>/NOT1'
         *  Logic: '<S163>/NOT2'
         *  Logic: '<S163>/NOT3'
         *  Logic: '<S163>/NOT4'
         *  Logic: '<S163>/NOT5'
         *  Logic: '<S390>/AND'
         *  Logic: '<S390>/AND2'
         *  Logic: '<S391>/AND'
         *  Logic: '<S392>/AND'
         *  Logic: '<S392>/AND4'
         *  Logic: '<S393>/AND1'
         *  Logic: '<S440>/AND'
         *  Logic: '<S440>/AND1'
         *  Math: '<S442>/Mod'
         *  Math: '<S443>/Mod'
         *  RelationalOperator: '<S163>/GreaterThan'
         *  RelationalOperator: '<S163>/GreaterThan1'
         *  RelationalOperator: '<S163>/GreaterThan10'
         *  RelationalOperator: '<S163>/GreaterThan11'
         *  RelationalOperator: '<S163>/GreaterThan12'
         *  RelationalOperator: '<S163>/GreaterThan13'
         *  RelationalOperator: '<S163>/GreaterThan2'
         *  RelationalOperator: '<S163>/GreaterThan3'
         *  RelationalOperator: '<S163>/GreaterThan34'
         *  RelationalOperator: '<S163>/GreaterThan35'
         *  RelationalOperator: '<S163>/GreaterThan4'
         *  RelationalOperator: '<S163>/GreaterThan5'
         *  RelationalOperator: '<S163>/GreaterThan6'
         *  RelationalOperator: '<S163>/GreaterThan7'
         *  RelationalOperator: '<S163>/GreaterThan8'
         *  RelationalOperator: '<S163>/GreaterThan9'
         *  RelationalOperator: '<S389>/Equal2'
         *  RelationalOperator: '<S390>/Equal1'
         *  RelationalOperator: '<S392>/Equal1'
         *  RelationalOperator: '<S393>/Equal3'
         *  RelationalOperator: '<S395>/Equal16'
         *  RelationalOperator: '<S440>/Equal16'
         *  RelationalOperator: '<S440>/GreaterThan2'
         *  RelationalOperator: '<S440>/GreaterThan3'
         *  RelationalOperator: '<S442>/Equal4'
         *  RelationalOperator: '<S443>/Equal4'
         *  Sum: '<S442>/Minus'
         *  Sum: '<S443>/Minus'
         */
        localB->OR1_o = (localB->Transmissionsubtasks1.Equal7_a ||
                         localB->CheckmsgtransmissionCAN1_m.Equal7 ||
                         localB->Equal7_l);

        /* Logic: '<S163>/OR2' */
        localB->OR2_k = (localB->Transmissionsubtasks1.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_i.Equal7 ||
                         localB->Equal7);

        /* Logic: '<S163>/OR3' */
        localB->OR3_b = (localB->Receptionsubstasks_jz.AND ||
                         localB->Receptionsubstasks_j.AND ||
                         localB->Receptionsubstasks_l.AND);

        /* Logic: '<S163>/OR4' */
        localB->OR4_h = (localB->Receptionsubstasks_jz.AND1 ||
                         localB->Receptionsubstasks_j.AND1 ||
                         localB->Receptionsubstasks_l.AND1);
      } else {
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */
          if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
            /* Disable for Enabled SubSystem: '<S390>/Process_Messages' */
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }

            /* End of Disable for SubSystem: '<S390>/Process_Messages' */
            localDW->COMPTaskRx_Set_Values_Check_MOD = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S391>/Process_Messages' */
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }

            /* End of Disable for SubSystem: '<S391>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Test' */
          if (localDW->COMPTaskTest_MODE) {
            /* Disable for Enabled SubSystem: '<S392>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_et.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_et,
                   &localDW->DemuxmessageCAN1andcheckcohe_et);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S392>/Process_Messages' */
            localDW->COMPTaskTest_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Test' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE_i) {
            /* Disable for Enabled SubSystem: '<S386>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S386>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S386>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S395>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S395>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }

            /* End of Disable for SubSystem: '<S386>/Transmission subtasks' */

            /* Disable for Outport: '<S386>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S386>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S386>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

            /* Disable for Outport: '<S386>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSet_Values_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
            if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
                &localDW->Receptionsubstasks_jz);
            }

            /* End of Disable for SubSystem: '<S387>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S387>/Transmission subtasks1' */

            /* Disable for Outport: '<S387>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S387>/Receive CAN1' */
            localB->Receptionsubstasks_jz.AND = false;

            /* Disable for Outport: '<S387>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN2' */
            localB->Receptionsubstasks_jz.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Sync bc 1' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Test' */
          if (localDW->COMMTaskTest_MODE) {
            /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
            if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
                &localDW->Receptionsubstasks_l);
            }

            /* End of Disable for SubSystem: '<S388>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S442>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S443>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S440>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

            /* Disable for Outport: '<S388>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S388>/Receive CAN1' */
            localB->Receptionsubstasks_l.AND = false;

            /* Disable for Outport: '<S388>/Send CAN2' */
            localB->Equal7 = false;

            /* Disable for Outport: '<S388>/Receive CAN2' */
            localB->Receptionsubstasks_l.AND1 = false;
            localDW->COMMTaskTest_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Test' */

          /* Disable for Outport: '<S163>/Send_Message_CAN1' */
          localB->OR1_o = false;

          /* Disable for Outport: '<S163>/Send_Message_CAN2' */
          localB->OR2_k = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN1' */
          localB->OR3_b = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN2' */
          localB->OR4_h = false;
          localDW->controllerbasiccycle1_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S159>/controller basic cycle 1' */

      /* Switch: '<S159>/Switch' incorporates:
       *  Constant: '<S159>/Constant1'
       *  Constant: '<S162>/Constant'
       *  Constant: '<S162>/Constant12'
       *  Constant: '<S162>/Constant14'
       *  Constant: '<S162>/Constant17'
       *  Constant: '<S162>/Constant19'
       *  Constant: '<S162>/Constant2'
       *  Constant: '<S162>/Constant21'
       *  Constant: '<S162>/Constant23'
       *  Constant: '<S162>/Constant25'
       *  Constant: '<S162>/Constant27'
       *  Constant: '<S162>/Constant28'
       *  Constant: '<S162>/Constant3'
       *  Constant: '<S162>/Constant31'
       *  Constant: '<S162>/Constant33'
       *  Constant: '<S162>/Constant34'
       *  Constant: '<S162>/Constant6'
       *  Constant: '<S162>/Constant8'
       *  Constant: '<S162>/Constant9'
       *  Constant: '<S163>/Constant'
       *  Constant: '<S163>/Constant12'
       *  Constant: '<S163>/Constant13'
       *  Constant: '<S163>/Constant16'
       *  Constant: '<S163>/Constant19'
       *  Constant: '<S163>/Constant4'
       *  Constant: '<S163>/Constant5'
       *  Constant: '<S163>/Constant6'
       *  Constant: '<S163>/Constant7'
       *  Constant: '<S163>/Constant8'
       *  Constant: '<S173>/Constant'
       *  Constant: '<S174>/Constant1'
       *  Constant: '<S174>/Constant4'
       *  Constant: '<S176>/Constant4'
       *  Constant: '<S177>/Constant1'
       *  Constant: '<S178>/Constant4'
       *  Constant: '<S179>/Constant1'
       *  Constant: '<S180>/Constant4'
       *  Constant: '<S181>/Constant1'
       *  Constant: '<S390>/Constant51'
       *  Constant: '<S391>/Constant'
       *  Constant: '<S392>/Constant'
       *  Constant: '<S393>/Constant1'
       *  Constant: '<S399>/Constant'
       *  Constant: '<S440>/Constant6'
       *  Constant: '<S440>/Constant7'
       *  Constant: '<S442>/Constant22'
       *  Constant: '<S442>/Constant24'
       *  Constant: '<S442>/Constant8'
       *  Constant: '<S443>/Constant22'
       *  Constant: '<S443>/Constant24'
       *  Constant: '<S443>/Constant8'
       *  Constant: '<S444>/Constant'
       *  Constant: '<S444>/Constant2'
       *  DataStoreRead: '<S132>/Data Store Read10'
       *  DataStoreRead: '<S163>/Data Store Read11'
       *  DataStoreRead: '<S163>/Data Store Read2'
       *  DataStoreRead: '<S163>/Data Store Read3'
       *  DataStoreRead: '<S163>/Data Store Read6'
       *  DataStoreRead: '<S163>/Data Store Read7'
       *  DataStoreRead: '<S174>/Data Store Read'
       *  DataStoreRead: '<S174>/Data Store Read1'
       *  DataStoreRead: '<S176>/Data Store Read5'
       *  DataStoreRead: '<S178>/Data Store Read5'
       *  DataStoreRead: '<S180>/Data Store Read5'
       *  DataStoreRead: '<S461>/Data Store Read6'
       *  DataStoreWrite: '<S263>/Data Store Write2'
       *  DataStoreWrite: '<S505>/Data Store Write2'
       *  Logic: '<S162>/AND1'
       *  Logic: '<S162>/AND10'
       *  Logic: '<S162>/AND11'
       *  Logic: '<S162>/AND12'
       *  Logic: '<S162>/AND13'
       *  Logic: '<S162>/AND14'
       *  Logic: '<S162>/AND15'
       *  Logic: '<S162>/AND16'
       *  Logic: '<S162>/AND18'
       *  Logic: '<S162>/AND19'
       *  Logic: '<S162>/AND2'
       *  Logic: '<S162>/AND3'
       *  Logic: '<S162>/AND4'
       *  Logic: '<S162>/AND5'
       *  Logic: '<S162>/AND6'
       *  Logic: '<S162>/AND7'
       *  Logic: '<S162>/AND8'
       *  Logic: '<S162>/AND9'
       *  Logic: '<S162>/NOT1'
       *  Logic: '<S163>/AND'
       *  Logic: '<S163>/AND1'
       *  Logic: '<S163>/AND17'
       *  Logic: '<S163>/AND18'
       *  Logic: '<S163>/AND19'
       *  Logic: '<S163>/AND2'
       *  Logic: '<S163>/AND20'
       *  Logic: '<S163>/AND3'
       *  Logic: '<S163>/AND4'
       *  Logic: '<S163>/AND5'
       *  Logic: '<S163>/AND6'
       *  Logic: '<S163>/AND7'
       *  Logic: '<S163>/AND8'
       *  Logic: '<S163>/NOT1'
       *  Logic: '<S163>/NOT2'
       *  Logic: '<S163>/NOT3'
       *  Logic: '<S163>/NOT4'
       *  Logic: '<S163>/NOT5'
       *  Logic: '<S171>/AND'
       *  Logic: '<S173>/AND'
       *  Logic: '<S174>/AND'
       *  Logic: '<S174>/AND1'
       *  Logic: '<S176>/AND'
       *  Logic: '<S178>/AND'
       *  Logic: '<S180>/AND'
       *  Logic: '<S390>/AND'
       *  Logic: '<S390>/AND2'
       *  Logic: '<S391>/AND'
       *  Logic: '<S392>/AND'
       *  Logic: '<S392>/AND4'
       *  Logic: '<S393>/AND1'
       *  Logic: '<S440>/AND'
       *  Logic: '<S440>/AND1'
       *  Math: '<S442>/Mod'
       *  Math: '<S443>/Mod'
       *  RelationalOperator: '<S159>/Equal1'
       *  RelationalOperator: '<S162>/GreaterThan10'
       *  RelationalOperator: '<S162>/GreaterThan11'
       *  RelationalOperator: '<S162>/GreaterThan12'
       *  RelationalOperator: '<S162>/GreaterThan13'
       *  RelationalOperator: '<S162>/GreaterThan14'
       *  RelationalOperator: '<S162>/GreaterThan15'
       *  RelationalOperator: '<S162>/GreaterThan16'
       *  RelationalOperator: '<S162>/GreaterThan17'
       *  RelationalOperator: '<S162>/GreaterThan18'
       *  RelationalOperator: '<S162>/GreaterThan19'
       *  RelationalOperator: '<S162>/GreaterThan2'
       *  RelationalOperator: '<S162>/GreaterThan20'
       *  RelationalOperator: '<S162>/GreaterThan21'
       *  RelationalOperator: '<S162>/GreaterThan22'
       *  RelationalOperator: '<S162>/GreaterThan23'
       *  RelationalOperator: '<S162>/GreaterThan24'
       *  RelationalOperator: '<S162>/GreaterThan25'
       *  RelationalOperator: '<S162>/GreaterThan26'
       *  RelationalOperator: '<S162>/GreaterThan27'
       *  RelationalOperator: '<S162>/GreaterThan28'
       *  RelationalOperator: '<S162>/GreaterThan29'
       *  RelationalOperator: '<S162>/GreaterThan3'
       *  RelationalOperator: '<S162>/GreaterThan30'
       *  RelationalOperator: '<S162>/GreaterThan31'
       *  RelationalOperator: '<S162>/GreaterThan32'
       *  RelationalOperator: '<S162>/GreaterThan33'
       *  RelationalOperator: '<S162>/GreaterThan4'
       *  RelationalOperator: '<S162>/GreaterThan5'
       *  RelationalOperator: '<S162>/GreaterThan6'
       *  RelationalOperator: '<S162>/GreaterThan7'
       *  RelationalOperator: '<S162>/GreaterThan8'
       *  RelationalOperator: '<S162>/GreaterThan9'
       *  RelationalOperator: '<S163>/GreaterThan'
       *  RelationalOperator: '<S163>/GreaterThan1'
       *  RelationalOperator: '<S163>/GreaterThan10'
       *  RelationalOperator: '<S163>/GreaterThan11'
       *  RelationalOperator: '<S163>/GreaterThan12'
       *  RelationalOperator: '<S163>/GreaterThan13'
       *  RelationalOperator: '<S163>/GreaterThan2'
       *  RelationalOperator: '<S163>/GreaterThan3'
       *  RelationalOperator: '<S163>/GreaterThan34'
       *  RelationalOperator: '<S163>/GreaterThan35'
       *  RelationalOperator: '<S163>/GreaterThan4'
       *  RelationalOperator: '<S163>/GreaterThan5'
       *  RelationalOperator: '<S163>/GreaterThan6'
       *  RelationalOperator: '<S163>/GreaterThan7'
       *  RelationalOperator: '<S163>/GreaterThan8'
       *  RelationalOperator: '<S163>/GreaterThan9'
       *  RelationalOperator: '<S169>/Equal'
       *  RelationalOperator: '<S170>/Equal'
       *  RelationalOperator: '<S171>/Equal2'
       *  RelationalOperator: '<S172>/Equal2'
       *  RelationalOperator: '<S174>/Equal'
       *  RelationalOperator: '<S174>/Equal1'
       *  RelationalOperator: '<S174>/Equal2'
       *  RelationalOperator: '<S175>/Equal'
       *  RelationalOperator: '<S176>/Equal'
       *  RelationalOperator: '<S176>/Equal2'
       *  RelationalOperator: '<S178>/Equal'
       *  RelationalOperator: '<S178>/Equal2'
       *  RelationalOperator: '<S180>/Equal'
       *  RelationalOperator: '<S180>/Equal2'
       *  RelationalOperator: '<S389>/Equal2'
       *  RelationalOperator: '<S390>/Equal1'
       *  RelationalOperator: '<S392>/Equal1'
       *  RelationalOperator: '<S393>/Equal3'
       *  RelationalOperator: '<S395>/Equal16'
       *  RelationalOperator: '<S440>/Equal16'
       *  RelationalOperator: '<S440>/GreaterThan2'
       *  RelationalOperator: '<S440>/GreaterThan3'
       *  RelationalOperator: '<S442>/Equal4'
       *  RelationalOperator: '<S443>/Equal4'
       *  Sum: '<S442>/Minus'
       *  Sum: '<S443>/Minus'
       */
      if (rtb_Equal_kj) {
        localB->signal1_n = localB->OR1_oo;
        localB->signal2_j = localB->OR4_o;
        localB->signal3_k = localB->OR2_p;
        localB->signal4_e = localB->OR3_bn;
      } else {
        localB->signal1_n = localB->OR1_o;
        localB->signal2_j = localB->OR2_k;
        localB->signal3_k = localB->OR3_b;
        localB->signal4_e = localB->OR4_h;
      }

      /* End of Switch: '<S159>/Switch' */

      /* DataStoreRead: '<S161>/Data Store Read' */
      Master_ID_s = *rtd_Master_ID;

      /* DataStoreRead: '<S161>/Data Store Read1' */
      Role_ID_s = localDW->Role_ID;

      /* DataStoreRead: '<S161>/Data Store Read10' */
      BC1_sync_processed_s = localDW->BC1_Sync_processed;

      /* DataStoreRead: '<S161>/Data Store Read11' */
      sync_bc0_miss_counter_s = localDW->Sync_bc0_missed_counter_j;

      /* DataStoreRead: '<S161>/Data Store Read12' */
      sync_bc1_miss_counter_s = localDW->Sync_bc1_missed_counter_h;

      /* DataStoreRead: '<S161>/Data Store Read2' */
      BC0_sync_processed_s = localDW->BC0_Sync_processed;

      /* DataStoreRead: '<S161>/Data Store Read3' */
      votes_Board_1_DEBUG = localDW->Votes_count.First_Board;
      votes_Board_2_DEBUG = localDW->Votes_count.Second_Board;
      votes_Board_3_DEBUG = localDW->Votes_count.Third_Board;

      /* DataStoreRead: '<S161>/Data Store Read4' */
      Board_1_error_counter_s = localDW->Board1_error_counter;

      /* DataStoreRead: '<S161>/Data Store Read5' */
      Board_2_error_counter_s = localDW->Board2_error_counter;

      /* DataStoreRead: '<S161>/Data Store Read6' */
      Board_3_error_counter_s = localDW->Board3_error_counter;

      /* DataStoreRead: '<S161>/Data Store Read7' */
      BC0_vote1_processed_s = localDW->BC0_Vote1_processed;

      /* DataStoreRead: '<S161>/Data Store Read8' */
      BC0_vote2_processed_s = localDW->BC0_Vote2_processed;

      /* DataStoreRead: '<S161>/Data Store Read9' */
      BC0_vote3_processed_s = localDW->BC0_Vote3_processed;

      /* DataStoreRead: '<S164>/Data Store Read24' */
      msg_count_DEBUG_s = localDW->msg_count_DEBUG_i;
    } else {
      if (localDW->ControllerMatrixCycle_MODE) {
        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 0' */
        if (localDW->controllerbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S173>/Process_Messages' */
            if (localDW->Process_Messages_MODE_ek) {
              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_ek = false;
            }

            /* End of Disable for SubSystem: '<S173>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S177>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S177>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S179>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S179>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S181>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S181>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
              &localDW->COMMTaskSyncbc0_b);
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S166>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

            /* Disable for Outport: '<S166>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S166>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S166>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S166>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S168>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

            /* Disable for Outport: '<S168>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S168>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S168>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S168>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote3' */

          /* Disable for Outport: '<S162>/Send_Message_CAN1' */
          localB->OR1_oo = false;

          /* Disable for Outport: '<S162>/Send_Message_CAN2' */
          localB->OR4_o = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN1' */
          localB->OR2_p = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN2' */
          localB->OR3_bn = false;
          localDW->controllerbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */
          if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
            /* Disable for Enabled SubSystem: '<S390>/Process_Messages' */
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }

            /* End of Disable for SubSystem: '<S390>/Process_Messages' */
            localDW->COMPTaskRx_Set_Values_Check_MOD = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S391>/Process_Messages' */
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }

            /* End of Disable for SubSystem: '<S391>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Test' */
          if (localDW->COMPTaskTest_MODE) {
            /* Disable for Enabled SubSystem: '<S392>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_et.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_et,
                   &localDW->DemuxmessageCAN1andcheckcohe_et);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S392>/Process_Messages' */
            localDW->COMPTaskTest_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Test' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE_i) {
            /* Disable for Enabled SubSystem: '<S386>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S386>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S386>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S395>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S395>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }

            /* End of Disable for SubSystem: '<S386>/Transmission subtasks' */

            /* Disable for Outport: '<S386>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S386>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S386>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

            /* Disable for Outport: '<S386>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSet_Values_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
            if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
                &localDW->Receptionsubstasks_jz);
            }

            /* End of Disable for SubSystem: '<S387>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S387>/Transmission subtasks1' */

            /* Disable for Outport: '<S387>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S387>/Receive CAN1' */
            localB->Receptionsubstasks_jz.AND = false;

            /* Disable for Outport: '<S387>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN2' */
            localB->Receptionsubstasks_jz.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Sync bc 1' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Test' */
          if (localDW->COMMTaskTest_MODE) {
            /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
            if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
                &localDW->Receptionsubstasks_l);
            }

            /* End of Disable for SubSystem: '<S388>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S442>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S443>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S440>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

            /* Disable for Outport: '<S388>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S388>/Receive CAN1' */
            localB->Receptionsubstasks_l.AND = false;

            /* Disable for Outport: '<S388>/Send CAN2' */
            localB->Equal7 = false;

            /* Disable for Outport: '<S388>/Receive CAN2' */
            localB->Receptionsubstasks_l.AND1 = false;
            localDW->COMMTaskTest_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Test' */

          /* Disable for Outport: '<S163>/Send_Message_CAN1' */
          localB->OR1_o = false;

          /* Disable for Outport: '<S163>/Send_Message_CAN2' */
          localB->OR2_k = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN1' */
          localB->OR3_b = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN2' */
          localB->OR4_h = false;
          localDW->controllerbasiccycle1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 1' */

        /* Disable for Outport: '<S159>/Send_CAN1' */
        localB->signal1_n = false;

        /* Disable for Outport: '<S159>/Send_CAN2' */
        localB->signal2_j = false;

        /* Disable for Outport: '<S159>/Receive_CAN1' */
        localB->signal3_k = false;

        /* Disable for Outport: '<S159>/Receive_CAN2' */
        localB->signal4_e = false;
        localDW->ControllerMatrixCycle_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S132>/Controller Matrix Cycle' */

    /* Outputs for Enabled SubSystem: '<S132>/Input Generator Matrix Cycle' incorporates:
     *  EnablePort: '<S160>/Enable'
     */
    if (*rtd_Board_ID == 5.0) {
      if (!localDW->InputGeneratorMatrixCycle_MODE) {
        localDW->InputGeneratorMatrixCycle_MODE = true;
      }

      /* RelationalOperator: '<S160>/Equal' incorporates:
       *  Constant: '<S160>/Constant'
       */
      rtb_Equal_kj = (localDW->basic_cycle_count == 0.0);

      /* Outputs for Enabled SubSystem: '<S160>/input generator basic cycle 0' incorporates:
       *  EnablePort: '<S569>/Enable'
       */
      if (rtb_Equal_kj) {
        if (!localDW->inputgeneratorbasiccycle0_MODE) {
          localDW->inputgeneratorbasiccycle0_MODE = true;
        }

        /* DataStoreRead: '<S569>/Data Store Read8' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S569>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S573>/Enable'
         */
        if ((*rtd_Local_Ticks >= 48.0) && (*rtd_Local_Ticks < localC->Sum17)) {
          /* Outputs for Enabled SubSystem: '<S573>/Check Timeouts' incorporates:
           *  EnablePort: '<S595>/Enable'
           */
          if (*rtd_Local_Ticks == 48.0) {
            /* Logic: '<S595>/NOT4' incorporates:
             *  DataStoreRead: '<S595>/Data Store Read25'
             *  DataStoreWrite: '<S595>/Data Store Write8'
             */
            localDW->Toggle_Pin_A1 = !localDW->BC0_Sync_processed;

            /* Switch: '<S595>/Switch7' incorporates:
             *  Constant: '<S595>/Constant16'
             *  DataStoreRead: '<S595>/Data Store Read23'
             *  DataStoreWrite: '<S595>/Data Store Write8'
             *  DataStoreWrite: '<S595>/Data Store Write9'
             *  Sum: '<S595>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc0_missed_counter += 1.0;
            }

            /* End of Switch: '<S595>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S573>/Check Timeouts' */

          /* DataStoreRead: '<S573>/Data Store Read' incorporates:
           *  RelationalOperator: '<S573>/Equal2'
           */
          reset_ing_s = localDW->Reset_Board_j;

          /* Outputs for Enabled SubSystem: '<S573>/RESET Board - Return to initialization' incorporates:
           *  EnablePort: '<S596>/Enable'
           */
          if ((*rtd_Local_Ticks == 50.0) && reset_ing_s) {
            /* DataStoreWrite: '<S596>/Data Store Write' */
            localDW->Reset_Board_j = localC->Cast_j;

            /* DataStoreWrite: '<S596>/Data Store Write1' */
            *rtd_New_Msg_Ready_CAN1 = localC->Cast_j;

            /* DataStoreWrite: '<S596>/Data Store Write10' */
            *rtd_New_Msg_Ready_CAN2 = localC->Cast_j;

            /* DataStoreWrite: '<S596>/Data Store Write11' */
            localDW->Desync_Positive = localC->Cast_j;

            /* DataStoreWrite: '<S596>/Data Store Write2' */
            localDW->Initialization_flag = localC->NOT_l;

            /* DataStoreWrite: '<S596>/Data Store Write4' incorporates:
             *  Constant: '<S596>/Constant'
             */
            localDW->Role_ID = 0.0;

            /* DataStoreWrite: '<S596>/Data Store Write5' incorporates:
             *  Constant: '<S596>/Constant'
             */
            *rtd_Master_ID = 0.0;

            /* DataStoreWrite: '<S596>/Data Store Write6' */
            *rtd_Rx_State_CAN1 = localC->Cast6_k;

            /* DataStoreWrite: '<S596>/Data Store Write9' */
            *rtd_Rx_State_CAN2 = localC->Cast6_k;

            /* DataStoreWrite: '<S596>/Data Store Write3' incorporates:
             *  Constant: '<S596>/Constant1'
             */
            *rtd_RxID_CAN1 = 1U;

            /* DataStoreWrite: '<S596>/Data Store Write8' incorporates:
             *  Constant: '<S596>/Constant1'
             */
            *rtd_RxID_CAN2 = 1U;

            /* DataStoreWrite: '<S596>/Data Store Write7' incorporates:
             *  Constant: '<S596>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S573>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S569>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S569>/COMP Task - Reset Variables BC0' incorporates:
         *  EnablePort: '<S574>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S574>/Reset variables' incorporates:
         *  EnablePort: '<S597>/Enable'
         */
        if ((*rtd_Local_Ticks >= 204.0) && (*rtd_Local_Ticks < localC->Sum16) &&
            (*rtd_Local_Ticks == 204.0)) {
          /* DataStoreWrite: '<S597>/Data Store Write' incorporates:
           *  Constant: '<S597>/Constant'
           */
          localDW->Desync_Positive = false;

          /* DataStoreWrite: '<S597>/Data Store Write1' incorporates:
           *  Constant: '<S597>/Constant'
           */
          localDW->BC0_Sync_processed = false;

          /* DataStoreWrite: '<S597>/Data Store Write5' incorporates:
           *  Constant: '<S597>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S574>/Reset variables' */
        /* End of Outputs for SubSystem: '<S569>/COMP Task - Reset Variables BC0' */

        /* Logic: '<S569>/NOT1' incorporates:
         *  Constant: '<S569>/Constant25'
         *  Constant: '<S569>/Constant31'
         *  Constant: '<S569>/Constant4'
         *  DataStoreRead: '<S569>/Data Store Read6'
         *  Logic: '<S569>/AND15'
         *  Logic: '<S569>/AND16'
         *  Logic: '<S569>/NOT3'
         *  Logic: '<S573>/AND'
         *  RelationalOperator: '<S569>/GreaterThan30'
         *  RelationalOperator: '<S569>/GreaterThan31'
         *  RelationalOperator: '<S569>/GreaterThan32'
         *  RelationalOperator: '<S569>/GreaterThan33'
         *  RelationalOperator: '<S573>/Equal1'
         *  RelationalOperator: '<S573>/Equal2'
         *  RelationalOperator: '<S574>/Equal2'
         */
        rtb_AND2_n = !localDW->BC0_Sync_processed;

        /* Outputs for Enabled SubSystem: '<S569>/COMP Task - Sync bc0 check' incorporates:
         *  EnablePort: '<S575>/Enable'
         */
        if ((*rtd_Local_Ticks >= 40.0) && (*rtd_Local_Ticks < localC->Sum1_m) &&
            rtb_AND2_n) {
          if (!localDW->COMPTaskSyncbc0check_MODE) {
            localDW->COMPTaskSyncbc0check_MODE = true;
          }

          /* DataStoreRead: '<S575>/Data Store Read1' */
          rtb_DataStoreRead1_af = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S575>/Data Store Read2' */
          rtb_DataStoreRead2_f = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S575>/Data Store Read' */
          rtb_DataStoreRead_c = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S575>/Data Store Read3' */
          rtb_DataStoreRead3_ou = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S575>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 40.0);

          /* RelationalOperator: '<S575>/Equal5' incorporates:
           *  Constant: '<S575>/Constant26'
           *  DataStoreRead: '<S575>/Data Store Read6'
           */
          rtb_AND1_e = (localDW->Role_ID != 1.0);

          /* Outputs for Enabled SubSystem: '<S575>/Process_Messages' incorporates:
           *  EnablePort: '<S598>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_e) {
            if (!localDW->Process_Messages_MODE_n) {
              localDW->Process_Messages_MODE_n = true;
            }

            /* Outputs for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_d(rtb_DataStoreRead1_af,
              &rtb_DataStoreRead_c, 0.0,
              &localB->DemuxmessageCAN1andcheckcohe_d0,
              &localDW->DemuxmessageCAN1andcheckcohe_d0,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S598>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_h(rtb_DataStoreRead2_f,
              &rtb_DataStoreRead3_ou, 0.0,
              &localB->DemuxmessageCAN1andcheckcohe_h5,
              &localDW->DemuxmessageCAN1andcheckcohe_h5,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S598>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S598>/Switch' incorporates:
             *  Constant: '<S575>/Constant'
             *  DataStoreWrite: '<S598>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcohe_d0.Equal1) {
              Msg_Rx_g.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_d0.Constant;
              Msg_Rx_g.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_d0.Buffer_2;
              Msg_Rx_g.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_d0.Buffer_3;
              Msg_Rx_g.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_d0.Buffer_4;
              Msg_Rx_g.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_d0.Buffer_5;
              Msg_Rx_g.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_d0.Buffer_6;
              Msg_Rx_g.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_d0.Buffer_7;
              Msg_Rx_g.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_d0.Buffer_8;
            } else {
              Msg_Rx_g.Buffer_1 =
                localB->DemuxmessageCAN1andcheckcohe_h5.Constant;
              Msg_Rx_g.Buffer_2 =
                localB->DemuxmessageCAN1andcheckcohe_h5.Buffer_2;
              Msg_Rx_g.Buffer_3 =
                localB->DemuxmessageCAN1andcheckcohe_h5.Buffer_3;
              Msg_Rx_g.Buffer_4 =
                localB->DemuxmessageCAN1andcheckcohe_h5.Buffer_4;
              Msg_Rx_g.Buffer_5 =
                localB->DemuxmessageCAN1andcheckcohe_h5.Buffer_5;
              Msg_Rx_g.Buffer_6 =
                localB->DemuxmessageCAN1andcheckcohe_h5.Buffer_6;
              Msg_Rx_g.Buffer_7 =
                localB->DemuxmessageCAN1andcheckcohe_h5.Buffer_7;
              Msg_Rx_g.Buffer_8 =
                localB->DemuxmessageCAN1andcheckcohe_h5.Buffer_8;
            }

            /* End of Switch: '<S598>/Switch' */

            /* Logic: '<S598>/OR' incorporates:
             *  DataStoreWrite: '<S598>/Data Store Write2'
             */
            localDW->new_msg_Rx_i =
              (localB->DemuxmessageCAN1andcheckcohe_d0.Equal1 ||
               localB->DemuxmessageCAN1andcheckcohe_h5.Equal1);

            /* Outputs for Enabled SubSystem: '<S598>/Desync calculation' incorporates:
             *  EnablePort: '<S602>/Enable'
             */
            if (localDW->new_msg_Rx_i) {
              /* Switch: '<S602>/Switch1' incorporates:
               *  Constant: '<S569>/Constant'
               *  Constant: '<S602>/Constant'
               *  Constant: '<S602>/Constant1'
               *  Constant: '<S602>/delay_estimation_1'
               *  Constant: '<S602>/delay_estimation_2'
               *  Product: '<S602>/Multiply'
               *  Product: '<S602>/Multiply1'
               *  Sum: '<S602>/Minus'
               *  Sum: '<S602>/Minus1'
               *  Sum: '<S602>/Sum'
               *  Sum: '<S602>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcohe_d0.Equal1) {
                rtb_Switch1_f = ((COMM_Phase1 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcohe_d0.BitShift1_b.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_Switch1_f = ((COMM_Phase2 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcohe_h5.BitShift1_d.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S602>/Switch1' */

              /* Saturate: '<S602>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc0_ing_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc0_ing_s = (-15.0);
              } else {
                Desync_Sync_bc0_ing_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S602>/Saturation' */

              /* DataStoreWrite: '<S602>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc0_ing_s;
            }

            /* End of Outputs for SubSystem: '<S598>/Desync calculation' */

            /* DataStoreWrite: '<S598>/Data Store Write3' incorporates:
             *  Constant: '<S598>/Constant2'
             *  DataStoreWrite: '<S598>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }
          }

          /* End of Outputs for SubSystem: '<S575>/Process_Messages' */

          /* Logic: '<S575>/AND1' incorporates:
           *  Constant: '<S575>/Constant'
           *  DataStoreWrite: '<S598>/Data Store Write2'
           *  Logic: '<S575>/AND'
           *  Logic: '<S575>/NOT'
           */
          rtb_AND1_p3 = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S575>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_p3, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S575>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S575>/Process_Messages' */
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }

            /* End of Disable for SubSystem: '<S575>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S569>/COMP Task - Sync bc0 check' */

        /* Outputs for Enabled SubSystem: '<S569>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S576>/Enable'
         */
        if ((*rtd_Local_Ticks >= 44.0) && (*rtd_Local_Ticks < localC->Sum2_o) &&
            rtb_AND2_n) {
          /* RelationalOperator: '<S576>/Equal1' incorporates:
           *  Constant: '<S569>/Constant3'
           */
          rtb_AND_ck = (*rtd_Local_Ticks == 46.0);

          /* Outputs for Enabled SubSystem: '<S576>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S627>/Enable'
           */
          if ((*rtd_Local_Ticks == 44.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S627>/Data Store Write1' incorporates:
             *  Constant: '<S627>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S576>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S576>/Local Time Update' incorporates:
           *  EnablePort: '<S628>/Enable'
           */
          if (rtb_AND_ck && localDW->new_msg_Rx_i) {
            /* RelationalOperator: '<S628>/GreaterThan' incorporates:
             *  Constant: '<S628>/Constant4'
             *  DataStoreRead: '<S628>/Data Store Read1'
             *  DataStoreWrite: '<S628>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S628>/NOT' incorporates:
             *  DataStoreWrite: '<S628>/Data Store Write'
             */
            rtb_NOT_h4 = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S628>/Desync_Negative' */
            Desync_Negative(rtb_NOT_h4, 44.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S628>/Desync_Negative' */

            /* DataStoreWrite: '<S628>/Data Store Write13' incorporates:
             *  Constant: '<S628>/Constant3'
             */
            localDW->BC0_Sync_processed = true;

            /* DataStoreWrite: '<S628>/Data Store Write3' incorporates:
             *  Constant: '<S628>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S628>/Data Store Write1' incorporates:
             *  Constant: '<S628>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S576>/Local Time Update' */

          /* Outputs for Enabled SubSystem: '<S576>/Set Reset Board' incorporates:
           *  EnablePort: '<S629>/Enable'
           */
          if (rtb_AND_ck && (!localDW->new_msg_Rx_i)) {
            /* DataStoreWrite: '<S629>/Data Store Write' incorporates:
             *  Constant: '<S629>/Constant'
             */
            localDW->Reset_Board_j = true;
          }

          /* End of Outputs for SubSystem: '<S576>/Set Reset Board' */
        }

        /* End of Outputs for SubSystem: '<S569>/COMP Task - Update LT' */

        /* Logic: '<S569>/AND17' incorporates:
         *  Constant: '<S569>/Constant'
         *  Constant: '<S569>/Constant17'
         *  Constant: '<S569>/Constant2'
         *  Constant: '<S575>/Constant'
         *  Constant: '<S576>/Constant1'
         *  DataStoreRead: '<S569>/Data Store Read11'
         *  DataStoreRead: '<S576>/Data Store Read'
         *  DataStoreWrite: '<S598>/Data Store Write2'
         *  Logic: '<S569>/AND'
         *  Logic: '<S569>/AND1'
         *  Logic: '<S569>/AND18'
         *  Logic: '<S569>/AND19'
         *  Logic: '<S569>/AND2'
         *  Logic: '<S569>/NOT1'
         *  Logic: '<S569>/NOT2'
         *  Logic: '<S575>/AND'
         *  Logic: '<S576>/AND'
         *  Logic: '<S576>/AND1'
         *  Logic: '<S576>/AND2'
         *  Logic: '<S576>/NOT'
         *  RelationalOperator: '<S569>/GreaterThan'
         *  RelationalOperator: '<S569>/GreaterThan1'
         *  RelationalOperator: '<S569>/GreaterThan2'
         *  RelationalOperator: '<S569>/GreaterThan3'
         *  RelationalOperator: '<S569>/GreaterThan4'
         *  RelationalOperator: '<S569>/GreaterThan5'
         *  RelationalOperator: '<S576>/Equal3'
         */
        rtb_AND17_b = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4_m) && (!localDW->BC0_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S569>/COMM Task - Sync bc 0' */
        COMMTaskSyncbc0(rtb_AND17_b, 0.0, &localB->COMMTaskSyncbc0_e,
                        &localC->COMMTaskSyncbc0_e, &localDW->COMMTaskSyncbc0_e,
                        rtd_Board_ID, rtd_Local_Ticks, &Msg_Rx_g,
                        rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, rtd_New_Msg_Ready_CAN1,
                        rtd_New_Msg_Ready_CAN2, &localDW->Role_ID, rtd_RxID_CAN1,
                        rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                        rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx_i);

        /* End of Outputs for SubSystem: '<S569>/COMM Task - Sync bc 0' */
      } else {
        if (localDW->inputgeneratorbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S569>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S575>/Process_Messages' */
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }

            /* End of Disable for SubSystem: '<S575>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S569>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S569>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_e.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_e,
              &localDW->COMMTaskSyncbc0_e);
          }

          /* End of Disable for SubSystem: '<S569>/COMM Task - Sync bc 0' */

          /* Disable for Outport: '<S569>/Send_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S569>/Send_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S569>/Receive_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S569>/Receive_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1 = false;
          localDW->inputgeneratorbasiccycle0_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S160>/input generator basic cycle 0' */

      /* Outputs for Enabled SubSystem: '<S160>/input generator basic cycle 1' incorporates:
       *  EnablePort: '<S570>/Enable'
       */
      if (localDW->basic_cycle_count == 1.0) {
        if (!localDW->inputgeneratorbasiccycle1_MODE) {
          localDW->inputgeneratorbasiccycle1_MODE = true;
        }

        /* DataStoreRead: '<S570>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S570>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S633>/Enable'
         */
        if ((*rtd_Local_Ticks >= 132.0) && (*rtd_Local_Ticks < localC->Sum5)) {
          /* Outputs for Enabled SubSystem: '<S633>/Check Timeouts' incorporates:
           *  EnablePort: '<S683>/Enable'
           */
          if (*rtd_Local_Ticks == 132.0) {
            /* Logic: '<S683>/NOT4' incorporates:
             *  DataStoreRead: '<S683>/Data Store Read25'
             *  DataStoreWrite: '<S683>/Data Store Write8'
             */
            localDW->Toggle_Pin_A1 = !localDW->BC1_Sync_processed;

            /* Switch: '<S683>/Switch7' incorporates:
             *  Constant: '<S683>/Constant16'
             *  DataStoreRead: '<S683>/Data Store Read23'
             *  DataStoreWrite: '<S683>/Data Store Write8'
             *  DataStoreWrite: '<S683>/Data Store Write9'
             *  Sum: '<S683>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc1_missed_counter += 1.0;
            }

            /* End of Switch: '<S683>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S633>/Check Timeouts' */

          /* Outputs for Enabled SubSystem: '<S633>/RESET Board - Return to initialization' incorporates:
           *  EnablePort: '<S684>/Enable'
           */
          if ((*rtd_Local_Ticks == 134.0) && localDW->Reset_Board) {
            /* DataStoreWrite: '<S684>/Data Store Write' */
            localDW->Reset_Board = localC->Cast_o;

            /* DataStoreWrite: '<S684>/Data Store Write1' */
            *rtd_New_Msg_Ready_CAN1 = localC->Cast_o;

            /* DataStoreWrite: '<S684>/Data Store Write10' */
            *rtd_New_Msg_Ready_CAN2 = localC->Cast_o;

            /* DataStoreWrite: '<S684>/Data Store Write11' */
            localDW->Desync_Positive = localC->Cast_o;

            /* DataStoreWrite: '<S684>/Data Store Write12' */
            localDW->BC1_Sync_processed = localC->Cast_o;

            /* DataStoreWrite: '<S684>/Data Store Write2' */
            localDW->Initialization_flag = localC->NOT;

            /* DataStoreWrite: '<S684>/Data Store Write4' incorporates:
             *  Constant: '<S684>/Constant'
             */
            localDW->Role_ID = 0.0;

            /* DataStoreWrite: '<S684>/Data Store Write5' incorporates:
             *  Constant: '<S684>/Constant'
             */
            *rtd_Master_ID = 0.0;

            /* DataStoreWrite: '<S684>/Data Store Write6' */
            *rtd_Rx_State_CAN1 = localC->Cast6;

            /* DataStoreWrite: '<S684>/Data Store Write9' */
            *rtd_Rx_State_CAN2 = localC->Cast6;

            /* DataStoreWrite: '<S684>/Data Store Write3' incorporates:
             *  Constant: '<S684>/Constant1'
             */
            *rtd_RxID_CAN1 = 1U;

            /* DataStoreWrite: '<S684>/Data Store Write8' incorporates:
             *  Constant: '<S684>/Constant1'
             */
            *rtd_RxID_CAN2 = 1U;

            /* DataStoreWrite: '<S684>/Data Store Write7' incorporates:
             *  Constant: '<S684>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S633>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S570>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S570>/COMP Task - Reset Variables BC1' incorporates:
         *  EnablePort: '<S634>/Enable'
         */
        if ((*rtd_Local_Ticks >= 200.0) && (*rtd_Local_Ticks < localC->Sum18)) {
          /* RelationalOperator: '<S634>/Equal2' */
          rtb_Equal2_d = (*rtd_Local_Ticks == 200.0);

          /* Outputs for Enabled SubSystem: '<S634>/Reset Variables' */
          ResetVariables(rtb_Equal2_d, &localDW->BC1_Sync_processed,
                         &localDW->Desync_Positive, rtd_Toggle_Pin_A0);

          /* End of Outputs for SubSystem: '<S634>/Reset Variables' */
        }

        /* End of Outputs for SubSystem: '<S570>/COMP Task - Reset Variables BC1' */

        /* Outputs for Enabled SubSystem: '<S570>/COMP Task - Rx_Set_Values_Check' incorporates:
         *  EnablePort: '<S635>/Enable'
         */
        if ((*rtd_Local_Ticks >= 88.0) && (*rtd_Local_Ticks < localC->Sum6)) {
          /* Logic: '<S635>/AND1' incorporates:
           *  Constant: '<S635>/Constant57'
           *  RelationalOperator: '<S635>/Equal'
           *  RelationalOperator: '<S635>/Equal13'
           */
          rtb_AND1_ke = ((*rtd_Local_Ticks == 88.0) && (*rtd_Board_ID == 5.0));

          /* Outputs for Enabled SubSystem: '<S635>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ke, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S635>/Reset Tx msg counter' */
        }

        /* End of Outputs for SubSystem: '<S570>/COMP Task - Rx_Set_Values_Check' */

        /* Logic: '<S570>/NOT2' incorporates:
         *  Constant: '<S570>/Constant12'
         *  Constant: '<S570>/Constant16'
         *  Constant: '<S570>/Constant7'
         *  Constant: '<S570>/Constant8'
         *  DataStoreRead: '<S570>/Data Store Read6'
         *  DataStoreRead: '<S633>/Data Store Read'
         *  Logic: '<S570>/AND20'
         *  Logic: '<S570>/AND4'
         *  Logic: '<S570>/AND5'
         *  Logic: '<S570>/NOT5'
         *  Logic: '<S633>/AND'
         *  RelationalOperator: '<S570>/GreaterThan10'
         *  RelationalOperator: '<S570>/GreaterThan11'
         *  RelationalOperator: '<S570>/GreaterThan34'
         *  RelationalOperator: '<S570>/GreaterThan35'
         *  RelationalOperator: '<S570>/GreaterThan8'
         *  RelationalOperator: '<S570>/GreaterThan9'
         *  RelationalOperator: '<S633>/Equal1'
         *  RelationalOperator: '<S633>/Equal2'
         */
        rtb_AND2_n = !localDW->BC1_Sync_processed;

        /* Outputs for Enabled SubSystem: '<S570>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S636>/Enable'
         */
        if ((*rtd_Local_Ticks >= 40.0) && (*rtd_Local_Ticks < localC->Sum1) &&
            rtb_AND2_n) {
          if (!localDW->COMPTaskSyncbc1check_MODE) {
            localDW->COMPTaskSyncbc1check_MODE = true;
          }

          /* DataStoreRead: '<S636>/Data Store Read1' */
          rtb_DataStoreRead1_ab = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S636>/Data Store Read2' */
          rtb_DataStoreRead2_ph = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S636>/Data Store Read' */
          rtb_DataStoreRead_hs = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S636>/Data Store Read3' */
          rtb_DataStoreRead3 = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S636>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 40.0);

          /* RelationalOperator: '<S636>/Equal5' incorporates:
           *  Constant: '<S636>/Constant26'
           *  DataStoreRead: '<S636>/Data Store Read6'
           */
          rtb_AND1_e = (localDW->Role_ID != 1.0);

          /* Outputs for Enabled SubSystem: '<S636>/Process_Messages' incorporates:
           *  EnablePort: '<S687>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_e) {
            if (!localDW->Process_Messages_MODE) {
              localDW->Process_Messages_MODE = true;
            }

            /* Outputs for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_d(rtb_DataStoreRead1_ab,
              &rtb_DataStoreRead_hs, 1.0,
              &localB->DemuxmessageCAN1andcheckcoher_o,
              &localDW->DemuxmessageCAN1andcheckcoher_o,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S687>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_h(rtb_DataStoreRead2_ph,
              &rtb_DataStoreRead3, 1.0, &localB->DemuxmessageCAN1andcheckcohe_kb,
              &localDW->DemuxmessageCAN1andcheckcohe_kb,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S687>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S687>/Switch' incorporates:
             *  Constant: '<S636>/Constant'
             *  DataStoreWrite: '<S687>/Data Store Write'
             */
            if (localB->DemuxmessageCAN1andcheckcoher_o.Equal1) {
              Msg_Rx.Buffer_1 = localB->DemuxmessageCAN1andcheckcoher_o.Constant;
              Msg_Rx.Buffer_2 = localB->DemuxmessageCAN1andcheckcoher_o.Buffer_2;
              Msg_Rx.Buffer_3 = localB->DemuxmessageCAN1andcheckcoher_o.Buffer_3;
              Msg_Rx.Buffer_4 = localB->DemuxmessageCAN1andcheckcoher_o.Buffer_4;
              Msg_Rx.Buffer_5 = localB->DemuxmessageCAN1andcheckcoher_o.Buffer_5;
              Msg_Rx.Buffer_6 = localB->DemuxmessageCAN1andcheckcoher_o.Buffer_6;
              Msg_Rx.Buffer_7 = localB->DemuxmessageCAN1andcheckcoher_o.Buffer_7;
              Msg_Rx.Buffer_8 = localB->DemuxmessageCAN1andcheckcoher_o.Buffer_8;
            } else {
              Msg_Rx.Buffer_1 = localB->DemuxmessageCAN1andcheckcohe_kb.Constant;
              Msg_Rx.Buffer_2 = localB->DemuxmessageCAN1andcheckcohe_kb.Buffer_2;
              Msg_Rx.Buffer_3 = localB->DemuxmessageCAN1andcheckcohe_kb.Buffer_3;
              Msg_Rx.Buffer_4 = localB->DemuxmessageCAN1andcheckcohe_kb.Buffer_4;
              Msg_Rx.Buffer_5 = localB->DemuxmessageCAN1andcheckcohe_kb.Buffer_5;
              Msg_Rx.Buffer_6 = localB->DemuxmessageCAN1andcheckcohe_kb.Buffer_6;
              Msg_Rx.Buffer_7 = localB->DemuxmessageCAN1andcheckcohe_kb.Buffer_7;
              Msg_Rx.Buffer_8 = localB->DemuxmessageCAN1andcheckcohe_kb.Buffer_8;
            }

            /* End of Switch: '<S687>/Switch' */

            /* Logic: '<S687>/OR' incorporates:
             *  DataStoreWrite: '<S687>/Data Store Write2'
             */
            localDW->new_msg_Rx =
              (localB->DemuxmessageCAN1andcheckcoher_o.Equal1 ||
               localB->DemuxmessageCAN1andcheckcohe_kb.Equal1);

            /* Outputs for Enabled SubSystem: '<S687>/Desync calculation' incorporates:
             *  EnablePort: '<S691>/Enable'
             */
            if (localDW->new_msg_Rx) {
              /* Switch: '<S691>/Switch1' incorporates:
               *  Constant: '<S570>/Constant'
               *  Constant: '<S691>/Constant'
               *  Constant: '<S691>/Constant1'
               *  Constant: '<S691>/delay_estimation_1'
               *  Constant: '<S691>/delay_estimation_2'
               *  Product: '<S691>/Multiply'
               *  Product: '<S691>/Multiply1'
               *  Sum: '<S691>/Minus'
               *  Sum: '<S691>/Minus1'
               *  Sum: '<S691>/Sum'
               *  Sum: '<S691>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_o.Equal1) {
                rtb_Switch1_f = ((COMM_Phase1 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_o.BitShift1_b.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_Switch1_f = ((COMM_Phase2 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcohe_kb.BitShift1_d.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S691>/Switch1' */

              /* Saturate: '<S691>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc1_ing_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc1_ing_s = (-15.0);
              } else {
                Desync_Sync_bc1_ing_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S691>/Saturation' */

              /* DataStoreWrite: '<S691>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_ing_s;
            }

            /* End of Outputs for SubSystem: '<S687>/Desync calculation' */

            /* DataStoreWrite: '<S687>/Data Store Write3' incorporates:
             *  Constant: '<S687>/Constant2'
             *  DataStoreWrite: '<S687>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_kb.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_kb,
                   &localDW->DemuxmessageCAN1andcheckcohe_kb);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S636>/Process_Messages' */

          /* Logic: '<S636>/AND1' incorporates:
           *  Constant: '<S636>/Constant'
           *  DataStoreWrite: '<S687>/Data Store Write2'
           *  Logic: '<S636>/AND'
           *  Logic: '<S636>/NOT'
           */
          rtb_AND1_ly = (rtb_AND_ck && (!rtb_AND1_e));

          /* Outputs for Enabled SubSystem: '<S636>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ly, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S636>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S636>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_kb.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_kb,
                   &localDW->DemuxmessageCAN1andcheckcohe_kb);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S636>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S570>/COMP Task - Sync bc1 check' */

        /* Outputs for Enabled SubSystem: '<S570>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S637>/Enable'
         */
        if ((*rtd_Local_Ticks >= 44.0) && (*rtd_Local_Ticks < localC->Sum2) &&
            rtb_AND2_n) {
          /* RelationalOperator: '<S637>/Equal1' incorporates:
           *  Constant: '<S570>/Constant11'
           */
          rtb_AND_ck = (*rtd_Local_Ticks == 46.0);

          /* Outputs for Enabled SubSystem: '<S637>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S716>/Enable'
           */
          if ((*rtd_Local_Ticks == 44.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S716>/Data Store Write1' incorporates:
             *  Constant: '<S716>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S637>/LA - Ensemble precision' */

          /* Logic: '<S637>/AND2' incorporates:
           *  Constant: '<S637>/Constant1'
           *  DataStoreRead: '<S637>/Data Store Read1'
           *  Logic: '<S637>/AND4'
           *  RelationalOperator: '<S637>/Equal3'
           */
          rtb_AND2_o = (rtb_AND_ck && localDW->new_msg_Rx);

          /* Outputs for Enabled SubSystem: '<S637>/Local Time Update' */
          LocalTimeUpdate(rtb_AND2_o, 44.0, &localDW->BC1_Sync_processed,
                          &localDW->Desync_Positive, &localDW->Desync_Ticks,
                          rtd_Local_Ticks, rtd_Toggle_Pin_A0,
                          &localDW->Toggle_Pin_D10);

          /* End of Outputs for SubSystem: '<S637>/Local Time Update' */

          /* Outputs for Enabled SubSystem: '<S637>/Set Reset Board' incorporates:
           *  EnablePort: '<S718>/Enable'
           */
          if (rtb_AND_ck && (!localDW->new_msg_Rx)) {
            /* DataStoreWrite: '<S718>/Data Store Write' incorporates:
             *  Constant: '<S718>/Constant'
             */
            localDW->Reset_Board = true;
          }

          /* End of Outputs for SubSystem: '<S637>/Set Reset Board' */
        }

        /* End of Outputs for SubSystem: '<S570>/COMP Task - Update LT' */

        /* Logic: '<S570>/AND17' incorporates:
         *  Constant: '<S570>/Constant'
         *  Constant: '<S570>/Constant4'
         *  Constant: '<S570>/Constant6'
         *  Constant: '<S636>/Constant'
         *  Constant: '<S637>/Constant1'
         *  DataStoreRead: '<S570>/Data Store Read11'
         *  DataStoreRead: '<S637>/Data Store Read1'
         *  DataStoreWrite: '<S687>/Data Store Write2'
         *  Logic: '<S570>/AND'
         *  Logic: '<S570>/AND1'
         *  Logic: '<S570>/AND18'
         *  Logic: '<S570>/AND19'
         *  Logic: '<S570>/AND2'
         *  Logic: '<S570>/NOT2'
         *  Logic: '<S570>/NOT4'
         *  Logic: '<S636>/AND'
         *  Logic: '<S637>/AND3'
         *  Logic: '<S637>/AND4'
         *  Logic: '<S637>/NOT1'
         *  RelationalOperator: '<S570>/GreaterThan'
         *  RelationalOperator: '<S570>/GreaterThan1'
         *  RelationalOperator: '<S570>/GreaterThan2'
         *  RelationalOperator: '<S570>/GreaterThan3'
         *  RelationalOperator: '<S570>/GreaterThan4'
         *  RelationalOperator: '<S570>/GreaterThan5'
         *  RelationalOperator: '<S637>/Equal3'
         */
        rtb_AND17 = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4) && (!localDW->BC1_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S570>/COMM Task - Set_Values' incorporates:
         *  EnablePort: '<S631>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 48.0) && (rtb_DataStoreRead8_c <
             localC->Sum3)) {
          if (!localDW->COMMTaskSet_Values_MODE) {
            localDW->COMMTaskSet_Values_MODE = true;
          }

          /* RelationalOperator: '<S631>/Equal12' incorporates:
           *  Constant: '<S631>/Constant55'
           */
          rtb_AND_ck = (*rtd_Board_ID == 5.0);

          /* Logic: '<S631>/NOT' */
          rtb_NOT_l = !rtb_AND_ck;

          /* Outputs for Enabled SubSystem: '<S631>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_l, 48.0, &localB->Receptionsubstasks_n,
                             &localC->Receptionsubstasks_n,
                             &localDW->Receptionsubstasks_n, rtd_Local_Ticks,
                             &Msg_Rx, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx);

          /* End of Outputs for SubSystem: '<S631>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S631>/Transmission subtasks' incorporates:
           *  EnablePort: '<S639>/Enable'
           */
          if (rtb_AND_ck) {
            if (!localDW->Transmissionsubtasks_MODE) {
              localDW->Transmissionsubtasks_MODE = true;
            }

            /* DataStoreRead: '<S639>/Data Store Read' */
            rtb_DataStoreRead_i = *rtd_Local_Ticks;

            /* RelationalOperator: '<S639>/Equal2' */
            rtb_AND_ck = (rtb_DataStoreRead_i > 48.0);

            /* Logic: '<S639>/AND' incorporates:
             *  Constant: '<S639>/Constant6'
             *  RelationalOperator: '<S639>/GreaterThan2'
             */
            rtb_AND_ex = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S639>/AND1' incorporates:
             *  Constant: '<S639>/Constant7'
             *  RelationalOperator: '<S639>/GreaterThan3'
             */
            rtb_AND1_ai = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S639>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S643>/Enable'
             */
            if (rtb_DataStoreRead_i == 48.0) {
              localB->Constant = ((uint8_T)0U);
              v_set_s = v_set;

              /* Switch: '<S656>/Switch2' incorporates:
               *  Constant: '<S643>/Constant'
               *  Constant: '<S643>/Constant11'
               *  Constant: '<S643>/Constant12'
               *  Constant: '<S643>/Constant6'
               *  Constant: '<S643>/Constant7'
               *  RelationalOperator: '<S656>/LessThanOrEqual1'
               *  RelationalOperator: '<S656>/LessThanOrEqual2'
               *  Switch: '<S656>/Switch1'
               */
              if (1.0 < delta_a_set) {
                /* Switch: '<S656>/Switch' */
                rtb_Switch1_f = 1.0;
              } else if (delta_a_set >= (-1.0)) {
                /* Switch: '<S656>/Switch1' */
                rtb_Switch1_f = delta_a_set;
              } else {
                rtb_Switch1_f = (-1.0);
              }

              /* End of Switch: '<S656>/Switch2' */

              /* RelationalOperator: '<S656>/GreaterThan' incorporates:
               *  Constant: '<S656>/Constant'
               */
              rtb_AND_ck = (rtb_Switch1_f < 0.0);

              /* Abs: '<S656>/Abs' */
              rtb_Switch1_f = fabs(rtb_Switch1_f);

              /* Rounding: '<S656>/Fix' */
              rtb_Plus_j = floor(rtb_Switch1_f);

              /* Sum: '<S656>/Minus' */
              rtb_Switch1_f -= rtb_Plus_j;

              /* DataTypeConversion: '<S656>/Cast' */
              rtb_Cast_k = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S656>/Bit Shift' */
              BitShift1(rtb_Cast_k, &localB->BitShift_ad);

              /* End of Outputs for SubSystem: '<S656>/Bit Shift' */

              /* Product: '<S656>/Multiply' */
              rtb_Plus_j *= localC->Power1;

              /* Product: '<S656>/Divide' */
              rtb_Plus1_b = rtb_Switch1_f / localC->Power;

              /* Rounding: '<S656>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S656>/Fix1' */

              /* Sum: '<S656>/Plus' incorporates:
               *  DataTypeConversion: '<S656>/Cast1'
               *  DataTypeConversion: '<S656>/Cast2'
               */
              localB->Plus = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_ad.y + (uint8_T)rtb_Plus_j) + (uint8_T)
                rtb_Plus1_b);

              /* Switch: '<S657>/Switch2' incorporates:
               *  Constant: '<S643>/Constant8'
               *  Constant: '<S643>/Constant9'
               *  RelationalOperator: '<S657>/LessThanOrEqual1'
               *  RelationalOperator: '<S657>/LessThanOrEqual2'
               *  Switch: '<S657>/Switch1'
               */
              if (10.0 < v_set_s) {
                /* Switch: '<S657>/Switch' */
                rtb_Plus_j = 10.0;
              } else if (v_set_s >= (-10.0)) {
                /* Switch: '<S657>/Switch1' */
                rtb_Plus_j = v_set_s;
              } else {
                rtb_Plus_j = (-10.0);
              }

              /* End of Switch: '<S657>/Switch2' */

              /* RelationalOperator: '<S657>/GreaterThan' incorporates:
               *  Constant: '<S657>/Constant'
               */
              rtb_AND_ck = (rtb_Plus_j < 0.0);

              /* Abs: '<S657>/Abs' */
              rtb_Plus_j = fabs(rtb_Plus_j);

              /* Rounding: '<S657>/Fix' */
              rtb_Switch1_f = floor(rtb_Plus_j);

              /* Sum: '<S657>/Minus' */
              rtb_Plus_j -= rtb_Switch1_f;

              /* DataTypeConversion: '<S657>/Cast' */
              rtb_Cast_p = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S657>/Bit Shift' */
              BitShift1(rtb_Cast_p, &localB->BitShift_n);

              /* End of Outputs for SubSystem: '<S657>/Bit Shift' */

              /* Product: '<S657>/Multiply' */
              rtb_Switch1_f *= localC->Power1_f;

              /* Product: '<S657>/Divide' */
              rtb_Plus1_b = rtb_Plus_j / localC->Power_c;

              /* Rounding: '<S657>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S657>/Fix1' */

              /* Sum: '<S657>/Plus' incorporates:
               *  DataTypeConversion: '<S657>/Cast1'
               *  DataTypeConversion: '<S657>/Cast2'
               */
              localB->Plus_b = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_n.y + (uint8_T)rtb_Switch1_f) + (uint8_T)
                rtb_Plus1_b);

              /* Switch: '<S658>/Switch2' incorporates:
               *  Constant: '<S643>/Constant10'
               *  Constant: '<S643>/Constant4'
               *  Constant: '<S643>/Constant5'
               *  RelationalOperator: '<S658>/LessThanOrEqual1'
               *  RelationalOperator: '<S658>/LessThanOrEqual2'
               *  Switch: '<S658>/Switch1'
               */
              if (1.0 < delta_f_set) {
                /* Switch: '<S658>/Switch' */
                rtb_Plus_j = 1.0;
              } else if (delta_f_set >= (-1.0)) {
                /* Switch: '<S658>/Switch1' */
                rtb_Plus_j = delta_f_set;
              } else {
                rtb_Plus_j = (-1.0);
              }

              /* End of Switch: '<S658>/Switch2' */

              /* RelationalOperator: '<S658>/GreaterThan' incorporates:
               *  Constant: '<S658>/Constant'
               */
              rtb_AND_ck = (rtb_Plus_j < 0.0);

              /* Abs: '<S658>/Abs' */
              rtb_Plus_j = fabs(rtb_Plus_j);

              /* Rounding: '<S658>/Fix' */
              rtb_Switch1_f = floor(rtb_Plus_j);

              /* Sum: '<S658>/Minus' */
              rtb_Plus_j -= rtb_Switch1_f;

              /* DataTypeConversion: '<S658>/Cast' */
              rtb_Cast_kq = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S658>/Bit Shift' */
              BitShift1(rtb_Cast_kq, &localB->BitShift_c);

              /* End of Outputs for SubSystem: '<S658>/Bit Shift' */

              /* Product: '<S658>/Multiply' */
              rtb_Switch1_f *= localC->Power1_l;

              /* Product: '<S658>/Divide' */
              rtb_Plus1_b = rtb_Plus_j / localC->Power_j;

              /* Rounding: '<S658>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S658>/Fix1' */

              /* Sum: '<S658>/Plus' incorporates:
               *  DataTypeConversion: '<S658>/Cast1'
               *  DataTypeConversion: '<S658>/Cast2'
               */
              localB->Plus_c = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_c.y + (uint8_T)rtb_Switch1_f) + (uint8_T)
                rtb_Plus1_b);
            }

            /* End of Outputs for SubSystem: '<S639>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S639>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_ex, rtb_DataStoreRead_i, 48.0,
              localB->Plus_c, localB->Plus, localB->Plus_b, localB->Constant,
              &localB->CheckmsgtransmissionCAN1_a,
              &localC->CheckmsgtransmissionCAN1_a,
              &localDW->CheckmsgtransmissionCAN1_a, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S639>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S639>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_ai, rtb_DataStoreRead_i, 48.0,
              localB->Plus_c, localB->Plus, localB->Plus_b, localB->Constant,
              &localB->CheckmsgtransmissionCAN2_c,
              &localC->CheckmsgtransmissionCAN2_c,
              &localDW->CheckmsgtransmissionCAN2_c, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S639>/Check msg transmission CAN2' */
          } else {
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S639>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S639>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S631>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskSet_Values_MODE) {
            /* Disable for Enabled SubSystem: '<S631>/Reception substasks' */
            if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
                &localDW->Receptionsubstasks_n);
            }

            /* End of Disable for SubSystem: '<S631>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S631>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S639>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S639>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }

            /* End of Disable for SubSystem: '<S631>/Transmission subtasks' */

            /* Disable for Outport: '<S631>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S631>/Receive CAN1' */
            localB->Receptionsubstasks_n.AND = false;

            /* Disable for Outport: '<S631>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

            /* Disable for Outport: '<S631>/Receive CAN2' */
            localB->Receptionsubstasks_n.AND1 = false;
            localDW->COMMTaskSet_Values_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S570>/COMM Task - Set_Values' */

        /* Outputs for Enabled SubSystem: '<S570>/COMM Task - Sync bc 1' */
        COMMTaskSyncbc0(rtb_AND17, 0.0, &localB->COMMTaskSyncbc1_d,
                        &localC->COMMTaskSyncbc1_d, &localDW->COMMTaskSyncbc1_d,
                        rtd_Board_ID, rtd_Local_Ticks, &Msg_Rx, rtd_Msg_Tx_CAN1,
                        rtd_Msg_Tx_CAN2, rtd_New_Msg_Ready_CAN1,
                        rtd_New_Msg_Ready_CAN2, &localDW->Role_ID, rtd_RxID_CAN1,
                        rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                        rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx);

        /* End of Outputs for SubSystem: '<S570>/COMM Task - Sync bc 1' */

        /* Logic: '<S570>/OR1' incorporates:
         *  Constant: '<S570>/Constant'
         *  Constant: '<S570>/Constant5'
         *  Constant: '<S643>/Constant'
         *  Constant: '<S643>/Constant12'
         *  Logic: '<S570>/AND3'
         *  RelationalOperator: '<S570>/GreaterThan6'
         *  RelationalOperator: '<S570>/GreaterThan7'
         *  RelationalOperator: '<S639>/Equal16'
         */
        localB->OR1 = (localB->COMMTaskSyncbc1_d.Transmissionsubtasks_l.Equal7_a
                       || localB->CheckmsgtransmissionCAN1_a.Equal7);

        /* Logic: '<S570>/OR2' */
        localB->OR2 = (localB->COMMTaskSyncbc1_d.Receptionsubstasks_h.AND1 ||
                       localB->Receptionsubstasks_n.AND1);

        /* Logic: '<S570>/OR3' */
        localB->OR3 = (localB->COMMTaskSyncbc1_d.Receptionsubstasks_h.AND ||
                       localB->Receptionsubstasks_n.AND);

        /* Logic: '<S570>/OR4' */
        localB->OR4 = (localB->COMMTaskSyncbc1_d.Transmissionsubtasks_l.Equal7 ||
                       localB->CheckmsgtransmissionCAN2_c.Equal7);
      } else {
        if (localDW->inputgeneratorbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S570>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S636>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_kb.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_kb,
                   &localDW->DemuxmessageCAN1andcheckcohe_kb);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S636>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S570>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S570>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE) {
            /* Disable for Enabled SubSystem: '<S631>/Reception substasks' */
            if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
                &localDW->Receptionsubstasks_n);
            }

            /* End of Disable for SubSystem: '<S631>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S631>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S639>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S639>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }

            /* End of Disable for SubSystem: '<S631>/Transmission subtasks' */

            /* Disable for Outport: '<S631>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S631>/Receive CAN1' */
            localB->Receptionsubstasks_n.AND = false;

            /* Disable for Outport: '<S631>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

            /* Disable for Outport: '<S631>/Receive CAN2' */
            localB->Receptionsubstasks_n.AND1 = false;
            localDW->COMMTaskSet_Values_MODE = false;
          }

          /* End of Disable for SubSystem: '<S570>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S570>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1_d,
              &localDW->COMMTaskSyncbc1_d);
          }

          /* End of Disable for SubSystem: '<S570>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S570>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S570>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S570>/Receive_Message_CAN1' */
          localB->OR3 = false;

          /* Disable for Outport: '<S570>/Receive_Message_CAN2' */
          localB->OR2 = false;
          localDW->inputgeneratorbasiccycle1_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S160>/input generator basic cycle 1' */

      /* Switch: '<S160>/Switch' incorporates:
       *  Constant: '<S160>/Constant1'
       *  Constant: '<S569>/Constant'
       *  Constant: '<S569>/Constant17'
       *  Constant: '<S569>/Constant2'
       *  Constant: '<S569>/Constant25'
       *  Constant: '<S569>/Constant31'
       *  Constant: '<S569>/Constant4'
       *  Constant: '<S570>/Constant'
       *  Constant: '<S570>/Constant12'
       *  Constant: '<S570>/Constant16'
       *  Constant: '<S570>/Constant4'
       *  Constant: '<S570>/Constant5'
       *  Constant: '<S570>/Constant6'
       *  Constant: '<S570>/Constant7'
       *  Constant: '<S570>/Constant8'
       *  Constant: '<S575>/Constant'
       *  Constant: '<S576>/Constant1'
       *  Constant: '<S636>/Constant'
       *  Constant: '<S637>/Constant1'
       *  Constant: '<S643>/Constant'
       *  Constant: '<S643>/Constant12'
       *  DataStoreRead: '<S576>/Data Store Read'
       *  DataStoreRead: '<S633>/Data Store Read'
       *  DataStoreRead: '<S637>/Data Store Read1'
       *  DataStoreWrite: '<S598>/Data Store Write2'
       *  DataStoreWrite: '<S687>/Data Store Write2'
       *  Logic: '<S569>/AND1'
       *  Logic: '<S569>/AND15'
       *  Logic: '<S569>/AND16'
       *  Logic: '<S569>/AND18'
       *  Logic: '<S569>/AND19'
       *  Logic: '<S569>/AND2'
       *  Logic: '<S569>/NOT1'
       *  Logic: '<S570>/AND1'
       *  Logic: '<S570>/AND18'
       *  Logic: '<S570>/AND19'
       *  Logic: '<S570>/AND2'
       *  Logic: '<S570>/AND20'
       *  Logic: '<S570>/AND3'
       *  Logic: '<S570>/AND4'
       *  Logic: '<S570>/AND5'
       *  Logic: '<S570>/NOT2'
       *  Logic: '<S573>/AND'
       *  Logic: '<S575>/AND'
       *  Logic: '<S576>/AND'
       *  Logic: '<S576>/AND1'
       *  Logic: '<S576>/AND2'
       *  Logic: '<S576>/NOT'
       *  Logic: '<S633>/AND'
       *  Logic: '<S636>/AND'
       *  Logic: '<S637>/AND3'
       *  Logic: '<S637>/AND4'
       *  Logic: '<S637>/NOT1'
       *  RelationalOperator: '<S160>/Equal1'
       *  RelationalOperator: '<S569>/GreaterThan2'
       *  RelationalOperator: '<S569>/GreaterThan3'
       *  RelationalOperator: '<S569>/GreaterThan30'
       *  RelationalOperator: '<S569>/GreaterThan31'
       *  RelationalOperator: '<S569>/GreaterThan32'
       *  RelationalOperator: '<S569>/GreaterThan33'
       *  RelationalOperator: '<S569>/GreaterThan4'
       *  RelationalOperator: '<S569>/GreaterThan5'
       *  RelationalOperator: '<S570>/GreaterThan10'
       *  RelationalOperator: '<S570>/GreaterThan11'
       *  RelationalOperator: '<S570>/GreaterThan2'
       *  RelationalOperator: '<S570>/GreaterThan3'
       *  RelationalOperator: '<S570>/GreaterThan34'
       *  RelationalOperator: '<S570>/GreaterThan35'
       *  RelationalOperator: '<S570>/GreaterThan4'
       *  RelationalOperator: '<S570>/GreaterThan5'
       *  RelationalOperator: '<S570>/GreaterThan6'
       *  RelationalOperator: '<S570>/GreaterThan7'
       *  RelationalOperator: '<S570>/GreaterThan8'
       *  RelationalOperator: '<S570>/GreaterThan9'
       *  RelationalOperator: '<S573>/Equal1'
       *  RelationalOperator: '<S573>/Equal2'
       *  RelationalOperator: '<S574>/Equal2'
       *  RelationalOperator: '<S576>/Equal3'
       *  RelationalOperator: '<S633>/Equal1'
       *  RelationalOperator: '<S633>/Equal2'
       *  RelationalOperator: '<S637>/Equal3'
       *  RelationalOperator: '<S639>/Equal16'
       */
      if (rtb_Equal_kj) {
        localB->signal1 =
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a;
        localB->signal2 =
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7;
        localB->signal3 = localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND;
        localB->signal4 = localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1;
      } else {
        localB->signal1 = localB->OR1;
        localB->signal2 = localB->OR4;
        localB->signal3 = localB->OR3;
        localB->signal4 = localB->OR2;
      }

      /* End of Switch: '<S160>/Switch' */

      /* DataStoreRead: '<S568>/Data Store Read' */
      Master_ID_ing_s = *rtd_Master_ID;

      /* DataStoreRead: '<S568>/Data Store Read1' */
      Role_ID_ing_s = localDW->Role_ID;

      /* DataStoreRead: '<S568>/Data Store Read10' */
      BC1_sync_processed_ing_s = localDW->BC1_Sync_processed;

      /* DataStoreRead: '<S568>/Data Store Read2' */
      BC0_sync_processed_ing_s = localDW->BC0_Sync_processed;

      /* DataStoreRead: '<S568>/Data Store Read3' */
      sync_bc1_miss_counter_ing = localDW->Sync_bc1_missed_counter;

      /* DataStoreRead: '<S568>/Data Store Read4' */
      sync_bc0_miss_counter_ing = localDW->Sync_bc0_missed_counter;

      /* DataStoreRead: '<S571>/Data Store Read24' */
      msg_count_DEBUG_ing_s = localDW->msg_count_DEBUG;
    } else {
      if (localDW->InputGeneratorMatrixCycle_MODE) {
        /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 0' */
        if (localDW->inputgeneratorbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S569>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S575>/Process_Messages' */
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }

            /* End of Disable for SubSystem: '<S575>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S569>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S569>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_e.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_e,
              &localDW->COMMTaskSyncbc0_e);
          }

          /* End of Disable for SubSystem: '<S569>/COMM Task - Sync bc 0' */

          /* Disable for Outport: '<S569>/Send_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S569>/Send_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S569>/Receive_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S569>/Receive_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1 = false;
          localDW->inputgeneratorbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S160>/input generator basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 1' */
        if (localDW->inputgeneratorbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S570>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S636>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_kb.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_kb,
                   &localDW->DemuxmessageCAN1andcheckcohe_kb);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S636>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S570>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S570>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE) {
            /* Disable for Enabled SubSystem: '<S631>/Reception substasks' */
            if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
                &localDW->Receptionsubstasks_n);
            }

            /* End of Disable for SubSystem: '<S631>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S631>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S639>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S639>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }

            /* End of Disable for SubSystem: '<S631>/Transmission subtasks' */

            /* Disable for Outport: '<S631>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S631>/Receive CAN1' */
            localB->Receptionsubstasks_n.AND = false;

            /* Disable for Outport: '<S631>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

            /* Disable for Outport: '<S631>/Receive CAN2' */
            localB->Receptionsubstasks_n.AND1 = false;
            localDW->COMMTaskSet_Values_MODE = false;
          }

          /* End of Disable for SubSystem: '<S570>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S570>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1_d,
              &localDW->COMMTaskSyncbc1_d);
          }

          /* End of Disable for SubSystem: '<S570>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S570>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S570>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S570>/Receive_Message_CAN1' */
          localB->OR3 = false;

          /* Disable for Outport: '<S570>/Receive_Message_CAN2' */
          localB->OR2 = false;
          localDW->inputgeneratorbasiccycle1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S160>/input generator basic cycle 1' */

        /* Disable for Outport: '<S160>/Send_CAN1' */
        localB->signal1 = false;

        /* Disable for Outport: '<S160>/Send_CAN2' */
        localB->signal2 = false;

        /* Disable for Outport: '<S160>/Receive_CAN1' */
        localB->signal3 = false;

        /* Disable for Outport: '<S160>/Receive_CAN2' */
        localB->signal4 = false;
        localDW->InputGeneratorMatrixCycle_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S132>/Input Generator Matrix Cycle' */

    /* Switch: '<S132>/Switch1' incorporates:
     *  Constant: '<S132>/Constant3'
     *  Constant: '<S159>/Constant1'
     *  Constant: '<S160>/Constant1'
     *  Constant: '<S162>/Constant'
     *  Constant: '<S162>/Constant12'
     *  Constant: '<S162>/Constant14'
     *  Constant: '<S162>/Constant17'
     *  Constant: '<S162>/Constant19'
     *  Constant: '<S162>/Constant2'
     *  Constant: '<S162>/Constant21'
     *  Constant: '<S162>/Constant23'
     *  Constant: '<S162>/Constant25'
     *  Constant: '<S162>/Constant27'
     *  Constant: '<S162>/Constant28'
     *  Constant: '<S162>/Constant3'
     *  Constant: '<S162>/Constant31'
     *  Constant: '<S162>/Constant33'
     *  Constant: '<S162>/Constant34'
     *  Constant: '<S162>/Constant6'
     *  Constant: '<S162>/Constant8'
     *  Constant: '<S162>/Constant9'
     *  Constant: '<S163>/Constant'
     *  Constant: '<S163>/Constant12'
     *  Constant: '<S163>/Constant13'
     *  Constant: '<S163>/Constant16'
     *  Constant: '<S163>/Constant19'
     *  Constant: '<S163>/Constant4'
     *  Constant: '<S163>/Constant5'
     *  Constant: '<S163>/Constant6'
     *  Constant: '<S163>/Constant7'
     *  Constant: '<S163>/Constant8'
     *  Constant: '<S173>/Constant'
     *  Constant: '<S174>/Constant1'
     *  Constant: '<S174>/Constant4'
     *  Constant: '<S176>/Constant4'
     *  Constant: '<S177>/Constant1'
     *  Constant: '<S178>/Constant4'
     *  Constant: '<S179>/Constant1'
     *  Constant: '<S180>/Constant4'
     *  Constant: '<S181>/Constant1'
     *  Constant: '<S390>/Constant51'
     *  Constant: '<S391>/Constant'
     *  Constant: '<S392>/Constant'
     *  Constant: '<S393>/Constant1'
     *  Constant: '<S399>/Constant'
     *  Constant: '<S440>/Constant6'
     *  Constant: '<S440>/Constant7'
     *  Constant: '<S442>/Constant22'
     *  Constant: '<S442>/Constant24'
     *  Constant: '<S442>/Constant8'
     *  Constant: '<S443>/Constant22'
     *  Constant: '<S443>/Constant24'
     *  Constant: '<S443>/Constant8'
     *  Constant: '<S444>/Constant'
     *  Constant: '<S444>/Constant2'
     *  Constant: '<S569>/Constant'
     *  Constant: '<S569>/Constant17'
     *  Constant: '<S569>/Constant2'
     *  Constant: '<S569>/Constant25'
     *  Constant: '<S569>/Constant31'
     *  Constant: '<S569>/Constant4'
     *  Constant: '<S570>/Constant'
     *  Constant: '<S570>/Constant12'
     *  Constant: '<S570>/Constant16'
     *  Constant: '<S570>/Constant4'
     *  Constant: '<S570>/Constant5'
     *  Constant: '<S570>/Constant6'
     *  Constant: '<S570>/Constant7'
     *  Constant: '<S570>/Constant8'
     *  Constant: '<S575>/Constant'
     *  Constant: '<S576>/Constant1'
     *  Constant: '<S636>/Constant'
     *  Constant: '<S637>/Constant1'
     *  Constant: '<S643>/Constant'
     *  Constant: '<S643>/Constant12'
     *  DataStoreRead: '<S132>/Data Store Read10'
     *  DataStoreRead: '<S163>/Data Store Read11'
     *  DataStoreRead: '<S163>/Data Store Read2'
     *  DataStoreRead: '<S163>/Data Store Read3'
     *  DataStoreRead: '<S163>/Data Store Read6'
     *  DataStoreRead: '<S163>/Data Store Read7'
     *  DataStoreRead: '<S174>/Data Store Read'
     *  DataStoreRead: '<S174>/Data Store Read1'
     *  DataStoreRead: '<S176>/Data Store Read5'
     *  DataStoreRead: '<S178>/Data Store Read5'
     *  DataStoreRead: '<S180>/Data Store Read5'
     *  DataStoreRead: '<S461>/Data Store Read6'
     *  DataStoreRead: '<S576>/Data Store Read'
     *  DataStoreRead: '<S633>/Data Store Read'
     *  DataStoreRead: '<S637>/Data Store Read1'
     *  DataStoreWrite: '<S263>/Data Store Write2'
     *  DataStoreWrite: '<S505>/Data Store Write2'
     *  DataStoreWrite: '<S598>/Data Store Write2'
     *  DataStoreWrite: '<S687>/Data Store Write2'
     *  Logic: '<S162>/AND1'
     *  Logic: '<S162>/AND10'
     *  Logic: '<S162>/AND11'
     *  Logic: '<S162>/AND12'
     *  Logic: '<S162>/AND13'
     *  Logic: '<S162>/AND14'
     *  Logic: '<S162>/AND15'
     *  Logic: '<S162>/AND16'
     *  Logic: '<S162>/AND18'
     *  Logic: '<S162>/AND19'
     *  Logic: '<S162>/AND2'
     *  Logic: '<S162>/AND3'
     *  Logic: '<S162>/AND4'
     *  Logic: '<S162>/AND5'
     *  Logic: '<S162>/AND6'
     *  Logic: '<S162>/AND7'
     *  Logic: '<S162>/AND8'
     *  Logic: '<S162>/AND9'
     *  Logic: '<S162>/NOT1'
     *  Logic: '<S163>/AND'
     *  Logic: '<S163>/AND1'
     *  Logic: '<S163>/AND17'
     *  Logic: '<S163>/AND18'
     *  Logic: '<S163>/AND19'
     *  Logic: '<S163>/AND2'
     *  Logic: '<S163>/AND20'
     *  Logic: '<S163>/AND3'
     *  Logic: '<S163>/AND4'
     *  Logic: '<S163>/AND5'
     *  Logic: '<S163>/AND6'
     *  Logic: '<S163>/AND7'
     *  Logic: '<S163>/AND8'
     *  Logic: '<S163>/NOT1'
     *  Logic: '<S163>/NOT2'
     *  Logic: '<S163>/NOT3'
     *  Logic: '<S163>/NOT4'
     *  Logic: '<S163>/NOT5'
     *  Logic: '<S171>/AND'
     *  Logic: '<S173>/AND'
     *  Logic: '<S174>/AND'
     *  Logic: '<S174>/AND1'
     *  Logic: '<S176>/AND'
     *  Logic: '<S178>/AND'
     *  Logic: '<S180>/AND'
     *  Logic: '<S390>/AND'
     *  Logic: '<S390>/AND2'
     *  Logic: '<S391>/AND'
     *  Logic: '<S392>/AND'
     *  Logic: '<S392>/AND4'
     *  Logic: '<S393>/AND1'
     *  Logic: '<S440>/AND'
     *  Logic: '<S440>/AND1'
     *  Logic: '<S569>/AND1'
     *  Logic: '<S569>/AND15'
     *  Logic: '<S569>/AND16'
     *  Logic: '<S569>/AND18'
     *  Logic: '<S569>/AND19'
     *  Logic: '<S569>/AND2'
     *  Logic: '<S569>/NOT1'
     *  Logic: '<S570>/AND1'
     *  Logic: '<S570>/AND18'
     *  Logic: '<S570>/AND19'
     *  Logic: '<S570>/AND2'
     *  Logic: '<S570>/AND20'
     *  Logic: '<S570>/AND3'
     *  Logic: '<S570>/AND4'
     *  Logic: '<S570>/AND5'
     *  Logic: '<S570>/NOT2'
     *  Logic: '<S573>/AND'
     *  Logic: '<S575>/AND'
     *  Logic: '<S576>/AND'
     *  Logic: '<S576>/AND1'
     *  Logic: '<S576>/AND2'
     *  Logic: '<S576>/NOT'
     *  Logic: '<S633>/AND'
     *  Logic: '<S636>/AND'
     *  Logic: '<S637>/AND3'
     *  Logic: '<S637>/AND4'
     *  Logic: '<S637>/NOT1'
     *  Math: '<S442>/Mod'
     *  Math: '<S443>/Mod'
     *  RelationalOperator: '<S132>/Equal3'
     *  RelationalOperator: '<S159>/Equal1'
     *  RelationalOperator: '<S160>/Equal1'
     *  RelationalOperator: '<S162>/GreaterThan10'
     *  RelationalOperator: '<S162>/GreaterThan11'
     *  RelationalOperator: '<S162>/GreaterThan12'
     *  RelationalOperator: '<S162>/GreaterThan13'
     *  RelationalOperator: '<S162>/GreaterThan14'
     *  RelationalOperator: '<S162>/GreaterThan15'
     *  RelationalOperator: '<S162>/GreaterThan16'
     *  RelationalOperator: '<S162>/GreaterThan17'
     *  RelationalOperator: '<S162>/GreaterThan18'
     *  RelationalOperator: '<S162>/GreaterThan19'
     *  RelationalOperator: '<S162>/GreaterThan2'
     *  RelationalOperator: '<S162>/GreaterThan20'
     *  RelationalOperator: '<S162>/GreaterThan21'
     *  RelationalOperator: '<S162>/GreaterThan22'
     *  RelationalOperator: '<S162>/GreaterThan23'
     *  RelationalOperator: '<S162>/GreaterThan24'
     *  RelationalOperator: '<S162>/GreaterThan25'
     *  RelationalOperator: '<S162>/GreaterThan26'
     *  RelationalOperator: '<S162>/GreaterThan27'
     *  RelationalOperator: '<S162>/GreaterThan28'
     *  RelationalOperator: '<S162>/GreaterThan29'
     *  RelationalOperator: '<S162>/GreaterThan3'
     *  RelationalOperator: '<S162>/GreaterThan30'
     *  RelationalOperator: '<S162>/GreaterThan31'
     *  RelationalOperator: '<S162>/GreaterThan32'
     *  RelationalOperator: '<S162>/GreaterThan33'
     *  RelationalOperator: '<S162>/GreaterThan4'
     *  RelationalOperator: '<S162>/GreaterThan5'
     *  RelationalOperator: '<S162>/GreaterThan6'
     *  RelationalOperator: '<S162>/GreaterThan7'
     *  RelationalOperator: '<S162>/GreaterThan8'
     *  RelationalOperator: '<S162>/GreaterThan9'
     *  RelationalOperator: '<S163>/GreaterThan'
     *  RelationalOperator: '<S163>/GreaterThan1'
     *  RelationalOperator: '<S163>/GreaterThan10'
     *  RelationalOperator: '<S163>/GreaterThan11'
     *  RelationalOperator: '<S163>/GreaterThan12'
     *  RelationalOperator: '<S163>/GreaterThan13'
     *  RelationalOperator: '<S163>/GreaterThan2'
     *  RelationalOperator: '<S163>/GreaterThan3'
     *  RelationalOperator: '<S163>/GreaterThan34'
     *  RelationalOperator: '<S163>/GreaterThan35'
     *  RelationalOperator: '<S163>/GreaterThan4'
     *  RelationalOperator: '<S163>/GreaterThan5'
     *  RelationalOperator: '<S163>/GreaterThan6'
     *  RelationalOperator: '<S163>/GreaterThan7'
     *  RelationalOperator: '<S163>/GreaterThan8'
     *  RelationalOperator: '<S163>/GreaterThan9'
     *  RelationalOperator: '<S169>/Equal'
     *  RelationalOperator: '<S170>/Equal'
     *  RelationalOperator: '<S171>/Equal2'
     *  RelationalOperator: '<S172>/Equal2'
     *  RelationalOperator: '<S174>/Equal'
     *  RelationalOperator: '<S174>/Equal1'
     *  RelationalOperator: '<S174>/Equal2'
     *  RelationalOperator: '<S175>/Equal'
     *  RelationalOperator: '<S176>/Equal'
     *  RelationalOperator: '<S176>/Equal2'
     *  RelationalOperator: '<S178>/Equal'
     *  RelationalOperator: '<S178>/Equal2'
     *  RelationalOperator: '<S180>/Equal'
     *  RelationalOperator: '<S180>/Equal2'
     *  RelationalOperator: '<S389>/Equal2'
     *  RelationalOperator: '<S390>/Equal1'
     *  RelationalOperator: '<S392>/Equal1'
     *  RelationalOperator: '<S393>/Equal3'
     *  RelationalOperator: '<S395>/Equal16'
     *  RelationalOperator: '<S440>/Equal16'
     *  RelationalOperator: '<S440>/GreaterThan2'
     *  RelationalOperator: '<S440>/GreaterThan3'
     *  RelationalOperator: '<S442>/Equal4'
     *  RelationalOperator: '<S443>/Equal4'
     *  RelationalOperator: '<S569>/GreaterThan2'
     *  RelationalOperator: '<S569>/GreaterThan3'
     *  RelationalOperator: '<S569>/GreaterThan30'
     *  RelationalOperator: '<S569>/GreaterThan31'
     *  RelationalOperator: '<S569>/GreaterThan32'
     *  RelationalOperator: '<S569>/GreaterThan33'
     *  RelationalOperator: '<S569>/GreaterThan4'
     *  RelationalOperator: '<S569>/GreaterThan5'
     *  RelationalOperator: '<S570>/GreaterThan10'
     *  RelationalOperator: '<S570>/GreaterThan11'
     *  RelationalOperator: '<S570>/GreaterThan2'
     *  RelationalOperator: '<S570>/GreaterThan3'
     *  RelationalOperator: '<S570>/GreaterThan34'
     *  RelationalOperator: '<S570>/GreaterThan35'
     *  RelationalOperator: '<S570>/GreaterThan4'
     *  RelationalOperator: '<S570>/GreaterThan5'
     *  RelationalOperator: '<S570>/GreaterThan6'
     *  RelationalOperator: '<S570>/GreaterThan7'
     *  RelationalOperator: '<S570>/GreaterThan8'
     *  RelationalOperator: '<S570>/GreaterThan9'
     *  RelationalOperator: '<S573>/Equal1'
     *  RelationalOperator: '<S573>/Equal2'
     *  RelationalOperator: '<S574>/Equal2'
     *  RelationalOperator: '<S576>/Equal3'
     *  RelationalOperator: '<S633>/Equal1'
     *  RelationalOperator: '<S633>/Equal2'
     *  RelationalOperator: '<S637>/Equal3'
     *  RelationalOperator: '<S639>/Equal16'
     *  Sum: '<S442>/Minus'
     *  Sum: '<S443>/Minus'
     */
    if (rtb_OR1_l) {
      localB->Switch1[0] = localB->signal1_n;
      localB->Switch1[1] = localB->signal2_j;
      localB->Switch1[2] = localB->signal3_k;
      localB->Switch1[3] = localB->signal4_e;
    } else {
      localB->Switch1[0] = localB->signal1;
      localB->Switch1[1] = localB->signal2;
      localB->Switch1[2] = localB->signal3;
      localB->Switch1[3] = localB->signal4;
    }

    /* End of Switch: '<S132>/Switch1' */
  } else {
    if (localDW->MatrixCycleManager_MODE) {
      /* Disable for Enabled SubSystem: '<S132>/Controller Matrix Cycle' */
      if (localDW->ControllerMatrixCycle_MODE) {
        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 0' */
        if (localDW->controllerbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S173>/Process_Messages' */
            if (localDW->Process_Messages_MODE_ek) {
              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S263>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_ek = false;
            }

            /* End of Disable for SubSystem: '<S173>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S177>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S177>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S179>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S179>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S181>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S181>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
              &localDW->COMMTaskSyncbc0_b);
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S166>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

            /* Disable for Outport: '<S166>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S166>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S166>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S166>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S162>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S168>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

            /* Disable for Outport: '<S168>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S168>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S168>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S168>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S162>/COMM Task - Vote3' */

          /* Disable for Outport: '<S162>/Send_Message_CAN1' */
          localB->OR1_oo = false;

          /* Disable for Outport: '<S162>/Send_Message_CAN2' */
          localB->OR4_o = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN1' */
          localB->OR2_p = false;

          /* Disable for Outport: '<S162>/Receive_Message_CAN2' */
          localB->OR3_bn = false;
          localDW->controllerbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */
          if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
            /* Disable for Enabled SubSystem: '<S390>/Process_Messages' */
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S459>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }

            /* End of Disable for SubSystem: '<S390>/Process_Messages' */
            localDW->COMPTaskRx_Set_Values_Check_MOD = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Rx_Set_Values_Check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S391>/Process_Messages' */
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S505>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }

            /* End of Disable for SubSystem: '<S391>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Test' */
          if (localDW->COMPTaskTest_MODE) {
            /* Disable for Enabled SubSystem: '<S392>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_et.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_et,
                   &localDW->DemuxmessageCAN1andcheckcohe_et);
              }

              /* End of Disable for SubSystem: '<S534>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S392>/Process_Messages' */
            localDW->COMPTaskTest_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Test' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE_i) {
            /* Disable for Enabled SubSystem: '<S386>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S386>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S386>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S395>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S395>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S395>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S395>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }

            /* End of Disable for SubSystem: '<S386>/Transmission subtasks' */

            /* Disable for Outport: '<S386>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S386>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S386>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

            /* Disable for Outport: '<S386>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSet_Values_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
            if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
                &localDW->Receptionsubstasks_jz);
            }

            /* End of Disable for SubSystem: '<S387>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S387>/Transmission subtasks1' */

            /* Disable for Outport: '<S387>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S387>/Receive CAN1' */
            localB->Receptionsubstasks_jz.AND = false;

            /* Disable for Outport: '<S387>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN2' */
            localB->Receptionsubstasks_jz.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Sync bc 1' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Test' */
          if (localDW->COMMTaskTest_MODE) {
            /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
            if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
                &localDW->Receptionsubstasks_l);
            }

            /* End of Disable for SubSystem: '<S388>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S442>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S440>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S443>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S440>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S440>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

            /* Disable for Outport: '<S388>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S388>/Receive CAN1' */
            localB->Receptionsubstasks_l.AND = false;

            /* Disable for Outport: '<S388>/Send CAN2' */
            localB->Equal7 = false;

            /* Disable for Outport: '<S388>/Receive CAN2' */
            localB->Receptionsubstasks_l.AND1 = false;
            localDW->COMMTaskTest_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Test' */

          /* Disable for Outport: '<S163>/Send_Message_CAN1' */
          localB->OR1_o = false;

          /* Disable for Outport: '<S163>/Send_Message_CAN2' */
          localB->OR2_k = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN1' */
          localB->OR3_b = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN2' */
          localB->OR4_h = false;
          localDW->controllerbasiccycle1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 1' */

        /* Disable for Outport: '<S159>/Send_CAN1' */
        localB->signal1_n = false;

        /* Disable for Outport: '<S159>/Send_CAN2' */
        localB->signal2_j = false;

        /* Disable for Outport: '<S159>/Receive_CAN1' */
        localB->signal3_k = false;

        /* Disable for Outport: '<S159>/Receive_CAN2' */
        localB->signal4_e = false;
        localDW->ControllerMatrixCycle_MODE = false;
      }

      /* End of Disable for SubSystem: '<S132>/Controller Matrix Cycle' */

      /* Disable for Enabled SubSystem: '<S132>/Input Generator Matrix Cycle' */
      if (localDW->InputGeneratorMatrixCycle_MODE) {
        /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 0' */
        if (localDW->inputgeneratorbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S569>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S575>/Process_Messages' */
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S598>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }

            /* End of Disable for SubSystem: '<S575>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S569>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S569>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_e.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_e,
              &localDW->COMMTaskSyncbc0_e);
          }

          /* End of Disable for SubSystem: '<S569>/COMM Task - Sync bc 0' */

          /* Disable for Outport: '<S569>/Send_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S569>/Send_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S569>/Receive_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S569>/Receive_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1 = false;
          localDW->inputgeneratorbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S160>/input generator basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 1' */
        if (localDW->inputgeneratorbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S570>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S636>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_kb.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_kb,
                   &localDW->DemuxmessageCAN1andcheckcohe_kb);
              }

              /* End of Disable for SubSystem: '<S687>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S636>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S570>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S570>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE) {
            /* Disable for Enabled SubSystem: '<S631>/Reception substasks' */
            if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
                &localDW->Receptionsubstasks_n);
            }

            /* End of Disable for SubSystem: '<S631>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S631>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S639>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S639>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S639>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S639>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }

            /* End of Disable for SubSystem: '<S631>/Transmission subtasks' */

            /* Disable for Outport: '<S631>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S631>/Receive CAN1' */
            localB->Receptionsubstasks_n.AND = false;

            /* Disable for Outport: '<S631>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

            /* Disable for Outport: '<S631>/Receive CAN2' */
            localB->Receptionsubstasks_n.AND1 = false;
            localDW->COMMTaskSet_Values_MODE = false;
          }

          /* End of Disable for SubSystem: '<S570>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S570>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1_d,
              &localDW->COMMTaskSyncbc1_d);
          }

          /* End of Disable for SubSystem: '<S570>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S570>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S570>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S570>/Receive_Message_CAN1' */
          localB->OR3 = false;

          /* Disable for Outport: '<S570>/Receive_Message_CAN2' */
          localB->OR2 = false;
          localDW->inputgeneratorbasiccycle1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S160>/input generator basic cycle 1' */

        /* Disable for Outport: '<S160>/Send_CAN1' */
        localB->signal1 = false;

        /* Disable for Outport: '<S160>/Send_CAN2' */
        localB->signal2 = false;

        /* Disable for Outport: '<S160>/Receive_CAN1' */
        localB->signal3 = false;

        /* Disable for Outport: '<S160>/Receive_CAN2' */
        localB->signal4 = false;
        localDW->InputGeneratorMatrixCycle_MODE = false;
      }

      /* End of Disable for SubSystem: '<S132>/Input Generator Matrix Cycle' */

      /* Disable for Outport: '<S132>/Send_Message_CAN1' */
      localB->Switch1[0] = false;

      /* Disable for Outport: '<S132>/Send_Message_CAN2' */
      localB->Switch1[1] = false;

      /* Disable for Outport: '<S132>/Receive_Message_CAN1' */
      localB->Switch1[2] = false;

      /* Disable for Outport: '<S132>/Receive_Message_CAN2' */
      localB->Switch1[3] = false;
      localDW->MatrixCycleManager_MODE = false;
    }
  }

  /* End of Logic: '<S36>/NOT1' */
  /* End of Outputs for SubSystem: '<S36>/Matrix Cycle Manager' */

  /* Logic: '<S36>/OR' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read1'
   */
  rtb_OR1_l = (localB->Switch1[2] || localDW->Initialization_flag);

  /* Chart: '<S36>/Chart' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
  if (localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
    localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart */
    /* Transition: '<S116>:10' */
    /* Entry 'Send_Trigger': '<S116>:9' */
    if (localB->Switch1[0]) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN1 Send' */
      /* Event: '<S116>:3' */
      CAN1Send(&localB->CAN1Send_o, &localDW->CAN1Send_o, rtd_Msg_Tx_CAN1,
               rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D13, rtd_TxID_CAN1,
               rtd_Tx_msg_count_CAN1);

      /* End of Outputs for SubSystem: '<S10>/CAN1 Send' */
    }
  } else {
    /* During 'Send_Trigger': '<S116>:9' */
    if (localB->Switch1[0]) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN1 Send' */
      /* Event: '<S116>:3' */
      CAN1Send(&localB->CAN1Send_o, &localDW->CAN1Send_o, rtd_Msg_Tx_CAN1,
               rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D13, rtd_TxID_CAN1,
               rtd_Tx_msg_count_CAN1);

      /* End of Outputs for SubSystem: '<S10>/CAN1 Send' */
    }
  }

  /* End of Chart: '<S36>/Chart' */

  /* Chart: '<S36>/Chart1' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
  if (localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
    localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart1 */
    /* Transition: '<S117>:10' */
    /* Entry 'Send_Trigger': '<S117>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN1 Recieve' */
      /* Event: '<S117>:3' */
      CAN1Recieve(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                  rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D12);

      /* End of Outputs for SubSystem: '<S10>/CAN1 Recieve' */
    }
  } else {
    /* During 'Send_Trigger': '<S117>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN1 Recieve' */
      /* Event: '<S117>:3' */
      CAN1Recieve(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                  rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D12);

      /* End of Outputs for SubSystem: '<S10>/CAN1 Recieve' */
    }
  }

  /* End of Chart: '<S36>/Chart1' */

  /* Logic: '<S36>/OR1' incorporates:
   *  DataStoreRead: '<S36>/Data Store Read1'
   */
  rtb_OR1_l = (localDW->Initialization_flag || localB->Switch1[3]);

  /* Chart: '<S36>/Chart2' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
  if (localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
    localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart2 */
    /* Transition: '<S118>:10' */
    /* Entry 'Send_Trigger': '<S118>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN2 Recieve' */
      /* Event: '<S118>:3' */
      CAN2Recieve(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                  rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D8);

      /* End of Outputs for SubSystem: '<S10>/CAN2 Recieve' */
    }
  } else {
    /* During 'Send_Trigger': '<S118>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN2 Recieve' */
      /* Event: '<S118>:3' */
      CAN2Recieve(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                  rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                  rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D8);

      /* End of Outputs for SubSystem: '<S10>/CAN2 Recieve' */
    }
  }

  /* End of Chart: '<S36>/Chart2' */

  /* Chart: '<S36>/Chart3' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
  if (localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
    localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart3 */
    /* Transition: '<S119>:10' */
    /* Entry 'Send_Trigger': '<S119>:9' */
    if (localB->Switch1[1]) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN2 Send' */
      /* Event: '<S119>:3' */
      CAN2Send(&localB->CAN2Send_h, &localDW->CAN2Send_h, rtd_Msg_Tx_CAN2,
               rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D9, rtd_TxID_CAN2,
               rtd_Tx_msg_count_CAN2);

      /* End of Outputs for SubSystem: '<S10>/CAN2 Send' */
    }
  } else {
    /* During 'Send_Trigger': '<S119>:9' */
    if (localB->Switch1[1]) {
      /* Outputs for Function Call SubSystem: '<S10>/CAN2 Send' */
      /* Event: '<S119>:3' */
      CAN2Send(&localB->CAN2Send_h, &localDW->CAN2Send_h, rtd_Msg_Tx_CAN2,
               rtd_Toggle_Pin_A0, rtd_Toggle_Pin_D9, rtd_TxID_CAN2,
               rtd_Tx_msg_count_CAN2);

      /* End of Outputs for SubSystem: '<S10>/CAN2 Send' */
    }
  }

  /* End of Chart: '<S36>/Chart3' */

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A0' incorporates:
   *  EnablePort: '<S121>/Enable'
   */
  /* Logic: '<S36>/AND' incorporates:
   *  Constant: '<S36>/Constant1'
   */
  if ((*rtd_Toggle_Pin_A0) && (1.0 != 0.0)) {
    if (!localDW->DEBUGToggledigitalpinA0_MODE) {
      localDW->DEBUGToggledigitalpinA0_MODE = true;
    }

    /* Switch: '<S121>/Switch' incorporates:
     *  DataStoreRead: '<S121>/Data Store Read'
     */
    if (localDW->A0_Pin_State) {
      /* DataStoreWrite: '<S121>/Data Store Write1' incorporates:
       *  Constant: '<S121>/Constant1'
       */
      localDW->A0_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S121>/Data Store Write1' incorporates:
       *  Constant: '<S121>/Constant'
       */
      localDW->A0_Pin_State = true;
    }

    /* End of Switch: '<S121>/Switch' */

    /* DataStoreWrite: '<S121>/Data Store Write' incorporates:
     *  Constant: '<S121>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = false;

    /* DataStoreRead: '<S121>/Data Store Read1' */
    localB->DataStoreRead1_o1 = localDW->A0_Pin_State;

    /* Update for M-S-Function: '<S133>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o1 == 0) {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA0_MODE) {
      localDW->DEBUGToggledigitalpinA0_MODE = false;
    }
  }

  /* End of Logic: '<S36>/AND' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin A0' */

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A1' incorporates:
   *  EnablePort: '<S122>/Enable'
   */
  /* Logic: '<S36>/AND1' incorporates:
   *  Constant: '<S36>/Constant4'
   *  DataStoreRead: '<S36>/Data Store Read3'
   */
  if (localDW->Toggle_Pin_A1 && (1.0 != 0.0)) {
    if (!localDW->DEBUGToggledigitalpinA1_MODE) {
      localDW->DEBUGToggledigitalpinA1_MODE = true;
    }

    /* Switch: '<S122>/Switch' incorporates:
     *  DataStoreRead: '<S122>/Data Store Read'
     */
    if (localDW->A1_Pin_State) {
      /* DataStoreWrite: '<S122>/Data Store Write1' incorporates:
       *  Constant: '<S122>/Constant1'
       */
      localDW->A1_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S122>/Data Store Write1' incorporates:
       *  Constant: '<S122>/Constant'
       */
      localDW->A1_Pin_State = true;
    }

    /* End of Switch: '<S122>/Switch' */

    /* DataStoreWrite: '<S122>/Data Store Write' incorporates:
     *  Constant: '<S122>/Constant2'
     */
    localDW->Toggle_Pin_A1 = false;

    /* DataStoreRead: '<S122>/Data Store Read1' */
    localB->DataStoreRead1_e = localDW->A1_Pin_State;

    /* Update for M-S-Function: '<S134>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_e == 0) {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA1_MODE) {
      localDW->DEBUGToggledigitalpinA1_MODE = false;
    }
  }

  /* End of Logic: '<S36>/AND1' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin A1' */

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin D10' incorporates:
   *  EnablePort: '<S125>/Enable'
   */
  /* Logic: '<S36>/AND6' incorporates:
   *  Constant: '<S36>/Constant9'
   *  DataStoreRead: '<S36>/Data Store Read14'
   */
  if (localDW->Toggle_Pin_D10 && (1.0 != 0.0)) {
    if (!localDW->DEBUGToggledigitalpinD10_MODE) {
      localDW->DEBUGToggledigitalpinD10_MODE = true;
    }

    /* Switch: '<S125>/Switch' incorporates:
     *  DataStoreRead: '<S125>/Data Store Read'
     */
    if (localDW->D10_Pin_State) {
      /* DataStoreWrite: '<S125>/Data Store Write1' incorporates:
       *  Constant: '<S125>/Constant1'
       */
      localDW->D10_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S125>/Data Store Write1' incorporates:
       *  Constant: '<S125>/Constant'
       */
      localDW->D10_Pin_State = true;
    }

    /* End of Switch: '<S125>/Switch' */

    /* DataStoreWrite: '<S125>/Data Store Write' incorporates:
     *  Constant: '<S125>/Constant2'
     */
    localDW->Toggle_Pin_D10 = false;

    /* DataStoreRead: '<S125>/Data Store Read1' */
    localB->DataStoreRead1_h = localDW->D10_Pin_State;

    /* Update for M-S-Function: '<S137>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_h == 0) {
      DigoutSet(DIGOUT_PORTA_PIN4, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN4, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinD10_MODE) {
      localDW->DEBUGToggledigitalpinD10_MODE = false;
    }
  }

  /* End of Logic: '<S36>/AND6' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin D10' */

  /* Outputs for Enabled SubSystem: '<S36>/DEBUG - Toggle digital pin A4' incorporates:
   *  EnablePort: '<S124>/Enable'
   */
  /* Constant: '<S36>/Constant7' */
  if (1.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA4_MODE) {
      localDW->DEBUGToggledigitalpinA4_MODE = true;
    }

    /* Switch: '<S124>/Switch' incorporates:
     *  DataStoreRead: '<S124>/Data Store Read'
     */
    if (localDW->A4_Pin_State) {
      /* DataStoreWrite: '<S124>/Data Store Write1' incorporates:
       *  Constant: '<S124>/Constant1'
       */
      localDW->A4_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S124>/Data Store Write1' incorporates:
       *  Constant: '<S124>/Constant'
       */
      localDW->A4_Pin_State = true;
    }

    /* End of Switch: '<S124>/Switch' */
    /* DataStoreRead: '<S124>/Data Store Read1' */
    localB->DataStoreRead1_m = localDW->A4_Pin_State;

    /* Update for M-S-Function: '<S136>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_m == 0) {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA4_MODE) {
      localDW->DEBUGToggledigitalpinA4_MODE = false;
    }
  }

  /* End of Constant: '<S36>/Constant7' */
  /* End of Outputs for SubSystem: '<S36>/DEBUG - Toggle digital pin A4' */

  /* Outputs for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' incorporates:
   *  EnablePort: '<S128>/Enable'
   */
  /* Logic: '<S36>/AND3' incorporates:
   *  Constant: '<S36>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D12 != 0.0)) {
    if (!localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = true;
    }

    /* Switch: '<S128>/Switch' incorporates:
     *  DataStoreRead: '<S128>/Data Store Read'
     */
    if (localDW->D12_Pin_State) {
      /* DataStoreWrite: '<S128>/Data Store Write1' incorporates:
       *  Constant: '<S128>/Constant1'
       */
      localDW->D12_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S128>/Data Store Write1' incorporates:
       *  Constant: '<S128>/Constant'
       */
      localDW->D12_Pin_State = true;
    }

    /* End of Switch: '<S128>/Switch' */
    /* DataStoreRead: '<S128>/Data Store Read1' */
    localB->DataStoreRead1_c = localDW->D12_Pin_State;

    /* DataStoreWrite: '<S128>/Data Store Write2' incorporates:
     *  Constant: '<S128>/Constant2'
     */
    *rtd_Toggle_Pin_D12 = 0.0;

    /* Update for M-S-Function: '<S155>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_c == 0) {
      DigoutSet(DIGOUT_PORTA_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN6, DIGOUT_HIGH);
    }
  } else {
    if (localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN1Rx_MO = false;
    }
  }

  /* End of Logic: '<S36>/AND3' */
  /* End of Outputs for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Rx' */

  /* Outputs for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  /* Logic: '<S36>/AND2' incorporates:
   *  Constant: '<S36>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D13 != 0.0)) {
    if (!localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = true;
    }

    /* Switch: '<S129>/Switch' incorporates:
     *  DataStoreRead: '<S129>/Data Store Read'
     */
    if (localDW->D13_Pin_State) {
      /* DataStoreWrite: '<S129>/Data Store Write1' incorporates:
       *  Constant: '<S129>/Constant1'
       */
      localDW->D13_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S129>/Data Store Write1' incorporates:
       *  Constant: '<S129>/Constant'
       */
      localDW->D13_Pin_State = true;
    }

    /* End of Switch: '<S129>/Switch' */
    /* DataStoreRead: '<S129>/Data Store Read1' */
    localB->DataStoreRead1_a = localDW->D13_Pin_State;

    /* DataStoreWrite: '<S129>/Data Store Write2' incorporates:
     *  Constant: '<S129>/Constant2'
     */
    *rtd_Toggle_Pin_D13 = 0.0;

    /* Update for M-S-Function: '<S156>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_a == 0) {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTA_PIN5, DIGOUT_HIGH);
    }
  } else {
    if (localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN1Tx_MO = false;
    }
  }

  /* End of Logic: '<S36>/AND2' */
  /* End of Outputs for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN1 - Tx' */

  /* Outputs for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' incorporates:
   *  EnablePort: '<S130>/Enable'
   */
  /* Logic: '<S36>/AND5' incorporates:
   *  Constant: '<S36>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D8 != 0.0)) {
    if (!localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = true;
    }

    /* Switch: '<S130>/Switch' incorporates:
     *  DataStoreRead: '<S130>/Data Store Read'
     */
    if (localDW->D8_Pin_State) {
      /* DataStoreWrite: '<S130>/Data Store Write1' incorporates:
       *  Constant: '<S130>/Constant1'
       */
      localDW->D8_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S130>/Data Store Write1' incorporates:
       *  Constant: '<S130>/Constant'
       */
      localDW->D8_Pin_State = true;
    }

    /* End of Switch: '<S130>/Switch' */
    /* DataStoreRead: '<S130>/Data Store Read1' */
    localB->DataStoreRead1_d = localDW->D8_Pin_State;

    /* DataStoreWrite: '<S130>/Data Store Write2' incorporates:
     *  Constant: '<S130>/Constant2'
     */
    *rtd_Toggle_Pin_D8 = 0.0;

    /* Update for M-S-Function: '<S157>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_d == 0) {
      DigoutSet(DIGOUT_PORTG_PIN12, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTG_PIN12, DIGOUT_HIGH);
    }
  } else {
    if (localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN2Rx_MO = false;
    }
  }

  /* End of Logic: '<S36>/AND5' */
  /* End of Outputs for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Rx' */

  /* Outputs for Enabled SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  /* Logic: '<S36>/AND4' incorporates:
   *  Constant: '<S36>/Constant8'
   */
  if ((1.0 != 0.0) && (*rtd_Toggle_Pin_D9 != 0.0)) {
    if (!localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = true;
    }

    /* Switch: '<S131>/Switch' incorporates:
     *  DataStoreRead: '<S131>/Data Store Read'
     */
    if (localDW->D9_Pin_State) {
      /* DataStoreWrite: '<S131>/Data Store Write1' incorporates:
       *  Constant: '<S131>/Constant1'
       */
      localDW->D9_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S131>/Data Store Write1' incorporates:
       *  Constant: '<S131>/Constant'
       */
      localDW->D9_Pin_State = true;
    }

    /* End of Switch: '<S131>/Switch' */
    /* DataStoreRead: '<S131>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->D9_Pin_State;

    /* DataStoreWrite: '<S131>/Data Store Write2' incorporates:
     *  Constant: '<S131>/Constant2'
     */
    *rtd_Toggle_Pin_D9 = 0.0;

    /* Update for M-S-Function: '<S158>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTG_PIN15, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTG_PIN15, DIGOUT_HIGH);
    }
  } else {
    if (localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO) {
      localDW->LogicAnalyzerCOMMdelayCAN2Tx_MO = false;
    }
  }

  /* End of Logic: '<S36>/AND4' */
  /* End of Outputs for SubSystem: '<S36>/Logic Analyzer - COMM delay CAN2 - Tx' */

  /* Outputs for Enabled SubSystem: '<S36>/LT_Update Desync_Positive' incorporates:
   *  EnablePort: '<S127>/Enable'
   */
  /* DataStoreRead: '<S36>/Data Store Read6' */
  if (localDW->Desync_Positive) {
    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S127>/Constant'
     *  Constant: '<S127>/Constant1'
     *  Constant: '<S127>/Constant4'
     *  Constant: '<S127>/Constant5'
     *  Constant: '<S127>/Constant8'
     *  DataStoreRead: '<S36>/Data Store Read7'
     *  RelationalOperator: '<S127>/Equal'
     */
    if (localDW->basic_cycle_count == 0.0) {
      localDW->Switch_1_DIMS1 = 20;
      localDW->Switch_2_DIMS1 = 20;
      memcpy(&rtb_signal1[0], rtConstP.Constant_Value_f, 20U * sizeof(real_T));
      memcpy(&rtb_signal2[0], rtConstP.Constant1_Value, 20U * sizeof(real_T));
    } else {
      localDW->Switch_1_DIMS1 = 12;
      localDW->Switch_2_DIMS1 = 12;
      memcpy(&rtb_signal1[0], rtConstP.Constant4_Value, 12U * sizeof(real_T));
      memcpy(&rtb_signal2[0], rtConstP.Constant5_Value, 12U * sizeof(real_T));
    }

    /* End of Switch: '<S127>/Switch' */

    /* MATLAB Function: '<S127>/MATLAB Function' incorporates:
     *  Constant: '<S127>/Constant2'
     *  Constant: '<S127>/Constant3'
     *  Constant: '<S127>/Constant6'
     *  Constant: '<S127>/Constant7'
     */
    /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/LT_Update Desync_Positive/MATLAB Function': '<S154>:1' */
    /* '<S154>:1:13' */
    rtb_Switch1_f = 1.0;
    do {
      exitg1 = 0;
      rtb_Plus_j = rtb_signal1[(int32_T)rtb_Switch1_f - 1];
      if (*rtd_Local_Ticks > rtb_Plus_j) {
        /* '<S154>:1:16' */
        /* '<S154>:1:17' */
        rtb_Switch1_f++;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    sigIdx = (int32_T)(rtb_Switch1_f - 1.0) - 1;
    if (rtb_signal2[sigIdx] != 0.0) {
      /* '<S154>:1:22' */
      rtb_Plus_j = rt_roundd(rtb_Plus_j - (real_T)*rtd_Local_Ticks);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 - 1U;
      if (qY_0 > u1) {
        qY_0 = 0U;
      }

      rtb_DataStoreRead8_c = (uint16_T)qY_0;
    } else {
      /* '<S154>:1:26' */
      rtb_Plus_j = rt_roundd((real_T)*rtd_Local_Ticks - rtb_signal1[sigIdx]);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          rtb_DataStoreRead8_c = (uint16_T)rtb_Plus_j;
        } else {
          rtb_DataStoreRead8_c = 0U;
        }
      } else {
        rtb_DataStoreRead8_c = MAX_uint16_T;
      }

      /* '<S154>:1:28' */
      /* '<S154>:1:31' */
      /* '<S154>:1:34' */
      /* '<S154>:1:39' */
      rtb_Plus_j = rt_roundd((real_T)rtb_DataStoreRead8_c - COMM_Phase_init1);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)u1 / COMM_Phase1);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 + 1U;
      if (qY_0 > 65535U) {
        qY_0 = 65535U;
      }

      rtb_Plus_j = rt_roundd((real_T)qY_0 * COMM_Phase1);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)u1 + COMM_Phase_init1);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u0 = (uint16_T)rtb_Plus_j;
        } else {
          u0 = 0U;
        }
      } else {
        u0 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)rtb_DataStoreRead8_c - COMM_Phase_init2);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)u1 / COMM_Phase2);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 + 1U;
      if (qY_0 > 65535U) {
        qY_0 = 65535U;
      }

      rtb_Plus_j = rt_roundd((real_T)qY_0 * COMM_Phase2);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      rtb_Plus_j = rt_roundd((real_T)u1 + COMM_Phase_init2);
      if (rtb_Plus_j < 65536.0) {
        if (rtb_Plus_j >= 0.0) {
          u1 = (uint16_T)rtb_Plus_j;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u0 < u1) {
        u1 = u0;
      }

      qY_0 = (uint32_T)u1 - rtb_DataStoreRead8_c;
      if (qY_0 > u1) {
        qY_0 = 0U;
      }

      qY = qY_0 - 2U;
      if (qY > qY_0) {
        qY = 0U;
      }

      rtb_DataStoreRead8_c = (uint16_T)qY;
    }

    /* End of MATLAB Function: '<S127>/MATLAB Function' */

    /* Outputs for Atomic SubSystem: '<S127>/Local Time Update with Positive Desync' */
    /* Switch: '<S153>/Switch' incorporates:
     *  DataStoreRead: '<S153>/Data Store Read2'
     *  RelationalOperator: '<S153>/GreaterThan'
     */
    if (rtb_DataStoreRead8_c <= localDW->Desync_Ticks) {
      rtb_Switch1_f = rtb_DataStoreRead8_c;
    } else {
      rtb_Switch1_f = localDW->Desync_Ticks;
    }

    /* End of Switch: '<S153>/Switch' */

    /* Sum: '<S153>/Minus' */
    rtb_Plus_j = (real_T)*rtd_Local_Ticks + rtb_Switch1_f;

    /* Sum: '<S153>/Minus1' incorporates:
     *  DataStoreRead: '<S153>/Data Store Read2'
     */
    rtb_Switch1_f -= localDW->Desync_Ticks;

    /* Logic: '<S153>/NOT' incorporates:
     *  Constant: '<S153>/Constant'
     *  DataStoreWrite: '<S153>/Data Store Write'
     *  RelationalOperator: '<S153>/Equal'
     */
    localDW->Desync_Positive = (rtb_Switch1_f > 0.0);

    /* DataStoreWrite: '<S153>/Data Store Write1' incorporates:
     *  DataTypeConversion: '<S153>/Cast'
     */
    *rtd_Local_Ticks = (uint16_T)rtb_Plus_j;

    /* DataStoreWrite: '<S153>/Data Store Write2' */
    localDW->Desync_Ticks = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S127>/Local Time Update with Positive Desync' */
  }

  /* End of DataStoreRead: '<S36>/Data Store Read6' */
  /* End of Outputs for SubSystem: '<S36>/LT_Update Desync_Positive' */

  /* Chart: '<S36>/Chart4' incorporates:
   *  Constant: '<S36>/Constant3'
   */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
  if (localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
    localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Chart4 */
    /* Transition: '<S120>:10' */
    /* Entry 'Send_Trigger': '<S120>:9' */
    if (1.0 != 0.0) {
      /* Outputs for Function Call SubSystem: '<S10>/Measure EXecution time' */
      /* Event: '<S120>:3' */
      MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                           &localDW->MeasureEXecutiontime_d);

      /* End of Outputs for SubSystem: '<S10>/Measure EXecution time' */
    }
  } else {
    /* During 'Send_Trigger': '<S120>:9' */
    if (1.0 != 0.0) {
      /* Outputs for Function Call SubSystem: '<S10>/Measure EXecution time' */
      /* Event: '<S120>:3' */
      MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                           &localDW->MeasureEXecutiontime_d);

      /* End of Outputs for SubSystem: '<S10>/Measure EXecution time' */
    }
  }

  /* End of Chart: '<S36>/Chart4' */
}

/* Model step function */
void HANcoder_E407_TTA_Group2_step(void)
{
  /* local block i/o variables */
  boolean_T rtb_Level2MfileSFunction_l;
  boolean_T rtb_Level2MfileSFunction_g;
  int32_T rowIdx;
  int8_T rtPrevAction;
  int8_T rtAction;
  uint8_T rtb_Output;
  real_T rtb_Multiply;
  real_T rtb_Multiply1;
  real_T rtb_Multiply2;
  uint8_T rtb_FixPtSum1;
  uint8_T rtb_FixPtSum1_b;
  boolean_T rtb_SampleTimeCrowBar;

  /* DigitalClock: '<S10>/Digital Clock' */
  simulation_time = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0*
                       4294967296.0)) * 0.01);

  /* Outputs for Enabled SubSystem: '<S10>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  /* Logic: '<S10>/NOT' incorporates:
   *  DataStoreRead: '<S10>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    if (!rtDWork.InitializeClockSchedule_MODE) {
      rtDWork.InitializeClockSchedule_MODE = true;
    }

    /* DataStoreWrite: '<S32>/Data Store Write' incorporates:
     *  Constant: '<S32>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S109>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S32>/Constant'
     *  Constant: '<S32>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else {
    if (rtDWork.InitializeClockSchedule_MODE) {
      rtDWork.InitializeClockSchedule_MODE = false;
    }
  }

  /* End of Logic: '<S10>/NOT' */
  /* End of Outputs for SubSystem: '<S10>/Initialize Clock Schedule' */

  /* If: '<S10>/If' incorporates:
   *  DataStoreRead: '<S10>/Data Store Read1'
   */
  rtPrevAction = rtDWork.If_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID == 0.0) {
    rtAction = 0;
  }

  rtDWork.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    if (0 != rtPrevAction) {
    }

    /* Outputs for IfAction SubSystem: '<S10>/If Action Subsystem' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    /* M-S-Function: '<S105>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN2);

    /* Product: '<S31>/Multiply' incorporates:
     *  Constant: '<S31>/Constant'
     */
    rtb_Multiply = rtb_Level2MfileSFunction_l ? 1.0 : 0.0;

    /* M-S-Function: '<S106>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN4);

    /* Product: '<S31>/Multiply1' incorporates:
     *  Constant: '<S31>/Constant1'
     */
    rtb_Multiply1 = rtb_Level2MfileSFunction_l ? 2.0 : 0.0;

    /* M-S-Function: '<S107>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN5);

    /* Product: '<S31>/Multiply2' incorporates:
     *  Constant: '<S31>/Constant2'
     */
    rtb_Multiply2 = rtb_Level2MfileSFunction_l ? 4.0 : 0.0;

    /* M-S-Function: '<S108>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN6);

    /* Sum: '<S31>/Add' incorporates:
     *  Constant: '<S31>/Constant3'
     *  Product: '<S31>/Multiply3'
     */
    Board_ID_s = ((rtb_Multiply + rtb_Multiply1) + rtb_Multiply2) +
      (rtb_Level2MfileSFunction_l ? 8.0 : 0.0);

    /* End of Outputs for SubSystem: '<S10>/If Action Subsystem' */
  }

  /* End of If: '<S10>/If' */

  /* DataStoreWrite: '<S10>/Data Store Write' */
  rtDWork.Board_ID = Board_ID_s;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S18>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_g = DiginGet(DIGIN_PORTA_PIN0);

    /* Outputs for Triggered SubSystem: '<S20>/J-K Flip-Flop' incorporates:
     *  TriggerPort: '<S21>/Trigger'
     */
    if ((!rtb_Level2MfileSFunction_g) && (rtPrevZCSigState.JKFlipFlop_Trig_ZCE
         != ZERO_ZCSIG)) {
      /* CombinatorialLogic: '<S21>/Logic' incorporates:
       *  Memory: '<S20>/TmpLatchAtJ-K Flip-FlopInport1'
       *  Memory: '<S21>/Memory'
       */
      rowIdx = (int32_T)(((((uint32_T)rtDWork.Memory_PreviousInput << 1) +
                           rtDWork.TmpLatchAtJKFlipFlopInport1_Pre) << 1) +
                         rtDWork.TmpLatchAtJKFlipFlopInport2_Pre);
      rtB.Logic[0U] = rtConstP.Logic_table[(uint32_T)rowIdx];
      rtB.Logic[1U] = rtConstP.Logic_table[rowIdx + 8U];

      /* Update for Memory: '<S21>/Memory' */
      rtDWork.Memory_PreviousInput = rtB.Logic[0];
    }

    rtPrevZCSigState.JKFlipFlop_Trig_ZCE = rtb_Level2MfileSFunction_g;

    /* End of Outputs for SubSystem: '<S20>/J-K Flip-Flop' */
  }

  /* Constant: '<S10>/Constant' */
  script_run_s = script_run;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S12>/Output' */
    rtb_Output = rtDWork.Output_DSTATE;

    /* Sum: '<S14>/FixPt Sum1' incorporates:
     *  Constant: '<S14>/FixPt Constant'
     *  UnitDelay: '<S12>/Output'
     */
    rtb_FixPtSum1 = (uint8_T)((uint32_T)rtDWork.Output_DSTATE + ((uint8_T)1U));

    /* Switch: '<S15>/FixPt Switch' incorporates:
     *  Constant: '<S15>/Constant'
     */
    if (rtb_FixPtSum1 > ((uint8_T)1U)) {
      rtb_FixPtSum1 = ((uint8_T)0U);
    }

    /* End of Switch: '<S15>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S13>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_k;

    /* Sum: '<S16>/FixPt Sum1' incorporates:
     *  Constant: '<S16>/FixPt Constant'
     */
    rtb_FixPtSum1_b = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S17>/FixPt Switch' incorporates:
     *  Constant: '<S17>/Constant'
     */
    if (rtb_FixPtSum1_b > ((uint8_T)1U)) {
      rtb_FixPtSum1_b = ((uint8_T)0U);
    }

    /* End of Switch: '<S17>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Logic: '<S2>/Logical Operator'
     */
    if (HANtuneOverride || rtb_Level2MfileSFunction_g) {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtb_Output != 0);
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtB.Output != 0);
    }

    /* End of Switch: '<S2>/Switch' */
  }

  /* Constant: '<S3>/SampleTimeCrowBar' */
  rtb_SampleTimeCrowBar = true;

  /* M-S-Function: '<S23>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S24>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S25>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Memory: '<S20>/TmpLatchAtJ-K Flip-FlopInport1' incorporates:
     *  Constant: '<S7>/Constant'
     */
    rtDWork.TmpLatchAtJKFlipFlopInport1_Pre = true;

    /* Update for Memory: '<S20>/TmpLatchAtJ-K Flip-FlopInport2' incorporates:
     *  Constant: '<S7>/Constant'
     */
    rtDWork.TmpLatchAtJKFlipFlopInport2_Pre = true;

    /* Update for M-S-Function: '<S22>/Level-2 M-file S-Function' */
    /* update digital output */
    if (LedValue == 0) {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
    }

    /* Update for UnitDelay: '<S12>/Output' */
    rtDWork.Output_DSTATE = rtb_FixPtSum1;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S13>/Output' */
    rtDWork.Output_DSTATE_k = rtb_FixPtSum1_b;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick0++;
  if (!rtM->Timing.clockTick0) {
    rtM->Timing.clockTickH0++;
  }

  rate_scheduler();
}

/* Model initialize function */
void HANcoder_E407_TTA_Group2_initialize(void)
{
  {
    /* user code (Start function Header) */
    uint8_t canResult1;
    tCanFilter canFilter1;
    uint8_t canResult2;
    tCanFilter canFilter2;

    /* user code (Start function Body) */

    /* initialize the CAN driver. */
    CanInit(64, 8);

    /* initialize the CAN I/O module for channel 1 */
    CanIoInit(0);

    /* initialize the CAN I/O module for channel 2 */
    CanIoInit(1);

    /* initialize the timer module for output compare. */
    TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

    /* Start for DataStoreMemory: '<S10>/Data Store Memory5' */
    rtDWork.Master_ID = 1.0;

    /* Start for If: '<S10>/If' */
    rtDWork.If_ActiveSubsystem = -1;

    /* Start for IfAction SubSystem: '<S10>/If Action Subsystem' */

    /* Start for M-S-Function: '<S105>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S106>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S107>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN5, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S108>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN6, DIGIN_CFG_PULLDOWN);

    /* End of Start for SubSystem: '<S10>/If Action Subsystem' */

    /* Start for M-S-Function: '<S18>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* Start for S-Function (sfcn_timeout_event_irq): '<S30>/S-Function' incorporates:
     *  SubSystem: '<S10>/Local Time generation'
     */

    /* Start for function-call system: '<S10>/Local Time generation' */

    /* Start for Chart: '<S33>/Chart' incorporates:
     *  SubSystem: '<S10>/TTA System'
     */
    TTASystem_Start(&rtDWork.TTASystem_c);

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S30>/S-Function' */

    /* Start for DataStoreMemory: '<S10>/Data Store Memory14' */
    rtDWork.RxID_CAN2 = 1U;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory8' */
    rtDWork.RxID_CAN1 = 1U;

    /* Start for S-Function (sfcn_timeout_init): '<S35>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for DataStoreMemory: '<S10>/Data Store Memory' */
    rtDWork.Tx_msg_count_CAN1 = 1.0;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory20' */
    rtDWork.Tx_msg_count_CAN2 = 1.0;

    /* Start for M-S-Function: '<S22>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
      100);

    /* configure the sample time of the model in microseconds */
    AppCtrlTaskSetPeriod(10000);

    /* Run the ADC conversions ten times faster than the Simulink model */
    ADCconversionTaskSetPeriod(10000/10);

    /* Start for M-S-Function: '<S4>/Level-2 M-file S-Function' */

    /* store the CAN controller's filter configuration */
    canFilter1.mask = 0x00000000;
    canFilter1.code = 0x00000000;
    canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult1 = CanConnect(0, 1000000, &canFilter1);
    configASSERT(canResult1 == TRUE);

    /* store the CAN controller's filter configuration */
    canFilter2.mask = 0x00000000;
    canFilter2.code = 0x00000000;
    canFilter2.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult2 = CanConnect(1, 1000000, &canFilter2);
    configASSERT(canResult2 == TRUE);

    /* Start for M-S-Function: '<S11>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  rtPrevZCSigState.JKFlipFlop_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for Triggered SubSystem: '<S20>/J-K Flip-Flop' */
  /* SystemInitialize for Outport: '<S21>/!Q' */
  rtB.Logic[1] = true;

  /* End of SystemInitialize for SubSystem: '<S20>/J-K Flip-Flop' */

  /* SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S30>/S-Function' incorporates:
   *  SubSystem: '<S10>/Local Time generation'
   */

  /* System initialize for function-call system: '<S10>/Local Time generation' */

  /* SystemInitialize for Chart: '<S33>/Chart' incorporates:
   *  SubSystem: '<S10>/TTA System'
   */
  TTASystem_Init(&rtB.TTASystem_c);

  /* End of SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S30>/S-Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
