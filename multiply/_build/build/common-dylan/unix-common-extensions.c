#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(0);

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_object_vectorGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

#define  define__KLsimple_closure_methodGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D xep_; \
    D function_signature_; \
    D mep_; \
    D environment_size_; \
    D environment_element_[nrepeated+1]; \
  } _KLsimple_closure_methodGVKi_##nrepeated;
define__KLsimple_closure_methodGVKi(0);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
  D signature_rest_value_;
} _KLsignatureAvaluesArest_valueGVKi;

typedef struct {
  D wrapper;
} _KLstringGVKd;


/* Typedefs for defined classes */


/* Referenced object declarations */

D KmakeVKdMM33I (D, D, D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern long time (void*);
D Kelement_range_errorVKeI (D, D);
extern int write (int, DBSTR, unsigned long);
extern int fsync (int);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern int write (int, DBSTR, unsigned long);
extern int fsync (int);
D Kformat_to_stringYcommon_extensionsVcommon_dylanI (D format_string_, D format_arguments_);
D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLstretchy_object_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLincremental_generic_functionGVKe KreverseXVKd;
D KapplyVKdI (D, D);
extern _KLsimple_methodGVKe KvaluesVKd;
D Ksize_setterVKdMM1I (D, D);
D KaddXVKdMM3I (D, D);
extern _KLincremental_generic_functionGVKe KEVKd;
D Kconcatenate_asVKdMM1I (D, D, D);
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM0;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsignatureAvaluesArest_valueGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesArest_valueGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern int getpid ();
D Kdarwin_sysctlYcommon_dylan_internalsVcommon_dylanI (D);
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe KaddVKd;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
D Kcopy_sequenceVKdMM1I (D, D, D, D);
extern _KLsimple_methodGVKe KvectorVKd;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
D Kget_application_filenameYcommon_dylan_internalsVcommon_dylanI ();
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern int getpid ();
extern int getpid ();

/* Defined object declarations */

D Kformat_outYsimple_ioVcommon_dylanI (D, D);
extern _KLkeyword_methodGVKe Kwrite_consoleYcommon_dylan_internalsVcommon_dylan;
D Kwrite_consoleYcommon_dylan_internalsVcommon_dylanI (D string_, D Urest_, D Uend_, D stream_);
D Kdefault_random_seedYcommon_dylan_internalsVcommon_dylanI ();
static _KLunionGVKe K5;
static _KLsymbolGVKd KJstandard_output_;
static _KLsymbolGVKd KJstandard_error_;
static _KLsimple_methodGVKe Kinteger_as_rawF10;
static D Kinteger_as_rawF10I (D x_);
static _KLsignatureGVKe K11;
static _KLbyte_stringGVKd_14 K12;
static _KLbyte_stringGVKd_15 K13;
static _KLsingletonGVKd K14;
static _KLsingletonGVKd K15;
static _KLkeyword_signatureGVKe K16;
static _KLsimple_object_vectorGVKd_4 K17;
static _KLsymbolGVKd KJstream_;
static _KLbyte_stringGVKd_6 K19;
static _KLsimple_object_vectorGVKd_2 K20;
static _KLsimple_object_vectorGVKd_2 K21;
static D Kinteger_as_rawF23I (D x_);
extern _KLsimple_methodGVKe Ktokenize_command_lineYcommon_extensionsVcommon_dylan;
D Ktokenize_command_lineYcommon_extensionsVcommon_dylanI (D);
static _KLsimple_closure_methodGVKi_0 Knext_tokenF28;
static D Knext_tokenF28I (D, D, D);
static _KLpairGVKd K29;
static _KLunionGVKe K30;
static _KLsingletonGVKd K31;
static _KLsignatureAvaluesGVKi K32;
static _KLsimple_object_vectorGVKd_3 K33;
static _KLsimple_object_vectorGVKd_1 K34;
static _KLsignatureAvaluesArest_valueGVKi K35;
extern _KLsimple_methodGVKe Kapplication_argumentsYcommon_extensionsVcommon_dylan;
D Kapplication_argumentsYcommon_extensionsVcommon_dylanI ();
static _KLsignatureAvaluesGVKi K38;
extern _KLsimple_methodGVKe Kapplication_filenameYcommon_extensionsVcommon_dylan;
D Kapplication_filenameYcommon_extensionsVcommon_dylanI ();
static _KLsignatureAvaluesGVKi K41;
extern _KLsimple_methodGVKe Kapplication_nameYcommon_extensionsVcommon_dylan;
D Kapplication_nameYcommon_extensionsVcommon_dylanI ();
static _KLsignatureAvaluesGVKi K44;
extern _KLsimple_methodGVKe Kformat_outYsimple_ioVcommon_dylan;
static _KLsignatureGVKe K46;

/* Indirection variables */

static D IKJstandard_output_ = &KJstandard_output_;
static D IKJstandard_error_ = &KJstandard_error_;
static D IKJstream_ = &KJstream_;

/* Variables */

D format_outYsimple_ioVcommon_dylan = &Kformat_outYsimple_ioVcommon_dylan;
D write_consoleYcommon_dylan_internalsVcommon_dylan = &Kwrite_consoleYcommon_dylan_internalsVcommon_dylan;
D Ttime_bufferTYcommon_dylan_internalsVcommon_dylan = &KPunboundVKi;
D application_nameYcommon_extensionsVcommon_dylan = &Kapplication_nameYcommon_extensionsVcommon_dylan;
D application_filenameYcommon_extensionsVcommon_dylan = &Kapplication_filenameYcommon_extensionsVcommon_dylan;
D application_argumentsYcommon_extensionsVcommon_dylan = &Kapplication_argumentsYcommon_extensionsVcommon_dylan;
D tokenize_command_lineYcommon_extensionsVcommon_dylan = &Ktokenize_command_lineYcommon_extensionsVcommon_dylan;
D Tapplication_nameTYcommon_dylan_internalsVcommon_dylan = &KPfalseVKi;
D Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = &KPfalseVKi;
D Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan = &KPempty_vectorVKi;

/* Objects */

_KLkeyword_methodGVKe Kwrite_consoleYcommon_dylan_internalsVcommon_dylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K16,
  &key_mep_4,
  &Kwrite_consoleYcommon_dylan_internalsVcommon_dylanI,
  &K17
};

static _KLunionGVKe K5 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K14,
  &K15
};

static _KLsymbolGVKd KJstandard_output_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K13
};

static _KLsymbolGVKd KJstandard_error_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K12
};

static _KLsimple_methodGVKe Kinteger_as_rawF10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K11,
  &Kinteger_as_rawF10I
};

static _KLsignatureGVKe K11 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_14 K12 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "standard-error"
};

