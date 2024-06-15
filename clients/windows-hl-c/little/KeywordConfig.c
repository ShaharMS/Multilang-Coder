﻿// Generated by HLC 4.3.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <little/KeywordConfig.h>
#include <haxe/exceptions/ArgumentException.h>
#include <haxe/Exception.h>
#include <hl/types/ArrayDyn.h>
#include <_std/EReg.h>
extern String s$create;
extern String s$to;
extern String s$jump;
extern String s$from;
extern String s$maxSize;
extern String s$size;
extern String s$write;
extern String s$read;
extern String s$free;
extern String s$allocate;
extern String s$set;
extern String s$get;
extern String s$elementType;
extern String s$length;
extern String s$fromCharCode;
extern String s$endsWith;
extern String s$startsWith;
extern String s$lastIndexOf;
extern String s$indexOf;
extern String s$contains;
extern String s$remove;
extern String s$replace;
extern String s$charAt;
extern String s$substring;
extern String s$trim;
extern String s$toUpperCase;
extern String s$toLowerCase;
extern String s$isWhole;
extern String s$26b1722;
extern String s$336d5eb;
extern String s$206a42c;
extern String s$9033e0e;
extern String s$7e6a2af;
extern String s$6666cd7;
extern String s$3389dae;
extern String s$d3e6c58;
extern String s$7d01044;
extern String s$ea01662;
extern String s$a7eeaea;
extern String s$3a1e9b8;
extern String s$524a507;
extern String s$cedf8da;
extern String s$de0219f;
extern String s$2063849;
extern String s$5058f1a;
extern hl_type t$String;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern String s$Unknown;
extern String s$after;
extern String s$whenever;
extern String s$else;
extern String s$if;
extern String s$while;
extern String s$for;
extern String s$code;
extern String s$pattern;
extern String s$run;
extern String s$error;
extern String s$print;
extern String s$address;
extern String s$type;
extern String s$Main;
extern String s$Sign;
extern String s$Type;
extern String s$Condition;
extern String s$Action;
extern String s$Array;
extern String s$Memory;
extern String s$Object;
extern String s$Characters;
extern String s$Boolean;
extern String s$Decimal;
extern String s$Number;
extern String s$Anything;
extern String s$false;
extern String s$true;
extern String s$nothing;
extern String s$return;
extern String s$as;
extern String s$action;
extern String s$define;
extern little__$KeywordConfig g$_little_KeywordConfig;
hl__types__ArrayObj Type_getInstanceFields(hl__Class);
extern String s$defaultConfig;
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
vdynamic* Reflect_field(vdynamic*,String);
extern hl_type t$_dyn;
extern hl_type t$haxe_exceptions_ArgumentException;
extern String s$config_;
String String___add__(String,String);
extern String s$2de70f6;
extern hl_type t$vrt_329ffa8;
extern String s$src_little_KeywordConfig_hx;
extern hl_type t$_i32;
extern String s$little_KeywordConfig;
extern String s$new;
extern hl_type t$vrt_eaa6a3b;
void haxe_exceptions_ArgumentException_new(haxe__exceptions__ArgumentException,String,String,haxe__Exception,vvirtual*);
extern String s$7215ee9;
bool little_tools_TextTools_contains(String,String);
extern String s$c4bb1e2;
bool little_tools_TextTools_containsAny(String,hl__types__ArrayObj);
extern String s$f5ef408;
extern hl_type t$EReg;
extern String s$213dc3e;
extern String s$;
void EReg_new(EReg,String,String);
String String_charAt(String,int);
bool EReg_match(EReg,String);
extern String s$0906c39;
void Reflect_setField(vdynamic*,String,vdynamic*);

