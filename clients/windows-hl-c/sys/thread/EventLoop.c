﻿// Generated by HLC 4.3.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <sys/thread/EventLoop.h>
#include <hl/natives.h>
extern hl_type t$sys_thread__EventLoop_RegularEvent;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$fun_7b48b4f;
extern hl_type t$_f64;
bool sys_thread_Lock_wait(sys__thread__Lock,vdynamic*);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
double haxe_MainLoop_tick(void);
bool haxe_MainLoop_hasEvents(void);
double Math_max(double,double);
extern hl_type t$sys_thread_Lock;
void sys_thread_Lock_new(sys__thread__Lock);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
hl_mutex* sys_thread__Mutex_Mutex_Impl___new(void);
extern sys__thread__$EventLoop g$_sys_thread_EventLoop;

void sys_thread_EventLoop_loop(sys__thread__EventLoop r0) {
	hl__types__ArrayObj r1, r6, r9, r18, r26, r27;
	hl_type *r3;
	bool r7, r32, r35;
	sys__thread___EventLoop__RegularEvent r15, r16;
	sys__thread__Lock r12;
	hl_mutex *r11;
	vclosure *r25, *r28;
	double r8, r10, r13, r17, r33, r34;
	vdynamic *r14, *r24;
	int r4, r19, r20, r21, r22, r23, r29, r30, r31;
	varray *r2;
	r3 = &t$sys_thread__EventLoop_RegularEvent;
	r4 = 0;
	r2 = hl_alloc_array(r3,r4);
	r1 = hl_types_ArrayObj_alloc(r2);
	r3 = &t$fun_7b48b4f;
	r4 = 0;
	r2 = hl_alloc_array(r3,r4);
	r6 = hl_types_ArrayObj_alloc(r2);
	label$93e7ec3_1_8:
	r7 = true;
	if( !r7 ) goto label$93e7ec3_1_198;
	r8 = hl_sys_time();
	r9 = r1;
	r4 = 0;
	r10 = -1.;
	r11 = r0->mutex;
	hl_mutex_acquire(r11);
	label$93e7ec3_1_17:
	r12 = r0->waitLock;
	if( r12 == NULL ) hl_null_access();
	r13 = 0.;
	r14 = hl_alloc_dynamic(&t$_f64);
	r14->v.d = r13;
	r7 = sys_thread_Lock_wait(r12,r14);
	if( !r7 ) goto label$93e7ec3_1_25;
	goto label$93e7ec3_1_17;
	label$93e7ec3_1_25:
	r15 = r0->regularEvents;
	label$93e7ec3_1_26:
	if( !r15 ) goto label$93e7ec3_1_55;
	if( r15 == NULL ) hl_null_access();
	r13 = r15->nextRunTime;
	if( !(r8 >= r13) ) goto label$93e7ec3_1_46;
	if( r9 == NULL ) hl_null_access();
	r19 = r4;
	++r4;
	r20 = r9->length;
	if( ((unsigned)r19) < ((unsigned)r20) ) goto label$93e7ec3_1_37;
	hl_types_ArrayObj___expand(r9,r19);
	label$93e7ec3_1_37:
	r2 = r9->array;
	((sys__thread___EventLoop__RegularEvent*)(r2 + 1))[r19] = r15;
	r13 = r15->nextRunTime;
	r17 = r15->interval;
	r13 = r13 + r17;
	r15->nextRunTime = r13;
	r13 = -2.;
	r10 = r13;
	goto label$93e7ec3_1_52;
	label$93e7ec3_1_46:
	r17 = -1.;
	if( r10 == r17 ) goto label$93e7ec3_1_50;
	r13 = r15->nextRunTime;
	if( !(r13 < r10) ) goto label$93e7ec3_1_52;
	label$93e7ec3_1_50:
	r13 = r15->nextRunTime;
	r10 = r13;
	label$93e7ec3_1_52:
	r16 = r15->next;
	r15 = r16;
	goto label$93e7ec3_1_26;
	label$93e7ec3_1_55:
	r11 = r0->mutex;
	hl_mutex_release(r11);
	r19 = 0;
	r20 = r4;
	label$93e7ec3_1_59:
	if( r19 >= r20 ) goto label$93e7ec3_1_92;
	r21 = r19;
	++r19;
	if( r9 == NULL ) hl_null_access();
	r23 = r9->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$93e7ec3_1_68;
	r16 = NULL;
	goto label$93e7ec3_1_71;
	label$93e7ec3_1_68:
	r2 = r9->array;
	r24 = ((vdynamic**)(r2 + 1))[r21];
	r16 = (sys__thread___EventLoop__RegularEvent)r24;
	label$93e7ec3_1_71:
	if( r16 == NULL ) hl_null_access();
	r7 = r16->cancelled;
	if( r7 ) goto label$93e7ec3_1_85;
	r23 = r9->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$93e7ec3_1_78;
	r16 = NULL;
	goto label$93e7ec3_1_81;
	label$93e7ec3_1_78:
	r2 = r9->array;
	r24 = ((vdynamic**)(r2 + 1))[r21];
	r16 = (sys__thread___EventLoop__RegularEvent)r24;
	label$93e7ec3_1_81:
	if( r16 == NULL ) hl_null_access();
	r25 = r16->run;
	if( r25 == NULL ) hl_null_access();
	r25->hasValue ? ((void (*)(vdynamic*))r25->fun)((vdynamic*)r25->value) : ((void (*)(void))r25->fun)();
	label$93e7ec3_1_85:
	r16 = NULL;
	r23 = r9->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$93e7ec3_1_89;
	hl_types_ArrayObj___expand(r9,r21);
	label$93e7ec3_1_89:
	r2 = r9->array;
	((sys__thread___EventLoop__RegularEvent*)(r2 + 1))[r21] = r16;
	goto label$93e7ec3_1_59;
	label$93e7ec3_1_92:
	r21 = 0;
	r4 = r21;
	r18 = r6;
	r11 = r0->mutex;
	hl_mutex_acquire(r11);
	r21 = 0;
	r26 = r0->oneTimeEvents;
	label$93e7ec3_1_99:
	if( r26 == NULL ) hl_null_access();
	r23 = r26->length;
	if( r21 >= r23 ) goto label$93e7ec3_1_131;
	r23 = r26->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$93e7ec3_1_107;
	r25 = NULL;
	goto label$93e7ec3_1_110;
	label$93e7ec3_1_107:
	r2 = r26->array;
	r24 = ((vdynamic**)(r2 + 1))[r21];
	r25 = (vclosure*)r24;
	label$93e7ec3_1_110:
	r22 = r21;
	++r21;
	if( r25 ) goto label$93e7ec3_1_114;
	goto label$93e7ec3_1_131;
	label$93e7ec3_1_114:
	if( r18 == NULL ) hl_null_access();
	r29 = r4;
	++r4;
	r30 = r18->length;
	if( ((unsigned)r29) < ((unsigned)r30) ) goto label$93e7ec3_1_120;
	hl_types_ArrayObj___expand(r18,r29);
	label$93e7ec3_1_120:
	r2 = r18->array;
	((vclosure**)(r2 + 1))[r29] = r25;
	r27 = r0->oneTimeEvents;
	if( r27 == NULL ) hl_null_access();
	r28 = NULL;
	r30 = r27->length;
	if( ((unsigned)r22) < ((unsigned)r30) ) goto label$93e7ec3_1_128;
	hl_types_ArrayObj___expand(r27,r22);
	label$93e7ec3_1_128:
	r2 = r27->array;
	((vclosure**)(r2 + 1))[r22] = r28;
	goto label$93e7ec3_1_99;
	label$93e7ec3_1_131:
	r22 = 0;
	r0->oneTimeEventsIdx = r22;
	r22 = r0->promisedEventsCount;
	r23 = 0;
	if( r22 > r23 ) goto label$93e7ec3_1_138;
	r7 = false;
	goto label$93e7ec3_1_139;
	label$93e7ec3_1_138:
	r7 = true;
	label$93e7ec3_1_139:
	r11 = r0->mutex;
	hl_mutex_release(r11);
	r22 = 0;
	r23 = r4;
	label$93e7ec3_1_143:
	if( r22 >= r23 ) goto label$93e7ec3_1_164;
	r29 = r22;
	++r22;
	if( r18 == NULL ) hl_null_access();
	r31 = r18->length;
	if( ((unsigned)r29) < ((unsigned)r31) ) goto label$93e7ec3_1_152;
	r25 = NULL;
	goto label$93e7ec3_1_155;
	label$93e7ec3_1_152:
	r2 = r18->array;
	r24 = ((vdynamic**)(r2 + 1))[r29];
	r25 = (vclosure*)r24;
	label$93e7ec3_1_155:
	if( r25 == NULL ) hl_null_access();
	r25->hasValue ? ((void (*)(vdynamic*))r25->fun)((vdynamic*)r25->value) : ((void (*)(void))r25->fun)();
	r25 = NULL;
	r31 = r18->length;
	if( ((unsigned)r29) < ((unsigned)r31) ) goto label$93e7ec3_1_161;
	hl_types_ArrayObj___expand(r18,r29);
	label$93e7ec3_1_161:
	r2 = r18->array;
	((vclosure**)(r2 + 1))[r29] = r25;
	goto label$93e7ec3_1_143;
	label$93e7ec3_1_164:
	r32 = r0->isMainThread;
	if( !r32 ) goto label$93e7ec3_1_172;
	r13 = haxe_MainLoop_tick();
	r32 = haxe_MainLoop_hasEvents();
	if( !r32 ) goto label$93e7ec3_1_172;
	++r4;
	if( !(r13 < r10) ) goto label$93e7ec3_1_172;
	r10 = r13;
	label$93e7ec3_1_172:
	r30 = 0;
	if( r30 >= r4 ) goto label$93e7ec3_1_176;
	r13 = -2.;
	r10 = r13;
	label$93e7ec3_1_176:
	r33 = -2.;
	if( r33 == r10 ) goto label$93e7ec3_1_189;
	r33 = -1.;
	if( r33 == r10 ) goto label$93e7ec3_1_190;
	r34 = hl_sys_time();
	r33 = r10 - r34;
	r12 = r0->waitLock;
	if( r12 == NULL ) hl_null_access();
	r34 = 0.;
	r34 = Math_max(r34,r33);
	r14 = hl_alloc_dynamic(&t$_f64);
	r14->v.d = r34;
	r35 = sys_thread_Lock_wait(r12,r14);
	goto label$93e7ec3_1_197;
	label$93e7ec3_1_189:
	goto label$93e7ec3_1_197;
	label$93e7ec3_1_190:
	if( !r7 ) goto label$93e7ec3_1_196;
	r12 = r0->waitLock;
	if( r12 == NULL ) hl_null_access();
	r14 = NULL;
	r35 = sys_thread_Lock_wait(r12,r14);
	goto label$93e7ec3_1_197;
	label$93e7ec3_1_196:
	goto label$93e7ec3_1_198;
	label$93e7ec3_1_197:
	goto label$93e7ec3_1_8;
	label$93e7ec3_1_198:
	return;
}

void sys_thread_EventLoop_new(sys__thread__EventLoop r0) {
	hl__types__ArrayObj r4;
	bool r6;
	sys__thread__$EventLoop r7;
	sys__thread__Lock r2;
	hl_mutex *r5;
	int r1;
	r1 = 0;
	r0->promisedEventsCount = r1;
	r2 = (sys__thread__Lock)hl_alloc_obj(&t$sys_thread_Lock);
	sys_thread_Lock_new(r2);
	r0->waitLock = r2;
	r1 = 0;
	r0->oneTimeEventsIdx = r1;
	r4 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r4);
	r0->oneTimeEvents = r4;
	r5 = sys_thread__Mutex_Mutex_Impl___new();
	r0->mutex = r5;
	r7 = (sys__thread__$EventLoop)g$_sys_thread_EventLoop;
	r6 = r7->CREATED;
	r6 = !r6;
	r0->isMainThread = r6;
	r6 = true;
	r7 = (sys__thread__$EventLoop)g$_sys_thread_EventLoop;
	r7->CREATED = r6;
	return;
}
