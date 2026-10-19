/*
 * File: DianJIKongZhi.c
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

#include "DianJIKongZhi.h"
#include "rtwtypes.h"
#include <math.h>
#include "multiword_types.h"
#include <stddef.h>
#include <float.h>

/* Named constants for Chart: '<S135>/Chart' */
#define DianJIKongZh_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define DianJIKongZhi_IN_Calibrate     ((uint8_T)1U)
#define DianJIKongZhi_IN_Calibrate1    ((uint8_T)1U)
#define DianJIKongZhi_IN_Calibrate2    ((uint8_T)2U)
#define DianJIKongZhi_IN_CallFailed    ((uint8_T)2U)
#define DianJIKongZhi_IN_Init          ((uint8_T)3U)
#define DianJIKongZhi_IN_Normal        ((uint8_T)3U)
#define DianJIKongZhi_IN_RngChk        ((uint8_T)4U)
#define DianJIKongZhi_IN_Run           ((uint8_T)1U)
#define DianJIKongZhi_IN_Stop          ((uint8_T)2U)
#define NumBitsPerChar                 8U
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Exported block signals */
real32_T ACurrent_Sample;              /* '<Root>/ACurrent_Sample' */
real32_T BCurrent_Sample;              /* '<Root>/BCurrent_Sample' */
real32_T CCurrent_Sample;              /* '<Root>/CCurrent_Sample' */
int32_T Ecode_Cnt;                     /* '<Root>/Ecode_Cnt' */
int16_T MotorSpdRef;                   /* '<Root>/MotorSpdRef' */
real32_T IVBus_Sample;                 /* '<Root>/IVBus_Sample' */
real32_T UVoltage_PWM;                 /* '<S3>/Saturation1' */
real32_T VVoltage_PWM;                 /* '<S3>/Saturation2' */
real32_T WVoltage_PWM;                 /* '<S3>/Saturation3' */
real32_T MotorActSpd;                  /* '<S140>/Add' */
boolean_T SD_MosCtr;                   /* '<S3>/Merge1' */

/* Exported block parameters */
real32_T MC_DCurrLopKi_CFG = 0.0F;     /* Variable: MC_DCurrLopKi_CFG
                                        * Referenced by: '<S13>/Constant1'
                                        */
real32_T MC_DCurrLopKp_CFG = 0.0F;     /* Variable: MC_DCurrLopKp_CFG
                                        * Referenced by: '<S13>/Constant'
                                        */
real32_T MC_QCurrLopKi_CFG = 0.0F;     /* Variable: MC_QCurrLopKi_CFG
                                        * Referenced by: '<S13>/Constant3'
                                        */
real32_T MC_QCurrLopKp_CFG = 0.0F;     /* Variable: MC_QCurrLopKp_CFG
                                        * Referenced by: '<S13>/Constant2'
                                        */

/* Invariant block signals (default storage) */
const ConstB_DianJIKongZhi_T DianJIKongZhi_ConstB = {
  0.0,                                 /* '<S140>/Add1' */
  0.0F,                                /* '<S13>/Constant4' */
  0.0F,                                /* '<S13>/Constant5' */
  4.0F,                                /* '<S9>/Data Type Conversion1' */
  0.0F,                                /* '<S137>/Constant2' */
  -6.0F,                               /* '<S137>/Gain' */
  false                                /* '<S139>/Compare' */
};

/* Block signals (default storage) */
B_DianJIKongZhi_T DianJIKongZhi_B;

/* Block states (default storage) */
DW_DianJIKongZhi_T DianJIKongZhi_DW;

/* Real-time model */
static RT_MODEL_DianJIKongZhi_T DianJIKongZhi_M_;
RT_MODEL_DianJIKongZhi_T *const DianJIKongZhi_M = &DianJIKongZhi_M_;
extern real32_T rt_modf_snf(real32_T u0, real32_T u1);
static int32_T MultiWord2sLong(const uint32_T u[]);
static void sMultiWordShr(const uint32_T u1[], int32_T n1, uint32_T n2, uint32_T
  y[], int32_T n);
static void sMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[],
  int32_T n2, uint32_T y[], int32_T n);
static int32_T div_s32_floor(int32_T numerator, int32_T denominator);

/* Forward declaration for local functions */
static void DianJIKongZhi_RangeCheck(void);
static real_T rtGetNaN(void);
static real32_T rtGetNaNF(void);

#define NOT_USING_NONFINITE_LITERALS   1

extern real_T rtInf;
extern real_T rtMinusInf;
extern real_T rtNaN;
extern real32_T rtInfF;
extern real32_T rtMinusInfF;
extern real32_T rtNaNF;
static void rt_InitInfAndNaN(size_t realSize);
static boolean_T rtIsInf(real_T value);
static boolean_T rtIsInfF(real32_T value);
static boolean_T rtIsNaN(real_T value);
static boolean_T rtIsNaNF(real32_T value);
typedef struct {
  struct {
    uint32_T wordH;
    uint32_T wordL;
  } words;
} BigEndianIEEEDouble;

typedef struct {
  struct {
    uint32_T wordL;
    uint32_T wordH;
  } words;
} LittleEndianIEEEDouble;

typedef struct {
  union {
    real32_T wordLreal;
    uint32_T wordLuint;
  } wordL;
} IEEESingle;

real_T rtInf;
real_T rtMinusInf;
real_T rtNaN;
real32_T rtInfF;
real32_T rtMinusInfF;
real32_T rtNaNF;
static real_T rtGetInf(void);
static real32_T rtGetInfF(void);
static real_T rtGetMinusInf(void);
static real32_T rtGetMinusInfF(void);