static _KLbyte_stringGVKd_15 K13 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "standard-output"
};

static _KLsingletonGVKd K14 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJstandard_output_
};

static _KLsingletonGVKd K15 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJstandard_error_
};

static _KLkeyword_signatureGVKe K16 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &KDsignature_LstringG_typesVKi,
  &K20,
  &K21
};

static _KLsimple_object_vectorGVKd_4 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJend_,
  &KPfalseVKi,
  &KJstream_,
  &KJstandard_output_
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K19
};

static _KLbyte_stringGVKd_6 K19 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLsimple_object_vectorGVKd_2 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJend_,
  &KJstream_
};

static _KLsimple_object_vectorGVKd_2 K21 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &K5
};

_KLsimple_methodGVKe Ktokenize_command_lineYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &Ktokenize_command_lineYcommon_extensionsVcommon_dylanI
};

static _KLsimple_closure_methodGVKi_0 Knext_tokenF28 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K32,
  &Knext_tokenF28I,
  (D) 1
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM0,
  &KPempty_listVKi
};

static _KLunionGVKe K30 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K31,
  &KLbyte_stringGVKd
};

static _KLsingletonGVKd K31 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K32 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K33,
  &K34
};

static _KLsimple_object_vectorGVKd_3 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K30
};

static _KLsignatureAvaluesArest_valueGVKi K35 = {
  &KLsignatureAvaluesArest_valueGVKiW /* wrapper */,
  (D) 35652613,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KLbyte_stringGVKd
};

_KLsimple_methodGVKe Kapplication_argumentsYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K38,
  &Kapplication_argumentsYcommon_extensionsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K38 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kapplication_filenameYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K41,
  &Kapplication_filenameYcommon_extensionsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K41 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &K34
};

_KLsimple_methodGVKe Kapplication_nameYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K44,
  &Kapplication_nameYcommon_extensionsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K44 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_Lbyte_stringG_typesVKi
};

_KLsimple_methodGVKe Kformat_outYsimple_ioVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K46,
  &Kformat_outYsimple_ioVcommon_dylanI
};

static _KLsignatureGVKe K46 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991621,
  &KDsignature_LstringG_typesVKi
};

/* Code */

