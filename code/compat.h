#ifndef MICROPY_INCLUDED_ULAB_COMPAT_H
#define MICROPY_INCLUDED_ULAB_COMPAT_H
 
#pragma GCC diagnostic ignored "-Wshadow"

#define mp_obj_is_type(obj, type) MP_OBJ_IS_TYPE(obj, type)
#define mp_obj_is_int(obj) MP_OBJ_IS_INT(obj)

#define MP_ROM_NONE (MP_ROM_PTR(&mp_const_none_obj))
#define MP_ROM_FALSE (mp_const_false) 
#define MP_ROM_TRUE (mp_const_true) 

#ifndef ULAB_FFT_FFT
#define ULAB_FFT_FFT (1)
#endif

#ifndef ULAB_FFT_IFFT
#define ULAB_FFT_IFFT (1)
#endif

#ifndef ULAB_FFT_SPECTRUM
#define ULAB_FFT_SPECTRUM (1)
#endif

#ifndef ULAB_FILTER_CONVOLVE
#define ULAB_FILTER_CONVOLVE (1)
#endif

#ifndef ULAB_LINALG_DET
#define ULAB_LINALG_DET (1)
#endif

#ifndef ULAB_LINALG_DOT
#define ULAB_LINALG_DOT (1)
#endif

#ifndef ULAB_LINALG_EIG
#define ULAB_LINALG_EIG (1)
#endif

#ifndef ULAB_LINALG_EYE
#define ULAB_LINALG_EYE (1)
#endif

#ifndef ULAB_LINALG_INV
#define ULAB_LINALG_INV (1)
#endif

#ifndef ULAB_LINALG_ONES
#define ULAB_LINALG_ONES (1)
#endif

#ifndef ULAB_LINALG_RESHAPE
#define ULAB_LINALG_RESHAPE (1)
#endif

#ifndef ULAB_LINALG_SIZE
#define ULAB_LINALG_SIZE (1)
#endif

#ifndef ULAB_LINALG_TRANSPOSE
#define ULAB_LINALG_TRANSPOSE (1)
#endif

#ifndef ULAB_LINALG_ZEROS
#define ULAB_LINALG_ZEROS (1)
#endif

#ifndef ULAB_NUMERICAL_ARGMAX
#define ULAB_NUMERICAL_ARGMAX (1)
#endif

#ifndef ULAB_NUMERICAL_ARGMIN
#define ULAB_NUMERICAL_ARGMIN (1)
#endif

#ifndef ULAB_NUMERICAL_ARGSORT
#define ULAB_NUMERICAL_ARGSORT (1)
#endif

#ifndef ULAB_NUMERICAL_DIFF
#define ULAB_NUMERICAL_DIFF (1)
#endif

#ifndef ULAB_NUMERICAL_FLIP
#define ULAB_NUMERICAL_FLIP (1)
#endif

#ifndef ULAB_NUMERICAL_LINSPACE
#define ULAB_NUMERICAL_LINSPACE (1)
#endif

#ifndef ULAB_NUMERICAL_MAX
#define ULAB_NUMERICAL_MAX (1)
#endif

#ifndef ULAB_NUMERICAL_MEAN
#define ULAB_NUMERICAL_MEAN (1)
#endif

#ifndef ULAB_NUMERICAL_MIN
#define ULAB_NUMERICAL_MIN (1)
#endif

#ifndef ULAB_NUMERICAL_ROLL
#define ULAB_NUMERICAL_ROLL (1)
#endif

#ifndef ULAB_NUMERICAL_SORT
#define ULAB_NUMERICAL_SORT (1)
#endif

#ifndef ULAB_NUMERICAL_STD
#define ULAB_NUMERICAL_STD (1)
#endif

#ifndef ULAB_NUMERICAL_SUM
#define ULAB_NUMERICAL_SUM (1)
#endif

#ifndef ULAB_POLY_POLYFIT
#define ULAB_POLY_POLYFIT (1)
#endif

#ifndef ULAB_POLY_POLYVAL
#define ULAB_POLY_POLYVAL (1)
#endif

#ifndef ULAB_VECTORISE_
#define ULAB_VECTORISE_ (1)
#endif

#ifndef ULAB_VECTORISE_ACOS
#define ULAB_VECTORISE_ACOS (1)
#endif

#ifndef ULAB_VECTORISE_ACOSH
#define ULAB_VECTORISE_ACOSH (1)
#endif

#ifndef ULAB_VECTORISE_ASIN
#define ULAB_VECTORISE_ASIN (1)
#endif

#ifndef ULAB_VECTORISE_ASINH
#define ULAB_VECTORISE_ASINH (1)
#endif

#ifndef ULAB_VECTORISE_ATAN
#define ULAB_VECTORISE_ATAN (1)
#endif

#ifndef ULAB_VECTORISE_ATANH
#define ULAB_VECTORISE_ATANH (1)
#endif

#ifndef ULAB_VECTORISE_CEIL
#define ULAB_VECTORISE_CEIL (1)
#endif

#ifndef ULAB_VECTORISE_COS
#define ULAB_VECTORISE_COS (1)
#endif

#ifndef ULAB_VECTORISE_ERF
#define ULAB_VECTORISE_ERF (1)
#endif

#ifndef ULAB_VECTORISE_ERFC
#define ULAB_VECTORISE_ERFC (1)
#endif

#ifndef ULAB_VECTORISE_EXP
#define ULAB_VECTORISE_EXP (1)
#endif

#ifndef ULAB_VECTORISE_EXPM1
#define ULAB_VECTORISE_EXPM1 (1)
#endif

#ifndef ULAB_VECTORISE_FLOOR
#define ULAB_VECTORISE_FLOOR (1)
#endif

#ifndef ULAB_VECTORISE_GAMMA
#define ULAB_VECTORISE_GAMMA (1)
#endif

#ifndef ULAB_VECTORISE_LGAMMA
#define ULAB_VECTORISE_LGAMMA (1)
#endif

#ifndef ULAB_VECTORISE_LOG
#define ULAB_VECTORISE_LOG (1)
#endif

#ifndef ULAB_VECTORISE_LOG10
#define ULAB_VECTORISE_LOG10 (1)
#endif

#ifndef ULAB_VECTORISE_LOG2
#define ULAB_VECTORISE_LOG2 (1)
#endif

#ifndef ULAB_VECTORISE_SIN
#define ULAB_VECTORISE_SIN (1)
#endif

#ifndef ULAB_VECTORISE_SINH
#define ULAB_VECTORISE_SINH (1)
#endif

#ifndef ULAB_VECTORISE_SQRT
#define ULAB_VECTORISE_SQRT (1)
#endif

#ifndef ULAB_VECTORISE_TAHN
#define ULAB_VECTORISE_TAHN (1)
#endif

#ifndef ULAB_VECTORISE_TAN
#define ULAB_VECTORISE_TAN (1)
#endif

#ifndef ULAB_VECTORISE_TANH
#define ULAB_VECTORISE_TANH (1)
#endif

#endif  //  MICROPY_INCLUDED_ULAB_COMPAT_H

