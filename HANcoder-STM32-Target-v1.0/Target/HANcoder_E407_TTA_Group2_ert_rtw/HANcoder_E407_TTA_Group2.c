/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Group2.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Group2'.
 *
 * Model version                  : 1.208
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jun  1 14:11:44 2022
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
real_T tmr1_s;                         /* '<S132>/MATLAB Function' */
real_T tmr2_s;                         /* '<S132>/MATLAB Function' */
real_T tmr3_s;                         /* '<S132>/MATLAB Function' */
real_T tmr4_s;                         /* '<S132>/MATLAB Function' */
real_T Master_ID_ing_s;                /* '<S627>/Data Store Read' */
real_T Role_ID_ing_s;                  /* '<S627>/Data Store Read1' */
real_T sync_bc1_miss_counter_ing;      /* '<S627>/Data Store Read3' */
real_T sync_bc0_miss_counter_ing;      /* '<S627>/Data Store Read4' */
real_T msg_count_DEBUG_ing_s;          /* '<S630>/Data Store Read24' */
real_T Desync_Sync_bc1_ing_s;          /* '<S750>/Saturation' */
real_T v_set_s;                        /* '<S702>/Constant12' */
real_T Desync_Sync_bc0_ing_s;          /* '<S661>/Saturation' */
real_T Master_ID_s;                    /* '<S162>/Data Store Read' */
real_T Role_ID_s;                      /* '<S162>/Data Store Read1' */
real_T sync_bc0_miss_counter_s;        /* '<S162>/Data Store Read11' */
real_T sync_bc1_miss_counter_s;        /* '<S162>/Data Store Read12' */
real_T votes_Board_1_DEBUG;            /* '<S162>/Data Store Read3' */
real_T votes_Board_2_DEBUG;            /* '<S162>/Data Store Read3' */
real_T votes_Board_3_DEBUG;            /* '<S162>/Data Store Read3' */
real_T Board_1_error_counter_s;        /* '<S162>/Data Store Read4' */
real_T Board_2_error_counter_s;        /* '<S162>/Data Store Read5' */
real_T Board_3_error_counter_s;        /* '<S162>/Data Store Read6' */
real_T msg_count_DEBUG_s;              /* '<S165>/Data Store Read24' */
real_T error_flag_s;                   /* '<S625>/Advanced Voter (101)' */
real_T Desync_Sync_bc1_s;              /* '<S566>/Saturation' */
real_T b2_s;                           /* '<S482>/Switch1' */
real_T b1_s;                           /* '<S482>/Switch' */
real_T b3_s;                           /* '<S482>/Switch2' */
real_T b4_s;                           /* '<S482>/Switch3' */
real_T Desync_Sync_bc0_s;              /* '<S268>/Saturation' */
real_T TM1_timeout_counter_s;          /* '<S256>/Switch' */
real_T TM2_timeout_counter_s;          /* '<S257>/Switch' */
real_T TM3_timeout_counter_s;          /* '<S258>/Switch' */
real32_T voting_out_s;                 /* '<S625>/Advanced Voter (101)' */
uint16_T Rx_init_LT;                   /* '<S141>/Cast' */
uint16_T test2_s;                      /* '<S620>/Gain1' */
uint16_T test1_s;                      /* '<S620>/Gain' */
uint16_T test3_s;                      /* '<S620>/Gain2' */
uint8_T Vote_s;                        /* '<S296>/Cast' */
uint8_T Rx_init_id;                    /* '<S145>/bit_shift' */
uint8_T Rx_init_mc;                    /* '<S144>/bit_shift' */
uint8_T Rx_init_bc;                    /* '<S143>/bit_shift' */
uint8_T bacic_cycle_s;                 /* '<S115>/Switch' */
boolean_T BC1_sync_processed_ing_s;    /* '<S627>/Data Store Read10' */
boolean_T BC0_sync_processed_ing_s;    /* '<S627>/Data Store Read2' */
boolean_T reset_ing_s;                 /* '<S632>/Data Store Read' */
boolean_T BC1_sync_processed_s;        /* '<S162>/Data Store Read10' */
boolean_T BC0_sync_processed_s;        /* '<S162>/Data Store Read2' */
boolean_T BC0_vote1_processed_s;       /* '<S162>/Data Store Read7' */
boolean_T BC0_vote2_processed_s;       /* '<S162>/Data Store Read8' */
boolean_T BC0_vote3_processed_s;       /* '<S162>/Data Store Read9' */
boolean_T new_sensor_rx_s;             /* '<S593>/Data Store Read5' */
boolean_T new_set_rx_s;                /* '<S518>/Data Store Read5' */
boolean_T reset_s;                     /* '<S172>/Data Store Read' */
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
                                        *   '<S186>/Constant24'
                                        *   '<S186>/Constant27'
                                        *   '<S204>/Constant24'
                                        *   '<S204>/Constant27'
                                        *   '<S222>/Constant24'
                                        *   '<S222>/Constant27'
                                        *   '<S240>/Constant24'
                                        *   '<S240>/Constant27'
                                        *   '<S268>/Constant'
                                        *   '<S403>/Constant24'
                                        *   '<S403>/Constant27'
                                        *   '<S430>/Constant24'
                                        *   '<S430>/Constant27'
                                        *   '<S448>/Constant24'
                                        *   '<S448>/Constant27'
                                        *   '<S466>/Constant24'
                                        *   '<S466>/Constant27'
                                        *   '<S566>/Constant'
                                        *   '<S639>/Constant24'
                                        *   '<S639>/Constant27'
                                        *   '<S661>/Constant'
                                        *   '<S700>/Constant24'
                                        *   '<S700>/Constant27'
                                        *   '<S727>/Constant24'
                                        *   '<S727>/Constant27'
                                        *   '<S750>/Constant'
                                        */
real_T COMM_Phase2 = 10.0;             /* Variable: COMM_Phase2
                                        * Referenced by:
                                        *   '<S127>/Constant3'
                                        *   '<S141>/Constant2'
                                        *   '<S187>/Constant24'
                                        *   '<S187>/Constant27'
                                        *   '<S205>/Constant24'
                                        *   '<S205>/Constant27'
                                        *   '<S223>/Constant24'
                                        *   '<S223>/Constant27'
                                        *   '<S241>/Constant24'
                                        *   '<S241>/Constant27'
                                        *   '<S268>/Constant1'
                                        *   '<S404>/Constant24'
                                        *   '<S404>/Constant27'
                                        *   '<S431>/Constant24'
                                        *   '<S431>/Constant27'
                                        *   '<S449>/Constant24'
                                        *   '<S449>/Constant27'
                                        *   '<S467>/Constant24'
                                        *   '<S467>/Constant27'
                                        *   '<S566>/Constant1'
                                        *   '<S640>/Constant24'
                                        *   '<S640>/Constant27'
                                        *   '<S661>/Constant1'
                                        *   '<S701>/Constant24'
                                        *   '<S701>/Constant27'
                                        *   '<S728>/Constant24'
                                        *   '<S728>/Constant27'
                                        *   '<S750>/Constant1'
                                        */
real_T COMM_Phase_init1 = 0.0;         /* Variable: COMM_Phase_init1
                                        * Referenced by:
                                        *   '<S127>/Constant6'
                                        *   '<S186>/Constant'
                                        *   '<S204>/Constant'
                                        *   '<S222>/Constant'
                                        *   '<S240>/Constant'
                                        *   '<S403>/Constant'
                                        *   '<S430>/Constant'
                                        *   '<S448>/Constant'
                                        *   '<S466>/Constant'
                                        *   '<S639>/Constant'
                                        *   '<S700>/Constant'
                                        *   '<S727>/Constant'
                                        */
real_T COMM_Phase_init2 = 5.0;         /* Variable: COMM_Phase_init2
                                        * Referenced by:
                                        *   '<S127>/Constant7'
                                        *   '<S187>/Constant'
                                        *   '<S205>/Constant'
                                        *   '<S223>/Constant'
                                        *   '<S241>/Constant'
                                        *   '<S404>/Constant'
                                        *   '<S431>/Constant'
                                        *   '<S449>/Constant'
                                        *   '<S467>/Constant'
                                        *   '<S640>/Constant'
                                        *   '<S701>/Constant'
                                        *   '<S728>/Constant'
                                        */
real_T board1_online = 1.0;            /* Variable: board1_online
                                        * Referenced by:
                                        *   '<S482>/Constant5'
                                        *   '<S468>/Constant5'
                                        */
real_T board2_online = 1.0;            /* Variable: board2_online
                                        * Referenced by:
                                        *   '<S482>/Constant6'
                                        *   '<S468>/Constant6'
                                        */
real_T board3_online = 1.0;            /* Variable: board3_online
                                        * Referenced by:
                                        *   '<S482>/Constant7'
                                        *   '<S468>/Constant7'
                                        */
real_T board4_online = 1.0;            /* Variable: board4_online
                                        * Referenced by:
                                        *   '<S482>/Constant8'
                                        *   '<S468>/Constant8'
                                        */
real_T delta_a_set = 0.0;              /* Variable: delta_a_set
                                        * Referenced by:
                                        *   '<S405>/Constant11'
                                        *   '<S702>/Constant11'
                                        */
real_T delta_f_set = 0.0;              /* Variable: delta_f_set
                                        * Referenced by:
                                        *   '<S405>/Constant10'
                                        *   '<S702>/Constant10'
                                        */
real_T script_run = 0.0;               /* Variable: script_run
                                        * Referenced by: '<S10>/Constant'
                                        */
real_T testV_1 = 0.0;                  /* Variable: testV_1
                                        * Referenced by: '<S450>/Constant4'
                                        */
real_T testV_2 = 0.0;                  /* Variable: testV_2
                                        * Referenced by: '<S450>/Constant3'
                                        */
real_T testV_3 = 0.0;                  /* Variable: testV_3
                                        * Referenced by: '<S450>/Constant9'
                                        */
real_T v_set = 0.0;                    /* Variable: v_set
                                        * Referenced by:
                                        *   '<S405>/Constant12'
                                        *   '<S702>/Constant12'
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
 *    '<S269>/Bit Shift3'
 *    '<S281>/Bit Shift3'
 *    '<S305>/Bit Shift3'
 *    '<S317>/Bit Shift3'
 *    '<S334>/Bit Shift3'
 *    '<S346>/Bit Shift3'
 *    '<S363>/Bit Shift3'
 *    '<S375>/Bit Shift3'
 *    '<S488>/Bit Shift3'
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
 *    '<S190>/Bit Shift'
 *    '<S196>/Bit Shift'
 *    '<S208>/Bit Shift'
 *    '<S214>/Bit Shift'
 *    '<S226>/Bit Shift'
 *    '<S232>/Bit Shift'
 *    '<S244>/Bit Shift'
 *    '<S250>/Bit Shift'
 *    '<S269>/Bit Shift4'
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
 *    '<S166>/Reception substasks'
 *    '<S167>/Reception substasks'
 *    '<S168>/Reception substasks'
 *    '<S169>/Reception substasks'
 *    '<S387>/Reception substasks'
 *    '<S388>/Reception substasks'
 *    '<S389>/Reception substasks'
 *    '<S390>/Reception substasks'
 *    '<S631>/Reception substasks'
 *    '<S690>/Reception substasks'
 *    '<S691>/Reception substasks'
 */
void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW)
{
  /* Disable for Outport: '<S183>/Receive CAN1' */
  localB->AND = false;

  /* Disable for Outport: '<S183>/Receive CAN2' */
  localB->AND1 = false;
  localDW->Receptionsubstasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S166>/Reception substasks'
 *    '<S167>/Reception substasks'
 *    '<S168>/Reception substasks'
 *    '<S169>/Reception substasks'
 *    '<S387>/Reception substasks'
 *    '<S388>/Reception substasks'
 *    '<S389>/Reception substasks'
 *    '<S390>/Reception substasks'
 *    '<S631>/Reception substasks'
 *    '<S690>/Reception substasks'
 *    '<S691>/Reception substasks'
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

  /* Outputs for Enabled SubSystem: '<S166>/Reception substasks' incorporates:
   *  EnablePort: '<S183>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Receptionsubstasks_MODE) {
      localDW->Receptionsubstasks_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S183>/RX buffers update' incorporates:
     *  EnablePort: '<S185>/Enable'
     */
    /* RelationalOperator: '<S183>/Equal16' */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataStoreWrite: '<S185>/Data Store Write11' */
      *rtd_RxID_CAN2 = localC->Cast13;

      /* DataStoreWrite: '<S185>/Data Store Write6' */
      *rtd_RxID_CAN1 = localC->Cast3;

      /* DataStoreWrite: '<S185>/Data Store Write9' */
      *rtd_New_Msg_Ready_CAN2 = localC->Cast14;

      /* DataStoreWrite: '<S185>/Data Store Write12' */
      *rtd_Rx_State_CAN2 = localC->Cast15;

      /* DataStoreWrite: '<S185>/Data Store Write2' */
      *rtd_New_Msg_Ready_CAN1 = localC->Cast5;

      /* DataStoreWrite: '<S185>/Data Store Write7' */
      *rtd_Rx_State_CAN1 = localC->Cast6;

      /* DataStoreWrite: '<S185>/Data Store Write' incorporates:
       *  Constant: '<S185>/RESET_Msg_Rx'
       */
      *rtd_Msg_Rx_d = HANcoder_E407_TTA_Group2_rtZmsg_buffer_type;

      /* DataStoreWrite: '<S185>/Data Store Write3' incorporates:
       *  Constant: '<S185>/RESET_new_msg_Rx'
       */
      *rtd_new_msg_Rx_l = false;
    }

    /* End of RelationalOperator: '<S183>/Equal16' */
    /* End of Outputs for SubSystem: '<S183>/RX buffers update' */

    /* RelationalOperator: '<S183>/Equal2' */
    rtb_Equal2_k = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S183>/AND' incorporates:
     *  Logic: '<S183>/NOT'
     */
    localB->AND = (rtb_Equal2_k && (!*rtd_New_Msg_Ready_CAN1));

    /* Logic: '<S183>/AND1' incorporates:
     *  Logic: '<S183>/NOT1'
     */
    localB->AND1 = (rtb_Equal2_k && (!*rtd_New_Msg_Ready_CAN2));
  } else {
    if (localDW->Receptionsubstasks_MODE) {
      Receptionsubstasks_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S166>/Reception substasks' */
}

/*
 * Output and update for atomic system:
 *    '<S190>/Bit Shift1'
 *    '<S196>/Bit Shift1'
 *    '<S208>/Bit Shift1'
 *    '<S214>/Bit Shift1'
 *    '<S226>/Bit Shift1'
 *    '<S232>/Bit Shift1'
 *    '<S244>/Bit Shift1'
 *    '<S250>/Bit Shift1'
 *    '<S407>/Bit Shift1'
 *    '<S413>/Bit Shift1'
 *    ...
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S192>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S194>:1' */
  /* '<S194>:1:6' */
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
 *    '<S166>/Transmission subtasks'
 *    '<S388>/Transmission subtasks1'
 *    '<S631>/Transmission subtasks'
 *    '<S691>/Transmission subtasks'
 */
void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW)
{
  /* Disable for Enabled SubSystem: '<S184>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for Outport: '<S186>/Send CAN1' */
    localB->Equal7_a = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S184>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S184>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for Outport: '<S187>/Send CAN2' */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S184>/Check msg transmission CAN2' */

  /* Disable for Outport: '<S184>/Send CAN1' */
  localB->Equal7_a = false;

  /* Disable for Outport: '<S184>/Send CAN2' */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S166>/Transmission subtasks'
 *    '<S388>/Transmission subtasks1'
 *    '<S631>/Transmission subtasks'
 *    '<S691>/Transmission subtasks'
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

  /* Outputs for Enabled SubSystem: '<S166>/Transmission subtasks' incorporates:
   *  EnablePort: '<S184>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Transmissionsubtasks_MODE) {
      localDW->Transmissionsubtasks_MODE = true;
    }

    /* RelationalOperator: '<S184>/Equal2' */
    rtb_Equal2_pm = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S184>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S188>/Enable'
     */
    /* RelationalOperator: '<S184>/Equal16' incorporates:
     *  Constant: '<S188>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);
    }

    /* End of RelationalOperator: '<S184>/Equal16' */
    /* End of Outputs for SubSystem: '<S184>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S184>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S186>/Enable'
     */
    /* Logic: '<S184>/AND' incorporates:
     *  Constant: '<S184>/Constant6'
     *  Constant: '<S186>/Constant22'
     *  Constant: '<S186>/Constant24'
     *  Constant: '<S186>/Constant8'
     *  Math: '<S186>/Mod'
     *  RelationalOperator: '<S184>/GreaterThan2'
     *  RelationalOperator: '<S186>/Equal4'
     *  Sum: '<S186>/Minus'
     */
    if (rtb_Equal2_pm && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN1_MODE) {
        localDW->CheckmsgtransmissionCAN1_MODE = true;
      }

      /* Sum: '<S186>/Minus2' incorporates:
       *  Constant: '<S186>/Constant'
       */
      rtb_Minus2_f4 = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S186>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S189>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_f4, COMM_Phase1)
          == 0.0) {
        /* DataTypeConversion: '<S189>/Cast4' */
        rtb_Cast4_n = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S190>/Bit Shift1' */
        BitShift1(rtb_Cast4_n, &localB->BitShift1_a);

        /* End of Outputs for SubSystem: '<S190>/Bit Shift1' */

        /* DataTypeConversion: '<S189>/Cast1' */
        rtb_Cast1_il = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S190>/Bit Shift' */
        BitShift4(rtb_Cast1_il, &localB->BitShift_f);

        /* End of Outputs for SubSystem: '<S190>/Bit Shift' */

        /* DataStoreWrite: '<S189>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S189>/Cast16'
         *  Sum: '<S190>/Minus'
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

        /* DataStoreWrite: '<S189>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S186>/TX buffer update CAN1' */

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
      localB->Equal7_a = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_f4,
        COMM_Phase1) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN1_MODE) {
        /* Disable for Outport: '<S186>/Send CAN1' */
        localB->Equal7_a = false;
        localDW->CheckmsgtransmissionCAN1_MODE = false;
      }
    }

    /* End of Logic: '<S184>/AND' */
    /* End of Outputs for SubSystem: '<S184>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S184>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S187>/Enable'
     */
    /* Logic: '<S184>/AND1' incorporates:
     *  Constant: '<S184>/Constant7'
     *  Constant: '<S187>/Constant22'
     *  Constant: '<S187>/Constant24'
     *  Constant: '<S187>/Constant8'
     *  Math: '<S187>/Mod'
     *  RelationalOperator: '<S184>/GreaterThan3'
     *  RelationalOperator: '<S187>/Equal4'
     *  Sum: '<S187>/Minus'
     */
    if (rtb_Equal2_pm && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN2_MODE) {
        localDW->CheckmsgtransmissionCAN2_MODE = true;
      }

      /* Sum: '<S187>/Minus2' incorporates:
       *  Constant: '<S187>/Constant'
       */
      rtb_Minus2_f4 = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S187>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S195>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_f4, COMM_Phase2)
          == 0.0) {
        /* DataTypeConversion: '<S195>/Cast18' */
        rtb_Cast18_f = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S196>/Bit Shift1' */
        BitShift1(rtb_Cast18_f, &localB->BitShift1_h);

        /* End of Outputs for SubSystem: '<S196>/Bit Shift1' */

        /* DataTypeConversion: '<S195>/Cast9' */
        rtb_Cast9_l = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S196>/Bit Shift' */
        BitShift4(rtb_Cast9_l, &localB->BitShift_e);

        /* End of Outputs for SubSystem: '<S196>/Bit Shift' */

        /* DataStoreWrite: '<S195>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S195>/Cast17'
         *  Sum: '<S196>/Minus'
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

        /* DataStoreWrite: '<S195>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S187>/TX buffer update CAN2' */

      /* RelationalOperator: '<S187>/Equal7' incorporates:
       *  Constant: '<S187>/Constant11'
       *  Constant: '<S187>/Constant22'
       *  Constant: '<S187>/Constant24'
       *  Constant: '<S187>/Constant27'
       *  Constant: '<S187>/Constant8'
       *  Math: '<S187>/Mod'
       *  Math: '<S187>/Mod1'
       *  RelationalOperator: '<S187>/Equal4'
       *  Sum: '<S187>/Minus'
       *  Sum: '<S187>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_f4,
        COMM_Phase2) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN2_MODE) {
        /* Disable for Outport: '<S187>/Send CAN2' */
        localB->Equal7 = false;
        localDW->CheckmsgtransmissionCAN2_MODE = false;
      }
    }

    /* End of Logic: '<S184>/AND1' */
    /* End of Outputs for SubSystem: '<S184>/Check msg transmission CAN2' */
  } else {
    if (localDW->Transmissionsubtasks_MODE) {
      Transmissionsubtasks_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S166>/Transmission subtasks' */
}

/*
 * Disable for enable system:
 *    '<S163>/COMM Task - Sync bc 0'
 *    '<S628>/COMM Task - Sync bc 0'
 *    '<S629>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc0_Disable(rtB_COMMTaskSyncbc0 *localB, rtDW_COMMTaskSyncbc0
  *localDW)
{
  /* Disable for Enabled SubSystem: '<S166>/Reception substasks' */
  if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
    Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
      &localDW->Receptionsubstasks_h);
  }

  /* End of Disable for SubSystem: '<S166>/Reception substasks' */

  /* Disable for Enabled SubSystem: '<S166>/Transmission subtasks' */
  if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
    Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
      &localDW->Transmissionsubtasks_l);
  }

  /* End of Disable for SubSystem: '<S166>/Transmission subtasks' */

  /* Disable for Outport: '<S166>/Send CAN1' */
  localB->Transmissionsubtasks_l.Equal7_a = false;

  /* Disable for Outport: '<S166>/Receive CAN1' */
  localB->Receptionsubstasks_h.AND = false;

  /* Disable for Outport: '<S166>/Send CAN2' */
  localB->Transmissionsubtasks_l.Equal7 = false;

  /* Disable for Outport: '<S166>/Receive CAN2' */
  localB->Receptionsubstasks_h.AND1 = false;
  localDW->COMMTaskSyncbc0_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S163>/COMM Task - Sync bc 0'
 *    '<S628>/COMM Task - Sync bc 0'
 *    '<S629>/COMM Task - Sync bc 1'
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
  boolean_T rtb_NOT_bd;

  /* Outputs for Enabled SubSystem: '<S163>/COMM Task - Sync bc 0' incorporates:
   *  EnablePort: '<S166>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->COMMTaskSyncbc0_MODE) {
      localDW->COMMTaskSyncbc0_MODE = true;
    }

    /* RelationalOperator: '<S166>/Equal1' incorporates:
     *  Constant: '<S166>/Constant2'
     */
    rtb_Equal1_ie = (*rtd_Role_ID == 1.0);

    /* Logic: '<S166>/NOT' */
    rtb_NOT_bd = !rtb_Equal1_ie;

    /* Outputs for Enabled SubSystem: '<S166>/Reception substasks' */
    Receptionsubstasks(rtb_NOT_bd, rtu_TimeMark, &localB->Receptionsubstasks_h,
                       &localC->Receptionsubstasks_h,
                       &localDW->Receptionsubstasks_h, rtd_Local_Ticks,
                       rtd_Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                       rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                       rtd_Rx_State_CAN1, rtd_Rx_State_CAN2, rtd_new_msg_Rx_l);

    /* End of Outputs for SubSystem: '<S166>/Reception substasks' */

    /* Outputs for Enabled SubSystem: '<S166>/Transmission subtasks' */
    Transmissionsubtasks(rtb_Equal1_ie, rtu_TimeMark,
                         &localB->Transmissionsubtasks_l,
                         &localC->Transmissionsubtasks_l,
                         &localDW->Transmissionsubtasks_l, rtd_Board_ID,
                         rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                         rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                         rtd_Tx_msg_count_CAN2, rtd_basic_cycle_count);

    /* End of Outputs for SubSystem: '<S166>/Transmission subtasks' */
  } else {
    if (localDW->COMMTaskSyncbc0_MODE) {
      COMMTaskSyncbc0_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S163>/COMM Task - Sync bc 0' */
}

/*
 * Disable for enable system:
 *    '<S167>/Transmission subtasks'
 *    '<S168>/Transmission subtasks'
 *    '<S169>/Transmission subtasks'
 */
void Transmissionsubtasks_l_Disable(rtB_Transmissionsubtasks_f *localB,
  rtDW_Transmissionsubtasks_h *localDW)
{
  /* Disable for Enabled SubSystem: '<S202>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for Outport: '<S204>/Send CAN1' */
    localB->Equal7_m = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S202>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S202>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for Outport: '<S205>/Send CAN2' */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S202>/Check msg transmission CAN2' */

  /* Disable for Outport: '<S202>/Send CAN1' */
  localB->Equal7_m = false;

  /* Disable for Outport: '<S202>/Send CAN2' */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S167>/Transmission subtasks'
 *    '<S168>/Transmission subtasks'
 *    '<S169>/Transmission subtasks'
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

  /* Outputs for Enabled SubSystem: '<S167>/Transmission subtasks' incorporates:
   *  EnablePort: '<S202>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Transmissionsubtasks_MODE) {
      localDW->Transmissionsubtasks_MODE = true;
    }

    /* RelationalOperator: '<S202>/Equal2' */
    rtb_Equal2_hm = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S202>/Msg_Value_Data_Encoded' incorporates:
     *  EnablePort: '<S206>/Enable'
     */
    /* RelationalOperator: '<S202>/Equal16' incorporates:
     *  Constant: '<S206>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);

      /* DataStoreRead: '<S206>/Data Store Read' incorporates:
       *  Constant: '<S206>/Constant'
       */
      localB->DataStoreRead = *rtd_Own_Vote;
    }

    /* End of RelationalOperator: '<S202>/Equal16' */
    /* End of Outputs for SubSystem: '<S202>/Msg_Value_Data_Encoded' */

    /* Outputs for Enabled SubSystem: '<S202>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S204>/Enable'
     */
    /* Logic: '<S202>/AND' incorporates:
     *  Constant: '<S202>/Constant6'
     *  Constant: '<S204>/Constant22'
     *  Constant: '<S204>/Constant24'
     *  Constant: '<S204>/Constant8'
     *  Math: '<S204>/Mod'
     *  RelationalOperator: '<S202>/GreaterThan2'
     *  RelationalOperator: '<S204>/Equal4'
     *  Sum: '<S204>/Minus'
     */
    if (rtb_Equal2_hm && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN1_MODE) {
        localDW->CheckmsgtransmissionCAN1_MODE = true;
      }

      /* Sum: '<S204>/Minus2' incorporates:
       *  Constant: '<S204>/Constant'
       */
      rtb_Minus2_g = rtu_Time_Mark + COMM_Phase_init1;

      /* Outputs for Enabled SubSystem: '<S204>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S207>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_g, COMM_Phase1) ==
          0.0) {
        /* DataTypeConversion: '<S207>/Cast4' */
        rtb_Cast4_d = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S208>/Bit Shift1' */
        BitShift1(rtb_Cast4_d, &localB->BitShift1_b);

        /* End of Outputs for SubSystem: '<S208>/Bit Shift1' */

        /* DataTypeConversion: '<S207>/Cast1' */
        rtb_Cast1_g = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S208>/Bit Shift' */
        BitShift4(rtb_Cast1_g, &localB->BitShift_o);

        /* End of Outputs for SubSystem: '<S208>/Bit Shift' */

        /* DataStoreWrite: '<S207>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S207>/Cast16'
         *  Sum: '<S208>/Minus'
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

        /* DataStoreWrite: '<S207>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S204>/TX buffer update CAN1' */

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
      localB->Equal7_m = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_g,
        COMM_Phase1) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN1_MODE) {
        /* Disable for Outport: '<S204>/Send CAN1' */
        localB->Equal7_m = false;
        localDW->CheckmsgtransmissionCAN1_MODE = false;
      }
    }

    /* End of Logic: '<S202>/AND' */
    /* End of Outputs for SubSystem: '<S202>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S202>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S205>/Enable'
     */
    /* Logic: '<S202>/AND1' incorporates:
     *  Constant: '<S202>/Constant7'
     *  Constant: '<S205>/Constant22'
     *  Constant: '<S205>/Constant24'
     *  Constant: '<S205>/Constant8'
     *  Math: '<S205>/Mod'
     *  RelationalOperator: '<S202>/GreaterThan3'
     *  RelationalOperator: '<S205>/Equal4'
     *  Sum: '<S205>/Minus'
     */
    if (rtb_Equal2_hm && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN2_MODE) {
        localDW->CheckmsgtransmissionCAN2_MODE = true;
      }

      /* Sum: '<S205>/Minus2' incorporates:
       *  Constant: '<S205>/Constant'
       */
      rtb_Minus2_g = rtu_Time_Mark + COMM_Phase_init2;

      /* Outputs for Enabled SubSystem: '<S205>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S213>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Minus2_g, COMM_Phase2) ==
          0.0) {
        /* DataTypeConversion: '<S213>/Cast18' */
        rtb_Cast18_d = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S214>/Bit Shift1' */
        BitShift1(rtb_Cast18_d, &localB->BitShift1_f);

        /* End of Outputs for SubSystem: '<S214>/Bit Shift1' */

        /* DataTypeConversion: '<S213>/Cast9' */
        rtb_Cast9_i = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S214>/Bit Shift' */
        BitShift4(rtb_Cast9_i, &localB->BitShift_i);

        /* End of Outputs for SubSystem: '<S214>/Bit Shift' */

        /* DataStoreWrite: '<S213>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S213>/Cast17'
         *  Sum: '<S214>/Minus'
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

        /* DataStoreWrite: '<S213>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S205>/TX buffer update CAN2' */

      /* RelationalOperator: '<S205>/Equal7' incorporates:
       *  Constant: '<S205>/Constant11'
       *  Constant: '<S205>/Constant22'
       *  Constant: '<S205>/Constant24'
       *  Constant: '<S205>/Constant27'
       *  Constant: '<S205>/Constant8'
       *  Math: '<S205>/Mod'
       *  Math: '<S205>/Mod1'
       *  RelationalOperator: '<S205>/Equal4'
       *  Sum: '<S205>/Minus'
       *  Sum: '<S205>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Minus2_g,
        COMM_Phase2) == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN2_MODE) {
        /* Disable for Outport: '<S205>/Send CAN2' */
        localB->Equal7 = false;
        localDW->CheckmsgtransmissionCAN2_MODE = false;
      }
    }

    /* End of Logic: '<S202>/AND1' */
    /* End of Outputs for SubSystem: '<S202>/Check msg transmission CAN2' */
  } else {
    if (localDW->Transmissionsubtasks_MODE) {
      Transmissionsubtasks_l_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S167>/Transmission subtasks' */
}

/*
 * Output and update for atomic system:
 *    '<S269>/Bit Shift'
 *    '<S281>/Bit Shift'
 *    '<S305>/Bit Shift'
 *    '<S317>/Bit Shift'
 *    '<S334>/Bit Shift'
 *    '<S346>/Bit Shift'
 *    '<S363>/Bit Shift'
 *    '<S375>/Bit Shift'
 *    '<S488>/Bit Shift'
 *    '<S500>/Bit Shift'
 *    ...
 */
void BitShift(uint8_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S271>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S276>:1' */
  /* '<S276>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S269>/Bit Shift1'
 *    '<S281>/Bit Shift1'
 *    '<S305>/Bit Shift1'
 *    '<S317>/Bit Shift1'
 *    '<S334>/Bit Shift1'
 *    '<S346>/Bit Shift1'
 *    '<S363>/Bit Shift1'
 *    '<S375>/Bit Shift1'
 *    '<S488>/Bit Shift1'
 *    '<S500>/Bit Shift1'
 *    ...
 */
void BitShift1_m(uint8_T rtu_u, rtB_BitShift1_j *localB)
{
  /* MATLAB Function: '<S272>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S277>:1' */
  /* '<S277>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 5);
}

/*
 * Output and update for atomic system:
 *    '<S269>/Bit Shift2'
 *    '<S281>/Bit Shift2'
 *    '<S305>/Bit Shift2'
 *    '<S317>/Bit Shift2'
 *    '<S334>/Bit Shift2'
 *    '<S346>/Bit Shift2'
 *    '<S363>/Bit Shift2'
 *    '<S375>/Bit Shift2'
 *    '<S488>/Bit Shift2'
 *    '<S500>/Bit Shift2'
 *    ...
 */
void BitShift2(uint8_T rtu_u, rtB_BitShift2 *localB)
{
  /* MATLAB Function: '<S273>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S278>:1' */
  /* '<S278>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 4);
}

/*
 * Disable for enable system:
 *    '<S264>/Demux message CAN1 and check coherence'
 *    '<S483>/Demux message CAN1 and check coherence'
 *    '<S562>/Demux message CAN1 and check coherence'
 *    '<S591>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andchec_Disable(rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW)
{
  /* Disable for Outport: '<S266>/CAN1_msg_coherent' */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcoher_f = false;
}

/*
 * Output and update for enable system:
 *    '<S264>/Demux message CAN1 and check coherence'
 *    '<S483>/Demux message CAN1 and check coherence'
 *    '<S562>/Demux message CAN1 and check coherence'
 *    '<S591>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoheren(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, rtB_DemuxmessageCAN1andcheckcoh *localB,
  rtDW_DemuxmessageCAN1andcheckco *localDW, real_T *rtd_msg_count_DEBUG_i)
{
  /* Outputs for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S266>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcoher_f) {
      localDW->DemuxmessageCAN1andcheckcoher_f = true;
    }

    /* Outputs for Atomic SubSystem: '<S269>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_f);

    /* End of Outputs for SubSystem: '<S269>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S269>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_f.y, &localB->BitShift1_mg);

    /* End of Outputs for SubSystem: '<S269>/Bit Shift1' */

    /* Switch: '<S270>/Switch' incorporates:
     *  Constant: '<S270>/Constant'
     *  Constant: '<S270>/Constant1'
     *  RelationalOperator: '<S270>/GreaterThan'
     *  Sum: '<S270>/Plus'
     */
    if (localB->BitShift1_mg.y > 1.0) {
      *rtd_msg_count_DEBUG_i += 1.0;
    }

    /* End of Switch: '<S270>/Switch' */

    /* Outputs for Atomic SubSystem: '<S269>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_d);

    /* End of Outputs for SubSystem: '<S269>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S269>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_c);

    /* End of Outputs for SubSystem: '<S269>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S269>/Bit Shift2' */
    BitShift2(localB->BitShift4_c.y, &localB->BitShift2_n);

    /* End of Outputs for SubSystem: '<S269>/Bit Shift2' */

    /* Logic: '<S266>/AND' incorporates:
     *  RelationalOperator: '<S266>/Equal'
     *  RelationalOperator: '<S266>/Equal1'
     */
    localB->AND = ((localB->BitShift_d.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_n.y == rtu_expected_board_id));

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion: '<S266>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S266>/Constant' */
    localB->Constant = ((uint8_T)0U);
  } else {
    if (localDW->DemuxmessageCAN1andcheckcoher_f) {
      DemuxmessageCAN1andchec_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S264>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S264>/Demux message CAN1 and check coherence1'
 *    '<S483>/Demux message CAN1 and check coherence1'
 *    '<S562>/Demux message CAN1 and check coherence1'
 *    '<S591>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_l_Disable(rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW)
{
  /* Disable for Outport: '<S267>/CAN2_msg_coherent' */
  localB->AND = false;
  localDW->DemuxmessageCAN1andcheckcohe_me = false;
}

/*
 * Output and update for enable system:
 *    '<S264>/Demux message CAN1 and check coherence1'
 *    '<S483>/Demux message CAN1 and check coherence1'
 *    '<S562>/Demux message CAN1 and check coherence1'
 *    '<S591>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_p(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle, real_T
  rtu_expected_board_id, rtB_DemuxmessageCAN1andcheckc_k *localB,
  rtDW_DemuxmessageCAN1andcheck_o *localDW, real_T *rtd_msg_count_DEBUG_i)
{
  /* Outputs for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S267>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcohe_me) {
      localDW->DemuxmessageCAN1andcheckcohe_me = true;
    }

    /* Outputs for Atomic SubSystem: '<S281>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S281>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S281>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_e);

    /* End of Outputs for SubSystem: '<S281>/Bit Shift1' */

    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S282>/Constant'
     *  Constant: '<S282>/Constant1'
     *  RelationalOperator: '<S282>/GreaterThan'
     *  Sum: '<S282>/Plus'
     */
    if (localB->BitShift1_e.y > 1.0) {
      *rtd_msg_count_DEBUG_i += 1.0;
    }

    /* End of Switch: '<S282>/Switch' */

    /* Outputs for Atomic SubSystem: '<S281>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S281>/Bit Shift' */

    /* Outputs for Atomic SubSystem: '<S281>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_h);

    /* End of Outputs for SubSystem: '<S281>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S281>/Bit Shift2' */
    BitShift2(localB->BitShift4_h.y, &localB->BitShift2_d);

    /* End of Outputs for SubSystem: '<S281>/Bit Shift2' */

    /* Logic: '<S267>/AND' incorporates:
     *  RelationalOperator: '<S267>/Equal'
     *  RelationalOperator: '<S267>/Equal1'
     */
    localB->AND = ((localB->BitShift_h.y == rtu_expected_basic_cycle) &&
                   (localB->BitShift2_d.y == rtu_expected_board_id));

    /* SignalConversion: '<S267>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion: '<S267>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion: '<S267>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion: '<S267>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion: '<S267>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion: '<S267>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion: '<S267>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S267>/Constant' */
    localB->Constant = ((uint8_T)0U);
  } else {
    if (localDW->DemuxmessageCAN1andcheckcohe_me) {
      DemuxmessageCAN1andch_l_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
}

/*
 * Output and update for enable system:
 *    '<S174>/Reset Tx msg counter'
 *    '<S178>/Reset Tx msg counter'
 *    '<S180>/Reset Tx msg counter'
 *    '<S182>/Reset Tx msg counter'
 *    '<S393>/Reset Tx msg counter'
 *    '<S395>/Reset Tx msg counter'
 *    '<S396>/Reset Tx msg counter'
 *    '<S397>/Reset Tx msg counter'
 *    '<S634>/Reset Tx msg counter'
 *    '<S694>/Reset Tx msg counter'
 *    '<S695>/Reset Tx msg counter'
 */
void ResetTxmsgcounter(boolean_T rtu_Enable, real_T *rtd_Tx_msg_count_CAN1,
  real_T *rtd_Tx_msg_count_CAN2)
{
  /* Outputs for Enabled SubSystem: '<S174>/Reset Tx msg counter' incorporates:
   *  EnablePort: '<S265>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S265>/Data Store Write2' incorporates:
     *  Constant: '<S265>/Constant1'
     */
    *rtd_Tx_msg_count_CAN2 = 1.0;

    /* DataStoreWrite: '<S265>/Data Store Write1' incorporates:
     *  Constant: '<S265>/Constant6'
     */
    *rtd_Tx_msg_count_CAN1 = 1.0;
  }

  /* End of Outputs for SubSystem: '<S174>/Reset Tx msg counter' */
}

/*
 * Output and update for enable system:
 *    '<S294>/Desync_Negative'
 *    '<S623>/Desync_Negative'
 *    '<S687>/Desync_Negative'
 *    '<S776>/Desync_Negative'
 */
void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time, real_T
                     *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks)
{
  /* Outputs for Enabled SubSystem: '<S294>/Desync_Negative' incorporates:
   *  EnablePort: '<S295>/Enable'
   */
  if (rtu_Enable) {
    /* DataTypeConversion: '<S295>/Cast' incorporates:
     *  Sum: '<S295>/Minus'
     */
    *rtd_Local_Ticks = (uint16_T)(rtu_Current_Local_Time + *rtd_Desync_Ticks);
  }

  /* End of Outputs for SubSystem: '<S294>/Desync_Negative' */
}

/*
 * Disable for enable system:
 *    '<S301>/Demux message CAN1 and check coherence'
 *    '<S330>/Demux message CAN1 and check coherence'
 *    '<S359>/Demux message CAN1 and check coherence'
 *    '<S516>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andch_p_Disable(rtB_DemuxmessageCAN1andcheckc_c *localB,
  rtDW_DemuxmessageCAN1andcheck_f *localDW)
{
  /* Disable for Outport: '<S303>/CAN1_msg_coherent' */
  localB->Equal = false;
  localDW->DemuxmessageCAN1andcheckcohe_dz = false;
}

/*
 * Output and update for enable system:
 *    '<S301>/Demux message CAN1 and check coherence'
 *    '<S330>/Demux message CAN1 and check coherence'
 *    '<S359>/Demux message CAN1 and check coherence'
 *    '<S516>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoher_e(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_board_id,
  rtB_DemuxmessageCAN1andcheckc_c *localB, rtDW_DemuxmessageCAN1andcheck_f
  *localDW, real_T *rtd_msg_count_DEBUG_i)
{
  /* Outputs for Enabled SubSystem: '<S301>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S303>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcohe_dz) {
      localDW->DemuxmessageCAN1andcheckcohe_dz = true;
    }

    /* Outputs for Atomic SubSystem: '<S305>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_a);

    /* End of Outputs for SubSystem: '<S305>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S305>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_a.y, &localB->BitShift1_i);

    /* End of Outputs for SubSystem: '<S305>/Bit Shift1' */

    /* Switch: '<S306>/Switch' incorporates:
     *  Constant: '<S306>/Constant'
     *  Constant: '<S306>/Constant1'
     *  RelationalOperator: '<S306>/GreaterThan'
     *  Sum: '<S306>/Plus'
     */
    if (localB->BitShift1_i.y > 1.0) {
      *rtd_msg_count_DEBUG_i += 1.0;
    }

    /* End of Switch: '<S306>/Switch' */

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion: '<S303>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S303>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S305>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_i);

    /* End of Outputs for SubSystem: '<S305>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S305>/Bit Shift2' */
    BitShift2(localB->BitShift4_i.y, &localB->BitShift2_e);

    /* End of Outputs for SubSystem: '<S305>/Bit Shift2' */

    /* RelationalOperator: '<S303>/Equal' */
    localB->Equal = (localB->BitShift2_e.y == rtu_expected_board_id);

    /* Outputs for Atomic SubSystem: '<S305>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_b);

    /* End of Outputs for SubSystem: '<S305>/Bit Shift' */
  } else {
    if (localDW->DemuxmessageCAN1andcheckcohe_dz) {
      DemuxmessageCAN1andch_p_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S301>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S301>/Demux message CAN1 and check coherence1'
 *    '<S330>/Demux message CAN1 and check coherence1'
 *    '<S359>/Demux message CAN1 and check coherence1'
 *    '<S516>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_a_Disable(rtB_DemuxmessageCAN1andcheckc_p *localB,
  rtDW_DemuxmessageCAN1andcheck_c *localDW)
{
  /* Disable for Outport: '<S304>/CAN2_msg_coherent' */
  localB->Equal = false;
  localDW->DemuxmessageCAN1andcheckcoher_g = false;
}

/*
 * Output and update for enable system:
 *    '<S301>/Demux message CAN1 and check coherence1'
 *    '<S330>/Demux message CAN1 and check coherence1'
 *    '<S359>/Demux message CAN1 and check coherence1'
 *    '<S516>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_m(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_board_id,
  rtB_DemuxmessageCAN1andcheckc_p *localB, rtDW_DemuxmessageCAN1andcheck_c
  *localDW, real_T *rtd_msg_count_DEBUG_i)
{
  /* Outputs for Enabled SubSystem: '<S301>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S304>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcoher_g) {
      localDW->DemuxmessageCAN1andcheckcoher_g = true;
    }

    /* Outputs for Atomic SubSystem: '<S317>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_e);

    /* End of Outputs for SubSystem: '<S317>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S317>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_e.y, &localB->BitShift1_g);

    /* End of Outputs for SubSystem: '<S317>/Bit Shift1' */

    /* Switch: '<S318>/Switch' incorporates:
     *  Constant: '<S318>/Constant'
     *  Constant: '<S318>/Constant1'
     *  RelationalOperator: '<S318>/GreaterThan'
     *  Sum: '<S318>/Plus'
     */
    if (localB->BitShift1_g.y > 1.0) {
      *rtd_msg_count_DEBUG_i += 1.0;
    }

    /* End of Switch: '<S318>/Switch' */

    /* SignalConversion: '<S304>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion: '<S304>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion: '<S304>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion: '<S304>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion: '<S304>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion: '<S304>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion: '<S304>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S304>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S317>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_k);

    /* End of Outputs for SubSystem: '<S317>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S317>/Bit Shift2' */
    BitShift2(localB->BitShift4_k.y, &localB->BitShift2_b);

    /* End of Outputs for SubSystem: '<S317>/Bit Shift2' */

    /* RelationalOperator: '<S304>/Equal' */
    localB->Equal = (localB->BitShift2_b.y == rtu_expected_board_id);

    /* Outputs for Atomic SubSystem: '<S317>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_h);

    /* End of Outputs for SubSystem: '<S317>/Bit Shift' */
  } else {
    if (localDW->DemuxmessageCAN1andcheckcoher_g) {
      DemuxmessageCAN1andch_a_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S301>/Demux message CAN1 and check coherence1' */
}

/*
 * Disable for enable system:
 *    '<S178>/Process_Messages1'
 *    '<S180>/Process_Messages'
 *    '<S182>/Process_Messages'
 */
void Process_Messages1_Disable(rtB_Process_Messages1 *localB,
  rtDW_Process_Messages1 *localDW)
{
  /* Disable for Enabled SubSystem: '<S301>/Demux message CAN1 and check coherence' */
  if (localDW->DemuxmessageCAN1andcheckcohe_eo.DemuxmessageCAN1andcheckcohe_dz)
  {
    DemuxmessageCAN1andch_p_Disable(&localB->DemuxmessageCAN1andcheckcohe_eo,
      &localDW->DemuxmessageCAN1andcheckcohe_eo);
  }

  /* End of Disable for SubSystem: '<S301>/Demux message CAN1 and check coherence' */

  /* Disable for Enabled SubSystem: '<S301>/Demux message CAN1 and check coherence1' */
  if (localDW->DemuxmessageCAN1andcheckcohe_ml.DemuxmessageCAN1andcheckcoher_g)
  {
    DemuxmessageCAN1andch_a_Disable(&localB->DemuxmessageCAN1andcheckcohe_ml,
      &localDW->DemuxmessageCAN1andcheckcohe_ml);
  }

  /* End of Disable for SubSystem: '<S301>/Demux message CAN1 and check coherence1' */
  localDW->Process_Messages1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S178>/Process_Messages1'
 *    '<S180>/Process_Messages'
 *    '<S182>/Process_Messages'
 */
void Process_Messages1(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
  boolean_T rtu_new_CAN2_msg, const msg_buffer_type *rtu_Rx_msg_CAN1, const
  msg_buffer_type *rtu_Rx_Msg_CAN2, real_T rtu_expected_board_id,
  rtB_Process_Messages1 *localB, rtDW_Process_Messages1 *localDW,
  msg_buffer_type *rtd_Msg_Rx_d, boolean_T *rtd_Toggle_Pin_A0, real_T
  *rtd_msg_count_DEBUG_i, boolean_T *rtd_new_msg_Rx_l)
{
  /* Outputs for Enabled SubSystem: '<S178>/Process_Messages1' incorporates:
   *  EnablePort: '<S301>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Process_Messages1_MODE) {
      localDW->Process_Messages1_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S301>/Demux message CAN1 and check coherence' */
    DemuxmessageCAN1andcheckcoher_e(rtu_new_CAN1_msg, rtu_Rx_msg_CAN1,
      rtu_expected_board_id, &localB->DemuxmessageCAN1andcheckcohe_eo,
      &localDW->DemuxmessageCAN1andcheckcohe_eo, rtd_msg_count_DEBUG_i);

    /* End of Outputs for SubSystem: '<S301>/Demux message CAN1 and check coherence' */

    /* Outputs for Enabled SubSystem: '<S301>/Demux message CAN1 and check coherence1' */
    DemuxmessageCAN1andcheckcoher_m(rtu_new_CAN2_msg, rtu_Rx_Msg_CAN2,
      rtu_expected_board_id, &localB->DemuxmessageCAN1andcheckcohe_ml,
      &localDW->DemuxmessageCAN1andcheckcohe_ml, rtd_msg_count_DEBUG_i);

    /* End of Outputs for SubSystem: '<S301>/Demux message CAN1 and check coherence1' */

    /* Switch: '<S301>/Switch' incorporates:
     *  DataStoreWrite: '<S301>/Data Store Write'
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

    /* End of Switch: '<S301>/Switch' */

    /* Logic: '<S301>/OR' */
    *rtd_new_msg_Rx_l = (localB->DemuxmessageCAN1andcheckcohe_eo.Equal ||
                         localB->DemuxmessageCAN1andcheckcohe_ml.Equal);

    /* DataStoreWrite: '<S301>/Data Store Write3' incorporates:
     *  Constant: '<S301>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = true;
  } else {
    if (localDW->Process_Messages1_MODE) {
      Process_Messages1_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S178>/Process_Messages1' */
}

/*
 * Disable for enable system:
 *    '<S401>/Check msg transmission CAN1'
 *    '<S446>/Check msg transmission CAN1'
 *    '<S698>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN_Disable(rtB_CheckmsgtransmissionCAN1 *localB,
  rtDW_CheckmsgtransmissionCAN1 *localDW)
{
  /* Disable for Outport: '<S403>/Send CAN1' */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S401>/Check msg transmission CAN1'
 *    '<S446>/Check msg transmission CAN1'
 *    '<S698>/Check msg transmission CAN1'
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

  /* Outputs for Enabled SubSystem: '<S401>/Check msg transmission CAN1' incorporates:
   *  EnablePort: '<S403>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->CheckmsgtransmissionCAN1_MODE) {
      localDW->CheckmsgtransmissionCAN1_MODE = true;
    }

    /* Sum: '<S403>/Minus2' incorporates:
     *  Constant: '<S403>/Constant'
     */
    rtb_Minus2_d = rtu_TimeMark + COMM_Phase_init1;

    /* Outputs for Enabled SubSystem: '<S403>/TX buffer update CAN1' incorporates:
     *  EnablePort: '<S406>/Enable'
     */
    /* RelationalOperator: '<S403>/Equal4' incorporates:
     *  Constant: '<S403>/Constant22'
     *  Constant: '<S403>/Constant24'
     *  Constant: '<S403>/Constant8'
     *  Math: '<S403>/Mod'
     *  Sum: '<S403>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_d, COMM_Phase1) ==
        0.0) {
      /* DataTypeConversion: '<S406>/Cast4' */
      rtb_Cast4_h = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S407>/Bit Shift1' */
      BitShift1(rtb_Cast4_h, &localB->BitShift1_g);

      /* End of Outputs for SubSystem: '<S407>/Bit Shift1' */

      /* DataTypeConversion: '<S406>/Cast1' */
      rtb_Cast1_h = (uint8_T)*rtd_Tx_msg_count_CAN1;

      /* Outputs for Atomic SubSystem: '<S407>/Bit Shift' */
      BitShift4(rtb_Cast1_h, &localB->BitShift_h);

      /* End of Outputs for SubSystem: '<S407>/Bit Shift' */

      /* DataStoreWrite: '<S406>/Data Store Write10' incorporates:
       *  DataTypeConversion: '<S406>/Cast16'
       *  Sum: '<S407>/Minus'
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

      /* DataStoreWrite: '<S406>/Data Store Write8' */
      *rtd_TxID_CAN1 = localC->Cast;
    }

    /* End of RelationalOperator: '<S403>/Equal4' */
    /* End of Outputs for SubSystem: '<S403>/TX buffer update CAN1' */

    /* RelationalOperator: '<S403>/Equal7' incorporates:
     *  Constant: '<S403>/Constant11'
     *  Constant: '<S403>/Constant27'
     *  Math: '<S403>/Mod1'
     *  Sum: '<S403>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_d, COMM_Phase1)
                      == 0.0);
  } else {
    if (localDW->CheckmsgtransmissionCAN1_MODE) {
      CheckmsgtransmissionCAN_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S401>/Check msg transmission CAN1' */
}

/*
 * Disable for enable system:
 *    '<S401>/Check msg transmission CAN2'
 *    '<S446>/Check msg transmission CAN2'
 *    '<S698>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionC_d_Disable(rtB_CheckmsgtransmissionCAN2 *localB,
  rtDW_CheckmsgtransmissionCAN2 *localDW)
{
  /* Disable for Outport: '<S404>/Send CAN2' */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN2_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S401>/Check msg transmission CAN2'
 *    '<S446>/Check msg transmission CAN2'
 *    '<S698>/Check msg transmission CAN2'
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

  /* Outputs for Enabled SubSystem: '<S401>/Check msg transmission CAN2' incorporates:
   *  EnablePort: '<S404>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->CheckmsgtransmissionCAN2_MODE) {
      localDW->CheckmsgtransmissionCAN2_MODE = true;
    }

    /* Sum: '<S404>/Minus2' incorporates:
     *  Constant: '<S404>/Constant'
     */
    rtb_Minus2_l = rtu_TimeMark + COMM_Phase_init2;

    /* Outputs for Enabled SubSystem: '<S404>/TX buffer update CAN2' incorporates:
     *  EnablePort: '<S412>/Enable'
     */
    /* RelationalOperator: '<S404>/Equal4' incorporates:
     *  Constant: '<S404>/Constant22'
     *  Constant: '<S404>/Constant24'
     *  Constant: '<S404>/Constant8'
     *  Math: '<S404>/Mod'
     *  Sum: '<S404>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtb_Minus2_l, COMM_Phase2) ==
        0.0) {
      /* DataTypeConversion: '<S412>/Cast18' */
      rtb_Cast18_e = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S413>/Bit Shift1' */
      BitShift1(rtb_Cast18_e, &localB->BitShift1_i);

      /* End of Outputs for SubSystem: '<S413>/Bit Shift1' */

      /* DataTypeConversion: '<S412>/Cast9' */
      rtb_Cast9_k = (uint8_T)*rtd_Tx_msg_count_CAN2;

      /* Outputs for Atomic SubSystem: '<S413>/Bit Shift' */
      BitShift4(rtb_Cast9_k, &localB->BitShift_p);

      /* End of Outputs for SubSystem: '<S413>/Bit Shift' */

      /* DataStoreWrite: '<S412>/Data Store Write4' incorporates:
       *  DataTypeConversion: '<S412>/Cast17'
       *  Sum: '<S413>/Minus'
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

      /* DataStoreWrite: '<S412>/Data Store Write5' */
      *rtd_TxID_CAN2 = localC->Cast8;
    }

    /* End of RelationalOperator: '<S404>/Equal4' */
    /* End of Outputs for SubSystem: '<S404>/TX buffer update CAN2' */

    /* RelationalOperator: '<S404>/Equal7' incorporates:
     *  Constant: '<S404>/Constant11'
     *  Constant: '<S404>/Constant27'
     *  Math: '<S404>/Mod1'
     *  Sum: '<S404>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtb_Minus2_l, COMM_Phase2)
                      == 0.0);
  } else {
    if (localDW->CheckmsgtransmissionCAN2_MODE) {
      CheckmsgtransmissionC_d_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S401>/Check msg transmission CAN2' */
}

/*
 * Disable for enable system:
 *    '<S393>/Process_Messages'
 *    '<S397>/Process_Messages'
 */
void Process_Messages_Disable(rtB_Process_Messages *localB,
  rtDW_Process_Messages *localDW)
{
  /* Disable for Enabled SubSystem: '<S483>/Demux message CAN1 and check coherence' */
  if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcoher_f)
  {
    DemuxmessageCAN1andchec_Disable(&localB->DemuxmessageCAN1andcheckcoher_k,
      &localDW->DemuxmessageCAN1andcheckcoher_k);
  }

  /* End of Disable for SubSystem: '<S483>/Demux message CAN1 and check coherence' */

  /* Disable for Enabled SubSystem: '<S483>/Demux message CAN1 and check coherence1' */
  if (localDW->DemuxmessageCAN1andcheckcohe_et.DemuxmessageCAN1andcheckcohe_me)
  {
    DemuxmessageCAN1andch_l_Disable(&localB->DemuxmessageCAN1andcheckcohe_et,
      &localDW->DemuxmessageCAN1andcheckcohe_et);
  }

  /* End of Disable for SubSystem: '<S483>/Demux message CAN1 and check coherence1' */
  localDW->Process_Messages_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S393>/Process_Messages'
 *    '<S397>/Process_Messages'
 */
void Process_Messages(boolean_T rtu_Enable, boolean_T rtu_new_CAN1_msg,
                      boolean_T rtu_new_CAN2_msg, const msg_buffer_type
                      *rtu_Rx_msg_CAN1, const msg_buffer_type *rtu_Rx_Msg_CAN2,
                      real_T rtu_expected_basic_cycle, real_T
                      rtu_expected_board_id, rtB_Process_Messages *localB,
                      rtDW_Process_Messages *localDW, msg_buffer_type
                      *rtd_Msg_Rx_f, boolean_T *rtd_Toggle_Pin_A0, real_T
                      *rtd_msg_count_DEBUG_i, boolean_T *rtd_new_msg_Rx_g)
{
  /* Outputs for Enabled SubSystem: '<S393>/Process_Messages' incorporates:
   *  EnablePort: '<S483>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Process_Messages_MODE) {
      localDW->Process_Messages_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S483>/Demux message CAN1 and check coherence' */
    DemuxmessageCAN1andcheckcoheren(rtu_new_CAN1_msg, rtu_Rx_msg_CAN1,
      rtu_expected_basic_cycle, rtu_expected_board_id,
      &localB->DemuxmessageCAN1andcheckcoher_k,
      &localDW->DemuxmessageCAN1andcheckcoher_k, rtd_msg_count_DEBUG_i);

    /* End of Outputs for SubSystem: '<S483>/Demux message CAN1 and check coherence' */

    /* Outputs for Enabled SubSystem: '<S483>/Demux message CAN1 and check coherence1' */
    DemuxmessageCAN1andcheckcoher_p(rtu_new_CAN2_msg, rtu_Rx_Msg_CAN2,
      rtu_expected_basic_cycle, rtu_expected_board_id,
      &localB->DemuxmessageCAN1andcheckcohe_et,
      &localDW->DemuxmessageCAN1andcheckcohe_et, rtd_msg_count_DEBUG_i);

    /* End of Outputs for SubSystem: '<S483>/Demux message CAN1 and check coherence1' */

    /* Switch: '<S483>/Switch' incorporates:
     *  DataStoreWrite: '<S483>/Data Store Write'
     */
    if (localB->DemuxmessageCAN1andcheckcoher_k.AND) {
      rtd_Msg_Rx_f->Buffer_1 = localB->DemuxmessageCAN1andcheckcoher_k.Constant;
      rtd_Msg_Rx_f->Buffer_2 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_2;
      rtd_Msg_Rx_f->Buffer_3 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_3;
      rtd_Msg_Rx_f->Buffer_4 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_4;
      rtd_Msg_Rx_f->Buffer_5 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_5;
      rtd_Msg_Rx_f->Buffer_6 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_6;
      rtd_Msg_Rx_f->Buffer_7 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_7;
      rtd_Msg_Rx_f->Buffer_8 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_8;
    } else {
      rtd_Msg_Rx_f->Buffer_1 = localB->DemuxmessageCAN1andcheckcohe_et.Constant;
      rtd_Msg_Rx_f->Buffer_2 = localB->DemuxmessageCAN1andcheckcohe_et.Buffer_2;
      rtd_Msg_Rx_f->Buffer_3 = localB->DemuxmessageCAN1andcheckcohe_et.Buffer_3;
      rtd_Msg_Rx_f->Buffer_4 = localB->DemuxmessageCAN1andcheckcohe_et.Buffer_4;
      rtd_Msg_Rx_f->Buffer_5 = localB->DemuxmessageCAN1andcheckcohe_et.Buffer_5;
      rtd_Msg_Rx_f->Buffer_6 = localB->DemuxmessageCAN1andcheckcohe_et.Buffer_6;
      rtd_Msg_Rx_f->Buffer_7 = localB->DemuxmessageCAN1andcheckcohe_et.Buffer_7;
      rtd_Msg_Rx_f->Buffer_8 = localB->DemuxmessageCAN1andcheckcohe_et.Buffer_8;
    }

    /* End of Switch: '<S483>/Switch' */

    /* Logic: '<S483>/OR' */
    *rtd_new_msg_Rx_g = (localB->DemuxmessageCAN1andcheckcoher_k.AND ||
                         localB->DemuxmessageCAN1andcheckcohe_et.AND);

    /* DataStoreWrite: '<S483>/Data Store Write3' incorporates:
     *  Constant: '<S483>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = true;
  } else {
    if (localDW->Process_Messages_MODE) {
      Process_Messages_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S393>/Process_Messages' */
}

/*
 * Output and update for enable system:
 *    '<S394>/Reset Variables'
 *    '<S693>/Reset Variables'
 */
void ResetVariables(boolean_T rtu_Enable, boolean_T *rtd_BC1_Sync_processed,
                    boolean_T *rtd_Desync_Positive, boolean_T *rtd_Toggle_Pin_A0)
{
  /* Outputs for Enabled SubSystem: '<S394>/Reset Variables' incorporates:
   *  EnablePort: '<S515>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S515>/Data Store Write' incorporates:
     *  Constant: '<S515>/Constant'
     */
    *rtd_Desync_Positive = false;

    /* DataStoreWrite: '<S515>/Data Store Write1' incorporates:
     *  Constant: '<S515>/Constant'
     */
    *rtd_BC1_Sync_processed = false;

    /* DataStoreWrite: '<S515>/Data Store Write3' incorporates:
     *  Constant: '<S515>/Constant3'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Outputs for SubSystem: '<S394>/Reset Variables' */
}

/*
 * Output and update for enable system:
 *    '<S398>/Local Time Update'
 *    '<S696>/Local Time Update'
 */
void LocalTimeUpdate(boolean_T rtu_Enable, real_T rtu_Time_Mark, boolean_T
                     *rtd_BC1_Sync_processed, boolean_T *rtd_Desync_Positive,
                     real_T *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks,
                     boolean_T *rtd_Toggle_Pin_A0, boolean_T *rtd_Toggle_Pin_D10)
{
  boolean_T rtb_NOT_ek;

  /* Outputs for Enabled SubSystem: '<S398>/Local Time Update' incorporates:
   *  EnablePort: '<S623>/Enable'
   */
  if (rtu_Enable) {
    /* RelationalOperator: '<S623>/GreaterThan' incorporates:
     *  Constant: '<S623>/Constant4'
     */
    *rtd_Desync_Positive = (*rtd_Desync_Ticks > 0.0);

    /* Logic: '<S623>/NOT' */
    rtb_NOT_ek = !*rtd_Desync_Positive;

    /* Outputs for Enabled SubSystem: '<S623>/Desync_Negative' */
    Desync_Negative(rtb_NOT_ek, rtu_Time_Mark, rtd_Desync_Ticks, rtd_Local_Ticks);

    /* End of Outputs for SubSystem: '<S623>/Desync_Negative' */

    /* DataStoreWrite: '<S623>/Data Store Write13' incorporates:
     *  Constant: '<S623>/Constant3'
     */
    *rtd_BC1_Sync_processed = true;

    /* DataStoreWrite: '<S623>/Data Store Write3' incorporates:
     *  Constant: '<S623>/Constant1'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S623>/Data Store Write1' incorporates:
     *  Constant: '<S623>/Constant2'
     */
    *rtd_Toggle_Pin_D10 = true;
  }

  /* End of Outputs for SubSystem: '<S398>/Local Time Update' */
}

/*
 * Disable for enable system:
 *    '<S657>/Demux message CAN1 and check coherence'
 *    '<S746>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andc_ls_Disable(rtB_DemuxmessageCAN1andcheckc_a *localB,
  rtDW_DemuxmessageCAN1andcheck_k *localDW)
{
  /* Disable for Outport: '<S659>/CAN1_msg_coherent' */
  localB->Equal1 = false;
  localDW->DemuxmessageCAN1andcheckcohe_mm = false;
}

/*
 * Output and update for enable system:
 *    '<S657>/Demux message CAN1 and check coherence'
 *    '<S746>/Demux message CAN1 and check coherence'
 */
void DemuxmessageCAN1andcheckcoher_d(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN1_Rx_msg, real_T rtu_expected_basic_cycle,
  rtB_DemuxmessageCAN1andcheckc_a *localB, rtDW_DemuxmessageCAN1andcheck_k
  *localDW, real_T *rtd_msg_count_DEBUG)
{
  /* Outputs for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence' incorporates:
   *  EnablePort: '<S659>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcohe_mm) {
      localDW->DemuxmessageCAN1andcheckcohe_mm = true;
    }

    /* Outputs for Atomic SubSystem: '<S662>/Bit Shift3' */
    BitShift3(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift3_p);

    /* End of Outputs for SubSystem: '<S662>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S662>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_p.y, &localB->BitShift1_b);

    /* End of Outputs for SubSystem: '<S662>/Bit Shift1' */

    /* Switch: '<S663>/Switch' incorporates:
     *  Constant: '<S663>/Constant'
     *  Constant: '<S663>/Constant1'
     *  RelationalOperator: '<S663>/GreaterThan'
     *  Sum: '<S663>/Plus'
     */
    if (localB->BitShift1_b.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S663>/Switch' */

    /* SignalConversion: '<S659>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN1_Rx_msg->Buffer_2;

    /* SignalConversion: '<S659>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN1_Rx_msg->Buffer_3;

    /* SignalConversion: '<S659>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN1_Rx_msg->Buffer_4;

    /* SignalConversion: '<S659>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN1_Rx_msg->Buffer_5;

    /* SignalConversion: '<S659>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN1_Rx_msg->Buffer_6;

    /* SignalConversion: '<S659>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN1_Rx_msg->Buffer_7;

    /* SignalConversion: '<S659>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN1_Rx_msg->Buffer_8;

    /* Constant: '<S659>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S662>/Bit Shift' */
    BitShift(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift_a);

    /* End of Outputs for SubSystem: '<S662>/Bit Shift' */

    /* RelationalOperator: '<S659>/Equal1' */
    localB->Equal1 = (localB->BitShift_a.y == rtu_expected_basic_cycle);

    /* Outputs for Atomic SubSystem: '<S662>/Bit Shift4' */
    BitShift4(rtu_CAN1_Rx_msg->Buffer_1, &localB->BitShift4_n);

    /* End of Outputs for SubSystem: '<S662>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S662>/Bit Shift2' */
    BitShift2(localB->BitShift4_n.y, &localB->BitShift2_j);

    /* End of Outputs for SubSystem: '<S662>/Bit Shift2' */
  } else {
    if (localDW->DemuxmessageCAN1andcheckcohe_mm) {
      DemuxmessageCAN1andc_ls_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S657>/Demux message CAN1 and check coherence' */
}

/*
 * Disable for enable system:
 *    '<S657>/Demux message CAN1 and check coherence1'
 *    '<S746>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andch_k_Disable(rtB_DemuxmessageCAN1andcheckc_i *localB,
  rtDW_DemuxmessageCAN1andcheck_b *localDW)
{
  /* Disable for Outport: '<S660>/CAN2_msg_coherent' */
  localB->Equal1 = false;
  localDW->DemuxmessageCAN1andcheckcohe_ek = false;
}

/*
 * Output and update for enable system:
 *    '<S657>/Demux message CAN1 and check coherence1'
 *    '<S746>/Demux message CAN1 and check coherence1'
 */
void DemuxmessageCAN1andcheckcoher_h(boolean_T rtu_Enable, const msg_buffer_type
  *rtu_CAN2_Rx_msg, real_T rtu_expected_basic_cycle,
  rtB_DemuxmessageCAN1andcheckc_i *localB, rtDW_DemuxmessageCAN1andcheck_b
  *localDW, real_T *rtd_msg_count_DEBUG)
{
  /* Outputs for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence1' incorporates:
   *  EnablePort: '<S660>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->DemuxmessageCAN1andcheckcohe_ek) {
      localDW->DemuxmessageCAN1andcheckcohe_ek = true;
    }

    /* Outputs for Atomic SubSystem: '<S674>/Bit Shift3' */
    BitShift3(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift3_e);

    /* End of Outputs for SubSystem: '<S674>/Bit Shift3' */

    /* Outputs for Atomic SubSystem: '<S674>/Bit Shift1' */
    BitShift1_m(localB->BitShift3_e.y, &localB->BitShift1_d);

    /* End of Outputs for SubSystem: '<S674>/Bit Shift1' */

    /* Switch: '<S675>/Switch' incorporates:
     *  Constant: '<S675>/Constant'
     *  Constant: '<S675>/Constant1'
     *  RelationalOperator: '<S675>/GreaterThan'
     *  Sum: '<S675>/Plus'
     */
    if (localB->BitShift1_d.y > 1.0) {
      *rtd_msg_count_DEBUG += 1.0;
    }

    /* End of Switch: '<S675>/Switch' */

    /* SignalConversion: '<S660>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_2 = rtu_CAN2_Rx_msg->Buffer_2;

    /* SignalConversion: '<S660>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_3 = rtu_CAN2_Rx_msg->Buffer_3;

    /* SignalConversion: '<S660>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_4 = rtu_CAN2_Rx_msg->Buffer_4;

    /* SignalConversion: '<S660>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_5 = rtu_CAN2_Rx_msg->Buffer_5;

    /* SignalConversion: '<S660>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_6 = rtu_CAN2_Rx_msg->Buffer_6;

    /* SignalConversion: '<S660>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_7 = rtu_CAN2_Rx_msg->Buffer_7;

    /* SignalConversion: '<S660>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' */
    localB->Buffer_8 = rtu_CAN2_Rx_msg->Buffer_8;

    /* Constant: '<S660>/Constant' */
    localB->Constant = ((uint8_T)0U);

    /* Outputs for Atomic SubSystem: '<S674>/Bit Shift' */
    BitShift(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift_k);

    /* End of Outputs for SubSystem: '<S674>/Bit Shift' */

    /* RelationalOperator: '<S660>/Equal1' */
    localB->Equal1 = (localB->BitShift_k.y == rtu_expected_basic_cycle);

    /* Outputs for Atomic SubSystem: '<S674>/Bit Shift4' */
    BitShift4(rtu_CAN2_Rx_msg->Buffer_1, &localB->BitShift4_k);

    /* End of Outputs for SubSystem: '<S674>/Bit Shift4' */

    /* Outputs for Atomic SubSystem: '<S674>/Bit Shift2' */
    BitShift2(localB->BitShift4_k.y, &localB->BitShift2_l);

    /* End of Outputs for SubSystem: '<S674>/Bit Shift2' */
  } else {
    if (localDW->DemuxmessageCAN1andcheckcohe_ek) {
      DemuxmessageCAN1andch_k_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
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
        /* Disable for Enabled SubSystem: '<S163>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S174>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_g,
                 &localDW->DemuxmessageCAN1andcheckcoher_g);
            }

            /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_p3,
                 &localDW->DemuxmessageCAN1andcheckcohe_p3);
            }

            /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S174>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S178>/Process_Messages1' */
          if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages1_c,
              &localDW->Process_Messages1_c);
          }

          /* End of Disable for SubSystem: '<S178>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
          if (localDW->Process_Messages_g.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_g,
              &localDW->Process_Messages_g);
          }

          /* End of Disable for SubSystem: '<S180>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S182>/Process_Messages' */
          if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
            Process_Messages1_Disable(&localB->Process_Messages_gc,
              &localDW->Process_Messages_gc);
          }

          /* End of Disable for SubSystem: '<S182>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S163>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
            &localDW->COMMTaskSyncbc0_b);
        }

        /* End of Disable for SubSystem: '<S163>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S167>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
              &localDW->Transmissionsubtasks_pw);
          }

          /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

          /* Disable for Outport: '<S167>/Send CAN1' */
          localB->Transmissionsubtasks_pw.Equal7_m = false;

          /* Disable for Outport: '<S167>/Receive CAN1' */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S167>/Send CAN2' */
          localB->Transmissionsubtasks_pw.Equal7 = false;

          /* Disable for Outport: '<S167>/Receive CAN2' */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S168>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
              &localDW->Transmissionsubtasks_d);
          }

          /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

          /* Disable for Outport: '<S168>/Send CAN1' */
          localB->Transmissionsubtasks_d.Equal7_m = false;

          /* Disable for Outport: '<S168>/Receive CAN1' */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for Outport: '<S168>/Send CAN2' */
          localB->Transmissionsubtasks_d.Equal7 = false;

          /* Disable for Outport: '<S168>/Receive CAN2' */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S169>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S169>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S169>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
              &localDW->Transmissionsubtasks_a);
          }

          /* End of Disable for SubSystem: '<S169>/Transmission subtasks' */

          /* Disable for Outport: '<S169>/Send CAN1' */
          localB->Transmissionsubtasks_a.Equal7_m = false;

          /* Disable for Outport: '<S169>/Receive CAN1' */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for Outport: '<S169>/Send CAN2' */
          localB->Transmissionsubtasks_a.Equal7 = false;

          /* Disable for Outport: '<S169>/Receive CAN2' */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S163>/COMM Task - Vote3' */

        /* Disable for Outport: '<S163>/Send_Message_CAN1' */
        localB->OR1_oo = false;

        /* Disable for Outport: '<S163>/Send_Message_CAN2' */
        localB->OR4_o = false;

        /* Disable for Outport: '<S163>/Receive_Message_CAN1' */
        localB->OR2_p = false;

        /* Disable for Outport: '<S163>/Receive_Message_CAN2' */
        localB->OR3_bn = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S164>/COMP Task - Process_BS_Msg' */
        if (localDW->COMPTaskProcess_BS_Msg_MODE) {
          /* Disable for Enabled SubSystem: '<S393>/Process_Messages' */
          if (localDW->Process_Messages_o.Process_Messages_MODE) {
            Process_Messages_Disable(&localB->Process_Messages_o,
              &localDW->Process_Messages_o);
          }

          /* End of Disable for SubSystem: '<S393>/Process_Messages' */
          localDW->COMPTaskProcess_BS_Msg_MODE = false;
        }

        /* End of Disable for SubSystem: '<S164>/COMP Task - Process_BS_Msg' */

        /* Disable for Enabled SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */
        if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
          /* Disable for Enabled SubSystem: '<S395>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
            {
              DemuxmessageCAN1andch_p_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_f,
                 &localDW->DemuxmessageCAN1andcheckcoher_f);
            }

            /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
            {
              DemuxmessageCAN1andch_a_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_g5,
                 &localDW->DemuxmessageCAN1andcheckcohe_g5);
            }

            /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S395>/Process_Messages' */
          localDW->COMPTaskRx_Set_Values_Check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */

        /* Disable for Enabled SubSystem: '<S164>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE_g) {
          /* Disable for Enabled SubSystem: '<S396>/Process_Messages' */
          if (localDW->Process_Messages_MODE_j) {
            /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
            {
              DemuxmessageCAN1andchec_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_a,
                 &localDW->DemuxmessageCAN1andcheckcoher_a);
            }

            /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
            {
              DemuxmessageCAN1andch_l_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_i,
                 &localDW->DemuxmessageCAN1andcheckcoher_i);
            }

            /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_j = false;
          }

          /* End of Disable for SubSystem: '<S396>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S164>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S164>/COMP Task - Test Receive1' */
        if (localDW->COMPTaskTestReceive1_MODE) {
          /* Disable for Enabled SubSystem: '<S397>/Process_Messages' */
          if (localDW->Process_Messages_gh.Process_Messages_MODE) {
            Process_Messages_Disable(&localB->Process_Messages_gh,
              &localDW->Process_Messages_gh);
          }

          /* End of Disable for SubSystem: '<S397>/Process_Messages' */
          localDW->COMPTaskTestReceive1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S164>/COMP Task - Test Receive1' */

        /* Disable for Enabled SubSystem: '<S164>/COMM Task - Set_Values' */
        if (localDW->COMMTaskSet_Values_MODE_i) {
          /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
          if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
              &localDW->Receptionsubstasks_j);
          }

          /* End of Disable for SubSystem: '<S387>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_m,
                 &localDW->CheckmsgtransmissionCAN1_m);
            }

            /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_d_Disable
                (&localB->CheckmsgtransmissionCAN2_i,
                 &localDW->CheckmsgtransmissionCAN2_i);
            }

            /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S401>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S401>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S387>/Transmission subtasks' */

          /* Disable for Outport: '<S387>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

          /* Disable for Outport: '<S387>/Receive CAN1' */
          localB->Receptionsubstasks_j.AND = false;

          /* Disable for Outport: '<S387>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

          /* Disable for Outport: '<S387>/Receive CAN2' */
          localB->Receptionsubstasks_j.AND1 = false;
          localDW->COMMTaskSet_Values_MODE_i = false;
        }

        /* End of Disable for SubSystem: '<S164>/COMM Task - Set_Values' */

        /* Disable for Enabled SubSystem: '<S164>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_MODE) {
          /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
          if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
              &localDW->Receptionsubstasks_jz);
          }

          /* End of Disable for SubSystem: '<S388>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
          if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
              &localDW->Transmissionsubtasks1);
          }

          /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

          /* Disable for Outport: '<S388>/Send CAN1' */
          localB->Transmissionsubtasks1.Equal7_a = false;

          /* Disable for Outport: '<S388>/Receive CAN1' */
          localB->Receptionsubstasks_jz.AND = false;

          /* Disable for Outport: '<S388>/Send CAN2' */
          localB->Transmissionsubtasks1.Equal7 = false;

          /* Disable for Outport: '<S388>/Receive CAN2' */
          localB->Receptionsubstasks_jz.AND1 = false;
          localDW->COMMTaskSyncbc1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S164>/COMM Task - Sync bc 1' */

        /* Disable for Enabled SubSystem: '<S164>/COMM Task - Test1' */
        if (localDW->COMMTaskTest1_MODE) {
          /* Disable for Enabled SubSystem: '<S389>/Reception substasks' */
          if (localDW->Receptionsubstasks_d.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_d,
              &localDW->Receptionsubstasks_d);
          }

          /* End of Disable for SubSystem: '<S389>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S389>/Transmission subtasks1' */
          if (localDW->Transmissionsubtasks1_MODE_b) {
            /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_o.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_o,
                 &localDW->CheckmsgtransmissionCAN1_o);
            }

            /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_a.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_d_Disable
                (&localB->CheckmsgtransmissionCAN2_a,
                 &localDW->CheckmsgtransmissionCAN2_a);
            }

            /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S446>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

            /* Disable for Outport: '<S446>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_a.Equal7 = false;
            localDW->Transmissionsubtasks1_MODE_b = false;
          }

          /* End of Disable for SubSystem: '<S389>/Transmission subtasks1' */

          /* Disable for Outport: '<S389>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

          /* Disable for Outport: '<S389>/Receive CAN1' */
          localB->Receptionsubstasks_d.AND = false;

          /* Disable for Outport: '<S389>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_a.Equal7 = false;

          /* Disable for Outport: '<S389>/Receive CAN2' */
          localB->Receptionsubstasks_d.AND1 = false;
          localDW->COMMTaskTest1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S164>/COMM Task - Test1' */

        /* Disable for Enabled SubSystem: '<S164>/COMM Task - send_BS' */
        if (localDW->COMMTasksend_BS_MODE) {
          /* Disable for Enabled SubSystem: '<S390>/Reception substasks' */
          if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
              &localDW->Receptionsubstasks_l);
          }

          /* End of Disable for SubSystem: '<S390>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S390>/Transmission subtasks1' */
          if (localDW->Transmissionsubtasks1_MODE) {
            /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE) {
              /* Disable for Outport: '<S466>/Send CAN1' */
              localB->Equal7_l = false;
              localDW->CheckmsgtransmissionCAN1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE) {
              /* Disable for Outport: '<S467>/Send CAN2' */
              localB->Equal7 = false;
              localDW->CheckmsgtransmissionCAN2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S464>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S464>/Send CAN2' */
            localB->Equal7 = false;
            localDW->Transmissionsubtasks1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S390>/Transmission subtasks1' */

          /* Disable for Outport: '<S390>/Send CAN1' */
          localB->Equal7_l = false;

          /* Disable for Outport: '<S390>/Receive CAN1' */
          localB->Receptionsubstasks_l.AND = false;

          /* Disable for Outport: '<S390>/Send CAN2' */
          localB->Equal7 = false;

          /* Disable for Outport: '<S390>/Receive CAN2' */
          localB->Receptionsubstasks_l.AND1 = false;
          localDW->COMMTasksend_BS_MODE = false;
        }

        /* End of Disable for SubSystem: '<S164>/COMM Task - send_BS' */

        /* Disable for Outport: '<S164>/Send_Message_CAN1' */
        localB->OR1_o = false;

        /* Disable for Outport: '<S164>/Send_Message_CAN2' */
        localB->OR2_k = false;

        /* Disable for Outport: '<S164>/Receive_Message_CAN1' */
        localB->OR3_b = false;

        /* Disable for Outport: '<S164>/Receive_Message_CAN2' */
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
        /* Disable for Enabled SubSystem: '<S628>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S634>/Process_Messages' */
          if (localDW->Process_Messages_MODE_n) {
            /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
            {
              DemuxmessageCAN1andc_ls_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_d0,
                 &localDW->DemuxmessageCAN1andcheckcohe_d0);
            }

            /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
            {
              DemuxmessageCAN1andch_k_Disable
                (&localB->DemuxmessageCAN1andcheckcohe_h5,
                 &localDW->DemuxmessageCAN1andcheckcohe_h5);
            }

            /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_n = false;
          }

          /* End of Disable for SubSystem: '<S634>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S628>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S628>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_e.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_e,
            &localDW->COMMTaskSyncbc0_e);
        }

        /* End of Disable for SubSystem: '<S628>/COMM Task - Sync bc 0' */

        /* Disable for Outport: '<S628>/Send_Message_CAN1' */
        localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a = false;

        /* Disable for Outport: '<S628>/Send_Message_CAN2' */
        localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7 = false;

        /* Disable for Outport: '<S628>/Receive_Message_CAN1' */
        localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND = false;

        /* Disable for Outport: '<S628>/Receive_Message_CAN2' */
        localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1 = false;
        localDW->inputgeneratorbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S160>/input generator basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 1' */
      if (localDW->inputgeneratorbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S629>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S695>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
            {
              DemuxmessageCAN1andc_ls_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_o,
                 &localDW->DemuxmessageCAN1andcheckcoher_o);
            }

            /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcohe_ek)
            {
              DemuxmessageCAN1andch_k_Disable
                (&localB->DemuxmessageCAN1andcheckcoher_k,
                 &localDW->DemuxmessageCAN1andcheckcoher_k);
            }

            /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S695>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S629>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S629>/COMM Task - Set_Values' */
        if (localDW->COMMTaskSet_Values_MODE) {
          /* Disable for Enabled SubSystem: '<S690>/Reception substasks' */
          if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
              &localDW->Receptionsubstasks_n);
          }

          /* End of Disable for SubSystem: '<S690>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S690>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_a,
                 &localDW->CheckmsgtransmissionCAN1_a);
            }

            /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_d_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S698>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S698>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S690>/Transmission subtasks' */

          /* Disable for Outport: '<S690>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

          /* Disable for Outport: '<S690>/Receive CAN1' */
          localB->Receptionsubstasks_n.AND = false;

          /* Disable for Outport: '<S690>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S690>/Receive CAN2' */
          localB->Receptionsubstasks_n.AND1 = false;
          localDW->COMMTaskSet_Values_MODE = false;
        }

        /* End of Disable for SubSystem: '<S629>/COMM Task - Set_Values' */

        /* Disable for Enabled SubSystem: '<S629>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1_d,
            &localDW->COMMTaskSyncbc1_d);
        }

        /* End of Disable for SubSystem: '<S629>/COMM Task - Sync bc 1' */

        /* Disable for Outport: '<S629>/Send_Message_CAN1' */
        localB->OR1 = false;

        /* Disable for Outport: '<S629>/Send_Message_CAN2' */
        localB->OR4 = false;

        /* Disable for Outport: '<S629>/Receive_Message_CAN1' */
        localB->OR3 = false;

        /* Disable for Outport: '<S629>/Receive_Message_CAN2' */
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
  real32_T xy;
  real32_T xz;
  real32_T lower_detect_range;
  boolean_T rtb_OR1_l;
  boolean_T rtb_Equal_kj;
  real_T rtb_Switch1_f;
  uint16_T rtb_DataStoreRead8_c;
  boolean_T rtb_AND_ck;
  boolean_T rtb_AND1_fb;
  boolean_T rtb_AND2_n;
  boolean_T rtb_AND6_f;
  boolean_T rtb_AND8_k;
  boolean_T rtb_AND7_m;
  real_T rtb_Plus_j;
  real_T rtb_Plus1_b;
  real_T rtb_Plus2_p;
  real_T rtb_signal1[20];
  real_T rtb_signal2[20];
  int8_T rtb_FindNonzeroElements[3];
  boolean_T rtb_AND17_f;
  boolean_T rtb_AND17_b;
  boolean_T rtb_AND17;
  uint8_T rtb_Switch_j_Buffer_1;
  boolean_T rtb_DataStoreRead1_bw;
  boolean_T rtb_DataStoreRead2_ah;
  msg_buffer_type rtb_DataStoreRead_pt;
  msg_buffer_type rtb_DataStoreRead3_nn;
  real_T rtb_DataStoreRead15_b;
  boolean_T rtb_AND1_dv;
  boolean_T rtb_DataStoreRead1_il;
  boolean_T rtb_DataStoreRead2_f3;
  msg_buffer_type rtb_DataStoreRead_m3;
  msg_buffer_type rtb_DataStoreRead3_ez;
  boolean_T rtb_AND_br;
  boolean_T rtb_AND1_eh;
  boolean_T rtb_DataStoreRead1_j2;
  boolean_T rtb_DataStoreRead2_m;
  msg_buffer_type rtb_DataStoreRead_ak;
  msg_buffer_type rtb_DataStoreRead3_d4;
  boolean_T rtb_AND_b0;
  boolean_T rtb_AND1_bf;
  boolean_T rtb_DataStoreRead1_ax;
  boolean_T rtb_DataStoreRead2_cx;
  msg_buffer_type rtb_DataStoreRead_l5i;
  msg_buffer_type rtb_DataStoreRead3_dw;
  boolean_T rtb_AND_fe;
  boolean_T rtb_AND1_oq;
  boolean_T rtb_Equal2_ic;
  boolean_T rtb_NOT_jl;
  boolean_T rtb_Equal2_hs;
  boolean_T rtb_NOT_gq;
  boolean_T rtb_Equal2_o;
  boolean_T rtb_NOT_oz;
  boolean_T rtb_DataStoreRead1_fh;
  boolean_T rtb_DataStoreRead2_pl;
  msg_buffer_type rtb_DataStoreRead_iy;
  msg_buffer_type rtb_DataStoreRead3_g;
  real_T rtb_DataStoreRead15_g;
  boolean_T rtb_AND_bp;
  boolean_T rtb_AND1_ff;
  boolean_T rtb_Equal1_hs;
  boolean_T rtb_DataStoreRead1_ka;
  boolean_T rtb_DataStoreRead2_cy;
  msg_buffer_type rtb_DataStoreRead_c;
  msg_buffer_type rtb_DataStoreRead3_dy;
  boolean_T rtb_AND1_m;
  boolean_T rtb_DataStoreRead1_pg;
  boolean_T rtb_DataStoreRead2_ae;
  msg_buffer_type rtb_DataStoreRead_dg;
  msg_buffer_type rtb_DataStoreRead3_i4;
  real_T rtb_DataStoreRead15_f;
  boolean_T rtb_AND1_ku;
  boolean_T rtb_DataStoreRead1_ak;
  boolean_T rtb_DataStoreRead2_h;
  msg_buffer_type rtb_DataStoreRead_i;
  msg_buffer_type rtb_DataStoreRead3_o;
  real_T rtb_DataStoreRead15;
  boolean_T rtb_AND_au;
  boolean_T rtb_AND1_h;
  boolean_T rtb_AND_fr;
  boolean_T rtb_NOT_df;
  boolean_T rtb_Equal1_dc;
  boolean_T rtb_NOT_ao;
  boolean_T rtb_NOT_p2;
  boolean_T rtb_NOT_lz;
  boolean_T rtb_DataStoreRead1_dl;
  boolean_T rtb_DataStoreRead2_ea;
  msg_buffer_type rtb_DataStoreRead_ooj;
  msg_buffer_type rtb_DataStoreRead3_kv;
  boolean_T rtb_AND1_of;
  boolean_T rtb_Equal2_d;
  boolean_T rtb_AND1_eq;
  boolean_T rtb_DataStoreRead1_c4;
  boolean_T rtb_DataStoreRead2_eu;
  msg_buffer_type rtb_DataStoreRead_n;
  msg_buffer_type rtb_DataStoreRead3;
  boolean_T rtb_AND1_f5;
  boolean_T rtb_AND2_o;
  boolean_T rtb_NOT_e;
  boolean_T rtb_NOT_hj;
  uint16_T rtb_DataStoreRead_is;
  boolean_T rtb_AND_bj;
  boolean_T rtb_AND1_bv;
  uint16_T rtb_DataStoreRead_j2;
  boolean_T rtb_AND_cl;
  boolean_T rtb_AND1_b5;
  boolean_T rtb_NOT_lg;
  uint16_T rtb_DataStoreRead_pq;
  boolean_T rtb_AND_i;
  boolean_T rtb_AND1_c;
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
  real32_T varargin_1_tmp_idx_2;
  uint32_T qY;
  uint32_T qY_0;
  uint16_T u0;
  uint16_T u1;
  boolean_T rtb_AND6_d_tmp;
  real32_T xy_tmp;
  real32_T xy_tmp_0;
  real32_T xz_tmp;
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
   *  Constant: '<S126>/Board nr4'
   *  Constant: '<S139>/SET'
   *  DataStoreRead: '<S126>/Data Store Read1'
   *  Logic: '<S126>/AND'
   *  Logic: '<S126>/OR'
   *  Logic: '<S126>/OR2'
   *  RelationalOperator: '<S126>/Equal'
   *  RelationalOperator: '<S126>/Equal1'
   *  RelationalOperator: '<S126>/Equal2'
   *  RelationalOperator: '<S126>/Equal3'
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
           3.0) || (*rtd_Board_ID == 4.0)) && localDW->Initialization_Timeout) ||
        rtb_OR1_l) {
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
     *  Constant: '<S126>/Board nr4'
     *  Constant: '<S139>/SET'
     *  DataStoreRead: '<S126>/Data Store Read1'
     *  DataStoreWrite: '<S126>/Data Store Write1'
     *  Logic: '<S126>/AND'
     *  Logic: '<S126>/OR'
     *  Logic: '<S126>/OR2'
     *  RelationalOperator: '<S126>/Equal'
     *  RelationalOperator: '<S126>/Equal1'
     *  RelationalOperator: '<S126>/Equal2'
     *  RelationalOperator: '<S126>/Equal3'
     */
    localDW->Initialization_flag = (localB->SET == 0.0);

    /* RelationalOperator: '<S138>/GreaterThan' incorporates:
     *  Constant: '<S126>/Constant'
     *  DataStoreRead: '<S138>/Data Store Read1'
     *  DataStoreWrite: '<S126>/Data Store Write'
     */
    localDW->Initialization_Timeout = (localDW->Delay_Counter >= 744.0);

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

    /* DataStoreWrite: '<S126>/Data Store Write2' incorporates:
     *  Constant: '<S126>/Constant1'
     */
    localDW->rxB1_status = 1.0;

    /* DataStoreWrite: '<S126>/Data Store Write3' incorporates:
     *  Constant: '<S126>/Constant2'
     */
    localDW->rxB2_status = 1.0;

    /* DataStoreWrite: '<S126>/Data Store Write4' incorporates:
     *  Constant: '<S126>/Constant3'
     */
    localDW->rxB3_status = 1.0;

    /* DataStoreWrite: '<S126>/Data Store Write5' incorporates:
     *  Constant: '<S126>/Constant4'
     */
    localDW->rxB4_status = 1.0;
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
  if (*rtd_Local_Ticks == 372.0) {
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
   *  Constant: '<S163>/Constant'
   *  Constant: '<S163>/Constant12'
   *  Constant: '<S163>/Constant14'
   *  Constant: '<S163>/Constant17'
   *  Constant: '<S163>/Constant19'
   *  Constant: '<S163>/Constant2'
   *  Constant: '<S163>/Constant21'
   *  Constant: '<S163>/Constant23'
   *  Constant: '<S163>/Constant25'
   *  Constant: '<S163>/Constant27'
   *  Constant: '<S163>/Constant28'
   *  Constant: '<S163>/Constant3'
   *  Constant: '<S163>/Constant31'
   *  Constant: '<S163>/Constant33'
   *  Constant: '<S163>/Constant34'
   *  Constant: '<S163>/Constant6'
   *  Constant: '<S163>/Constant8'
   *  Constant: '<S163>/Constant9'
   *  Constant: '<S164>/Constant'
   *  Constant: '<S164>/Constant12'
   *  Constant: '<S164>/Constant13'
   *  Constant: '<S164>/Constant14'
   *  Constant: '<S164>/Constant16'
   *  Constant: '<S164>/Constant19'
   *  Constant: '<S164>/Constant23'
   *  Constant: '<S164>/Constant24'
   *  Constant: '<S164>/Constant25'
   *  Constant: '<S164>/Constant26'
   *  Constant: '<S164>/Constant28'
   *  Constant: '<S164>/Constant4'
   *  Constant: '<S164>/Constant5'
   *  Constant: '<S164>/Constant6'
   *  Constant: '<S164>/Constant7'
   *  Constant: '<S164>/Constant8'
   *  Constant: '<S174>/Constant'
   *  Constant: '<S175>/Constant1'
   *  Constant: '<S175>/Constant4'
   *  Constant: '<S177>/Constant4'
   *  Constant: '<S178>/Constant1'
   *  Constant: '<S179>/Constant4'
   *  Constant: '<S180>/Constant1'
   *  Constant: '<S181>/Constant4'
   *  Constant: '<S182>/Constant1'
   *  Constant: '<S393>/Constant'
   *  Constant: '<S395>/Constant51'
   *  Constant: '<S396>/Constant'
   *  Constant: '<S397>/Constant'
   *  Constant: '<S398>/Constant1'
   *  Constant: '<S405>/Constant'
   *  Constant: '<S450>/Constant'
   *  Constant: '<S464>/Constant6'
   *  Constant: '<S464>/Constant7'
   *  Constant: '<S466>/Constant22'
   *  Constant: '<S466>/Constant24'
   *  Constant: '<S466>/Constant8'
   *  Constant: '<S467>/Constant22'
   *  Constant: '<S467>/Constant24'
   *  Constant: '<S467>/Constant8'
   *  Constant: '<S468>/Constant'
   *  Constant: '<S628>/Constant'
   *  Constant: '<S628>/Constant17'
   *  Constant: '<S628>/Constant2'
   *  Constant: '<S628>/Constant25'
   *  Constant: '<S628>/Constant31'
   *  Constant: '<S628>/Constant4'
   *  Constant: '<S629>/Constant'
   *  Constant: '<S629>/Constant12'
   *  Constant: '<S629>/Constant16'
   *  Constant: '<S629>/Constant4'
   *  Constant: '<S629>/Constant5'
   *  Constant: '<S629>/Constant6'
   *  Constant: '<S629>/Constant7'
   *  Constant: '<S629>/Constant8'
   *  Constant: '<S634>/Constant'
   *  Constant: '<S635>/Constant1'
   *  Constant: '<S695>/Constant'
   *  Constant: '<S696>/Constant1'
   *  Constant: '<S702>/Constant'
   *  Constant: '<S702>/Constant12'
   *  DataStoreRead: '<S132>/Data Store Read10'
   *  DataStoreRead: '<S164>/Data Store Read11'
   *  DataStoreRead: '<S164>/Data Store Read6'
   *  DataStoreRead: '<S164>/Data Store Read7'
   *  DataStoreRead: '<S175>/Data Store Read'
   *  DataStoreRead: '<S175>/Data Store Read1'
   *  DataStoreRead: '<S177>/Data Store Read5'
   *  DataStoreRead: '<S179>/Data Store Read5'
   *  DataStoreRead: '<S181>/Data Store Read5'
   *  DataStoreRead: '<S36>/Data Store Read8'
   *  DataStoreRead: '<S391>/Data Store Read1'
   *  DataStoreRead: '<S392>/Data Store Read1'
   *  DataStoreRead: '<S399>/Data Store Read1'
   *  DataStoreRead: '<S485>/Data Store Read5'
   *  DataStoreRead: '<S518>/Data Store Read6'
   *  DataStoreRead: '<S635>/Data Store Read'
   *  DataStoreRead: '<S692>/Data Store Read'
   *  DataStoreRead: '<S696>/Data Store Read1'
   *  DataStoreWrite: '<S264>/Data Store Write2'
   *  DataStoreWrite: '<S562>/Data Store Write2'
   *  DataStoreWrite: '<S657>/Data Store Write2'
   *  DataStoreWrite: '<S746>/Data Store Write2'
   *  Logic: '<S163>/AND1'
   *  Logic: '<S163>/AND10'
   *  Logic: '<S163>/AND11'
   *  Logic: '<S163>/AND12'
   *  Logic: '<S163>/AND13'
   *  Logic: '<S163>/AND14'
   *  Logic: '<S163>/AND15'
   *  Logic: '<S163>/AND16'
   *  Logic: '<S163>/AND18'
   *  Logic: '<S163>/AND19'
   *  Logic: '<S163>/AND2'
   *  Logic: '<S163>/AND3'
   *  Logic: '<S163>/AND4'
   *  Logic: '<S163>/AND5'
   *  Logic: '<S163>/AND6'
   *  Logic: '<S163>/AND7'
   *  Logic: '<S163>/AND8'
   *  Logic: '<S163>/AND9'
   *  Logic: '<S163>/NOT1'
   *  Logic: '<S164>/AND'
   *  Logic: '<S164>/AND1'
   *  Logic: '<S164>/AND10'
   *  Logic: '<S164>/AND11'
   *  Logic: '<S164>/AND17'
   *  Logic: '<S164>/AND18'
   *  Logic: '<S164>/AND19'
   *  Logic: '<S164>/AND2'
   *  Logic: '<S164>/AND20'
   *  Logic: '<S164>/AND3'
   *  Logic: '<S164>/AND4'
   *  Logic: '<S164>/AND5'
   *  Logic: '<S164>/AND6'
   *  Logic: '<S164>/AND7'
   *  Logic: '<S164>/AND8'
   *  Logic: '<S164>/AND9'
   *  Logic: '<S164>/NOT2'
   *  Logic: '<S164>/NOT4'
   *  Logic: '<S164>/NOT5'
   *  Logic: '<S172>/AND'
   *  Logic: '<S174>/AND'
   *  Logic: '<S175>/AND'
   *  Logic: '<S175>/AND1'
   *  Logic: '<S177>/AND'
   *  Logic: '<S179>/AND'
   *  Logic: '<S181>/AND'
   *  Logic: '<S391>/AND'
   *  Logic: '<S391>/NOT'
   *  Logic: '<S392>/AND'
   *  Logic: '<S392>/NOT'
   *  Logic: '<S393>/AND4'
   *  Logic: '<S395>/AND'
   *  Logic: '<S395>/AND2'
   *  Logic: '<S396>/AND'
   *  Logic: '<S397>/AND4'
   *  Logic: '<S398>/AND1'
   *  Logic: '<S399>/AND'
   *  Logic: '<S399>/NOT'
   *  Logic: '<S464>/AND'
   *  Logic: '<S464>/AND1'
   *  Logic: '<S485>/NOT1'
   *  Logic: '<S628>/AND1'
   *  Logic: '<S628>/AND15'
   *  Logic: '<S628>/AND16'
   *  Logic: '<S628>/AND18'
   *  Logic: '<S628>/AND19'
   *  Logic: '<S628>/AND2'
   *  Logic: '<S628>/NOT1'
   *  Logic: '<S629>/AND1'
   *  Logic: '<S629>/AND18'
   *  Logic: '<S629>/AND19'
   *  Logic: '<S629>/AND2'
   *  Logic: '<S629>/AND20'
   *  Logic: '<S629>/AND3'
   *  Logic: '<S629>/AND4'
   *  Logic: '<S629>/AND5'
   *  Logic: '<S629>/NOT2'
   *  Logic: '<S632>/AND'
   *  Logic: '<S634>/AND'
   *  Logic: '<S635>/AND'
   *  Logic: '<S635>/AND1'
   *  Logic: '<S635>/AND2'
   *  Logic: '<S635>/NOT'
   *  Logic: '<S692>/AND'
   *  Logic: '<S695>/AND'
   *  Logic: '<S696>/AND3'
   *  Logic: '<S696>/AND4'
   *  Logic: '<S696>/NOT1'
   *  Math: '<S466>/Mod'
   *  Math: '<S467>/Mod'
   *  RelationalOperator: '<S132>/Equal3'
   *  RelationalOperator: '<S159>/Equal1'
   *  RelationalOperator: '<S160>/Equal1'
   *  RelationalOperator: '<S163>/GreaterThan10'
   *  RelationalOperator: '<S163>/GreaterThan11'
   *  RelationalOperator: '<S163>/GreaterThan12'
   *  RelationalOperator: '<S163>/GreaterThan13'
   *  RelationalOperator: '<S163>/GreaterThan14'
   *  RelationalOperator: '<S163>/GreaterThan15'
   *  RelationalOperator: '<S163>/GreaterThan16'
   *  RelationalOperator: '<S163>/GreaterThan17'
   *  RelationalOperator: '<S163>/GreaterThan18'
   *  RelationalOperator: '<S163>/GreaterThan19'
   *  RelationalOperator: '<S163>/GreaterThan2'
   *  RelationalOperator: '<S163>/GreaterThan20'
   *  RelationalOperator: '<S163>/GreaterThan21'
   *  RelationalOperator: '<S163>/GreaterThan22'
   *  RelationalOperator: '<S163>/GreaterThan23'
   *  RelationalOperator: '<S163>/GreaterThan24'
   *  RelationalOperator: '<S163>/GreaterThan25'
   *  RelationalOperator: '<S163>/GreaterThan26'
   *  RelationalOperator: '<S163>/GreaterThan27'
   *  RelationalOperator: '<S163>/GreaterThan28'
   *  RelationalOperator: '<S163>/GreaterThan29'
   *  RelationalOperator: '<S163>/GreaterThan3'
   *  RelationalOperator: '<S163>/GreaterThan30'
   *  RelationalOperator: '<S163>/GreaterThan31'
   *  RelationalOperator: '<S163>/GreaterThan32'
   *  RelationalOperator: '<S163>/GreaterThan33'
   *  RelationalOperator: '<S163>/GreaterThan4'
   *  RelationalOperator: '<S163>/GreaterThan5'
   *  RelationalOperator: '<S163>/GreaterThan6'
   *  RelationalOperator: '<S163>/GreaterThan7'
   *  RelationalOperator: '<S163>/GreaterThan8'
   *  RelationalOperator: '<S163>/GreaterThan9'
   *  RelationalOperator: '<S164>/GreaterThan'
   *  RelationalOperator: '<S164>/GreaterThan1'
   *  RelationalOperator: '<S164>/GreaterThan10'
   *  RelationalOperator: '<S164>/GreaterThan11'
   *  RelationalOperator: '<S164>/GreaterThan12'
   *  RelationalOperator: '<S164>/GreaterThan13'
   *  RelationalOperator: '<S164>/GreaterThan14'
   *  RelationalOperator: '<S164>/GreaterThan15'
   *  RelationalOperator: '<S164>/GreaterThan16'
   *  RelationalOperator: '<S164>/GreaterThan17'
   *  RelationalOperator: '<S164>/GreaterThan18'
   *  RelationalOperator: '<S164>/GreaterThan19'
   *  RelationalOperator: '<S164>/GreaterThan2'
   *  RelationalOperator: '<S164>/GreaterThan20'
   *  RelationalOperator: '<S164>/GreaterThan21'
   *  RelationalOperator: '<S164>/GreaterThan22'
   *  RelationalOperator: '<S164>/GreaterThan23'
   *  RelationalOperator: '<S164>/GreaterThan3'
   *  RelationalOperator: '<S164>/GreaterThan34'
   *  RelationalOperator: '<S164>/GreaterThan35'
   *  RelationalOperator: '<S164>/GreaterThan4'
   *  RelationalOperator: '<S164>/GreaterThan5'
   *  RelationalOperator: '<S164>/GreaterThan6'
   *  RelationalOperator: '<S164>/GreaterThan7'
   *  RelationalOperator: '<S164>/GreaterThan8'
   *  RelationalOperator: '<S164>/GreaterThan9'
   *  RelationalOperator: '<S170>/Equal'
   *  RelationalOperator: '<S171>/Equal'
   *  RelationalOperator: '<S172>/Equal2'
   *  RelationalOperator: '<S173>/Equal2'
   *  RelationalOperator: '<S175>/Equal'
   *  RelationalOperator: '<S175>/Equal1'
   *  RelationalOperator: '<S175>/Equal2'
   *  RelationalOperator: '<S176>/Equal'
   *  RelationalOperator: '<S177>/Equal'
   *  RelationalOperator: '<S177>/Equal2'
   *  RelationalOperator: '<S179>/Equal'
   *  RelationalOperator: '<S179>/Equal2'
   *  RelationalOperator: '<S181>/Equal'
   *  RelationalOperator: '<S181>/Equal2'
   *  RelationalOperator: '<S391>/Equal'
   *  RelationalOperator: '<S392>/Equal'
   *  RelationalOperator: '<S393>/Equal1'
   *  RelationalOperator: '<S394>/Equal2'
   *  RelationalOperator: '<S395>/Equal1'
   *  RelationalOperator: '<S397>/Equal1'
   *  RelationalOperator: '<S398>/Equal3'
   *  RelationalOperator: '<S399>/Equal'
   *  RelationalOperator: '<S401>/Equal16'
   *  RelationalOperator: '<S446>/Equal16'
   *  RelationalOperator: '<S464>/Equal16'
   *  RelationalOperator: '<S464>/GreaterThan2'
   *  RelationalOperator: '<S464>/GreaterThan3'
   *  RelationalOperator: '<S466>/Equal4'
   *  RelationalOperator: '<S467>/Equal4'
   *  RelationalOperator: '<S628>/GreaterThan2'
   *  RelationalOperator: '<S628>/GreaterThan3'
   *  RelationalOperator: '<S628>/GreaterThan30'
   *  RelationalOperator: '<S628>/GreaterThan31'
   *  RelationalOperator: '<S628>/GreaterThan32'
   *  RelationalOperator: '<S628>/GreaterThan33'
   *  RelationalOperator: '<S628>/GreaterThan4'
   *  RelationalOperator: '<S628>/GreaterThan5'
   *  RelationalOperator: '<S629>/GreaterThan10'
   *  RelationalOperator: '<S629>/GreaterThan11'
   *  RelationalOperator: '<S629>/GreaterThan2'
   *  RelationalOperator: '<S629>/GreaterThan3'
   *  RelationalOperator: '<S629>/GreaterThan34'
   *  RelationalOperator: '<S629>/GreaterThan35'
   *  RelationalOperator: '<S629>/GreaterThan4'
   *  RelationalOperator: '<S629>/GreaterThan5'
   *  RelationalOperator: '<S629>/GreaterThan6'
   *  RelationalOperator: '<S629>/GreaterThan7'
   *  RelationalOperator: '<S629>/GreaterThan8'
   *  RelationalOperator: '<S629>/GreaterThan9'
   *  RelationalOperator: '<S632>/Equal1'
   *  RelationalOperator: '<S632>/Equal2'
   *  RelationalOperator: '<S633>/Equal2'
   *  RelationalOperator: '<S635>/Equal3'
   *  RelationalOperator: '<S692>/Equal1'
   *  RelationalOperator: '<S692>/Equal2'
   *  RelationalOperator: '<S696>/Equal3'
   *  RelationalOperator: '<S698>/Equal16'
   *  Sum: '<S466>/Minus'
   *  Sum: '<S467>/Minus'
   */
  if (!localDW->Initialization_flag) {
    if (!localDW->MatrixCycleManager_MODE) {
      localDW->MatrixCycleManager_MODE = true;
    }

    /* MATLAB Function: '<S132>/MATLAB Function' incorporates:
     *  DataStoreRead: '<S132>/Data Store Read1'
     *  DataStoreRead: '<S132>/Data Store Read2'
     *  DataStoreRead: '<S132>/Data Store Read3'
     *  DataStoreRead: '<S132>/Data Store Read4'
     */
    tmr1_s = localDW->rxB1_status;
    tmr2_s = localDW->rxB2_status;
    tmr3_s = localDW->rxB3_status;
    tmr4_s = localDW->rxB4_status;

    /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/MATLAB Function': '<S161>:1' */
    rtb_Switch1_f = tmr4_s;
    rtb_Plus_j = tmr3_s;
    rtb_Plus1_b = tmr2_s;
    rtb_Plus2_p = tmr1_s;
    if ((tmr1_s == 1.0) && (tmr2_s == 1.0) && (tmr3_s == 1.0)) {
      /* '<S161>:1:2' */
      /* '<S161>:1:3' */
      rtb_Plus2_p = 1.0;

      /* '<S161>:1:4' */
      rtb_Plus1_b = 1.0;

      /* '<S161>:1:5' */
      rtb_Plus_j = 1.0;

      /* '<S161>:1:6' */
      rtb_Switch1_f = 0.0;
    } else if ((tmr2_s == 1.0) && (tmr3_s == 1.0) && (tmr4_s == 1.0)) {
      /* '<S161>:1:7' */
      /* '<S161>:1:8' */
      rtb_Plus2_p = 0.0;

      /* '<S161>:1:9' */
      rtb_Plus1_b = 1.0;

      /* '<S161>:1:10' */
      rtb_Plus_j = 1.0;

      /* '<S161>:1:11' */
      rtb_Switch1_f = 1.0;
    } else if ((tmr1_s == 1.0) && (tmr3_s == 1.0) && (tmr4_s == 1.0)) {
      /* '<S161>:1:12' */
      /* '<S161>:1:13' */
      rtb_Plus2_p = 1.0;

      /* '<S161>:1:14' */
      rtb_Plus1_b = 0.0;

      /* '<S161>:1:15' */
      rtb_Plus_j = 1.0;

      /* '<S161>:1:16' */
      rtb_Switch1_f = 1.0;
    } else {
      if ((tmr1_s == 1.0) && (tmr2_s == 1.0) && (tmr4_s == 1.0)) {
        /* '<S161>:1:17' */
        /* '<S161>:1:18' */
        rtb_Plus2_p = 1.0;

        /* '<S161>:1:19' */
        rtb_Plus1_b = 1.0;

        /* '<S161>:1:20' */
        rtb_Plus_j = 0.0;

        /* '<S161>:1:21' */
        rtb_Switch1_f = 1.0;
      }
    }

    tmr1_s = rtb_Plus2_p;
    tmr2_s = rtb_Plus1_b;
    tmr3_s = rtb_Plus_j;
    tmr4_s = rtb_Switch1_f;

    /* End of MATLAB Function: '<S132>/MATLAB Function' */

    /* Logic: '<S132>/OR' incorporates:
     *  Constant: '<S132>/Constant'
     *  Constant: '<S132>/Constant1'
     *  Constant: '<S132>/Constant2'
     *  Constant: '<S132>/Constant4'
     *  Logic: '<S132>/AND'
     *  Logic: '<S132>/AND1'
     *  Logic: '<S132>/AND2'
     *  Logic: '<S132>/AND3'
     *  RelationalOperator: '<S132>/Equal'
     *  RelationalOperator: '<S132>/Equal1'
     *  RelationalOperator: '<S132>/Equal2'
     *  RelationalOperator: '<S132>/Equal4'
     */
    rtb_OR1_l = (((*rtd_Board_ID == 1.0) && (tmr1_s != 0.0)) || ((*rtd_Board_ID ==
      2.0) && (tmr2_s != 0.0)) || ((*rtd_Board_ID == 3.0) && (tmr3_s != 0.0)) ||
                 ((*rtd_Board_ID == 4.0) && (tmr4_s != 0.0)));

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
       *  EnablePort: '<S163>/Enable'
       */
      if (rtb_Equal_kj) {
        if (!localDW->controllerbasiccycle0_MODE) {
          localDW->controllerbasiccycle0_MODE = true;
        }

        /* DataStoreRead: '<S163>/Data Store Read8' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Check Timeouts' incorporates:
         *  EnablePort: '<S170>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S170>/Timeout and Board error counter' incorporates:
         *  EnablePort: '<S255>/Enable'
         */
        if ((*rtd_Local_Ticks >= 356.0) && (*rtd_Local_Ticks < localC->Sum14) &&
            (*rtd_Local_Ticks == 356.0)) {
          /* Logic: '<S255>/AND' incorporates:
           *  Constant: '<S255>/Constant'
           *  DataStoreRead: '<S255>/Data Store Read1'
           *  Logic: '<S255>/NOT'
           *  RelationalOperator: '<S255>/Equal'
           */
          rtb_AND_ck = ((1.0 != *rtd_Board_ID) && (!localDW->BC0_Vote1_processed));

          /* Switch: '<S255>/Switch2' incorporates:
           *  Constant: '<S255>/Constant6'
           *  DataStoreRead: '<S255>/Data Store Read5'
           *  DataStoreWrite: '<S255>/Data Store Write1'
           *  Sum: '<S255>/Plus'
           */
          if (rtb_AND_ck) {
            localDW->Board1_error_counter += 1.0;
          }

          /* End of Switch: '<S255>/Switch2' */

          /* Logic: '<S255>/AND1' incorporates:
           *  Constant: '<S255>/Constant3'
           *  DataStoreRead: '<S255>/Data Store Read2'
           *  Logic: '<S255>/NOT1'
           *  RelationalOperator: '<S255>/Equal1'
           */
          rtb_AND1_fb = ((2.0 != *rtd_Board_ID) &&
                         (!localDW->BC0_Vote2_processed));

          /* Switch: '<S255>/Switch1' incorporates:
           *  Constant: '<S255>/Constant1'
           *  DataStoreRead: '<S255>/Data Store Read6'
           *  DataStoreWrite: '<S255>/Data Store Write2'
           *  Sum: '<S255>/Plus1'
           */
          if (rtb_AND1_fb) {
            localDW->Board2_error_counter += 1.0;
          }

          /* End of Switch: '<S255>/Switch1' */

          /* Logic: '<S255>/AND2' incorporates:
           *  Constant: '<S255>/Constant4'
           *  DataStoreRead: '<S255>/Data Store Read3'
           *  Logic: '<S255>/NOT2'
           *  RelationalOperator: '<S255>/Equal2'
           */
          rtb_AND2_n = ((3.0 != *rtd_Board_ID) && (!localDW->BC0_Vote3_processed));

          /* Switch: '<S255>/Switch3' incorporates:
           *  Constant: '<S255>/Constant2'
           *  DataStoreRead: '<S255>/Data Store Read8'
           *  DataStoreWrite: '<S255>/Data Store Write3'
           *  Sum: '<S255>/Plus2'
           */
          if (rtb_AND2_n) {
            localDW->Board3_error_counter += 1.0;
          }

          /* End of Switch: '<S255>/Switch3' */

          /* Logic: '<S255>/NOT3' incorporates:
           *  DataStoreRead: '<S255>/Data Store Read13'
           *  Logic: '<S255>/NOT4'
           */
          rtb_AND6_d_tmp = !localDW->BC0_Sync_processed;

          /* Logic: '<S255>/AND8' incorporates:
           *  Constant: '<S255>/Constant10'
           *  Constant: '<S255>/Constant9'
           *  Logic: '<S255>/AND5'
           *  Logic: '<S255>/NOT3'
           *  RelationalOperator: '<S255>/Equal5'
           *  RelationalOperator: '<S255>/Equal6'
           */
          rtb_AND8_k = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 3.0) && (3.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S255>/Switch4' incorporates:
           *  Constant: '<S255>/Constant13'
           *  DataStoreRead: '<S255>/Data Store Read18'
           *  DataStoreWrite: '<S255>/Data Store Write5'
           *  Sum: '<S255>/Plus3'
           */
          if (rtb_AND8_k) {
            localDW->Board3_error_counter += 1.0;
          }

          /* End of Switch: '<S255>/Switch4' */

          /* Logic: '<S255>/AND7' incorporates:
           *  Constant: '<S255>/Constant11'
           *  Constant: '<S255>/Constant8'
           *  Logic: '<S255>/AND4'
           *  Logic: '<S255>/NOT3'
           *  RelationalOperator: '<S255>/Equal4'
           *  RelationalOperator: '<S255>/Equal7'
           */
          rtb_AND7_m = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 2.0) && (2.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S255>/Switch5' incorporates:
           *  Constant: '<S255>/Constant14'
           *  DataStoreRead: '<S255>/Data Store Read20'
           *  DataStoreWrite: '<S255>/Data Store Write6'
           *  Sum: '<S255>/Plus4'
           */
          if (rtb_AND7_m) {
            localDW->Board2_error_counter += 1.0;
          }

          /* End of Switch: '<S255>/Switch5' */

          /* Logic: '<S255>/AND6' incorporates:
           *  Constant: '<S255>/Constant12'
           *  Constant: '<S255>/Constant7'
           *  Logic: '<S255>/AND3'
           *  Logic: '<S255>/NOT3'
           *  RelationalOperator: '<S255>/Equal3'
           *  RelationalOperator: '<S255>/Equal8'
           */
          rtb_AND6_f = (rtb_AND6_d_tmp && ((*rtd_Master_ID == 1.0) && (1.0 !=
            *rtd_Board_ID)));

          /* Switch: '<S255>/Switch6' incorporates:
           *  Constant: '<S255>/Constant15'
           *  DataStoreRead: '<S255>/Data Store Read22'
           *  DataStoreWrite: '<S255>/Data Store Write7'
           *  Sum: '<S255>/Plus5'
           */
          if (rtb_AND6_f) {
            localDW->Board1_error_counter += 1.0;
          }

          /* End of Switch: '<S255>/Switch6' */

          /* Logic: '<S255>/OR' incorporates:
           *  DataStoreWrite: '<S255>/Data Store Write8'
           */
          localDW->Toggle_Pin_A1 = (rtb_AND_ck || rtb_AND1_fb || rtb_AND2_n ||
            rtb_AND6_f || rtb_AND7_m || rtb_AND8_k);

          /* Switch: '<S256>/Switch' incorporates:
           *  Constant: '<S256>/Constant'
           *  DataStoreRead: '<S256>/Data Store Read'
           *  DataStoreRead: '<S256>/Data Store Read1'
           *  Sum: '<S256>/Plus'
           */
          if (rtb_AND_ck) {
            TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter + 1.0;
          } else {
            TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter;
          }

          /* End of Switch: '<S256>/Switch' */

          /* DataStoreWrite: '<S256>/Data Store Write' */
          localDW->BC0_TM1_timeout_counter = TM1_timeout_counter_s;

          /* Switch: '<S257>/Switch' incorporates:
           *  Constant: '<S257>/Constant'
           *  DataStoreRead: '<S257>/Data Store Read'
           *  DataStoreRead: '<S257>/Data Store Read1'
           *  Sum: '<S257>/Plus'
           */
          if (rtb_AND1_fb) {
            TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter + 1.0;
          } else {
            TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter;
          }

          /* End of Switch: '<S257>/Switch' */

          /* DataStoreWrite: '<S257>/Data Store Write' */
          localDW->BC0_TM2_timeout_counter = TM2_timeout_counter_s;

          /* Switch: '<S258>/Switch' incorporates:
           *  Constant: '<S258>/Constant'
           *  DataStoreRead: '<S258>/Data Store Read'
           *  DataStoreRead: '<S258>/Data Store Read1'
           *  Sum: '<S258>/Plus'
           */
          if (rtb_AND2_n) {
            TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter + 1.0;
          } else {
            TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter;
          }

          /* End of Switch: '<S258>/Switch' */

          /* DataStoreWrite: '<S258>/Data Store Write' */
          localDW->BC0_TM3_timeout_counter = TM3_timeout_counter_s;

          /* Switch: '<S255>/Switch7' incorporates:
           *  Constant: '<S255>/Constant16'
           *  DataStoreRead: '<S255>/Data Store Read23'
           *  DataStoreWrite: '<S255>/Data Store Write9'
           *  Logic: '<S255>/AND9'
           *  RelationalOperator: '<S255>/Equal9'
           *  Sum: '<S255>/Plus6'
           */
          if (rtb_AND6_d_tmp && (*rtd_Master_ID != *rtd_Board_ID)) {
            localDW->Sync_bc0_missed_counter_j += 1.0;
          }

          /* End of Switch: '<S255>/Switch7' */

          /* DataStoreWrite: '<S255>/Data Store Write4' incorporates:
           *  Constant: '<S255>/Constant5'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S170>/Timeout and Board error counter' */
        /* End of Outputs for SubSystem: '<S163>/COMP Task - Check Timeouts' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - New Master' incorporates:
         *  EnablePort: '<S171>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S171>/New Master' incorporates:
         *  EnablePort: '<S259>/Enable'
         */
        if ((*rtd_Local_Ticks >= 360.0) && (*rtd_Local_Ticks < localC->Sum15) &&
            (*rtd_Local_Ticks == 360.0)) {
          /* MinMax: '<S260>/Max1' incorporates:
           *  DataStoreRead: '<S260>/Data Store Read25'
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

          /* RelationalOperator: '<S260>/Equal' incorporates:
           *  Constant: '<S260>/Constant'
           *  DataStoreWrite: '<S259>/Data Store Write'
           *  MinMax: '<S260>/Max1'
           */
          localDW->Reset_Board_n = (0.0 == rtb_Switch1_f);

          /* Sum: '<S260>/Plus' incorporates:
           *  Constant: '<S260>/Constant15'
           *  DataStoreRead: '<S260>/Data Store Read25'
           *  DataStoreRead: '<S260>/Data Store Read29'
           *  RelationalOperator: '<S260>/Equal17'
           */
          rtb_Plus_j = (real_T)(1.0 == localDW->Own_Vote) +
            localDW->Votes_count.First_Board;

          /* Sum: '<S260>/Plus1' incorporates:
           *  Constant: '<S260>/Constant16'
           *  DataStoreRead: '<S260>/Data Store Read25'
           *  DataStoreRead: '<S260>/Data Store Read29'
           *  RelationalOperator: '<S260>/Equal18'
           */
          rtb_Plus1_b = (real_T)(2.0 == localDW->Own_Vote) +
            localDW->Votes_count.Second_Board;

          /* Sum: '<S260>/Plus2' incorporates:
           *  Constant: '<S260>/Constant17'
           *  DataStoreRead: '<S260>/Data Store Read25'
           *  DataStoreRead: '<S260>/Data Store Read29'
           *  RelationalOperator: '<S260>/Equal19'
           */
          rtb_Plus2_p = (real_T)(3.0 == localDW->Own_Vote) +
            localDW->Votes_count.Third_Board;

          /* MinMax: '<S260>/Max' */
          if (rtb_Plus_j > rtb_Plus1_b) {
            rtb_Switch1_f = rtb_Plus_j;
          } else {
            rtb_Switch1_f = rtb_Plus1_b;
          }

          if (rtb_Switch1_f <= rtb_Plus2_p) {
            rtb_Switch1_f = rtb_Plus2_p;
          }

          /* Find: '<S260>/Find Nonzero Elements' incorporates:
           *  Constant: '<S261>/Constant'
           *  MinMax: '<S260>/Max'
           *  RelationalOperator: '<S261>/Compare'
           *  Sum: '<S260>/Subtract'
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

          /* End of Find: '<S260>/Find Nonzero Elements' */

          /* MinMax: '<S260>/Min' */
          linIx = rtb_FindNonzeroElements[0];
          for (sigIdx = 1; sigIdx < localDW->FindNonzeroElements_DIMS1; sigIdx++)
          {
            if (linIx >= rtb_FindNonzeroElements[sigIdx]) {
              linIx = rtb_FindNonzeroElements[sigIdx];
            }
          }

          /* Sum: '<S260>/Minus' incorporates:
           *  Constant: '<S260>/Index Corrector'
           *  MinMax: '<S260>/Min'
           */
          rtb_Switch1_f = (real_T)linIx + 1.0;

          /* DataStoreWrite: '<S259>/Data Store Write13' */
          *rtd_Master_ID = rtb_Switch1_f;

          /* Switch: '<S259>/Switch16' incorporates:
           *  Constant: '<S259>/Constant10'
           *  Constant: '<S259>/Constant9'
           *  DataStoreWrite: '<S259>/Data Store Write15'
           *  RelationalOperator: '<S259>/Equal6'
           */
          if (rtb_Switch1_f == *rtd_Board_ID) {
            localDW->Role_ID = 1.0;
          } else {
            localDW->Role_ID = 2.0;
          }

          /* End of Switch: '<S259>/Switch16' */

          /* DataStoreWrite: '<S259>/Data Store Write3' incorporates:
           *  Constant: '<S259>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S171>/New Master' */
        /* End of Outputs for SubSystem: '<S163>/COMP Task - New Master' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S172>/Enable'
         */
        if ((*rtd_Local_Ticks >= 368.0) && (*rtd_Local_Ticks < localC->Sum17_a))
        {
          /* DataStoreRead: '<S172>/Data Store Read' */
          reset_s = localDW->Reset_Board_n;

          /* Outputs for Enabled SubSystem: '<S172>/RESET Board - Return to initialization' incorporates:
           *  EnablePort: '<S262>/Enable'
           */
          if ((*rtd_Local_Ticks == 368.0) && reset_s) {
            /* DataStoreWrite: '<S262>/Data Store Write' */
            localDW->Reset_Board_n = localC->Cast_p;

            /* DataStoreWrite: '<S262>/Data Store Write1' */
            *rtd_New_Msg_Ready_CAN1 = localC->Cast_p;

            /* DataStoreWrite: '<S262>/Data Store Write10' */
            *rtd_New_Msg_Ready_CAN2 = localC->Cast_p;

            /* DataStoreWrite: '<S262>/Data Store Write2' */
            localDW->Initialization_flag = localC->NOT_p;

            /* DataStoreWrite: '<S262>/Data Store Write4' incorporates:
             *  Constant: '<S262>/Constant'
             */
            localDW->Role_ID = 0.0;

            /* DataStoreWrite: '<S262>/Data Store Write5' incorporates:
             *  Constant: '<S262>/Constant'
             */
            *rtd_Master_ID = 0.0;

            /* DataStoreWrite: '<S262>/Data Store Write6' */
            *rtd_Rx_State_CAN1 = localC->Cast6_d;

            /* DataStoreWrite: '<S262>/Data Store Write9' */
            *rtd_Rx_State_CAN2 = localC->Cast6_d;

            /* DataStoreWrite: '<S262>/Data Store Write3' incorporates:
             *  Constant: '<S262>/Constant1'
             */
            *rtd_RxID_CAN1 = 1U;

            /* DataStoreWrite: '<S262>/Data Store Write8' incorporates:
             *  Constant: '<S262>/Constant1'
             */
            *rtd_RxID_CAN2 = 1U;

            /* DataStoreWrite: '<S262>/Data Store Write7' incorporates:
             *  Constant: '<S262>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S172>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Reset Variables BC0' incorporates:
         *  EnablePort: '<S173>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S173>/Reset variables' incorporates:
         *  EnablePort: '<S263>/Enable'
         */
        if ((*rtd_Local_Ticks >= 364.0) && (*rtd_Local_Ticks < localC->Sum16_h) &&
            (*rtd_Local_Ticks == 364.0)) {
          /* DataStoreWrite: '<S263>/Data Store Write' */
          localDW->Desync_Positive = localC->Cast_h;

          /* DataStoreWrite: '<S263>/Data Store Write1' */
          localDW->BC0_Sync_processed = localC->Cast_h;

          /* DataStoreWrite: '<S263>/Data Store Write16' incorporates:
           *  Constant: '<S263>/Constant'
           */
          localDW->Votes_count.First_Board = 0.0;
          localDW->Votes_count.Second_Board = 0.0;
          localDW->Votes_count.Third_Board = 0.0;

          /* DataStoreWrite: '<S263>/Data Store Write2' */
          localDW->BC0_Vote1_processed = localC->Cast_h;

          /* DataStoreWrite: '<S263>/Data Store Write3' */
          localDW->BC0_Vote2_processed = localC->Cast_h;

          /* DataStoreWrite: '<S263>/Data Store Write4' */
          localDW->BC0_Vote3_processed = localC->Cast_h;

          /* DataStoreWrite: '<S263>/Data Store Write5' incorporates:
           *  Constant: '<S263>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S173>/Reset variables' */
        /* End of Outputs for SubSystem: '<S163>/COMP Task - Reset Variables BC0' */

        /* Logic: '<S163>/NOT1' incorporates:
         *  Constant: '<S163>/Constant12'
         *  Constant: '<S163>/Constant14'
         *  Constant: '<S163>/Constant25'
         *  Constant: '<S163>/Constant31'
         *  DataStoreRead: '<S163>/Data Store Read6'
         *  Logic: '<S163>/AND13'
         *  Logic: '<S163>/AND14'
         *  Logic: '<S163>/AND15'
         *  Logic: '<S163>/AND16'
         *  Logic: '<S163>/NOT3'
         *  Logic: '<S172>/AND'
         *  RelationalOperator: '<S163>/GreaterThan26'
         *  RelationalOperator: '<S163>/GreaterThan27'
         *  RelationalOperator: '<S163>/GreaterThan28'
         *  RelationalOperator: '<S163>/GreaterThan29'
         *  RelationalOperator: '<S163>/GreaterThan30'
         *  RelationalOperator: '<S163>/GreaterThan31'
         *  RelationalOperator: '<S163>/GreaterThan32'
         *  RelationalOperator: '<S163>/GreaterThan33'
         *  RelationalOperator: '<S170>/Equal'
         *  RelationalOperator: '<S171>/Equal'
         *  RelationalOperator: '<S172>/Equal2'
         *  RelationalOperator: '<S173>/Equal2'
         */
        rtb_AND2_n = !localDW->BC0_Sync_processed;

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Sync bc0 check' incorporates:
         *  EnablePort: '<S174>/Enable'
         */
        if ((*rtd_Local_Ticks >= 80.0) && (*rtd_Local_Ticks < localC->Sum1_j) &&
            rtb_AND2_n) {
          if (!localDW->COMPTaskSyncbc0check_MODE_g) {
            localDW->COMPTaskSyncbc0check_MODE_g = true;
          }

          /* DataStoreRead: '<S174>/Data Store Read1' */
          rtb_DataStoreRead1_bw = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S174>/Data Store Read2' */
          rtb_DataStoreRead2_ah = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S174>/Data Store Read' */
          rtb_DataStoreRead_pt = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S174>/Data Store Read3' */
          rtb_DataStoreRead3_nn = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S174>/Data Store Read15' */
          rtb_DataStoreRead15_b = *rtd_Master_ID;

          /* RelationalOperator: '<S174>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 80.0);

          /* RelationalOperator: '<S174>/Equal5' incorporates:
           *  Constant: '<S174>/Constant26'
           *  DataStoreRead: '<S174>/Data Store Read6'
           */
          rtb_AND1_fb = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S174>/Process_Messages' incorporates:
           *  EnablePort: '<S264>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_fb) {
            if (!localDW->Process_Messages_MODE_e) {
              localDW->Process_Messages_MODE_e = true;
            }

            /* Outputs for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_bw,
              &rtb_DataStoreRead_pt, 0.0, rtb_DataStoreRead15_b,
              &localB->DemuxmessageCAN1andcheckcoher_g,
              &localDW->DemuxmessageCAN1andcheckcoher_g,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S264>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_ah,
              &rtb_DataStoreRead3_nn, 0.0, rtb_DataStoreRead15_b,
              &localB->DemuxmessageCAN1andcheckcohe_p3,
              &localDW->DemuxmessageCAN1andcheckcohe_p3,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S264>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S264>/Switch' incorporates:
             *  Constant: '<S174>/Constant'
             *  DataStoreWrite: '<S264>/Data Store Write'
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

            /* End of Switch: '<S264>/Switch' */

            /* Logic: '<S264>/OR' incorporates:
             *  DataStoreWrite: '<S264>/Data Store Write2'
             */
            localDW->new_msg_Rx_l = (localB->DemuxmessageCAN1andcheckcoher_g.AND
              || localB->DemuxmessageCAN1andcheckcohe_p3.AND);

            /* Outputs for Enabled SubSystem: '<S264>/Desync calculation' incorporates:
             *  EnablePort: '<S268>/Enable'
             */
            if (localDW->new_msg_Rx_l) {
              /* Switch: '<S268>/Switch1' incorporates:
               *  Constant: '<S163>/Constant'
               *  Constant: '<S268>/Constant'
               *  Constant: '<S268>/Constant1'
               *  Constant: '<S268>/delay_estimation_1'
               *  Constant: '<S268>/delay_estimation_2'
               *  Product: '<S268>/Multiply'
               *  Product: '<S268>/Multiply1'
               *  Sum: '<S268>/Minus'
               *  Sum: '<S268>/Minus1'
               *  Sum: '<S268>/Sum'
               *  Sum: '<S268>/Sum1'
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

              /* End of Switch: '<S268>/Switch1' */

              /* Saturate: '<S268>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc0_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc0_s = (-15.0);
              } else {
                Desync_Sync_bc0_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S268>/Saturation' */

              /* DataStoreWrite: '<S268>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc0_s;
            }

            /* End of Outputs for SubSystem: '<S264>/Desync calculation' */

            /* DataStoreWrite: '<S264>/Data Store Write3' incorporates:
             *  Constant: '<S264>/Constant2'
             *  DataStoreWrite: '<S264>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }
          }

          /* End of Outputs for SubSystem: '<S174>/Process_Messages' */

          /* Logic: '<S174>/AND1' incorporates:
           *  Constant: '<S174>/Constant'
           *  DataStoreWrite: '<S264>/Data Store Write2'
           *  Logic: '<S174>/AND'
           *  Logic: '<S174>/NOT'
           */
          rtb_AND1_dv = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S174>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_dv, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S174>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc0check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S174>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S174>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE_g = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Sync bc0 check' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S175>/Enable'
         */
        if ((*rtd_Local_Ticks >= 84.0) && (*rtd_Local_Ticks < localC->Sum2_n) &&
            rtb_AND2_n) {
          /* Outputs for Enabled SubSystem: '<S175>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S293>/Enable'
           */
          if ((*rtd_Local_Ticks == 84.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S293>/Data Store Write1' incorporates:
             *  Constant: '<S293>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S175>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S175>/Local Time Update' incorporates:
           *  EnablePort: '<S294>/Enable'
           */
          if ((*rtd_Local_Ticks == 86.0) && (localDW->Role_ID == 2.0) &&
              localDW->new_msg_Rx_l) {
            /* RelationalOperator: '<S294>/GreaterThan' incorporates:
             *  Constant: '<S294>/Constant4'
             *  DataStoreRead: '<S294>/Data Store Read1'
             *  DataStoreWrite: '<S294>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S294>/NOT' incorporates:
             *  DataStoreWrite: '<S294>/Data Store Write'
             */
            rtb_NOT_hj = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S294>/Desync_Negative' */
            Desync_Negative(rtb_NOT_hj, 84.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S294>/Desync_Negative' */

            /* DataStoreWrite: '<S294>/Data Store Write13' incorporates:
             *  Constant: '<S294>/Constant3'
             */
            localDW->BC0_Sync_processed = true;

            /* DataStoreWrite: '<S294>/Data Store Write3' incorporates:
             *  Constant: '<S294>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S175>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Update LT' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Vote Decision' incorporates:
         *  EnablePort: '<S176>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S176>/Vote Decision' incorporates:
         *  EnablePort: '<S296>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 88.0) && (rtb_DataStoreRead8_c <
             localC->Sum3_h) && (*rtd_Local_Ticks == 88.0)) {
          /* Switch: '<S297>/Switch' incorporates:
           *  Constant: '<S296>/Constant'
           *  Constant: '<S297>/MAX error count'
           *  DataStoreRead: '<S296>/Data Store Read'
           *  DataStoreRead: '<S296>/Data Store Read1'
           *  Logic: '<S297>/AND'
           *  Logic: '<S297>/NOT'
           *  Logic: '<S297>/OR'
           *  RelationalOperator: '<S297>/Equal1'
           *  RelationalOperator: '<S297>/Equal2'
           */
          if ((1.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 1.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Switch1_f = 4294967295U;
          } else {
            rtb_Switch1_f = localDW->Board1_error_counter;
          }

          /* End of Switch: '<S297>/Switch' */

          /* Switch: '<S298>/Switch' incorporates:
           *  Constant: '<S296>/Constant1'
           *  Constant: '<S298>/MAX error count'
           *  DataStoreRead: '<S296>/Data Store Read'
           *  DataStoreRead: '<S296>/Data Store Read2'
           *  Logic: '<S298>/AND'
           *  Logic: '<S298>/NOT'
           *  Logic: '<S298>/OR'
           *  RelationalOperator: '<S298>/Equal1'
           *  RelationalOperator: '<S298>/Equal2'
           */
          if ((2.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 2.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Plus_j = 4294967295U;
          } else {
            rtb_Plus_j = localDW->Board2_error_counter;
          }

          /* End of Switch: '<S298>/Switch' */

          /* Switch: '<S299>/Switch' incorporates:
           *  Constant: '<S296>/Constant2'
           *  Constant: '<S299>/MAX error count'
           *  DataStoreRead: '<S296>/Data Store Read'
           *  DataStoreRead: '<S296>/Data Store Read3'
           *  Logic: '<S299>/AND'
           *  Logic: '<S299>/NOT'
           *  Logic: '<S299>/OR'
           *  RelationalOperator: '<S299>/Equal1'
           *  RelationalOperator: '<S299>/Equal2'
           */
          if ((3.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 3.0) &&
               (!localDW->BC0_Sync_processed))) {
            rtb_Plus1_b = 4294967295U;
          } else {
            rtb_Plus1_b = localDW->Board3_error_counter;
          }

          /* End of Switch: '<S299>/Switch' */

          /* MinMax: '<S296>/Max' */
          if (rtb_Switch1_f < rtb_Plus_j) {
            rtb_Plus2_p = rtb_Switch1_f;
          } else {
            rtb_Plus2_p = rtb_Plus_j;
          }

          if (rtb_Plus2_p < rtb_Plus1_b) {
            rtb_Plus1_b = rtb_Plus2_p;
          }

          /* End of MinMax: '<S296>/Max' */

          /* Switch: '<S296>/Switch5' incorporates:
           *  DataStoreRead: '<S296>/Data Store Read'
           *  RelationalOperator: '<S296>/Equal'
           *  RelationalOperator: '<S296>/Equal5'
           *  Switch: '<S296>/Switch6'
           *  Switch: '<S296>/Switch7'
           */
          if (localDW->BC0_Sync_processed) {
            /* DataTypeConversion: '<S296>/Cast' */
            Vote_s = (uint8_T)*rtd_Master_ID;
          } else if (rtb_Switch1_f == rtb_Plus1_b) {
            /* Switch: '<S296>/Switch6' incorporates:
             *  Constant: '<S296>/Constant4'
             *  DataTypeConversion: '<S296>/Cast'
             */
            Vote_s = (uint8_T)1.0;
          } else if (rtb_Plus1_b == rtb_Plus_j) {
            /* Switch: '<S296>/Switch7' incorporates:
             *  Constant: '<S296>/Constant5'
             *  DataTypeConversion: '<S296>/Cast'
             */
            Vote_s = (uint8_T)2.0;
          } else {
            /* DataTypeConversion: '<S296>/Cast' incorporates:
             *  Constant: '<S296>/Constant6'
             *  Switch: '<S296>/Switch7'
             */
            Vote_s = (uint8_T)3.0;
          }

          /* End of Switch: '<S296>/Switch5' */

          /* DataStoreWrite: '<S296>/Data Store Write5' */
          localDW->Own_Vote = Vote_s;

          /* DataStoreWrite: '<S296>/Data Store Write3' incorporates:
           *  Constant: '<S296>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S176>/Vote Decision' */
        /* End of Outputs for SubSystem: '<S163>/COMP Task - Vote Decision' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Vote1 Count' incorporates:
         *  EnablePort: '<S177>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S177>/Vote Count 1' incorporates:
         *  EnablePort: '<S300>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 176.0) && (rtb_DataStoreRead8_c <
             localC->Sum7_p) && ((*rtd_Local_Ticks == 176.0) &&
             localDW->new_msg_Rx_l && (*rtd_Board_ID != 1.0))) {
          /* DataStoreWrite: '<S300>/Data Store Write12' incorporates:
           *  Constant: '<S300>/Constant10'
           *  Constant: '<S300>/Constant11'
           *  Constant: '<S300>/Constant12'
           *  DataStoreRead: '<S177>/Data Store Read4'
           *  DataStoreRead: '<S300>/Data Store Read15'
           *  DataStoreRead: '<S300>/Data Store Read16'
           *  DataStoreRead: '<S300>/Data Store Read17'
           *  RelationalOperator: '<S300>/Equal13'
           *  RelationalOperator: '<S300>/Equal15'
           *  RelationalOperator: '<S300>/Equal17'
           *  Sum: '<S300>/Add'
           *  Sum: '<S300>/Add1'
           *  Sum: '<S300>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S300>/Data Store Write3' incorporates:
           *  Constant: '<S300>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S300>/Data Store Write' incorporates:
           *  Constant: '<S300>/HIGH'
           */
          localDW->BC0_Vote1_processed = true;
        }

        /* End of Outputs for SubSystem: '<S177>/Vote Count 1' */
        /* End of Outputs for SubSystem: '<S163>/COMP Task - Vote1 Count' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Vote1 check' incorporates:
         *  EnablePort: '<S178>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 172.0) && (rtb_DataStoreRead8_c <
             localC->Sum6_ph)) {
          if (!localDW->COMPTaskVote1check_MODE) {
            localDW->COMPTaskVote1check_MODE = true;
          }

          /* DataStoreRead: '<S178>/Data Store Read1' */
          rtb_DataStoreRead1_il = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S178>/Data Store Read2' */
          rtb_DataStoreRead2_f3 = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S178>/Data Store Read' */
          rtb_DataStoreRead_m3 = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S178>/Data Store Read3' */
          rtb_DataStoreRead3_ez = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S178>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 172.0);

          /* RelationalOperator: '<S178>/Equal6' incorporates:
           *  Constant: '<S178>/Constant2'
           */
          rtb_AND1_fb = (*rtd_Board_ID != 1.0);

          /* Logic: '<S178>/AND' */
          rtb_AND_br = (rtb_AND_ck && rtb_AND1_fb);

          /* Outputs for Enabled SubSystem: '<S178>/Process_Messages1' */
          Process_Messages1(rtb_AND_br, rtb_DataStoreRead1_il,
                            rtb_DataStoreRead2_f3, &rtb_DataStoreRead_m3,
                            &rtb_DataStoreRead3_ez, 1.0,
                            &localB->Process_Messages1_c,
                            &localDW->Process_Messages1_c, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG_i,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S178>/Process_Messages1' */

          /* Logic: '<S178>/AND1' incorporates:
           *  Constant: '<S178>/Constant1'
           *  Logic: '<S178>/NOT'
           */
          rtb_AND1_eh = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S178>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_eh, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S178>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S178>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S178>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Vote1 check' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Vote2 Count' incorporates:
         *  EnablePort: '<S179>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S179>/Vote Count 2' incorporates:
         *  EnablePort: '<S329>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 264.0) && (rtb_DataStoreRead8_c <
             localC->Sum10_c) && ((*rtd_Local_Ticks == 264.0) &&
             localDW->new_msg_Rx_l && (*rtd_Board_ID != 2.0))) {
          /* DataStoreWrite: '<S329>/Data Store Write12' incorporates:
           *  Constant: '<S329>/Constant10'
           *  Constant: '<S329>/Constant11'
           *  Constant: '<S329>/Constant12'
           *  DataStoreRead: '<S179>/Data Store Read4'
           *  DataStoreRead: '<S329>/Data Store Read15'
           *  DataStoreRead: '<S329>/Data Store Read16'
           *  DataStoreRead: '<S329>/Data Store Read17'
           *  RelationalOperator: '<S329>/Equal13'
           *  RelationalOperator: '<S329>/Equal15'
           *  RelationalOperator: '<S329>/Equal17'
           *  Sum: '<S329>/Add'
           *  Sum: '<S329>/Add1'
           *  Sum: '<S329>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S329>/Data Store Write3' incorporates:
           *  Constant: '<S329>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S329>/Data Store Write' incorporates:
           *  Constant: '<S329>/HIGH'
           */
          localDW->BC0_Vote2_processed = true;
        }

        /* End of Outputs for SubSystem: '<S179>/Vote Count 2' */
        /* End of Outputs for SubSystem: '<S163>/COMP Task - Vote2 Count' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Vote2 check' incorporates:
         *  EnablePort: '<S180>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 260.0) && (rtb_DataStoreRead8_c <
             localC->Sum9_m)) {
          if (!localDW->COMPTaskVote2check_MODE) {
            localDW->COMPTaskVote2check_MODE = true;
          }

          /* DataStoreRead: '<S180>/Data Store Read1' */
          rtb_DataStoreRead1_j2 = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S180>/Data Store Read2' */
          rtb_DataStoreRead2_m = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S180>/Data Store Read' */
          rtb_DataStoreRead_ak = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S180>/Data Store Read3' */
          rtb_DataStoreRead3_d4 = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S180>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 260.0);

          /* RelationalOperator: '<S180>/Equal6' incorporates:
           *  Constant: '<S180>/Constant2'
           */
          rtb_AND1_fb = (*rtd_Board_ID != 2.0);

          /* Logic: '<S180>/AND' */
          rtb_AND_b0 = (rtb_AND_ck && rtb_AND1_fb);

          /* Outputs for Enabled SubSystem: '<S180>/Process_Messages' */
          Process_Messages1(rtb_AND_b0, rtb_DataStoreRead1_j2,
                            rtb_DataStoreRead2_m, &rtb_DataStoreRead_ak,
                            &rtb_DataStoreRead3_d4, 2.0,
                            &localB->Process_Messages_g,
                            &localDW->Process_Messages_g, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG_i,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S180>/Process_Messages' */

          /* Logic: '<S180>/AND1' incorporates:
           *  Constant: '<S180>/Constant1'
           *  Logic: '<S180>/NOT'
           */
          rtb_AND1_bf = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S180>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_bf, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S180>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S180>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Vote2 check' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Vote3 Count' incorporates:
         *  EnablePort: '<S181>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S181>/Vote Count 3' incorporates:
         *  EnablePort: '<S358>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 352.0) && (rtb_DataStoreRead8_c <
             localC->Sum11_i) && ((*rtd_Local_Ticks == 352.0) &&
             localDW->new_msg_Rx_l && (*rtd_Board_ID != 3.0))) {
          /* DataStoreWrite: '<S358>/Data Store Write12' incorporates:
           *  Constant: '<S358>/Constant10'
           *  Constant: '<S358>/Constant11'
           *  Constant: '<S358>/Constant12'
           *  DataStoreRead: '<S181>/Data Store Read4'
           *  DataStoreRead: '<S358>/Data Store Read15'
           *  DataStoreRead: '<S358>/Data Store Read16'
           *  DataStoreRead: '<S358>/Data Store Read17'
           *  RelationalOperator: '<S358>/Equal13'
           *  RelationalOperator: '<S358>/Equal15'
           *  RelationalOperator: '<S358>/Equal17'
           *  Sum: '<S358>/Add'
           *  Sum: '<S358>/Add1'
           *  Sum: '<S358>/Add2'
           */
          localDW->Votes_count.Third_Board += (real_T)(3.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.First_Board += (real_T)(1.0 ==
            localDW->Msg_Rx_d.Buffer_2);
          localDW->Votes_count.Second_Board += (real_T)(2.0 ==
            localDW->Msg_Rx_d.Buffer_2);

          /* DataStoreWrite: '<S358>/Data Store Write3' incorporates:
           *  Constant: '<S358>/Constant1'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreWrite: '<S358>/Data Store Write' incorporates:
           *  Constant: '<S358>/HIGH'
           */
          localDW->BC0_Vote3_processed = true;
        }

        /* End of Outputs for SubSystem: '<S181>/Vote Count 3' */
        /* End of Outputs for SubSystem: '<S163>/COMP Task - Vote3 Count' */

        /* Outputs for Enabled SubSystem: '<S163>/COMP Task - Vote3 check' incorporates:
         *  EnablePort: '<S182>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 348.0) && (rtb_DataStoreRead8_c <
             localC->Sum13)) {
          if (!localDW->COMPTaskVote3check_MODE) {
            localDW->COMPTaskVote3check_MODE = true;
          }

          /* DataStoreRead: '<S182>/Data Store Read1' */
          rtb_DataStoreRead1_ax = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S182>/Data Store Read2' */
          rtb_DataStoreRead2_cx = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S182>/Data Store Read' */
          rtb_DataStoreRead_l5i = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S182>/Data Store Read3' */
          rtb_DataStoreRead3_dw = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S182>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 348.0);

          /* RelationalOperator: '<S182>/Equal6' incorporates:
           *  Constant: '<S182>/Constant2'
           */
          rtb_AND1_fb = (*rtd_Board_ID != 3.0);

          /* Logic: '<S182>/AND' */
          rtb_AND_fe = (rtb_AND_ck && rtb_AND1_fb);

          /* Outputs for Enabled SubSystem: '<S182>/Process_Messages' */
          Process_Messages1(rtb_AND_fe, rtb_DataStoreRead1_ax,
                            rtb_DataStoreRead2_cx, &rtb_DataStoreRead_l5i,
                            &rtb_DataStoreRead3_dw, 3.0,
                            &localB->Process_Messages_gc,
                            &localDW->Process_Messages_gc, &localDW->Msg_Rx_d,
                            rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG_i,
                            &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S182>/Process_Messages' */

          /* Logic: '<S182>/AND1' incorporates:
           *  Constant: '<S182>/Constant1'
           *  Logic: '<S182>/NOT'
           */
          rtb_AND1_oq = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S182>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_oq, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S182>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S182>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S182>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMP Task - Vote3 check' */

        /* Logic: '<S163>/AND17' incorporates:
         *  Constant: '<S163>/Constant'
         *  Constant: '<S163>/Constant17'
         *  Constant: '<S163>/Constant19'
         *  Constant: '<S163>/Constant2'
         *  Constant: '<S163>/Constant21'
         *  Constant: '<S163>/Constant23'
         *  Constant: '<S163>/Constant27'
         *  Constant: '<S163>/Constant33'
         *  Constant: '<S163>/Constant34'
         *  Constant: '<S163>/Constant6'
         *  Constant: '<S163>/Constant8'
         *  Constant: '<S174>/Constant'
         *  Constant: '<S175>/Constant1'
         *  Constant: '<S175>/Constant4'
         *  Constant: '<S177>/Constant4'
         *  Constant: '<S178>/Constant1'
         *  Constant: '<S179>/Constant4'
         *  Constant: '<S180>/Constant1'
         *  Constant: '<S181>/Constant4'
         *  Constant: '<S182>/Constant1'
         *  DataStoreRead: '<S163>/Data Store Read11'
         *  DataStoreRead: '<S175>/Data Store Read'
         *  DataStoreRead: '<S175>/Data Store Read1'
         *  DataStoreRead: '<S177>/Data Store Read5'
         *  DataStoreRead: '<S179>/Data Store Read5'
         *  DataStoreRead: '<S181>/Data Store Read5'
         *  DataStoreWrite: '<S264>/Data Store Write2'
         *  Logic: '<S163>/AND'
         *  Logic: '<S163>/AND1'
         *  Logic: '<S163>/AND11'
         *  Logic: '<S163>/AND12'
         *  Logic: '<S163>/AND18'
         *  Logic: '<S163>/AND19'
         *  Logic: '<S163>/AND2'
         *  Logic: '<S163>/AND3'
         *  Logic: '<S163>/AND5'
         *  Logic: '<S163>/AND6'
         *  Logic: '<S163>/AND8'
         *  Logic: '<S163>/AND9'
         *  Logic: '<S163>/NOT1'
         *  Logic: '<S163>/NOT2'
         *  Logic: '<S174>/AND'
         *  Logic: '<S175>/AND'
         *  Logic: '<S175>/AND1'
         *  Logic: '<S177>/AND'
         *  Logic: '<S179>/AND'
         *  Logic: '<S181>/AND'
         *  RelationalOperator: '<S163>/GreaterThan'
         *  RelationalOperator: '<S163>/GreaterThan1'
         *  RelationalOperator: '<S163>/GreaterThan10'
         *  RelationalOperator: '<S163>/GreaterThan11'
         *  RelationalOperator: '<S163>/GreaterThan12'
         *  RelationalOperator: '<S163>/GreaterThan13'
         *  RelationalOperator: '<S163>/GreaterThan14'
         *  RelationalOperator: '<S163>/GreaterThan15'
         *  RelationalOperator: '<S163>/GreaterThan16'
         *  RelationalOperator: '<S163>/GreaterThan17'
         *  RelationalOperator: '<S163>/GreaterThan2'
         *  RelationalOperator: '<S163>/GreaterThan20'
         *  RelationalOperator: '<S163>/GreaterThan21'
         *  RelationalOperator: '<S163>/GreaterThan22'
         *  RelationalOperator: '<S163>/GreaterThan23'
         *  RelationalOperator: '<S163>/GreaterThan3'
         *  RelationalOperator: '<S163>/GreaterThan4'
         *  RelationalOperator: '<S163>/GreaterThan5'
         *  RelationalOperator: '<S163>/GreaterThan6'
         *  RelationalOperator: '<S163>/GreaterThan7'
         *  RelationalOperator: '<S175>/Equal'
         *  RelationalOperator: '<S175>/Equal1'
         *  RelationalOperator: '<S175>/Equal2'
         *  RelationalOperator: '<S176>/Equal'
         *  RelationalOperator: '<S177>/Equal'
         *  RelationalOperator: '<S177>/Equal2'
         *  RelationalOperator: '<S179>/Equal'
         *  RelationalOperator: '<S179>/Equal2'
         *  RelationalOperator: '<S181>/Equal'
         *  RelationalOperator: '<S181>/Equal2'
         */
        rtb_AND17_f = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4_p) && (!localDW->BC0_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S163>/COMM Task - Sync bc 0' */
        COMMTaskSyncbc0(rtb_AND17_f, 0.0, &localB->COMMTaskSyncbc0_b,
                        &localC->COMMTaskSyncbc0_b, &localDW->COMMTaskSyncbc0_b,
                        rtd_Board_ID, rtd_Local_Ticks, &localDW->Msg_Rx_d,
                        rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, rtd_New_Msg_Ready_CAN1,
                        rtd_New_Msg_Ready_CAN2, &localDW->Role_ID, rtd_RxID_CAN1,
                        rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                        rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx_l);

        /* End of Outputs for SubSystem: '<S163>/COMM Task - Sync bc 0' */

        /* Outputs for Enabled SubSystem: '<S163>/COMM Task - Vote1' incorporates:
         *  EnablePort: '<S167>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 92.0) && (rtb_DataStoreRead8_c <
             localC->Sum5_d)) {
          if (!localDW->COMMTaskVote1_MODE) {
            localDW->COMMTaskVote1_MODE = true;
          }

          /* RelationalOperator: '<S167>/Equal2' incorporates:
           *  Constant: '<S167>/Constant3'
           */
          rtb_Equal2_ic = (*rtd_Board_ID == 1.0);

          /* Logic: '<S167>/NOT' */
          rtb_NOT_jl = !rtb_Equal2_ic;

          /* Outputs for Enabled SubSystem: '<S167>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_jl, 92.0, &localB->Receptionsubstasks_k,
                             &localC->Receptionsubstasks_k,
                             &localDW->Receptionsubstasks_k, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S167>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S167>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_ic, 92.0,
            &localB->Transmissionsubtasks_pw, &localC->Transmissionsubtasks_pw,
            &localDW->Transmissionsubtasks_pw, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S167>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMM Task - Vote1' */

        /* Outputs for Enabled SubSystem: '<S163>/COMM Task - Vote2' incorporates:
         *  EnablePort: '<S168>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 180.0) && (rtb_DataStoreRead8_c <
             localC->Sum8_a)) {
          if (!localDW->COMMTaskVote2_MODE) {
            localDW->COMMTaskVote2_MODE = true;
          }

          /* RelationalOperator: '<S168>/Equal2' incorporates:
           *  Constant: '<S168>/Constant3'
           */
          rtb_Equal2_hs = (*rtd_Board_ID == 2.0);

          /* Logic: '<S168>/NOT' */
          rtb_NOT_gq = !rtb_Equal2_hs;

          /* Outputs for Enabled SubSystem: '<S168>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_gq, 180.0, &localB->Receptionsubstasks_g,
                             &localC->Receptionsubstasks_g,
                             &localDW->Receptionsubstasks_g, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S168>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S168>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_hs, 180.0,
            &localB->Transmissionsubtasks_d, &localC->Transmissionsubtasks_d,
            &localDW->Transmissionsubtasks_d, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S168>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S168>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

            /* Disable for Outport: '<S168>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S168>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S168>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S168>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMM Task - Vote2' */

        /* Outputs for Enabled SubSystem: '<S163>/COMM Task - Vote3' incorporates:
         *  EnablePort: '<S169>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 268.0) && (rtb_DataStoreRead8_c <
             localC->Sum12_n)) {
          if (!localDW->COMMTaskVote3_MODE) {
            localDW->COMMTaskVote3_MODE = true;
          }

          /* RelationalOperator: '<S169>/Equal2' incorporates:
           *  Constant: '<S169>/Constant3'
           */
          rtb_Equal2_o = (*rtd_Board_ID == 3.0);

          /* Logic: '<S169>/NOT' */
          rtb_NOT_oz = !rtb_Equal2_o;

          /* Outputs for Enabled SubSystem: '<S169>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_oz, 268.0, &localB->Receptionsubstasks_e,
                             &localC->Receptionsubstasks_e,
                             &localDW->Receptionsubstasks_e, rtd_Local_Ticks,
                             &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_l);

          /* End of Outputs for SubSystem: '<S169>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S169>/Transmission subtasks' */
          Transmissionsubtasks_p(rtb_Equal2_o, 268.0,
            &localB->Transmissionsubtasks_a, &localC->Transmissionsubtasks_a,
            &localDW->Transmissionsubtasks_a, rtd_Board_ID, rtd_Local_Ticks,
            rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, &localDW->Own_Vote, rtd_TxID_CAN1,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
            &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S169>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S169>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S169>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S169>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S169>/Transmission subtasks' */

            /* Disable for Outport: '<S169>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S169>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S169>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S169>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S163>/COMM Task - Vote3' */

        /* Logic: '<S163>/OR1' incorporates:
         *  Constant: '<S163>/Constant'
         *  Constant: '<S163>/Constant28'
         *  Constant: '<S163>/Constant3'
         *  Constant: '<S163>/Constant9'
         *  Logic: '<S163>/AND10'
         *  Logic: '<S163>/AND4'
         *  Logic: '<S163>/AND7'
         *  RelationalOperator: '<S163>/GreaterThan18'
         *  RelationalOperator: '<S163>/GreaterThan19'
         *  RelationalOperator: '<S163>/GreaterThan24'
         *  RelationalOperator: '<S163>/GreaterThan25'
         *  RelationalOperator: '<S163>/GreaterThan8'
         *  RelationalOperator: '<S163>/GreaterThan9'
         */
        localB->OR1_oo =
          (localB->COMMTaskSyncbc0_b.Transmissionsubtasks_l.Equal7_a ||
           localB->Transmissionsubtasks_pw.Equal7_m ||
           localB->Transmissionsubtasks_d.Equal7_m ||
           localB->Transmissionsubtasks_a.Equal7_m);

        /* Logic: '<S163>/OR2' */
        localB->OR2_p = (localB->COMMTaskSyncbc0_b.Receptionsubstasks_h.AND ||
                         localB->Receptionsubstasks_k.AND ||
                         localB->Receptionsubstasks_g.AND ||
                         localB->Receptionsubstasks_e.AND);

        /* Logic: '<S163>/OR3' */
        localB->OR3_bn = (localB->COMMTaskSyncbc0_b.Receptionsubstasks_h.AND1 ||
                          localB->Receptionsubstasks_k.AND1 ||
                          localB->Receptionsubstasks_g.AND1 ||
                          localB->Receptionsubstasks_e.AND1);

        /* Logic: '<S163>/OR4' */
        localB->OR4_o = (localB->COMMTaskSyncbc0_b.Transmissionsubtasks_l.Equal7
                         || localB->Transmissionsubtasks_pw.Equal7 ||
                         localB->Transmissionsubtasks_d.Equal7 ||
                         localB->Transmissionsubtasks_a.Equal7);
      } else {
        if (localDW->controllerbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S174>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S174>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S178>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S178>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S180>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S182>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S182>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
              &localDW->COMMTaskSyncbc0_b);
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S168>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

            /* Disable for Outport: '<S168>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S168>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S168>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S168>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S169>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S169>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S169>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S169>/Transmission subtasks' */

            /* Disable for Outport: '<S169>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S169>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S169>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S169>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote3' */

          /* Disable for Outport: '<S163>/Send_Message_CAN1' */
          localB->OR1_oo = false;

          /* Disable for Outport: '<S163>/Send_Message_CAN2' */
          localB->OR4_o = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN1' */
          localB->OR2_p = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN2' */
          localB->OR3_bn = false;
          localDW->controllerbasiccycle0_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S159>/controller basic cycle 0' */

      /* Outputs for Enabled SubSystem: '<S159>/controller basic cycle 1' incorporates:
       *  EnablePort: '<S164>/Enable'
       */
      if (localDW->basic_cycle_count == 1.0) {
        if (!localDW->controllerbasiccycle1_MODE) {
          localDW->controllerbasiccycle1_MODE = true;
        }

        /* DataStoreRead: '<S164>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Do calculations ' incorporates:
         *  EnablePort: '<S391>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S391>/calculations' incorporates:
         *  EnablePort: '<S481>/Enable'
         */
        if ((*rtd_Local_Ticks >= 256.0) && (*rtd_Local_Ticks < localC->Sum8) &&
            ((*rtd_Local_Ticks == 256.0) && (!localDW->Error_SensorValues_NotRX)))
        {
          /* DataStoreWrite: '<S481>/Data Store Write8' incorporates:
           *  Constant: '<S481>/Constant4'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* Gain: '<S481>/Gain' incorporates:
           *  DataStoreRead: '<S481>/Data Store Read'
           *  DataStoreWrite: '<S481>/Data Store Write'
           */
          localDW->Test1 = (uint32_T)((uint16_T)32768U) * localDW->rxTest1;

          /* Gain: '<S481>/Gain2' incorporates:
           *  DataStoreRead: '<S481>/Data Store Read1'
           *  DataStoreWrite: '<S481>/Data Store Write2'
           */
          localDW->Test3 = (uint32_T)((uint16_T)32768U) * localDW->rxTest3;

          /* Gain: '<S481>/Gain1' incorporates:
           *  DataStoreRead: '<S481>/Data Store Read2'
           *  DataStoreWrite: '<S481>/Data Store Write1'
           */
          localDW->Test2 = (uint32_T)((uint16_T)32768U) * localDW->rxTest2;
        }

        /* End of Outputs for SubSystem: '<S391>/calculations' */
        /* End of Outputs for SubSystem: '<S164>/COMP Task - Do calculations ' */

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Get master Up to date' incorporates:
         *  EnablePort: '<S392>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S392>/calculations' incorporates:
         *  EnablePort: '<S482>/Enable'
         */
        if ((*rtd_Local_Ticks >= 348.0) && (*rtd_Local_Ticks < localC->Sum12) &&
            ((*rtd_Local_Ticks == 348.0) && (!localDW->Error_BS_NotRX))) {
          /* DataStoreWrite: '<S482>/Data Store Write8' incorporates:
           *  Constant: '<S482>/Constant4'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* RelationalOperator: '<S482>/Equal1' incorporates:
           *  Constant: '<S482>/Constant2'
           *  DataStoreRead: '<S482>/Data Store Read4'
           */
          rtb_AND_ck = (localDW->Role_ID == 1.0);

          /* Switch: '<S482>/Switch1' incorporates:
           *  Constant: '<S482>/Constant5'
           *  Constant: '<S482>/Constant6'
           *  DataStoreRead: '<S482>/Data Store Read'
           *  DataStoreRead: '<S482>/Data Store Read1'
           *  Switch: '<S482>/Switch'
           */
          if (rtb_AND_ck) {
            b2_s = board2_online;
            b1_s = board1_online;
          } else {
            b2_s = localDW->B2;
            b1_s = localDW->B1;
          }

          /* End of Switch: '<S482>/Switch1' */

          /* DataStoreWrite: '<S482>/Data Store Write' */
          localDW->rxB2_status = b2_s;

          /* DataStoreWrite: '<S482>/Data Store Write1' */
          localDW->rxB1_status = b1_s;

          /* Switch: '<S482>/Switch2' incorporates:
           *  Constant: '<S482>/Constant7'
           *  Constant: '<S482>/Constant8'
           *  DataStoreRead: '<S482>/Data Store Read2'
           *  DataStoreRead: '<S482>/Data Store Read3'
           *  Switch: '<S482>/Switch3'
           */
          if (rtb_AND_ck) {
            b3_s = board3_online;
            b4_s = board4_online;
          } else {
            b3_s = localDW->B3;
            b4_s = localDW->B4;
          }

          /* End of Switch: '<S482>/Switch2' */

          /* DataStoreWrite: '<S482>/Data Store Write2' */
          localDW->rxB3_status = b3_s;

          /* DataStoreWrite: '<S482>/Data Store Write4' */
          localDW->rxB4_status = b4_s;
        }

        /* End of Outputs for SubSystem: '<S392>/calculations' */
        /* End of Outputs for SubSystem: '<S164>/COMP Task - Get master Up to date' */

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Process_BS_Msg' incorporates:
         *  EnablePort: '<S393>/Enable'
         */
        if ((*rtd_Local_Ticks >= 344.0) && (*rtd_Local_Ticks < localC->Sum6_p))
        {
          if (!localDW->COMPTaskProcess_BS_Msg_MODE) {
            localDW->COMPTaskProcess_BS_Msg_MODE = true;
          }

          /* DataStoreRead: '<S393>/Data Store Read1' */
          rtb_DataStoreRead1_fh = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S393>/Data Store Read2' */
          rtb_DataStoreRead2_pl = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S393>/Data Store Read' */
          rtb_DataStoreRead_iy = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S393>/Data Store Read3' */
          rtb_DataStoreRead3_g = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S393>/Data Store Read15' */
          rtb_DataStoreRead15_g = *rtd_Master_ID;

          /* RelationalOperator: '<S393>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 344.0);

          /* RelationalOperator: '<S393>/Equal5' incorporates:
           *  Constant: '<S393>/Constant26'
           *  DataStoreRead: '<S393>/Data Store Read6'
           */
          rtb_AND1_fb = (localDW->Role_ID == 2.0);

          /* Logic: '<S393>/AND' */
          rtb_AND_bp = (rtb_AND_ck && rtb_AND1_fb);

          /* Outputs for Enabled SubSystem: '<S393>/Process_Messages' */
          Process_Messages(rtb_AND_bp, rtb_DataStoreRead1_fh,
                           rtb_DataStoreRead2_pl, &rtb_DataStoreRead_iy,
                           &rtb_DataStoreRead3_g, 1.0, rtb_DataStoreRead15_g,
                           &localB->Process_Messages_o,
                           &localDW->Process_Messages_o, &localDW->Msg_Rx_f,
                           rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG_i,
                           &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S393>/Process_Messages' */

          /* Logic: '<S393>/AND1' incorporates:
           *  Constant: '<S393>/Constant'
           *  Logic: '<S393>/NOT'
           */
          rtb_AND1_ff = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S393>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ff, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S393>/Reset Tx msg counter' */

          /* Outputs for Enabled SubSystem: '<S393>/Update Msg buffer' incorporates:
           *  EnablePort: '<S485>/Enable'
           */
          if ((*rtd_Local_Ticks == 346.0) && rtb_AND1_fb) {
            /* Outputs for Enabled SubSystem: '<S485>/Set Values Update' incorporates:
             *  EnablePort: '<S512>/Enable'
             */
            if (localDW->new_msg_Rx_g) {
              /* DataTypeConversion: '<S512>/Data Type Conversion1' incorporates:
               *  DataStoreRead: '<S485>/Data Store Read6'
               *  DataStoreWrite: '<S512>/Data Store Write'
               */
              localDW->B2 = localDW->Msg_Rx_f.Buffer_3;

              /* DataTypeConversion: '<S512>/Data Type Conversion' incorporates:
               *  DataStoreRead: '<S485>/Data Store Read6'
               *  DataStoreWrite: '<S512>/Data Store Write1'
               */
              localDW->B1 = localDW->Msg_Rx_f.Buffer_2;

              /* DataTypeConversion: '<S512>/Data Type Conversion2' incorporates:
               *  DataStoreRead: '<S485>/Data Store Read6'
               *  DataStoreWrite: '<S512>/Data Store Write2'
               */
              localDW->B3 = localDW->Msg_Rx_f.Buffer_4;

              /* DataTypeConversion: '<S512>/Data Type Conversion3' incorporates:
               *  DataStoreRead: '<S485>/Data Store Read6'
               *  DataStoreWrite: '<S512>/Data Store Write4'
               */
              localDW->B4 = localDW->Msg_Rx_f.Buffer_5;

              /* DataStoreWrite: '<S512>/Data Store Write3' incorporates:
               *  Constant: '<S512>/Constant'
               */
              localDW->Error_BS_NotRX = false;
            }

            /* End of Outputs for SubSystem: '<S485>/Set Values Update' */

            /* Outputs for Enabled SubSystem: '<S485>/Set Values not Rx' incorporates:
             *  EnablePort: '<S513>/Enable'
             */
            if (!localDW->new_msg_Rx_g) {
              /* DataStoreWrite: '<S513>/Data Store Write' incorporates:
               *  Constant: '<S513>/Constant'
               */
              localDW->Error_BS_NotRX = true;
            }

            /* End of Outputs for SubSystem: '<S485>/Set Values not Rx' */
          }

          /* End of Outputs for SubSystem: '<S393>/Update Msg buffer' */
        } else {
          if (localDW->COMPTaskProcess_BS_Msg_MODE) {
            /* Disable for Enabled SubSystem: '<S393>/Process_Messages' */
            if (localDW->Process_Messages_o.Process_Messages_MODE) {
              Process_Messages_Disable(&localB->Process_Messages_o,
                &localDW->Process_Messages_o);
            }

            /* End of Disable for SubSystem: '<S393>/Process_Messages' */
            localDW->COMPTaskProcess_BS_Msg_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S164>/COMP Task - Process_BS_Msg' */

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Reset Variables BC1' incorporates:
         *  EnablePort: '<S394>/Enable'
         */
        if ((*rtd_Local_Ticks >= 360.0) && (*rtd_Local_Ticks < localC->Sum18_e))
        {
          /* Outputs for Enabled SubSystem: '<S394>/Check Timeouts' incorporates:
           *  EnablePort: '<S514>/Enable'
           */
          if (*rtd_Local_Ticks == 360.0) {
            /* Logic: '<S514>/AND9' incorporates:
             *  DataStoreRead: '<S514>/Data Store Read25'
             *  DataStoreWrite: '<S514>/Data Store Write8'
             *  Logic: '<S514>/NOT4'
             *  RelationalOperator: '<S514>/Equal9'
             */
            localDW->Toggle_Pin_A1 = ((!localDW->BC1_Sync_processed) &&
              (*rtd_Master_ID != *rtd_Board_ID));

            /* Switch: '<S514>/Switch7' incorporates:
             *  Constant: '<S514>/Constant16'
             *  DataStoreRead: '<S514>/Data Store Read23'
             *  DataStoreWrite: '<S514>/Data Store Write8'
             *  DataStoreWrite: '<S514>/Data Store Write9'
             *  Sum: '<S514>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc1_missed_counter_h += 1.0;
            }

            /* End of Switch: '<S514>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S394>/Check Timeouts' */

          /* RelationalOperator: '<S394>/Equal1' incorporates:
           *  Constant: '<S164>/Constant41'
           *  RelationalOperator: '<S394>/Equal2'
           */
          rtb_Equal1_hs = (*rtd_Local_Ticks == 362.0);

          /* Outputs for Enabled SubSystem: '<S394>/Reset Variables' */
          ResetVariables(rtb_Equal1_hs, &localDW->BC1_Sync_processed,
                         &localDW->Desync_Positive, rtd_Toggle_Pin_A0);

          /* End of Outputs for SubSystem: '<S394>/Reset Variables' */
        }

        /* End of Outputs for SubSystem: '<S164>/COMP Task - Reset Variables BC1' */

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' incorporates:
         *  EnablePort: '<S395>/Enable'
         */
        if ((*rtd_Local_Ticks >= 168.0) && (*rtd_Local_Ticks < localC->Sum5_h))
        {
          if (!localDW->COMPTaskRx_Set_Values_Check_MOD) {
            localDW->COMPTaskRx_Set_Values_Check_MOD = true;
          }

          /* DataStoreRead: '<S395>/Data Store Read1' */
          rtb_DataStoreRead1_ka = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S395>/Data Store Read2' */
          rtb_DataStoreRead2_cy = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S395>/Data Store Read' */
          rtb_DataStoreRead_c = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S395>/Data Store Read3' */
          rtb_DataStoreRead3_dy = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S395>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 168.0);

          /* RelationalOperator: '<S395>/Equal13' incorporates:
           *  Constant: '<S395>/Constant57'
           */
          rtb_AND1_fb = (*rtd_Board_ID != 5.0);

          /* Outputs for Enabled SubSystem: '<S395>/Process_Messages' incorporates:
           *  EnablePort: '<S516>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_fb) {
            if (!localDW->Process_Messages_MODE_g) {
              localDW->Process_Messages_MODE_g = true;
            }

            /* Outputs for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_e(rtb_DataStoreRead1_ka,
              &rtb_DataStoreRead_c, 5.0,
              &localB->DemuxmessageCAN1andcheckcoher_f,
              &localDW->DemuxmessageCAN1andcheckcoher_f,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S516>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_m(rtb_DataStoreRead2_cy,
              &rtb_DataStoreRead3_dy, 5.0,
              &localB->DemuxmessageCAN1andcheckcohe_g5,
              &localDW->DemuxmessageCAN1andcheckcohe_g5,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S516>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S516>/Switch' incorporates:
             *  Constant: '<S395>/Constant51'
             *  DataStoreWrite: '<S516>/Data Store Write'
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

            /* End of Switch: '<S516>/Switch' */

            /* Logic: '<S516>/OR' incorporates:
             *  DataStoreWrite: '<S516>/Data Store Write1'
             */
            localDW->new_msg_Rx_g =
              (localB->DemuxmessageCAN1andcheckcoher_f.Equal ||
               localB->DemuxmessageCAN1andcheckcohe_g5.Equal);

            /* DataStoreWrite: '<S516>/Data Store Write3' incorporates:
             *  Constant: '<S516>/Constant2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }
          }

          /* End of Outputs for SubSystem: '<S395>/Process_Messages' */

          /* Logic: '<S395>/AND1' incorporates:
           *  Constant: '<S395>/Constant51'
           *  Logic: '<S395>/AND'
           *  Logic: '<S395>/NOT'
           */
          rtb_AND1_m = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S395>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_m, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S395>/Reset Tx msg counter' */

          /* Outputs for Enabled SubSystem: '<S395>/Update Msg buffer' incorporates:
           *  EnablePort: '<S518>/Enable'
           */
          if ((*rtd_Local_Ticks == 170.0) && rtb_AND1_fb) {
            /* DataStoreRead: '<S518>/Data Store Read5' */
            new_set_rx_s = localDW->new_msg_Rx_g;

            /* Outputs for Enabled SubSystem: '<S518>/Set Values Update' incorporates:
             *  EnablePort: '<S545>/Enable'
             */
            if (new_set_rx_s) {
              /* Outputs for Atomic SubSystem: '<S548>/Bit Shift' */
              BitShift(localDW->Msg_Rx_f.Buffer_3, &localB->BitShift_a);

              /* End of Outputs for SubSystem: '<S548>/Bit Shift' */

              /* Outputs for Atomic SubSystem: '<S548>/Bit Shift1' */
              BitShift1(localB->BitShift_a.y, &localB->BitShift1_j);

              /* End of Outputs for SubSystem: '<S548>/Bit Shift1' */

              /* Outputs for Atomic SubSystem: '<S547>/Bit Shift' */
              BitShift(localDW->Msg_Rx_f.Buffer_2, &localB->BitShift_gr);

              /* End of Outputs for SubSystem: '<S547>/Bit Shift' */

              /* Outputs for Atomic SubSystem: '<S547>/Bit Shift1' */
              BitShift1(localB->BitShift_gr.y, &localB->BitShift1_k);

              /* End of Outputs for SubSystem: '<S547>/Bit Shift1' */

              /* Outputs for Atomic SubSystem: '<S549>/Bit Shift' */
              BitShift(localDW->Msg_Rx_f.Buffer_4, &localB->BitShift_o);

              /* End of Outputs for SubSystem: '<S549>/Bit Shift' */

              /* Outputs for Atomic SubSystem: '<S549>/Bit Shift1' */
              BitShift1(localB->BitShift_o.y, &localB->BitShift1_kf);

              /* End of Outputs for SubSystem: '<S549>/Bit Shift1' */
            }

            /* End of Outputs for SubSystem: '<S518>/Set Values Update' */
          }

          /* End of Outputs for SubSystem: '<S395>/Update Msg buffer' */
        } else {
          if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
            /* Disable for Enabled SubSystem: '<S395>/Process_Messages' */
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }

            /* End of Disable for SubSystem: '<S395>/Process_Messages' */
            localDW->COMPTaskRx_Set_Values_Check_MOD = false;
          }
        }

        /* End of Outputs for SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S396>/Enable'
         */
        if ((*rtd_Local_Ticks >= 80.0) && (*rtd_Local_Ticks < localC->Sum1_h) &&
            (!localDW->BC1_Sync_processed)) {
          if (!localDW->COMPTaskSyncbc1check_MODE_g) {
            localDW->COMPTaskSyncbc1check_MODE_g = true;
          }

          /* DataStoreRead: '<S396>/Data Store Read1' */
          rtb_DataStoreRead1_pg = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S396>/Data Store Read2' */
          rtb_DataStoreRead2_ae = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S396>/Data Store Read' */
          rtb_DataStoreRead_dg = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S396>/Data Store Read3' */
          rtb_DataStoreRead3_i4 = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S396>/Data Store Read15' */
          rtb_DataStoreRead15_f = *rtd_Master_ID;

          /* RelationalOperator: '<S396>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 80.0);

          /* RelationalOperator: '<S396>/Equal5' incorporates:
           *  Constant: '<S396>/Constant26'
           *  DataStoreRead: '<S396>/Data Store Read6'
           */
          rtb_AND1_fb = (localDW->Role_ID == 2.0);

          /* Outputs for Enabled SubSystem: '<S396>/Process_Messages' incorporates:
           *  EnablePort: '<S562>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_fb) {
            if (!localDW->Process_Messages_MODE_j) {
              localDW->Process_Messages_MODE_j = true;
            }

            /* Outputs for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoheren(rtb_DataStoreRead1_pg,
              &rtb_DataStoreRead_dg, 1.0, rtb_DataStoreRead15_f,
              &localB->DemuxmessageCAN1andcheckcoher_a,
              &localDW->DemuxmessageCAN1andcheckcoher_a,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S562>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_p(rtb_DataStoreRead2_ae,
              &rtb_DataStoreRead3_i4, 1.0, rtb_DataStoreRead15_f,
              &localB->DemuxmessageCAN1andcheckcoher_i,
              &localDW->DemuxmessageCAN1andcheckcoher_i,
              &localDW->msg_count_DEBUG_i);

            /* End of Outputs for SubSystem: '<S562>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S562>/Switch' incorporates:
             *  Constant: '<S396>/Constant'
             *  DataStoreWrite: '<S562>/Data Store Write'
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

            /* End of Switch: '<S562>/Switch' */

            /* Logic: '<S562>/OR' incorporates:
             *  DataStoreWrite: '<S562>/Data Store Write2'
             */
            localDW->new_msg_Rx_g = (localB->DemuxmessageCAN1andcheckcoher_a.AND
              || localB->DemuxmessageCAN1andcheckcoher_i.AND);

            /* Outputs for Enabled SubSystem: '<S562>/Desync calculation' incorporates:
             *  EnablePort: '<S566>/Enable'
             */
            if (localDW->new_msg_Rx_g) {
              /* Switch: '<S566>/Switch1' incorporates:
               *  Constant: '<S164>/Constant'
               *  Constant: '<S566>/Constant'
               *  Constant: '<S566>/Constant1'
               *  Constant: '<S566>/delay_estimation_1'
               *  Constant: '<S566>/delay_estimation_2'
               *  Product: '<S566>/Multiply'
               *  Product: '<S566>/Multiply1'
               *  Sum: '<S566>/Minus'
               *  Sum: '<S566>/Minus1'
               *  Sum: '<S566>/Sum'
               *  Sum: '<S566>/Sum1'
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

              /* End of Switch: '<S566>/Switch1' */

              /* Saturate: '<S566>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc1_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc1_s = (-15.0);
              } else {
                Desync_Sync_bc1_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S566>/Saturation' */

              /* DataStoreWrite: '<S566>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_s;
            }

            /* End of Outputs for SubSystem: '<S562>/Desync calculation' */

            /* DataStoreWrite: '<S562>/Data Store Write3' incorporates:
             *  Constant: '<S562>/Constant2'
             *  DataStoreWrite: '<S562>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }
          }

          /* End of Outputs for SubSystem: '<S396>/Process_Messages' */

          /* Logic: '<S396>/AND1' incorporates:
           *  Constant: '<S396>/Constant'
           *  DataStoreWrite: '<S562>/Data Store Write2'
           *  Logic: '<S396>/AND'
           *  Logic: '<S396>/NOT'
           */
          rtb_AND1_ku = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S396>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_ku, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S396>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc1check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S396>/Process_Messages' */
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }

            /* End of Disable for SubSystem: '<S396>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE_g = false;
          }
        }

        /* End of Outputs for SubSystem: '<S164>/COMP Task - Sync bc1 check' */

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Test Receive1' incorporates:
         *  EnablePort: '<S397>/Enable'
         */
        if ((*rtd_Local_Ticks >= 252.0) && (*rtd_Local_Ticks < localC->Sum10)) {
          if (!localDW->COMPTaskTestReceive1_MODE) {
            localDW->COMPTaskTestReceive1_MODE = true;
          }

          /* DataStoreRead: '<S397>/Data Store Read1' */
          rtb_DataStoreRead1_ak = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S397>/Data Store Read2' */
          rtb_DataStoreRead2_h = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S397>/Data Store Read' */
          rtb_DataStoreRead_i = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S397>/Data Store Read3' */
          rtb_DataStoreRead3_o = *rtd_Msg_Rx_CAN2;

          /* DataStoreRead: '<S397>/Data Store Read15' */
          rtb_DataStoreRead15 = *rtd_Master_ID;

          /* RelationalOperator: '<S397>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 252.0);

          /* RelationalOperator: '<S397>/Equal5' incorporates:
           *  Constant: '<S397>/Constant26'
           *  DataStoreRead: '<S397>/Data Store Read6'
           */
          rtb_AND1_fb = (localDW->Role_ID == 2.0);

          /* Logic: '<S397>/AND' */
          rtb_AND_au = (rtb_AND_ck && rtb_AND1_fb);

          /* Outputs for Enabled SubSystem: '<S397>/Process_Messages' */
          Process_Messages(rtb_AND_au, rtb_DataStoreRead1_ak,
                           rtb_DataStoreRead2_h, &rtb_DataStoreRead_i,
                           &rtb_DataStoreRead3_o, 1.0, rtb_DataStoreRead15,
                           &localB->Process_Messages_gh,
                           &localDW->Process_Messages_gh, &localDW->Msg_Rx_f,
                           rtd_Toggle_Pin_A0, &localDW->msg_count_DEBUG_i,
                           &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S397>/Process_Messages' */

          /* Logic: '<S397>/AND1' incorporates:
           *  Constant: '<S397>/Constant'
           *  Logic: '<S397>/NOT'
           */
          rtb_AND1_h = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S397>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_h, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S397>/Reset Tx msg counter' */

          /* Outputs for Enabled SubSystem: '<S397>/Update Msg buffer' incorporates:
           *  EnablePort: '<S593>/Enable'
           */
          if ((*rtd_Local_Ticks == 254.0) && rtb_AND1_fb) {
            /* DataStoreRead: '<S593>/Data Store Read5' */
            new_sensor_rx_s = localDW->new_msg_Rx_g;

            /* Outputs for Enabled SubSystem: '<S593>/Set Values Update' incorporates:
             *  EnablePort: '<S620>/Enable'
             */
            if (new_sensor_rx_s) {
              /* Gain: '<S620>/Gain1' incorporates:
               *  DataStoreRead: '<S593>/Data Store Read6'
               */
              test2_s = (uint16_T)((uint32_T)((uint8_T)128U) *
                                   localDW->Msg_Rx_f.Buffer_3);

              /* DataStoreWrite: '<S620>/Data Store Write' */
              localDW->rxTest2 = test2_s;

              /* Gain: '<S620>/Gain' incorporates:
               *  DataStoreRead: '<S593>/Data Store Read6'
               */
              test1_s = (uint16_T)((uint32_T)((uint8_T)128U) *
                                   localDW->Msg_Rx_f.Buffer_2);

              /* DataStoreWrite: '<S620>/Data Store Write1' */
              localDW->rxTest1 = test1_s;

              /* Gain: '<S620>/Gain2' incorporates:
               *  DataStoreRead: '<S593>/Data Store Read6'
               */
              test3_s = (uint16_T)((uint32_T)((uint8_T)128U) *
                                   localDW->Msg_Rx_f.Buffer_4);

              /* DataStoreWrite: '<S620>/Data Store Write2' */
              localDW->rxTest3 = test3_s;
            }

            /* End of Outputs for SubSystem: '<S593>/Set Values Update' */
          }

          /* End of Outputs for SubSystem: '<S397>/Update Msg buffer' */
        } else {
          if (localDW->COMPTaskTestReceive1_MODE) {
            /* Disable for Enabled SubSystem: '<S397>/Process_Messages' */
            if (localDW->Process_Messages_gh.Process_Messages_MODE) {
              Process_Messages_Disable(&localB->Process_Messages_gh,
                &localDW->Process_Messages_gh);
            }

            /* End of Disable for SubSystem: '<S397>/Process_Messages' */
            localDW->COMPTaskTestReceive1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S164>/COMP Task - Test Receive1' */

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Update LT1' incorporates:
         *  EnablePort: '<S398>/Enable'
         */
        if ((*rtd_Local_Ticks >= 84.0) && (*rtd_Local_Ticks < localC->Sum2_a) &&
            (!localDW->BC1_Sync_processed)) {
          /* Outputs for Enabled SubSystem: '<S398>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S622>/Enable'
           */
          if ((*rtd_Local_Ticks == 84.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S622>/Data Store Write1' incorporates:
             *  Constant: '<S622>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S398>/LA - Ensemble precision' */

          /* Logic: '<S398>/AND' incorporates:
           *  Constant: '<S164>/Constant17'
           *  Constant: '<S398>/Constant1'
           *  Constant: '<S398>/Constant4'
           *  DataStoreRead: '<S398>/Data Store Read'
           *  DataStoreRead: '<S398>/Data Store Read1'
           *  Logic: '<S398>/AND1'
           *  RelationalOperator: '<S398>/Equal1'
           *  RelationalOperator: '<S398>/Equal2'
           *  RelationalOperator: '<S398>/Equal3'
           */
          rtb_AND_fr = ((*rtd_Local_Ticks == 86.0) && (localDW->Role_ID == 2.0) &&
                        localDW->new_msg_Rx_g);

          /* Outputs for Enabled SubSystem: '<S398>/Local Time Update' */
          LocalTimeUpdate(rtb_AND_fr, 84.0, &localDW->BC1_Sync_processed,
                          &localDW->Desync_Positive, &localDW->Desync_Ticks,
                          rtd_Local_Ticks, rtd_Toggle_Pin_A0,
                          &localDW->Toggle_Pin_D10);

          /* End of Outputs for SubSystem: '<S398>/Local Time Update' */
        }

        /* End of Outputs for SubSystem: '<S164>/COMP Task - Update LT1' */

        /* Outputs for Enabled SubSystem: '<S164>/COMP Task - Voting' incorporates:
         *  EnablePort: '<S399>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S399>/calculations' incorporates:
         *  EnablePort: '<S625>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 260.0) && (rtb_DataStoreRead8_c <
             localC->Sum9) && ((*rtd_Local_Ticks == 260.0) &&
                               (!localDW->Error_SensorValues_NotRX))) {
          /* DataStoreWrite: '<S625>/Data Store Write8' incorporates:
           *  Constant: '<S625>/Constant4'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataTypeConversion: '<S625>/Data Type Conversion' incorporates:
           *  DataStoreRead: '<S625>/Data Store Read'
           */
          /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/TTA CAN System/TTA System/Matrix Cycle Manager/Controller Matrix Cycle/controller basic cycle 1/COMP Task - Voting/calculations/Advanced Voter (101)': '<S626>:1' */
          /* '<S626>:1:5' */
          xy_tmp = (real32_T)localDW->Test1 * 2.38418579E-7F;

          /* DataTypeConversion: '<S625>/Data Type Conversion1' incorporates:
           *  DataStoreRead: '<S625>/Data Store Read2'
           */
          xy_tmp_0 = (real32_T)localDW->Test2 * 2.38418579E-7F;

          /* MATLAB Function: '<S625>/Advanced Voter (101)' incorporates:
           *  DataTypeConversion: '<S625>/Data Type Conversion'
           *  DataTypeConversion: '<S625>/Data Type Conversion1'
           */
          xy = (real32_T)fabs(xy_tmp - xy_tmp_0);

          /* DataTypeConversion: '<S625>/Data Type Conversion2' incorporates:
           *  DataStoreRead: '<S625>/Data Store Read1'
           */
          /* '<S626>:1:6' */
          xz_tmp = (real32_T)localDW->Test3 * 2.38418579E-7F;

          /* MATLAB Function: '<S625>/Advanced Voter (101)' incorporates:
           *  Constant: '<S625>/Constant1'
           *  Constant: '<S625>/Constant2'
           *  Constant: '<S625>/Constant3'
           *  DataStoreRead: '<S625>/Data Store Read'
           *  DataStoreRead: '<S625>/Data Store Read1'
           *  DataStoreRead: '<S625>/Data Store Read2'
           *  DataTypeConversion: '<S625>/Data Type Conversion'
           *  DataTypeConversion: '<S625>/Data Type Conversion1'
           *  DataTypeConversion: '<S625>/Data Type Conversion2'
           *  UnitDelay: '<S625>/Unit Delay'
           */
          xz = (real32_T)fabs(xy_tmp - xz_tmp);

          /* '<S626>:1:7' */
          if ((xy_tmp > 10.0F) || (xy_tmp < (-10.0F))) {
            /* '<S626>:1:10' */
            rtb_AND_ck = true;
          } else {
            rtb_AND_ck = false;
          }

          if ((xy_tmp_0 > 10.0F) || (xy_tmp_0 < (-10.0F))) {
            /* '<S626>:1:11' */
            rtb_AND1_fb = true;
          } else {
            rtb_AND1_fb = false;
          }

          if ((xz_tmp > 10.0F) || (xz_tmp < (-10.0F))) {
            /* '<S626>:1:12' */
            rtb_AND2_n = true;
          } else {
            rtb_AND2_n = false;
          }

          if (rtb_AND_ck && rtb_AND1_fb && rtb_AND2_n) {
            /* '<S626>:1:18' */
            xz = voting_out_s;

            /* '<S626>:1:19' */
            sigIdx = 19;
          } else if (rtb_AND_ck && rtb_AND1_fb) {
            /* '<S626>:1:22' */
            xz = xz_tmp;

            /* '<S626>:1:23' */
            sigIdx = 14;
          } else if (rtb_AND_ck && rtb_AND2_n) {
            /* '<S626>:1:26' */
            xz = xy_tmp_0;

            /* '<S626>:1:27' */
            sigIdx = 15;
          } else if (rtb_AND1_fb && rtb_AND2_n) {
            /* '<S626>:1:30' */
            xz = xy_tmp;

            /* '<S626>:1:31' */
            sigIdx = 16;
          } else if (rtb_AND_ck) {
            /* '<S626>:1:34' */
            xz = ((real32_T)localDW->Test2 * 2.38418579E-7F + (real32_T)
                  localDW->Test3 * 2.38418579E-7F) / 2.0F;

            /* '<S626>:1:35' */
            sigIdx = 11;
          } else if (rtb_AND1_fb) {
            /* '<S626>:1:38' */
            xz = ((real32_T)localDW->Test1 * 2.38418579E-7F + (real32_T)
                  localDW->Test3 * 2.38418579E-7F) / 2.0F;

            /* '<S626>:1:39' */
            sigIdx = 12;
          } else if (rtb_AND2_n) {
            /* '<S626>:1:42' */
            xz = ((real32_T)localDW->Test1 * 2.38418579E-7F + (real32_T)
                  localDW->Test2 * 2.38418579E-7F) / 2.0F;

            /* '<S626>:1:43' */
            sigIdx = 13;
          } else {
            varargin_1_tmp_idx_2 = (real32_T)fabs(xy_tmp_0 - xz_tmp);
            lower_detect_range = xy;
            if (xy > xz) {
              lower_detect_range = xz;
            }

            if (lower_detect_range > varargin_1_tmp_idx_2) {
              lower_detect_range = varargin_1_tmp_idx_2;
            }

            if (xy == lower_detect_range) {
              /* '<S626>:1:48' */
              /* '<S626>:1:49' */
              xz = (xy_tmp + xy_tmp_0) / 2.0F;
            } else {
              if (xy > xz) {
                xy = xz;
              }

              if (xy > varargin_1_tmp_idx_2) {
                xy = varargin_1_tmp_idx_2;
              }

              if (xz == xy) {
                /* '<S626>:1:50' */
                /* '<S626>:1:51' */
                xz = (xy_tmp + xz_tmp) / 2.0F;
              } else {
                /* '<S626>:1:53' */
                xz = (xy_tmp_0 + xz_tmp) / 2.0F;
              }
            }

            /* '<S626>:1:55' */
            sigIdx = 10;
          }

          /* '<S626>:1:59' */
          xy = (real32_T)fabs(10.0F * 0.6F) + xz;

          /* '<S626>:1:60' */
          lower_detect_range = xz - (real32_T)fabs((-10.0F) * 0.6F);
          if ((xy_tmp > xy) || (xy_tmp < lower_detect_range)) {
            /* '<S626>:1:63' */
            rtb_AND_ck = true;
          } else {
            rtb_AND_ck = false;
          }

          if ((xy_tmp_0 > xy) || (xy_tmp_0 < lower_detect_range)) {
            /* '<S626>:1:64' */
            rtb_AND1_fb = true;
          } else {
            rtb_AND1_fb = false;
          }

          if ((xz_tmp > xy) || (xz_tmp < lower_detect_range)) {
            /* '<S626>:1:65' */
            rtb_AND2_n = true;
          } else {
            rtb_AND2_n = false;
          }

          if (rtb_AND_ck && rtb_AND1_fb && rtb_AND2_n) {
            /* '<S626>:1:68' */
            sigIdx = 19;
          } else if (rtb_AND_ck && rtb_AND1_fb) {
            /* '<S626>:1:70' */
            sigIdx = 14;
          } else if (rtb_AND_ck && rtb_AND2_n) {
            /* '<S626>:1:72' */
            sigIdx = 15;
          } else if (rtb_AND1_fb && rtb_AND2_n) {
            /* '<S626>:1:74' */
            sigIdx = 16;
          } else if (rtb_AND_ck) {
            /* '<S626>:1:76' */
            sigIdx = 11;
          } else if (rtb_AND1_fb) {
            /* '<S626>:1:78' */
            sigIdx = 12;
          } else if (rtb_AND2_n) {
            /* '<S626>:1:80' */
            sigIdx = 13;
          } else {
            /* '<S626>:1:82' */
          }

          voting_out_s = xz;
          error_flag_s = sigIdx;
        }

        /* End of Outputs for SubSystem: '<S399>/calculations' */
        /* End of Outputs for SubSystem: '<S164>/COMP Task - Voting' */

        /* Outputs for Enabled SubSystem: '<S164>/COMM Task - Set_Values' incorporates:
         *  EnablePort: '<S387>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 88.0) && (rtb_DataStoreRead8_c <
             localC->Sum3_g)) {
          if (!localDW->COMMTaskSet_Values_MODE_i) {
            localDW->COMMTaskSet_Values_MODE_i = true;
          }

          /* RelationalOperator: '<S387>/Equal12' incorporates:
           *  Constant: '<S387>/Constant55'
           */
          rtb_AND_ck = (*rtd_Board_ID == 5.0);

          /* Logic: '<S387>/NOT' */
          rtb_NOT_df = !rtb_AND_ck;

          /* Outputs for Enabled SubSystem: '<S387>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_df, 88.0, &localB->Receptionsubstasks_j,
                             &localC->Receptionsubstasks_j,
                             &localDW->Receptionsubstasks_j, rtd_Local_Ticks,
                             &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S387>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S387>/Transmission subtasks' incorporates:
           *  EnablePort: '<S401>/Enable'
           */
          if (rtb_AND_ck) {
            if (!localDW->Transmissionsubtasks_MODE_c) {
              localDW->Transmissionsubtasks_MODE_c = true;
            }

            /* DataStoreRead: '<S401>/Data Store Read' */
            rtb_DataStoreRead_is = *rtd_Local_Ticks;

            /* RelationalOperator: '<S401>/Equal2' */
            rtb_AND_ck = (rtb_DataStoreRead_is > 88.0);

            /* Logic: '<S401>/AND' incorporates:
             *  Constant: '<S401>/Constant6'
             *  RelationalOperator: '<S401>/GreaterThan2'
             */
            rtb_AND_bj = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S401>/AND1' incorporates:
             *  Constant: '<S401>/Constant7'
             *  RelationalOperator: '<S401>/GreaterThan3'
             */
            rtb_AND1_bv = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S401>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S405>/Enable'
             */
            if (rtb_DataStoreRead_is == 88.0) {
              localB->Constant_l = ((uint8_T)0U);

              /* Switch: '<S418>/Switch2' incorporates:
               *  Constant: '<S405>/Constant'
               *  Constant: '<S405>/Constant11'
               *  Constant: '<S405>/Constant6'
               *  Constant: '<S405>/Constant7'
               *  RelationalOperator: '<S418>/LessThanOrEqual1'
               *  RelationalOperator: '<S418>/LessThanOrEqual2'
               *  Switch: '<S418>/Switch1'
               */
              if (1.0 < delta_a_set) {
                /* Switch: '<S418>/Switch' */
                rtb_Switch1_f = 1.0;
              } else if (delta_a_set >= (-1.0)) {
                /* Switch: '<S418>/Switch1' */
                rtb_Switch1_f = delta_a_set;
              } else {
                rtb_Switch1_f = (-1.0);
              }

              /* End of Switch: '<S418>/Switch2' */

              /* RelationalOperator: '<S418>/GreaterThan' incorporates:
               *  Constant: '<S418>/Constant'
               */
              rtb_AND_ck = (rtb_Switch1_f < 0.0);

              /* Abs: '<S418>/Abs' */
              rtb_Switch1_f = fabs(rtb_Switch1_f);

              /* Rounding: '<S418>/Fix' */
              rtb_Plus_j = floor(rtb_Switch1_f);

              /* Sum: '<S418>/Minus' */
              rtb_Switch1_f -= rtb_Plus_j;

              /* DataTypeConversion: '<S418>/Cast' */
              rtb_Cast_c = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S418>/Bit Shift' */
              BitShift1(rtb_Cast_c, &localB->BitShift_p);

              /* End of Outputs for SubSystem: '<S418>/Bit Shift' */

              /* Product: '<S418>/Multiply' */
              rtb_Plus_j *= localC->Power1_g;

              /* Product: '<S418>/Divide' */
              rtb_Plus1_b = rtb_Switch1_f / localC->Power_f;

              /* Rounding: '<S418>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S418>/Fix1' */

              /* Sum: '<S418>/Plus' incorporates:
               *  DataTypeConversion: '<S418>/Cast1'
               *  DataTypeConversion: '<S418>/Cast2'
               */
              localB->Plus_j = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_p.y + (uint8_T)rtb_Plus_j) + (uint8_T)
                rtb_Plus1_b);

              /* Switch: '<S419>/Switch2' incorporates:
               *  Constant: '<S405>/Constant12'
               *  Constant: '<S405>/Constant8'
               *  Constant: '<S405>/Constant9'
               *  RelationalOperator: '<S419>/LessThanOrEqual1'
               *  RelationalOperator: '<S419>/LessThanOrEqual2'
               *  Switch: '<S419>/Switch1'
               */
              if (10.0 < v_set) {
                /* Switch: '<S419>/Switch' */
                rtb_Plus_j = 10.0;
              } else if (v_set >= (-10.0)) {
                /* Switch: '<S419>/Switch1' */
                rtb_Plus_j = v_set;
              } else {
                rtb_Plus_j = (-10.0);
              }

              /* End of Switch: '<S419>/Switch2' */

              /* RelationalOperator: '<S419>/GreaterThan' incorporates:
               *  Constant: '<S419>/Constant'
               */
              rtb_AND_ck = (rtb_Plus_j < 0.0);

              /* Abs: '<S419>/Abs' */
              rtb_Plus_j = fabs(rtb_Plus_j);

              /* Rounding: '<S419>/Fix' */
              rtb_Switch1_f = floor(rtb_Plus_j);

              /* Sum: '<S419>/Minus' */
              rtb_Plus_j -= rtb_Switch1_f;

              /* DataTypeConversion: '<S419>/Cast' */
              rtb_Cast_db = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S419>/Bit Shift' */
              BitShift1(rtb_Cast_db, &localB->BitShift_k);

              /* End of Outputs for SubSystem: '<S419>/Bit Shift' */

              /* Product: '<S419>/Multiply' */
              rtb_Switch1_f *= localC->Power1_ag;

              /* Product: '<S419>/Divide' */
              rtb_Plus1_b = rtb_Plus_j / localC->Power_fb;

              /* Rounding: '<S419>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S419>/Fix1' */

              /* Sum: '<S419>/Plus' incorporates:
               *  DataTypeConversion: '<S419>/Cast1'
               *  DataTypeConversion: '<S419>/Cast2'
               */
              localB->Plus_bx = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_k.y + (uint8_T)rtb_Switch1_f) + (uint8_T)
                rtb_Plus1_b);

              /* Switch: '<S420>/Switch2' incorporates:
               *  Constant: '<S405>/Constant10'
               *  Constant: '<S405>/Constant4'
               *  Constant: '<S405>/Constant5'
               *  RelationalOperator: '<S420>/LessThanOrEqual1'
               *  RelationalOperator: '<S420>/LessThanOrEqual2'
               *  Switch: '<S420>/Switch1'
               */
              if (1.0 < delta_f_set) {
                /* Switch: '<S420>/Switch' */
                rtb_Plus_j = 1.0;
              } else if (delta_f_set >= (-1.0)) {
                /* Switch: '<S420>/Switch1' */
                rtb_Plus_j = delta_f_set;
              } else {
                rtb_Plus_j = (-1.0);
              }

              /* End of Switch: '<S420>/Switch2' */

              /* RelationalOperator: '<S420>/GreaterThan' incorporates:
               *  Constant: '<S420>/Constant'
               */
              rtb_AND_ck = (rtb_Plus_j < 0.0);

              /* Abs: '<S420>/Abs' */
              rtb_Plus_j = fabs(rtb_Plus_j);

              /* Rounding: '<S420>/Fix' */
              rtb_Switch1_f = floor(rtb_Plus_j);

              /* Sum: '<S420>/Minus' */
              rtb_Plus_j -= rtb_Switch1_f;

              /* DataTypeConversion: '<S420>/Cast' */
              rtb_Cast_nt = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S420>/Bit Shift' */
              BitShift1(rtb_Cast_nt, &localB->BitShift_d);

              /* End of Outputs for SubSystem: '<S420>/Bit Shift' */

              /* Product: '<S420>/Multiply' */
              rtb_Switch1_f *= localC->Power1_ly;

              /* Product: '<S420>/Divide' */
              rtb_Plus1_b = rtb_Plus_j / localC->Power_l;

              /* Rounding: '<S420>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S420>/Fix1' */

              /* Sum: '<S420>/Plus' incorporates:
               *  DataTypeConversion: '<S420>/Cast1'
               *  DataTypeConversion: '<S420>/Cast2'
               */
              localB->Plus_jp = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_d.y + (uint8_T)rtb_Switch1_f) + (uint8_T)
                rtb_Plus1_b);
            }

            /* End of Outputs for SubSystem: '<S401>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S401>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_bj, rtb_DataStoreRead_is, 88.0,
              localB->Plus_jp, localB->Plus_j, localB->Plus_bx,
              localB->Constant_l, &localB->CheckmsgtransmissionCAN1_m,
              &localC->CheckmsgtransmissionCAN1_m,
              &localDW->CheckmsgtransmissionCAN1_m, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S401>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S401>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_bv, rtb_DataStoreRead_is, 88.0,
              localB->Plus_jp, localB->Plus_j, localB->Plus_bx,
              localB->Constant_l, &localB->CheckmsgtransmissionCAN2_i,
              &localC->CheckmsgtransmissionCAN2_i,
              &localDW->CheckmsgtransmissionCAN2_i, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S401>/Check msg transmission CAN2' */
          } else {
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S401>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S401>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }
          }

          /* End of Outputs for SubSystem: '<S387>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskSet_Values_MODE_i) {
            /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S387>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S401>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S401>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }

            /* End of Disable for SubSystem: '<S387>/Transmission subtasks' */

            /* Disable for Outport: '<S387>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S387>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSet_Values_MODE_i = false;
          }
        }

        /* End of Outputs for SubSystem: '<S164>/COMM Task - Set_Values' */

        /* Outputs for Enabled SubSystem: '<S164>/COMM Task - Sync bc 1' incorporates:
         *  EnablePort: '<S388>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
             localC->Sum4_k) && (!localDW->BC1_Sync_processed)) {
          if (!localDW->COMMTaskSyncbc1_MODE) {
            localDW->COMMTaskSyncbc1_MODE = true;
          }

          /* RelationalOperator: '<S388>/Equal1' incorporates:
           *  Constant: '<S388>/Constant2'
           *  DataStoreRead: '<S388>/Data Store Read1'
           */
          rtb_Equal1_dc = (localDW->Role_ID == 1.0);

          /* Logic: '<S388>/NOT' */
          rtb_NOT_ao = !rtb_Equal1_dc;

          /* Outputs for Enabled SubSystem: '<S388>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_ao, 0.0, &localB->Receptionsubstasks_jz,
                             &localC->Receptionsubstasks_jz,
                             &localDW->Receptionsubstasks_jz, rtd_Local_Ticks,
                             &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S388>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S388>/Transmission subtasks1' */
          Transmissionsubtasks(rtb_Equal1_dc, 0.0,
                               &localB->Transmissionsubtasks1,
                               &localC->Transmissionsubtasks1,
                               &localDW->Transmissionsubtasks1, rtd_Board_ID,
                               rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                               rtd_TxID_CAN1, rtd_TxID_CAN2,
                               rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
                               &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S388>/Transmission subtasks1' */
        } else {
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
            if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
                &localDW->Receptionsubstasks_jz);
            }

            /* End of Disable for SubSystem: '<S388>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

            /* Disable for Outport: '<S388>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S388>/Receive CAN1' */
            localB->Receptionsubstasks_jz.AND = false;

            /* Disable for Outport: '<S388>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S388>/Receive CAN2' */
            localB->Receptionsubstasks_jz.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S164>/COMM Task - Sync bc 1' */

        /* Outputs for Enabled SubSystem: '<S164>/COMM Task - Test1' incorporates:
         *  EnablePort: '<S389>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 172.0) && (rtb_DataStoreRead8_c <
             localC->Sum11)) {
          if (!localDW->COMMTaskTest1_MODE) {
            localDW->COMMTaskTest1_MODE = true;
          }

          /* RelationalOperator: '<S389>/Equal1' incorporates:
           *  Constant: '<S389>/Constant2'
           *  DataStoreRead: '<S389>/Data Store Read1'
           */
          rtb_AND_ck = (localDW->Role_ID == 1.0);

          /* Logic: '<S389>/NOT' */
          rtb_NOT_p2 = !rtb_AND_ck;

          /* Outputs for Enabled SubSystem: '<S389>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_p2, 172.0, &localB->Receptionsubstasks_d,
                             &localC->Receptionsubstasks_d,
                             &localDW->Receptionsubstasks_d, rtd_Local_Ticks,
                             &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S389>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S389>/Transmission subtasks1' incorporates:
           *  EnablePort: '<S446>/Enable'
           */
          if (rtb_AND_ck) {
            if (!localDW->Transmissionsubtasks1_MODE_b) {
              localDW->Transmissionsubtasks1_MODE_b = true;
            }

            /* DataStoreRead: '<S446>/Data Store Read' */
            rtb_DataStoreRead_j2 = *rtd_Local_Ticks;

            /* RelationalOperator: '<S446>/Equal2' */
            rtb_AND_ck = (rtb_DataStoreRead_j2 > 172.0);

            /* Logic: '<S446>/AND' incorporates:
             *  Constant: '<S446>/Constant6'
             *  RelationalOperator: '<S446>/GreaterThan2'
             */
            rtb_AND_cl = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S446>/AND1' incorporates:
             *  Constant: '<S446>/Constant7'
             *  RelationalOperator: '<S446>/GreaterThan3'
             */
            rtb_AND1_b5 = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S446>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S450>/Enable'
             */
            if (rtb_DataStoreRead_j2 == 172.0) {
              localB->Constant_d = ((uint8_T)0U);

              /* DataTypeConversion: '<S450>/Data Type Conversion' incorporates:
               *  Constant: '<S450>/Constant'
               *  Constant: '<S450>/Constant4'
               */
              rtb_Switch1_f = fabs(testV_1);
              if (rtb_Switch1_f < 4.503599627370496E+15) {
                if (rtb_Switch1_f >= 0.5) {
                  localB->DataTypeConversion_f = (uint8_T)floor(testV_1 + 0.5);
                } else {
                  localB->DataTypeConversion_f = 0U;
                }
              } else {
                localB->DataTypeConversion_f = (uint8_T)testV_1;
              }

              /* End of DataTypeConversion: '<S450>/Data Type Conversion' */

              /* DataTypeConversion: '<S450>/Data Type Conversion1' incorporates:
               *  Constant: '<S450>/Constant3'
               */
              rtb_Switch1_f = fabs(testV_2);
              if (rtb_Switch1_f < 4.503599627370496E+15) {
                if (rtb_Switch1_f >= 0.5) {
                  localB->DataTypeConversion1_n = (uint8_T)floor(testV_2 + 0.5);
                } else {
                  localB->DataTypeConversion1_n = 0U;
                }
              } else {
                localB->DataTypeConversion1_n = (uint8_T)testV_2;
              }

              /* End of DataTypeConversion: '<S450>/Data Type Conversion1' */

              /* DataTypeConversion: '<S450>/Data Type Conversion2' incorporates:
               *  Constant: '<S450>/Constant9'
               */
              rtb_Switch1_f = fabs(testV_3);
              if (rtb_Switch1_f < 4.503599627370496E+15) {
                if (rtb_Switch1_f >= 0.5) {
                  localB->DataTypeConversion2_c = (uint8_T)floor(testV_3 + 0.5);
                } else {
                  localB->DataTypeConversion2_c = 0U;
                }
              } else {
                localB->DataTypeConversion2_c = (uint8_T)testV_3;
              }

              /* End of DataTypeConversion: '<S450>/Data Type Conversion2' */
            }

            /* End of Outputs for SubSystem: '<S446>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S446>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_cl, rtb_DataStoreRead_j2, 172.0,
              localB->DataTypeConversion_f, localB->DataTypeConversion1_n,
              localB->DataTypeConversion2_c, localB->Constant_d,
              &localB->CheckmsgtransmissionCAN1_o,
              &localC->CheckmsgtransmissionCAN1_o,
              &localDW->CheckmsgtransmissionCAN1_o, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S446>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S446>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_b5, rtb_DataStoreRead_j2, 172.0,
              localB->DataTypeConversion_f, localB->DataTypeConversion1_n,
              localB->DataTypeConversion2_c, localB->Constant_d,
              &localB->CheckmsgtransmissionCAN2_a,
              &localC->CheckmsgtransmissionCAN2_a,
              &localDW->CheckmsgtransmissionCAN2_a, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S446>/Check msg transmission CAN2' */
          } else {
            if (localDW->Transmissionsubtasks1_MODE_b) {
              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_o.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_o,
                   &localDW->CheckmsgtransmissionCAN1_o);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_a.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_a,
                   &localDW->CheckmsgtransmissionCAN2_a);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S446>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

              /* Disable for Outport: '<S446>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_a.Equal7 = false;
              localDW->Transmissionsubtasks1_MODE_b = false;
            }
          }

          /* End of Outputs for SubSystem: '<S389>/Transmission subtasks1' */
        } else {
          if (localDW->COMMTaskTest1_MODE) {
            /* Disable for Enabled SubSystem: '<S389>/Reception substasks' */
            if (localDW->Receptionsubstasks_d.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_d,
                &localDW->Receptionsubstasks_d);
            }

            /* End of Disable for SubSystem: '<S389>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S389>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE_b) {
              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_o.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_o,
                   &localDW->CheckmsgtransmissionCAN1_o);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_a.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_a,
                   &localDW->CheckmsgtransmissionCAN2_a);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S446>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

              /* Disable for Outport: '<S446>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_a.Equal7 = false;
              localDW->Transmissionsubtasks1_MODE_b = false;
            }

            /* End of Disable for SubSystem: '<S389>/Transmission subtasks1' */

            /* Disable for Outport: '<S389>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

            /* Disable for Outport: '<S389>/Receive CAN1' */
            localB->Receptionsubstasks_d.AND = false;

            /* Disable for Outport: '<S389>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_a.Equal7 = false;

            /* Disable for Outport: '<S389>/Receive CAN2' */
            localB->Receptionsubstasks_d.AND1 = false;
            localDW->COMMTaskTest1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S164>/COMM Task - Test1' */

        /* Outputs for Enabled SubSystem: '<S164>/COMM Task - send_BS' incorporates:
         *  EnablePort: '<S390>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 264.0) && (rtb_DataStoreRead8_c <
             localC->Sum7)) {
          if (!localDW->COMMTasksend_BS_MODE) {
            localDW->COMMTasksend_BS_MODE = true;
          }

          /* RelationalOperator: '<S390>/Equal1' incorporates:
           *  Constant: '<S390>/Constant2'
           *  DataStoreRead: '<S390>/Data Store Read1'
           */
          rtb_AND_ck = (localDW->Role_ID == 1.0);

          /* Logic: '<S390>/NOT' */
          rtb_NOT_lz = !rtb_AND_ck;

          /* Outputs for Enabled SubSystem: '<S390>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_lz, 264.0, &localB->Receptionsubstasks_l,
                             &localC->Receptionsubstasks_l,
                             &localDW->Receptionsubstasks_l, rtd_Local_Ticks,
                             &localDW->Msg_Rx_f, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx_g);

          /* End of Outputs for SubSystem: '<S390>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S390>/Transmission subtasks1' incorporates:
           *  EnablePort: '<S464>/Enable'
           */
          if (rtb_AND_ck) {
            if (!localDW->Transmissionsubtasks1_MODE) {
              localDW->Transmissionsubtasks1_MODE = true;
            }

            /* RelationalOperator: '<S464>/Equal2' */
            rtb_AND_ck = (*rtd_Local_Ticks > 264.0);

            /* Outputs for Enabled SubSystem: '<S464>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S468>/Enable'
             */
            if (*rtd_Local_Ticks == 264.0) {
              localB->Constant_m = ((uint8_T)0U);

              /* DataTypeConversion: '<S468>/Data Type Conversion' incorporates:
               *  Constant: '<S468>/Constant'
               *  Constant: '<S468>/Constant5'
               */
              rtb_Switch1_f = fabs(board1_online);
              if (rtb_Switch1_f < 4.503599627370496E+15) {
                if (rtb_Switch1_f >= 0.5) {
                  localB->DataTypeConversion = (uint8_T)floor(board1_online +
                    0.5);
                } else {
                  localB->DataTypeConversion = 0U;
                }
              } else {
                localB->DataTypeConversion = (uint8_T)board1_online;
              }

              /* End of DataTypeConversion: '<S468>/Data Type Conversion' */

              /* DataTypeConversion: '<S468>/Data Type Conversion1' incorporates:
               *  Constant: '<S468>/Constant6'
               */
              rtb_Switch1_f = fabs(board2_online);
              if (rtb_Switch1_f < 4.503599627370496E+15) {
                if (rtb_Switch1_f >= 0.5) {
                  localB->DataTypeConversion1 = (uint8_T)floor(board2_online +
                    0.5);
                } else {
                  localB->DataTypeConversion1 = 0U;
                }
              } else {
                localB->DataTypeConversion1 = (uint8_T)board2_online;
              }

              /* End of DataTypeConversion: '<S468>/Data Type Conversion1' */

              /* DataTypeConversion: '<S468>/Data Type Conversion2' incorporates:
               *  Constant: '<S468>/Constant7'
               */
              rtb_Switch1_f = fabs(board3_online);
              if (rtb_Switch1_f < 4.503599627370496E+15) {
                if (rtb_Switch1_f >= 0.5) {
                  localB->DataTypeConversion2 = (uint8_T)floor(board3_online +
                    0.5);
                } else {
                  localB->DataTypeConversion2 = 0U;
                }
              } else {
                localB->DataTypeConversion2 = (uint8_T)board3_online;
              }

              /* End of DataTypeConversion: '<S468>/Data Type Conversion2' */

              /* DataTypeConversion: '<S468>/Data Type Conversion3' incorporates:
               *  Constant: '<S468>/Constant8'
               */
              rtb_Switch1_f = fabs(board4_online);
              if (rtb_Switch1_f < 4.503599627370496E+15) {
                if (rtb_Switch1_f >= 0.5) {
                  localB->DataTypeConversion3 = (uint8_T)floor(board4_online +
                    0.5);
                } else {
                  localB->DataTypeConversion3 = 0U;
                }
              } else {
                localB->DataTypeConversion3 = (uint8_T)board4_online;
              }

              /* End of DataTypeConversion: '<S468>/Data Type Conversion3' */
            }

            /* End of Outputs for SubSystem: '<S464>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S464>/Check msg transmission CAN1' incorporates:
             *  EnablePort: '<S466>/Enable'
             */
            if (rtb_AND_ck && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
              if (!localDW->CheckmsgtransmissionCAN1_MODE) {
                localDW->CheckmsgtransmissionCAN1_MODE = true;
              }

              /* Sum: '<S466>/Minus2' incorporates:
               *  Constant: '<S466>/Constant'
               */
              rtb_Switch1_f = 264.0 + COMM_Phase_init1;

              /* Outputs for Enabled SubSystem: '<S466>/TX buffer update CAN1' incorporates:
               *  EnablePort: '<S469>/Enable'
               */
              if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Switch1_f,
                          COMM_Phase1) == 0.0) {
                /* DataTypeConversion: '<S469>/Cast4' incorporates:
                 *  DataStoreRead: '<S469>/Data Store Read3'
                 */
                rtb_Cast4 = localDW->basic_cycle_count;

                /* Outputs for Atomic SubSystem: '<S470>/Bit Shift1' */
                BitShift1(rtb_Cast4, &localB->BitShift1_mp);

                /* End of Outputs for SubSystem: '<S470>/Bit Shift1' */

                /* DataTypeConversion: '<S469>/Cast1' */
                rtb_Cast1_g = (uint8_T)*rtd_Tx_msg_count_CAN1;

                /* Outputs for Atomic SubSystem: '<S470>/Bit Shift' */
                BitShift4(rtb_Cast1_g, &localB->BitShift_i);

                /* End of Outputs for SubSystem: '<S470>/Bit Shift' */

                /* DataStoreWrite: '<S469>/Data Store Write10' incorporates:
                 *  DataTypeConversion: '<S469>/Cast16'
                 *  Sum: '<S470>/Minus'
                 */
                rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)
                  ((uint32_T)localB->BitShift1_mp.y + localB->BitShift_i.y) +
                  (uint8_T)*rtd_Board_ID);
                rtd_Msg_Tx_CAN1->Buffer_2 = localB->DataTypeConversion;
                rtd_Msg_Tx_CAN1->Buffer_3 = localB->DataTypeConversion1;
                rtd_Msg_Tx_CAN1->Buffer_4 = localB->DataTypeConversion2;
                rtd_Msg_Tx_CAN1->Buffer_5 = localB->DataTypeConversion3;
                rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant_m;
                rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant_m;
                rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant_m;

                /* DataStoreWrite: '<S469>/Data Store Write8' */
                *rtd_TxID_CAN1 = localC->Cast;
              }

              /* End of Outputs for SubSystem: '<S466>/TX buffer update CAN1' */

              /* RelationalOperator: '<S466>/Equal7' incorporates:
               *  Constant: '<S466>/Constant11'
               *  Constant: '<S466>/Constant22'
               *  Constant: '<S466>/Constant24'
               *  Constant: '<S466>/Constant27'
               *  Constant: '<S466>/Constant8'
               *  Math: '<S466>/Mod'
               *  Math: '<S466>/Mod1'
               *  RelationalOperator: '<S466>/Equal4'
               *  Sum: '<S466>/Minus'
               *  Sum: '<S466>/Minus1'
               */
              localB->Equal7_l = (rt_modd((real_T)*rtd_Local_Ticks -
                rtb_Switch1_f, COMM_Phase1) == 0.0);
            } else {
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S466>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }
            }

            /* End of Outputs for SubSystem: '<S464>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S464>/Check msg transmission CAN2' incorporates:
             *  EnablePort: '<S467>/Enable'
             */
            if (rtb_AND_ck && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
              if (!localDW->CheckmsgtransmissionCAN2_MODE) {
                localDW->CheckmsgtransmissionCAN2_MODE = true;
              }

              /* Sum: '<S467>/Minus2' incorporates:
               *  Constant: '<S467>/Constant'
               */
              rtb_Switch1_f = 264.0 + COMM_Phase_init2;

              /* Outputs for Enabled SubSystem: '<S467>/TX buffer update CAN2' incorporates:
               *  EnablePort: '<S475>/Enable'
               */
              if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtb_Switch1_f,
                          COMM_Phase2) == 0.0) {
                /* DataTypeConversion: '<S475>/Cast18' incorporates:
                 *  DataStoreRead: '<S475>/Data Store Read6'
                 */
                rtb_Cast18 = localDW->basic_cycle_count;

                /* Outputs for Atomic SubSystem: '<S476>/Bit Shift1' */
                BitShift1(rtb_Cast18, &localB->BitShift1_d);

                /* End of Outputs for SubSystem: '<S476>/Bit Shift1' */

                /* DataTypeConversion: '<S475>/Cast9' */
                rtb_Cast9 = (uint8_T)*rtd_Tx_msg_count_CAN2;

                /* Outputs for Atomic SubSystem: '<S476>/Bit Shift' */
                BitShift4(rtb_Cast9, &localB->BitShift_g);

                /* End of Outputs for SubSystem: '<S476>/Bit Shift' */

                /* DataStoreWrite: '<S475>/Data Store Write4' incorporates:
                 *  DataTypeConversion: '<S475>/Cast17'
                 *  Sum: '<S476>/Minus'
                 */
                rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)
                  ((uint32_T)localB->BitShift1_d.y + localB->BitShift_g.y) +
                  (uint8_T)*rtd_Board_ID);
                rtd_Msg_Tx_CAN2->Buffer_2 = localB->DataTypeConversion;
                rtd_Msg_Tx_CAN2->Buffer_3 = localB->DataTypeConversion1;
                rtd_Msg_Tx_CAN2->Buffer_4 = localB->DataTypeConversion2;
                rtd_Msg_Tx_CAN2->Buffer_5 = localB->DataTypeConversion3;
                rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant_m;
                rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant_m;
                rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant_m;

                /* DataStoreWrite: '<S475>/Data Store Write5' */
                *rtd_TxID_CAN2 = localC->Cast8;
              }

              /* End of Outputs for SubSystem: '<S467>/TX buffer update CAN2' */

              /* RelationalOperator: '<S467>/Equal7' incorporates:
               *  Constant: '<S467>/Constant11'
               *  Constant: '<S467>/Constant22'
               *  Constant: '<S467>/Constant24'
               *  Constant: '<S467>/Constant27'
               *  Constant: '<S467>/Constant8'
               *  Math: '<S467>/Mod'
               *  Math: '<S467>/Mod1'
               *  RelationalOperator: '<S467>/Equal4'
               *  Sum: '<S467>/Minus'
               *  Sum: '<S467>/Minus1'
               */
              localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtb_Switch1_f,
                COMM_Phase2) == 0.0);
            } else {
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S467>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }
            }

            /* End of Outputs for SubSystem: '<S464>/Check msg transmission CAN2' */
          } else {
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S466>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S467>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S464>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S464>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S390>/Transmission subtasks1' */
        } else {
          if (localDW->COMMTasksend_BS_MODE) {
            /* Disable for Enabled SubSystem: '<S390>/Reception substasks' */
            if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
                &localDW->Receptionsubstasks_l);
            }

            /* End of Disable for SubSystem: '<S390>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S390>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S466>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S467>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S464>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S464>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S390>/Transmission subtasks1' */

            /* Disable for Outport: '<S390>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S390>/Receive CAN1' */
            localB->Receptionsubstasks_l.AND = false;

            /* Disable for Outport: '<S390>/Send CAN2' */
            localB->Equal7 = false;

            /* Disable for Outport: '<S390>/Receive CAN2' */
            localB->Receptionsubstasks_l.AND1 = false;
            localDW->COMMTasksend_BS_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S164>/COMM Task - send_BS' */

        /* Logic: '<S164>/OR1' incorporates:
         *  Constant: '<S164>/Constant'
         *  Constant: '<S164>/Constant12'
         *  Constant: '<S164>/Constant13'
         *  Constant: '<S164>/Constant14'
         *  Constant: '<S164>/Constant16'
         *  Constant: '<S164>/Constant19'
         *  Constant: '<S164>/Constant23'
         *  Constant: '<S164>/Constant24'
         *  Constant: '<S164>/Constant25'
         *  Constant: '<S164>/Constant26'
         *  Constant: '<S164>/Constant28'
         *  Constant: '<S164>/Constant4'
         *  Constant: '<S164>/Constant5'
         *  Constant: '<S164>/Constant6'
         *  Constant: '<S164>/Constant7'
         *  Constant: '<S164>/Constant8'
         *  Constant: '<S393>/Constant'
         *  Constant: '<S395>/Constant51'
         *  Constant: '<S396>/Constant'
         *  Constant: '<S397>/Constant'
         *  Constant: '<S398>/Constant1'
         *  Constant: '<S405>/Constant'
         *  Constant: '<S450>/Constant'
         *  Constant: '<S464>/Constant6'
         *  Constant: '<S464>/Constant7'
         *  Constant: '<S466>/Constant22'
         *  Constant: '<S466>/Constant24'
         *  Constant: '<S466>/Constant8'
         *  Constant: '<S467>/Constant22'
         *  Constant: '<S467>/Constant24'
         *  Constant: '<S467>/Constant8'
         *  Constant: '<S468>/Constant'
         *  DataStoreRead: '<S164>/Data Store Read11'
         *  DataStoreRead: '<S164>/Data Store Read6'
         *  DataStoreRead: '<S164>/Data Store Read7'
         *  DataStoreRead: '<S391>/Data Store Read1'
         *  DataStoreRead: '<S392>/Data Store Read1'
         *  DataStoreRead: '<S399>/Data Store Read1'
         *  DataStoreRead: '<S485>/Data Store Read5'
         *  DataStoreRead: '<S518>/Data Store Read6'
         *  DataStoreWrite: '<S562>/Data Store Write2'
         *  Logic: '<S164>/AND'
         *  Logic: '<S164>/AND1'
         *  Logic: '<S164>/AND10'
         *  Logic: '<S164>/AND11'
         *  Logic: '<S164>/AND17'
         *  Logic: '<S164>/AND18'
         *  Logic: '<S164>/AND19'
         *  Logic: '<S164>/AND2'
         *  Logic: '<S164>/AND20'
         *  Logic: '<S164>/AND3'
         *  Logic: '<S164>/AND4'
         *  Logic: '<S164>/AND5'
         *  Logic: '<S164>/AND6'
         *  Logic: '<S164>/AND7'
         *  Logic: '<S164>/AND8'
         *  Logic: '<S164>/AND9'
         *  Logic: '<S164>/NOT2'
         *  Logic: '<S164>/NOT4'
         *  Logic: '<S164>/NOT5'
         *  Logic: '<S391>/AND'
         *  Logic: '<S391>/NOT'
         *  Logic: '<S392>/AND'
         *  Logic: '<S392>/NOT'
         *  Logic: '<S393>/AND4'
         *  Logic: '<S395>/AND'
         *  Logic: '<S395>/AND2'
         *  Logic: '<S396>/AND'
         *  Logic: '<S397>/AND4'
         *  Logic: '<S398>/AND1'
         *  Logic: '<S399>/AND'
         *  Logic: '<S399>/NOT'
         *  Logic: '<S464>/AND'
         *  Logic: '<S464>/AND1'
         *  Logic: '<S485>/NOT1'
         *  Math: '<S466>/Mod'
         *  Math: '<S467>/Mod'
         *  RelationalOperator: '<S164>/GreaterThan'
         *  RelationalOperator: '<S164>/GreaterThan1'
         *  RelationalOperator: '<S164>/GreaterThan10'
         *  RelationalOperator: '<S164>/GreaterThan11'
         *  RelationalOperator: '<S164>/GreaterThan12'
         *  RelationalOperator: '<S164>/GreaterThan13'
         *  RelationalOperator: '<S164>/GreaterThan14'
         *  RelationalOperator: '<S164>/GreaterThan15'
         *  RelationalOperator: '<S164>/GreaterThan16'
         *  RelationalOperator: '<S164>/GreaterThan17'
         *  RelationalOperator: '<S164>/GreaterThan18'
         *  RelationalOperator: '<S164>/GreaterThan19'
         *  RelationalOperator: '<S164>/GreaterThan2'
         *  RelationalOperator: '<S164>/GreaterThan20'
         *  RelationalOperator: '<S164>/GreaterThan21'
         *  RelationalOperator: '<S164>/GreaterThan22'
         *  RelationalOperator: '<S164>/GreaterThan23'
         *  RelationalOperator: '<S164>/GreaterThan3'
         *  RelationalOperator: '<S164>/GreaterThan34'
         *  RelationalOperator: '<S164>/GreaterThan35'
         *  RelationalOperator: '<S164>/GreaterThan4'
         *  RelationalOperator: '<S164>/GreaterThan5'
         *  RelationalOperator: '<S164>/GreaterThan6'
         *  RelationalOperator: '<S164>/GreaterThan7'
         *  RelationalOperator: '<S164>/GreaterThan8'
         *  RelationalOperator: '<S164>/GreaterThan9'
         *  RelationalOperator: '<S391>/Equal'
         *  RelationalOperator: '<S392>/Equal'
         *  RelationalOperator: '<S393>/Equal1'
         *  RelationalOperator: '<S394>/Equal2'
         *  RelationalOperator: '<S395>/Equal1'
         *  RelationalOperator: '<S397>/Equal1'
         *  RelationalOperator: '<S398>/Equal3'
         *  RelationalOperator: '<S399>/Equal'
         *  RelationalOperator: '<S401>/Equal16'
         *  RelationalOperator: '<S446>/Equal16'
         *  RelationalOperator: '<S464>/Equal16'
         *  RelationalOperator: '<S464>/GreaterThan2'
         *  RelationalOperator: '<S464>/GreaterThan3'
         *  RelationalOperator: '<S466>/Equal4'
         *  RelationalOperator: '<S467>/Equal4'
         *  Sum: '<S466>/Minus'
         *  Sum: '<S467>/Minus'
         */
        localB->OR1_o = (localB->Transmissionsubtasks1.Equal7_a ||
                         localB->CheckmsgtransmissionCAN1_m.Equal7 ||
                         localB->CheckmsgtransmissionCAN1_o.Equal7 ||
                         localB->Equal7_l);

        /* Logic: '<S164>/OR2' */
        localB->OR2_k = (localB->Transmissionsubtasks1.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_i.Equal7 ||
                         localB->CheckmsgtransmissionCAN2_a.Equal7 ||
                         localB->Equal7);

        /* Logic: '<S164>/OR3' */
        localB->OR3_b = (localB->Receptionsubstasks_jz.AND ||
                         localB->Receptionsubstasks_j.AND ||
                         localB->Receptionsubstasks_d.AND ||
                         localB->Receptionsubstasks_l.AND);

        /* Logic: '<S164>/OR4' */
        localB->OR4_h = (localB->Receptionsubstasks_jz.AND1 ||
                         localB->Receptionsubstasks_j.AND1 ||
                         localB->Receptionsubstasks_d.AND1 ||
                         localB->Receptionsubstasks_l.AND1);
      } else {
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Process_BS_Msg' */
          if (localDW->COMPTaskProcess_BS_Msg_MODE) {
            /* Disable for Enabled SubSystem: '<S393>/Process_Messages' */
            if (localDW->Process_Messages_o.Process_Messages_MODE) {
              Process_Messages_Disable(&localB->Process_Messages_o,
                &localDW->Process_Messages_o);
            }

            /* End of Disable for SubSystem: '<S393>/Process_Messages' */
            localDW->COMPTaskProcess_BS_Msg_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Process_BS_Msg' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */
          if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
            /* Disable for Enabled SubSystem: '<S395>/Process_Messages' */
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }

            /* End of Disable for SubSystem: '<S395>/Process_Messages' */
            localDW->COMPTaskRx_Set_Values_Check_MOD = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S396>/Process_Messages' */
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }

            /* End of Disable for SubSystem: '<S396>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Test Receive1' */
          if (localDW->COMPTaskTestReceive1_MODE) {
            /* Disable for Enabled SubSystem: '<S397>/Process_Messages' */
            if (localDW->Process_Messages_gh.Process_Messages_MODE) {
              Process_Messages_Disable(&localB->Process_Messages_gh,
                &localDW->Process_Messages_gh);
            }

            /* End of Disable for SubSystem: '<S397>/Process_Messages' */
            localDW->COMPTaskTestReceive1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Test Receive1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE_i) {
            /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S387>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S401>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S401>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }

            /* End of Disable for SubSystem: '<S387>/Transmission subtasks' */

            /* Disable for Outport: '<S387>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S387>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSet_Values_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
            if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
                &localDW->Receptionsubstasks_jz);
            }

            /* End of Disable for SubSystem: '<S388>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

            /* Disable for Outport: '<S388>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S388>/Receive CAN1' */
            localB->Receptionsubstasks_jz.AND = false;

            /* Disable for Outport: '<S388>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S388>/Receive CAN2' */
            localB->Receptionsubstasks_jz.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Sync bc 1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Test1' */
          if (localDW->COMMTaskTest1_MODE) {
            /* Disable for Enabled SubSystem: '<S389>/Reception substasks' */
            if (localDW->Receptionsubstasks_d.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_d,
                &localDW->Receptionsubstasks_d);
            }

            /* End of Disable for SubSystem: '<S389>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S389>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE_b) {
              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_o.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_o,
                   &localDW->CheckmsgtransmissionCAN1_o);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_a.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_a,
                   &localDW->CheckmsgtransmissionCAN2_a);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S446>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

              /* Disable for Outport: '<S446>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_a.Equal7 = false;
              localDW->Transmissionsubtasks1_MODE_b = false;
            }

            /* End of Disable for SubSystem: '<S389>/Transmission subtasks1' */

            /* Disable for Outport: '<S389>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

            /* Disable for Outport: '<S389>/Receive CAN1' */
            localB->Receptionsubstasks_d.AND = false;

            /* Disable for Outport: '<S389>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_a.Equal7 = false;

            /* Disable for Outport: '<S389>/Receive CAN2' */
            localB->Receptionsubstasks_d.AND1 = false;
            localDW->COMMTaskTest1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Test1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - send_BS' */
          if (localDW->COMMTasksend_BS_MODE) {
            /* Disable for Enabled SubSystem: '<S390>/Reception substasks' */
            if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
                &localDW->Receptionsubstasks_l);
            }

            /* End of Disable for SubSystem: '<S390>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S390>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S466>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S467>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S464>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S464>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S390>/Transmission subtasks1' */

            /* Disable for Outport: '<S390>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S390>/Receive CAN1' */
            localB->Receptionsubstasks_l.AND = false;

            /* Disable for Outport: '<S390>/Send CAN2' */
            localB->Equal7 = false;

            /* Disable for Outport: '<S390>/Receive CAN2' */
            localB->Receptionsubstasks_l.AND1 = false;
            localDW->COMMTasksend_BS_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - send_BS' */

          /* Disable for Outport: '<S164>/Send_Message_CAN1' */
          localB->OR1_o = false;

          /* Disable for Outport: '<S164>/Send_Message_CAN2' */
          localB->OR2_k = false;

          /* Disable for Outport: '<S164>/Receive_Message_CAN1' */
          localB->OR3_b = false;

          /* Disable for Outport: '<S164>/Receive_Message_CAN2' */
          localB->OR4_h = false;
          localDW->controllerbasiccycle1_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S159>/controller basic cycle 1' */

      /* Switch: '<S159>/Switch' incorporates:
       *  Constant: '<S159>/Constant1'
       *  Constant: '<S163>/Constant'
       *  Constant: '<S163>/Constant12'
       *  Constant: '<S163>/Constant14'
       *  Constant: '<S163>/Constant17'
       *  Constant: '<S163>/Constant19'
       *  Constant: '<S163>/Constant2'
       *  Constant: '<S163>/Constant21'
       *  Constant: '<S163>/Constant23'
       *  Constant: '<S163>/Constant25'
       *  Constant: '<S163>/Constant27'
       *  Constant: '<S163>/Constant28'
       *  Constant: '<S163>/Constant3'
       *  Constant: '<S163>/Constant31'
       *  Constant: '<S163>/Constant33'
       *  Constant: '<S163>/Constant34'
       *  Constant: '<S163>/Constant6'
       *  Constant: '<S163>/Constant8'
       *  Constant: '<S163>/Constant9'
       *  Constant: '<S164>/Constant'
       *  Constant: '<S164>/Constant12'
       *  Constant: '<S164>/Constant13'
       *  Constant: '<S164>/Constant14'
       *  Constant: '<S164>/Constant16'
       *  Constant: '<S164>/Constant19'
       *  Constant: '<S164>/Constant23'
       *  Constant: '<S164>/Constant24'
       *  Constant: '<S164>/Constant25'
       *  Constant: '<S164>/Constant26'
       *  Constant: '<S164>/Constant28'
       *  Constant: '<S164>/Constant4'
       *  Constant: '<S164>/Constant5'
       *  Constant: '<S164>/Constant6'
       *  Constant: '<S164>/Constant7'
       *  Constant: '<S164>/Constant8'
       *  Constant: '<S174>/Constant'
       *  Constant: '<S175>/Constant1'
       *  Constant: '<S175>/Constant4'
       *  Constant: '<S177>/Constant4'
       *  Constant: '<S178>/Constant1'
       *  Constant: '<S179>/Constant4'
       *  Constant: '<S180>/Constant1'
       *  Constant: '<S181>/Constant4'
       *  Constant: '<S182>/Constant1'
       *  Constant: '<S393>/Constant'
       *  Constant: '<S395>/Constant51'
       *  Constant: '<S396>/Constant'
       *  Constant: '<S397>/Constant'
       *  Constant: '<S398>/Constant1'
       *  Constant: '<S405>/Constant'
       *  Constant: '<S450>/Constant'
       *  Constant: '<S464>/Constant6'
       *  Constant: '<S464>/Constant7'
       *  Constant: '<S466>/Constant22'
       *  Constant: '<S466>/Constant24'
       *  Constant: '<S466>/Constant8'
       *  Constant: '<S467>/Constant22'
       *  Constant: '<S467>/Constant24'
       *  Constant: '<S467>/Constant8'
       *  Constant: '<S468>/Constant'
       *  DataStoreRead: '<S132>/Data Store Read10'
       *  DataStoreRead: '<S164>/Data Store Read11'
       *  DataStoreRead: '<S164>/Data Store Read6'
       *  DataStoreRead: '<S164>/Data Store Read7'
       *  DataStoreRead: '<S175>/Data Store Read'
       *  DataStoreRead: '<S175>/Data Store Read1'
       *  DataStoreRead: '<S177>/Data Store Read5'
       *  DataStoreRead: '<S179>/Data Store Read5'
       *  DataStoreRead: '<S181>/Data Store Read5'
       *  DataStoreRead: '<S391>/Data Store Read1'
       *  DataStoreRead: '<S392>/Data Store Read1'
       *  DataStoreRead: '<S399>/Data Store Read1'
       *  DataStoreRead: '<S485>/Data Store Read5'
       *  DataStoreRead: '<S518>/Data Store Read6'
       *  DataStoreWrite: '<S264>/Data Store Write2'
       *  DataStoreWrite: '<S562>/Data Store Write2'
       *  Logic: '<S163>/AND1'
       *  Logic: '<S163>/AND10'
       *  Logic: '<S163>/AND11'
       *  Logic: '<S163>/AND12'
       *  Logic: '<S163>/AND13'
       *  Logic: '<S163>/AND14'
       *  Logic: '<S163>/AND15'
       *  Logic: '<S163>/AND16'
       *  Logic: '<S163>/AND18'
       *  Logic: '<S163>/AND19'
       *  Logic: '<S163>/AND2'
       *  Logic: '<S163>/AND3'
       *  Logic: '<S163>/AND4'
       *  Logic: '<S163>/AND5'
       *  Logic: '<S163>/AND6'
       *  Logic: '<S163>/AND7'
       *  Logic: '<S163>/AND8'
       *  Logic: '<S163>/AND9'
       *  Logic: '<S163>/NOT1'
       *  Logic: '<S164>/AND'
       *  Logic: '<S164>/AND1'
       *  Logic: '<S164>/AND10'
       *  Logic: '<S164>/AND11'
       *  Logic: '<S164>/AND17'
       *  Logic: '<S164>/AND18'
       *  Logic: '<S164>/AND19'
       *  Logic: '<S164>/AND2'
       *  Logic: '<S164>/AND20'
       *  Logic: '<S164>/AND3'
       *  Logic: '<S164>/AND4'
       *  Logic: '<S164>/AND5'
       *  Logic: '<S164>/AND6'
       *  Logic: '<S164>/AND7'
       *  Logic: '<S164>/AND8'
       *  Logic: '<S164>/AND9'
       *  Logic: '<S164>/NOT2'
       *  Logic: '<S164>/NOT4'
       *  Logic: '<S164>/NOT5'
       *  Logic: '<S172>/AND'
       *  Logic: '<S174>/AND'
       *  Logic: '<S175>/AND'
       *  Logic: '<S175>/AND1'
       *  Logic: '<S177>/AND'
       *  Logic: '<S179>/AND'
       *  Logic: '<S181>/AND'
       *  Logic: '<S391>/AND'
       *  Logic: '<S391>/NOT'
       *  Logic: '<S392>/AND'
       *  Logic: '<S392>/NOT'
       *  Logic: '<S393>/AND4'
       *  Logic: '<S395>/AND'
       *  Logic: '<S395>/AND2'
       *  Logic: '<S396>/AND'
       *  Logic: '<S397>/AND4'
       *  Logic: '<S398>/AND1'
       *  Logic: '<S399>/AND'
       *  Logic: '<S399>/NOT'
       *  Logic: '<S464>/AND'
       *  Logic: '<S464>/AND1'
       *  Logic: '<S485>/NOT1'
       *  Math: '<S466>/Mod'
       *  Math: '<S467>/Mod'
       *  RelationalOperator: '<S159>/Equal1'
       *  RelationalOperator: '<S163>/GreaterThan10'
       *  RelationalOperator: '<S163>/GreaterThan11'
       *  RelationalOperator: '<S163>/GreaterThan12'
       *  RelationalOperator: '<S163>/GreaterThan13'
       *  RelationalOperator: '<S163>/GreaterThan14'
       *  RelationalOperator: '<S163>/GreaterThan15'
       *  RelationalOperator: '<S163>/GreaterThan16'
       *  RelationalOperator: '<S163>/GreaterThan17'
       *  RelationalOperator: '<S163>/GreaterThan18'
       *  RelationalOperator: '<S163>/GreaterThan19'
       *  RelationalOperator: '<S163>/GreaterThan2'
       *  RelationalOperator: '<S163>/GreaterThan20'
       *  RelationalOperator: '<S163>/GreaterThan21'
       *  RelationalOperator: '<S163>/GreaterThan22'
       *  RelationalOperator: '<S163>/GreaterThan23'
       *  RelationalOperator: '<S163>/GreaterThan24'
       *  RelationalOperator: '<S163>/GreaterThan25'
       *  RelationalOperator: '<S163>/GreaterThan26'
       *  RelationalOperator: '<S163>/GreaterThan27'
       *  RelationalOperator: '<S163>/GreaterThan28'
       *  RelationalOperator: '<S163>/GreaterThan29'
       *  RelationalOperator: '<S163>/GreaterThan3'
       *  RelationalOperator: '<S163>/GreaterThan30'
       *  RelationalOperator: '<S163>/GreaterThan31'
       *  RelationalOperator: '<S163>/GreaterThan32'
       *  RelationalOperator: '<S163>/GreaterThan33'
       *  RelationalOperator: '<S163>/GreaterThan4'
       *  RelationalOperator: '<S163>/GreaterThan5'
       *  RelationalOperator: '<S163>/GreaterThan6'
       *  RelationalOperator: '<S163>/GreaterThan7'
       *  RelationalOperator: '<S163>/GreaterThan8'
       *  RelationalOperator: '<S163>/GreaterThan9'
       *  RelationalOperator: '<S164>/GreaterThan'
       *  RelationalOperator: '<S164>/GreaterThan1'
       *  RelationalOperator: '<S164>/GreaterThan10'
       *  RelationalOperator: '<S164>/GreaterThan11'
       *  RelationalOperator: '<S164>/GreaterThan12'
       *  RelationalOperator: '<S164>/GreaterThan13'
       *  RelationalOperator: '<S164>/GreaterThan14'
       *  RelationalOperator: '<S164>/GreaterThan15'
       *  RelationalOperator: '<S164>/GreaterThan16'
       *  RelationalOperator: '<S164>/GreaterThan17'
       *  RelationalOperator: '<S164>/GreaterThan18'
       *  RelationalOperator: '<S164>/GreaterThan19'
       *  RelationalOperator: '<S164>/GreaterThan2'
       *  RelationalOperator: '<S164>/GreaterThan20'
       *  RelationalOperator: '<S164>/GreaterThan21'
       *  RelationalOperator: '<S164>/GreaterThan22'
       *  RelationalOperator: '<S164>/GreaterThan23'
       *  RelationalOperator: '<S164>/GreaterThan3'
       *  RelationalOperator: '<S164>/GreaterThan34'
       *  RelationalOperator: '<S164>/GreaterThan35'
       *  RelationalOperator: '<S164>/GreaterThan4'
       *  RelationalOperator: '<S164>/GreaterThan5'
       *  RelationalOperator: '<S164>/GreaterThan6'
       *  RelationalOperator: '<S164>/GreaterThan7'
       *  RelationalOperator: '<S164>/GreaterThan8'
       *  RelationalOperator: '<S164>/GreaterThan9'
       *  RelationalOperator: '<S170>/Equal'
       *  RelationalOperator: '<S171>/Equal'
       *  RelationalOperator: '<S172>/Equal2'
       *  RelationalOperator: '<S173>/Equal2'
       *  RelationalOperator: '<S175>/Equal'
       *  RelationalOperator: '<S175>/Equal1'
       *  RelationalOperator: '<S175>/Equal2'
       *  RelationalOperator: '<S176>/Equal'
       *  RelationalOperator: '<S177>/Equal'
       *  RelationalOperator: '<S177>/Equal2'
       *  RelationalOperator: '<S179>/Equal'
       *  RelationalOperator: '<S179>/Equal2'
       *  RelationalOperator: '<S181>/Equal'
       *  RelationalOperator: '<S181>/Equal2'
       *  RelationalOperator: '<S391>/Equal'
       *  RelationalOperator: '<S392>/Equal'
       *  RelationalOperator: '<S393>/Equal1'
       *  RelationalOperator: '<S394>/Equal2'
       *  RelationalOperator: '<S395>/Equal1'
       *  RelationalOperator: '<S397>/Equal1'
       *  RelationalOperator: '<S398>/Equal3'
       *  RelationalOperator: '<S399>/Equal'
       *  RelationalOperator: '<S401>/Equal16'
       *  RelationalOperator: '<S446>/Equal16'
       *  RelationalOperator: '<S464>/Equal16'
       *  RelationalOperator: '<S464>/GreaterThan2'
       *  RelationalOperator: '<S464>/GreaterThan3'
       *  RelationalOperator: '<S466>/Equal4'
       *  RelationalOperator: '<S467>/Equal4'
       *  Sum: '<S466>/Minus'
       *  Sum: '<S467>/Minus'
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

      /* DataStoreRead: '<S162>/Data Store Read' */
      Master_ID_s = *rtd_Master_ID;

      /* DataStoreRead: '<S162>/Data Store Read1' */
      Role_ID_s = localDW->Role_ID;

      /* DataStoreRead: '<S162>/Data Store Read10' */
      BC1_sync_processed_s = localDW->BC1_Sync_processed;

      /* DataStoreRead: '<S162>/Data Store Read11' */
      sync_bc0_miss_counter_s = localDW->Sync_bc0_missed_counter_j;

      /* DataStoreRead: '<S162>/Data Store Read12' */
      sync_bc1_miss_counter_s = localDW->Sync_bc1_missed_counter_h;

      /* DataStoreRead: '<S162>/Data Store Read2' */
      BC0_sync_processed_s = localDW->BC0_Sync_processed;

      /* DataStoreRead: '<S162>/Data Store Read3' */
      votes_Board_1_DEBUG = localDW->Votes_count.First_Board;
      votes_Board_2_DEBUG = localDW->Votes_count.Second_Board;
      votes_Board_3_DEBUG = localDW->Votes_count.Third_Board;

      /* DataStoreRead: '<S162>/Data Store Read4' */
      Board_1_error_counter_s = localDW->Board1_error_counter;

      /* DataStoreRead: '<S162>/Data Store Read5' */
      Board_2_error_counter_s = localDW->Board2_error_counter;

      /* DataStoreRead: '<S162>/Data Store Read6' */
      Board_3_error_counter_s = localDW->Board3_error_counter;

      /* DataStoreRead: '<S162>/Data Store Read7' */
      BC0_vote1_processed_s = localDW->BC0_Vote1_processed;

      /* DataStoreRead: '<S162>/Data Store Read8' */
      BC0_vote2_processed_s = localDW->BC0_Vote2_processed;

      /* DataStoreRead: '<S162>/Data Store Read9' */
      BC0_vote3_processed_s = localDW->BC0_Vote3_processed;

      /* DataStoreRead: '<S165>/Data Store Read24' */
      msg_count_DEBUG_s = localDW->msg_count_DEBUG_i;
    } else {
      if (localDW->ControllerMatrixCycle_MODE) {
        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 0' */
        if (localDW->controllerbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S174>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S174>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S178>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S178>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S180>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S182>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S182>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
              &localDW->COMMTaskSyncbc0_b);
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S168>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

            /* Disable for Outport: '<S168>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S168>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S168>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S168>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S169>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S169>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S169>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S169>/Transmission subtasks' */

            /* Disable for Outport: '<S169>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S169>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S169>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S169>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote3' */

          /* Disable for Outport: '<S163>/Send_Message_CAN1' */
          localB->OR1_oo = false;

          /* Disable for Outport: '<S163>/Send_Message_CAN2' */
          localB->OR4_o = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN1' */
          localB->OR2_p = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN2' */
          localB->OR3_bn = false;
          localDW->controllerbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Process_BS_Msg' */
          if (localDW->COMPTaskProcess_BS_Msg_MODE) {
            /* Disable for Enabled SubSystem: '<S393>/Process_Messages' */
            if (localDW->Process_Messages_o.Process_Messages_MODE) {
              Process_Messages_Disable(&localB->Process_Messages_o,
                &localDW->Process_Messages_o);
            }

            /* End of Disable for SubSystem: '<S393>/Process_Messages' */
            localDW->COMPTaskProcess_BS_Msg_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Process_BS_Msg' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */
          if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
            /* Disable for Enabled SubSystem: '<S395>/Process_Messages' */
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }

            /* End of Disable for SubSystem: '<S395>/Process_Messages' */
            localDW->COMPTaskRx_Set_Values_Check_MOD = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S396>/Process_Messages' */
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }

            /* End of Disable for SubSystem: '<S396>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Test Receive1' */
          if (localDW->COMPTaskTestReceive1_MODE) {
            /* Disable for Enabled SubSystem: '<S397>/Process_Messages' */
            if (localDW->Process_Messages_gh.Process_Messages_MODE) {
              Process_Messages_Disable(&localB->Process_Messages_gh,
                &localDW->Process_Messages_gh);
            }

            /* End of Disable for SubSystem: '<S397>/Process_Messages' */
            localDW->COMPTaskTestReceive1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Test Receive1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE_i) {
            /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S387>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S401>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S401>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }

            /* End of Disable for SubSystem: '<S387>/Transmission subtasks' */

            /* Disable for Outport: '<S387>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S387>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSet_Values_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
            if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
                &localDW->Receptionsubstasks_jz);
            }

            /* End of Disable for SubSystem: '<S388>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

            /* Disable for Outport: '<S388>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S388>/Receive CAN1' */
            localB->Receptionsubstasks_jz.AND = false;

            /* Disable for Outport: '<S388>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S388>/Receive CAN2' */
            localB->Receptionsubstasks_jz.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Sync bc 1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Test1' */
          if (localDW->COMMTaskTest1_MODE) {
            /* Disable for Enabled SubSystem: '<S389>/Reception substasks' */
            if (localDW->Receptionsubstasks_d.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_d,
                &localDW->Receptionsubstasks_d);
            }

            /* End of Disable for SubSystem: '<S389>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S389>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE_b) {
              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_o.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_o,
                   &localDW->CheckmsgtransmissionCAN1_o);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_a.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_a,
                   &localDW->CheckmsgtransmissionCAN2_a);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S446>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

              /* Disable for Outport: '<S446>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_a.Equal7 = false;
              localDW->Transmissionsubtasks1_MODE_b = false;
            }

            /* End of Disable for SubSystem: '<S389>/Transmission subtasks1' */

            /* Disable for Outport: '<S389>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

            /* Disable for Outport: '<S389>/Receive CAN1' */
            localB->Receptionsubstasks_d.AND = false;

            /* Disable for Outport: '<S389>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_a.Equal7 = false;

            /* Disable for Outport: '<S389>/Receive CAN2' */
            localB->Receptionsubstasks_d.AND1 = false;
            localDW->COMMTaskTest1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Test1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - send_BS' */
          if (localDW->COMMTasksend_BS_MODE) {
            /* Disable for Enabled SubSystem: '<S390>/Reception substasks' */
            if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
                &localDW->Receptionsubstasks_l);
            }

            /* End of Disable for SubSystem: '<S390>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S390>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S466>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S467>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S464>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S464>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S390>/Transmission subtasks1' */

            /* Disable for Outport: '<S390>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S390>/Receive CAN1' */
            localB->Receptionsubstasks_l.AND = false;

            /* Disable for Outport: '<S390>/Send CAN2' */
            localB->Equal7 = false;

            /* Disable for Outport: '<S390>/Receive CAN2' */
            localB->Receptionsubstasks_l.AND1 = false;
            localDW->COMMTasksend_BS_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - send_BS' */

          /* Disable for Outport: '<S164>/Send_Message_CAN1' */
          localB->OR1_o = false;

          /* Disable for Outport: '<S164>/Send_Message_CAN2' */
          localB->OR2_k = false;

          /* Disable for Outport: '<S164>/Receive_Message_CAN1' */
          localB->OR3_b = false;

          /* Disable for Outport: '<S164>/Receive_Message_CAN2' */
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
       *  EnablePort: '<S628>/Enable'
       */
      if (rtb_Equal_kj) {
        if (!localDW->inputgeneratorbasiccycle0_MODE) {
          localDW->inputgeneratorbasiccycle0_MODE = true;
        }

        /* DataStoreRead: '<S628>/Data Store Read8' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S628>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S632>/Enable'
         */
        if ((*rtd_Local_Ticks >= 88.0) && (*rtd_Local_Ticks < localC->Sum17)) {
          /* Outputs for Enabled SubSystem: '<S632>/Check Timeouts' incorporates:
           *  EnablePort: '<S654>/Enable'
           */
          if (*rtd_Local_Ticks == 88.0) {
            /* Logic: '<S654>/NOT4' incorporates:
             *  DataStoreRead: '<S654>/Data Store Read25'
             *  DataStoreWrite: '<S654>/Data Store Write8'
             */
            localDW->Toggle_Pin_A1 = !localDW->BC0_Sync_processed;

            /* Switch: '<S654>/Switch7' incorporates:
             *  Constant: '<S654>/Constant16'
             *  DataStoreRead: '<S654>/Data Store Read23'
             *  DataStoreWrite: '<S654>/Data Store Write8'
             *  DataStoreWrite: '<S654>/Data Store Write9'
             *  Sum: '<S654>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc0_missed_counter += 1.0;
            }

            /* End of Switch: '<S654>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S632>/Check Timeouts' */

          /* DataStoreRead: '<S632>/Data Store Read' incorporates:
           *  RelationalOperator: '<S632>/Equal2'
           */
          reset_ing_s = localDW->Reset_Board_j;

          /* Outputs for Enabled SubSystem: '<S632>/RESET Board - Return to initialization' incorporates:
           *  EnablePort: '<S655>/Enable'
           */
          if ((*rtd_Local_Ticks == 90.0) && reset_ing_s) {
            /* DataStoreWrite: '<S655>/Data Store Write' */
            localDW->Reset_Board_j = localC->Cast_j;

            /* DataStoreWrite: '<S655>/Data Store Write1' */
            *rtd_New_Msg_Ready_CAN1 = localC->Cast_j;

            /* DataStoreWrite: '<S655>/Data Store Write10' */
            *rtd_New_Msg_Ready_CAN2 = localC->Cast_j;

            /* DataStoreWrite: '<S655>/Data Store Write11' */
            localDW->Desync_Positive = localC->Cast_j;

            /* DataStoreWrite: '<S655>/Data Store Write2' */
            localDW->Initialization_flag = localC->NOT_l;

            /* DataStoreWrite: '<S655>/Data Store Write4' incorporates:
             *  Constant: '<S655>/Constant'
             */
            localDW->Role_ID = 0.0;

            /* DataStoreWrite: '<S655>/Data Store Write5' incorporates:
             *  Constant: '<S655>/Constant'
             */
            *rtd_Master_ID = 0.0;

            /* DataStoreWrite: '<S655>/Data Store Write6' */
            *rtd_Rx_State_CAN1 = localC->Cast6_k;

            /* DataStoreWrite: '<S655>/Data Store Write9' */
            *rtd_Rx_State_CAN2 = localC->Cast6_k;

            /* DataStoreWrite: '<S655>/Data Store Write3' incorporates:
             *  Constant: '<S655>/Constant1'
             */
            *rtd_RxID_CAN1 = 1U;

            /* DataStoreWrite: '<S655>/Data Store Write8' incorporates:
             *  Constant: '<S655>/Constant1'
             */
            *rtd_RxID_CAN2 = 1U;

            /* DataStoreWrite: '<S655>/Data Store Write7' incorporates:
             *  Constant: '<S655>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S632>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S628>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S628>/COMP Task - Reset Variables BC0' incorporates:
         *  EnablePort: '<S633>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S633>/Reset variables' incorporates:
         *  EnablePort: '<S656>/Enable'
         */
        if ((*rtd_Local_Ticks >= 364.0) && (*rtd_Local_Ticks < localC->Sum16) &&
            (*rtd_Local_Ticks == 364.0)) {
          /* DataStoreWrite: '<S656>/Data Store Write' incorporates:
           *  Constant: '<S656>/Constant'
           */
          localDW->Desync_Positive = false;

          /* DataStoreWrite: '<S656>/Data Store Write1' incorporates:
           *  Constant: '<S656>/Constant'
           */
          localDW->BC0_Sync_processed = false;

          /* DataStoreWrite: '<S656>/Data Store Write5' incorporates:
           *  Constant: '<S656>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S633>/Reset variables' */
        /* End of Outputs for SubSystem: '<S628>/COMP Task - Reset Variables BC0' */

        /* Logic: '<S628>/NOT1' incorporates:
         *  Constant: '<S628>/Constant25'
         *  Constant: '<S628>/Constant31'
         *  Constant: '<S628>/Constant4'
         *  DataStoreRead: '<S628>/Data Store Read6'
         *  Logic: '<S628>/AND15'
         *  Logic: '<S628>/AND16'
         *  Logic: '<S628>/NOT3'
         *  Logic: '<S632>/AND'
         *  RelationalOperator: '<S628>/GreaterThan30'
         *  RelationalOperator: '<S628>/GreaterThan31'
         *  RelationalOperator: '<S628>/GreaterThan32'
         *  RelationalOperator: '<S628>/GreaterThan33'
         *  RelationalOperator: '<S632>/Equal1'
         *  RelationalOperator: '<S632>/Equal2'
         *  RelationalOperator: '<S633>/Equal2'
         */
        rtb_AND2_n = !localDW->BC0_Sync_processed;

        /* Outputs for Enabled SubSystem: '<S628>/COMP Task - Sync bc0 check' incorporates:
         *  EnablePort: '<S634>/Enable'
         */
        if ((*rtd_Local_Ticks >= 80.0) && (*rtd_Local_Ticks < localC->Sum1_m) &&
            rtb_AND2_n) {
          if (!localDW->COMPTaskSyncbc0check_MODE) {
            localDW->COMPTaskSyncbc0check_MODE = true;
          }

          /* DataStoreRead: '<S634>/Data Store Read1' */
          rtb_DataStoreRead1_dl = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S634>/Data Store Read2' */
          rtb_DataStoreRead2_ea = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S634>/Data Store Read' */
          rtb_DataStoreRead_ooj = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S634>/Data Store Read3' */
          rtb_DataStoreRead3_kv = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S634>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 80.0);

          /* RelationalOperator: '<S634>/Equal5' incorporates:
           *  Constant: '<S634>/Constant26'
           *  DataStoreRead: '<S634>/Data Store Read6'
           */
          rtb_AND1_fb = (localDW->Role_ID != 1.0);

          /* Outputs for Enabled SubSystem: '<S634>/Process_Messages' incorporates:
           *  EnablePort: '<S657>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_fb) {
            if (!localDW->Process_Messages_MODE_n) {
              localDW->Process_Messages_MODE_n = true;
            }

            /* Outputs for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_d(rtb_DataStoreRead1_dl,
              &rtb_DataStoreRead_ooj, 0.0,
              &localB->DemuxmessageCAN1andcheckcohe_d0,
              &localDW->DemuxmessageCAN1andcheckcohe_d0,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S657>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_h(rtb_DataStoreRead2_ea,
              &rtb_DataStoreRead3_kv, 0.0,
              &localB->DemuxmessageCAN1andcheckcohe_h5,
              &localDW->DemuxmessageCAN1andcheckcohe_h5,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S657>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S657>/Switch' incorporates:
             *  Constant: '<S634>/Constant'
             *  DataStoreWrite: '<S657>/Data Store Write'
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

            /* End of Switch: '<S657>/Switch' */

            /* Logic: '<S657>/OR' incorporates:
             *  DataStoreWrite: '<S657>/Data Store Write2'
             */
            localDW->new_msg_Rx_i =
              (localB->DemuxmessageCAN1andcheckcohe_d0.Equal1 ||
               localB->DemuxmessageCAN1andcheckcohe_h5.Equal1);

            /* Outputs for Enabled SubSystem: '<S657>/Desync calculation' incorporates:
             *  EnablePort: '<S661>/Enable'
             */
            if (localDW->new_msg_Rx_i) {
              /* Switch: '<S661>/Switch1' incorporates:
               *  Constant: '<S628>/Constant'
               *  Constant: '<S661>/Constant'
               *  Constant: '<S661>/Constant1'
               *  Constant: '<S661>/delay_estimation_1'
               *  Constant: '<S661>/delay_estimation_2'
               *  Product: '<S661>/Multiply'
               *  Product: '<S661>/Multiply1'
               *  Sum: '<S661>/Minus'
               *  Sum: '<S661>/Minus1'
               *  Sum: '<S661>/Sum'
               *  Sum: '<S661>/Sum1'
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

              /* End of Switch: '<S661>/Switch1' */

              /* Saturate: '<S661>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc0_ing_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc0_ing_s = (-15.0);
              } else {
                Desync_Sync_bc0_ing_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S661>/Saturation' */

              /* DataStoreWrite: '<S661>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc0_ing_s;
            }

            /* End of Outputs for SubSystem: '<S657>/Desync calculation' */

            /* DataStoreWrite: '<S657>/Data Store Write3' incorporates:
             *  Constant: '<S657>/Constant2'
             *  DataStoreWrite: '<S657>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }
          }

          /* End of Outputs for SubSystem: '<S634>/Process_Messages' */

          /* Logic: '<S634>/AND1' incorporates:
           *  Constant: '<S634>/Constant'
           *  DataStoreWrite: '<S657>/Data Store Write2'
           *  Logic: '<S634>/AND'
           *  Logic: '<S634>/NOT'
           */
          rtb_AND1_of = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S634>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_of, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S634>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S634>/Process_Messages' */
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }

            /* End of Disable for SubSystem: '<S634>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S628>/COMP Task - Sync bc0 check' */

        /* Outputs for Enabled SubSystem: '<S628>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S635>/Enable'
         */
        if ((*rtd_Local_Ticks >= 84.0) && (*rtd_Local_Ticks < localC->Sum2_o) &&
            rtb_AND2_n) {
          /* RelationalOperator: '<S635>/Equal1' incorporates:
           *  Constant: '<S628>/Constant3'
           */
          rtb_AND_ck = (*rtd_Local_Ticks == 86.0);

          /* Outputs for Enabled SubSystem: '<S635>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S686>/Enable'
           */
          if ((*rtd_Local_Ticks == 84.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S686>/Data Store Write1' incorporates:
             *  Constant: '<S686>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S635>/LA - Ensemble precision' */

          /* Outputs for Enabled SubSystem: '<S635>/Local Time Update' incorporates:
           *  EnablePort: '<S687>/Enable'
           */
          if (rtb_AND_ck && localDW->new_msg_Rx_i) {
            /* RelationalOperator: '<S687>/GreaterThan' incorporates:
             *  Constant: '<S687>/Constant4'
             *  DataStoreRead: '<S687>/Data Store Read1'
             *  DataStoreWrite: '<S687>/Data Store Write'
             */
            localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

            /* Logic: '<S687>/NOT' incorporates:
             *  DataStoreWrite: '<S687>/Data Store Write'
             */
            rtb_NOT_lg = !localDW->Desync_Positive;

            /* Outputs for Enabled SubSystem: '<S687>/Desync_Negative' */
            Desync_Negative(rtb_NOT_lg, 84.0, &localDW->Desync_Ticks,
                            rtd_Local_Ticks);

            /* End of Outputs for SubSystem: '<S687>/Desync_Negative' */

            /* DataStoreWrite: '<S687>/Data Store Write13' incorporates:
             *  Constant: '<S687>/Constant3'
             */
            localDW->BC0_Sync_processed = true;

            /* DataStoreWrite: '<S687>/Data Store Write3' incorporates:
             *  Constant: '<S687>/Constant1'
             */
            *rtd_Toggle_Pin_A0 = true;

            /* DataStoreWrite: '<S687>/Data Store Write1' incorporates:
             *  Constant: '<S687>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S635>/Local Time Update' */

          /* Outputs for Enabled SubSystem: '<S635>/Set Reset Board' incorporates:
           *  EnablePort: '<S688>/Enable'
           */
          if (rtb_AND_ck && (!localDW->new_msg_Rx_i)) {
            /* DataStoreWrite: '<S688>/Data Store Write' incorporates:
             *  Constant: '<S688>/Constant'
             */
            localDW->Reset_Board_j = true;
          }

          /* End of Outputs for SubSystem: '<S635>/Set Reset Board' */
        }

        /* End of Outputs for SubSystem: '<S628>/COMP Task - Update LT' */

        /* Logic: '<S628>/AND17' incorporates:
         *  Constant: '<S628>/Constant'
         *  Constant: '<S628>/Constant17'
         *  Constant: '<S628>/Constant2'
         *  Constant: '<S634>/Constant'
         *  Constant: '<S635>/Constant1'
         *  DataStoreRead: '<S628>/Data Store Read11'
         *  DataStoreRead: '<S635>/Data Store Read'
         *  DataStoreWrite: '<S657>/Data Store Write2'
         *  Logic: '<S628>/AND'
         *  Logic: '<S628>/AND1'
         *  Logic: '<S628>/AND18'
         *  Logic: '<S628>/AND19'
         *  Logic: '<S628>/AND2'
         *  Logic: '<S628>/NOT1'
         *  Logic: '<S628>/NOT2'
         *  Logic: '<S634>/AND'
         *  Logic: '<S635>/AND'
         *  Logic: '<S635>/AND1'
         *  Logic: '<S635>/AND2'
         *  Logic: '<S635>/NOT'
         *  RelationalOperator: '<S628>/GreaterThan'
         *  RelationalOperator: '<S628>/GreaterThan1'
         *  RelationalOperator: '<S628>/GreaterThan2'
         *  RelationalOperator: '<S628>/GreaterThan3'
         *  RelationalOperator: '<S628>/GreaterThan4'
         *  RelationalOperator: '<S628>/GreaterThan5'
         *  RelationalOperator: '<S635>/Equal3'
         */
        rtb_AND17_b = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4_m) && (!localDW->BC0_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S628>/COMM Task - Sync bc 0' */
        COMMTaskSyncbc0(rtb_AND17_b, 0.0, &localB->COMMTaskSyncbc0_e,
                        &localC->COMMTaskSyncbc0_e, &localDW->COMMTaskSyncbc0_e,
                        rtd_Board_ID, rtd_Local_Ticks, &Msg_Rx_g,
                        rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, rtd_New_Msg_Ready_CAN1,
                        rtd_New_Msg_Ready_CAN2, &localDW->Role_ID, rtd_RxID_CAN1,
                        rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                        rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx_i);

        /* End of Outputs for SubSystem: '<S628>/COMM Task - Sync bc 0' */
      } else {
        if (localDW->inputgeneratorbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S628>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S634>/Process_Messages' */
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }

            /* End of Disable for SubSystem: '<S634>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S628>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S628>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_e.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_e,
              &localDW->COMMTaskSyncbc0_e);
          }

          /* End of Disable for SubSystem: '<S628>/COMM Task - Sync bc 0' */

          /* Disable for Outport: '<S628>/Send_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S628>/Send_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S628>/Receive_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S628>/Receive_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1 = false;
          localDW->inputgeneratorbasiccycle0_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S160>/input generator basic cycle 0' */

      /* Outputs for Enabled SubSystem: '<S160>/input generator basic cycle 1' incorporates:
       *  EnablePort: '<S629>/Enable'
       */
      if (localDW->basic_cycle_count == 1.0) {
        if (!localDW->inputgeneratorbasiccycle1_MODE) {
          localDW->inputgeneratorbasiccycle1_MODE = true;
        }

        /* DataStoreRead: '<S629>/Data Store Read1' */
        rtb_DataStoreRead8_c = *rtd_Local_Ticks;

        /* Outputs for Enabled SubSystem: '<S629>/COMP Task - Reset Board' incorporates:
         *  EnablePort: '<S692>/Enable'
         */
        if ((*rtd_Local_Ticks >= 252.0) && (*rtd_Local_Ticks < localC->Sum5)) {
          /* Outputs for Enabled SubSystem: '<S692>/Check Timeouts' incorporates:
           *  EnablePort: '<S742>/Enable'
           */
          if (*rtd_Local_Ticks == 252.0) {
            /* Logic: '<S742>/NOT4' incorporates:
             *  DataStoreRead: '<S742>/Data Store Read25'
             *  DataStoreWrite: '<S742>/Data Store Write8'
             */
            localDW->Toggle_Pin_A1 = !localDW->BC1_Sync_processed;

            /* Switch: '<S742>/Switch7' incorporates:
             *  Constant: '<S742>/Constant16'
             *  DataStoreRead: '<S742>/Data Store Read23'
             *  DataStoreWrite: '<S742>/Data Store Write8'
             *  DataStoreWrite: '<S742>/Data Store Write9'
             *  Sum: '<S742>/Plus6'
             */
            if (localDW->Toggle_Pin_A1) {
              localDW->Sync_bc1_missed_counter += 1.0;
            }

            /* End of Switch: '<S742>/Switch7' */
          }

          /* End of Outputs for SubSystem: '<S692>/Check Timeouts' */

          /* Outputs for Enabled SubSystem: '<S692>/RESET Board - Return to initialization' incorporates:
           *  EnablePort: '<S743>/Enable'
           */
          if ((*rtd_Local_Ticks == 254.0) && localDW->Reset_Board) {
            /* DataStoreWrite: '<S743>/Data Store Write' */
            localDW->Reset_Board = localC->Cast_o;

            /* DataStoreWrite: '<S743>/Data Store Write1' */
            *rtd_New_Msg_Ready_CAN1 = localC->Cast_o;

            /* DataStoreWrite: '<S743>/Data Store Write10' */
            *rtd_New_Msg_Ready_CAN2 = localC->Cast_o;

            /* DataStoreWrite: '<S743>/Data Store Write11' */
            localDW->Desync_Positive = localC->Cast_o;

            /* DataStoreWrite: '<S743>/Data Store Write12' */
            localDW->BC1_Sync_processed = localC->Cast_o;

            /* DataStoreWrite: '<S743>/Data Store Write2' */
            localDW->Initialization_flag = localC->NOT;

            /* DataStoreWrite: '<S743>/Data Store Write4' incorporates:
             *  Constant: '<S743>/Constant'
             */
            localDW->Role_ID = 0.0;

            /* DataStoreWrite: '<S743>/Data Store Write5' incorporates:
             *  Constant: '<S743>/Constant'
             */
            *rtd_Master_ID = 0.0;

            /* DataStoreWrite: '<S743>/Data Store Write6' */
            *rtd_Rx_State_CAN1 = localC->Cast6;

            /* DataStoreWrite: '<S743>/Data Store Write9' */
            *rtd_Rx_State_CAN2 = localC->Cast6;

            /* DataStoreWrite: '<S743>/Data Store Write3' incorporates:
             *  Constant: '<S743>/Constant1'
             */
            *rtd_RxID_CAN1 = 1U;

            /* DataStoreWrite: '<S743>/Data Store Write8' incorporates:
             *  Constant: '<S743>/Constant1'
             */
            *rtd_RxID_CAN2 = 1U;

            /* DataStoreWrite: '<S743>/Data Store Write7' incorporates:
             *  Constant: '<S743>/Constant3'
             */
            *rtd_Toggle_Pin_A0 = true;
          }

          /* End of Outputs for SubSystem: '<S692>/RESET Board - Return to initialization' */
        }

        /* End of Outputs for SubSystem: '<S629>/COMP Task - Reset Board' */

        /* Outputs for Enabled SubSystem: '<S629>/COMP Task - Reset Variables BC1' incorporates:
         *  EnablePort: '<S693>/Enable'
         */
        if ((*rtd_Local_Ticks >= 360.0) && (*rtd_Local_Ticks < localC->Sum18)) {
          /* RelationalOperator: '<S693>/Equal2' */
          rtb_Equal2_d = (*rtd_Local_Ticks == 360.0);

          /* Outputs for Enabled SubSystem: '<S693>/Reset Variables' */
          ResetVariables(rtb_Equal2_d, &localDW->BC1_Sync_processed,
                         &localDW->Desync_Positive, rtd_Toggle_Pin_A0);

          /* End of Outputs for SubSystem: '<S693>/Reset Variables' */
        }

        /* End of Outputs for SubSystem: '<S629>/COMP Task - Reset Variables BC1' */

        /* Outputs for Enabled SubSystem: '<S629>/COMP Task - Rx_Set_Values_Check' incorporates:
         *  EnablePort: '<S694>/Enable'
         */
        if ((*rtd_Local_Ticks >= 168.0) && (*rtd_Local_Ticks < localC->Sum6)) {
          /* Logic: '<S694>/AND1' incorporates:
           *  Constant: '<S694>/Constant57'
           *  RelationalOperator: '<S694>/Equal'
           *  RelationalOperator: '<S694>/Equal13'
           */
          rtb_AND1_eq = ((*rtd_Local_Ticks == 168.0) && (*rtd_Board_ID == 5.0));

          /* Outputs for Enabled SubSystem: '<S694>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_eq, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S694>/Reset Tx msg counter' */
        }

        /* End of Outputs for SubSystem: '<S629>/COMP Task - Rx_Set_Values_Check' */

        /* Logic: '<S629>/NOT2' incorporates:
         *  Constant: '<S629>/Constant12'
         *  Constant: '<S629>/Constant16'
         *  Constant: '<S629>/Constant7'
         *  Constant: '<S629>/Constant8'
         *  DataStoreRead: '<S629>/Data Store Read6'
         *  DataStoreRead: '<S692>/Data Store Read'
         *  Logic: '<S629>/AND20'
         *  Logic: '<S629>/AND4'
         *  Logic: '<S629>/AND5'
         *  Logic: '<S629>/NOT5'
         *  Logic: '<S692>/AND'
         *  RelationalOperator: '<S629>/GreaterThan10'
         *  RelationalOperator: '<S629>/GreaterThan11'
         *  RelationalOperator: '<S629>/GreaterThan34'
         *  RelationalOperator: '<S629>/GreaterThan35'
         *  RelationalOperator: '<S629>/GreaterThan8'
         *  RelationalOperator: '<S629>/GreaterThan9'
         *  RelationalOperator: '<S692>/Equal1'
         *  RelationalOperator: '<S692>/Equal2'
         */
        rtb_AND2_n = !localDW->BC1_Sync_processed;

        /* Outputs for Enabled SubSystem: '<S629>/COMP Task - Sync bc1 check' incorporates:
         *  EnablePort: '<S695>/Enable'
         */
        if ((*rtd_Local_Ticks >= 80.0) && (*rtd_Local_Ticks < localC->Sum1) &&
            rtb_AND2_n) {
          if (!localDW->COMPTaskSyncbc1check_MODE) {
            localDW->COMPTaskSyncbc1check_MODE = true;
          }

          /* DataStoreRead: '<S695>/Data Store Read1' */
          rtb_DataStoreRead1_c4 = *rtd_New_Msg_Ready_CAN1;

          /* DataStoreRead: '<S695>/Data Store Read2' */
          rtb_DataStoreRead2_eu = *rtd_New_Msg_Ready_CAN2;

          /* DataStoreRead: '<S695>/Data Store Read' */
          rtb_DataStoreRead_n = *rtd_Msg_Rx_CAN1;

          /* DataStoreRead: '<S695>/Data Store Read3' */
          rtb_DataStoreRead3 = *rtd_Msg_Rx_CAN2;

          /* RelationalOperator: '<S695>/Equal' */
          rtb_AND_ck = (*rtd_Local_Ticks == 80.0);

          /* RelationalOperator: '<S695>/Equal5' incorporates:
           *  Constant: '<S695>/Constant26'
           *  DataStoreRead: '<S695>/Data Store Read6'
           */
          rtb_AND1_fb = (localDW->Role_ID != 1.0);

          /* Outputs for Enabled SubSystem: '<S695>/Process_Messages' incorporates:
           *  EnablePort: '<S746>/Enable'
           */
          if (rtb_AND_ck && rtb_AND1_fb) {
            if (!localDW->Process_Messages_MODE) {
              localDW->Process_Messages_MODE = true;
            }

            /* Outputs for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence' */
            DemuxmessageCAN1andcheckcoher_d(rtb_DataStoreRead1_c4,
              &rtb_DataStoreRead_n, 1.0,
              &localB->DemuxmessageCAN1andcheckcoher_o,
              &localDW->DemuxmessageCAN1andcheckcoher_o,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S746>/Demux message CAN1 and check coherence' */

            /* Outputs for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
            DemuxmessageCAN1andcheckcoher_h(rtb_DataStoreRead2_eu,
              &rtb_DataStoreRead3, 1.0, &localB->DemuxmessageCAN1andcheckcoher_k,
              &localDW->DemuxmessageCAN1andcheckcoher_k,
              &localDW->msg_count_DEBUG);

            /* End of Outputs for SubSystem: '<S746>/Demux message CAN1 and check coherence1' */

            /* Switch: '<S746>/Switch' incorporates:
             *  Constant: '<S695>/Constant'
             *  DataStoreWrite: '<S746>/Data Store Write'
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
              Msg_Rx.Buffer_1 = localB->DemuxmessageCAN1andcheckcoher_k.Constant;
              Msg_Rx.Buffer_2 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_2;
              Msg_Rx.Buffer_3 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_3;
              Msg_Rx.Buffer_4 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_4;
              Msg_Rx.Buffer_5 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_5;
              Msg_Rx.Buffer_6 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_6;
              Msg_Rx.Buffer_7 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_7;
              Msg_Rx.Buffer_8 = localB->DemuxmessageCAN1andcheckcoher_k.Buffer_8;
            }

            /* End of Switch: '<S746>/Switch' */

            /* Logic: '<S746>/OR' incorporates:
             *  DataStoreWrite: '<S746>/Data Store Write2'
             */
            localDW->new_msg_Rx =
              (localB->DemuxmessageCAN1andcheckcoher_o.Equal1 ||
               localB->DemuxmessageCAN1andcheckcoher_k.Equal1);

            /* Outputs for Enabled SubSystem: '<S746>/Desync calculation' incorporates:
             *  EnablePort: '<S750>/Enable'
             */
            if (localDW->new_msg_Rx) {
              /* Switch: '<S750>/Switch1' incorporates:
               *  Constant: '<S629>/Constant'
               *  Constant: '<S750>/Constant'
               *  Constant: '<S750>/Constant1'
               *  Constant: '<S750>/delay_estimation_1'
               *  Constant: '<S750>/delay_estimation_2'
               *  Product: '<S750>/Multiply'
               *  Product: '<S750>/Multiply1'
               *  Sum: '<S750>/Minus'
               *  Sum: '<S750>/Minus1'
               *  Sum: '<S750>/Sum'
               *  Sum: '<S750>/Sum1'
               */
              if (localB->DemuxmessageCAN1andcheckcoher_o.Equal1) {
                rtb_Switch1_f = ((COMM_Phase1 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_o.BitShift1_b.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
              } else {
                rtb_Switch1_f = ((COMM_Phase2 * (real_T)
                                  localB->DemuxmessageCAN1andcheckcoher_k.BitShift1_d.y
                                  + 0.0) + 3.0) - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
              }

              /* End of Switch: '<S750>/Switch1' */

              /* Saturate: '<S750>/Saturation' */
              if (rtb_Switch1_f > 15.0) {
                Desync_Sync_bc1_ing_s = 15.0;
              } else if (rtb_Switch1_f < (-15.0)) {
                Desync_Sync_bc1_ing_s = (-15.0);
              } else {
                Desync_Sync_bc1_ing_s = rtb_Switch1_f;
              }

              /* End of Saturate: '<S750>/Saturation' */

              /* DataStoreWrite: '<S750>/Data Store Write1' */
              localDW->Desync_Ticks = Desync_Sync_bc1_ing_s;
            }

            /* End of Outputs for SubSystem: '<S746>/Desync calculation' */

            /* DataStoreWrite: '<S746>/Data Store Write3' incorporates:
             *  Constant: '<S746>/Constant2'
             *  DataStoreWrite: '<S746>/Data Store Write2'
             */
            *rtd_Toggle_Pin_A0 = true;
          } else {
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S695>/Process_Messages' */

          /* Logic: '<S695>/AND1' incorporates:
           *  Constant: '<S695>/Constant'
           *  DataStoreWrite: '<S746>/Data Store Write2'
           *  Logic: '<S695>/AND'
           *  Logic: '<S695>/NOT'
           */
          rtb_AND1_f5 = (rtb_AND_ck && (!rtb_AND1_fb));

          /* Outputs for Enabled SubSystem: '<S695>/Reset Tx msg counter' */
          ResetTxmsgcounter(rtb_AND1_f5, rtd_Tx_msg_count_CAN1,
                            rtd_Tx_msg_count_CAN2);

          /* End of Outputs for SubSystem: '<S695>/Reset Tx msg counter' */
        } else {
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S695>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S695>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S629>/COMP Task - Sync bc1 check' */

        /* Outputs for Enabled SubSystem: '<S629>/COMP Task - Update LT' incorporates:
         *  EnablePort: '<S696>/Enable'
         */
        if ((*rtd_Local_Ticks >= 84.0) && (*rtd_Local_Ticks < localC->Sum2) &&
            rtb_AND2_n) {
          /* RelationalOperator: '<S696>/Equal1' incorporates:
           *  Constant: '<S629>/Constant11'
           */
          rtb_AND_ck = (*rtd_Local_Ticks == 86.0);

          /* Outputs for Enabled SubSystem: '<S696>/LA - Ensemble precision' incorporates:
           *  EnablePort: '<S775>/Enable'
           */
          if ((*rtd_Local_Ticks == 84.0) && (1.0 != 0.0)) {
            /* DataStoreWrite: '<S775>/Data Store Write1' incorporates:
             *  Constant: '<S775>/Constant2'
             */
            localDW->Toggle_Pin_D10 = true;
          }

          /* End of Outputs for SubSystem: '<S696>/LA - Ensemble precision' */

          /* Logic: '<S696>/AND2' incorporates:
           *  Constant: '<S696>/Constant1'
           *  DataStoreRead: '<S696>/Data Store Read1'
           *  Logic: '<S696>/AND4'
           *  RelationalOperator: '<S696>/Equal3'
           */
          rtb_AND2_o = (rtb_AND_ck && localDW->new_msg_Rx);

          /* Outputs for Enabled SubSystem: '<S696>/Local Time Update' */
          LocalTimeUpdate(rtb_AND2_o, 84.0, &localDW->BC1_Sync_processed,
                          &localDW->Desync_Positive, &localDW->Desync_Ticks,
                          rtd_Local_Ticks, rtd_Toggle_Pin_A0,
                          &localDW->Toggle_Pin_D10);

          /* End of Outputs for SubSystem: '<S696>/Local Time Update' */

          /* Outputs for Enabled SubSystem: '<S696>/Set Reset Board' incorporates:
           *  EnablePort: '<S777>/Enable'
           */
          if (rtb_AND_ck && (!localDW->new_msg_Rx)) {
            /* DataStoreWrite: '<S777>/Data Store Write' incorporates:
             *  Constant: '<S777>/Constant'
             */
            localDW->Reset_Board = true;
          }

          /* End of Outputs for SubSystem: '<S696>/Set Reset Board' */
        }

        /* End of Outputs for SubSystem: '<S629>/COMP Task - Update LT' */

        /* Logic: '<S629>/AND17' incorporates:
         *  Constant: '<S629>/Constant'
         *  Constant: '<S629>/Constant4'
         *  Constant: '<S629>/Constant6'
         *  Constant: '<S695>/Constant'
         *  Constant: '<S696>/Constant1'
         *  DataStoreRead: '<S629>/Data Store Read11'
         *  DataStoreRead: '<S696>/Data Store Read1'
         *  DataStoreWrite: '<S746>/Data Store Write2'
         *  Logic: '<S629>/AND'
         *  Logic: '<S629>/AND1'
         *  Logic: '<S629>/AND18'
         *  Logic: '<S629>/AND19'
         *  Logic: '<S629>/AND2'
         *  Logic: '<S629>/NOT2'
         *  Logic: '<S629>/NOT4'
         *  Logic: '<S695>/AND'
         *  Logic: '<S696>/AND3'
         *  Logic: '<S696>/AND4'
         *  Logic: '<S696>/NOT1'
         *  RelationalOperator: '<S629>/GreaterThan'
         *  RelationalOperator: '<S629>/GreaterThan1'
         *  RelationalOperator: '<S629>/GreaterThan2'
         *  RelationalOperator: '<S629>/GreaterThan3'
         *  RelationalOperator: '<S629>/GreaterThan4'
         *  RelationalOperator: '<S629>/GreaterThan5'
         *  RelationalOperator: '<S696>/Equal3'
         */
        rtb_AND17 = ((rtb_DataStoreRead8_c >= 0.0) && (rtb_DataStoreRead8_c <
          localC->Sum4) && (!localDW->BC1_Sync_processed));

        /* Outputs for Enabled SubSystem: '<S629>/COMM Task - Set_Values' incorporates:
         *  EnablePort: '<S690>/Enable'
         */
        if ((rtb_DataStoreRead8_c >= 88.0) && (rtb_DataStoreRead8_c <
             localC->Sum3)) {
          if (!localDW->COMMTaskSet_Values_MODE) {
            localDW->COMMTaskSet_Values_MODE = true;
          }

          /* RelationalOperator: '<S690>/Equal12' incorporates:
           *  Constant: '<S690>/Constant55'
           */
          rtb_AND_ck = (*rtd_Board_ID == 5.0);

          /* Logic: '<S690>/NOT' */
          rtb_NOT_e = !rtb_AND_ck;

          /* Outputs for Enabled SubSystem: '<S690>/Reception substasks' */
          Receptionsubstasks(rtb_NOT_e, 88.0, &localB->Receptionsubstasks_n,
                             &localC->Receptionsubstasks_n,
                             &localDW->Receptionsubstasks_n, rtd_Local_Ticks,
                             &Msg_Rx, rtd_New_Msg_Ready_CAN1,
                             rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1,
                             rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                             &localDW->new_msg_Rx);

          /* End of Outputs for SubSystem: '<S690>/Reception substasks' */

          /* Outputs for Enabled SubSystem: '<S690>/Transmission subtasks' incorporates:
           *  EnablePort: '<S698>/Enable'
           */
          if (rtb_AND_ck) {
            if (!localDW->Transmissionsubtasks_MODE) {
              localDW->Transmissionsubtasks_MODE = true;
            }

            /* DataStoreRead: '<S698>/Data Store Read' */
            rtb_DataStoreRead_pq = *rtd_Local_Ticks;

            /* RelationalOperator: '<S698>/Equal2' */
            rtb_AND_ck = (rtb_DataStoreRead_pq > 88.0);

            /* Logic: '<S698>/AND' incorporates:
             *  Constant: '<S698>/Constant6'
             *  RelationalOperator: '<S698>/GreaterThan2'
             */
            rtb_AND_i = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN1 <= 7.0));

            /* Logic: '<S698>/AND1' incorporates:
             *  Constant: '<S698>/Constant7'
             *  RelationalOperator: '<S698>/GreaterThan3'
             */
            rtb_AND1_c = (rtb_AND_ck && (*rtd_Tx_msg_count_CAN2 <= 7.0));

            /* Outputs for Enabled SubSystem: '<S698>/Msg_Value_Data_Encoded' incorporates:
             *  EnablePort: '<S702>/Enable'
             */
            if (rtb_DataStoreRead_pq == 88.0) {
              localB->Constant = ((uint8_T)0U);
              v_set_s = v_set;

              /* Switch: '<S715>/Switch2' incorporates:
               *  Constant: '<S702>/Constant'
               *  Constant: '<S702>/Constant11'
               *  Constant: '<S702>/Constant12'
               *  Constant: '<S702>/Constant6'
               *  Constant: '<S702>/Constant7'
               *  RelationalOperator: '<S715>/LessThanOrEqual1'
               *  RelationalOperator: '<S715>/LessThanOrEqual2'
               *  Switch: '<S715>/Switch1'
               */
              if (1.0 < delta_a_set) {
                /* Switch: '<S715>/Switch' */
                rtb_Switch1_f = 1.0;
              } else if (delta_a_set >= (-1.0)) {
                /* Switch: '<S715>/Switch1' */
                rtb_Switch1_f = delta_a_set;
              } else {
                rtb_Switch1_f = (-1.0);
              }

              /* End of Switch: '<S715>/Switch2' */

              /* RelationalOperator: '<S715>/GreaterThan' incorporates:
               *  Constant: '<S715>/Constant'
               */
              rtb_AND_ck = (rtb_Switch1_f < 0.0);

              /* Abs: '<S715>/Abs' */
              rtb_Switch1_f = fabs(rtb_Switch1_f);

              /* Rounding: '<S715>/Fix' */
              rtb_Plus_j = floor(rtb_Switch1_f);

              /* Sum: '<S715>/Minus' */
              rtb_Switch1_f -= rtb_Plus_j;

              /* DataTypeConversion: '<S715>/Cast' */
              rtb_Cast_k = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S715>/Bit Shift' */
              BitShift1(rtb_Cast_k, &localB->BitShift_ad);

              /* End of Outputs for SubSystem: '<S715>/Bit Shift' */

              /* Product: '<S715>/Multiply' */
              rtb_Plus_j *= localC->Power1;

              /* Product: '<S715>/Divide' */
              rtb_Plus1_b = rtb_Switch1_f / localC->Power;

              /* Rounding: '<S715>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S715>/Fix1' */

              /* Sum: '<S715>/Plus' incorporates:
               *  DataTypeConversion: '<S715>/Cast1'
               *  DataTypeConversion: '<S715>/Cast2'
               */
              localB->Plus = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_ad.y + (uint8_T)rtb_Plus_j) + (uint8_T)
                rtb_Plus1_b);

              /* Switch: '<S716>/Switch2' incorporates:
               *  Constant: '<S702>/Constant8'
               *  Constant: '<S702>/Constant9'
               *  RelationalOperator: '<S716>/LessThanOrEqual1'
               *  RelationalOperator: '<S716>/LessThanOrEqual2'
               *  Switch: '<S716>/Switch1'
               */
              if (10.0 < v_set_s) {
                /* Switch: '<S716>/Switch' */
                rtb_Plus_j = 10.0;
              } else if (v_set_s >= (-10.0)) {
                /* Switch: '<S716>/Switch1' */
                rtb_Plus_j = v_set_s;
              } else {
                rtb_Plus_j = (-10.0);
              }

              /* End of Switch: '<S716>/Switch2' */

              /* RelationalOperator: '<S716>/GreaterThan' incorporates:
               *  Constant: '<S716>/Constant'
               */
              rtb_AND_ck = (rtb_Plus_j < 0.0);

              /* Abs: '<S716>/Abs' */
              rtb_Plus_j = fabs(rtb_Plus_j);

              /* Rounding: '<S716>/Fix' */
              rtb_Switch1_f = floor(rtb_Plus_j);

              /* Sum: '<S716>/Minus' */
              rtb_Plus_j -= rtb_Switch1_f;

              /* DataTypeConversion: '<S716>/Cast' */
              rtb_Cast_p = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S716>/Bit Shift' */
              BitShift1(rtb_Cast_p, &localB->BitShift_n);

              /* End of Outputs for SubSystem: '<S716>/Bit Shift' */

              /* Product: '<S716>/Multiply' */
              rtb_Switch1_f *= localC->Power1_f;

              /* Product: '<S716>/Divide' */
              rtb_Plus1_b = rtb_Plus_j / localC->Power_c;

              /* Rounding: '<S716>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S716>/Fix1' */

              /* Sum: '<S716>/Plus' incorporates:
               *  DataTypeConversion: '<S716>/Cast1'
               *  DataTypeConversion: '<S716>/Cast2'
               */
              localB->Plus_b = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_n.y + (uint8_T)rtb_Switch1_f) + (uint8_T)
                rtb_Plus1_b);

              /* Switch: '<S717>/Switch2' incorporates:
               *  Constant: '<S702>/Constant10'
               *  Constant: '<S702>/Constant4'
               *  Constant: '<S702>/Constant5'
               *  RelationalOperator: '<S717>/LessThanOrEqual1'
               *  RelationalOperator: '<S717>/LessThanOrEqual2'
               *  Switch: '<S717>/Switch1'
               */
              if (1.0 < delta_f_set) {
                /* Switch: '<S717>/Switch' */
                rtb_Plus_j = 1.0;
              } else if (delta_f_set >= (-1.0)) {
                /* Switch: '<S717>/Switch1' */
                rtb_Plus_j = delta_f_set;
              } else {
                rtb_Plus_j = (-1.0);
              }

              /* End of Switch: '<S717>/Switch2' */

              /* RelationalOperator: '<S717>/GreaterThan' incorporates:
               *  Constant: '<S717>/Constant'
               */
              rtb_AND_ck = (rtb_Plus_j < 0.0);

              /* Abs: '<S717>/Abs' */
              rtb_Plus_j = fabs(rtb_Plus_j);

              /* Rounding: '<S717>/Fix' */
              rtb_Switch1_f = floor(rtb_Plus_j);

              /* Sum: '<S717>/Minus' */
              rtb_Plus_j -= rtb_Switch1_f;

              /* DataTypeConversion: '<S717>/Cast' */
              rtb_Cast_kq = rtb_AND_ck;

              /* Outputs for Atomic SubSystem: '<S717>/Bit Shift' */
              BitShift1(rtb_Cast_kq, &localB->BitShift_c);

              /* End of Outputs for SubSystem: '<S717>/Bit Shift' */

              /* Product: '<S717>/Multiply' */
              rtb_Switch1_f *= localC->Power1_l;

              /* Product: '<S717>/Divide' */
              rtb_Plus1_b = rtb_Plus_j / localC->Power_j;

              /* Rounding: '<S717>/Fix1' */
              if (rtb_Plus1_b < 0.0) {
                rtb_Plus1_b = ceil(rtb_Plus1_b);
              } else {
                rtb_Plus1_b = floor(rtb_Plus1_b);
              }

              /* End of Rounding: '<S717>/Fix1' */

              /* Sum: '<S717>/Plus' incorporates:
               *  DataTypeConversion: '<S717>/Cast1'
               *  DataTypeConversion: '<S717>/Cast2'
               */
              localB->Plus_c = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
                localB->BitShift_c.y + (uint8_T)rtb_Switch1_f) + (uint8_T)
                rtb_Plus1_b);
            }

            /* End of Outputs for SubSystem: '<S698>/Msg_Value_Data_Encoded' */

            /* Outputs for Enabled SubSystem: '<S698>/Check msg transmission CAN1' */
            CheckmsgtransmissionCAN1(rtb_AND_i, rtb_DataStoreRead_pq, 88.0,
              localB->Plus_c, localB->Plus, localB->Plus_b, localB->Constant,
              &localB->CheckmsgtransmissionCAN1_a,
              &localC->CheckmsgtransmissionCAN1_a,
              &localDW->CheckmsgtransmissionCAN1_a, rtd_Board_ID,
              rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S698>/Check msg transmission CAN1' */

            /* Outputs for Enabled SubSystem: '<S698>/Check msg transmission CAN2' */
            CheckmsgtransmissionCAN2(rtb_AND1_c, rtb_DataStoreRead_pq, 88.0,
              localB->Plus_c, localB->Plus, localB->Plus_b, localB->Constant,
              &localB->CheckmsgtransmissionCAN2_c,
              &localC->CheckmsgtransmissionCAN2_c,
              &localDW->CheckmsgtransmissionCAN2_c, rtd_Board_ID,
              rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
              &localDW->basic_cycle_count);

            /* End of Outputs for SubSystem: '<S698>/Check msg transmission CAN2' */
          } else {
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S698>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S698>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S690>/Transmission subtasks' */
        } else {
          if (localDW->COMMTaskSet_Values_MODE) {
            /* Disable for Enabled SubSystem: '<S690>/Reception substasks' */
            if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
                &localDW->Receptionsubstasks_n);
            }

            /* End of Disable for SubSystem: '<S690>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S690>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S698>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S698>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }

            /* End of Disable for SubSystem: '<S690>/Transmission subtasks' */

            /* Disable for Outport: '<S690>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S690>/Receive CAN1' */
            localB->Receptionsubstasks_n.AND = false;

            /* Disable for Outport: '<S690>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

            /* Disable for Outport: '<S690>/Receive CAN2' */
            localB->Receptionsubstasks_n.AND1 = false;
            localDW->COMMTaskSet_Values_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S629>/COMM Task - Set_Values' */

        /* Outputs for Enabled SubSystem: '<S629>/COMM Task - Sync bc 1' */
        COMMTaskSyncbc0(rtb_AND17, 0.0, &localB->COMMTaskSyncbc1_d,
                        &localC->COMMTaskSyncbc1_d, &localDW->COMMTaskSyncbc1_d,
                        rtd_Board_ID, rtd_Local_Ticks, &Msg_Rx, rtd_Msg_Tx_CAN1,
                        rtd_Msg_Tx_CAN2, rtd_New_Msg_Ready_CAN1,
                        rtd_New_Msg_Ready_CAN2, &localDW->Role_ID, rtd_RxID_CAN1,
                        rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                        rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                        rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                        &localDW->new_msg_Rx);

        /* End of Outputs for SubSystem: '<S629>/COMM Task - Sync bc 1' */

        /* Logic: '<S629>/OR1' incorporates:
         *  Constant: '<S629>/Constant'
         *  Constant: '<S629>/Constant5'
         *  Constant: '<S702>/Constant'
         *  Constant: '<S702>/Constant12'
         *  Logic: '<S629>/AND3'
         *  RelationalOperator: '<S629>/GreaterThan6'
         *  RelationalOperator: '<S629>/GreaterThan7'
         *  RelationalOperator: '<S698>/Equal16'
         */
        localB->OR1 = (localB->COMMTaskSyncbc1_d.Transmissionsubtasks_l.Equal7_a
                       || localB->CheckmsgtransmissionCAN1_a.Equal7);

        /* Logic: '<S629>/OR2' */
        localB->OR2 = (localB->COMMTaskSyncbc1_d.Receptionsubstasks_h.AND1 ||
                       localB->Receptionsubstasks_n.AND1);

        /* Logic: '<S629>/OR3' */
        localB->OR3 = (localB->COMMTaskSyncbc1_d.Receptionsubstasks_h.AND ||
                       localB->Receptionsubstasks_n.AND);

        /* Logic: '<S629>/OR4' */
        localB->OR4 = (localB->COMMTaskSyncbc1_d.Transmissionsubtasks_l.Equal7 ||
                       localB->CheckmsgtransmissionCAN2_c.Equal7);
      } else {
        if (localDW->inputgeneratorbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S629>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S695>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S695>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S629>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S629>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE) {
            /* Disable for Enabled SubSystem: '<S690>/Reception substasks' */
            if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
                &localDW->Receptionsubstasks_n);
            }

            /* End of Disable for SubSystem: '<S690>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S690>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S698>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S698>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }

            /* End of Disable for SubSystem: '<S690>/Transmission subtasks' */

            /* Disable for Outport: '<S690>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S690>/Receive CAN1' */
            localB->Receptionsubstasks_n.AND = false;

            /* Disable for Outport: '<S690>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

            /* Disable for Outport: '<S690>/Receive CAN2' */
            localB->Receptionsubstasks_n.AND1 = false;
            localDW->COMMTaskSet_Values_MODE = false;
          }

          /* End of Disable for SubSystem: '<S629>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S629>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1_d,
              &localDW->COMMTaskSyncbc1_d);
          }

          /* End of Disable for SubSystem: '<S629>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S629>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S629>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S629>/Receive_Message_CAN1' */
          localB->OR3 = false;

          /* Disable for Outport: '<S629>/Receive_Message_CAN2' */
          localB->OR2 = false;
          localDW->inputgeneratorbasiccycle1_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S160>/input generator basic cycle 1' */

      /* Switch: '<S160>/Switch' incorporates:
       *  Constant: '<S160>/Constant1'
       *  Constant: '<S628>/Constant'
       *  Constant: '<S628>/Constant17'
       *  Constant: '<S628>/Constant2'
       *  Constant: '<S628>/Constant25'
       *  Constant: '<S628>/Constant31'
       *  Constant: '<S628>/Constant4'
       *  Constant: '<S629>/Constant'
       *  Constant: '<S629>/Constant12'
       *  Constant: '<S629>/Constant16'
       *  Constant: '<S629>/Constant4'
       *  Constant: '<S629>/Constant5'
       *  Constant: '<S629>/Constant6'
       *  Constant: '<S629>/Constant7'
       *  Constant: '<S629>/Constant8'
       *  Constant: '<S634>/Constant'
       *  Constant: '<S635>/Constant1'
       *  Constant: '<S695>/Constant'
       *  Constant: '<S696>/Constant1'
       *  Constant: '<S702>/Constant'
       *  Constant: '<S702>/Constant12'
       *  DataStoreRead: '<S635>/Data Store Read'
       *  DataStoreRead: '<S692>/Data Store Read'
       *  DataStoreRead: '<S696>/Data Store Read1'
       *  DataStoreWrite: '<S657>/Data Store Write2'
       *  DataStoreWrite: '<S746>/Data Store Write2'
       *  Logic: '<S628>/AND1'
       *  Logic: '<S628>/AND15'
       *  Logic: '<S628>/AND16'
       *  Logic: '<S628>/AND18'
       *  Logic: '<S628>/AND19'
       *  Logic: '<S628>/AND2'
       *  Logic: '<S628>/NOT1'
       *  Logic: '<S629>/AND1'
       *  Logic: '<S629>/AND18'
       *  Logic: '<S629>/AND19'
       *  Logic: '<S629>/AND2'
       *  Logic: '<S629>/AND20'
       *  Logic: '<S629>/AND3'
       *  Logic: '<S629>/AND4'
       *  Logic: '<S629>/AND5'
       *  Logic: '<S629>/NOT2'
       *  Logic: '<S632>/AND'
       *  Logic: '<S634>/AND'
       *  Logic: '<S635>/AND'
       *  Logic: '<S635>/AND1'
       *  Logic: '<S635>/AND2'
       *  Logic: '<S635>/NOT'
       *  Logic: '<S692>/AND'
       *  Logic: '<S695>/AND'
       *  Logic: '<S696>/AND3'
       *  Logic: '<S696>/AND4'
       *  Logic: '<S696>/NOT1'
       *  RelationalOperator: '<S160>/Equal1'
       *  RelationalOperator: '<S628>/GreaterThan2'
       *  RelationalOperator: '<S628>/GreaterThan3'
       *  RelationalOperator: '<S628>/GreaterThan30'
       *  RelationalOperator: '<S628>/GreaterThan31'
       *  RelationalOperator: '<S628>/GreaterThan32'
       *  RelationalOperator: '<S628>/GreaterThan33'
       *  RelationalOperator: '<S628>/GreaterThan4'
       *  RelationalOperator: '<S628>/GreaterThan5'
       *  RelationalOperator: '<S629>/GreaterThan10'
       *  RelationalOperator: '<S629>/GreaterThan11'
       *  RelationalOperator: '<S629>/GreaterThan2'
       *  RelationalOperator: '<S629>/GreaterThan3'
       *  RelationalOperator: '<S629>/GreaterThan34'
       *  RelationalOperator: '<S629>/GreaterThan35'
       *  RelationalOperator: '<S629>/GreaterThan4'
       *  RelationalOperator: '<S629>/GreaterThan5'
       *  RelationalOperator: '<S629>/GreaterThan6'
       *  RelationalOperator: '<S629>/GreaterThan7'
       *  RelationalOperator: '<S629>/GreaterThan8'
       *  RelationalOperator: '<S629>/GreaterThan9'
       *  RelationalOperator: '<S632>/Equal1'
       *  RelationalOperator: '<S632>/Equal2'
       *  RelationalOperator: '<S633>/Equal2'
       *  RelationalOperator: '<S635>/Equal3'
       *  RelationalOperator: '<S692>/Equal1'
       *  RelationalOperator: '<S692>/Equal2'
       *  RelationalOperator: '<S696>/Equal3'
       *  RelationalOperator: '<S698>/Equal16'
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

      /* DataStoreRead: '<S627>/Data Store Read' */
      Master_ID_ing_s = *rtd_Master_ID;

      /* DataStoreRead: '<S627>/Data Store Read1' */
      Role_ID_ing_s = localDW->Role_ID;

      /* DataStoreRead: '<S627>/Data Store Read10' */
      BC1_sync_processed_ing_s = localDW->BC1_Sync_processed;

      /* DataStoreRead: '<S627>/Data Store Read2' */
      BC0_sync_processed_ing_s = localDW->BC0_Sync_processed;

      /* DataStoreRead: '<S627>/Data Store Read3' */
      sync_bc1_miss_counter_ing = localDW->Sync_bc1_missed_counter;

      /* DataStoreRead: '<S627>/Data Store Read4' */
      sync_bc0_miss_counter_ing = localDW->Sync_bc0_missed_counter;

      /* DataStoreRead: '<S630>/Data Store Read24' */
      msg_count_DEBUG_ing_s = localDW->msg_count_DEBUG;
    } else {
      if (localDW->InputGeneratorMatrixCycle_MODE) {
        /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 0' */
        if (localDW->inputgeneratorbasiccycle0_MODE) {
          /* Disable for Enabled SubSystem: '<S628>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S634>/Process_Messages' */
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }

            /* End of Disable for SubSystem: '<S634>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S628>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S628>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_e.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_e,
              &localDW->COMMTaskSyncbc0_e);
          }

          /* End of Disable for SubSystem: '<S628>/COMM Task - Sync bc 0' */

          /* Disable for Outport: '<S628>/Send_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S628>/Send_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S628>/Receive_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S628>/Receive_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1 = false;
          localDW->inputgeneratorbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S160>/input generator basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 1' */
        if (localDW->inputgeneratorbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S629>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S695>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S695>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S629>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S629>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE) {
            /* Disable for Enabled SubSystem: '<S690>/Reception substasks' */
            if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
                &localDW->Receptionsubstasks_n);
            }

            /* End of Disable for SubSystem: '<S690>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S690>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S698>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S698>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }

            /* End of Disable for SubSystem: '<S690>/Transmission subtasks' */

            /* Disable for Outport: '<S690>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S690>/Receive CAN1' */
            localB->Receptionsubstasks_n.AND = false;

            /* Disable for Outport: '<S690>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

            /* Disable for Outport: '<S690>/Receive CAN2' */
            localB->Receptionsubstasks_n.AND1 = false;
            localDW->COMMTaskSet_Values_MODE = false;
          }

          /* End of Disable for SubSystem: '<S629>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S629>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1_d,
              &localDW->COMMTaskSyncbc1_d);
          }

          /* End of Disable for SubSystem: '<S629>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S629>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S629>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S629>/Receive_Message_CAN1' */
          localB->OR3 = false;

          /* Disable for Outport: '<S629>/Receive_Message_CAN2' */
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
     *  Constant: '<S163>/Constant'
     *  Constant: '<S163>/Constant12'
     *  Constant: '<S163>/Constant14'
     *  Constant: '<S163>/Constant17'
     *  Constant: '<S163>/Constant19'
     *  Constant: '<S163>/Constant2'
     *  Constant: '<S163>/Constant21'
     *  Constant: '<S163>/Constant23'
     *  Constant: '<S163>/Constant25'
     *  Constant: '<S163>/Constant27'
     *  Constant: '<S163>/Constant28'
     *  Constant: '<S163>/Constant3'
     *  Constant: '<S163>/Constant31'
     *  Constant: '<S163>/Constant33'
     *  Constant: '<S163>/Constant34'
     *  Constant: '<S163>/Constant6'
     *  Constant: '<S163>/Constant8'
     *  Constant: '<S163>/Constant9'
     *  Constant: '<S164>/Constant'
     *  Constant: '<S164>/Constant12'
     *  Constant: '<S164>/Constant13'
     *  Constant: '<S164>/Constant14'
     *  Constant: '<S164>/Constant16'
     *  Constant: '<S164>/Constant19'
     *  Constant: '<S164>/Constant23'
     *  Constant: '<S164>/Constant24'
     *  Constant: '<S164>/Constant25'
     *  Constant: '<S164>/Constant26'
     *  Constant: '<S164>/Constant28'
     *  Constant: '<S164>/Constant4'
     *  Constant: '<S164>/Constant5'
     *  Constant: '<S164>/Constant6'
     *  Constant: '<S164>/Constant7'
     *  Constant: '<S164>/Constant8'
     *  Constant: '<S174>/Constant'
     *  Constant: '<S175>/Constant1'
     *  Constant: '<S175>/Constant4'
     *  Constant: '<S177>/Constant4'
     *  Constant: '<S178>/Constant1'
     *  Constant: '<S179>/Constant4'
     *  Constant: '<S180>/Constant1'
     *  Constant: '<S181>/Constant4'
     *  Constant: '<S182>/Constant1'
     *  Constant: '<S393>/Constant'
     *  Constant: '<S395>/Constant51'
     *  Constant: '<S396>/Constant'
     *  Constant: '<S397>/Constant'
     *  Constant: '<S398>/Constant1'
     *  Constant: '<S405>/Constant'
     *  Constant: '<S450>/Constant'
     *  Constant: '<S464>/Constant6'
     *  Constant: '<S464>/Constant7'
     *  Constant: '<S466>/Constant22'
     *  Constant: '<S466>/Constant24'
     *  Constant: '<S466>/Constant8'
     *  Constant: '<S467>/Constant22'
     *  Constant: '<S467>/Constant24'
     *  Constant: '<S467>/Constant8'
     *  Constant: '<S468>/Constant'
     *  Constant: '<S628>/Constant'
     *  Constant: '<S628>/Constant17'
     *  Constant: '<S628>/Constant2'
     *  Constant: '<S628>/Constant25'
     *  Constant: '<S628>/Constant31'
     *  Constant: '<S628>/Constant4'
     *  Constant: '<S629>/Constant'
     *  Constant: '<S629>/Constant12'
     *  Constant: '<S629>/Constant16'
     *  Constant: '<S629>/Constant4'
     *  Constant: '<S629>/Constant5'
     *  Constant: '<S629>/Constant6'
     *  Constant: '<S629>/Constant7'
     *  Constant: '<S629>/Constant8'
     *  Constant: '<S634>/Constant'
     *  Constant: '<S635>/Constant1'
     *  Constant: '<S695>/Constant'
     *  Constant: '<S696>/Constant1'
     *  Constant: '<S702>/Constant'
     *  Constant: '<S702>/Constant12'
     *  DataStoreRead: '<S132>/Data Store Read10'
     *  DataStoreRead: '<S164>/Data Store Read11'
     *  DataStoreRead: '<S164>/Data Store Read6'
     *  DataStoreRead: '<S164>/Data Store Read7'
     *  DataStoreRead: '<S175>/Data Store Read'
     *  DataStoreRead: '<S175>/Data Store Read1'
     *  DataStoreRead: '<S177>/Data Store Read5'
     *  DataStoreRead: '<S179>/Data Store Read5'
     *  DataStoreRead: '<S181>/Data Store Read5'
     *  DataStoreRead: '<S391>/Data Store Read1'
     *  DataStoreRead: '<S392>/Data Store Read1'
     *  DataStoreRead: '<S399>/Data Store Read1'
     *  DataStoreRead: '<S485>/Data Store Read5'
     *  DataStoreRead: '<S518>/Data Store Read6'
     *  DataStoreRead: '<S635>/Data Store Read'
     *  DataStoreRead: '<S692>/Data Store Read'
     *  DataStoreRead: '<S696>/Data Store Read1'
     *  DataStoreWrite: '<S264>/Data Store Write2'
     *  DataStoreWrite: '<S562>/Data Store Write2'
     *  DataStoreWrite: '<S657>/Data Store Write2'
     *  DataStoreWrite: '<S746>/Data Store Write2'
     *  Logic: '<S163>/AND1'
     *  Logic: '<S163>/AND10'
     *  Logic: '<S163>/AND11'
     *  Logic: '<S163>/AND12'
     *  Logic: '<S163>/AND13'
     *  Logic: '<S163>/AND14'
     *  Logic: '<S163>/AND15'
     *  Logic: '<S163>/AND16'
     *  Logic: '<S163>/AND18'
     *  Logic: '<S163>/AND19'
     *  Logic: '<S163>/AND2'
     *  Logic: '<S163>/AND3'
     *  Logic: '<S163>/AND4'
     *  Logic: '<S163>/AND5'
     *  Logic: '<S163>/AND6'
     *  Logic: '<S163>/AND7'
     *  Logic: '<S163>/AND8'
     *  Logic: '<S163>/AND9'
     *  Logic: '<S163>/NOT1'
     *  Logic: '<S164>/AND'
     *  Logic: '<S164>/AND1'
     *  Logic: '<S164>/AND10'
     *  Logic: '<S164>/AND11'
     *  Logic: '<S164>/AND17'
     *  Logic: '<S164>/AND18'
     *  Logic: '<S164>/AND19'
     *  Logic: '<S164>/AND2'
     *  Logic: '<S164>/AND20'
     *  Logic: '<S164>/AND3'
     *  Logic: '<S164>/AND4'
     *  Logic: '<S164>/AND5'
     *  Logic: '<S164>/AND6'
     *  Logic: '<S164>/AND7'
     *  Logic: '<S164>/AND8'
     *  Logic: '<S164>/AND9'
     *  Logic: '<S164>/NOT2'
     *  Logic: '<S164>/NOT4'
     *  Logic: '<S164>/NOT5'
     *  Logic: '<S172>/AND'
     *  Logic: '<S174>/AND'
     *  Logic: '<S175>/AND'
     *  Logic: '<S175>/AND1'
     *  Logic: '<S177>/AND'
     *  Logic: '<S179>/AND'
     *  Logic: '<S181>/AND'
     *  Logic: '<S391>/AND'
     *  Logic: '<S391>/NOT'
     *  Logic: '<S392>/AND'
     *  Logic: '<S392>/NOT'
     *  Logic: '<S393>/AND4'
     *  Logic: '<S395>/AND'
     *  Logic: '<S395>/AND2'
     *  Logic: '<S396>/AND'
     *  Logic: '<S397>/AND4'
     *  Logic: '<S398>/AND1'
     *  Logic: '<S399>/AND'
     *  Logic: '<S399>/NOT'
     *  Logic: '<S464>/AND'
     *  Logic: '<S464>/AND1'
     *  Logic: '<S485>/NOT1'
     *  Logic: '<S628>/AND1'
     *  Logic: '<S628>/AND15'
     *  Logic: '<S628>/AND16'
     *  Logic: '<S628>/AND18'
     *  Logic: '<S628>/AND19'
     *  Logic: '<S628>/AND2'
     *  Logic: '<S628>/NOT1'
     *  Logic: '<S629>/AND1'
     *  Logic: '<S629>/AND18'
     *  Logic: '<S629>/AND19'
     *  Logic: '<S629>/AND2'
     *  Logic: '<S629>/AND20'
     *  Logic: '<S629>/AND3'
     *  Logic: '<S629>/AND4'
     *  Logic: '<S629>/AND5'
     *  Logic: '<S629>/NOT2'
     *  Logic: '<S632>/AND'
     *  Logic: '<S634>/AND'
     *  Logic: '<S635>/AND'
     *  Logic: '<S635>/AND1'
     *  Logic: '<S635>/AND2'
     *  Logic: '<S635>/NOT'
     *  Logic: '<S692>/AND'
     *  Logic: '<S695>/AND'
     *  Logic: '<S696>/AND3'
     *  Logic: '<S696>/AND4'
     *  Logic: '<S696>/NOT1'
     *  Math: '<S466>/Mod'
     *  Math: '<S467>/Mod'
     *  RelationalOperator: '<S132>/Equal3'
     *  RelationalOperator: '<S159>/Equal1'
     *  RelationalOperator: '<S160>/Equal1'
     *  RelationalOperator: '<S163>/GreaterThan10'
     *  RelationalOperator: '<S163>/GreaterThan11'
     *  RelationalOperator: '<S163>/GreaterThan12'
     *  RelationalOperator: '<S163>/GreaterThan13'
     *  RelationalOperator: '<S163>/GreaterThan14'
     *  RelationalOperator: '<S163>/GreaterThan15'
     *  RelationalOperator: '<S163>/GreaterThan16'
     *  RelationalOperator: '<S163>/GreaterThan17'
     *  RelationalOperator: '<S163>/GreaterThan18'
     *  RelationalOperator: '<S163>/GreaterThan19'
     *  RelationalOperator: '<S163>/GreaterThan2'
     *  RelationalOperator: '<S163>/GreaterThan20'
     *  RelationalOperator: '<S163>/GreaterThan21'
     *  RelationalOperator: '<S163>/GreaterThan22'
     *  RelationalOperator: '<S163>/GreaterThan23'
     *  RelationalOperator: '<S163>/GreaterThan24'
     *  RelationalOperator: '<S163>/GreaterThan25'
     *  RelationalOperator: '<S163>/GreaterThan26'
     *  RelationalOperator: '<S163>/GreaterThan27'
     *  RelationalOperator: '<S163>/GreaterThan28'
     *  RelationalOperator: '<S163>/GreaterThan29'
     *  RelationalOperator: '<S163>/GreaterThan3'
     *  RelationalOperator: '<S163>/GreaterThan30'
     *  RelationalOperator: '<S163>/GreaterThan31'
     *  RelationalOperator: '<S163>/GreaterThan32'
     *  RelationalOperator: '<S163>/GreaterThan33'
     *  RelationalOperator: '<S163>/GreaterThan4'
     *  RelationalOperator: '<S163>/GreaterThan5'
     *  RelationalOperator: '<S163>/GreaterThan6'
     *  RelationalOperator: '<S163>/GreaterThan7'
     *  RelationalOperator: '<S163>/GreaterThan8'
     *  RelationalOperator: '<S163>/GreaterThan9'
     *  RelationalOperator: '<S164>/GreaterThan'
     *  RelationalOperator: '<S164>/GreaterThan1'
     *  RelationalOperator: '<S164>/GreaterThan10'
     *  RelationalOperator: '<S164>/GreaterThan11'
     *  RelationalOperator: '<S164>/GreaterThan12'
     *  RelationalOperator: '<S164>/GreaterThan13'
     *  RelationalOperator: '<S164>/GreaterThan14'
     *  RelationalOperator: '<S164>/GreaterThan15'
     *  RelationalOperator: '<S164>/GreaterThan16'
     *  RelationalOperator: '<S164>/GreaterThan17'
     *  RelationalOperator: '<S164>/GreaterThan18'
     *  RelationalOperator: '<S164>/GreaterThan19'
     *  RelationalOperator: '<S164>/GreaterThan2'
     *  RelationalOperator: '<S164>/GreaterThan20'
     *  RelationalOperator: '<S164>/GreaterThan21'
     *  RelationalOperator: '<S164>/GreaterThan22'
     *  RelationalOperator: '<S164>/GreaterThan23'
     *  RelationalOperator: '<S164>/GreaterThan3'
     *  RelationalOperator: '<S164>/GreaterThan34'
     *  RelationalOperator: '<S164>/GreaterThan35'
     *  RelationalOperator: '<S164>/GreaterThan4'
     *  RelationalOperator: '<S164>/GreaterThan5'
     *  RelationalOperator: '<S164>/GreaterThan6'
     *  RelationalOperator: '<S164>/GreaterThan7'
     *  RelationalOperator: '<S164>/GreaterThan8'
     *  RelationalOperator: '<S164>/GreaterThan9'
     *  RelationalOperator: '<S170>/Equal'
     *  RelationalOperator: '<S171>/Equal'
     *  RelationalOperator: '<S172>/Equal2'
     *  RelationalOperator: '<S173>/Equal2'
     *  RelationalOperator: '<S175>/Equal'
     *  RelationalOperator: '<S175>/Equal1'
     *  RelationalOperator: '<S175>/Equal2'
     *  RelationalOperator: '<S176>/Equal'
     *  RelationalOperator: '<S177>/Equal'
     *  RelationalOperator: '<S177>/Equal2'
     *  RelationalOperator: '<S179>/Equal'
     *  RelationalOperator: '<S179>/Equal2'
     *  RelationalOperator: '<S181>/Equal'
     *  RelationalOperator: '<S181>/Equal2'
     *  RelationalOperator: '<S391>/Equal'
     *  RelationalOperator: '<S392>/Equal'
     *  RelationalOperator: '<S393>/Equal1'
     *  RelationalOperator: '<S394>/Equal2'
     *  RelationalOperator: '<S395>/Equal1'
     *  RelationalOperator: '<S397>/Equal1'
     *  RelationalOperator: '<S398>/Equal3'
     *  RelationalOperator: '<S399>/Equal'
     *  RelationalOperator: '<S401>/Equal16'
     *  RelationalOperator: '<S446>/Equal16'
     *  RelationalOperator: '<S464>/Equal16'
     *  RelationalOperator: '<S464>/GreaterThan2'
     *  RelationalOperator: '<S464>/GreaterThan3'
     *  RelationalOperator: '<S466>/Equal4'
     *  RelationalOperator: '<S467>/Equal4'
     *  RelationalOperator: '<S628>/GreaterThan2'
     *  RelationalOperator: '<S628>/GreaterThan3'
     *  RelationalOperator: '<S628>/GreaterThan30'
     *  RelationalOperator: '<S628>/GreaterThan31'
     *  RelationalOperator: '<S628>/GreaterThan32'
     *  RelationalOperator: '<S628>/GreaterThan33'
     *  RelationalOperator: '<S628>/GreaterThan4'
     *  RelationalOperator: '<S628>/GreaterThan5'
     *  RelationalOperator: '<S629>/GreaterThan10'
     *  RelationalOperator: '<S629>/GreaterThan11'
     *  RelationalOperator: '<S629>/GreaterThan2'
     *  RelationalOperator: '<S629>/GreaterThan3'
     *  RelationalOperator: '<S629>/GreaterThan34'
     *  RelationalOperator: '<S629>/GreaterThan35'
     *  RelationalOperator: '<S629>/GreaterThan4'
     *  RelationalOperator: '<S629>/GreaterThan5'
     *  RelationalOperator: '<S629>/GreaterThan6'
     *  RelationalOperator: '<S629>/GreaterThan7'
     *  RelationalOperator: '<S629>/GreaterThan8'
     *  RelationalOperator: '<S629>/GreaterThan9'
     *  RelationalOperator: '<S632>/Equal1'
     *  RelationalOperator: '<S632>/Equal2'
     *  RelationalOperator: '<S633>/Equal2'
     *  RelationalOperator: '<S635>/Equal3'
     *  RelationalOperator: '<S692>/Equal1'
     *  RelationalOperator: '<S692>/Equal2'
     *  RelationalOperator: '<S696>/Equal3'
     *  RelationalOperator: '<S698>/Equal16'
     *  Sum: '<S466>/Minus'
     *  Sum: '<S467>/Minus'
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
          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S174>/Process_Messages' */
            if (localDW->Process_Messages_MODE_e) {
              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_g.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_g,
                   &localDW->DemuxmessageCAN1andcheckcoher_g);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_p3.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_p3,
                   &localDW->DemuxmessageCAN1andcheckcohe_p3);
              }

              /* End of Disable for SubSystem: '<S264>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_e = false;
            }

            /* End of Disable for SubSystem: '<S174>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote1 check' */
          if (localDW->COMPTaskVote1check_MODE) {
            /* Disable for Enabled SubSystem: '<S178>/Process_Messages1' */
            if (localDW->Process_Messages1_c.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages1_c,
                &localDW->Process_Messages1_c);
            }

            /* End of Disable for SubSystem: '<S178>/Process_Messages1' */
            localDW->COMPTaskVote1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote1 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote2 check' */
          if (localDW->COMPTaskVote2check_MODE) {
            /* Disable for Enabled SubSystem: '<S180>/Process_Messages' */
            if (localDW->Process_Messages_g.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_g,
                &localDW->Process_Messages_g);
            }

            /* End of Disable for SubSystem: '<S180>/Process_Messages' */
            localDW->COMPTaskVote2check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote2 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMP Task - Vote3 check' */
          if (localDW->COMPTaskVote3check_MODE) {
            /* Disable for Enabled SubSystem: '<S182>/Process_Messages' */
            if (localDW->Process_Messages_gc.Process_Messages1_MODE) {
              Process_Messages1_Disable(&localB->Process_Messages_gc,
                &localDW->Process_Messages_gc);
            }

            /* End of Disable for SubSystem: '<S182>/Process_Messages' */
            localDW->COMPTaskVote3check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMP Task - Vote3 check' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
              &localDW->COMMTaskSyncbc0_b);
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Sync bc 0' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote1' */
          if (localDW->COMMTaskVote1_MODE) {
            /* Disable for Enabled SubSystem: '<S167>/Reception substasks' */
            if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
                &localDW->Receptionsubstasks_k);
            }

            /* End of Disable for SubSystem: '<S167>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S167>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_pw.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_pw,
                &localDW->Transmissionsubtasks_pw);
            }

            /* End of Disable for SubSystem: '<S167>/Transmission subtasks' */

            /* Disable for Outport: '<S167>/Send CAN1' */
            localB->Transmissionsubtasks_pw.Equal7_m = false;

            /* Disable for Outport: '<S167>/Receive CAN1' */
            localB->Receptionsubstasks_k.AND = false;

            /* Disable for Outport: '<S167>/Send CAN2' */
            localB->Transmissionsubtasks_pw.Equal7 = false;

            /* Disable for Outport: '<S167>/Receive CAN2' */
            localB->Receptionsubstasks_k.AND1 = false;
            localDW->COMMTaskVote1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote1' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote2' */
          if (localDW->COMMTaskVote2_MODE) {
            /* Disable for Enabled SubSystem: '<S168>/Reception substasks' */
            if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
                &localDW->Receptionsubstasks_g);
            }

            /* End of Disable for SubSystem: '<S168>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S168>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_d.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_d,
                &localDW->Transmissionsubtasks_d);
            }

            /* End of Disable for SubSystem: '<S168>/Transmission subtasks' */

            /* Disable for Outport: '<S168>/Send CAN1' */
            localB->Transmissionsubtasks_d.Equal7_m = false;

            /* Disable for Outport: '<S168>/Receive CAN1' */
            localB->Receptionsubstasks_g.AND = false;

            /* Disable for Outport: '<S168>/Send CAN2' */
            localB->Transmissionsubtasks_d.Equal7 = false;

            /* Disable for Outport: '<S168>/Receive CAN2' */
            localB->Receptionsubstasks_g.AND1 = false;
            localDW->COMMTaskVote2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote2' */

          /* Disable for Enabled SubSystem: '<S163>/COMM Task - Vote3' */
          if (localDW->COMMTaskVote3_MODE) {
            /* Disable for Enabled SubSystem: '<S169>/Reception substasks' */
            if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
                &localDW->Receptionsubstasks_e);
            }

            /* End of Disable for SubSystem: '<S169>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S169>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_a.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_l_Disable(&localB->Transmissionsubtasks_a,
                &localDW->Transmissionsubtasks_a);
            }

            /* End of Disable for SubSystem: '<S169>/Transmission subtasks' */

            /* Disable for Outport: '<S169>/Send CAN1' */
            localB->Transmissionsubtasks_a.Equal7_m = false;

            /* Disable for Outport: '<S169>/Receive CAN1' */
            localB->Receptionsubstasks_e.AND = false;

            /* Disable for Outport: '<S169>/Send CAN2' */
            localB->Transmissionsubtasks_a.Equal7 = false;

            /* Disable for Outport: '<S169>/Receive CAN2' */
            localB->Receptionsubstasks_e.AND1 = false;
            localDW->COMMTaskVote3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S163>/COMM Task - Vote3' */

          /* Disable for Outport: '<S163>/Send_Message_CAN1' */
          localB->OR1_oo = false;

          /* Disable for Outport: '<S163>/Send_Message_CAN2' */
          localB->OR4_o = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN1' */
          localB->OR2_p = false;

          /* Disable for Outport: '<S163>/Receive_Message_CAN2' */
          localB->OR3_bn = false;
          localDW->controllerbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S159>/controller basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S159>/controller basic cycle 1' */
        if (localDW->controllerbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Process_BS_Msg' */
          if (localDW->COMPTaskProcess_BS_Msg_MODE) {
            /* Disable for Enabled SubSystem: '<S393>/Process_Messages' */
            if (localDW->Process_Messages_o.Process_Messages_MODE) {
              Process_Messages_Disable(&localB->Process_Messages_o,
                &localDW->Process_Messages_o);
            }

            /* End of Disable for SubSystem: '<S393>/Process_Messages' */
            localDW->COMPTaskProcess_BS_Msg_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Process_BS_Msg' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */
          if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
            /* Disable for Enabled SubSystem: '<S395>/Process_Messages' */
            if (localDW->Process_Messages_MODE_g) {
              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_f.DemuxmessageCAN1andcheckcohe_dz)
              {
                DemuxmessageCAN1andch_p_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_f,
                   &localDW->DemuxmessageCAN1andcheckcoher_f);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_g5.DemuxmessageCAN1andcheckcoher_g)
              {
                DemuxmessageCAN1andch_a_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_g5,
                   &localDW->DemuxmessageCAN1andcheckcohe_g5);
              }

              /* End of Disable for SubSystem: '<S516>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_g = false;
            }

            /* End of Disable for SubSystem: '<S395>/Process_Messages' */
            localDW->COMPTaskRx_Set_Values_Check_MOD = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Rx_Set_Values_Check' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE_g) {
            /* Disable for Enabled SubSystem: '<S396>/Process_Messages' */
            if (localDW->Process_Messages_MODE_j) {
              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_a.DemuxmessageCAN1andcheckcoher_f)
              {
                DemuxmessageCAN1andchec_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_a,
                   &localDW->DemuxmessageCAN1andcheckcoher_a);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_i.DemuxmessageCAN1andcheckcohe_me)
              {
                DemuxmessageCAN1andch_l_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_i,
                   &localDW->DemuxmessageCAN1andcheckcoher_i);
              }

              /* End of Disable for SubSystem: '<S562>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_j = false;
            }

            /* End of Disable for SubSystem: '<S396>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S164>/COMP Task - Test Receive1' */
          if (localDW->COMPTaskTestReceive1_MODE) {
            /* Disable for Enabled SubSystem: '<S397>/Process_Messages' */
            if (localDW->Process_Messages_gh.Process_Messages_MODE) {
              Process_Messages_Disable(&localB->Process_Messages_gh,
                &localDW->Process_Messages_gh);
            }

            /* End of Disable for SubSystem: '<S397>/Process_Messages' */
            localDW->COMPTaskTestReceive1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMP Task - Test Receive1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE_i) {
            /* Disable for Enabled SubSystem: '<S387>/Reception substasks' */
            if (localDW->Receptionsubstasks_j.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_j,
                &localDW->Receptionsubstasks_j);
            }

            /* End of Disable for SubSystem: '<S387>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S387>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE_c) {
              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_m.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_m,
                   &localDW->CheckmsgtransmissionCAN1_m);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S401>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_i.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_i,
                   &localDW->CheckmsgtransmissionCAN2_i);
              }

              /* End of Disable for SubSystem: '<S401>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S401>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

              /* Disable for Outport: '<S401>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_i.Equal7 = false;
              localDW->Transmissionsubtasks_MODE_c = false;
            }

            /* End of Disable for SubSystem: '<S387>/Transmission subtasks' */

            /* Disable for Outport: '<S387>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_m.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN1' */
            localB->Receptionsubstasks_j.AND = false;

            /* Disable for Outport: '<S387>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_i.Equal7 = false;

            /* Disable for Outport: '<S387>/Receive CAN2' */
            localB->Receptionsubstasks_j.AND1 = false;
            localDW->COMMTaskSet_Values_MODE_i = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_MODE) {
            /* Disable for Enabled SubSystem: '<S388>/Reception substasks' */
            if (localDW->Receptionsubstasks_jz.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_jz,
                &localDW->Receptionsubstasks_jz);
            }

            /* End of Disable for SubSystem: '<S388>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S388>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1.Transmissionsubtasks_MODE) {
              Transmissionsubtasks_Disable(&localB->Transmissionsubtasks1,
                &localDW->Transmissionsubtasks1);
            }

            /* End of Disable for SubSystem: '<S388>/Transmission subtasks1' */

            /* Disable for Outport: '<S388>/Send CAN1' */
            localB->Transmissionsubtasks1.Equal7_a = false;

            /* Disable for Outport: '<S388>/Receive CAN1' */
            localB->Receptionsubstasks_jz.AND = false;

            /* Disable for Outport: '<S388>/Send CAN2' */
            localB->Transmissionsubtasks1.Equal7 = false;

            /* Disable for Outport: '<S388>/Receive CAN2' */
            localB->Receptionsubstasks_jz.AND1 = false;
            localDW->COMMTaskSyncbc1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Sync bc 1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - Test1' */
          if (localDW->COMMTaskTest1_MODE) {
            /* Disable for Enabled SubSystem: '<S389>/Reception substasks' */
            if (localDW->Receptionsubstasks_d.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_d,
                &localDW->Receptionsubstasks_d);
            }

            /* End of Disable for SubSystem: '<S389>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S389>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE_b) {
              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_o.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_o,
                   &localDW->CheckmsgtransmissionCAN1_o);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S446>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_a.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_a,
                   &localDW->CheckmsgtransmissionCAN2_a);
              }

              /* End of Disable for SubSystem: '<S446>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S446>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

              /* Disable for Outport: '<S446>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_a.Equal7 = false;
              localDW->Transmissionsubtasks1_MODE_b = false;
            }

            /* End of Disable for SubSystem: '<S389>/Transmission subtasks1' */

            /* Disable for Outport: '<S389>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_o.Equal7 = false;

            /* Disable for Outport: '<S389>/Receive CAN1' */
            localB->Receptionsubstasks_d.AND = false;

            /* Disable for Outport: '<S389>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_a.Equal7 = false;

            /* Disable for Outport: '<S389>/Receive CAN2' */
            localB->Receptionsubstasks_d.AND1 = false;
            localDW->COMMTaskTest1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - Test1' */

          /* Disable for Enabled SubSystem: '<S164>/COMM Task - send_BS' */
          if (localDW->COMMTasksend_BS_MODE) {
            /* Disable for Enabled SubSystem: '<S390>/Reception substasks' */
            if (localDW->Receptionsubstasks_l.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_l,
                &localDW->Receptionsubstasks_l);
            }

            /* End of Disable for SubSystem: '<S390>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S390>/Transmission subtasks1' */
            if (localDW->Transmissionsubtasks1_MODE) {
              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_MODE) {
                /* Disable for Outport: '<S466>/Send CAN1' */
                localB->Equal7_l = false;
                localDW->CheckmsgtransmissionCAN1_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S464>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_MODE) {
                /* Disable for Outport: '<S467>/Send CAN2' */
                localB->Equal7 = false;
                localDW->CheckmsgtransmissionCAN2_MODE = false;
              }

              /* End of Disable for SubSystem: '<S464>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S464>/Send CAN1' */
              localB->Equal7_l = false;

              /* Disable for Outport: '<S464>/Send CAN2' */
              localB->Equal7 = false;
              localDW->Transmissionsubtasks1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S390>/Transmission subtasks1' */

            /* Disable for Outport: '<S390>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S390>/Receive CAN1' */
            localB->Receptionsubstasks_l.AND = false;

            /* Disable for Outport: '<S390>/Send CAN2' */
            localB->Equal7 = false;

            /* Disable for Outport: '<S390>/Receive CAN2' */
            localB->Receptionsubstasks_l.AND1 = false;
            localDW->COMMTasksend_BS_MODE = false;
          }

          /* End of Disable for SubSystem: '<S164>/COMM Task - send_BS' */

          /* Disable for Outport: '<S164>/Send_Message_CAN1' */
          localB->OR1_o = false;

          /* Disable for Outport: '<S164>/Send_Message_CAN2' */
          localB->OR2_k = false;

          /* Disable for Outport: '<S164>/Receive_Message_CAN1' */
          localB->OR3_b = false;

          /* Disable for Outport: '<S164>/Receive_Message_CAN2' */
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
          /* Disable for Enabled SubSystem: '<S628>/COMP Task - Sync bc0 check' */
          if (localDW->COMPTaskSyncbc0check_MODE) {
            /* Disable for Enabled SubSystem: '<S634>/Process_Messages' */
            if (localDW->Process_Messages_MODE_n) {
              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcohe_d0.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_d0,
                   &localDW->DemuxmessageCAN1andcheckcohe_d0);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcohe_h5.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcohe_h5,
                   &localDW->DemuxmessageCAN1andcheckcohe_h5);
              }

              /* End of Disable for SubSystem: '<S657>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE_n = false;
            }

            /* End of Disable for SubSystem: '<S634>/Process_Messages' */
            localDW->COMPTaskSyncbc0check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S628>/COMP Task - Sync bc0 check' */

          /* Disable for Enabled SubSystem: '<S628>/COMM Task - Sync bc 0' */
          if (localDW->COMMTaskSyncbc0_e.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_e,
              &localDW->COMMTaskSyncbc0_e);
          }

          /* End of Disable for SubSystem: '<S628>/COMM Task - Sync bc 0' */

          /* Disable for Outport: '<S628>/Send_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7_a = false;

          /* Disable for Outport: '<S628>/Send_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S628>/Receive_Message_CAN1' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND = false;

          /* Disable for Outport: '<S628>/Receive_Message_CAN2' */
          localB->COMMTaskSyncbc0_e.Receptionsubstasks_h.AND1 = false;
          localDW->inputgeneratorbasiccycle0_MODE = false;
        }

        /* End of Disable for SubSystem: '<S160>/input generator basic cycle 0' */

        /* Disable for Enabled SubSystem: '<S160>/input generator basic cycle 1' */
        if (localDW->inputgeneratorbasiccycle1_MODE) {
          /* Disable for Enabled SubSystem: '<S629>/COMP Task - Sync bc1 check' */
          if (localDW->COMPTaskSyncbc1check_MODE) {
            /* Disable for Enabled SubSystem: '<S695>/Process_Messages' */
            if (localDW->Process_Messages_MODE) {
              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence' */
              if (localDW->DemuxmessageCAN1andcheckcoher_o.DemuxmessageCAN1andcheckcohe_mm)
              {
                DemuxmessageCAN1andc_ls_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_o,
                   &localDW->DemuxmessageCAN1andcheckcoher_o);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence' */

              /* Disable for Enabled SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              if (localDW->DemuxmessageCAN1andcheckcoher_k.DemuxmessageCAN1andcheckcohe_ek)
              {
                DemuxmessageCAN1andch_k_Disable
                  (&localB->DemuxmessageCAN1andcheckcoher_k,
                   &localDW->DemuxmessageCAN1andcheckcoher_k);
              }

              /* End of Disable for SubSystem: '<S746>/Demux message CAN1 and check coherence1' */
              localDW->Process_Messages_MODE = false;
            }

            /* End of Disable for SubSystem: '<S695>/Process_Messages' */
            localDW->COMPTaskSyncbc1check_MODE = false;
          }

          /* End of Disable for SubSystem: '<S629>/COMP Task - Sync bc1 check' */

          /* Disable for Enabled SubSystem: '<S629>/COMM Task - Set_Values' */
          if (localDW->COMMTaskSet_Values_MODE) {
            /* Disable for Enabled SubSystem: '<S690>/Reception substasks' */
            if (localDW->Receptionsubstasks_n.Receptionsubstasks_MODE) {
              Receptionsubstasks_Disable(&localB->Receptionsubstasks_n,
                &localDW->Receptionsubstasks_n);
            }

            /* End of Disable for SubSystem: '<S690>/Reception substasks' */

            /* Disable for Enabled SubSystem: '<S690>/Transmission subtasks' */
            if (localDW->Transmissionsubtasks_MODE) {
              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN1' */
              if (localDW->CheckmsgtransmissionCAN1_a.CheckmsgtransmissionCAN1_MODE)
              {
                CheckmsgtransmissionCAN_Disable
                  (&localB->CheckmsgtransmissionCAN1_a,
                   &localDW->CheckmsgtransmissionCAN1_a);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN1' */

              /* Disable for Enabled SubSystem: '<S698>/Check msg transmission CAN2' */
              if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
              {
                CheckmsgtransmissionC_d_Disable
                  (&localB->CheckmsgtransmissionCAN2_c,
                   &localDW->CheckmsgtransmissionCAN2_c);
              }

              /* End of Disable for SubSystem: '<S698>/Check msg transmission CAN2' */

              /* Disable for Outport: '<S698>/Send CAN1' */
              localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

              /* Disable for Outport: '<S698>/Send CAN2' */
              localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
              localDW->Transmissionsubtasks_MODE = false;
            }

            /* End of Disable for SubSystem: '<S690>/Transmission subtasks' */

            /* Disable for Outport: '<S690>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_a.Equal7 = false;

            /* Disable for Outport: '<S690>/Receive CAN1' */
            localB->Receptionsubstasks_n.AND = false;

            /* Disable for Outport: '<S690>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

            /* Disable for Outport: '<S690>/Receive CAN2' */
            localB->Receptionsubstasks_n.AND1 = false;
            localDW->COMMTaskSet_Values_MODE = false;
          }

          /* End of Disable for SubSystem: '<S629>/COMM Task - Set_Values' */

          /* Disable for Enabled SubSystem: '<S629>/COMM Task - Sync bc 1' */
          if (localDW->COMMTaskSyncbc1_d.COMMTaskSyncbc0_MODE) {
            COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1_d,
              &localDW->COMMTaskSyncbc1_d);
          }

          /* End of Disable for SubSystem: '<S629>/COMM Task - Sync bc 1' */

          /* Disable for Outport: '<S629>/Send_Message_CAN1' */
          localB->OR1 = false;

          /* Disable for Outport: '<S629>/Send_Message_CAN2' */
          localB->OR4 = false;

          /* Disable for Outport: '<S629>/Receive_Message_CAN1' */
          localB->OR3 = false;

          /* Disable for Outport: '<S629>/Receive_Message_CAN2' */
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
      localDW->Switch_1_DIMS1 = 18;
      localDW->Switch_2_DIMS1 = 18;
      memcpy(&rtb_signal1[0], rtConstP.Constant4_Value, 18U * sizeof(real_T));
      memcpy(&rtb_signal2[0], rtConstP.Constant5_Value, 18U * sizeof(real_T));
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
