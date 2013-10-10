#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(1);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLclassGVKd;

#define  define__KLmm_wrapperGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D mm_wrapper_implementation_class_; \
    D mm_wrapper_subtype_mask_; \
    DWORD mm_wrapper_fixed_part_; \
    DWORD mm_wrapper_variable_part_; \
    D mm_wrapper_number_patterns_; \
    DWORD mm_wrapper_pattern_element_[nrepeated+1]; \
  } _KLmm_wrapperGVKi_##nrepeated;
define__KLmm_wrapperGVKi(1);
define__KLmm_wrapperGVKi(0);

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(29);


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D Kformat_outYformat_outVioMM0I (D, D);
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;

/* Defined object declarations */

D KmultiplyVmultiplyI (D, D);
static _KLbyte_stringGVKd_29 K2;

/* Indirection variables */


/* Variables */


/* Objects */

static _KLbyte_stringGVKd_29 K2 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "The product of 7 * 12 is: %d\n"
};

/* Code */

D KmultiplyVmultiplyI (D numberUone_, D numberUtwo_) {
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;

  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:3
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:4
  T4 = primitive_cast_integer_as_raw(numberUone_);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:4
  T5 = primitive_machine_word_logxor(T4,1);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:4
  T6 = primitive_cast_integer_as_raw(numberUtwo_);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:4
  T7 = primitive_machine_word_shift_right(T6,2);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:4
  T8 = primitive_machine_word_multiply_signal_overflow(T5,T7);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:4
  T9 = primitive_machine_word_logior(T8,1);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:4
  T10 = primitive_cast_raw_as_integer(T9);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:5
  T3 = T10;
  MV_SET_ELT(0, T10);
  MV_SET_COUNT(1);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:3
  return(T3);
}


/* SYSTEM INIT CODE */

void _Init_multiply__X_multiply_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_multiply__X_multiply_for_user () {
{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_1 T2 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:8
  T0 = KmultiplyVmultiplyI((D) 29, (D) 49);
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:8
  T2.vector_element_[0] = T0;
  // /Users/zzak/projects/bits-of-dylan/multiply/multiply.dylan:8
  T1 = Kformat_outYformat_outVioMM0I(&K2, &T2);
  goto I0;
}
I0:

  return;
}


/* eof */
