#include "run-time.h"

/* Typedefs for referenced classes */

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
} _KLstringGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
  D incremental_gf_module_;
  D incremental_gf_domain_info_;
  D incremental_gf_method_libraries_;
  D incremental_gf_properties_;
} _KLincremental_generic_functionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern void* malloc (unsigned long);
extern int _NSGetExecutablePath (DBSTR, void*);
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern void free (void*);
D KmakeVKdMM33I (D, D, D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D Kcopy_sequenceVKdMM3I (D, D, D, D);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern int sysctl (DBSTR, unsigned int, DBSTR, DBSTR, DBSTR, DBSTR);
extern int sysctl (DBSTR, unsigned int, DBSTR, DBSTR, DBSTR, DBSTR);
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;

/* Defined object declarations */

D Kdarwin_sysctlYcommon_dylan_internalsVcommon_dylanI (D);
D Kget_application_filenameYcommon_dylan_internalsVcommon_dylanI ();
static _KLunionGVKe K2;
static _KLsingletonGVKd K3;
static _KLsimple_methodGVKe Kinteger_as_rawF6;
static D Kinteger_as_rawF6I (D x_);
static _KLsignatureGVKe K7;

/* Indirection variables */


/* Variables */


/* Objects */

static _KLunionGVKe K2 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K3,
  &KLstringGVKd
};

static _KLsingletonGVKd K3 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsimple_methodGVKe Kinteger_as_rawF6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K7,
  &Kinteger_as_rawF6I
};

static _KLsignatureGVKe K7 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LintegerG_typesVKi
};

/* Code */

