﻿// Generated by HLC 4.3.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <vision/ds/Queue.h>
#include <hl/types/ArrayObj.h>
extern hl_type t$vision_ds_QueueCell;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$vrt_140055b;
extern hl_type t$fun_746eb80;
extern hl_type t$fun_8186749;
vdynamic* vision_ds_Queue_iterator__$2(hl__types__ArrayObj);
extern hl_type t$fun_ffbcb45;
extern hl_type t$fun_32f7ff2;
extern hl_type t$vrt_ef76930;
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
void vision_ds_QueueCell_new(vision__ds__QueueCell,vdynamic*,vision__ds__QueueCell,vision__ds__QueueCell);

void vision_ds_Queue_new(vision__ds__Queue r0) {
	int r1;
	r1 = 0;
	r0->length = r1;
	return;
}

bool vision_ds_Queue_iterator__$1(hl__types__ArrayObj r0) {
	bool r1;
	vdynamic *r5;
	vision__ds__QueueCell r4, r7;
	varray *r6;
	int r2, r3;
	if( r0 == NULL ) hl_null_access();
	r2 = 0;
	r3 = r0->length;
	if( ((unsigned)r2) < ((unsigned)r3) ) goto label$13d5684_2_6;
	r4 = NULL;
	goto label$13d5684_2_9;
	label$13d5684_2_6:
	r6 = r0->array;
	r5 = ((vdynamic**)(r6 + 1))[r2];
	r4 = (vision__ds__QueueCell)r5;
	label$13d5684_2_9:
	r7 = NULL;
	if( r4 != r7 ) goto label$13d5684_2_13;
	r1 = false;
	goto label$13d5684_2_14;
	label$13d5684_2_13:
	r1 = true;
	label$13d5684_2_14:
	return r1;
}

vvirtual* vision_ds_Queue_iterator(vision__ds__Queue r0) {
	vvirtual *r6, *r9;
	hl__types__ArrayObj r1;
	hl_type *r3;
	vclosure *r7, *r8;
	vision__ds__QueueCell r5;
	int r4;
	varray *r2;
	r3 = &t$vision_ds_QueueCell;
	r4 = 1;
	r2 = hl_alloc_array(r3,r4);
	r5 = r0->first;
	r4 = 0;
	((vision__ds__QueueCell*)(r2 + 1))[r4] = r5;
	r1 = hl_types_ArrayObj_alloc(r2);
	r6 = hl_alloc_virtual(&t$vrt_140055b);
	r7 = hl_alloc_closure_ptr(&t$fun_746eb80,vision_ds_Queue_iterator__$1,r1);
	if( hl_vfields(r6)[0] ) *(vclosure**)(hl_vfields(r6)[0]) = (vclosure*)r7; else hl_dyn_setp(r6->value,407283053/*hasNext*/,&t$fun_8186749,r7);
	r8 = hl_alloc_closure_ptr(&t$fun_ffbcb45,vision_ds_Queue_iterator__$2,r1);
	if( hl_vfields(r6)[1] ) *(vclosure**)(hl_vfields(r6)[1]) = (vclosure*)r8; else hl_dyn_setp(r6->value,151160317/*next*/,&t$fun_32f7ff2,r8);
	r9 = hl_to_virtual(&t$vrt_ef76930,(vdynamic*)r6);
	return r9;
}

vdynamic* vision_ds_Queue_iterator__$2(hl__types__ArrayObj r0) {
	vdynamic *r4;
	vision__ds__QueueCell r3, r7;
	varray *r5;
	int r1, r2;
	if( r0 == NULL ) hl_null_access();
	r1 = 0;
	r2 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r2) ) goto label$13d5684_4_6;
	r3 = NULL;
	goto label$13d5684_4_9;
	label$13d5684_4_6:
	r5 = r0->array;
	r4 = ((vdynamic**)(r5 + 1))[r1];
	r3 = (vision__ds__QueueCell)r4;
	label$13d5684_4_9:
	r1 = 0;
	if( r3 == NULL ) hl_null_access();
	r7 = r3->next;
	r2 = r0->length;
	if( ((unsigned)r1) < ((unsigned)r2) ) goto label$13d5684_4_15;
	hl_types_ArrayObj___expand(r0,r1);
	label$13d5684_4_15:
	r5 = r0->array;
	((vision__ds__QueueCell*)(r5 + 1))[r1] = r7;
	r4 = r3->value;
	return r4;
}

vdynamic* vision_ds_Queue_enqueue(vision__ds__Queue r0,vdynamic* r1) {
	vision__ds__QueueCell r3, r4, r5, r7;
	int r6;
	r3 = r0->first;
	if( r3 ) goto label$13d5684_5_11;
	r3 = (vision__ds__QueueCell)hl_alloc_obj(&t$vision_ds_QueueCell);
	r4 = NULL;
	r5 = NULL;
	vision_ds_QueueCell_new(r3,r1,r4,r5);
	r0->first = r3;
	r6 = r0->length;
	++r6;
	r0->length = r6;
	return r1;
	label$13d5684_5_11:
	r3 = r0->first;
	if( r3 == NULL ) hl_null_access();
	r4 = (vision__ds__QueueCell)hl_alloc_obj(&t$vision_ds_QueueCell);
	r5 = r0->first;
	r7 = NULL;
	vision_ds_QueueCell_new(r4,r1,r5,r7);
	r3->previous = r4;
	r3 = r0->first;
	if( r3 == NULL ) hl_null_access();
	r3 = r3->previous;
	r0->first = r3;
	r6 = r0->length;
	++r6;
	r0->length = r6;
	return r1;
}