/*
 * Initialize rtNaN needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetNaN(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T nan = 0.0;
  if (bitsPerReal == 32U) {
    nan = rtGetNaNF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF80000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    nan = tmpVal.fltVal;
  }

  return nan;
}

/*
 * Initialize rtNaNF needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetNaNF(void)
{
  IEEESingle nanF = { { 0.0F } };

  nanF.wordL.wordLuint = 0xFFC00000U;
  return nanF.wordL.wordLreal;
}

/*
 * Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 * generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
static void rt_InitInfAndNaN(size_t realSize)
{
  (void) (realSize);
  rtNaN = rtGetNaN();
  rtNaNF = rtGetNaNF();
  rtInf = rtGetInf();
  rtInfF = rtGetInfF();
  rtMinusInf = rtGetMinusInf();
  rtMinusInfF = rtGetMinusInfF();
}

/* Test if value is infinite */
static boolean_T rtIsInf(real_T value)
{
  return (boolean_T)((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Test if single-precision value is infinite */
static boolean_T rtIsInfF(real32_T value)
{
  return (boolean_T)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Test if value is not a number */
static boolean_T rtIsNaN(real_T value)
{
  boolean_T result = (boolean_T) 0;
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  if (bitsPerReal == 32U) {
    result = rtIsNaNF((real32_T)value);
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.fltVal = value;
    result = (boolean_T)((tmpVal.bitVal.words.wordH & 0x7FF00000) == 0x7FF00000 &&
                         ( (tmpVal.bitVal.words.wordH & 0x000FFFFF) != 0 ||
                          (tmpVal.bitVal.words.wordL != 0) ));
  }

  return result;
}

/* Test if single-precision value is not a number */
static boolean_T rtIsNaNF(real32_T value)
{
  IEEESingle tmp;
  tmp.wordL.wordLreal = value;
  return (boolean_T)( (tmp.wordL.wordLuint & 0x7F800000) == 0x7F800000 &&
                     (tmp.wordL.wordLuint & 0x007FFFFF) != 0 );
}

/*
 * Initialize rtInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T inf = 0.0;
  if (bitsPerReal == 32U) {
    inf = rtGetInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0x7FF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    inf = tmpVal.fltVal;
  }

  return inf;
}

/*
 * Initialize rtInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetInfF(void)
{
  IEEESingle infF;
  infF.wordL.wordLuint = 0x7F800000U;
  return infF.wordL.wordLreal;
}

/*
 * Initialize rtMinusInf needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real_T rtGetMinusInf(void)
{
  size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
  real_T minf = 0.0;
  if (bitsPerReal == 32U) {
    minf = rtGetMinusInfF();
  } else {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    minf = tmpVal.fltVal;
  }

  return minf;
}

/*
 * Initialize rtMinusInfF needed by the generated code.
 * Inf is initialized as non-signaling. Assumes IEEE.
 */
static real32_T rtGetMinusInfF(void)
{
  IEEESingle minfF;
  minfF.wordL.wordLuint = 0xFF800000U;
  return minfF.wordL.wordLreal;
}

static int32_T MultiWord2sLong(const uint32_T u[])
{
  return (int32_T)u[0];
}

static void sMultiWordShr(const uint32_T u1[], int32_T n1, uint32_T n2, uint32_T
  y[], int32_T n)
{
  int32_T i;
  int32_T i1;
  int32_T nb;
  uint32_T ys;
  nb = (int32_T)(n2 >> 5);
  i = 0;
  ys = (u1[n1 - 1] & 2147483648U) != 0U ? MAX_uint32_T : 0U;
  if (nb < n1) {
    int32_T nc;
    uint32_T nr;
    nc = n + nb;
    if (nc > n1) {
      nc = n1;
    }

    nr = n2 - ((uint32_T)nb << 5);
    if (nr > 0U) {
      uint32_T u1i;
      u1i = u1[nb];
      for (i1 = nb + 1; i1 < nc; i1++) {
        uint32_T yi;
        yi = u1i >> nr;
        u1i = u1[i1];
        y[i] = u1i << (32U - nr) | yi;
        i++;
      }

      y[i] = (nc < n1 ? u1[nc] : ys) << (32U - nr) | u1i >> nr;
      i++;
    } else {
      for (i1 = nb; i1 < nc; i1++) {
        y[i] = u1[i1];
        i++;
      }
    }
  }

  while (i < n) {
    y[i] = ys;
    i++;
  }
}

static void sMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[],
  int32_T n2, uint32_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;
  uint32_T cb;
  uint32_T cb1;
  uint32_T yk;
  boolean_T isNegative1;
  boolean_T isNegative2;
  isNegative1 = ((u1[n1 - 1] & 2147483648U) != 0U);
  isNegative2 = ((u2[n2 - 1] & 2147483648U) != 0U);
  cb1 = 1U;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0U;
  }

  for (i = 0; i < n1; i++) {
    int32_T ni;
    uint32_T a0;
    uint32_T a1;
    uint32_T cb2;
    uint32_T u1i;
    cb = 0U;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint32_T)(u1i < cb1);
    }

    a1 = u1i >> 16U;
    a0 = u1i & 65535U;
    cb2 = 1U;
    ni = n - i;
    ni = n2 <= ni ? n2 : ni;
    k = i;
    for (j = 0; j < ni; j++) {
      uint32_T b1;
      uint32_T w01;
      uint32_T w10;
      u1i = u2[j];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint32_T)(u1i < cb2);
      }

      b1 = u1i >> 16U;
      u1i &= 65535U;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint32_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (uint32_T)(yk < u1i);
      u1i = w10 << 16U;
      yk += u1i;
      cb += (uint32_T)(yk < u1i);
      u1i = w01 << 16U;
      yk += u1i;
      cb += (uint32_T)(yk < u1i);
      y[k] = yk;
      cb += w10 >> 16U;
      cb += w01 >> 16U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1U;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint32_T)(yk < cb);
    }
  }
}

static int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    /* Divide by zero handler */
  } else {
    uint32_T absDenominator;
    uint32_T absNumerator;
    uint32_T tempAbsQuotient;
    boolean_T quotientNeedsNegation;
    absNumerator = numerator < 0 ? ~(uint32_T)/*MW:OvOk*/ numerator + 1U :
      (uint32_T)numerator;
    absDenominator = denominator < 0 ? ~(uint32_T)/*MW:OvOk*/ denominator + 1U :
      (uint32_T)denominator;
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    quotient = quotientNeedsNegation ? -/*MW:OvOk*/ ((int32_T)tempAbsQuotient) :
      (int32_T)tempAbsQuotient;
  }

  return quotient;
}

/* Function for Chart: '<S135>/Chart' */
static void DianJIKongZhi_RangeCheck(void)
{
  int32_T qY;
  if ((DianJIKongZhi_DW.MotOffsetBuff[0] >= 0) &&
      (DianJIKongZhi_DW.MotOffsetBuff[1] < DianJIKongZhi_DW.MotOffsetBuff[0] -
       MAX_int32_T)) {
    qY = MAX_int32_T;
  } else if ((DianJIKongZhi_DW.MotOffsetBuff[0] < 0) &&
             (DianJIKongZhi_DW.MotOffsetBuff[1] >
              DianJIKongZhi_DW.MotOffsetBuff[0] - MIN_int32_T)) {
    qY = MIN_int32_T;
  } else {
    qY = DianJIKongZhi_DW.MotOffsetBuff[0] - DianJIKongZhi_DW.MotOffsetBuff[1];
  }

  if (qY < 0) {
    if (qY <= MIN_int32_T) {
      qY = MAX_int32_T;
    } else {
      qY = -qY;
    }
  }

  if (qY > 2000) {
    DianJIKongZhi_DW.MotCalNormal = false;
  } else {
    DianJIKongZhi_DW.MotCalNormal = true;
    qY = DianJIKongZhi_DW.MotOffsetBuff[1] / 2;
    if ((DianJIKongZhi_DW.MotOffsetBuff[0] < 0) && (qY < MIN_int32_T
         - DianJIKongZhi_DW.MotOffsetBuff[0])) {
      DianJIKongZhi_B.MotOffset = MIN_int32_T;
    } else if ((DianJIKongZhi_DW.MotOffsetBuff[0] > 0) && (qY > MAX_int32_T
                - DianJIKongZhi_DW.MotOffsetBuff[0])) {
      DianJIKongZhi_B.MotOffset = MAX_int32_T;
    } else {
      DianJIKongZhi_B.MotOffset = DianJIKongZhi_DW.MotOffsetBuff[0] + qY;
    }
  }
}

real32_T rt_modf_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  y = u0;
  if (u1 == 0.0F) {
    if (u0 == 0.0F) {
      y = u1;
    }
  } else if (rtIsNaNF(u0) || rtIsNaNF(u1) || rtIsInfF(u0)) {
    y = (rtNaNF);
  } else if (u0 == 0.0F) {
    y = 0.0F / u1;
  } else if (rtIsInfF(u1)) {
    if ((u1 < 0.0F) != (u0 < 0.0F)) {
      y = u1;
    }
  } else {
    boolean_T yEq;
    y = fmodf(u0, u1);
    yEq = (y == 0.0F);
    if ((!yEq) && (u1 > floorf(u1))) {
      real32_T q;
      q = fabsf(u0 / u1);
      yEq = !(fabsf(q - floorf(q + 0.5F)) > FLT_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0F;
    } else if ((u0 < 0.0F) != (u1 < 0.0F)) {
      y += u1;
    }
  }

  return y;
}

