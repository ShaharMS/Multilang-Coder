﻿// Generated by HLC 4.3.4 (HL v5)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/hash/Murmur1.h>
int haxe_io_Bytes_get(haxe__io__Bytes,int);

int haxe_hash_Murmur1_hash(haxe__io__Bytes r0,int* r1) {
	int r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13;
	if( r1 ) goto label$3b4a377_1_3;
	r2 = 0;
	goto label$3b4a377_1_4;
	label$3b4a377_1_3:
	r2 = *r1;
	label$3b4a377_1_4:
	if( r0 == NULL ) hl_null_access();
	r3 = r0->length;
	r6 = -962287725;
	r5 = r3 * r6;
	r4 = r2 ^ r5;
	r6 = 2;
	r5 = r3 >> r6;
	r6 = 0;
	r7 = r5;
	label$3b4a377_1_13:
	if( r6 >= r7 ) goto label$3b4a377_1_48;
	r8 = r6;
	++r6;
	r10 = 2;
	r9 = r8 << r10;
	if( r0 == NULL ) hl_null_access();
	r10 = haxe_io_Bytes_get(r0,r9);
	r13 = 1;
	r12 = r9 + r13;
	r12 = haxe_io_Bytes_get(r0,r12);
	r13 = 8;
	r12 = r12 << r13;
	r11 = r10 | r12;
	r13 = 2;
	r12 = r9 + r13;
	r12 = haxe_io_Bytes_get(r0,r12);
	r13 = 16;
	r12 = r12 << r13;
	r11 = r11 | r12;
	r13 = 3;
	r12 = r9 + r13;
	r12 = haxe_io_Bytes_get(r0,r12);
	r13 = 24;
	r12 = r12 << r13;
	r11 = r11 | r12;
	r10 = r11;
	r11 = r4 + r10;
	r12 = -962287725;
	r11 = r11 * r12;
	r13 = 16;
	r12 = ((unsigned)r11) >> r13;
	r11 = r11 ^ r12;
	r4 = r11;
	goto label$3b4a377_1_13;
	label$3b4a377_1_48:
	r7 = 2;
	r6 = r5 << r7;
	r8 = 3;
	r7 = r3 & r8;
	r9 = 3;
	if( r7 != r9 ) goto label$3b4a377_1_62;
	if( r0 == NULL ) hl_null_access();
	r10 = 2;
	r9 = r6 + r10;
	r9 = haxe_io_Bytes_get(r0,r9);
	r10 = 16;
	r9 = r9 << r10;
	r8 = r4 + r9;
	r4 = r8;
	label$3b4a377_1_62:
	r9 = 2;
	if( r7 < r9 ) goto label$3b4a377_1_72;
	if( r0 == NULL ) hl_null_access();
	r10 = 1;
	r9 = r6 + r10;
	r9 = haxe_io_Bytes_get(r0,r9);
	r10 = 8;
	r9 = r9 << r10;
	r8 = r4 + r9;
	r4 = r8;
	label$3b4a377_1_72:
	r9 = 1;
	if( r7 < r9 ) goto label$3b4a377_1_83;
	if( r0 == NULL ) hl_null_access();
	r9 = haxe_io_Bytes_get(r0,r6);
	r8 = r4 + r9;
	r9 = -962287725;
	r8 = r8 * r9;
	r10 = 16;
	r9 = ((unsigned)r8) >> r10;
	r8 = r8 ^ r9;
	r4 = r8;
	label$3b4a377_1_83:
	r9 = -962287725;
	r8 = r4 * r9;
	r10 = 10;
	r9 = ((unsigned)r8) >> r10;
	r8 = r8 ^ r9;
	r9 = -962287725;
	r8 = r8 * r9;
	r10 = 17;
	r9 = ((unsigned)r8) >> r10;
	r8 = r8 ^ r9;
	return r8;
}
