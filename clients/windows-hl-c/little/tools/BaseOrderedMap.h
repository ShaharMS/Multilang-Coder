﻿// Generated by HLC 4.3.4 (HL v5)
#ifndef INC_little__tools__BaseOrderedMap
#define INC_little__tools__BaseOrderedMap
typedef struct _little__tools__$BaseOrderedMap *little__tools__$BaseOrderedMap;
typedef struct _little__tools__BaseOrderedMap *little__tools__BaseOrderedMap;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayDyn.h>


struct _little__tools__$BaseOrderedMap {
	hl_type *$type;
	hl_type* _hx___type__;
	vdynamic* _hx___meta__;
	varray* _hx___implementedBy__;
	String _hx___name__;
	vdynamic* _hx___constructor__;
};
struct _little__tools__BaseOrderedMap {
	hl_type *$type;
	hl__types__ArrayDyn _ks;
	hl__types__ArrayDyn _vs;
};
#endif