/* Model step function */
void DianJIKongZhi_step(void)
{
  int64m_T tmp;
  int64m_T tmp_0;
  int32_T rtb_Add_f;
  int32_T rtb_Sign_m;
  real32_T rtb_Divide1;
  real32_T rtb_Gain5;
  real32_T rtb_Minus1;
  real32_T rtb_Product4_a;
  real32_T rtb_Product_d;
  real32_T rtb_Sum;
  real32_T rtb_Sum_a;
  uint32_T elapsedTicks;
  uint32_T tmp_1;
  int16_T tmp_2;
  uint8_T MotCtrMode;
  boolean_T rtb_Compare_i;
  if (DianJIKongZhi_DW.counter % 16U == 15U) {
    /* Outputs for Function Call SubSystem: '<S1>/MC_LowFrqTask ' */
    /* Chart: '<S135>/Chart' incorporates:
     *  Inport: '<Root>/Ecode_Cnt'
     *  Inport: '<Root>/MotorSpdRef'
     */
    elapsedTicks = DianJIKongZhi_M->Timing.clockTick0 -
      DianJIKongZhi_DW.previousTicks;
    DianJIKongZhi_DW.previousTicks = DianJIKongZhi_M->Timing.clockTick0;
    elapsedTicks += DianJIKongZhi_DW.temporalCounter_i1;
    if (elapsedTicks <= 32767U) {
      DianJIKongZhi_DW.temporalCounter_i1 = (uint16_T)elapsedTicks;
    } else {
      DianJIKongZhi_DW.temporalCounter_i1 = 32767U;
    }

    if (DianJIKongZhi_DW.is_active_c1_DianJIKongZhi == 0) {
      DianJIKongZhi_DW.is_active_c1_DianJIKongZhi = 1U;
      DianJIKongZhi_DW.is_c1_DianJIKongZhi = DianJIKongZhi_IN_Calibrate;
      DianJIKongZhi_DW.is_Calibrate = DianJIKongZhi_IN_Init;
      MotCtrMode = 0U;
    } else {
      switch (DianJIKongZhi_DW.is_c1_DianJIKongZhi) {
       case DianJIKongZhi_IN_Calibrate:
        switch (DianJIKongZhi_DW.is_Calibrate) {
         case DianJIKongZhi_IN_Calibrate1:
          MotCtrMode = 1U;
          DianJIKongZhi_B.MotCalThetae = 1.046F;
          if (DianJIKongZhi_DW.temporalCounter_i1 >= 24000) {
            DianJIKongZhi_DW.temporalCounter_i1 = 0U;
            DianJIKongZhi_DW.is_Calibrate = DianJIKongZhi_IN_Calibrate2;
            if (Ecode_Cnt < -2147483482) {
              DianJIKongZhi_DW.MotOffsetBuff[0] = MIN_int32_T;
            } else {
              DianJIKongZhi_DW.MotOffsetBuff[0] = Ecode_Cnt - 166;
            }

            MotCtrMode = 2U;
            DianJIKongZhi_B.MotCalThetae = 2.093F;

            /* 120бу */
          }
          break;

         case DianJIKongZhi_IN_Calibrate2:
          MotCtrMode = 2U;
          DianJIKongZhi_B.MotCalThetae = 2.093F;
          if (DianJIKongZhi_DW.temporalCounter_i1 >= 24000) {
            DianJIKongZhi_DW.is_Calibrate = DianJIKongZhi_IN_RngChk;
            if (Ecode_Cnt < -2147483315) {
              DianJIKongZhi_DW.MotOffsetBuff[1] = MIN_int32_T;
            } else {
              DianJIKongZhi_DW.MotOffsetBuff[1] = Ecode_Cnt - 333;
            }

            DianJIKongZhi_RangeCheck();
          }
          break;

         case DianJIKongZhi_IN_Init:
          MotCtrMode = 0U;
          if (MotorSpdRef != 0) {
            DianJIKongZhi_DW.temporalCounter_i1 = 0U;
            DianJIKongZhi_DW.is_Calibrate = DianJIKongZhi_IN_Calibrate1;
            MotCtrMode = 1U;
            DianJIKongZhi_B.MotCalThetae = 1.046F;

            /* 60бу */
          }
          break;

         default:
          /* case IN_RngChk: */
          if (!DianJIKongZhi_DW.MotCalNormal) {
            DianJIKongZhi_DW.is_Calibrate = DianJIKongZh_IN_NO_ACTIVE_CHILD;
            DianJIKongZhi_DW.is_c1_DianJIKongZhi = DianJIKongZhi_IN_CallFailed;
            MotCtrMode = 3U;
          } else {
            DianJIKongZhi_DW.is_Calibrate = DianJIKongZh_IN_NO_ACTIVE_CHILD;
            DianJIKongZhi_DW.is_c1_DianJIKongZhi = DianJIKongZhi_IN_Normal;
            DianJIKongZhi_DW.is_Normal = DianJIKongZhi_IN_Stop;
            MotCtrMode = 4U;
          }
          break;
        }
        break;

       case DianJIKongZhi_IN_CallFailed:
        MotCtrMode = 3U;
        if (MotorSpdRef == 0) {
          DianJIKongZhi_DW.is_c1_DianJIKongZhi = DianJIKongZhi_IN_Calibrate;
          DianJIKongZhi_DW.is_Calibrate = DianJIKongZhi_IN_Init;
          MotCtrMode = 0U;
        }
        break;

       default:
        /* case IN_Normal: */
        if (DianJIKongZhi_DW.is_Normal == DianJIKongZhi_IN_Run) {
          MotCtrMode = 5U;
          if (MotorSpdRef == 0) {
            DianJIKongZhi_DW.is_Normal = DianJIKongZhi_IN_Stop;
            MotCtrMode = 4U;
          }
        } else {
          /* case IN_Stop: */
          MotCtrMode = 4U;
          if (MotorSpdRef != 0) {
            DianJIKongZhi_DW.is_Normal = DianJIKongZhi_IN_Run;
            MotCtrMode = 5U;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S135>/Chart' */

    /* Switch: '<S135>/Switch' */
    if (DianJIKongZhi_ConstB.Compare) {
      /* Switch: '<S135>/Switch' incorporates:
       *  Constant: '<S135>/Constant'
       */
      DianJIKongZhi_B.Switch = 255.0F;
    } else {
      /* Switch: '<S135>/Switch' */
      DianJIKongZhi_B.Switch = MotCtrMode;
    }

    /* End of Switch: '<S135>/Switch' */

    /* RelationalOperator: '<S141>/Compare' incorporates:
     *  Constant: '<S141>/Constant'
     */
    rtb_Compare_i = (DianJIKongZhi_B.Switch == 5.0F);

    /* DiscreteIntegrator: '<S178>/Integrator' */
    if (rtb_Compare_i && (DianJIKongZhi_DW.Integrator_PrevResetState_i <= 0)) {
      /* Sum: '<S187>/Sum' */
      DianJIKongZhi_DW.Integrator_DSTATE_p = DianJIKongZhi_ConstB.Constant2;
      if (DianJIKongZhi_DW.Integrator_DSTATE_p > 6.0F) {
        /* Sum: '<S187>/Sum' */
        DianJIKongZhi_DW.Integrator_DSTATE_p = 6.0F;
      } else if (DianJIKongZhi_DW.Integrator_DSTATE_p < -6.0F) {
        /* Sum: '<S187>/Sum' */
        DianJIKongZhi_DW.Integrator_DSTATE_p = -6.0F;
      }
    }

    /* Delay: '<S136>/Delay' incorporates:
     *  Inport: '<Root>/Ecode_Cnt'
     */
    if (DianJIKongZhi_DW.icLoad) {
      DianJIKongZhi_DW.Delay_DSTATE_n = Ecode_Cnt;
    }

    /* Product: '<S136>/Product' incorporates:
     *  Constant: '<S136>/Constant'
     *  Constant: '<S136>/Constant1'
     *  DataTypeConversion: '<S136>/Data Type Conversion'
     *  Delay: '<S136>/Delay'
     *  Inport: '<Root>/Ecode_Cnt'
     *  Product: '<S136>/Divide'
     *  Sum: '<S136>/Minus'
     */
    rtb_Product_d = (real32_T)(Ecode_Cnt - DianJIKongZhi_DW.Delay_DSTATE_n) /
      4000.0F * 6000.0F;

    /* Delay: '<S140>/Delay' */
    if (DianJIKongZhi_DW.icLoad_d) {
      DianJIKongZhi_DW.Delay_DSTATE = rtb_Product_d;
    }

    /* Sum: '<S140>/Add' incorporates:
     *  Delay: '<S140>/Delay'
     *  Product: '<S140>/Product'
     *  Product: '<S140>/Product1'
     */
    MotorActSpd = (real32_T)(DianJIKongZhi_ConstB.Add1 *
      DianJIKongZhi_DW.Delay_DSTATE) + rtb_Product_d;

    /* Saturate: '<S137>/Saturation' incorporates:
     *  Inport: '<Root>/MotorSpdRef'
     */
    if (MotorSpdRef > 5000) {
      tmp_2 = 5000;
    } else if (MotorSpdRef < -5000) {
      tmp_2 = -5000;
    } else {
      tmp_2 = MotorSpdRef;
    }

    /* Sum: '<S187>/Sum' incorporates:
     *  DataTypeConversion: '<S137>/Data Type Conversion'
     *  DiscreteIntegrator: '<S178>/Integrator'
     *  Saturate: '<S137>/Saturation'
     *  Sum: '<S137>/Minus'
     * */
    DianJIKongZhi_DW.Integrator_DSTATE_p += (real32_T)tmp_2 - MotorActSpd;

    /* Switch: '<S143>/Switch2' incorporates:
     *  Constant: '<S137>/Constant1'
     *  RelationalOperator: '<S143>/LowerRelop1'
     *  RelationalOperator: '<S143>/UpperRelop'
     *  Sum: '<S187>/Sum'
     *  Switch: '<S143>/Switch'
     */
    if (DianJIKongZhi_DW.Integrator_DSTATE_p > 6.0F) {
      /* Switch: '<S143>/Switch2' */
      DianJIKongZhi_B.Switch2 = 6.0F;
    } else if (DianJIKongZhi_DW.Integrator_DSTATE_p < DianJIKongZhi_ConstB.Gain)
    {
      /* Switch: '<S143>/Switch' incorporates:
       *  Switch: '<S143>/Switch2'
       */
      DianJIKongZhi_B.Switch2 = DianJIKongZhi_ConstB.Gain;
    } else {
      /* Switch: '<S143>/Switch2' */
      DianJIKongZhi_B.Switch2 = DianJIKongZhi_DW.Integrator_DSTATE_p;
    }

    /* End of Switch: '<S143>/Switch2' */

    /* Update for DiscreteIntegrator: '<S178>/Integrator' */
    if (DianJIKongZhi_DW.Integrator_DSTATE_p > 6.0F) {
      /* Update for Sum: '<S187>/Sum' */
      DianJIKongZhi_DW.Integrator_DSTATE_p = 6.0F;
    } else if (DianJIKongZhi_DW.Integrator_DSTATE_p < -6.0F) {
      /* Update for Sum: '<S187>/Sum' */
      DianJIKongZhi_DW.Integrator_DSTATE_p = -6.0F;
    }

    DianJIKongZhi_DW.Integrator_PrevResetState_i = (int8_T)rtb_Compare_i;

    /* Update for Delay: '<S136>/Delay' incorporates:
     *  Inport: '<Root>/Ecode_Cnt'
     */
    DianJIKongZhi_DW.icLoad = false;
    DianJIKongZhi_DW.Delay_DSTATE_n = Ecode_Cnt;

    /* Update for Delay: '<S140>/Delay' */
    DianJIKongZhi_DW.icLoad_d = false;
    DianJIKongZhi_DW.Delay_DSTATE = MotorActSpd;

    /* End of Outputs for SubSystem: '<S1>/MC_LowFrqTask ' */
  }

  /* Chart: '<Root>/Scheduler' incorporates:
   *  SubSystem: '<S1>/MC_HighFrqTask'
   */
  /* Sum: '<S5>/Add' incorporates:
   *  Inport: '<Root>/Ecode_Cnt'
   */
  rtb_Add_f = DianJIKongZhi_B.MotOffset - Ecode_Cnt;

  /* Signum: '<S8>/Sign' */
  if (rtb_Add_f < 0) {
    rtb_Sign_m = -1;
  } else {
    rtb_Sign_m = (rtb_Add_f > 0);
  }

  /* End of Signum: '<S8>/Sign' */

  /* If: '<S8>/If' */
  if (rtb_Sign_m == 1) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* SignalConversion generated from: '<S9>/Out1' incorporates:
     *  Constant: '<S9>/Constant2'
     *  Constant: '<S9>/Constant3'
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     *  Math: '<S9>/Mod'
     *  Product: '<S9>/Divide'
     *  Product: '<S9>/Product'
     *  Product: '<S9>/Product1'
     */
    rtb_Product_d = (real32_T)(rtb_Add_f - div_s32_floor(rtb_Add_f, 4000) * 4000)
      / 4000.0F * 6.28F * DianJIKongZhi_ConstB.DataTypeConversion1;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
  } else if (rtb_Sign_m == -1) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Gain: '<S10>/Gain' */
    elapsedTicks = 2147483648U;
    tmp_1 = (uint32_T)rtb_Add_f;
    sMultiWordMul(&elapsedTicks, 1, &tmp_1, 1, &tmp_0.chunks[0U], 2);

    /* DataTypeConversion: '<S10>/Data Type Conversion3' */
    sMultiWordShr(&tmp_0.chunks[0U], 2, 31U, &tmp.chunks[0U], 2);
    rtb_Add_f = MultiWord2sLong(&tmp.chunks[0U]);

    /* Gain: '<S10>/Gain1' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Constant: '<S10>/Constant2'
     *  Constant: '<S10>/Constant3'
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     *  Math: '<S10>/Mod'
     *  Product: '<S10>/Divide'
     *  Product: '<S10>/Product'
     *  Product: '<S10>/Product1'
     */
    rtb_Product_d = -((real32_T)(rtb_Add_f - div_s32_floor(rtb_Add_f, 4000) *
      4000) / 4000.0F * 6.28F * 4.0F);

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* SignalConversion generated from: '<S11>/Out1' incorporates:
     *  Constant: '<S11>/Constant1'
     */
    rtb_Product_d = 0.0F;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem3' */
  }

  /* End of If: '<S8>/If' */

  /* If: '<S3>/If' */
  if ((DianJIKongZhi_B.Switch == 1.0F) || (DianJIKongZhi_B.Switch == 2.0F) ||
      (DianJIKongZhi_B.Switch == 5.0F)) {
    /* Outputs for IfAction SubSystem: '<S3>/FOC' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Merge: '<S3>/Merge1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  SignalConversion generated from: '<S6>/SD_MosCtr'
     */
    SD_MosCtr = true;

    /* Sum: '<S12>/Minus' incorporates:
     *  Gain: '<S12>/Gain'
     *  Gain: '<S12>/Gain1'
     *  Inport: '<Root>/BCurrent_Sample'
     *  Inport: '<Root>/CCurrent_Sample'
     */
    rtb_Sum_a = 0.57735F * BCurrent_Sample - 0.57735F * CCurrent_Sample;

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S127>/Constant'
     *  Constant: '<S128>/Constant'
     *  Logic: '<S14>/Logical Operator'
     *  RelationalOperator: '<S127>/Compare'
     *  RelationalOperator: '<S128>/Compare'
     *  Signum: '<S14>/Sign'
     */
    if ((DianJIKongZhi_B.Switch == 1.0F) || (DianJIKongZhi_B.Switch == 2.0F)) {
      rtb_Product4_a = DianJIKongZhi_B.MotCalThetae;
    } else {
      if (rtIsNaNF(rtb_Product_d)) {
        /* Signum: '<S14>/Sign' */
        rtb_Minus1 = (rtNaNF);
      } else if (rtb_Product_d < 0.0F) {
        /* Signum: '<S14>/Sign' */
        rtb_Minus1 = -1.0F;
      } else {
        /* Signum: '<S14>/Sign' */
        rtb_Minus1 = (real32_T)(rtb_Product_d > 0.0F);
      }

      /* Switch: '<S14>/Switch1' incorporates:
       *  Abs: '<S14>/Abs2'
       *  Constant: '<S129>/Constant'
       *  Constant: '<S14>/Constant'
       *  Constant: '<S14>/Constant1'
       *  Math: '<S14>/Mod'
       *  RelationalOperator: '<S129>/Compare'
       *  Signum: '<S14>/Sign'
       *  Sum: '<S14>/Add'
       */
      if (rtb_Minus1 > 0.0F) {
        rtb_Product4_a = rt_modf_snf(fabsf(rtb_Product_d), 6.28F);
      } else {
        rtb_Product4_a = 6.28F - rt_modf_snf(fabsf(rtb_Product_d), 6.28F);
      }

      /* End of Switch: '<S14>/Switch1' */
    }

    /* End of Switch: '<S14>/Switch' */

    /* Trigonometry: '<S14>/SinCos' */
    rtb_Gain5 = cosf(rtb_Product4_a);
    rtb_Product4_a = sinf(rtb_Product4_a);

    /* Sum: '<S13>/Minus' incorporates:
     *  Inport: '<Root>/ACurrent_Sample'
     *  Product: '<S16>/Product'
     *  Product: '<S16>/Product2'
     *  Sum: '<S16>/Add'
     *  Trigonometry: '<S14>/SinCos'
     */
    rtb_Product_d = ACurrent_Sample * rtb_Gain5 + rtb_Sum_a * rtb_Product4_a;

    /* RelationalOperator: '<S18>/Compare' incorporates:
     *  Constant: '<S18>/Constant'
     */
    rtb_Compare_i = (DianJIKongZhi_B.Switch == 5.0F);

    /* DiscreteIntegrator: '<S57>/Integrator' */
    if (rtb_Compare_i && (DianJIKongZhi_DW.Integrator_PrevResetState <= 0)) {
      DianJIKongZhi_DW.Integrator_DSTATE = DianJIKongZhi_ConstB.Constant4;
      if (DianJIKongZhi_DW.Integrator_DSTATE > 13.0F) {
        DianJIKongZhi_DW.Integrator_DSTATE = 13.0F;
      } else if (DianJIKongZhi_DW.Integrator_DSTATE < -13.0F) {
        DianJIKongZhi_DW.Integrator_DSTATE = -13.0F;
      }
    }

    /* Product: '<S13>/Divide1' incorporates:
     *  Constant: '<S13>/Constant6'
     *  Inport: '<Root>/IVBus_Sample'
     */
    rtb_Divide1 = IVBus_Sample / 1.732F;

    /* MultiPortSwitch: '<S15>/Multiport Switch' incorporates:
     *  Constant: '<S15>/Constant1'
     *  Constant: '<S15>/Constant2'
     */
    switch ((int32_T)DianJIKongZhi_B.Switch) {
     case 1:
      rtb_Sum = 6.0F;
      break;

     case 2:
      rtb_Sum = 6.0F;
      break;

     case 3:
      rtb_Sum = 0.0F;
      break;

     case 4:
      rtb_Sum = 0.0F;
      break;

     default:
      /* Sum: '<S66>/Sum' incorporates:
       *  Constant: '<S13>/Constant'
       *  DiscreteIntegrator: '<S57>/Integrator'
       *  Product: '<S62>/PProd Out'
       */
      rtb_Sum = rtb_Product_d * MC_DCurrLopKp_CFG +
        DianJIKongZhi_DW.Integrator_DSTATE;

      /* Switch: '<S21>/Switch2' incorporates:
       *  Gain: '<S13>/Gain'
       *  RelationalOperator: '<S21>/LowerRelop1'
       *  RelationalOperator: '<S21>/UpperRelop'
       *  Switch: '<S21>/Switch'
       */
      if (rtb_Sum > rtb_Divide1) {
        rtb_Sum = rtb_Divide1;
      } else if (rtb_Sum < -rtb_Divide1) {
        /* Switch: '<S21>/Switch' incorporates:
         *  Gain: '<S13>/Gain'
         */
        rtb_Sum = -rtb_Divide1;
      }

      /* End of Switch: '<S21>/Switch2' */
      break;
    }

    /* End of MultiPortSwitch: '<S15>/Multiport Switch' */

    /* DiscreteIntegrator: '<S109>/Integrator' */
    if (rtb_Compare_i && (DianJIKongZhi_DW.Integrator_PrevResetState_h <= 0)) {
      DianJIKongZhi_DW.Integrator_DSTATE_i = DianJIKongZhi_ConstB.Constant5;
      if (DianJIKongZhi_DW.Integrator_DSTATE_i > 13.0F) {
        DianJIKongZhi_DW.Integrator_DSTATE_i = 13.0F;
      } else if (DianJIKongZhi_DW.Integrator_DSTATE_i < -13.0F) {
        DianJIKongZhi_DW.Integrator_DSTATE_i = -13.0F;
      }
    }

    /* Sum: '<S13>/Minus1' incorporates:
     *  Inport: '<Root>/ACurrent_Sample'
     *  Product: '<S16>/Product3'
     *  Product: '<S16>/Product4'
     *  Sum: '<S16>/Add1'
     *  Trigonometry: '<S14>/SinCos'
     */
    rtb_Minus1 = (rtb_Gain5 * rtb_Sum_a - ACurrent_Sample * rtb_Product4_a) -
      DianJIKongZhi_B.Switch2;

    /* MultiPortSwitch: '<S15>/Multiport Switch1' incorporates:
     *  Constant: '<S15>/Constant'
     */
    switch ((int32_T)DianJIKongZhi_B.Switch) {
     case 1:
      rtb_Sum_a = 0.0F;
      break;

     case 2:
      rtb_Sum_a = 0.0F;
      break;

     case 3:
      rtb_Sum_a = 0.0F;
      break;

     case 4:
      rtb_Sum_a = 0.0F;
      break;

     default:
      /* Sum: '<S118>/Sum' incorporates:
       *  Constant: '<S13>/Constant2'
       *  DiscreteIntegrator: '<S109>/Integrator'
       *  Product: '<S114>/PProd Out'
       */
      rtb_Sum_a = rtb_Minus1 * MC_QCurrLopKp_CFG +
        DianJIKongZhi_DW.Integrator_DSTATE_i;

      /* Switch: '<S22>/Switch2' incorporates:
       *  Gain: '<S13>/Gain1'
       *  RelationalOperator: '<S22>/LowerRelop1'
       *  RelationalOperator: '<S22>/UpperRelop'
       *  Switch: '<S22>/Switch'
       */
      if (rtb_Sum_a > rtb_Divide1) {
        rtb_Sum_a = rtb_Divide1;
      } else if (rtb_Sum_a < -rtb_Divide1) {
        /* Switch: '<S22>/Switch' incorporates:
         *  Gain: '<S13>/Gain1'
         */
        rtb_Sum_a = -rtb_Divide1;
      }

      /* End of Switch: '<S22>/Switch2' */
      break;
    }

    /* End of MultiPortSwitch: '<S15>/Multiport Switch1' */

    /* Sum: '<S15>/Add' incorporates:
     *  Product: '<S15>/Product1'
     *  Product: '<S15>/Product2'
     *  Trigonometry: '<S14>/SinCos'
     */
    rtb_Divide1 = rtb_Sum * rtb_Product4_a + rtb_Gain5 * rtb_Sum_a;

    /* Sum: '<S15>/Minus' incorporates:
     *  Product: '<S15>/Product'
     *  Product: '<S15>/Product3'
     *  Trigonometry: '<S14>/SinCos'
     */
    rtb_Sum = rtb_Sum * rtb_Gain5 - rtb_Sum_a * rtb_Product4_a;

    /* DataTypeConversion: '<S131>/Data Type Conversion' incorporates:
     *  Fcn: '<S131>/A'
     *  Fcn: '<S131>/B'
     *  Fcn: '<S131>/C'
     *  Gain: '<S131>/Gain'
     *  Gain: '<S131>/Gain1'
     *  Sum: '<S131>/Add'
     *  Switch: '<S131>/Switch'
     *  Switch: '<S131>/Switch1'
     *  Switch: '<S131>/Switch2'
     */
    MotCtrMode = (uint8_T)((int32_T)((((uint32_T)((rtb_Sum * 0.866025388F - 0.5F
      * rtb_Divide1 > 0.0F) << 7) + ((uint32_T)(rtb_Divide1 > 0.0F) << 6)) +
      ((uint32_T)((-rtb_Sum * 0.866025388F - 0.5F * rtb_Divide1 > 0.0F) << 7) <<
       1)) >> 1) >> 5);

    /* Gain: '<S134>/Gain5' */
    rtb_Gain5 = 0.866025388F * rtb_Divide1;

    /* Gain: '<S134>/Gain' */
    rtb_Sum *= 1.5F;

    /* Product: '<S134>/Product4' incorporates:
     *  Inport: '<Root>/IVBus_Sample'
     *  Math: '<S134>/Math Function'
     *
     * About '<S134>/Math Function':
     *  Operator: reciprocal
     */
    rtb_Product4_a = 1.0F / IVBus_Sample;

    /* MultiPortSwitch: '<S132>/Multiport Switch' incorporates:
     *  Gain: '<S132>/Gain'
     *  Gain: '<S132>/Gain1'
     *  Gain: '<S132>/Gain2'
     *  Gain: '<S134>/Gain1'
     *  Product: '<S134>/Product5'
     *  Product: '<S134>/Product6'
     *  Product: '<S134>/Product7'
     *  Sum: '<S134>/Add'
     *  Sum: '<S134>/Add3'
     */
    switch (MotCtrMode) {
     case 1:
      rtb_Sum_a = (rtb_Gain5 - rtb_Sum) * rtb_Product4_a;

      /* MultiPortSwitch: '<S132>/Multiport Switch1' incorporates:
       *  Product: '<S134>/Product6'
       *  Product: '<S134>/Product7'
       *  Sum: '<S134>/Add'
       *  Sum: '<S134>/Add3'
       */
      rtb_Product4_a *= rtb_Gain5 + rtb_Sum;
      break;

     case 2:
      rtb_Sum_a = (rtb_Gain5 + rtb_Sum) * rtb_Product4_a;

      /* MultiPortSwitch: '<S132>/Multiport Switch1' incorporates:
       *  Gain: '<S132>/Gain'
       *  Gain: '<S134>/Gain1'
       *  Product: '<S134>/Product5'
       *  Product: '<S134>/Product7'
       *  Sum: '<S134>/Add'
       */
      rtb_Product4_a = -(1.73205078F * rtb_Divide1 * rtb_Product4_a);
      break;

     case 3:
      rtb_Sum_a = -((rtb_Gain5 - rtb_Sum) * rtb_Product4_a);

      /* MultiPortSwitch: '<S132>/Multiport Switch1' incorporates:
       *  Gain: '<S132>/Gain2'
       *  Gain: '<S134>/Gain1'
       *  Product: '<S134>/Product5'
       *  Product: '<S134>/Product6'
       *  Sum: '<S134>/Add3'
       */
      rtb_Product4_a *= 1.73205078F * rtb_Divide1;
      break;

     case 4:
      rtb_Sum_a = -(1.73205078F * rtb_Divide1 * rtb_Product4_a);

      /* MultiPortSwitch: '<S132>/Multiport Switch1' incorporates:
       *  Gain: '<S132>/Gain'
       *  Gain: '<S134>/Gain1'
       *  Product: '<S134>/Product5'
       *  Product: '<S134>/Product6'
       *  Sum: '<S134>/Add3'
       */
      rtb_Product4_a *= rtb_Gain5 - rtb_Sum;
      break;

     case 5:
      rtb_Sum_a = 1.73205078F * rtb_Divide1 * rtb_Product4_a;

      /* MultiPortSwitch: '<S132>/Multiport Switch1' incorporates:
       *  Gain: '<S132>/Gain1'
       *  Gain: '<S134>/Gain1'
       *  Product: '<S134>/Product5'
       *  Product: '<S134>/Product7'
       *  Sum: '<S134>/Add'
       */
      rtb_Product4_a = -((rtb_Gain5 + rtb_Sum) * rtb_Product4_a);
      break;

     default:
      rtb_Sum_a = -((rtb_Gain5 + rtb_Sum) * rtb_Product4_a);

      /* MultiPortSwitch: '<S132>/Multiport Switch1' incorporates:
       *  Gain: '<S132>/Gain1'
       *  Gain: '<S132>/Gain2'
       *  Product: '<S134>/Product6'
       *  Product: '<S134>/Product7'
       *  Sum: '<S134>/Add'
       *  Sum: '<S134>/Add3'
       */
      rtb_Product4_a = -((rtb_Gain5 - rtb_Sum) * rtb_Product4_a);
      break;
    }

    /* End of MultiPortSwitch: '<S132>/Multiport Switch' */

    /* Fcn: '<S132>/Fcn' incorporates:
     *  Constant: '<S130>/Constant'
     */
    rtb_Divide1 = (1.0F - rtb_Product4_a) - rtb_Sum_a;

    /* Switch: '<S132>/Switch' incorporates:
     *  Fcn: '<S132>/Fcn1'
     */
    if (rtb_Divide1 >= 0.0F) {
      rtb_Sum = rtb_Sum_a;
    } else {
      rtb_Sum = rtb_Sum_a / (rtb_Sum_a + rtb_Product4_a);
    }

    /* End of Switch: '<S132>/Switch' */

    /* Abs: '<S132>/Abs' */
    rtb_Sum = fabsf(rtb_Sum);

    /* Switch: '<S132>/Switch1' incorporates:
     *  Fcn: '<S132>/Fcn2'
     */
    if (rtb_Divide1 > 0.0F) {
      rtb_Divide1 = rtb_Product4_a;
    } else {
      rtb_Divide1 = rtb_Product4_a / (rtb_Sum_a + rtb_Product4_a);
    }

    /* End of Switch: '<S132>/Switch1' */

    /* Abs: '<S132>/Abs1' */
    rtb_Divide1 = fabsf(rtb_Divide1);

    /* MultiPortSwitch: '<S133>/Multiport Switch' */
    switch (MotCtrMode) {
     case 1:
      /* Merge: '<S3>/Merge2' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn1'
       */
      UVoltage_PWM = ((rtb_Sum + 1.0F) - rtb_Divide1) / 4.0F;

      /* Merge: '<S3>/Merge4' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn'
       *  MultiPortSwitch: '<S133>/Multiport Switch1'
       */
      VVoltage_PWM = ((1.0F - rtb_Sum) - rtb_Divide1) / 4.0F;

      /* Merge: '<S3>/Merge3' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn2'
       *  MultiPortSwitch: '<S133>/Multiport Switch2'
       */
      WVoltage_PWM = ((rtb_Divide1 + 1.0F) + rtb_Sum) / 4.0F;
      break;

     case 2:
      /* Merge: '<S3>/Merge2' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn'
       */
      UVoltage_PWM = ((1.0F - rtb_Sum) - rtb_Divide1) / 4.0F;

      /* Merge: '<S3>/Merge4' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn2'
       *  MultiPortSwitch: '<S133>/Multiport Switch1'
       */
      VVoltage_PWM = ((rtb_Divide1 + 1.0F) + rtb_Sum) / 4.0F;

      /* Merge: '<S3>/Merge3' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn1'
       *  MultiPortSwitch: '<S133>/Multiport Switch2'
       */
      WVoltage_PWM = ((rtb_Sum + 1.0F) - rtb_Divide1) / 4.0F;
      break;

     case 3:
      /* Merge: '<S3>/Merge2' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn'
       */
      UVoltage_PWM = ((1.0F - rtb_Sum) - rtb_Divide1) / 4.0F;

      /* Merge: '<S3>/Merge4' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn1'
       *  MultiPortSwitch: '<S133>/Multiport Switch1'
       */
      VVoltage_PWM = ((rtb_Sum + 1.0F) - rtb_Divide1) / 4.0F;

      /* Merge: '<S3>/Merge3' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn2'
       *  MultiPortSwitch: '<S133>/Multiport Switch2'
       */
      WVoltage_PWM = ((rtb_Divide1 + 1.0F) + rtb_Sum) / 4.0F;
      break;

     case 4:
      /* Merge: '<S3>/Merge2' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn2'
       */
      UVoltage_PWM = ((rtb_Divide1 + 1.0F) + rtb_Sum) / 4.0F;

      /* Merge: '<S3>/Merge4' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn1'
       *  MultiPortSwitch: '<S133>/Multiport Switch1'
       */
      VVoltage_PWM = ((rtb_Sum + 1.0F) - rtb_Divide1) / 4.0F;

      /* Merge: '<S3>/Merge3' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn'
       *  MultiPortSwitch: '<S133>/Multiport Switch2'
       */
      WVoltage_PWM = ((1.0F - rtb_Sum) - rtb_Divide1) / 4.0F;
      break;

     case 5:
      /* Merge: '<S3>/Merge2' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn2'
       */
      UVoltage_PWM = ((rtb_Divide1 + 1.0F) + rtb_Sum) / 4.0F;

      /* Merge: '<S3>/Merge4' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn'
       *  MultiPortSwitch: '<S133>/Multiport Switch1'
       */
      VVoltage_PWM = ((1.0F - rtb_Sum) - rtb_Divide1) / 4.0F;

      /* Merge: '<S3>/Merge3' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn1'
       *  MultiPortSwitch: '<S133>/Multiport Switch2'
       */
      WVoltage_PWM = ((rtb_Sum + 1.0F) - rtb_Divide1) / 4.0F;
      break;

     default:
      /* Merge: '<S3>/Merge2' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn1'
       */
      UVoltage_PWM = ((rtb_Sum + 1.0F) - rtb_Divide1) / 4.0F;

      /* Merge: '<S3>/Merge4' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn2'
       *  MultiPortSwitch: '<S133>/Multiport Switch1'
       */
      VVoltage_PWM = ((rtb_Divide1 + 1.0F) + rtb_Sum) / 4.0F;

      /* Merge: '<S3>/Merge3' incorporates:
       *  Constant: '<S130>/Constant'
       *  Fcn: '<S133>/Fcn'
       *  MultiPortSwitch: '<S133>/Multiport Switch2'
       */
      WVoltage_PWM = ((1.0F - rtb_Sum) - rtb_Divide1) / 4.0F;
      break;
    }

    /* End of MultiPortSwitch: '<S133>/Multiport Switch' */

    /* Update for DiscreteIntegrator: '<S57>/Integrator' incorporates:
     *  Constant: '<S13>/Constant1'
     *  Product: '<S54>/IProd Out'
     */
    DianJIKongZhi_DW.Integrator_DSTATE += rtb_Product_d * MC_DCurrLopKi_CFG;
    if (DianJIKongZhi_DW.Integrator_DSTATE > 13.0F) {
      DianJIKongZhi_DW.Integrator_DSTATE = 13.0F;
    } else if (DianJIKongZhi_DW.Integrator_DSTATE < -13.0F) {
      DianJIKongZhi_DW.Integrator_DSTATE = -13.0F;
    }

    DianJIKongZhi_DW.Integrator_PrevResetState = (int8_T)rtb_Compare_i;

    /* End of Update for DiscreteIntegrator: '<S57>/Integrator' */

    /* Update for DiscreteIntegrator: '<S109>/Integrator' incorporates:
     *  Constant: '<S13>/Constant3'
     *  Product: '<S106>/IProd Out'
     */
    DianJIKongZhi_DW.Integrator_DSTATE_i += rtb_Minus1 * MC_QCurrLopKi_CFG;
    if (DianJIKongZhi_DW.Integrator_DSTATE_i > 13.0F) {
      DianJIKongZhi_DW.Integrator_DSTATE_i = 13.0F;
    } else if (DianJIKongZhi_DW.Integrator_DSTATE_i < -13.0F) {
      DianJIKongZhi_DW.Integrator_DSTATE_i = -13.0F;
    }

    DianJIKongZhi_DW.Integrator_PrevResetState_h = (int8_T)rtb_Compare_i;

    /* End of Update for DiscreteIntegrator: '<S109>/Integrator' */
    /* End of Outputs for SubSystem: '<S3>/FOC' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/Stop' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Merge: '<S3>/Merge1' incorporates:
     *  Constant: '<S7>/Constant1'
     *  SignalConversion generated from: '<S7>/SD_MosCtr'
     */
    SD_MosCtr = false;

    /* Merge: '<S3>/Merge2' incorporates:
     *  Constant: '<S7>/Constant'
     *  SignalConversion generated from: '<S7>/UVoltage_PWM'
     */
    UVoltage_PWM = 0.0F;

    /* Merge: '<S3>/Merge4' incorporates:
     *  Constant: '<S7>/Constant'
     *  SignalConversion generated from: '<S7>/VVoltage_PWM'
     */
    VVoltage_PWM = 0.0F;

    /* Merge: '<S3>/Merge3' incorporates:
     *  Constant: '<S7>/Constant'
     *  SignalConversion generated from: '<S7>/WVoltage_PWM'
     */
    WVoltage_PWM = 0.0F;

    /* End of Outputs for SubSystem: '<S3>/Stop' */
  }

  /* End of If: '<S3>/If' */

  /* Saturate: '<S3>/Saturation1' */
  if (UVoltage_PWM > 0.95F) {
    /* Merge: '<S3>/Merge2' incorporates:
     *  Saturate: '<S3>/Saturation1'
     */
    UVoltage_PWM = 0.95F;
  } else if (UVoltage_PWM < 0.0F) {
    /* Merge: '<S3>/Merge2' incorporates:
     *  Saturate: '<S3>/Saturation1'
     */
    UVoltage_PWM = 0.0F;
  }

  /* End of Saturate: '<S3>/Saturation1' */

  /* Saturate: '<S3>/Saturation2' */
  if (VVoltage_PWM > 0.95F) {
    /* Merge: '<S3>/Merge4' incorporates:
     *  Saturate: '<S3>/Saturation2'
     */
    VVoltage_PWM = 0.95F;
  } else if (VVoltage_PWM < 0.0F) {
    /* Merge: '<S3>/Merge4' incorporates:
     *  Saturate: '<S3>/Saturation2'
     */
    VVoltage_PWM = 0.0F;
  }

  /* End of Saturate: '<S3>/Saturation2' */

  /* Saturate: '<S3>/Saturation3' */
  if (WVoltage_PWM > 0.95F) {
    /* Merge: '<S3>/Merge3' incorporates:
     *  Saturate: '<S3>/Saturation3'
     */
    WVoltage_PWM = 0.95F;
  } else if (WVoltage_PWM < 0.0F) {
    /* Merge: '<S3>/Merge3' incorporates:
     *  Saturate: '<S3>/Saturation3'
     */
    WVoltage_PWM = 0.0F;
  }

  /* End of Saturate: '<S3>/Saturation3' */
  if (DianJIKongZhi_DW.counter >= 1000000000U) {
    DianJIKongZhi_DW.counter = 0U;
  } else {
    elapsedTicks = DianJIKongZhi_DW.counter + /*MW:OvSatOk*/ 1U;
    if (DianJIKongZhi_DW.counter + 1U < DianJIKongZhi_DW.counter) {
      elapsedTicks = MAX_uint32_T;
    }

    DianJIKongZhi_DW.counter = elapsedTicks;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 6.25E-5, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  DianJIKongZhi_M->Timing.clockTick0++;
}

/* Model initialize function */
void DianJIKongZhi_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* SystemInitialize for Chart: '<Root>/Scheduler' incorporates:
   *  SubSystem: '<S1>/MC_LowFrqTask '
   */
  /* InitializeConditions for Sum: '<S187>/Sum' incorporates:
   *  DiscreteIntegrator: '<S178>/Integrator'
   */
  DianJIKongZhi_DW.Integrator_DSTATE_p = DianJIKongZhi_ConstB.Constant2;

  /* InitializeConditions for DiscreteIntegrator: '<S178>/Integrator' */
  if (DianJIKongZhi_DW.Integrator_DSTATE_p > 6.0F) {
    /* InitializeConditions for Sum: '<S187>/Sum' */
    DianJIKongZhi_DW.Integrator_DSTATE_p = 6.0F;
  } else if (DianJIKongZhi_DW.Integrator_DSTATE_p < -6.0F) {
    /* InitializeConditions for Sum: '<S187>/Sum' */
    DianJIKongZhi_DW.Integrator_DSTATE_p = -6.0F;
  }

  DianJIKongZhi_DW.Integrator_PrevResetState_i = 2;

  /* InitializeConditions for Delay: '<S136>/Delay' */
  DianJIKongZhi_DW.icLoad = true;

  /* InitializeConditions for Delay: '<S140>/Delay' */
  DianJIKongZhi_DW.icLoad_d = true;

  /* SystemInitialize for Chart: '<Root>/Scheduler' incorporates:
   *  SubSystem: '<S1>/MC_HighFrqTask'
   */
  /* SystemInitialize for IfAction SubSystem: '<S3>/FOC' */
  /* InitializeConditions for DiscreteIntegrator: '<S57>/Integrator' */
  DianJIKongZhi_DW.Integrator_DSTATE = DianJIKongZhi_ConstB.Constant4;
  if (DianJIKongZhi_DW.Integrator_DSTATE > 13.0F) {
    DianJIKongZhi_DW.Integrator_DSTATE = 13.0F;
  } else if (DianJIKongZhi_DW.Integrator_DSTATE < -13.0F) {
    DianJIKongZhi_DW.Integrator_DSTATE = -13.0F;
  }

  DianJIKongZhi_DW.Integrator_PrevResetState = 2;

  /* End of InitializeConditions for DiscreteIntegrator: '<S57>/Integrator' */

  /* InitializeConditions for DiscreteIntegrator: '<S109>/Integrator' */
  DianJIKongZhi_DW.Integrator_DSTATE_i = DianJIKongZhi_ConstB.Constant5;
  if (DianJIKongZhi_DW.Integrator_DSTATE_i > 13.0F) {
    DianJIKongZhi_DW.Integrator_DSTATE_i = 13.0F;
  } else if (DianJIKongZhi_DW.Integrator_DSTATE_i < -13.0F) {
    DianJIKongZhi_DW.Integrator_DSTATE_i = -13.0F;
  }

  DianJIKongZhi_DW.Integrator_PrevResetState_h = 2;

  /* End of InitializeConditions for DiscreteIntegrator: '<S109>/Integrator' */
  /* End of SystemInitialize for SubSystem: '<S3>/FOC' */

  /* Enable for Chart: '<Root>/Scheduler' incorporates:
   *  SubSystem: '<S1>/MC_LowFrqTask '
   */
  /* Enable for Chart: '<S135>/Chart' */
  DianJIKongZhi_DW.previousTicks = DianJIKongZhi_M->Timing.clockTick0;
}

/* Model terminate function */
void DianJIKongZhi_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
