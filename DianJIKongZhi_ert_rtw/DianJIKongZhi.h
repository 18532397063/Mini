/*
 * File: DianJIKongZhi.h
 *
 * Code generated for Simulink model 'DianJIKongZhi'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Oct 19 13:20:15 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef DianJIKongZhi_h_
#define DianJIKongZhi_h_
#ifndef DianJIKongZhi_COMMON_INCLUDES_
#define DianJIKongZhi_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DianJIKongZhi_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_DianJIKongZhi_T RT_MODEL_DianJIKongZhi_T;

/* Block signals (default storage) */
typedef struct {
  real32_T Switch;                     /* '<S135>/Switch' */
  real32_T Switch2;                    /* '<S143>/Switch2' */
  real32_T MotCalThetae;               /* '<S135>/Chart' */
  int32_T MotOffset;                   /* '<S135>/Chart' */
} B_DianJIKongZhi_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T Integrator_DSTATE;          /* '<S57>/Integrator' */
  real32_T Integrator_DSTATE_i;        /* '<S109>/Integrator' */
  real32_T Integrator_DSTATE_p;        /* '<S178>/Integrator' */
  real32_T Delay_DSTATE;               /* '<S140>/Delay' */
  int32_T Delay_DSTATE_n;              /* '<S136>/Delay' */
  int32_T MotOffsetBuff[2];            /* '<S135>/Chart' */
  uint32_T counter;                    /* '<Root>/Scheduler' */
  uint32_T previousTicks;              /* '<S135>/Chart' */
  uint16_T temporalCounter_i1;         /* '<S135>/Chart' */
  int8_T Integrator_PrevResetState;    /* '<S57>/Integrator' */
  int8_T Integrator_PrevResetState_h;  /* '<S109>/Integrator' */
  int8_T Integrator_PrevResetState_i;  /* '<S178>/Integrator' */
  uint8_T is_active_c1_DianJIKongZhi;  /* '<S135>/Chart' */
  uint8_T is_c1_DianJIKongZhi;         /* '<S135>/Chart' */
  uint8_T is_Calibrate;                /* '<S135>/Chart' */
  uint8_T is_Normal;                   /* '<S135>/Chart' */
  boolean_T icLoad;                    /* '<S136>/Delay' */
  boolean_T icLoad_d;                  /* '<S140>/Delay' */
  boolean_T MotCalNormal;              /* '<S135>/Chart' */
} DW_DianJIKongZhi_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Add1;                   /* '<S140>/Add1' */
  const real32_T Constant4;            /* '<S13>/Constant4' */
  const real32_T Constant5;            /* '<S13>/Constant5' */
  const real32_T DataTypeConversion1;  /* '<S9>/Data Type Conversion1' */
  const real32_T Constant2;            /* '<S137>/Constant2' */
  const real32_T Gain;                 /* '<S137>/Gain' */
  const boolean_T Compare;             /* '<S139>/Compare' */
} ConstB_DianJIKongZhi_T;

/* Real-time Model Data Structure */
struct tag_RTM_DianJIKongZhi_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
  } Timing;
};

/* Block signals (default storage) */
extern B_DianJIKongZhi_T DianJIKongZhi_B;

/* Block states (default storage) */
extern DW_DianJIKongZhi_T DianJIKongZhi_DW;
extern const ConstB_DianJIKongZhi_T DianJIKongZhi_ConstB;/* constant block i/o */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real32_T ACurrent_Sample;       /* '<Root>/ACurrent_Sample' */
extern real32_T BCurrent_Sample;       /* '<Root>/BCurrent_Sample' */
extern real32_T CCurrent_Sample;       /* '<Root>/CCurrent_Sample' */
extern int32_T Ecode_Cnt;              /* '<Root>/Ecode_Cnt' */
extern int16_T MotorSpdRef;            /* '<Root>/MotorSpdRef' */
extern real32_T IVBus_Sample;          /* '<Root>/IVBus_Sample' */
extern real32_T UVoltage_PWM;          /* '<S3>/Saturation1' */
extern real32_T VVoltage_PWM;          /* '<S3>/Saturation2' */
extern real32_T WVoltage_PWM;          /* '<S3>/Saturation3' */
extern real32_T MotorActSpd;           /* '<S140>/Add' */
extern boolean_T SD_MosCtr;            /* '<S3>/Merge1' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real32_T MC_DCurrLopKi_CFG;     /* Variable: MC_DCurrLopKi_CFG
                                        * Referenced by: '<S13>/Constant1'
                                        */
extern real32_T MC_DCurrLopKp_CFG;     /* Variable: MC_DCurrLopKp_CFG
                                        * Referenced by: '<S13>/Constant'
                                        */