void little_KeywordConfig_new(little__KeywordConfig r0,little__KeywordConfig r1,bool* r2) {
	String r4, r17, r18, r20, r23;
	vvirtual *r22, *r24;
	hl__types__ArrayObj r5, r14;
	hl_type *r7;
	bool r3, r12;
	EReg r25;
	little__KeywordConfig r10;
	haxe__exceptions__ArgumentException r19;
	little__$KeywordConfig r13;
	haxe__Exception r21;
	vdynamic *r11;
	int r8, r15, r16;
	varray *r6;
	if( r2 ) goto label$176d47f_1_3;
	r3 = true;
	goto label$176d47f_1_4;
	label$176d47f_1_3:
	r3 = *r2;
	label$176d47f_1_4:
	r4 = (String)s$create;
	r0->INSTANTIATE_FUNCTION_NAME = r4;
	r4 = (String)s$to;
	r0->TYPE_CAST_FUNCTION_PREFIX = r4;
	r4 = (String)s$jump;
	r0->FOR_LOOP_JUMP = r4;
	r4 = (String)s$to;
	r0->FOR_LOOP_TO = r4;
	r4 = (String)s$from;
	r0->FOR_LOOP_FROM = r4;
	r4 = (String)s$maxSize;
	r0->STDLIB__MEMORY_maxSize = r4;
	r4 = (String)s$size;
	r0->STDLIB__MEMORY_size = r4;
	r4 = (String)s$write;
	r0->STDLIB__MEMORY_write = r4;
	r4 = (String)s$read;
	r0->STDLIB__MEMORY_read = r4;
	r4 = (String)s$free;
	r0->STDLIB__MEMORY_free = r4;
	r4 = (String)s$allocate;
	r0->STDLIB__MEMORY_allocate = r4;
	r4 = (String)s$set;
	r0->STDLIB__ARRAY_set = r4;
	r4 = (String)s$get;
	r0->STDLIB__ARRAY_get = r4;
	r4 = (String)s$elementType;
	r0->STDLIB__ARRAY_elementType = r4;
	r4 = (String)s$length;
	r0->STDLIB__ARRAY_length = r4;
	r4 = (String)s$fromCharCode;
	r0->STDLIB__STRING_fromCharCode = r4;
	r4 = (String)s$endsWith;
	r0->STDLIB__STRING_endsWith = r4;
	r4 = (String)s$startsWith;
	r0->STDLIB__STRING_startsWith = r4;
	r4 = (String)s$lastIndexOf;
	r0->STDLIB__STRING_lastIndexOf = r4;
	r4 = (String)s$indexOf;
	r0->STDLIB__STRING_indexOf = r4;
	r4 = (String)s$contains;
	r0->STDLIB__STRING_contains = r4;
	r4 = (String)s$remove;
	r0->STDLIB__STRING_remove = r4;
	r4 = (String)s$replace;
	r0->STDLIB__STRING_replace = r4;
	r4 = (String)s$charAt;
	r0->STDLIB__STRING_charAt = r4;
	r4 = (String)s$substring;
	r0->STDLIB__STRING_substring = r4;
	r4 = (String)s$trim;
	r0->STDLIB__STRING_trim = r4;
	r4 = (String)s$toUpperCase;
	r0->STDLIB__STRING_toUpperCase = r4;
	r4 = (String)s$toLowerCase;
	r0->STDLIB__STRING_toLowerCase = r4;
	r4 = (String)s$length;
	r0->STDLIB__STRING_length = r4;
	r4 = (String)s$isWhole;
	r0->STDLIB__FLOAT_isWhole = r4;
	r4 = (String)s$26b1722;
	r0->POSITIVE_SIGN = r4;
	r4 = (String)s$336d5eb;
	r0->NEGATE_SIGN = r4;
	r4 = (String)s$206a42c;
	r0->SQRT_SIGN = r4;
	r4 = (String)s$9033e0e;
	r0->FACTORIAL_SIGN = r4;
	r4 = (String)s$7e6a2af;
	r0->POW_SIGN = r4;
	r4 = (String)s$6666cd7;
	r0->DIVIDE_SIGN = r4;
	r4 = (String)s$3389dae;
	r0->MULTIPLY_SIGN = r4;
	r4 = (String)s$336d5eb;
	r0->SUBTRACT_SIGN = r4;
	r4 = (String)s$26b1722;
	r0->ADD_SIGN = r4;
	r4 = (String)s$9033e0e;
	r0->NOT_SIGN = r4;
	r4 = (String)s$d3e6c58;
	r0->AND_SIGN = r4;
	r4 = (String)s$7d01044;
	r0->OR_SIGN = r4;
	r4 = (String)s$ea01662;
	r0->XOR_SIGN = r4;
	r4 = (String)s$a7eeaea;
	r0->SMALLER_EQUALS_SIGN = r4;
	r4 = (String)s$3a1e9b8;
	r0->LARGER_EQUALS_SIGN = r4;
	r4 = (String)s$524a507;
	r0->SMALLER_SIGN = r4;
	r4 = (String)s$cedf8da;
	r0->LARGER_SIGN = r4;
	r4 = (String)s$de0219f;
	r0->NOT_EQUALS_SIGN = r4;
	r4 = (String)s$2063849;
	r0->EQUALS_SIGN = r4;
	r4 = (String)s$5058f1a;
	r0->PROPERTY_ACCESS_SIGN = r4;
	r7 = &t$String;
	r8 = 0;
	r6 = hl_alloc_array(r7,r8);
	r5 = hl_types_ArrayObj_alloc(r6);
	r0->RECOGNIZED_SIGNS = r5;
	r4 = (String)s$Unknown;
	r0->TYPE_UNKNOWN = r4;
	r4 = (String)s$after;
	r0->CONDITION__AFTER = r4;
	r4 = (String)s$whenever;
	r0->CONDITION__WHENEVER = r4;
	r4 = (String)s$else;
	r0->CONDITION__ELSE = r4;
	r4 = (String)s$if;
	r0->CONDITION__IF = r4;
	r4 = (String)s$while;
	r0->CONDITION__WHILE_LOOP = r4;
	r4 = (String)s$for;
	r0->CONDITION__FOR_LOOP = r4;
	r4 = (String)s$code;
	r0->CONDITION_BODY_PARAMETER_NAME = r4;
	r4 = (String)s$pattern;
	r0->CONDITION_PATTERN_PARAMETER_NAME = r4;
	r4 = (String)s$run;
	r0->RUN_CODE_FUNCTION_NAME = r4;
	r4 = (String)s$read;
	r0->READ_FUNCTION_NAME = r4;
	r4 = (String)s$error;
	r0->RAISE_ERROR_FUNCTION_NAME = r4;
	r4 = (String)s$print;
	r0->PRINT_FUNCTION_NAME = r4;
	r4 = (String)s$address;
	r0->OBJECT_ADDRESS_PROPERTY_NAME = r4;
	r4 = (String)s$type;
	r0->OBJECT_TYPE_PROPERTY_NAME = r4;
	r4 = (String)s$Main;
	r0->MAIN_MODULE_NAME = r4;
	r4 = (String)s$Sign;
	r0->TYPE_SIGN = r4;
	r4 = (String)s$Type;
	r0->TYPE_MODULE = r4;
	r4 = (String)s$Condition;
	r0->TYPE_CONDITION = r4;
	r4 = (String)s$Action;
	r0->TYPE_FUNCTION = r4;
	r4 = (String)s$Array;
	r0->TYPE_ARRAY = r4;
	r4 = (String)s$Memory;
	r0->TYPE_MEMORY = r4;
	r4 = (String)s$Object;
	r0->TYPE_OBJECT = r4;
	r4 = (String)s$Characters;
	r0->TYPE_STRING = r4;
	r4 = (String)s$Boolean;
	r0->TYPE_BOOLEAN = r4;
	r4 = (String)s$Decimal;
	r0->TYPE_FLOAT = r4;
	r4 = (String)s$Number;
	r0->TYPE_INT = r4;
	r4 = (String)s$Anything;
	r0->TYPE_DYNAMIC = r4;
	r4 = (String)s$false;
	r0->FALSE_VALUE = r4;
	r4 = (String)s$true;
	r0->TRUE_VALUE = r4;
	r4 = (String)s$nothing;
	r0->NULL_VALUE = r4;
	r4 = (String)s$return;
	r0->FUNCTION_RETURN = r4;
	r4 = (String)s$as;
	r0->TYPE_DECL_OR_CAST = r4;
	r4 = (String)s$action;
	r0->FUNCTION_DECLARATION = r4;
	r4 = (String)s$define;
	r0->VARIABLE_DECLARATION = r4;
	if( r1 ) goto label$176d47f_1_181;
	return;
	label$176d47f_1_181:
	if( !r3 ) goto label$176d47f_1_298;
	r13 = (little__$KeywordConfig)g$_little_KeywordConfig;
	r5 = Type_getInstanceFields(((hl__Class)r13));
	if( r5 == NULL ) hl_null_access();
	r4 = (String)s$defaultConfig;
	r12 = hl_types_ArrayObj_remove(r5,((vdynamic*)r4));
	r8 = 0;
	label$176d47f_1_188:
	if( r5 == NULL ) hl_null_access();
	r16 = r5->length;
	if( r8 >= r16 ) goto label$176d47f_1_298;
	r16 = r5->length;
	if( ((unsigned)r8) < ((unsigned)r16) ) goto label$176d47f_1_196;
	r4 = NULL;
	goto label$176d47f_1_199;
	label$176d47f_1_196:
	r6 = r5->array;
	r11 = ((vdynamic**)(r6 + 1))[r8];
	r4 = (String)r11;
	label$176d47f_1_199:
	++r8;
	r11 = Reflect_field(((vdynamic*)r1),r4);
	r17 = (String)hl_dyn_castp(&r11,&t$_dyn,&t$String);
	if( r17 == NULL ) hl_null_access();
	r15 = r17->length;
	r16 = 0;
	if( r15 != r16 ) goto label$176d47f_1_223;
	r19 = (haxe__exceptions__ArgumentException)hl_alloc_obj(&t$haxe_exceptions_ArgumentException);
	r18 = (String)s$config_;
	r18 = String___add__(r18,r4);
	r20 = (String)s$2de70f6;
	r21 = NULL;
	r22 = hl_alloc_virtual(&t$vrt_329ffa8);
	r23 = (String)s$src_little_KeywordConfig_hx;
	if( hl_vfields(r22)[1] ) *(String*)(hl_vfields(r22)[1]) = (String)r23; else hl_dyn_setp(r22->value,37969014/*fileName*/,&t$String,r23);
	r15 = 45;
	if( hl_vfields(r22)[2] ) *(int*)(hl_vfields(r22)[2]) = (int)r15; else hl_dyn_seti(r22->value,371360620/*lineNumber*/,&t$_i32,r15);
	r23 = (String)s$little_KeywordConfig;
	if( hl_vfields(r22)[0] ) *(String*)(hl_vfields(r22)[0]) = (String)r23; else hl_dyn_setp(r22->value,-63073762/*className*/,&t$String,r23);
	r23 = (String)s$new;
	if( hl_vfields(r22)[3] ) *(String*)(hl_vfields(r22)[3]) = (String)r23; else hl_dyn_setp(r22->value,302979532/*methodName*/,&t$String,r23);
	r24 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r22);
	haxe_exceptions_ArgumentException_new(r19,r18,r20,r21,r24);
	hl_throw((vdynamic*)r19);
	label$176d47f_1_223:
	r20 = (String)s$7215ee9;
	r12 = little_tools_TextTools_contains(r17,r20);
	if( !r12 ) goto label$176d47f_1_243;
	r19 = (haxe__exceptions__ArgumentException)hl_alloc_obj(&t$haxe_exceptions_ArgumentException);
	r18 = (String)s$config_;
	r18 = String___add__(r18,r4);
	r20 = (String)s$c4bb1e2;
	r21 = NULL;
	r22 = hl_alloc_virtual(&t$vrt_329ffa8);
	r23 = (String)s$src_little_KeywordConfig_hx;
	if( hl_vfields(r22)[1] ) *(String*)(hl_vfields(r22)[1]) = (String)r23; else hl_dyn_setp(r22->value,37969014/*fileName*/,&t$String,r23);
	r15 = 47;
	if( hl_vfields(r22)[2] ) *(int*)(hl_vfields(r22)[2]) = (int)r15; else hl_dyn_seti(r22->value,371360620/*lineNumber*/,&t$_i32,r15);
	r23 = (String)s$little_KeywordConfig;
	if( hl_vfields(r22)[0] ) *(String*)(hl_vfields(r22)[0]) = (String)r23; else hl_dyn_setp(r22->value,-63073762/*className*/,&t$String,r23);
	r23 = (String)s$new;
	if( hl_vfields(r22)[3] ) *(String*)(hl_vfields(r22)[3]) = (String)r23; else hl_dyn_setp(r22->value,302979532/*methodName*/,&t$String,r23);
	r24 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r22);
	haxe_exceptions_ArgumentException_new(r19,r18,r20,r21,r24);
	hl_throw((vdynamic*)r19);
	label$176d47f_1_243:
	r13 = (little__$KeywordConfig)g$_little_KeywordConfig;
	r14 = r13->recognizedOperators;
	r12 = little_tools_TextTools_containsAny(r17,r14);
	if( !r12 ) goto label$176d47f_1_264;
	r19 = (haxe__exceptions__ArgumentException)hl_alloc_obj(&t$haxe_exceptions_ArgumentException);
	r18 = (String)s$config_;
	r18 = String___add__(r18,r4);
	r20 = (String)s$f5ef408;
	r21 = NULL;
	r22 = hl_alloc_virtual(&t$vrt_329ffa8);
	r23 = (String)s$src_little_KeywordConfig_hx;
	if( hl_vfields(r22)[1] ) *(String*)(hl_vfields(r22)[1]) = (String)r23; else hl_dyn_setp(r22->value,37969014/*fileName*/,&t$String,r23);
	r15 = 49;
	if( hl_vfields(r22)[2] ) *(int*)(hl_vfields(r22)[2]) = (int)r15; else hl_dyn_seti(r22->value,371360620/*lineNumber*/,&t$_i32,r15);
	r23 = (String)s$little_KeywordConfig;
	if( hl_vfields(r22)[0] ) *(String*)(hl_vfields(r22)[0]) = (String)r23; else hl_dyn_setp(r22->value,-63073762/*className*/,&t$String,r23);
	r23 = (String)s$new;
	if( hl_vfields(r22)[3] ) *(String*)(hl_vfields(r22)[3]) = (String)r23; else hl_dyn_setp(r22->value,302979532/*methodName*/,&t$String,r23);
	r24 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r22);
	haxe_exceptions_ArgumentException_new(r19,r18,r20,r21,r24);
	hl_throw((vdynamic*)r19);
	label$176d47f_1_264:
	r25 = (EReg)hl_alloc_obj(&t$EReg);
	r18 = (String)s$213dc3e;
	r20 = (String)s$;
	EReg_new(r25,r18,r20);
	r15 = 0;
	r18 = String_charAt(r17,r15);
	r12 = EReg_match(r25,r18);
	if( !r12 ) goto label$176d47f_1_289;
	r19 = (haxe__exceptions__ArgumentException)hl_alloc_obj(&t$haxe_exceptions_ArgumentException);
	r18 = (String)s$config_;
	r18 = String___add__(r18,r4);
	r20 = (String)s$0906c39;
	r21 = NULL;
	r22 = hl_alloc_virtual(&t$vrt_329ffa8);
	r23 = (String)s$src_little_KeywordConfig_hx;
	if( hl_vfields(r22)[1] ) *(String*)(hl_vfields(r22)[1]) = (String)r23; else hl_dyn_setp(r22->value,37969014/*fileName*/,&t$String,r23);
	r15 = 51;
	if( hl_vfields(r22)[2] ) *(int*)(hl_vfields(r22)[2]) = (int)r15; else hl_dyn_seti(r22->value,371360620/*lineNumber*/,&t$_i32,r15);
	r23 = (String)s$little_KeywordConfig;
	if( hl_vfields(r22)[0] ) *(String*)(hl_vfields(r22)[0]) = (String)r23; else hl_dyn_setp(r22->value,-63073762/*className*/,&t$String,r23);
	r23 = (String)s$new;
	if( hl_vfields(r22)[3] ) *(String*)(hl_vfields(r22)[3]) = (String)r23; else hl_dyn_setp(r22->value,302979532/*methodName*/,&t$String,r23);
	r24 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r22);
	haxe_exceptions_ArgumentException_new(r19,r18,r20,r21,r24);
	hl_throw((vdynamic*)r19);
	label$176d47f_1_289:
	r13 = (little__$KeywordConfig)g$_little_KeywordConfig;
	r10 = r13->defaultConfig;
	r11 = Reflect_field(((vdynamic*)r10),r4);
	{ int i = hl_dyn_compare((vdynamic*)r17,(vdynamic*)r11); if( i != 0 ) goto label$176d47f_1_296; };
	r11 = NULL;
	Reflect_setField(((vdynamic*)r0),r4,r11);
	goto label$176d47f_1_297;
	label$176d47f_1_296:
	Reflect_setField(((vdynamic*)r0),r4,((vdynamic*)r17));
	label$176d47f_1_297:
	goto label$176d47f_1_188;
	label$176d47f_1_298:
	return;
}