D Kdarwin_sysctlYcommon_dylan_internalsVcommon_dylanI (D mib_) {
  D T2;
  D T3;
  D T4;
  DWORD i_T, i_;
  D T6;
  D T7;
  D T8;
  DBSTR T9;
  D T10;
  DBSTR T11;
  DBSTR T12;
  int T13;
  DBSTR T14;
  D T15;
  unsigned long T16;
  DBSTR T17;
  D T18;
  DBSTR T19;
  D T20;
  D T21;
  DBSTR T22;
  DBSTR T23;
  int T24;
  D T25_0;
  D T26_0;
  D T27_0;
  D T28_0;
  D T29_0;
  D rmib_;
  D rosize_;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  DWORD T36;
  D T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  D T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  D T46;
  D out_;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  D T51;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:15
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:18
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(mib_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:18
  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
  T3 = CONGRUENT_CALL2(T2, (D) 17);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:18
  rmib_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), T3);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:19
  rosize_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 17);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(mib_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
  i_T = 1;
L0: ;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
    i_ = i_T;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:25
    T34 = primitive_cast_raw_as_integer(i_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T6 = CONGRUENT_CALL2(T34, T4);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
    if (T6 != &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:25
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T7 = CONGRUENT_CALL3(mib_, T34, &KPempty_vectorVKi);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:25
      T8 = CALL1(&Kinteger_as_rawF6, T7);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:24
      T9 = primitive_string_as_raw(rmib_);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:24
      T10 = primitive_cast_raw_as_pointer(T9);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:25
      T32 = primitive_machine_word_logxor(i_,1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:25
      T33 = primitive_machine_word_multiply_signal_overflow(T32,4);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:25
      T35 = primitive_machine_word_shift_right(T33,2);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:23
      primitive_c_signed_int_at_setter(T8,T10,0,T35);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
      T36 = primitive_machine_word_add_signal_overflow(i_,4);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
      i_T = T36;
      goto L0;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:22
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:34
  T11 = primitive_string_as_raw(rmib_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:34
  T37 = SLOT_VALUE_INITD(rmib_, 0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:34
  T39 = primitive_cast_integer_as_raw(T37);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:34
  T38 = primitive_machine_word_shift_right(T39,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:36
  T12 = primitive_string_as_raw(rosize_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:29
  T13 = sysctl(T11, T38, 0, T12, 0, 0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:29
  T40 = primitive_machine_word_shift_left_signal_overflow(T13,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:29
  T41 = primitive_machine_word_logior(T40,1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:29
  T42 = primitive_machine_word_less_thanQ(T41,1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:29
  if (T42 != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:29
    T28_0 = &KPfalseVKi;
    T29_0 = T28_0;
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:41
    T14 = primitive_string_as_raw(rosize_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:41
    T15 = primitive_cast_raw_as_pointer(T14);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:40
    T16 = primitive_c_unsigned_long_at(T15,0,0);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:40
    T43 = primitive_machine_word_shift_left_signal_overflow(T16,2);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:40
    T44 = primitive_machine_word_logior(T43,1);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:40
    T45 = primitive_machine_word_add_signal_overflow(T44,4);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:40
    T46 = primitive_cast_raw_as_integer(T45);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:43
    out_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), T46);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:47
    T48 = primitive_machine_word_shift_right(T45,2);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:46
    T17 = primitive_string_as_raw(rosize_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:45
    T18 = primitive_cast_raw_as_pointer(T17);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:45
    primitive_c_unsigned_long_at_setter(T48,T18,0,0);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:55
    T19 = primitive_string_as_raw(rmib_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:55
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T20 = CONGRUENT_CALL1(mib_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:55
    T21 = CALL1(&Kinteger_as_rawF6, T20);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:56
    T22 = primitive_string_as_raw(out_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:56
    T23 = primitive_string_as_raw(rosize_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:50
    T24 = sysctl(T19, T21, T22, T23, 0, 0);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:50
    T49 = primitive_machine_word_shift_left_signal_overflow(T24,2);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:50
    T50 = primitive_machine_word_logior(T49,1);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:50
    T51 = primitive_machine_word_less_thanQ(T50,1);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:50
    if (T51 != &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:50
      T26_0 = &KPfalseVKi;
      T27_0 = T26_0;
    } else {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:59
      T25_0 = out_;
      T27_0 = T25_0;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:50
    T29_0 = T27_0;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:29
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:15
  MV_SET_COUNT(1);
  return(T29_0);
}

D Kget_application_filenameYcommon_dylan_internalsVcommon_dylanI () {
  volatile void* T0;
  volatile DADDR T1;
  volatile D size_;
  volatile D returnPexit_45_;
  volatile D T4;
  volatile D T5;
  volatile DBSTR T6;
  volatile int T7;
  volatile unsigned int T8;
  volatile unsigned int T9;
  volatile D T10;
  volatile D T11_0;
  volatile D T12_0;
  volatile D bufsiz_;
  volatile D T14;
  volatile D T15;
  volatile D buffer_;
  volatile DWORD T17;
  volatile DWORD T18;
  volatile DWORD T19;
  volatile DWORD T20;
  volatile D T21;
  volatile D T22;
  volatile DWORD T23;
  volatile DWORD T24;
  volatile D T25;
  volatile D T26;
  volatile _KLsimple_object_vectorGVKd_1 T27 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T28;
  volatile DWORD T29;
  volatile DWORD T30;
  volatile D T31;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:121
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:123
  bufsiz_ = (D) 513;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:126
  T0 = malloc(4);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:125
  T1 = primitive_cast_pointer_as_raw(T0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:124
  size_ = primitive_wrap_machine_word(T1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:130
  ENTER_EXIT_FRAME(returnPexit_45_);
  if (nlx_setjmp(FRAME_DEST(returnPexit_45_))) {
    T11_0 = FRAME_RETVAL(returnPexit_45_);
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:130
    ENTER_UNWIND_FRAME(T5);
    if (!nlx_setjmp(FRAME_DEST(T5))) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:131
    L0: ;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:132
        T15 = bufsiz_;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:132
        buffer_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), T15);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:133
        T14 = bufsiz_;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:133
        T18 = primitive_cast_integer_as_raw(T14);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:133
        T17 = primitive_machine_word_shift_right(T18,2);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:133
        primitive_c_unsigned_int_at_setter(T17,size_,0,0);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:139
        T6 = primitive_string_as_raw(buffer_);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:136
        T7 = _NSGetExecutablePath(T6, size_);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:135
        T19 = primitive_machine_word_shift_left_signal_overflow(T7,2);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:135
        T20 = primitive_machine_word_logior(T19,1);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:135
        T21 = primitive_cast_raw_as_integer(T20);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:135
        T22 = primitive_idQ(T21,(D) 1);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:135
        if (T22 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:141
          T8 = primitive_c_unsigned_int_at(size_,0,0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:141
          T23 = primitive_machine_word_shift_left_signal_overflow(T8,2);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:141
          T24 = primitive_machine_word_logior(T23,1);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:141
          T25 = primitive_cast_raw_as_integer(T24);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:145
          T26 = Kcopy_sequenceVKdMM3I(buffer_, &KPempty_vectorVKi, (D) 1, T25);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:145
          T27.vector_element_[0] = T26;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:130
          T28 = MV_SET_REST_AT(&T27, 0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:130
          NLX(returnPexit_45_, T28);
        } else {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:148
          T9 = primitive_c_unsigned_int_at(size_,0,0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:148
          T29 = primitive_machine_word_shift_left_signal_overflow(T9,2);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:148
          T30 = primitive_machine_word_logior(T29,1);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:148
          T31 = primitive_cast_raw_as_integer(T30);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:148
          bufsiz_ = T31;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:135
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:131
        goto L0;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:131
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:152
      T10 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:130
      FALL_THROUGH_UNWIND(T10);
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:154
    free(T0);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:130
    CONTINUE_UNWIND();
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:130
  T11_0 = T10;
    /* invalidate returnPexit_45_ */
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:130
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:121
  T12_0 = T11_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T11_0);
    primitive_type_check(T12_0, &K2);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/darwin-common-extensions.dylan:121
  MV_SET_COUNT(1);
  return(T12_0);
}

static D Kinteger_as_rawF6I (D x_) {
  DWORD T1;
  DWORD T2;
  DWORD T3;

  T3 = primitive_cast_integer_as_raw(x_);
  T2 = primitive_machine_word_shift_right(T3,2);
  T1 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  return(T1);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_darwin_common_extensions_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_darwin_common_extensions_for_user () {
  return;
}


/* eof */
