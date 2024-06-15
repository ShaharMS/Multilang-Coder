﻿// Generated by HLC 4.3.4 (HL v5)
#ifndef INC_little__Little
#define INC_little__Little
typedef struct _little__$Little *little__$Little;
typedef struct _little__Little *little__Little;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <little/KeywordConfig.h>
#include <little/interpreter/Runtime.h>
#include <little/interpreter/memory/Memory.h>
#include <little/tools/Plugins.h>
#include <vision/ds/Queue.h>
#include <hl/types/ArrayObj.h>


struct _little__$Little {
	hl_type *$type;
	hl_type* _hx___type__;
	vdynamic* _hx___meta__;
	varray* _hx___implementedBy__;
	String _hx___name__;
	vdynamic* _hx___constructor__;
	little__KeywordConfig keywords;
	little__interpreter__Runtime runtime;
	little__interpreter__memory__Memory memory;
	little__tools__Plugins plugin;
	vision__ds__Queue queue;
	bool debug;
	String version;
	vclosure* loadModule;
	vclosure* run;
	vclosure* compile;
	vclosure* format;
	vclosure* reset;
};
struct _little__Little {
	hl_type *$type;
};
#endif
