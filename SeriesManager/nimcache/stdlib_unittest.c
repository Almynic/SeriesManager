/* Generated by Nim Compiler v0.16.1 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/almynic/Nim/lib -o /home/almynic/Desktop/NimProjects/SeriesManager/nimcache/stdlib_unittest.o /home/almynic/Desktop/NimProjects/SeriesManager/nimcache/stdlib_unittest.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#undef linux
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef NU8 OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* heapLink;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef NU8 Style_NXKayqTLMsAibFwNceBlpA_Set;
typedef NU8 ForegroundColor_ez9ah4IgQc0AbdW68acioDg;
typedef NU8 TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ;
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
NI origSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* heapLink;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_Um3CQPZ9bILAIolZOsxNIaw_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NIM_BOOL, shouldRun_ONH9bpFQB7Lkusu9bdW9bZB9bg)(NimStringDesc* testName);
N_NIMCALL(void, startSuite_VnQKOZmnLzBft9blszroIww)(NimStringDesc* name);
N_NIMCALL(void, setStyle_zEKKPPIjKZs9bVYu4TwenLg)(FILE* f, Style_NXKayqTLMsAibFwNceBlpA_Set style);
N_NIMCALL(void, setForegroundColor_Tw7yxMupneOmAicqiYt3NA)(FILE* f, ForegroundColor_ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright);
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f, NimStringDesc* s);
N_NIMCALL(void, resetAttributes_tFIu39aFSR3N0M64Ynwugng_5)(FILE* f);
N_NIMCALL(void, testDone_VoVtPHAme9cJ9c6u9cbroe79bQ)(NimStringDesc* name, TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ s, NIM_BOOL indent);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_NIMCALL(void, checkpoint_4nBz3prx9cKVVOoTZb4rNCQ)(NimStringDesc* msg);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwunittest)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQunittest)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a, void* b, NI size);
static N_NIMCALL(void, TM_Um3CQPZ9bILAIolZOsxNIaw_15)(void);
N_NIMCALL(NimStringDesc*, getEnv_8zNgT9bxx7m9cTt2TeVdTdIw)(NimStringDesc* key);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, existsEnv_ahpnHkfRE9cLlJNaRpEL7Vw)(NimStringDesc* key);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
NIM_BOOL abortOnError_Bte3Uiwc4Q19ago2N4C89cUA;
OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww outputLevel_jY0mhj6Kpj9cWEoY2ZPxFRA;
NIM_BOOL colorOutput_RKBmueNuWaEwUGh1YH9btZg;
TY_sM4lkSb7zS6F7OVMvW9cffQ* checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern NI nim_program_result;
TNimType NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_;
NimStringDesc* envOutLvl_u2FpYBwFbDdjQW68TaA2qA;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww opt_746xADiU9cIoir6D3vv6qig;
TNimType NTI_7UfTrIPsm9cGDPwH9bpwJDww_;
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_3, "\012[Suite] ", 9);
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_4, "\012", 1);
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_6, "  ", 2);
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_7, "", 0);
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_8, "[", 1);
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_12, "] ", 2);
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_16, "NIMTEST_OUTPUT_LVL", 18);
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_17, "NIMTEST_ABORT_ON_ERROR", 22);
STRING_LITERAL(TM_Um3CQPZ9bILAIolZOsxNIaw_18, "NIMTEST_NO_COLOR", 16);
static N_NIMCALL(void, TM_Um3CQPZ9bILAIolZOsxNIaw_2)(void) {
	nimGCvisit((void*)checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ, 0);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim")
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim")
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim")
	nimln_(270, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(272, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(273, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, shouldRun_ONH9bpFQB7Lkusu9bdW9bZB9bg)(NimStringDesc* testName) {
	NIM_BOOL result;
	nimfr_("shouldRun", "unittest.nim")
	result = (NIM_BOOL)0;
	nimln_(97, "unittest.nim");
	result = NIM_TRUE;
	popFrame();
	return result;
}

N_NIMCALL(void, startSuite_VnQKOZmnLzBft9blszroIww)(NimStringDesc* name) {
	nimfr_("startSuite", "unittest.nim")
	nimln_(102, "unittest.nim");
	{
		if (!colorOutput_RKBmueNuWaEwUGh1YH9btZg) goto LA3_;
		nimln_(619, "terminal.nim");
		setStyle_zEKKPPIjKZs9bVYu4TwenLg(stdout, 1);
		setForegroundColor_Tw7yxMupneOmAicqiYt3NA(stdout, ((ForegroundColor_ez9ah4IgQc0AbdW68acioDg) 34), NIM_FALSE);
		write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_3));
		resetAttributes_tFIu39aFSR3N0M64Ynwugng_5(stdout);
		write_c4mGyJBvK73pdM22jiweKQ(stdout, name);
		write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_4));
		resetAttributes_tFIu39aFSR3N0M64Ynwugng_5(stdout);
	}
	goto LA1_;
	LA3_: ;
	{
		nimln_(100, "unittest.nim");
		printf("%s%s\012", ((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_3)? (((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_3))->data:"nil", name? (name)->data:"nil");
		fflush(stdout);
	}
	LA1_: ;
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, testDone_VoVtPHAme9cJ9c6u9cbroe79bQ)(NimStringDesc* name, TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ s, NIM_BOOL indent) {
	NimStringDesc* prefix;
	nimfr_("testDone", "unittest.nim")
	nimln_(152, "unittest.nim");
	{
		NI TM_Um3CQPZ9bILAIolZOsxNIaw_5;
		if (!(s == ((TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ) 1))) goto LA3_;
		nimln_(153, "unittest.nim");
		TM_Um3CQPZ9bILAIolZOsxNIaw_5 = addInt(nim_program_result, ((NI) 1));
		nim_program_result = (NI)(TM_Um3CQPZ9bILAIolZOsxNIaw_5);
	}
	LA3_: ;
	nimln_(154, "unittest.nim");
	{
		if (!indent) goto LA7_;
		prefix = copyString(((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_6));
	}
	goto LA5_;
	LA7_: ;
	{
		prefix = copyString(((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_7));
	}
	LA5_: ;
	nimln_(155, "unittest.nim");
	{
		NIM_BOOL T12_;
		NIM_BOOL T14_;
		T12_ = (NIM_BOOL)0;
		nimln_(347, "system.nim");
		nimln_(155, "unittest.nim");
		T12_ = !((outputLevel_jY0mhj6Kpj9cWEoY2ZPxFRA == ((OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww) 2)));
		if (!(T12_)) goto LA13_;
		T14_ = (NIM_BOOL)0;
		T14_ = (outputLevel_jY0mhj6Kpj9cWEoY2ZPxFRA == ((OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww) 0));
		if (T14_) goto LA15_;
		T14_ = (s == ((TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ) 1));
		LA15_: ;
		T12_ = T14_;
		LA13_: ;
		if (!T12_) goto LA16_;
		nimln_(158, "unittest.nim");
		{
			NIM_BOOL T20_;
			ForegroundColor_ez9ah4IgQc0AbdW68acioDg color;
			T20_ = (NIM_BOOL)0;
			T20_ = colorOutput_RKBmueNuWaEwUGh1YH9btZg;
			if (!(T20_)) goto LA21_;
			T20_ = NIM_TRUE;
			LA21_: ;
			if (!T20_) goto LA22_;
			nimln_(159, "unittest.nim");
			switch (s) {
			case ((TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ) 0):
			{
				color = ((ForegroundColor_ez9ah4IgQc0AbdW68acioDg) 32);
			}
			break;
			case ((TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ) 1):
			{
				color = ((ForegroundColor_ez9ah4IgQc0AbdW68acioDg) 31);
			}
			break;
			case ((TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ) 2):
			{
				color = ((ForegroundColor_ez9ah4IgQc0AbdW68acioDg) 33);
			}
			break;
			default:
			{
				color = ((ForegroundColor_ez9ah4IgQc0AbdW68acioDg) 37);
			}
			break;
			}
			nimln_(619, "terminal.nim");
			setStyle_zEKKPPIjKZs9bVYu4TwenLg(stdout, 1);
			setForegroundColor_Tw7yxMupneOmAicqiYt3NA(stdout, color, NIM_FALSE);
			write_c4mGyJBvK73pdM22jiweKQ(stdout, prefix);
			write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_8));
			nimln_(164, "unittest.nim");
			write_c4mGyJBvK73pdM22jiweKQ(stdout, reprEnum((NI)s, (&NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_)));
			nimln_(619, "terminal.nim");
			write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_12));
			resetAttributes_tFIu39aFSR3N0M64Ynwugng_5(stdout);
			write_c4mGyJBvK73pdM22jiweKQ(stdout, name);
			write_c4mGyJBvK73pdM22jiweKQ(stdout, ((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_4));
			resetAttributes_tFIu39aFSR3N0M64Ynwugng_5(stdout);
		}
		goto LA18_;
		LA22_: ;
		{
			nimln_(156, "unittest.nim");
			printf("%s%s%s%s%s\012", prefix? (prefix)->data:"nil", ((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_8)? (((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_8))->data:"nil", reprEnum((NI)s, (&NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_))? (reprEnum((NI)s, (&NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_)))->data:"nil", ((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_12)? (((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_12))->data:"nil", name? (name)->data:"nil");
			fflush(stdout);
		}
		LA18_: ;
	}
	LA16_: ;
	popFrame();
}

N_NIMCALL(void, checkpoint_4nBz3prx9cKVVOoTZb4rNCQ)(NimStringDesc* msg) {
	NimStringDesc* T1_;
	nimfr_("checkpoint", "unittest.nim")
	nimln_(216, "unittest.nim");
	checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ)->Sup, sizeof(NimStringDesc*));
	T1_ = (NimStringDesc*)0;
	T1_ = checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ->data[checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ->Sup.len]; checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ->data[checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ->Sup.len] = copyStringRC1(msg);
	if (T1_) nimGCunrefNoCycle(T1_);
	++checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ->Sup.len;
	popFrame();
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = memcmp(a, b, ((size_t) (size)));
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL T11_;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == NIM_NIL);
		if (T7_) goto LA8_;
		T7_ = (b == NIM_NIL);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA9_: ;
	T11_ = (NIM_BOOL)0;
	T11_ = ((*a).Sup.len == (*b).Sup.len);
	if (!(T11_)) goto LA12_;
	T11_ = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQsystem(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12_: ;
	result = T11_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQunittest)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NI result;
	nimfr_("find", "system.nim")
{	result = (NI)0;
	{
		NimStringDesc* i;
		NI i_2;
		i = (NimStringDesc*)0;
		nimln_(2016, "system.nim");
		i_2 = ((NI) 0);
		{
			nimln_(2017, "system.nim");
			while (1) {
				NI TM_Um3CQPZ9bILAIolZOsxNIaw_13;
				NI TM_Um3CQPZ9bILAIolZOsxNIaw_14;
				if (!(i_2 < aLen_0)) goto LA3;
				nimln_(2018, "system.nim");
				if ((NU)(i_2) >= (NU)(aLen_0)) raiseIndexError();
				i = a[i_2];
				nimln_(2250, "system.nim");
				{
					if (!eqStrings(i, item)) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				nimln_(2251, "system.nim");
				TM_Um3CQPZ9bILAIolZOsxNIaw_13 = addInt(result, ((NI) 1));
				result = (NI)(TM_Um3CQPZ9bILAIolZOsxNIaw_13);
				nimln_(2019, "system.nim");
				TM_Um3CQPZ9bILAIolZOsxNIaw_14 = addInt(i_2, ((NI) 1));
				i_2 = (NI)(TM_Um3CQPZ9bILAIolZOsxNIaw_14);
			} LA3: ;
		}
	}
	nimln_(2252, "system.nim");
	result = ((NI) -1);
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwunittest)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NIM_BOOL result;
	NI T1_;
	nimfr_("contains", "system.nim")
{	result = (NIM_BOOL)0;
	nimln_(2257, "system.nim");
	T1_ = (NI)0;
	T1_ = find_9basNl9bVqn7SOf9bgUeI8TEQunittest(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
static N_NIMCALL(void, TM_Um3CQPZ9bILAIolZOsxNIaw_15)(void) {
	nimGCvisit((void*)envOutLvl_u2FpYBwFbDdjQW68TaA2qA, 0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim")
	nimln_(288, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(347, "system.nim");
		nimln_(288, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(289, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(290, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(291, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(347, "system.nim");
		nimln_(291, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(292, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(293, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(294, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(295, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_unittestInit000)(void) {
	NIM_BOOL T1_;
	nimfr_("unittest", "unittest.nim")
nimRegisterGlobalMarker(TM_Um3CQPZ9bILAIolZOsxNIaw_2);
nimRegisterGlobalMarker(TM_Um3CQPZ9bILAIolZOsxNIaw_15);
	nimln_(94, "unittest.nim");
	if (checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ) nimGCunrefNoCycle(checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ);
	checkpoints_bq5hLRYOyiTcYy29a9akD9c9bQ = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) newSeqRC1((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
	nimln_(408, "unittest.nim");
	asgnRefNoCycle((void**) (&envOutLvl_u2FpYBwFbDdjQW68TaA2qA), getEnv_8zNgT9bxx7m9cTt2TeVdTdIw(((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_16)));
	nimln_(409, "unittest.nim");
	abortOnError_Bte3Uiwc4Q19ago2N4C89cUA = existsEnv_ahpnHkfRE9cLlJNaRpEL7Vw(((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_17));
	nimln_(410, "unittest.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = existsEnv_ahpnHkfRE9cLlJNaRpEL7Vw(((NimStringDesc*) &TM_Um3CQPZ9bILAIolZOsxNIaw_18));
	colorOutput_RKBmueNuWaEwUGh1YH9btZg = !(T1_);
	nimln_(416, "unittest.nim");
	{
		if (!(((NI) 0) < (envOutLvl_u2FpYBwFbDdjQW68TaA2qA ? envOutLvl_u2FpYBwFbDdjQW68TaA2qA->Sup.len : 0))) goto LA4_;
		{
			NI res;
			nimln_(1925, "system.nim");
			res = ((NI) 0);
			{
				nimln_(1926, "system.nim");
				while (1) {
					NI TM_Um3CQPZ9bILAIolZOsxNIaw_22;
					if (!(res <= ((NI) 2))) goto LA8;
					nimln_(1927, "system.nim");
					opt_746xADiU9cIoir6D3vv6qig = ((OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww)chckRange(res, ((OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww) 0), ((OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww) 2)));
					nimln_(418, "unittest.nim");
					{
						if (!eqStrings(reprEnum((NI)opt_746xADiU9cIoir6D3vv6qig, (&NTI_7UfTrIPsm9cGDPwH9bpwJDww_)), envOutLvl_u2FpYBwFbDdjQW68TaA2qA)) goto LA11_;
						nimln_(419, "unittest.nim");
						outputLevel_jY0mhj6Kpj9cWEoY2ZPxFRA = opt_746xADiU9cIoir6D3vv6qig;
						nimln_(420, "unittest.nim");
						goto LA6;
					}
					LA11_: ;
					nimln_(1941, "system.nim");
					TM_Um3CQPZ9bILAIolZOsxNIaw_22 = addInt(res, ((NI) 1));
					res = (NI)(TM_Um3CQPZ9bILAIolZOsxNIaw_22);
				} LA8: ;
			}
		} LA6: ;
	}
	LA4_: ;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_unittestDatInit000)(void) {
static TNimNode* TM_Um3CQPZ9bILAIolZOsxNIaw_9[3];
NI TM_Um3CQPZ9bILAIolZOsxNIaw_11;
static char* NIM_CONST TM_Um3CQPZ9bILAIolZOsxNIaw_10[3] = {
"OK", 
"FAILED", 
"SKIPPED"};
static TNimNode* TM_Um3CQPZ9bILAIolZOsxNIaw_19[3];
NI TM_Um3CQPZ9bILAIolZOsxNIaw_21;
static char* NIM_CONST TM_Um3CQPZ9bILAIolZOsxNIaw_20[3] = {
"PRINT_ALL", 
"PRINT_FAILURES", 
"PRINT_NONE"};
static TNimNode TM_Um3CQPZ9bILAIolZOsxNIaw_0[8];
NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_.size = sizeof(TestStatus_W9bTUg9c9a7UlIYkKYmd5uasQ);
NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_.kind = 14;
NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_.base = 0;
NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_.flags = 3;
for (TM_Um3CQPZ9bILAIolZOsxNIaw_11 = 0; TM_Um3CQPZ9bILAIolZOsxNIaw_11 < 3; TM_Um3CQPZ9bILAIolZOsxNIaw_11++) {
TM_Um3CQPZ9bILAIolZOsxNIaw_0[TM_Um3CQPZ9bILAIolZOsxNIaw_11+0].kind = 1;
TM_Um3CQPZ9bILAIolZOsxNIaw_0[TM_Um3CQPZ9bILAIolZOsxNIaw_11+0].offset = TM_Um3CQPZ9bILAIolZOsxNIaw_11;
TM_Um3CQPZ9bILAIolZOsxNIaw_0[TM_Um3CQPZ9bILAIolZOsxNIaw_11+0].name = TM_Um3CQPZ9bILAIolZOsxNIaw_10[TM_Um3CQPZ9bILAIolZOsxNIaw_11];
TM_Um3CQPZ9bILAIolZOsxNIaw_9[TM_Um3CQPZ9bILAIolZOsxNIaw_11] = &TM_Um3CQPZ9bILAIolZOsxNIaw_0[TM_Um3CQPZ9bILAIolZOsxNIaw_11+0];
}
TM_Um3CQPZ9bILAIolZOsxNIaw_0[3].len = 3; TM_Um3CQPZ9bILAIolZOsxNIaw_0[3].kind = 2; TM_Um3CQPZ9bILAIolZOsxNIaw_0[3].sons = &TM_Um3CQPZ9bILAIolZOsxNIaw_9[0];
NTI_W9bTUg9c9a7UlIYkKYmd5uasQ_.node = &TM_Um3CQPZ9bILAIolZOsxNIaw_0[3];
NTI_7UfTrIPsm9cGDPwH9bpwJDww_.size = sizeof(OutputLevel_7UfTrIPsm9cGDPwH9bpwJDww);
NTI_7UfTrIPsm9cGDPwH9bpwJDww_.kind = 14;
NTI_7UfTrIPsm9cGDPwH9bpwJDww_.base = 0;
NTI_7UfTrIPsm9cGDPwH9bpwJDww_.flags = 3;
for (TM_Um3CQPZ9bILAIolZOsxNIaw_21 = 0; TM_Um3CQPZ9bILAIolZOsxNIaw_21 < 3; TM_Um3CQPZ9bILAIolZOsxNIaw_21++) {
TM_Um3CQPZ9bILAIolZOsxNIaw_0[TM_Um3CQPZ9bILAIolZOsxNIaw_21+4].kind = 1;
TM_Um3CQPZ9bILAIolZOsxNIaw_0[TM_Um3CQPZ9bILAIolZOsxNIaw_21+4].offset = TM_Um3CQPZ9bILAIolZOsxNIaw_21;
TM_Um3CQPZ9bILAIolZOsxNIaw_0[TM_Um3CQPZ9bILAIolZOsxNIaw_21+4].name = TM_Um3CQPZ9bILAIolZOsxNIaw_20[TM_Um3CQPZ9bILAIolZOsxNIaw_21];
TM_Um3CQPZ9bILAIolZOsxNIaw_19[TM_Um3CQPZ9bILAIolZOsxNIaw_21] = &TM_Um3CQPZ9bILAIolZOsxNIaw_0[TM_Um3CQPZ9bILAIolZOsxNIaw_21+4];
}
TM_Um3CQPZ9bILAIolZOsxNIaw_0[7].len = 3; TM_Um3CQPZ9bILAIolZOsxNIaw_0[7].kind = 2; TM_Um3CQPZ9bILAIolZOsxNIaw_0[7].sons = &TM_Um3CQPZ9bILAIolZOsxNIaw_19[0];
NTI_7UfTrIPsm9cGDPwH9bpwJDww_.node = &TM_Um3CQPZ9bILAIolZOsxNIaw_0[7];
}
