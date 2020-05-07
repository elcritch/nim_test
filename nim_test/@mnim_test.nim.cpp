/* Generated by Nim Compiler v1.3.1 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include "Arduino.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, setup)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, loop)(void);
N_LIB_PRIVATE N_NIMCALL(void, delay__kfyCrDPttXz1lR5Rjng9bKQ)(NI ms);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimTestErrorFlag)(void);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_LIB_PRIVATE N_NIMCALL(void, systemDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);

/* section: NIM_merge_VARS */
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */

#line 536 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s) {
#line 537 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 537 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;
{
#line 538 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = ((NI16) 0);}	}
	goto LA1_;
	LA3_: ;
	{
#line 541 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 541 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));	}
	LA1_: ;

#line 543 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
#line 544 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
{
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
}	}
	LA8_: ;
}

#line 85 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, popFrame)(void) {
#line 86 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;}

#line 169 "/Volumes/datastore/projects/pt/third-party/nim_test/arduino.nim"
N_LIB_PRIVATE N_NIMCALL(void, setup)(void) {	nimfr_("setup", "/Volumes/datastore/projects/pt/third-party/nim_test/arduino.nim");
#line 6 "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.nim"
	nimln_(6, "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.ni"
"m");	pinMode(((NU8) 5), ((NU8) 2));
	popFrame();}

#line 424 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 425 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 173 "/Volumes/datastore/projects/pt/third-party/nim_test/arduino.nim"
N_LIB_PRIVATE N_NIMCALL(void, loop)(void) {NIM_BOOL* nimErr_;	nimfr_("loop", "/Volumes/datastore/projects/pt/third-party/nim_test/arduino.nim");{nimErr_ = nimErrorFlag();
#line 13 "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.nim"
	nimln_(13, "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.ni"
"m");	digitalWrite(((NU8) 5), ((NU8) 1));

#line 14 "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.nim"
	nimln_(14, "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.ni"
"m");
#line 14 "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.nim"
	delay__kfyCrDPttXz1lR5Rjng9bKQ(((NI) 1000));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 15 "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.nim"
	nimln_(15, "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.ni"
"m");	digitalWrite(((NU8) 5), ((NU8) 0));

#line 16 "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.nim"
	nimln_(16, "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.ni"
"m");
#line 16 "/Volumes/datastore/projects/pt/third-party/nim_test/nim_test.nim"
	delay__kfyCrDPttXz1lR5Rjng9bKQ(((NI) 500));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();}

#line 2107 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"
static N_INLINE(void, initStackBottomWith)(void* locals) {}

N_LIB_PRIVATE void PreMainInner(void) {
}

N_LIB_PRIVATE int cmdCount;
N_LIB_PRIVATE char** cmdLine;
N_LIB_PRIVATE char** gEnv;
N_LIB_PRIVATE void PreMain(void) {
	void (*volatile inner)(void);
	inner = PreMainInner;
	systemDatInit000();
	initStackBottomWith((void *)&inner);
	(*inner)();
}

N_LIB_PRIVATE N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {

#line 999999 "generated_not_to_break_here"
{
}
}