D Kformat_outYsimple_ioVcommon_dylanI (D format_string_, D format_arguments_) {
  D T3;
  D T4;
  D T5;
  D T6;
  DBSTR T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:9
  T3 = primitive_copy_vector(format_arguments_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:10
  T4 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(format_string_, T3);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(T4);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  primitive_type_check(T5, &KLintegerGVKd);
  T10 = T5;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T12 = primitive_cast_integer_as_raw(T10);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T6 = Kinteger_as_rawF23I((D) 5);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T7 = primitive_string_as_raw(T4);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T11 = primitive_machine_word_shift_right(T12,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  write(T6, T7, T11);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T8 = Kinteger_as_rawF23I((D) 5);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  fsync(T8);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T9 = &KPfalseVKi;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:9
  MV_SET_COUNT(0);
  return(T9);
}

D Kwrite_consoleYcommon_dylan_internalsVcommon_dylanI (D string_, D Urest_, D Uend_, D stream_) {
  D streamF5;
  D T6;
  D streamF7;
  D T8;
  DWORD T9;
  D T10;
  DBSTR T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:14
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:14
  primitive_type_check(stream_, &K5);
  streamF5 = stream_;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
  T14 = primitive_idQ(streamF5,IKJstandard_output_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
  if (T14 != &KPfalseVKi) {
    streamF7 = (D) 5;
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:21
    T15 = primitive_idQ(streamF5,IKJstandard_error_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
    if (T15 != &KPfalseVKi) {
      T6 = (D) 9;
    } else {
      T6 = &KPfalseVKi;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
    streamF7 = T6;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
  if (Uend_ != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
    primitive_type_check(Uend_, &KLintegerGVKd);
    T16 = Uend_;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
    T19 = primitive_cast_integer_as_raw(T16);
    T9 = T19;
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T8 = CONGRUENT_CALL1(string_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
    primitive_type_check(T8, &KLintegerGVKd);
    T17 = T8;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
    T20 = primitive_cast_integer_as_raw(T17);
    T9 = T20;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
  T10 = CALL1(&Kinteger_as_rawF10, streamF7);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
  T11 = primitive_string_as_raw(string_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
  T18 = primitive_machine_word_shift_right(T9,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:25
  write(T10, T11, T18);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:32
  T12 = CALL1(&Kinteger_as_rawF10, streamF7);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:31
  fsync(T12);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:31
  T13 = &KPfalseVKi;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:14
  MV_SET_COUNT(0);
  return(T13);
}

D Kdefault_random_seedYcommon_dylan_internalsVcommon_dylanI () {
  D T0;
  DBSTR T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8;
  DWORD T9;
  D T10;
  DBCHR T11;
  D T12;
  DBCHR T13;
  DWORD T14;
  DWORD T15;
  DSINT T16;
  D T17_0;
  D T18;
  DWORD T19;
  D T20;
  DBCHR T21;
  D T22;
  DBCHR T23;
  DWORD T24;
  DSINT T25;
  D shiftF26;
  D T27;
  D T28;
  D T29;
  DWORD mxF30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  D T42_0;
  D T43;
  DWORD T44;
  D T45;
  DBCHR T46;
  D T47;
  DBCHR T48;
  DWORD T49;
  DSINT T50;
  D shiftF51;
  D T52;
  D T53;
  D T54;
  DWORD mxF55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  D T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  DWORD T68;
  D T69_0;
  D T70;
  DWORD T71;
  D T72;
  DBCHR T73;
  D T74;
  DBCHR T75;
  DWORD T76;
  DSINT T77;
  DWORD T78;
  D T79;
  D T80_0;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:40
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:43
  T0 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:43
  T1 = primitive_string_as_raw(T0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:43
  T2 = primitive_cast_raw_as_pointer(T1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:41
  time(T2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T3 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T8 = SLOT_VALUE_INITD(T3, 0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T9 = primitive_cast_integer_as_raw(T8);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T10 = primitive_machine_word_unsigned_less_thanQ(1,T9);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  if (T10 != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
    T11 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T3, 1, 1);
    T13 = T11;
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
    T7_0 = Kelement_range_errorVKeI(T3, (D) 1);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
    T12 = T7_0;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
    T16 = primitive_byte_character_as_raw(T12);
    T13 = T16;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T14 = primitive_machine_word_shift_left_signal_overflow(T13,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T15 = primitive_machine_word_logior(T14,1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T4 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T18 = SLOT_VALUE_INITD(T4, 0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T19 = primitive_cast_integer_as_raw(T18);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T20 = primitive_machine_word_unsigned_less_thanQ(5,T19);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  if (T20 != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T21 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T4, 1, 5);
    T23 = T21;
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T17_0 = Kelement_range_errorVKeI(T4, (D) 5);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T22 = T17_0;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T25 = primitive_byte_character_as_raw(T22);
    T23 = T25;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T24 = primitive_machine_word_shift_left_signal_overflow(T23,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  shiftF26 = (D) 33;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  mxF30 = T24;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T29 = shiftF26;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T33 = primitive_cast_integer_as_raw(T29);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T34 = primitive_machine_word_equalQ(T33,129);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  if (T34 != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    shiftF26 = (D) 65;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T28 = shiftF26;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T32 = mxF30;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T37 = primitive_cast_integer_as_raw(T28);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T36 = primitive_machine_word_shift_right(T37,2);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T35 = primitive_machine_word_shift_left_signal_overflow(T32,T36);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    mxF30 = T35;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T27 = shiftF26;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T31 = mxF30;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T40 = primitive_cast_integer_as_raw(T27);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T39 = primitive_machine_word_shift_right(T40,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T38 = primitive_machine_word_shift_left_signal_overflow(T31,T39);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T41 = primitive_machine_word_logior(T38,1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T5 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T43 = SLOT_VALUE_INITD(T5, 0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T44 = primitive_cast_integer_as_raw(T43);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T45 = primitive_machine_word_unsigned_less_thanQ(9,T44);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  if (T45 != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T46 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T5, 1, 9);
    T48 = T46;
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T42_0 = Kelement_range_errorVKeI(T5, (D) 9);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T47 = T42_0;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T50 = primitive_byte_character_as_raw(T47);
    T48 = T50;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T49 = primitive_machine_word_shift_left_signal_overflow(T48,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  shiftF51 = (D) 65;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  mxF55 = T49;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T54 = shiftF51;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T58 = primitive_cast_integer_as_raw(T54);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T59 = primitive_machine_word_equalQ(T58,129);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  if (T59 != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    shiftF51 = (D) 65;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T53 = shiftF51;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T57 = mxF55;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T62 = primitive_cast_integer_as_raw(T53);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T61 = primitive_machine_word_shift_right(T62,2);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T60 = primitive_machine_word_shift_left_signal_overflow(T57,T61);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    mxF55 = T60;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T52 = shiftF51;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T56 = mxF55;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T65 = primitive_cast_integer_as_raw(T52);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T64 = primitive_machine_word_shift_right(T65,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T63 = primitive_machine_word_shift_left_signal_overflow(T56,T64);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T66 = primitive_machine_word_logior(T63,1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T67 = primitive_machine_word_logior(T15,T41);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T68 = primitive_machine_word_logior(T67,T66);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T6 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T70 = SLOT_VALUE_INITD(T6, 0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T71 = primitive_cast_integer_as_raw(T70);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T72 = primitive_machine_word_unsigned_less_thanQ(13,T71);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  if (T72 != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
    T73 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T6, 1, 13);
    T75 = T73;
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
    T69_0 = Kelement_range_errorVKeI(T6, (D) 13);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
    T74 = T69_0;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
    T77 = primitive_byte_character_as_raw(T74);
    T75 = T77;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T76 = primitive_machine_word_shift_left_signal_overflow(T75,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T78 = primitive_machine_word_add_signal_overflow(T68,T76);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T79 = primitive_cast_raw_as_integer(T78);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T80_0 = T79;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:40
  MV_SET_COUNT(1);
  return(T80_0);
}

static D Kinteger_as_rawF10I (D x_) {
  DWORD T1;
  DWORD T2;
  DWORD T3;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T3 = primitive_cast_integer_as_raw(x_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T2 = primitive_machine_word_shift_right(T3,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T1 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  return(T1);
}

static D Kinteger_as_rawF23I (D x_) {
  DWORD T1;
  DWORD T2;
  DWORD T3;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  T3 = primitive_cast_integer_as_raw(x_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  T2 = primitive_machine_word_shift_right(T3,2);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  T1 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  return(T1);
}

D Ktokenize_command_lineYcommon_extensionsVcommon_dylanI (D line_) {
  D T2;
  D tokenF3;
  D T4;
  D T5;
  D T6_0;
  D T6;
  D T7_0;
  D T7;
  D tokens_;
  D T9;
  D T10;
  D Ustart_;
  D T12;
  D T13;
  D T14_0;
  D tokenF15;
  DWORD T16;
  DWORD T17;
  D T18;
  _KLsimple_object_vectorGVKd_1 T19 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:119
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:121
  tokens_ = &KPempty_listVKi;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:122
  Ustart_ = MAKE_D_CELL((D) 1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:123
  T13 = SLOT_VALUE_INITD(line_, 0);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:124
  T14_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:124
  tokenF15 = T14_0;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:125
  T2 = MAKE_CLOSURE_INITD(&Knext_tokenF28, 1, Ustart_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
L0: ;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    T12 = GET_D_CELL_VAL(Ustart_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    T16 = primitive_cast_integer_as_raw(T12);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    T17 = primitive_cast_integer_as_raw(T13);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    T18 = primitive_machine_word_less_thanQ(T16,T17);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    if (T18 != &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:159
      get_teb()->function = T2;
      tokenF3 = Knext_tokenF28I(tokenF15, T13, line_);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:160
      if (tokenF3 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:161
        T10 = tokens_;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:161
        CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
        T4 = CONGRUENT_CALL2(T10, tokenF3);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:161
        tokens_ = T4;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:160
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
      goto L0;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:164
  T9 = tokens_;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:164
  T5 = CALL1(&KreverseXVKd, T9);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:164
  T19.vector_element_[0] = T5;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:164
  T6_0 = KapplyVKdI(&KvaluesVKd, &T19);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:119
  T7_0 = MV_CHECK_TYPE_REST(T6_0, &KLbyte_stringGVKd, 1, &KLbyte_stringGVKd);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:119
  return(T7_0);
}

static D Knext_tokenF28I (D token_, D implicit_argument_, D line_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D escapedQ_;
  D T10;
  D quotedQ_;
  D T12;
  D T13;
  D doneQ_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D UstartF22;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30_0;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DBCHR T35;
  D T36;
  DBCHR T37;
  D UtmpF38;
  D T39;
  DWORD T40;
  DWORD T41;
  DSINT T42;
  D T43;
  DWORD T44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  D T49;
  DWORD T50;
  DWORD T51;
  D T52;
  DWORD T53;
  DWORD T54;
  D T55;
  DWORD T56;
  D T57;
  D T58;
  D T59_0;
  D T60;
  DWORD T61;
  DWORD T62;
  D T63;
  DBCHR T64;
  D T65;
  DBCHR T66;
  D UtmpF67;
  D T68;
  DWORD T69;
  DWORD T70;
  DSINT T71;
  D T72;
  D T73;
  DWORD T74;
  DWORD T75;
  D T76;
  DWORD T77;
  DWORD T78;
  D T79;
  DWORD T80;
  DWORD T81;
  D T82;
  DWORD T83;
  DWORD T84;
  D T85;
  DWORD T86;
  DWORD T87;
  D T88;
  D UtmpF89;
  D T90;
  DWORD T91;
  DWORD T92;
  D T93;
  DWORD T94;
  DWORD T95;
  D T96;
  DWORD T97;
  DWORD T98;
  D T99;
  DWORD T100;
  DWORD T101;
  D T102;
  D T103_0;
  D T104_0;
  CAPTURE_ENVIRONMENT

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:125
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  T20 = GET_D_CELL_VAL(CREF(0));
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  UstartF22 = T20;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
L0: ;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    T25 = UstartF22;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    T27 = primitive_cast_integer_as_raw(T25);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    T28 = primitive_cast_integer_as_raw(implicit_argument_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    T29 = primitive_machine_word_less_thanQ(T27,T28);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    if (T29 != &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T24 = UstartF22;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T31 = SLOT_VALUE_INITD(line_, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T32 = primitive_cast_integer_as_raw(T24);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T33 = primitive_cast_integer_as_raw(T31);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T34 = primitive_machine_word_unsigned_less_thanQ(T32,T33);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      if (T34 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T35 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(line_, 1, T32);
        T37 = T35;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T30_0 = Kelement_range_errorVKeI(line_, T24);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T36 = T30_0;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T42 = primitive_byte_character_as_raw(T36);
        T37 = T42;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T40 = primitive_machine_word_shift_left_signal_overflow(T37,2);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T41 = primitive_machine_word_logior(T40,1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T43 = primitive_machine_word_equalQ(T41,129);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      if (T43 != &KPfalseVKi) {
        UtmpF38 = T43;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T44 = primitive_machine_word_shift_left_signal_overflow(T37,2);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T45 = primitive_machine_word_logior(T44,1);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T46 = primitive_machine_word_equalQ(T45,37);
        UtmpF38 = T46;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      if (UtmpF38 != &KPfalseVKi) {
        T39 = UtmpF38;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T47 = primitive_machine_word_shift_left_signal_overflow(T37,2);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T48 = primitive_machine_word_logior(T47,1);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T49 = primitive_machine_word_equalQ(T48,41);
        T39 = T49;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T21 = T39;
    } else {
      T21 = &KPfalseVKi;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    if (T21 != &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T26 = UstartF22;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T50 = primitive_cast_integer_as_raw(T26);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T51 = primitive_machine_word_add_signal_overflow(T50,4);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T52 = primitive_cast_raw_as_integer(T51);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      UstartF22 = T52;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      goto L0;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  T23 = UstartF22;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  SET_D_CELL_VAL(CREF(0), T23);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  T19 = GET_D_CELL_VAL(CREF(0));
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  T53 = primitive_cast_integer_as_raw(T19);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  T54 = primitive_cast_integer_as_raw(implicit_argument_);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  T55 = primitive_machine_word_less_thanQ(T53,T54);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  if (T55 != &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:128
    escapedQ_ = &KPfalseVKi;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:129
    quotedQ_ = &KPfalseVKi;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:130
    doneQ_ = &KPfalseVKi;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:131
    Ksize_setterVKdMM1I((D) 1, token_);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
  L1: ;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      T16 = GET_D_CELL_VAL(CREF(0));
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      T56 = primitive_cast_integer_as_raw(T16);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      T57 = primitive_machine_word_less_thanQ(T56,T54);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      if (T57 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
        T15 = doneQ_;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
        T58 = primitive_not(T15);
        T6 = T58;
      } else {
        T6 = &KPfalseVKi;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      if (T6 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T18 = GET_D_CELL_VAL(CREF(0));
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T60 = SLOT_VALUE_INITD(line_, 0);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T61 = primitive_cast_integer_as_raw(T18);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T62 = primitive_cast_integer_as_raw(T60);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T63 = primitive_machine_word_unsigned_less_thanQ(T61,T62);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        if (T63 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
          T64 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(line_, 1, T61);
          T66 = T64;
        } else {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
          T59_0 = Kelement_range_errorVKeI(line_, T18);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
          T65 = T59_0;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
          T71 = primitive_byte_character_as_raw(T65);
          T66 = T71;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
        T72 = primitive_raw_as_byte_character(T66);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
        T10 = escapedQ_;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
        if (T10 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:136
          KaddXVKdMM3I(token_, T72);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:137
          escapedQ_ = &KPfalseVKi;
        } else {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
          T13 = quotedQ_;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
          if (T13 != &KPfalseVKi) {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            T69 = primitive_machine_word_shift_left_signal_overflow(T66,2);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            T70 = primitive_machine_word_logior(T69,1);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            T73 = primitive_machine_word_equalQ(T70,129);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            if (T73 != &KPfalseVKi) {
              UtmpF67 = T73;
            } else {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T74 = primitive_machine_word_shift_left_signal_overflow(T66,2);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T75 = primitive_machine_word_logior(T74,1);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T76 = primitive_machine_word_equalQ(T75,37);
              UtmpF67 = T76;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            if (UtmpF67 != &KPfalseVKi) {
              T68 = UtmpF67;
            } else {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T77 = primitive_machine_word_shift_left_signal_overflow(T66,2);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T78 = primitive_machine_word_logior(T77,1);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T79 = primitive_machine_word_equalQ(T78,41);
              T68 = T79;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            T3 = T68;
          } else {
            T3 = &KPfalseVKi;
          }
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
          if (T3 != &KPfalseVKi) {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:139
            KaddXVKdMM3I(token_, T72);
          } else {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:140
            T12 = quotedQ_;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:140
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T4 = CONGRUENT_CALL2(T12, T72);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
            if (T4 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:141
              quotedQ_ = &KPfalseVKi;
            } else {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:142
              T80 = primitive_machine_word_shift_left_signal_overflow(T66,2);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:142
              T81 = primitive_machine_word_logior(T80,1);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:142
              T82 = primitive_machine_word_equalQ(T81,369);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
              if (T82 != &KPfalseVKi) {
                // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:143
                escapedQ_ = &KPtrueVKi;
              } else {
                // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                T83 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                T84 = primitive_machine_word_logior(T83,1);
                // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                T85 = primitive_machine_word_equalQ(T84,137);
                // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                if (T85 != &KPfalseVKi) {
                  T5 = T85;
                } else {
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                  T86 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                  T87 = primitive_machine_word_logior(T86,1);
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                  T88 = primitive_machine_word_equalQ(T87,157);
                  T5 = T88;
                }
                // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
                if (T5 != &KPfalseVKi) {
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:145
                  quotedQ_ = T72;
                } else {
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  T91 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  T92 = primitive_machine_word_logior(T91,1);
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  T93 = primitive_machine_word_equalQ(T92,129);
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  if (T93 != &KPfalseVKi) {
                    UtmpF89 = T93;
                  } else {
                    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T94 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T95 = primitive_machine_word_logior(T94,1);
                    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T96 = primitive_machine_word_equalQ(T95,37);
                    UtmpF89 = T96;
                  }
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  if (UtmpF89 != &KPfalseVKi) {
                    T90 = UtmpF89;
                  } else {
                    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T97 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T98 = primitive_machine_word_logior(T97,1);
                    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T99 = primitive_machine_word_equalQ(T98,41);
                    T90 = T99;
                  }
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
                  if (T90 != &KPfalseVKi) {
                    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:147
                    doneQ_ = &KPtrueVKi;
                  } else {
                    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:149
                    KaddXVKdMM3I(token_, T72);
                  }
                  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
                }
                // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
              }
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
          }
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        T17 = GET_D_CELL_VAL(CREF(0));
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        T100 = primitive_cast_integer_as_raw(T17);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        T101 = primitive_machine_word_add_signal_overflow(T100,4);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        T102 = primitive_cast_raw_as_integer(T101);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        SET_D_CELL_VAL(CREF(0), T102);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
        goto L1;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:153
    MIEP_CALL_PROLOG(&K29);
    T103_0 = Kconcatenate_asVKdMM1I(&KLbyte_stringGVKd, token_, &KPempty_vectorVKi);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:153
    T104_0 = T103_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T103_0);
      primitive_type_check(T104_0, &K30);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T8_0 = T104_0;
  } else {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:155
    T7_0 = &KPfalseVKi;
    T8_0 = T7_0;
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:125
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kapplication_argumentsYcommon_extensionsVcommon_dylanI () {
  D T0;
  D T1_0;
  D T2;
  D cmdlineF3;
  D argumentsF4;
  D T5;
  D T6;
  int T7;
  D cmdlineF8;
  DBSTR T9;
  D T10;
  int T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32T, T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38_0;
  D T38_1;
  D Ustart_;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D tokenF48;
  D T49;
  D T50;
  D T51;
  D nameF52;
  D T53;
  D T54;
  D T55;
  DWORD T56;
  DWORD T57;
  D T58;
  _KLsimple_object_vectorGVKd_3 T59 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T60;
  DWORD T61;
  DWORD T62;
  D T63_0;
  D tokens_;
  D T65;
  D T66;
  D T67;
  DWORD T68;
  DWORD T69;
  D T70;
  D tokenF71;
  D T72;
  D T73;
  D T74_0;
  D T75;
  D T76;
  DWORD T77;
  D T78;
  D T79;
  D T80;
  D T81;
  D nameF82;
  D T83_0;
  D T84;
  D T85;
  DWORD T86;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92;
  DWORD T93;
  D T94;
  D T95;
  _KLsimple_object_vectorGVKd_1 T96 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T97_0;
  D T97_1;
  D T98_0;
  D T98_1;
  D T99_0;
  D T99_1;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:96
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  T2 = Tapplication_nameTYcommon_dylan_internalsVcommon_dylan;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  if (T2 == &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T7 = getpid();
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T56 = primitive_machine_word_shift_left_signal_overflow(T7,2);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T57 = primitive_machine_word_logior(T56,1);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T58 = primitive_cast_raw_as_integer(T57);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T59.vector_element_[0] = (D) 5;
    T59.vector_element_[1] = (D) 197;
    T59.vector_element_[2] = T58;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T60 = primitive_copy_vector(&T59);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    cmdlineF8 = Kdarwin_sysctlYcommon_dylan_internalsVcommon_dylanI(T60);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    if (cmdlineF8 != &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T55 = cmdlineF8;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T9 = primitive_string_as_raw(T55);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T10 = primitive_cast_raw_as_pointer(T9);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T11 = primitive_c_signed_int_at(T10,0,0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T61 = primitive_machine_word_shift_left_signal_overflow(T11,2);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T62 = primitive_machine_word_logior(T61,1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T63_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      tokens_ = T63_0;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      Ustart_ = (D) 17;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T65 = SLOT_VALUE_INITD(T55, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    L0: ;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T40 = Ustart_;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T24 = CONGRUENT_CALL2(T40, T65);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        if (T24 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T66 = SLOT_VALUE_INITD(tokens_, 0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T67 = SLOT_VALUE_INITD(T66, 0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T68 = primitive_machine_word_add_signal_overflow(T62,4);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T69 = primitive_cast_integer_as_raw(T67);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T70 = primitive_machine_word_less_thanQ(T69,T68);
          T25 = T70;
        } else {
          T25 = &KPfalseVKi;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        if (T25 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        L1: ;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T46 = Ustart_;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T13 = CONGRUENT_CALL2(T46, T65);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            if (T13 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T45 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T14 = CONGRUENT_CALL3(T55, T45, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T15 = CONGRUENT_CALL2(T14, C('\x0'));
              T16 = T15;
            } else {
              T16 = &KPfalseVKi;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            if (T16 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T47 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T12 = CONGRUENT_CALL2(T47, (D) 5);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              Ustart_ = T12;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              goto L1;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          tokenF71 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          tokenF48 = tokenF71;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        L2: ;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T42 = Ustart_;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T20 = CONGRUENT_CALL2(T42, T65);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            if (T20 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T41 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T21 = CONGRUENT_CALL3(T55, T41, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T72 = CONGRUENT_CALL2(T21, C('\x0'));
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T73 = primitive_not(T72);
              T22 = T73;
            } else {
              T22 = &KPfalseVKi;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            if (T22 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T44 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T17 = CONGRUENT_CALL3(T55, T44, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T51 = tokenF48;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
              T18 = CONGRUENT_CALL2(T51, T17);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              tokenF48 = T18;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T43 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T19 = CONGRUENT_CALL2(T43, (D) 5);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              Ustart_ = T19;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              goto L2;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T50 = tokenF48;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
          T23 = CONGRUENT_CALL1(T50);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          if (T23 == &KPfalseVKi) {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T49 = tokenF48;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            KaddXVKdMM3I(tokens_, T49);
          }
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          goto L0;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T75 = SLOT_VALUE_INITD(tokens_, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T76 = SLOT_VALUE_INITD(T75, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T77 = primitive_cast_integer_as_raw(T76);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T78 = primitive_machine_word_unsigned_less_thanQ(1,T77);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      if (T78 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T79 = REPEATED_D_SLOT_VALUE_TAGGED(T75, 2, 1);
        T81 = T79;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T74_0 = Kelement_range_errorVKeI(tokens_, (D) 1);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T80 = T74_0;
        T81 = T80;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T81;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      nameF82 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      nameF52 = nameF82;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T84 = SLOT_VALUE_INITD(tokens_, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T85 = SLOT_VALUE_INITD(T84, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T86 = primitive_cast_integer_as_raw(T85);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T87 = primitive_machine_word_unsigned_less_thanQ(5,T86);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      if (T87 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T88 = REPEATED_D_SLOT_VALUE_TAGGED(T84, 2, 5);
        T90 = T88;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T83_0 = Kelement_range_errorVKeI(tokens_, (D) 5);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T89 = T83_0;
        T90 = T89;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T26 = CALL1(&Kforward_iteration_protocolVKd, T90);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T27 = T26;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T28 = MV_GET_ELT(1);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T29 = MV_GET_ELT(2);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T30 = MV_GET_ELT(3);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T31 = MV_GET_ELT(5);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T32T = T27;
    L3: ;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T32 = T32T;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T33 = CALL3(T30, T90, T32, T28);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        if (T33 == &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T34 = CALL2(T31, T90, T32);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T91 = primitive_idQ(T34,C('/'));
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          if (T91 != &KPfalseVKi) {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T92 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            nameF52 = T92;
          } else {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T54 = nameF52;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
            T35 = CONGRUENT_CALL2(T54, T34);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            nameF52 = T35;
          }
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T36 = CALL2(T29, T90, T32);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T32T = T36;
          goto L3;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T93 = primitive_machine_word_add_signal_overflow(T62,4);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T94 = primitive_cast_raw_as_integer(T93);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T95 = Kcopy_sequenceVKdMM1I(tokens_, &KPempty_vectorVKi, (D) 9, T94);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T96.vector_element_[0] = T95;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T37 = KapplyVKdI(&KvectorVKd, &T96);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T53 = nameF52;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T97_0 = T53;
      T97_1 = T37;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T99_0 = T97_0;
      T99_1 = T97_1;
      {
        MV_CHECK_TYPE_PROLOGUE(T97_0);
        primitive_type_check(T99_0, &KLstringGVKd);
        primitive_type_check(T99_1, &KLsimple_object_vectorGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T38_0 = T99_0;
      T38_1 = T99_1;
    } else {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T98_0 = &KPempty_stringVKi;
      T98_1 = &KPempty_vectorVKi;
      T38_0 = T98_0;
      T38_1 = T98_1;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    cmdlineF3 = T38_0;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    argumentsF4 = T38_1;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    Tapplication_nameTYcommon_dylan_internalsVcommon_dylan = cmdlineF3;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan = argumentsF4;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T5 = Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    if (T5 == &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T6 = Kget_application_filenameYcommon_dylan_internalsVcommon_dylanI();
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T6;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:98
  T0 = Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:98
  T1_0 = T0;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:96
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kapplication_filenameYcommon_extensionsVcommon_dylanI () {
  D T0;
  D T1_0;
  D T2;
  D cmdlineF3;
  D argumentsF4;
  D T5;
  D T6;
  int T7;
  D cmdlineF8;
  DBSTR T9;
  D T10;
  int T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32T, T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38_0;
  D T38_1;
  D Ustart_;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D tokenF48;
  D T49;
  D T50;
  D T51;
  D nameF52;
  D T53;
  D T54;
  D T55;
  DWORD T56;
  DWORD T57;
  D T58;
  _KLsimple_object_vectorGVKd_3 T59 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T60;
  DWORD T61;
  DWORD T62;
  D T63_0;
  D tokens_;
  D T65;
  D T66;
  D T67;
  DWORD T68;
  DWORD T69;
  D T70;
  D tokenF71;
  D T72;
  D T73;
  D T74_0;
  D T75;
  D T76;
  DWORD T77;
  D T78;
  D T79;
  D T80;
  D T81;
  D nameF82;
  D T83_0;
  D T84;
  D T85;
  DWORD T86;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92;
  DWORD T93;
  D T94;
  D T95;
  _KLsimple_object_vectorGVKd_1 T96 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T97_0;
  D T97_1;
  D T98_0;
  D T98_1;
  D T99_0;
  D T99_1;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:91
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  T2 = Tapplication_nameTYcommon_dylan_internalsVcommon_dylan;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  if (T2 == &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T7 = getpid();
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T56 = primitive_machine_word_shift_left_signal_overflow(T7,2);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T57 = primitive_machine_word_logior(T56,1);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T58 = primitive_cast_raw_as_integer(T57);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T59.vector_element_[0] = (D) 5;
    T59.vector_element_[1] = (D) 197;
    T59.vector_element_[2] = T58;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T60 = primitive_copy_vector(&T59);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    cmdlineF8 = Kdarwin_sysctlYcommon_dylan_internalsVcommon_dylanI(T60);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    if (cmdlineF8 != &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T55 = cmdlineF8;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T9 = primitive_string_as_raw(T55);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T10 = primitive_cast_raw_as_pointer(T9);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T11 = primitive_c_signed_int_at(T10,0,0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T61 = primitive_machine_word_shift_left_signal_overflow(T11,2);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T62 = primitive_machine_word_logior(T61,1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T63_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      tokens_ = T63_0;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      Ustart_ = (D) 17;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T65 = SLOT_VALUE_INITD(T55, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    L0: ;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T40 = Ustart_;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T24 = CONGRUENT_CALL2(T40, T65);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        if (T24 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T66 = SLOT_VALUE_INITD(tokens_, 0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T67 = SLOT_VALUE_INITD(T66, 0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T68 = primitive_machine_word_add_signal_overflow(T62,4);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T69 = primitive_cast_integer_as_raw(T67);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T70 = primitive_machine_word_less_thanQ(T69,T68);
          T25 = T70;
        } else {
          T25 = &KPfalseVKi;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        if (T25 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        L1: ;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T46 = Ustart_;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T13 = CONGRUENT_CALL2(T46, T65);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            if (T13 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T45 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T14 = CONGRUENT_CALL3(T55, T45, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T15 = CONGRUENT_CALL2(T14, C('\x0'));
              T16 = T15;
            } else {
              T16 = &KPfalseVKi;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            if (T16 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T47 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T12 = CONGRUENT_CALL2(T47, (D) 5);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              Ustart_ = T12;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              goto L1;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          tokenF71 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          tokenF48 = tokenF71;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        L2: ;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T42 = Ustart_;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T20 = CONGRUENT_CALL2(T42, T65);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            if (T20 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T41 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T21 = CONGRUENT_CALL3(T55, T41, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T72 = CONGRUENT_CALL2(T21, C('\x0'));
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T73 = primitive_not(T72);
              T22 = T73;
            } else {
              T22 = &KPfalseVKi;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            if (T22 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T44 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T17 = CONGRUENT_CALL3(T55, T44, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T51 = tokenF48;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
              T18 = CONGRUENT_CALL2(T51, T17);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              tokenF48 = T18;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T43 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T19 = CONGRUENT_CALL2(T43, (D) 5);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              Ustart_ = T19;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              goto L2;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T50 = tokenF48;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
          T23 = CONGRUENT_CALL1(T50);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          if (T23 == &KPfalseVKi) {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T49 = tokenF48;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            KaddXVKdMM3I(tokens_, T49);
          }
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          goto L0;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T75 = SLOT_VALUE_INITD(tokens_, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T76 = SLOT_VALUE_INITD(T75, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T77 = primitive_cast_integer_as_raw(T76);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T78 = primitive_machine_word_unsigned_less_thanQ(1,T77);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      if (T78 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T79 = REPEATED_D_SLOT_VALUE_TAGGED(T75, 2, 1);
        T81 = T79;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T74_0 = Kelement_range_errorVKeI(tokens_, (D) 1);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T80 = T74_0;
        T81 = T80;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T81;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      nameF82 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      nameF52 = nameF82;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T84 = SLOT_VALUE_INITD(tokens_, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T85 = SLOT_VALUE_INITD(T84, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T86 = primitive_cast_integer_as_raw(T85);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T87 = primitive_machine_word_unsigned_less_thanQ(5,T86);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      if (T87 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T88 = REPEATED_D_SLOT_VALUE_TAGGED(T84, 2, 5);
        T90 = T88;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T83_0 = Kelement_range_errorVKeI(tokens_, (D) 5);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T89 = T83_0;
        T90 = T89;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T26 = CALL1(&Kforward_iteration_protocolVKd, T90);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T27 = T26;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T28 = MV_GET_ELT(1);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T29 = MV_GET_ELT(2);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T30 = MV_GET_ELT(3);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T31 = MV_GET_ELT(5);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T32T = T27;
    L3: ;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T32 = T32T;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T33 = CALL3(T30, T90, T32, T28);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        if (T33 == &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T34 = CALL2(T31, T90, T32);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T91 = primitive_idQ(T34,C('/'));
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          if (T91 != &KPfalseVKi) {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T92 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            nameF52 = T92;
          } else {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T54 = nameF52;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
            T35 = CONGRUENT_CALL2(T54, T34);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            nameF52 = T35;
          }
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T36 = CALL2(T29, T90, T32);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T32T = T36;
          goto L3;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T93 = primitive_machine_word_add_signal_overflow(T62,4);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T94 = primitive_cast_raw_as_integer(T93);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T95 = Kcopy_sequenceVKdMM1I(tokens_, &KPempty_vectorVKi, (D) 9, T94);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T96.vector_element_[0] = T95;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T37 = KapplyVKdI(&KvectorVKd, &T96);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T53 = nameF52;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T97_0 = T53;
      T97_1 = T37;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T99_0 = T97_0;
      T99_1 = T97_1;
      {
        MV_CHECK_TYPE_PROLOGUE(T97_0);
        primitive_type_check(T99_0, &KLstringGVKd);
        primitive_type_check(T99_1, &KLsimple_object_vectorGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T38_0 = T99_0;
      T38_1 = T99_1;
    } else {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T98_0 = &KPempty_stringVKi;
      T98_1 = &KPempty_vectorVKi;
      T38_0 = T98_0;
      T38_1 = T98_1;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    cmdlineF3 = T38_0;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    argumentsF4 = T38_1;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    Tapplication_nameTYcommon_dylan_internalsVcommon_dylan = cmdlineF3;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan = argumentsF4;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T5 = Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    if (T5 == &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T6 = Kget_application_filenameYcommon_dylan_internalsVcommon_dylanI();
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T6;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:93
  T0 = Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:93
  T1_0 = T0;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:91
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kapplication_nameYcommon_extensionsVcommon_dylanI () {
  D T0;
  D T1_0;
  D T2_0;
  D T3;
  D cmdlineF4;
  D argumentsF5;
  D T6;
  D T7;
  int T8;
  D cmdlineF9;
  DBSTR T10;
  D T11;
  int T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33T, T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39_0;
  D T39_1;
  D Ustart_;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D tokenF49;
  D T50;
  D T51;
  D T52;
  D nameF53;
  D T54;
  D T55;
  D T56;
  DWORD T57;
  DWORD T58;
  D T59;
  _KLsimple_object_vectorGVKd_3 T60 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T61;
  DWORD T62;
  DWORD T63;
  D T64_0;
  D tokens_;
  D T66;
  D T67;
  D T68;
  DWORD T69;
  DWORD T70;
  D T71;
  D tokenF72;
  D T73;
  D T74;
  D T75_0;
  D T76;
  D T77;
  DWORD T78;
  D T79;
  D T80;
  D T81;
  D T82;
  D nameF83;
  D T84_0;
  D T85;
  D T86;
  DWORD T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92;
  D T93;
  DWORD T94;
  D T95;
  D T96;
  _KLsimple_object_vectorGVKd_1 T97 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T98_0;
  D T98_1;
  D T99_0;
  D T99_1;
  D T100_0;
  D T100_1;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:86
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  T3 = Tapplication_nameTYcommon_dylan_internalsVcommon_dylan;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  if (T3 == &KPfalseVKi) {
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T8 = getpid();
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T57 = primitive_machine_word_shift_left_signal_overflow(T8,2);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T58 = primitive_machine_word_logior(T57,1);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T59 = primitive_cast_raw_as_integer(T58);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T60.vector_element_[0] = (D) 5;
    T60.vector_element_[1] = (D) 197;
    T60.vector_element_[2] = T59;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T61 = primitive_copy_vector(&T60);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    cmdlineF9 = Kdarwin_sysctlYcommon_dylan_internalsVcommon_dylanI(T61);
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    if (cmdlineF9 != &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T56 = cmdlineF9;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T10 = primitive_string_as_raw(T56);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T11 = primitive_cast_raw_as_pointer(T10);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T12 = primitive_c_signed_int_at(T11,0,0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T62 = primitive_machine_word_shift_left_signal_overflow(T12,2);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T63 = primitive_machine_word_logior(T62,1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T64_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      tokens_ = T64_0;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      Ustart_ = (D) 17;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T66 = SLOT_VALUE_INITD(T56, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    L0: ;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T41 = Ustart_;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T25 = CONGRUENT_CALL2(T41, T66);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        if (T25 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T67 = SLOT_VALUE_INITD(tokens_, 0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T68 = SLOT_VALUE_INITD(T67, 0);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T69 = primitive_machine_word_add_signal_overflow(T63,4);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T70 = primitive_cast_integer_as_raw(T68);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T71 = primitive_machine_word_less_thanQ(T70,T69);
          T26 = T71;
        } else {
          T26 = &KPfalseVKi;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        if (T26 != &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        L1: ;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T47 = Ustart_;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T14 = CONGRUENT_CALL2(T47, T66);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            if (T14 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T46 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T15 = CONGRUENT_CALL3(T56, T46, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T16 = CONGRUENT_CALL2(T15, C('\x0'));
              T17 = T16;
            } else {
              T17 = &KPfalseVKi;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            if (T17 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T48 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T13 = CONGRUENT_CALL2(T48, (D) 5);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              Ustart_ = T13;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              goto L1;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          tokenF72 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          tokenF49 = tokenF72;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        L2: ;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T43 = Ustart_;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T21 = CONGRUENT_CALL2(T43, T66);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            if (T21 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T42 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T22 = CONGRUENT_CALL3(T56, T42, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T73 = CONGRUENT_CALL2(T22, C('\x0'));
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T74 = primitive_not(T73);
              T23 = T74;
            } else {
              T23 = &KPfalseVKi;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            if (T23 != &KPfalseVKi) {
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T45 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
              T18 = CONGRUENT_CALL3(T56, T45, &KPempty_vectorVKi);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T52 = tokenF49;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
              T19 = CONGRUENT_CALL2(T52, T18);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              tokenF49 = T19;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T44 = Ustart_;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T20 = CONGRUENT_CALL2(T44, (D) 5);
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              Ustart_ = T20;
              // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              goto L2;
            }
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T51 = tokenF49;
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
          T24 = CONGRUENT_CALL1(T51);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          if (T24 == &KPfalseVKi) {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T50 = tokenF49;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            KaddXVKdMM3I(tokens_, T50);
          }
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          goto L0;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T76 = SLOT_VALUE_INITD(tokens_, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T77 = SLOT_VALUE_INITD(T76, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T78 = primitive_cast_integer_as_raw(T77);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T79 = primitive_machine_word_unsigned_less_thanQ(1,T78);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      if (T79 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T80 = REPEATED_D_SLOT_VALUE_TAGGED(T76, 2, 1);
        T82 = T80;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T75_0 = Kelement_range_errorVKeI(tokens_, (D) 1);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T81 = T75_0;
        T82 = T81;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T82;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      nameF83 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      nameF53 = nameF83;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T85 = SLOT_VALUE_INITD(tokens_, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T86 = SLOT_VALUE_INITD(T85, 0);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T87 = primitive_cast_integer_as_raw(T86);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T88 = primitive_machine_word_unsigned_less_thanQ(5,T87);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      if (T88 != &KPfalseVKi) {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T89 = REPEATED_D_SLOT_VALUE_TAGGED(T85, 2, 5);
        T91 = T89;
      } else {
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T84_0 = Kelement_range_errorVKeI(tokens_, (D) 5);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T90 = T84_0;
        T91 = T90;
      }
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T27 = CALL1(&Kforward_iteration_protocolVKd, T91);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T28 = T27;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T29 = MV_GET_ELT(1);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T30 = MV_GET_ELT(2);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T31 = MV_GET_ELT(3);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T32 = MV_GET_ELT(5);
;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T33T = T28;
    L3: ;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T33 = T33T;
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T34 = CALL3(T31, T91, T33, T29);
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        if (T34 == &KPfalseVKi) {
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T35 = CALL2(T32, T91, T33);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T92 = primitive_idQ(T35,C('/'));
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          if (T92 != &KPfalseVKi) {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T93 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            nameF53 = T93;
          } else {
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T55 = nameF53;
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            CONGRUENT_CALL_PROLOG(&KaddVKd, 2);
            T36 = CONGRUENT_CALL2(T55, T35);
            // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            nameF53 = T36;
          }
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T37 = CALL2(T30, T91, T33);
          // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T33T = T37;
          goto L3;
        }
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T94 = primitive_machine_word_add_signal_overflow(T63,4);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T95 = primitive_cast_raw_as_integer(T94);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T96 = Kcopy_sequenceVKdMM1I(tokens_, &KPempty_vectorVKi, (D) 9, T95);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T97.vector_element_[0] = T96;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T38 = KapplyVKdI(&KvectorVKd, &T97);
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T54 = nameF53;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T98_0 = T54;
      T98_1 = T38;
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T100_0 = T98_0;
      T100_1 = T98_1;
      {
        MV_CHECK_TYPE_PROLOGUE(T98_0);
        primitive_type_check(T100_0, &KLstringGVKd);
        primitive_type_check(T100_1, &KLsimple_object_vectorGVKd);
        MV_CHECK_TYPE_EPILOGUE();
      }
      T39_0 = T100_0;
      T39_1 = T100_1;
    } else {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T99_0 = &KPempty_stringVKi;
      T99_1 = &KPempty_vectorVKi;
      T39_0 = T99_0;
      T39_1 = T99_1;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    cmdlineF4 = T39_0;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    argumentsF5 = T39_1;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    Tapplication_nameTYcommon_dylan_internalsVcommon_dylan = cmdlineF4;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan = argumentsF5;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T6 = Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan;
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    if (T6 == &KPfalseVKi) {
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T7 = Kget_application_filenameYcommon_dylan_internalsVcommon_dylanI();
      // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T7;
    }
    // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:88
  T0 = Tapplication_nameTYcommon_dylan_internalsVcommon_dylan;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:88
  T1_0 = T0;
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:86
  T2_0 = T1_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T1_0);
    primitive_type_check(T2_0, &KLbyte_stringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:86
  MV_SET_COUNT(1);
  return(T2_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_unix_common_extensions_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstandard_output_);
    if (T0 != &KJstandard_output_) {
      primitive_repeated_slot_value_setter(T0, &K17, 1, 3);
      primitive_slot_value_setter(T0, &K14, 1);
      IKJstandard_output_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstandard_error_);
    if (T0 != &KJstandard_error_) {
      primitive_slot_value_setter(T0, &K15, 1);
      IKJstandard_error_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      primitive_repeated_slot_value_setter(T0, &K20, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K17, 1, 2);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_unix_common_extensions_for_user () {
{
  D T0;
  D T1;

  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:38
  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 17);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:37
  Ttime_bufferTYcommon_dylan_internalsVcommon_dylan = primitive_allocate_thread_variable(T1);
  // /Users/zzak/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:37
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