extern real32_T MC_QCurrLopKi_CFG;     /* Variable: MC_QCurrLopKi_CFG
                                        * Referenced by: '<S13>/Constant3'
                                        */
extern real32_T MC_QCurrLopKp_CFG;     /* Variable: MC_QCurrLopKp_CFG
                                        * Referenced by: '<S13>/Constant2'
                                        */

/* Model entry point functions */
extern void DianJIKongZhi_initialize(void);
extern void DianJIKongZhi_step(void);
extern void DianJIKongZhi_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DianJIKongZhi_T *const DianJIKongZhi_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S21>/Data Type Propagation' : Unused code path elimination
 * Block '<S22>/Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/Data Type Propagation' : Unused code path elimination
 * Block '<S143>/Data Type Duplicate' : Unused code path elimination
 * Block '<S143>/Data Type Propagation' : Unused code path elimination
 * Block '<S9>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion2' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DianJIKongZhi'
 * '<S1>'   : 'DianJIKongZhi/PMSM_MC'
 * '<S2>'   : 'DianJIKongZhi/Scheduler'
 * '<S3>'   : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask'
 * '<S4>'   : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask '
 * '<S5>'   : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/ElecAngleCal'
 * '<S6>'   : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC'
 * '<S7>'   : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/Stop'
 * '<S8>'   : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/ElecAngleCal/AngleCal'
 * '<S9>'   : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/ElecAngleCal/AngleCal/If Action Subsystem1'
 * '<S10>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/ElecAngleCal/AngleCal/If Action Subsystem2'
 * '<S11>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/ElecAngleCal/AngleCal/If Action Subsystem3'
 * '<S12>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/Clark'
 * '<S13>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp'
 * '<S14>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/ElecAgCorrect'
 * '<S15>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/IPark'
 * '<S16>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/Park'
 * '<S17>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/SVPWM'
 * '<S18>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Compare To Constant'
 * '<S19>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller'
 * '<S20>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1'
 * '<S21>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Saturation Dynamic'
 * '<S22>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Saturation Dynamic1'
 * '<S23>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Anti-windup'
 * '<S24>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/D Gain'
 * '<S25>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/External Derivative'
 * '<S26>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Filter'
 * '<S27>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Filter ICs'
 * '<S28>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/I Gain'
 * '<S29>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Ideal P Gain'
 * '<S30>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S31>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Integrator'
 * '<S32>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Integrator ICs'
 * '<S33>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/N Copy'
 * '<S34>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/N Gain'
 * '<S35>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/P Copy'
 * '<S36>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Parallel P Gain'
 * '<S37>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Reset Signal'
 * '<S38>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Saturation'
 * '<S39>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Saturation Fdbk'
 * '<S40>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Sum'
 * '<S41>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Sum Fdbk'
 * '<S42>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Tracking Mode'
 * '<S43>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Tracking Mode Sum'
 * '<S44>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Tsamp - Integral'
 * '<S45>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Tsamp - Ngain'
 * '<S46>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/postSat Signal'
 * '<S47>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/preInt Signal'
 * '<S48>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/preSat Signal'
 * '<S49>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S50>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/D Gain/Disabled'
 * '<S51>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/External Derivative/Disabled'
 * '<S52>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Filter/Disabled'
 * '<S53>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Filter ICs/Disabled'
 * '<S54>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/I Gain/External Parameters'
 * '<S55>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S56>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S57>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Integrator/Discrete'
 * '<S58>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Integrator ICs/External IC'
 * '<S59>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S60>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/N Gain/Disabled'
 * '<S61>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/P Copy/Disabled'
 * '<S62>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Parallel P Gain/External Parameters'
 * '<S63>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Reset Signal/External Reset'
 * '<S64>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Saturation/Passthrough'
 * '<S65>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S66>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Sum/Sum_PI'
 * '<S67>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S68>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S69>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S70>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S71>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S72>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S73>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/preInt Signal/Internal PreInt'
 * '<S74>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S75>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Anti-windup'
 * '<S76>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/D Gain'
 * '<S77>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/External Derivative'
 * '<S78>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Filter'
 * '<S79>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Filter ICs'
 * '<S80>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/I Gain'
 * '<S81>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Ideal P Gain'
 * '<S82>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S83>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Integrator'
 * '<S84>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Integrator ICs'
 * '<S85>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/N Copy'
 * '<S86>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/N Gain'
 * '<S87>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/P Copy'
 * '<S88>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Parallel P Gain'
 * '<S89>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Reset Signal'
 * '<S90>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Saturation'
 * '<S91>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Saturation Fdbk'
 * '<S92>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Sum'
 * '<S93>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Sum Fdbk'
 * '<S94>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Tracking Mode'
 * '<S95>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Tracking Mode Sum'
 * '<S96>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Tsamp - Integral'
 * '<S97>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Tsamp - Ngain'
 * '<S98>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/postSat Signal'
 * '<S99>'  : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/preInt Signal'
 * '<S100>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/preSat Signal'
 * '<S101>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Anti-windup/Passthrough'
 * '<S102>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/D Gain/Disabled'
 * '<S103>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/External Derivative/Disabled'
 * '<S104>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Filter/Disabled'
 * '<S105>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S106>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/I Gain/External Parameters'
 * '<S107>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S108>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S109>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Integrator/Discrete'
 * '<S110>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Integrator ICs/External IC'
 * '<S111>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S112>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/N Gain/Disabled'
 * '<S113>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/P Copy/Disabled'
 * '<S114>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Parallel P Gain/External Parameters'
 * '<S115>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Reset Signal/External Reset'
 * '<S116>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Saturation/Passthrough'
 * '<S117>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S118>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Sum/Sum_PI'
 * '<S119>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S120>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S121>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S122>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Tsamp - Integral/TsSignalSpecification'
 * '<S123>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S124>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S125>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/preInt Signal/Internal PreInt'
 * '<S126>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/CurrentLopp/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S127>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/ElecAgCorrect/Compare To Constant'
 * '<S128>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/ElecAgCorrect/Compare To Constant1'
 * '<S129>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/ElecAgCorrect/Compare To Constant2'
 * '<S130>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/SVPWM/SevenSegSVPWM'
 * '<S131>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/SVPWM/SevenSegSVPWM/SectorCaculate'
 * '<S132>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/SVPWM/SevenSegSVPWM/T1T2Caculate'
 * '<S133>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/SVPWM/SevenSegSVPWM/TcmCaculate'
 * '<S134>' : 'DianJIKongZhi/PMSM_MC/MC_HighFrqTask/FOC/SVPWM/SevenSegSVPWM/XYZCaculate'
 * '<S135>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /MotModeCtr'
 * '<S136>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /MotSpdCal'
 * '<S137>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop'
 * '<S138>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /MotModeCtr/Chart'
 * '<S139>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /MotModeCtr/Compare To Constant'
 * '<S140>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /MotSpdCal/Subsystem'
 * '<S141>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Compare To Constant'
 * '<S142>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller'
 * '<S143>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Saturation Dynamic'
 * '<S144>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Anti-windup'
 * '<S145>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/D Gain'
 * '<S146>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/External Derivative'
 * '<S147>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Filter'
 * '<S148>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Filter ICs'
 * '<S149>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/I Gain'
 * '<S150>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Ideal P Gain'
 * '<S151>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S152>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Integrator'
 * '<S153>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Integrator ICs'
 * '<S154>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/N Copy'
 * '<S155>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/N Gain'
 * '<S156>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/P Copy'
 * '<S157>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Parallel P Gain'
 * '<S158>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Reset Signal'
 * '<S159>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Saturation'
 * '<S160>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Saturation Fdbk'
 * '<S161>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Sum'
 * '<S162>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Sum Fdbk'
 * '<S163>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Tracking Mode'
 * '<S164>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Tracking Mode Sum'
 * '<S165>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Tsamp - Integral'
 * '<S166>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Tsamp - Ngain'
 * '<S167>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/postSat Signal'
 * '<S168>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/preInt Signal'
 * '<S169>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/preSat Signal'
 * '<S170>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S171>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/D Gain/Disabled'
 * '<S172>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/External Derivative/Disabled'
 * '<S173>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Filter/Disabled'
 * '<S174>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Filter ICs/Disabled'
 * '<S175>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/I Gain/External Parameters'
 * '<S176>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S177>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S178>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Integrator/Discrete'
 * '<S179>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Integrator ICs/External IC'
 * '<S180>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S181>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/N Gain/Disabled'
 * '<S182>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/P Copy/Disabled'
 * '<S183>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Parallel P Gain/External Parameters'
 * '<S184>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Reset Signal/External Reset'
 * '<S185>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Saturation/Passthrough'
 * '<S186>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S187>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Sum/Sum_PI'
 * '<S188>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S189>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S190>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S191>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S192>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S193>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S194>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/preInt Signal/Internal PreInt'
 * '<S195>' : 'DianJIKongZhi/PMSM_MC/MC_LowFrqTask /SpdLoop/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* DianJIKongZhi_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
