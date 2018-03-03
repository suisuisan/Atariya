#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UniRx.InternalUtil.ImmutableList`1<System.Func`2<UniRx.Unit,UniRx.IObservable`1<UniRx.Unit>>>
struct ImmutableList_1_t698161389;
// UniRx.IReactiveProperty`1<System.Boolean>
struct IReactiveProperty_1_t1999751154;
// UniRx.IReadOnlyReactiveProperty`1<System.Boolean>
struct IReadOnlyReactiveProperty_1_t2839249823;
// System.Func`3<System.Boolean,System.Boolean,System.Boolean>
struct Func_3_t4257939362;
// UniRx.IObserver`1<UniRx.Unit>
struct IObserver_1_t811551750;
// System.IDisposable
struct IDisposable_t3640265483;
// UniRx.Subject`1<UniRx.Unit>
struct Subject_1_t3450905854;
// UniRx.ReactiveProperty`1<System.Boolean>
struct ReactiveProperty_1_t3626980155;
// System.Action`2<System.Boolean,UniRx.ReactiveProperty`1<System.Boolean>>
struct Action_2_t3070361696;
// System.String
struct String_t;
// UniRx.IProgress`1<System.Single>
struct IProgress_1_t3968412695;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Action`2<UniRx.Unit,UniRx.AsyncReactiveCommand`1<UniRx.Unit>>
struct Action_2_t2753643464;
// System.Action`2<UniRx.Unit,UniRx.ReactiveCommand`1<UniRx.Unit>>
struct Action_2_t4180013452;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UniRx.Operators.BatchFrameObservable/BatchFrame
struct BatchFrame_t3337927563;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UniRx.ICancelable
struct ICancelable_t3440398893;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UniRx.Operators.BatchFrameObservable
struct BatchFrameObservable_t2539759103;
// UniRx.BooleanDisposable
struct BooleanDisposable_t84760918;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Void
struct Void_t1185182177;
// UnityEngine.WWW
struct WWW_t3688466362;
// UniRx.IObserver`1<System.String>
struct IObserver_1_t3591720268;
// UniRx.IObserver`1<UnityEngine.WWW>
struct IObserver_1_t1137768645;
// UniRx.IObserver`1<System.Byte[]>
struct IObserver_1_t1565949940;
// UniRx.IObserver`1<UnityEngine.AssetBundle>
struct IObserver_1_t2898176831;
// UniRx.IObservable`1<UniRx.Unit>
struct IObservable_1_t1485381605;
// UniRx.IPresenter[]
struct IPresenterU5BU5D_t1029123997;
// UniRx.IPresenter
struct IPresenter_t2289494932;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ASYNCREACTIVECOMMAND_1_T4218979257_H
#define ASYNCREACTIVECOMMAND_1_T4218979257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.AsyncReactiveCommand`1<UniRx.Unit>
struct  AsyncReactiveCommand_1_t4218979257  : public RuntimeObject
{
public:
	// UniRx.InternalUtil.ImmutableList`1<System.Func`2<T,UniRx.IObservable`1<UniRx.Unit>>> UniRx.AsyncReactiveCommand`1::asyncActions
	ImmutableList_1_t698161389 * ___asyncActions_0;
	// System.Object UniRx.AsyncReactiveCommand`1::gate
	RuntimeObject * ___gate_1;
	// UniRx.IReactiveProperty`1<System.Boolean> UniRx.AsyncReactiveCommand`1::canExecuteSource
	RuntimeObject* ___canExecuteSource_2;
	// UniRx.IReadOnlyReactiveProperty`1<System.Boolean> UniRx.AsyncReactiveCommand`1::canExecute
	RuntimeObject* ___canExecute_3;
	// System.Boolean UniRx.AsyncReactiveCommand`1::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_asyncActions_0() { return static_cast<int32_t>(offsetof(AsyncReactiveCommand_1_t4218979257, ___asyncActions_0)); }
	inline ImmutableList_1_t698161389 * get_asyncActions_0() const { return ___asyncActions_0; }
	inline ImmutableList_1_t698161389 ** get_address_of_asyncActions_0() { return &___asyncActions_0; }
	inline void set_asyncActions_0(ImmutableList_1_t698161389 * value)
	{
		___asyncActions_0 = value;
		Il2CppCodeGenWriteBarrier((&___asyncActions_0), value);
	}

	inline static int32_t get_offset_of_gate_1() { return static_cast<int32_t>(offsetof(AsyncReactiveCommand_1_t4218979257, ___gate_1)); }
	inline RuntimeObject * get_gate_1() const { return ___gate_1; }
	inline RuntimeObject ** get_address_of_gate_1() { return &___gate_1; }
	inline void set_gate_1(RuntimeObject * value)
	{
		___gate_1 = value;
		Il2CppCodeGenWriteBarrier((&___gate_1), value);
	}

	inline static int32_t get_offset_of_canExecuteSource_2() { return static_cast<int32_t>(offsetof(AsyncReactiveCommand_1_t4218979257, ___canExecuteSource_2)); }
	inline RuntimeObject* get_canExecuteSource_2() const { return ___canExecuteSource_2; }
	inline RuntimeObject** get_address_of_canExecuteSource_2() { return &___canExecuteSource_2; }
	inline void set_canExecuteSource_2(RuntimeObject* value)
	{
		___canExecuteSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___canExecuteSource_2), value);
	}

	inline static int32_t get_offset_of_canExecute_3() { return static_cast<int32_t>(offsetof(AsyncReactiveCommand_1_t4218979257, ___canExecute_3)); }
	inline RuntimeObject* get_canExecute_3() const { return ___canExecute_3; }
	inline RuntimeObject** get_address_of_canExecute_3() { return &___canExecute_3; }
	inline void set_canExecute_3(RuntimeObject* value)
	{
		___canExecute_3 = value;
		Il2CppCodeGenWriteBarrier((&___canExecute_3), value);
	}

	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AsyncReactiveCommand_1_t4218979257, ___U3CIsDisposedU3Ek__BackingField_4)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_4() const { return ___U3CIsDisposedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_4() { return &___U3CIsDisposedU3Ek__BackingField_4; }
	inline void set_U3CIsDisposedU3Ek__BackingField_4(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_4 = value;
	}
};

struct AsyncReactiveCommand_1_t4218979257_StaticFields
{
public:
	// System.Func`3<System.Boolean,System.Boolean,System.Boolean> UniRx.AsyncReactiveCommand`1::<>f__am$cache0
	Func_3_t4257939362 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(AsyncReactiveCommand_1_t4218979257_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_3_t4257939362 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_3_t4257939362 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_3_t4257939362 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCREACTIVECOMMAND_1_T4218979257_H
#ifndef OPERATOROBSERVERBASE_2_T3781804006_H
#define OPERATOROBSERVERBASE_2_T3781804006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct  OperatorObserverBase_2_t3781804006  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t3781804006, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((&___observer_0), value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t3781804006, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancel_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATOROBSERVERBASE_2_T3781804006_H
#ifndef REACTIVECOMMAND_1_T1350381949_H
#define REACTIVECOMMAND_1_T1350381949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ReactiveCommand`1<UniRx.Unit>
struct  ReactiveCommand_1_t1350381949  : public RuntimeObject
{
public:
	// UniRx.Subject`1<T> UniRx.ReactiveCommand`1::trigger
	Subject_1_t3450905854 * ___trigger_0;
	// System.IDisposable UniRx.ReactiveCommand`1::canExecuteSubscription
	RuntimeObject* ___canExecuteSubscription_1;
	// UniRx.ReactiveProperty`1<System.Boolean> UniRx.ReactiveCommand`1::canExecute
	ReactiveProperty_1_t3626980155 * ___canExecute_2;
	// System.Boolean UniRx.ReactiveCommand`1::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_trigger_0() { return static_cast<int32_t>(offsetof(ReactiveCommand_1_t1350381949, ___trigger_0)); }
	inline Subject_1_t3450905854 * get_trigger_0() const { return ___trigger_0; }
	inline Subject_1_t3450905854 ** get_address_of_trigger_0() { return &___trigger_0; }
	inline void set_trigger_0(Subject_1_t3450905854 * value)
	{
		___trigger_0 = value;
		Il2CppCodeGenWriteBarrier((&___trigger_0), value);
	}

	inline static int32_t get_offset_of_canExecuteSubscription_1() { return static_cast<int32_t>(offsetof(ReactiveCommand_1_t1350381949, ___canExecuteSubscription_1)); }
	inline RuntimeObject* get_canExecuteSubscription_1() const { return ___canExecuteSubscription_1; }
	inline RuntimeObject** get_address_of_canExecuteSubscription_1() { return &___canExecuteSubscription_1; }
	inline void set_canExecuteSubscription_1(RuntimeObject* value)
	{
		___canExecuteSubscription_1 = value;
		Il2CppCodeGenWriteBarrier((&___canExecuteSubscription_1), value);
	}

	inline static int32_t get_offset_of_canExecute_2() { return static_cast<int32_t>(offsetof(ReactiveCommand_1_t1350381949, ___canExecute_2)); }
	inline ReactiveProperty_1_t3626980155 * get_canExecute_2() const { return ___canExecute_2; }
	inline ReactiveProperty_1_t3626980155 ** get_address_of_canExecute_2() { return &___canExecute_2; }
	inline void set_canExecute_2(ReactiveProperty_1_t3626980155 * value)
	{
		___canExecute_2 = value;
		Il2CppCodeGenWriteBarrier((&___canExecute_2), value);
	}

	inline static int32_t get_offset_of_U3CIsDisposedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ReactiveCommand_1_t1350381949, ___U3CIsDisposedU3Ek__BackingField_3)); }
	inline bool get_U3CIsDisposedU3Ek__BackingField_3() const { return ___U3CIsDisposedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsDisposedU3Ek__BackingField_3() { return &___U3CIsDisposedU3Ek__BackingField_3; }
	inline void set_U3CIsDisposedU3Ek__BackingField_3(bool value)
	{
		___U3CIsDisposedU3Ek__BackingField_3 = value;
	}
};

struct ReactiveCommand_1_t1350381949_StaticFields
{
public:
	// System.Action`2<System.Boolean,UniRx.ReactiveProperty`1<System.Boolean>> UniRx.ReactiveCommand`1::<>f__am$cache0
	Action_2_t3070361696 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(ReactiveCommand_1_t1350381949_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Action_2_t3070361696 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Action_2_t3070361696 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Action_2_t3070361696 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REACTIVECOMMAND_1_T1350381949_H
#ifndef U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY13_T2957179115_H
#define U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY13_T2957179115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey13
struct  U3CLoadFromCacheOrDownloadU3Ec__AnonStorey13_t2957179115  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey13::url
	String_t* ___url_0;
	// System.Int32 UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey13::version
	int32_t ___version_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey13::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey13_t2957179115, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey13_t2957179115, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey13_t2957179115, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY13_T2957179115_H
#ifndef U3CPOSTWWWU3EC__ANONSTOREY12_T3399653964_H
#define U3CPOSTWWWU3EC__ANONSTOREY12_T3399653964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<PostWWW>c__AnonStorey12
struct  U3CPostWWWU3Ec__AnonStorey12_t3399653964  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<PostWWW>c__AnonStorey12::url
	String_t* ___url_0;
	// UnityEngine.WWWForm UniRx.ObservableWWW/<PostWWW>c__AnonStorey12::content
	WWWForm_t4064702195 * ___content_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<PostWWW>c__AnonStorey12::contentHeaders
	Dictionary_2_t1632706988 * ___contentHeaders_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<PostWWW>c__AnonStorey12::headers
	Dictionary_2_t1632706988 * ___headers_3;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<PostWWW>c__AnonStorey12::progress
	RuntimeObject* ___progress_4;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey12_t3399653964, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey12_t3399653964, ___content_1)); }
	inline WWWForm_t4064702195 * get_content_1() const { return ___content_1; }
	inline WWWForm_t4064702195 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(WWWForm_t4064702195 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}

	inline static int32_t get_offset_of_contentHeaders_2() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey12_t3399653964, ___contentHeaders_2)); }
	inline Dictionary_2_t1632706988 * get_contentHeaders_2() const { return ___contentHeaders_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_contentHeaders_2() { return &___contentHeaders_2; }
	inline void set_contentHeaders_2(Dictionary_2_t1632706988 * value)
	{
		___contentHeaders_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentHeaders_2), value);
	}

	inline static int32_t get_offset_of_headers_3() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey12_t3399653964, ___headers_3)); }
	inline Dictionary_2_t1632706988 * get_headers_3() const { return ___headers_3; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_3() { return &___headers_3; }
	inline void set_headers_3(Dictionary_2_t1632706988 * value)
	{
		___headers_3 = value;
		Il2CppCodeGenWriteBarrier((&___headers_3), value);
	}

	inline static int32_t get_offset_of_progress_4() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey12_t3399653964, ___progress_4)); }
	inline RuntimeObject* get_progress_4() const { return ___progress_4; }
	inline RuntimeObject** get_address_of_progress_4() { return &___progress_4; }
	inline void set_progress_4(RuntimeObject* value)
	{
		___progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___progress_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTWWWU3EC__ANONSTOREY12_T3399653964_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY14_T3766483179_H
#define U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY14_T3766483179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey14
struct  U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey14::url
	String_t* ___url_0;
	// System.Int32 UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey14::version
	int32_t ___version_1;
	// System.UInt32 UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey14::crc
	uint32_t ___crc_2;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey14::progress
	RuntimeObject* ___progress_3;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_crc_2() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179, ___crc_2)); }
	inline uint32_t get_crc_2() const { return ___crc_2; }
	inline uint32_t* get_address_of_crc_2() { return &___crc_2; }
	inline void set_crc_2(uint32_t value)
	{
		___crc_2 = value;
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___progress_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY14_T3766483179_H
#ifndef OPERATOROBSERVABLEBASE_1_T354719556_H
#define OPERATOROBSERVABLEBASE_1_T354719556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>
struct  OperatorObservableBase_1_t354719556  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_t354719556, ___isRequiredSubscribeOnCurrentThread_0)); }
	inline bool get_isRequiredSubscribeOnCurrentThread_0() const { return ___isRequiredSubscribeOnCurrentThread_0; }
	inline bool* get_address_of_isRequiredSubscribeOnCurrentThread_0() { return &___isRequiredSubscribeOnCurrentThread_0; }
	inline void set_isRequiredSubscribeOnCurrentThread_0(bool value)
	{
		___isRequiredSubscribeOnCurrentThread_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATOROBSERVABLEBASE_1_T354719556_H
#ifndef REACTIVEDICTIONARYEXTENSIONS_T2909995766_H
#define REACTIVEDICTIONARYEXTENSIONS_T2909995766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ReactiveDictionaryExtensions
struct  ReactiveDictionaryExtensions_t2909995766  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REACTIVEDICTIONARYEXTENSIONS_T2909995766_H
#ifndef ASYNCREACTIVECOMMANDEXTENSIONS_T454737267_H
#define ASYNCREACTIVECOMMANDEXTENSIONS_T454737267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.AsyncReactiveCommandExtensions
struct  AsyncReactiveCommandExtensions_t454737267  : public RuntimeObject
{
public:

public:
};

struct AsyncReactiveCommandExtensions_t454737267_StaticFields
{
public:
	// System.Action`2<UniRx.Unit,UniRx.AsyncReactiveCommand`1<UniRx.Unit>> UniRx.AsyncReactiveCommandExtensions::<>f__am$cache0
	Action_2_t2753643464 * ___U3CU3Ef__amU24cache0_0;
	// System.Action`2<UniRx.Unit,UniRx.AsyncReactiveCommand`1<UniRx.Unit>> UniRx.AsyncReactiveCommandExtensions::<>f__am$cache1
	Action_2_t2753643464 * ___U3CU3Ef__amU24cache1_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(AsyncReactiveCommandExtensions_t454737267_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Action_2_t2753643464 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Action_2_t2753643464 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Action_2_t2753643464 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(AsyncReactiveCommandExtensions_t454737267_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Action_2_t2753643464 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Action_2_t2753643464 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Action_2_t2753643464 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCREACTIVECOMMANDEXTENSIONS_T454737267_H
#ifndef REACTIVECOMMANDEXTENSIONS_T1223375871_H
#define REACTIVECOMMANDEXTENSIONS_T1223375871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ReactiveCommandExtensions
struct  ReactiveCommandExtensions_t1223375871  : public RuntimeObject
{
public:

public:
};

struct ReactiveCommandExtensions_t1223375871_StaticFields
{
public:
	// System.Action`2<UniRx.Unit,UniRx.ReactiveCommand`1<UniRx.Unit>> UniRx.ReactiveCommandExtensions::<>f__am$cache0
	Action_2_t4180013452 * ___U3CU3Ef__amU24cache0_0;
	// System.Action`2<UniRx.Unit,UniRx.ReactiveCommand`1<UniRx.Unit>> UniRx.ReactiveCommandExtensions::<>f__am$cache1
	Action_2_t4180013452 * ___U3CU3Ef__amU24cache1_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(ReactiveCommandExtensions_t1223375871_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Action_2_t4180013452 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Action_2_t4180013452 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Action_2_t4180013452 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(ReactiveCommandExtensions_t1223375871_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Action_2_t4180013452 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Action_2_t4180013452 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Action_2_t4180013452 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REACTIVECOMMANDEXTENSIONS_T1223375871_H
#ifndef REACTIVECOLLECTIONEXTENSIONS_T1881372181_H
#define REACTIVECOLLECTIONEXTENSIONS_T1881372181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ReactiveCollectionExtensions
struct  ReactiveCollectionExtensions_t1881372181  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REACTIVECOLLECTIONEXTENSIONS_T1881372181_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef OBSERVEEXTENSIONS_T3076931129_H
#define OBSERVEEXTENSIONS_T3076931129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObserveExtensions
struct  ObserveExtensions_t3076931129  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVEEXTENSIONS_T3076931129_H
#ifndef REUSABLEENUMERATOR_T911091657_H
#define REUSABLEENUMERATOR_T911091657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator
struct  ReusableEnumerator_t911091657  : public RuntimeObject
{
public:
	// UniRx.Operators.BatchFrameObservable/BatchFrame UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::parent
	BatchFrame_t3337927563 * ___parent_0;
	// System.Int32 UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::currentFrame
	int32_t ___currentFrame_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(ReusableEnumerator_t911091657, ___parent_0)); }
	inline BatchFrame_t3337927563 * get_parent_0() const { return ___parent_0; }
	inline BatchFrame_t3337927563 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(BatchFrame_t3337927563 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_currentFrame_1() { return static_cast<int32_t>(offsetof(ReusableEnumerator_t911091657, ___currentFrame_1)); }
	inline int32_t get_currentFrame_1() const { return ___currentFrame_1; }
	inline int32_t* get_address_of_currentFrame_1() { return &___currentFrame_1; }
	inline void set_currentFrame_1(int32_t value)
	{
		___currentFrame_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REUSABLEENUMERATOR_T911091657_H
#ifndef U3CPOSTWWWU3EC__ANONSTOREY11_T1825675852_H
#define U3CPOSTWWWU3EC__ANONSTOREY11_T1825675852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<PostWWW>c__AnonStorey11
struct  U3CPostWWWU3Ec__AnonStorey11_t1825675852  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<PostWWW>c__AnonStorey11::url
	String_t* ___url_0;
	// UnityEngine.WWWForm UniRx.ObservableWWW/<PostWWW>c__AnonStorey11::content
	WWWForm_t4064702195 * ___content_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<PostWWW>c__AnonStorey11::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey11_t1825675852, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey11_t1825675852, ___content_1)); }
	inline WWWForm_t4064702195 * get_content_1() const { return ___content_1; }
	inline WWWForm_t4064702195 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(WWWForm_t4064702195 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey11_t1825675852, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTWWWU3EC__ANONSTOREY11_T1825675852_H
#ifndef U3CGETWWWU3EC__ANONSTOREY6_T794373360_H
#define U3CGETWWWU3EC__ANONSTOREY6_T794373360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<GetWWW>c__AnonStorey6
struct  U3CGetWWWU3Ec__AnonStorey6_t794373360  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<GetWWW>c__AnonStorey6::url
	String_t* ___url_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<GetWWW>c__AnonStorey6::headers
	Dictionary_2_t1632706988 * ___headers_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<GetWWW>c__AnonStorey6::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CGetWWWU3Ec__AnonStorey6_t794373360, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_headers_1() { return static_cast<int32_t>(offsetof(U3CGetWWWU3Ec__AnonStorey6_t794373360, ___headers_1)); }
	inline Dictionary_2_t1632706988 * get_headers_1() const { return ___headers_1; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_1() { return &___headers_1; }
	inline void set_headers_1(Dictionary_2_t1632706988 * value)
	{
		___headers_1 = value;
		Il2CppCodeGenWriteBarrier((&___headers_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CGetWWWU3Ec__AnonStorey6_t794373360, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETWWWU3EC__ANONSTOREY6_T794373360_H
#ifndef U3CGETANDGETBYTESU3EC__ANONSTOREY5_T2468502_H
#define U3CGETANDGETBYTESU3EC__ANONSTOREY5_T2468502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<GetAndGetBytes>c__AnonStorey5
struct  U3CGetAndGetBytesU3Ec__AnonStorey5_t2468502  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<GetAndGetBytes>c__AnonStorey5::url
	String_t* ___url_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<GetAndGetBytes>c__AnonStorey5::headers
	Dictionary_2_t1632706988 * ___headers_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<GetAndGetBytes>c__AnonStorey5::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CGetAndGetBytesU3Ec__AnonStorey5_t2468502, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_headers_1() { return static_cast<int32_t>(offsetof(U3CGetAndGetBytesU3Ec__AnonStorey5_t2468502, ___headers_1)); }
	inline Dictionary_2_t1632706988 * get_headers_1() const { return ___headers_1; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_1() { return &___headers_1; }
	inline void set_headers_1(Dictionary_2_t1632706988 * value)
	{
		___headers_1 = value;
		Il2CppCodeGenWriteBarrier((&___headers_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CGetAndGetBytesU3Ec__AnonStorey5_t2468502, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETANDGETBYTESU3EC__ANONSTOREY5_T2468502_H
#ifndef U3CPOSTU3EC__ANONSTOREY8_T1207432419_H
#define U3CPOSTU3EC__ANONSTOREY8_T1207432419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<Post>c__AnonStorey8
struct  U3CPostU3Ec__AnonStorey8_t1207432419  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<Post>c__AnonStorey8::url
	String_t* ___url_0;
	// System.Byte[] UniRx.ObservableWWW/<Post>c__AnonStorey8::postData
	ByteU5BU5D_t4116647657* ___postData_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<Post>c__AnonStorey8::headers
	Dictionary_2_t1632706988 * ___headers_2;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<Post>c__AnonStorey8::progress
	RuntimeObject* ___progress_3;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey8_t1207432419, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_postData_1() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey8_t1207432419, ___postData_1)); }
	inline ByteU5BU5D_t4116647657* get_postData_1() const { return ___postData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_postData_1() { return &___postData_1; }
	inline void set_postData_1(ByteU5BU5D_t4116647657* value)
	{
		___postData_1 = value;
		Il2CppCodeGenWriteBarrier((&___postData_1), value);
	}

	inline static int32_t get_offset_of_headers_2() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey8_t1207432419, ___headers_2)); }
	inline Dictionary_2_t1632706988 * get_headers_2() const { return ___headers_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_2() { return &___headers_2; }
	inline void set_headers_2(Dictionary_2_t1632706988 * value)
	{
		___headers_2 = value;
		Il2CppCodeGenWriteBarrier((&___headers_2), value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey8_t1207432419, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___progress_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTU3EC__ANONSTOREY8_T1207432419_H
#ifndef U3CPOSTU3EC__ANONSTOREY7_T869725411_H
#define U3CPOSTU3EC__ANONSTOREY7_T869725411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<Post>c__AnonStorey7
struct  U3CPostU3Ec__AnonStorey7_t869725411  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<Post>c__AnonStorey7::url
	String_t* ___url_0;
	// System.Byte[] UniRx.ObservableWWW/<Post>c__AnonStorey7::postData
	ByteU5BU5D_t4116647657* ___postData_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<Post>c__AnonStorey7::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey7_t869725411, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_postData_1() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey7_t869725411, ___postData_1)); }
	inline ByteU5BU5D_t4116647657* get_postData_1() const { return ___postData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_postData_1() { return &___postData_1; }
	inline void set_postData_1(ByteU5BU5D_t4116647657* value)
	{
		___postData_1 = value;
		Il2CppCodeGenWriteBarrier((&___postData_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey7_t869725411, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTU3EC__ANONSTOREY7_T869725411_H
#ifndef FRAMECOUNTTYPEEXTENSIONS_T2621917262_H
#define FRAMECOUNTTYPEEXTENSIONS_T2621917262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.FrameCountTypeExtensions
struct  FrameCountTypeExtensions_t2621917262  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMECOUNTTYPEEXTENSIONS_T2621917262_H
#ifndef U3CEMPTYENUMERATORU3EC__ITERATOR0_T3471758210_H
#define U3CEMPTYENUMERATORU3EC__ITERATOR0_T3471758210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObserveExtensions/<EmptyEnumerator>c__Iterator0
struct  U3CEmptyEnumeratorU3Ec__Iterator0_t3471758210  : public RuntimeObject
{
public:
	// System.Object UniRx.ObserveExtensions/<EmptyEnumerator>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean UniRx.ObserveExtensions/<EmptyEnumerator>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 UniRx.ObserveExtensions/<EmptyEnumerator>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CEmptyEnumeratorU3Ec__Iterator0_t3471758210, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CEmptyEnumeratorU3Ec__Iterator0_t3471758210, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CEmptyEnumeratorU3Ec__Iterator0_t3471758210, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEMPTYENUMERATORU3EC__ITERATOR0_T3471758210_H
#ifndef U3CGETU3EC__ANONSTOREY4_T1801188099_H
#define U3CGETU3EC__ANONSTOREY4_T1801188099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<Get>c__AnonStorey4
struct  U3CGetU3Ec__AnonStorey4_t1801188099  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<Get>c__AnonStorey4::url
	String_t* ___url_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<Get>c__AnonStorey4::headers
	Dictionary_2_t1632706988 * ___headers_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<Get>c__AnonStorey4::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CGetU3Ec__AnonStorey4_t1801188099, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_headers_1() { return static_cast<int32_t>(offsetof(U3CGetU3Ec__AnonStorey4_t1801188099, ___headers_1)); }
	inline Dictionary_2_t1632706988 * get_headers_1() const { return ___headers_1; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_1() { return &___headers_1; }
	inline void set_headers_1(Dictionary_2_t1632706988 * value)
	{
		___headers_1 = value;
		Il2CppCodeGenWriteBarrier((&___headers_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CGetU3Ec__AnonStorey4_t1801188099, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETU3EC__ANONSTOREY4_T1801188099_H
#ifndef OBSERVABLEWWW_T1879783302_H
#define OBSERVABLEWWW_T1879783302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW
struct  ObservableWWW_t1879783302  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVABLEWWW_T1879783302_H
#ifndef U3CPOSTU3EC__ANONSTOREY9_T3546084579_H
#define U3CPOSTU3EC__ANONSTOREY9_T3546084579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<Post>c__AnonStorey9
struct  U3CPostU3Ec__AnonStorey9_t3546084579  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<Post>c__AnonStorey9::url
	String_t* ___url_0;
	// UnityEngine.WWWForm UniRx.ObservableWWW/<Post>c__AnonStorey9::content
	WWWForm_t4064702195 * ___content_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<Post>c__AnonStorey9::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey9_t3546084579, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey9_t3546084579, ___content_1)); }
	inline WWWForm_t4064702195 * get_content_1() const { return ___content_1; }
	inline WWWForm_t4064702195 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(WWWForm_t4064702195 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey9_t3546084579, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTU3EC__ANONSTOREY9_T3546084579_H
#ifndef U3CPOSTANDGETBYTESU3EC__ANONSTOREYE_T3769743018_H
#define U3CPOSTANDGETBYTESU3EC__ANONSTOREYE_T3769743018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyE
struct  U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyE::url
	String_t* ___url_0;
	// UnityEngine.WWWForm UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyE::content
	WWWForm_t4064702195 * ___content_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyE::contentHeaders
	Dictionary_2_t1632706988 * ___contentHeaders_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyE::headers
	Dictionary_2_t1632706988 * ___headers_3;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyE::progress
	RuntimeObject* ___progress_4;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018, ___content_1)); }
	inline WWWForm_t4064702195 * get_content_1() const { return ___content_1; }
	inline WWWForm_t4064702195 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(WWWForm_t4064702195 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}

	inline static int32_t get_offset_of_contentHeaders_2() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018, ___contentHeaders_2)); }
	inline Dictionary_2_t1632706988 * get_contentHeaders_2() const { return ___contentHeaders_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_contentHeaders_2() { return &___contentHeaders_2; }
	inline void set_contentHeaders_2(Dictionary_2_t1632706988 * value)
	{
		___contentHeaders_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentHeaders_2), value);
	}

	inline static int32_t get_offset_of_headers_3() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018, ___headers_3)); }
	inline Dictionary_2_t1632706988 * get_headers_3() const { return ___headers_3; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_3() { return &___headers_3; }
	inline void set_headers_3(Dictionary_2_t1632706988 * value)
	{
		___headers_3 = value;
		Il2CppCodeGenWriteBarrier((&___headers_3), value);
	}

	inline static int32_t get_offset_of_progress_4() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018, ___progress_4)); }
	inline RuntimeObject* get_progress_4() const { return ___progress_4; }
	inline RuntimeObject** get_address_of_progress_4() { return &___progress_4; }
	inline void set_progress_4(RuntimeObject* value)
	{
		___progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___progress_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTANDGETBYTESU3EC__ANONSTOREYE_T3769743018_H
#ifndef U3CPOSTANDGETBYTESU3EC__ANONSTOREYD_T1040859663_H
#define U3CPOSTANDGETBYTESU3EC__ANONSTOREYD_T1040859663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyD
struct  U3CPostAndGetBytesU3Ec__AnonStoreyD_t1040859663  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyD::url
	String_t* ___url_0;
	// UnityEngine.WWWForm UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyD::content
	WWWForm_t4064702195 * ___content_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyD::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyD_t1040859663, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyD_t1040859663, ___content_1)); }
	inline WWWForm_t4064702195 * get_content_1() const { return ___content_1; }
	inline WWWForm_t4064702195 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(WWWForm_t4064702195 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyD_t1040859663, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTANDGETBYTESU3EC__ANONSTOREYD_T1040859663_H
#ifndef U3CPOSTWWWU3EC__ANONSTOREY10_T3781990988_H
#define U3CPOSTWWWU3EC__ANONSTOREY10_T3781990988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<PostWWW>c__AnonStorey10
struct  U3CPostWWWU3Ec__AnonStorey10_t3781990988  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<PostWWW>c__AnonStorey10::url
	String_t* ___url_0;
	// System.Byte[] UniRx.ObservableWWW/<PostWWW>c__AnonStorey10::postData
	ByteU5BU5D_t4116647657* ___postData_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<PostWWW>c__AnonStorey10::headers
	Dictionary_2_t1632706988 * ___headers_2;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<PostWWW>c__AnonStorey10::progress
	RuntimeObject* ___progress_3;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey10_t3781990988, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_postData_1() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey10_t3781990988, ___postData_1)); }
	inline ByteU5BU5D_t4116647657* get_postData_1() const { return ___postData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_postData_1() { return &___postData_1; }
	inline void set_postData_1(ByteU5BU5D_t4116647657* value)
	{
		___postData_1 = value;
		Il2CppCodeGenWriteBarrier((&___postData_1), value);
	}

	inline static int32_t get_offset_of_headers_2() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey10_t3781990988, ___headers_2)); }
	inline Dictionary_2_t1632706988 * get_headers_2() const { return ___headers_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_2() { return &___headers_2; }
	inline void set_headers_2(Dictionary_2_t1632706988 * value)
	{
		___headers_2 = value;
		Il2CppCodeGenWriteBarrier((&___headers_2), value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStorey10_t3781990988, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___progress_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTWWWU3EC__ANONSTOREY10_T3781990988_H
#ifndef U3CPOSTWWWU3EC__ANONSTOREYF_T1147649635_H
#define U3CPOSTWWWU3EC__ANONSTOREYF_T1147649635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<PostWWW>c__AnonStoreyF
struct  U3CPostWWWU3Ec__AnonStoreyF_t1147649635  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<PostWWW>c__AnonStoreyF::url
	String_t* ___url_0;
	// System.Byte[] UniRx.ObservableWWW/<PostWWW>c__AnonStoreyF::postData
	ByteU5BU5D_t4116647657* ___postData_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<PostWWW>c__AnonStoreyF::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStoreyF_t1147649635, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_postData_1() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStoreyF_t1147649635, ___postData_1)); }
	inline ByteU5BU5D_t4116647657* get_postData_1() const { return ___postData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_postData_1() { return &___postData_1; }
	inline void set_postData_1(ByteU5BU5D_t4116647657* value)
	{
		___postData_1 = value;
		Il2CppCodeGenWriteBarrier((&___postData_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CPostWWWU3Ec__AnonStoreyF_t1147649635, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTWWWU3EC__ANONSTOREYF_T1147649635_H
#ifndef U3CPOSTANDGETBYTESU3EC__ANONSTOREYC_T2963173964_H
#define U3CPOSTANDGETBYTESU3EC__ANONSTOREYC_T2963173964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyC
struct  U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyC::url
	String_t* ___url_0;
	// System.Byte[] UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyC::postData
	ByteU5BU5D_t4116647657* ___postData_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyC::headers
	Dictionary_2_t1632706988 * ___headers_2;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyC::progress
	RuntimeObject* ___progress_3;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_postData_1() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964, ___postData_1)); }
	inline ByteU5BU5D_t4116647657* get_postData_1() const { return ___postData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_postData_1() { return &___postData_1; }
	inline void set_postData_1(ByteU5BU5D_t4116647657* value)
	{
		___postData_1 = value;
		Il2CppCodeGenWriteBarrier((&___postData_1), value);
	}

	inline static int32_t get_offset_of_headers_2() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964, ___headers_2)); }
	inline Dictionary_2_t1632706988 * get_headers_2() const { return ___headers_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_2() { return &___headers_2; }
	inline void set_headers_2(Dictionary_2_t1632706988 * value)
	{
		___headers_2 = value;
		Il2CppCodeGenWriteBarrier((&___headers_2), value);
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___progress_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTANDGETBYTESU3EC__ANONSTOREYC_T2963173964_H
#ifndef U3CPOSTANDGETBYTESU3EC__ANONSTOREYB_T234290609_H
#define U3CPOSTANDGETBYTESU3EC__ANONSTOREYB_T234290609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyB
struct  U3CPostAndGetBytesU3Ec__AnonStoreyB_t234290609  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyB::url
	String_t* ___url_0;
	// System.Byte[] UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyB::postData
	ByteU5BU5D_t4116647657* ___postData_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<PostAndGetBytes>c__AnonStoreyB::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyB_t234290609, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_postData_1() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyB_t234290609, ___postData_1)); }
	inline ByteU5BU5D_t4116647657* get_postData_1() const { return ___postData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_postData_1() { return &___postData_1; }
	inline void set_postData_1(ByteU5BU5D_t4116647657* value)
	{
		___postData_1 = value;
		Il2CppCodeGenWriteBarrier((&___postData_1), value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CPostAndGetBytesU3Ec__AnonStoreyB_t234290609, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTANDGETBYTESU3EC__ANONSTOREYB_T234290609_H
#ifndef U3CPOSTU3EC__ANONSTOREYA_T1430582499_H
#define U3CPOSTU3EC__ANONSTOREYA_T1430582499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<Post>c__AnonStoreyA
struct  U3CPostU3Ec__AnonStoreyA_t1430582499  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<Post>c__AnonStoreyA::url
	String_t* ___url_0;
	// UnityEngine.WWWForm UniRx.ObservableWWW/<Post>c__AnonStoreyA::content
	WWWForm_t4064702195 * ___content_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<Post>c__AnonStoreyA::contentHeaders
	Dictionary_2_t1632706988 * ___contentHeaders_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.ObservableWWW/<Post>c__AnonStoreyA::headers
	Dictionary_2_t1632706988 * ___headers_3;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<Post>c__AnonStoreyA::progress
	RuntimeObject* ___progress_4;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStoreyA_t1430582499, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStoreyA_t1430582499, ___content_1)); }
	inline WWWForm_t4064702195 * get_content_1() const { return ___content_1; }
	inline WWWForm_t4064702195 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(WWWForm_t4064702195 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}

	inline static int32_t get_offset_of_contentHeaders_2() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStoreyA_t1430582499, ___contentHeaders_2)); }
	inline Dictionary_2_t1632706988 * get_contentHeaders_2() const { return ___contentHeaders_2; }
	inline Dictionary_2_t1632706988 ** get_address_of_contentHeaders_2() { return &___contentHeaders_2; }
	inline void set_contentHeaders_2(Dictionary_2_t1632706988 * value)
	{
		___contentHeaders_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentHeaders_2), value);
	}

	inline static int32_t get_offset_of_headers_3() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStoreyA_t1430582499, ___headers_3)); }
	inline Dictionary_2_t1632706988 * get_headers_3() const { return ___headers_3; }
	inline Dictionary_2_t1632706988 ** get_address_of_headers_3() { return &___headers_3; }
	inline void set_headers_3(Dictionary_2_t1632706988 * value)
	{
		___headers_3 = value;
		Il2CppCodeGenWriteBarrier((&___headers_3), value);
	}

	inline static int32_t get_offset_of_progress_4() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStoreyA_t1430582499, ___progress_4)); }
	inline RuntimeObject* get_progress_4() const { return ___progress_4; }
	inline RuntimeObject** get_address_of_progress_4() { return &___progress_4; }
	inline void set_progress_4(RuntimeObject* value)
	{
		___progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___progress_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTU3EC__ANONSTOREYA_T1430582499_H
#ifndef HASH128_T2357739769_H
#define HASH128_T2357739769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Hash128
struct  Hash128_t2357739769 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_t2357739769, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_t2357739769, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_t2357739769, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_t2357739769, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH128_T2357739769_H
#ifndef CANCELLATIONTOKEN_T1265546479_H
#define CANCELLATIONTOKEN_T1265546479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CancellationToken
struct  CancellationToken_t1265546479 
{
public:
	// UniRx.ICancelable UniRx.CancellationToken::source
	RuntimeObject* ___source_0;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t1265546479, ___source_0)); }
	inline RuntimeObject* get_source_0() const { return ___source_0; }
	inline RuntimeObject** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(RuntimeObject* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}
};

struct CancellationToken_t1265546479_StaticFields
{
public:
	// UniRx.CancellationToken UniRx.CancellationToken::Empty
	CancellationToken_t1265546479  ___Empty_1;
	// UniRx.CancellationToken UniRx.CancellationToken::None
	CancellationToken_t1265546479  ___None_2;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(CancellationToken_t1265546479_StaticFields, ___Empty_1)); }
	inline CancellationToken_t1265546479  get_Empty_1() const { return ___Empty_1; }
	inline CancellationToken_t1265546479 * get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(CancellationToken_t1265546479  value)
	{
		___Empty_1 = value;
	}

	inline static int32_t get_offset_of_None_2() { return static_cast<int32_t>(offsetof(CancellationToken_t1265546479_StaticFields, ___None_2)); }
	inline CancellationToken_t1265546479  get_None_2() const { return ___None_2; }
	inline CancellationToken_t1265546479 * get_address_of_None_2() { return &___None_2; }
	inline void set_None_2(CancellationToken_t1265546479  value)
	{
		___None_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniRx.CancellationToken
struct CancellationToken_t1265546479_marshaled_pinvoke
{
	RuntimeObject* ___source_0;
};
// Native definition for COM marshalling of UniRx.CancellationToken
struct CancellationToken_t1265546479_marshaled_com
{
	RuntimeObject* ___source_0;
};
#endif // CANCELLATIONTOKEN_T1265546479_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef UNIT_T3362249467_H
#define UNIT_T3362249467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Unit
struct  Unit_t3362249467 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Unit_t3362249467__padding[1];
	};

public:
};

struct Unit_t3362249467_StaticFields
{
public:
	// UniRx.Unit UniRx.Unit::default
	Unit_t3362249467  ___default_0;

public:
	inline static int32_t get_offset_of_default_0() { return static_cast<int32_t>(offsetof(Unit_t3362249467_StaticFields, ___default_0)); }
	inline Unit_t3362249467  get_default_0() const { return ___default_0; }
	inline Unit_t3362249467 * get_address_of_default_0() { return &___default_0; }
	inline void set_default_0(Unit_t3362249467  value)
	{
		___default_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIT_T3362249467_H
#ifndef BATCHFRAME_T3337927563_H
#define BATCHFRAME_T3337927563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.BatchFrameObservable/BatchFrame
struct  BatchFrame_t3337927563  : public OperatorObserverBase_2_t3781804006
{
public:
	// UniRx.Operators.BatchFrameObservable UniRx.Operators.BatchFrameObservable/BatchFrame::parent
	BatchFrameObservable_t2539759103 * ___parent_2;
	// System.Object UniRx.Operators.BatchFrameObservable/BatchFrame::gate
	RuntimeObject * ___gate_3;
	// UniRx.BooleanDisposable UniRx.Operators.BatchFrameObservable/BatchFrame::cancellationToken
	BooleanDisposable_t84760918 * ___cancellationToken_4;
	// System.Collections.IEnumerator UniRx.Operators.BatchFrameObservable/BatchFrame::timer
	RuntimeObject* ___timer_5;
	// System.Boolean UniRx.Operators.BatchFrameObservable/BatchFrame::isRunning
	bool ___isRunning_6;
	// System.Boolean UniRx.Operators.BatchFrameObservable/BatchFrame::isCompleted
	bool ___isCompleted_7;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(BatchFrame_t3337927563, ___parent_2)); }
	inline BatchFrameObservable_t2539759103 * get_parent_2() const { return ___parent_2; }
	inline BatchFrameObservable_t2539759103 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(BatchFrameObservable_t2539759103 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((&___parent_2), value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(BatchFrame_t3337927563, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((&___gate_3), value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(BatchFrame_t3337927563, ___cancellationToken_4)); }
	inline BooleanDisposable_t84760918 * get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline BooleanDisposable_t84760918 ** get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(BooleanDisposable_t84760918 * value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((&___cancellationToken_4), value);
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(BatchFrame_t3337927563, ___timer_5)); }
	inline RuntimeObject* get_timer_5() const { return ___timer_5; }
	inline RuntimeObject** get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(RuntimeObject* value)
	{
		___timer_5 = value;
		Il2CppCodeGenWriteBarrier((&___timer_5), value);
	}

	inline static int32_t get_offset_of_isRunning_6() { return static_cast<int32_t>(offsetof(BatchFrame_t3337927563, ___isRunning_6)); }
	inline bool get_isRunning_6() const { return ___isRunning_6; }
	inline bool* get_address_of_isRunning_6() { return &___isRunning_6; }
	inline void set_isRunning_6(bool value)
	{
		___isRunning_6 = value;
	}

	inline static int32_t get_offset_of_isCompleted_7() { return static_cast<int32_t>(offsetof(BatchFrame_t3337927563, ___isCompleted_7)); }
	inline bool get_isCompleted_7() const { return ___isCompleted_7; }
	inline bool* get_address_of_isCompleted_7() { return &___isCompleted_7; }
	inline void set_isCompleted_7(bool value)
	{
		___isCompleted_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATCHFRAME_T3337927563_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASYNCREACTIVECOMMAND_T3750662548_H
#define ASYNCREACTIVECOMMAND_T3750662548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.AsyncReactiveCommand
struct  AsyncReactiveCommand_t3750662548  : public AsyncReactiveCommand_1_t4218979257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCREACTIVECOMMAND_T3750662548_H
#ifndef REACTIVECOMMAND_T2994750062_H
#define REACTIVECOMMAND_T2994750062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ReactiveCommand
struct  ReactiveCommand_t2994750062  : public ReactiveCommand_1_t1350381949
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REACTIVECOMMAND_T2994750062_H
#ifndef U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY16_T4148820203_H
#define U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY16_T4148820203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey16
struct  U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey16::url
	String_t* ___url_0;
	// UnityEngine.Hash128 UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey16::hash128
	Hash128_t2357739769  ___hash128_1;
	// System.UInt32 UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey16::crc
	uint32_t ___crc_2;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey16::progress
	RuntimeObject* ___progress_3;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_hash128_1() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203, ___hash128_1)); }
	inline Hash128_t2357739769  get_hash128_1() const { return ___hash128_1; }
	inline Hash128_t2357739769 * get_address_of_hash128_1() { return &___hash128_1; }
	inline void set_hash128_1(Hash128_t2357739769  value)
	{
		___hash128_1 = value;
	}

	inline static int32_t get_offset_of_crc_2() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203, ___crc_2)); }
	inline uint32_t get_crc_2() const { return ___crc_2; }
	inline uint32_t* get_address_of_crc_2() { return &___crc_2; }
	inline void set_crc_2(uint32_t value)
	{
		___crc_2 = value;
	}

	inline static int32_t get_offset_of_progress_3() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203, ___progress_3)); }
	inline RuntimeObject* get_progress_3() const { return ___progress_3; }
	inline RuntimeObject** get_address_of_progress_3() { return &___progress_3; }
	inline void set_progress_3(RuntimeObject* value)
	{
		___progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___progress_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY16_T4148820203_H
#ifndef U3CFETCHTEXTU3EC__ITERATOR1_T3169890160_H
#define U3CFETCHTEXTU3EC__ITERATOR1_T3169890160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<FetchText>c__Iterator1
struct  U3CFetchTextU3Ec__Iterator1_t3169890160  : public RuntimeObject
{
public:
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchText>c__Iterator1::www
	WWW_t3688466362 * ___www_0;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchText>c__Iterator1::$locvar0
	WWW_t3688466362 * ___U24locvar0_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<FetchText>c__Iterator1::reportProgress
	RuntimeObject* ___reportProgress_2;
	// UniRx.CancellationToken UniRx.ObservableWWW/<FetchText>c__Iterator1::cancel
	CancellationToken_t1265546479  ___cancel_3;
	// UniRx.IObserver`1<System.String> UniRx.ObservableWWW/<FetchText>c__Iterator1::observer
	RuntimeObject* ___observer_4;
	// System.Object UniRx.ObservableWWW/<FetchText>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.ObservableWWW/<FetchText>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.ObservableWWW/<FetchText>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_www_0() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ec__Iterator1_t3169890160, ___www_0)); }
	inline WWW_t3688466362 * get_www_0() const { return ___www_0; }
	inline WWW_t3688466362 ** get_address_of_www_0() { return &___www_0; }
	inline void set_www_0(WWW_t3688466362 * value)
	{
		___www_0 = value;
		Il2CppCodeGenWriteBarrier((&___www_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ec__Iterator1_t3169890160, ___U24locvar0_1)); }
	inline WWW_t3688466362 * get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline WWW_t3688466362 ** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(WWW_t3688466362 * value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_reportProgress_2() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ec__Iterator1_t3169890160, ___reportProgress_2)); }
	inline RuntimeObject* get_reportProgress_2() const { return ___reportProgress_2; }
	inline RuntimeObject** get_address_of_reportProgress_2() { return &___reportProgress_2; }
	inline void set_reportProgress_2(RuntimeObject* value)
	{
		___reportProgress_2 = value;
		Il2CppCodeGenWriteBarrier((&___reportProgress_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ec__Iterator1_t3169890160, ___cancel_3)); }
	inline CancellationToken_t1265546479  get_cancel_3() const { return ___cancel_3; }
	inline CancellationToken_t1265546479 * get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(CancellationToken_t1265546479  value)
	{
		___cancel_3 = value;
	}

	inline static int32_t get_offset_of_observer_4() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ec__Iterator1_t3169890160, ___observer_4)); }
	inline RuntimeObject* get_observer_4() const { return ___observer_4; }
	inline RuntimeObject** get_address_of_observer_4() { return &___observer_4; }
	inline void set_observer_4(RuntimeObject* value)
	{
		___observer_4 = value;
		Il2CppCodeGenWriteBarrier((&___observer_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ec__Iterator1_t3169890160, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ec__Iterator1_t3169890160, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFetchTextU3Ec__Iterator1_t3169890160, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFETCHTEXTU3EC__ITERATOR1_T3169890160_H
#ifndef U3CFETCHU3EC__ITERATOR0_T2218155811_H
#define U3CFETCHU3EC__ITERATOR0_T2218155811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<Fetch>c__Iterator0
struct  U3CFetchU3Ec__Iterator0_t2218155811  : public RuntimeObject
{
public:
	// UnityEngine.WWW UniRx.ObservableWWW/<Fetch>c__Iterator0::www
	WWW_t3688466362 * ___www_0;
	// UnityEngine.WWW UniRx.ObservableWWW/<Fetch>c__Iterator0::$locvar0
	WWW_t3688466362 * ___U24locvar0_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<Fetch>c__Iterator0::reportProgress
	RuntimeObject* ___reportProgress_2;
	// UniRx.CancellationToken UniRx.ObservableWWW/<Fetch>c__Iterator0::cancel
	CancellationToken_t1265546479  ___cancel_3;
	// UniRx.IObserver`1<UnityEngine.WWW> UniRx.ObservableWWW/<Fetch>c__Iterator0::observer
	RuntimeObject* ___observer_4;
	// System.Object UniRx.ObservableWWW/<Fetch>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.ObservableWWW/<Fetch>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.ObservableWWW/<Fetch>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_www_0() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__Iterator0_t2218155811, ___www_0)); }
	inline WWW_t3688466362 * get_www_0() const { return ___www_0; }
	inline WWW_t3688466362 ** get_address_of_www_0() { return &___www_0; }
	inline void set_www_0(WWW_t3688466362 * value)
	{
		___www_0 = value;
		Il2CppCodeGenWriteBarrier((&___www_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__Iterator0_t2218155811, ___U24locvar0_1)); }
	inline WWW_t3688466362 * get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline WWW_t3688466362 ** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(WWW_t3688466362 * value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_reportProgress_2() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__Iterator0_t2218155811, ___reportProgress_2)); }
	inline RuntimeObject* get_reportProgress_2() const { return ___reportProgress_2; }
	inline RuntimeObject** get_address_of_reportProgress_2() { return &___reportProgress_2; }
	inline void set_reportProgress_2(RuntimeObject* value)
	{
		___reportProgress_2 = value;
		Il2CppCodeGenWriteBarrier((&___reportProgress_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__Iterator0_t2218155811, ___cancel_3)); }
	inline CancellationToken_t1265546479  get_cancel_3() const { return ___cancel_3; }
	inline CancellationToken_t1265546479 * get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(CancellationToken_t1265546479  value)
	{
		___cancel_3 = value;
	}

	inline static int32_t get_offset_of_observer_4() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__Iterator0_t2218155811, ___observer_4)); }
	inline RuntimeObject* get_observer_4() const { return ___observer_4; }
	inline RuntimeObject** get_address_of_observer_4() { return &___observer_4; }
	inline void set_observer_4(RuntimeObject* value)
	{
		___observer_4 = value;
		Il2CppCodeGenWriteBarrier((&___observer_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__Iterator0_t2218155811, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__Iterator0_t2218155811, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__Iterator0_t2218155811, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFETCHU3EC__ITERATOR0_T2218155811_H
#ifndef MAINTHREADDISPATCHTYPE_T3527556734_H
#define MAINTHREADDISPATCHTYPE_T3527556734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.MainThreadDispatchType
struct  MainThreadDispatchType_t3527556734 
{
public:
	// System.Int32 UniRx.MainThreadDispatchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MainThreadDispatchType_t3527556734, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINTHREADDISPATCHTYPE_T3527556734_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY15_T1810168043_H
#define U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY15_T1810168043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey15
struct  U3CLoadFromCacheOrDownloadU3Ec__AnonStorey15_t1810168043  : public RuntimeObject
{
public:
	// System.String UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey15::url
	String_t* ___url_0;
	// UnityEngine.Hash128 UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey15::hash128
	Hash128_t2357739769  ___hash128_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<LoadFromCacheOrDownload>c__AnonStorey15::progress
	RuntimeObject* ___progress_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey15_t1810168043, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_hash128_1() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey15_t1810168043, ___hash128_1)); }
	inline Hash128_t2357739769  get_hash128_1() const { return ___hash128_1; }
	inline Hash128_t2357739769 * get_address_of_hash128_1() { return &___hash128_1; }
	inline void set_hash128_1(Hash128_t2357739769  value)
	{
		___hash128_1 = value;
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CLoadFromCacheOrDownloadU3Ec__AnonStorey15_t1810168043, ___progress_2)); }
	inline RuntimeObject* get_progress_2() const { return ___progress_2; }
	inline RuntimeObject** get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(RuntimeObject* value)
	{
		___progress_2 = value;
		Il2CppCodeGenWriteBarrier((&___progress_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADFROMCACHEORDOWNLOADU3EC__ANONSTOREY15_T1810168043_H
#ifndef U3CFETCHBYTESU3EC__ITERATOR2_T135672608_H
#define U3CFETCHBYTESU3EC__ITERATOR2_T135672608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<FetchBytes>c__Iterator2
struct  U3CFetchBytesU3Ec__Iterator2_t135672608  : public RuntimeObject
{
public:
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchBytes>c__Iterator2::www
	WWW_t3688466362 * ___www_0;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchBytes>c__Iterator2::$locvar0
	WWW_t3688466362 * ___U24locvar0_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<FetchBytes>c__Iterator2::reportProgress
	RuntimeObject* ___reportProgress_2;
	// UniRx.CancellationToken UniRx.ObservableWWW/<FetchBytes>c__Iterator2::cancel
	CancellationToken_t1265546479  ___cancel_3;
	// UniRx.IObserver`1<System.Byte[]> UniRx.ObservableWWW/<FetchBytes>c__Iterator2::observer
	RuntimeObject* ___observer_4;
	// System.Object UniRx.ObservableWWW/<FetchBytes>c__Iterator2::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.ObservableWWW/<FetchBytes>c__Iterator2::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.ObservableWWW/<FetchBytes>c__Iterator2::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_www_0() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ec__Iterator2_t135672608, ___www_0)); }
	inline WWW_t3688466362 * get_www_0() const { return ___www_0; }
	inline WWW_t3688466362 ** get_address_of_www_0() { return &___www_0; }
	inline void set_www_0(WWW_t3688466362 * value)
	{
		___www_0 = value;
		Il2CppCodeGenWriteBarrier((&___www_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ec__Iterator2_t135672608, ___U24locvar0_1)); }
	inline WWW_t3688466362 * get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline WWW_t3688466362 ** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(WWW_t3688466362 * value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_reportProgress_2() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ec__Iterator2_t135672608, ___reportProgress_2)); }
	inline RuntimeObject* get_reportProgress_2() const { return ___reportProgress_2; }
	inline RuntimeObject** get_address_of_reportProgress_2() { return &___reportProgress_2; }
	inline void set_reportProgress_2(RuntimeObject* value)
	{
		___reportProgress_2 = value;
		Il2CppCodeGenWriteBarrier((&___reportProgress_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ec__Iterator2_t135672608, ___cancel_3)); }
	inline CancellationToken_t1265546479  get_cancel_3() const { return ___cancel_3; }
	inline CancellationToken_t1265546479 * get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(CancellationToken_t1265546479  value)
	{
		___cancel_3 = value;
	}

	inline static int32_t get_offset_of_observer_4() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ec__Iterator2_t135672608, ___observer_4)); }
	inline RuntimeObject* get_observer_4() const { return ___observer_4; }
	inline RuntimeObject** get_address_of_observer_4() { return &___observer_4; }
	inline void set_observer_4(RuntimeObject* value)
	{
		___observer_4 = value;
		Il2CppCodeGenWriteBarrier((&___observer_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ec__Iterator2_t135672608, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ec__Iterator2_t135672608, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFetchBytesU3Ec__Iterator2_t135672608, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFETCHBYTESU3EC__ITERATOR2_T135672608_H
#ifndef U3CFETCHASSETBUNDLEU3EC__ITERATOR3_T3693207334_H
#define U3CFETCHASSETBUNDLEU3EC__ITERATOR3_T3693207334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3
struct  U3CFetchAssetBundleU3Ec__Iterator3_t3693207334  : public RuntimeObject
{
public:
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3::www
	WWW_t3688466362 * ___www_0;
	// UnityEngine.WWW UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3::$locvar0
	WWW_t3688466362 * ___U24locvar0_1;
	// UniRx.IProgress`1<System.Single> UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3::reportProgress
	RuntimeObject* ___reportProgress_2;
	// UniRx.CancellationToken UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3::cancel
	CancellationToken_t1265546479  ___cancel_3;
	// UniRx.IObserver`1<UnityEngine.AssetBundle> UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3::observer
	RuntimeObject* ___observer_4;
	// System.Object UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.ObservableWWW/<FetchAssetBundle>c__Iterator3::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_www_0() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ec__Iterator3_t3693207334, ___www_0)); }
	inline WWW_t3688466362 * get_www_0() const { return ___www_0; }
	inline WWW_t3688466362 ** get_address_of_www_0() { return &___www_0; }
	inline void set_www_0(WWW_t3688466362 * value)
	{
		___www_0 = value;
		Il2CppCodeGenWriteBarrier((&___www_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ec__Iterator3_t3693207334, ___U24locvar0_1)); }
	inline WWW_t3688466362 * get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline WWW_t3688466362 ** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(WWW_t3688466362 * value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_reportProgress_2() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ec__Iterator3_t3693207334, ___reportProgress_2)); }
	inline RuntimeObject* get_reportProgress_2() const { return ___reportProgress_2; }
	inline RuntimeObject** get_address_of_reportProgress_2() { return &___reportProgress_2; }
	inline void set_reportProgress_2(RuntimeObject* value)
	{
		___reportProgress_2 = value;
		Il2CppCodeGenWriteBarrier((&___reportProgress_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ec__Iterator3_t3693207334, ___cancel_3)); }
	inline CancellationToken_t1265546479  get_cancel_3() const { return ___cancel_3; }
	inline CancellationToken_t1265546479 * get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(CancellationToken_t1265546479  value)
	{
		___cancel_3 = value;
	}

	inline static int32_t get_offset_of_observer_4() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ec__Iterator3_t3693207334, ___observer_4)); }
	inline RuntimeObject* get_observer_4() const { return ___observer_4; }
	inline RuntimeObject** get_address_of_observer_4() { return &___observer_4; }
	inline void set_observer_4(RuntimeObject* value)
	{
		___observer_4 = value;
		Il2CppCodeGenWriteBarrier((&___observer_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ec__Iterator3_t3693207334, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ec__Iterator3_t3693207334, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CFetchAssetBundleU3Ec__Iterator3_t3693207334, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFETCHASSETBUNDLEU3EC__ITERATOR3_T3693207334_H
#ifndef FRAMECOUNTTYPE_T3331626185_H
#define FRAMECOUNTTYPE_T3331626185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.FrameCountType
struct  FrameCountType_t3331626185 
{
public:
	// System.Int32 UniRx.FrameCountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FrameCountType_t3331626185, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMECOUNTTYPE_T3331626185_H
#ifndef HTTPSTATUSCODE_T3035121829_H
#define HTTPSTATUSCODE_T3035121829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpStatusCode
struct  HttpStatusCode_t3035121829 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HttpStatusCode_t3035121829, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPSTATUSCODE_T3035121829_H
#ifndef WWWERROREXCEPTION_T1771212499_H
#define WWWERROREXCEPTION_T1771212499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.WWWErrorException
struct  WWWErrorException_t1771212499  : public Exception_t
{
public:
	// System.String UniRx.WWWErrorException::<RawErrorMessage>k__BackingField
	String_t* ___U3CRawErrorMessageU3Ek__BackingField_11;
	// System.Boolean UniRx.WWWErrorException::<HasResponse>k__BackingField
	bool ___U3CHasResponseU3Ek__BackingField_12;
	// System.String UniRx.WWWErrorException::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_13;
	// System.Net.HttpStatusCode UniRx.WWWErrorException::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniRx.WWWErrorException::<ResponseHeaders>k__BackingField
	Dictionary_2_t1632706988 * ___U3CResponseHeadersU3Ek__BackingField_15;
	// UnityEngine.WWW UniRx.WWWErrorException::<WWW>k__BackingField
	WWW_t3688466362 * ___U3CWWWU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CRawErrorMessageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WWWErrorException_t1771212499, ___U3CRawErrorMessageU3Ek__BackingField_11)); }
	inline String_t* get_U3CRawErrorMessageU3Ek__BackingField_11() const { return ___U3CRawErrorMessageU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CRawErrorMessageU3Ek__BackingField_11() { return &___U3CRawErrorMessageU3Ek__BackingField_11; }
	inline void set_U3CRawErrorMessageU3Ek__BackingField_11(String_t* value)
	{
		___U3CRawErrorMessageU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRawErrorMessageU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CHasResponseU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WWWErrorException_t1771212499, ___U3CHasResponseU3Ek__BackingField_12)); }
	inline bool get_U3CHasResponseU3Ek__BackingField_12() const { return ___U3CHasResponseU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CHasResponseU3Ek__BackingField_12() { return &___U3CHasResponseU3Ek__BackingField_12; }
	inline void set_U3CHasResponseU3Ek__BackingField_12(bool value)
	{
		___U3CHasResponseU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WWWErrorException_t1771212499, ___U3CTextU3Ek__BackingField_13)); }
	inline String_t* get_U3CTextU3Ek__BackingField_13() const { return ___U3CTextU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_13() { return &___U3CTextU3Ek__BackingField_13; }
	inline void set_U3CTextU3Ek__BackingField_13(String_t* value)
	{
		___U3CTextU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WWWErrorException_t1771212499, ___U3CStatusCodeU3Ek__BackingField_14)); }
	inline int32_t get_U3CStatusCodeU3Ek__BackingField_14() const { return ___U3CStatusCodeU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CStatusCodeU3Ek__BackingField_14() { return &___U3CStatusCodeU3Ek__BackingField_14; }
	inline void set_U3CStatusCodeU3Ek__BackingField_14(int32_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CResponseHeadersU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(WWWErrorException_t1771212499, ___U3CResponseHeadersU3Ek__BackingField_15)); }
	inline Dictionary_2_t1632706988 * get_U3CResponseHeadersU3Ek__BackingField_15() const { return ___U3CResponseHeadersU3Ek__BackingField_15; }
	inline Dictionary_2_t1632706988 ** get_address_of_U3CResponseHeadersU3Ek__BackingField_15() { return &___U3CResponseHeadersU3Ek__BackingField_15; }
	inline void set_U3CResponseHeadersU3Ek__BackingField_15(Dictionary_2_t1632706988 * value)
	{
		___U3CResponseHeadersU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResponseHeadersU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CWWWU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(WWWErrorException_t1771212499, ___U3CWWWU3Ek__BackingField_16)); }
	inline WWW_t3688466362 * get_U3CWWWU3Ek__BackingField_16() const { return ___U3CWWWU3Ek__BackingField_16; }
	inline WWW_t3688466362 ** get_address_of_U3CWWWU3Ek__BackingField_16() { return &___U3CWWWU3Ek__BackingField_16; }
	inline void set_U3CWWWU3Ek__BackingField_16(WWW_t3688466362 * value)
	{
		___U3CWWWU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWWWU3Ek__BackingField_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWERROREXCEPTION_T1771212499_H
#ifndef BATCHFRAMEOBSERVABLE_T2539759103_H
#define BATCHFRAMEOBSERVABLE_T2539759103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.BatchFrameObservable
struct  BatchFrameObservable_t2539759103  : public OperatorObservableBase_1_t354719556
{
public:
	// UniRx.IObservable`1<UniRx.Unit> UniRx.Operators.BatchFrameObservable::source
	RuntimeObject* ___source_1;
	// System.Int32 UniRx.Operators.BatchFrameObservable::frameCount
	int32_t ___frameCount_2;
	// UniRx.FrameCountType UniRx.Operators.BatchFrameObservable::frameCountType
	int32_t ___frameCountType_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(BatchFrameObservable_t2539759103, ___source_1)); }
	inline RuntimeObject* get_source_1() const { return ___source_1; }
	inline RuntimeObject** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(RuntimeObject* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_frameCount_2() { return static_cast<int32_t>(offsetof(BatchFrameObservable_t2539759103, ___frameCount_2)); }
	inline int32_t get_frameCount_2() const { return ___frameCount_2; }
	inline int32_t* get_address_of_frameCount_2() { return &___frameCount_2; }
	inline void set_frameCount_2(int32_t value)
	{
		___frameCount_2 = value;
	}

	inline static int32_t get_offset_of_frameCountType_3() { return static_cast<int32_t>(offsetof(BatchFrameObservable_t2539759103, ___frameCountType_3)); }
	inline int32_t get_frameCountType_3() const { return ___frameCountType_3; }
	inline int32_t* get_address_of_frameCountType_3() { return &___frameCountType_3; }
	inline void set_frameCountType_3(int32_t value)
	{
		___frameCountType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATCHFRAMEOBSERVABLE_T2539759103_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef PRESENTERBASE_1_T4151662397_H
#define PRESENTERBASE_1_T4151662397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.PresenterBase`1<UniRx.Unit>
struct  PresenterBase_1_t4151662397  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 UniRx.PresenterBase`1::childrenCount
	int32_t ___childrenCount_3;
	// System.Int32 UniRx.PresenterBase`1::currentCalledCount
	int32_t ___currentCalledCount_4;
	// System.Boolean UniRx.PresenterBase`1::isAwaken
	bool ___isAwaken_5;
	// System.Boolean UniRx.PresenterBase`1::isInitialized
	bool ___isInitialized_6;
	// System.Boolean UniRx.PresenterBase`1::isStartedCapturePhase
	bool ___isStartedCapturePhase_7;
	// UniRx.Subject`1<UniRx.Unit> UniRx.PresenterBase`1::initializeSubject
	Subject_1_t3450905854 * ___initializeSubject_8;
	// UniRx.IPresenter[] UniRx.PresenterBase`1::children
	IPresenterU5BU5D_t1029123997* ___children_9;
	// UniRx.IPresenter UniRx.PresenterBase`1::parent
	RuntimeObject* ___parent_10;
	// T UniRx.PresenterBase`1::argument
	Unit_t3362249467  ___argument_11;

public:
	inline static int32_t get_offset_of_childrenCount_3() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___childrenCount_3)); }
	inline int32_t get_childrenCount_3() const { return ___childrenCount_3; }
	inline int32_t* get_address_of_childrenCount_3() { return &___childrenCount_3; }
	inline void set_childrenCount_3(int32_t value)
	{
		___childrenCount_3 = value;
	}

	inline static int32_t get_offset_of_currentCalledCount_4() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___currentCalledCount_4)); }
	inline int32_t get_currentCalledCount_4() const { return ___currentCalledCount_4; }
	inline int32_t* get_address_of_currentCalledCount_4() { return &___currentCalledCount_4; }
	inline void set_currentCalledCount_4(int32_t value)
	{
		___currentCalledCount_4 = value;
	}

	inline static int32_t get_offset_of_isAwaken_5() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___isAwaken_5)); }
	inline bool get_isAwaken_5() const { return ___isAwaken_5; }
	inline bool* get_address_of_isAwaken_5() { return &___isAwaken_5; }
	inline void set_isAwaken_5(bool value)
	{
		___isAwaken_5 = value;
	}

	inline static int32_t get_offset_of_isInitialized_6() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___isInitialized_6)); }
	inline bool get_isInitialized_6() const { return ___isInitialized_6; }
	inline bool* get_address_of_isInitialized_6() { return &___isInitialized_6; }
	inline void set_isInitialized_6(bool value)
	{
		___isInitialized_6 = value;
	}

	inline static int32_t get_offset_of_isStartedCapturePhase_7() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___isStartedCapturePhase_7)); }
	inline bool get_isStartedCapturePhase_7() const { return ___isStartedCapturePhase_7; }
	inline bool* get_address_of_isStartedCapturePhase_7() { return &___isStartedCapturePhase_7; }
	inline void set_isStartedCapturePhase_7(bool value)
	{
		___isStartedCapturePhase_7 = value;
	}

	inline static int32_t get_offset_of_initializeSubject_8() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___initializeSubject_8)); }
	inline Subject_1_t3450905854 * get_initializeSubject_8() const { return ___initializeSubject_8; }
	inline Subject_1_t3450905854 ** get_address_of_initializeSubject_8() { return &___initializeSubject_8; }
	inline void set_initializeSubject_8(Subject_1_t3450905854 * value)
	{
		___initializeSubject_8 = value;
		Il2CppCodeGenWriteBarrier((&___initializeSubject_8), value);
	}

	inline static int32_t get_offset_of_children_9() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___children_9)); }
	inline IPresenterU5BU5D_t1029123997* get_children_9() const { return ___children_9; }
	inline IPresenterU5BU5D_t1029123997** get_address_of_children_9() { return &___children_9; }
	inline void set_children_9(IPresenterU5BU5D_t1029123997* value)
	{
		___children_9 = value;
		Il2CppCodeGenWriteBarrier((&___children_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___parent_10)); }
	inline RuntimeObject* get_parent_10() const { return ___parent_10; }
	inline RuntimeObject** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(RuntimeObject* value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_argument_11() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397, ___argument_11)); }
	inline Unit_t3362249467  get_argument_11() const { return ___argument_11; }
	inline Unit_t3362249467 * get_address_of_argument_11() { return &___argument_11; }
	inline void set_argument_11(Unit_t3362249467  value)
	{
		___argument_11 = value;
	}
};

struct PresenterBase_1_t4151662397_StaticFields
{
public:
	// UniRx.IPresenter[] UniRx.PresenterBase`1::EmptyChildren
	IPresenterU5BU5D_t1029123997* ___EmptyChildren_2;

public:
	inline static int32_t get_offset_of_EmptyChildren_2() { return static_cast<int32_t>(offsetof(PresenterBase_1_t4151662397_StaticFields, ___EmptyChildren_2)); }
	inline IPresenterU5BU5D_t1029123997* get_EmptyChildren_2() const { return ___EmptyChildren_2; }
	inline IPresenterU5BU5D_t1029123997** get_address_of_EmptyChildren_2() { return &___EmptyChildren_2; }
	inline void set_EmptyChildren_2(IPresenterU5BU5D_t1029123997* value)
	{
		___EmptyChildren_2 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyChildren_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESENTERBASE_1_T4151662397_H
#ifndef PRESENTERBASE_T3151094974_H
#define PRESENTERBASE_T3151094974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.PresenterBase
struct  PresenterBase_t3151094974  : public PresenterBase_1_t4151662397
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESENTERBASE_T3151094974_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (MainThreadDispatchType_t3527556734)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2500[7] = 
{
	MainThreadDispatchType_t3527556734::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (FrameCountTypeExtensions_t2621917262), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2503[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (ObservableWWW_t1879783302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (U3CGetU3Ec__AnonStorey4_t1801188099), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2506[3] = 
{
	U3CGetU3Ec__AnonStorey4_t1801188099::get_offset_of_url_0(),
	U3CGetU3Ec__AnonStorey4_t1801188099::get_offset_of_headers_1(),
	U3CGetU3Ec__AnonStorey4_t1801188099::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (U3CGetAndGetBytesU3Ec__AnonStorey5_t2468502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2507[3] = 
{
	U3CGetAndGetBytesU3Ec__AnonStorey5_t2468502::get_offset_of_url_0(),
	U3CGetAndGetBytesU3Ec__AnonStorey5_t2468502::get_offset_of_headers_1(),
	U3CGetAndGetBytesU3Ec__AnonStorey5_t2468502::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (U3CGetWWWU3Ec__AnonStorey6_t794373360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[3] = 
{
	U3CGetWWWU3Ec__AnonStorey6_t794373360::get_offset_of_url_0(),
	U3CGetWWWU3Ec__AnonStorey6_t794373360::get_offset_of_headers_1(),
	U3CGetWWWU3Ec__AnonStorey6_t794373360::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (U3CPostU3Ec__AnonStorey7_t869725411), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[3] = 
{
	U3CPostU3Ec__AnonStorey7_t869725411::get_offset_of_url_0(),
	U3CPostU3Ec__AnonStorey7_t869725411::get_offset_of_postData_1(),
	U3CPostU3Ec__AnonStorey7_t869725411::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (U3CPostU3Ec__AnonStorey8_t1207432419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2510[4] = 
{
	U3CPostU3Ec__AnonStorey8_t1207432419::get_offset_of_url_0(),
	U3CPostU3Ec__AnonStorey8_t1207432419::get_offset_of_postData_1(),
	U3CPostU3Ec__AnonStorey8_t1207432419::get_offset_of_headers_2(),
	U3CPostU3Ec__AnonStorey8_t1207432419::get_offset_of_progress_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (U3CPostU3Ec__AnonStorey9_t3546084579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[3] = 
{
	U3CPostU3Ec__AnonStorey9_t3546084579::get_offset_of_url_0(),
	U3CPostU3Ec__AnonStorey9_t3546084579::get_offset_of_content_1(),
	U3CPostU3Ec__AnonStorey9_t3546084579::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (U3CPostU3Ec__AnonStoreyA_t1430582499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2512[5] = 
{
	U3CPostU3Ec__AnonStoreyA_t1430582499::get_offset_of_url_0(),
	U3CPostU3Ec__AnonStoreyA_t1430582499::get_offset_of_content_1(),
	U3CPostU3Ec__AnonStoreyA_t1430582499::get_offset_of_contentHeaders_2(),
	U3CPostU3Ec__AnonStoreyA_t1430582499::get_offset_of_headers_3(),
	U3CPostU3Ec__AnonStoreyA_t1430582499::get_offset_of_progress_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (U3CPostAndGetBytesU3Ec__AnonStoreyB_t234290609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[3] = 
{
	U3CPostAndGetBytesU3Ec__AnonStoreyB_t234290609::get_offset_of_url_0(),
	U3CPostAndGetBytesU3Ec__AnonStoreyB_t234290609::get_offset_of_postData_1(),
	U3CPostAndGetBytesU3Ec__AnonStoreyB_t234290609::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[4] = 
{
	U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964::get_offset_of_url_0(),
	U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964::get_offset_of_postData_1(),
	U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964::get_offset_of_headers_2(),
	U3CPostAndGetBytesU3Ec__AnonStoreyC_t2963173964::get_offset_of_progress_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (U3CPostAndGetBytesU3Ec__AnonStoreyD_t1040859663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2515[3] = 
{
	U3CPostAndGetBytesU3Ec__AnonStoreyD_t1040859663::get_offset_of_url_0(),
	U3CPostAndGetBytesU3Ec__AnonStoreyD_t1040859663::get_offset_of_content_1(),
	U3CPostAndGetBytesU3Ec__AnonStoreyD_t1040859663::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[5] = 
{
	U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018::get_offset_of_url_0(),
	U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018::get_offset_of_content_1(),
	U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018::get_offset_of_contentHeaders_2(),
	U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018::get_offset_of_headers_3(),
	U3CPostAndGetBytesU3Ec__AnonStoreyE_t3769743018::get_offset_of_progress_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (U3CPostWWWU3Ec__AnonStoreyF_t1147649635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2517[3] = 
{
	U3CPostWWWU3Ec__AnonStoreyF_t1147649635::get_offset_of_url_0(),
	U3CPostWWWU3Ec__AnonStoreyF_t1147649635::get_offset_of_postData_1(),
	U3CPostWWWU3Ec__AnonStoreyF_t1147649635::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (U3CPostWWWU3Ec__AnonStorey10_t3781990988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[4] = 
{
	U3CPostWWWU3Ec__AnonStorey10_t3781990988::get_offset_of_url_0(),
	U3CPostWWWU3Ec__AnonStorey10_t3781990988::get_offset_of_postData_1(),
	U3CPostWWWU3Ec__AnonStorey10_t3781990988::get_offset_of_headers_2(),
	U3CPostWWWU3Ec__AnonStorey10_t3781990988::get_offset_of_progress_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (U3CPostWWWU3Ec__AnonStorey11_t1825675852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2519[3] = 
{
	U3CPostWWWU3Ec__AnonStorey11_t1825675852::get_offset_of_url_0(),
	U3CPostWWWU3Ec__AnonStorey11_t1825675852::get_offset_of_content_1(),
	U3CPostWWWU3Ec__AnonStorey11_t1825675852::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (U3CPostWWWU3Ec__AnonStorey12_t3399653964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2520[5] = 
{
	U3CPostWWWU3Ec__AnonStorey12_t3399653964::get_offset_of_url_0(),
	U3CPostWWWU3Ec__AnonStorey12_t3399653964::get_offset_of_content_1(),
	U3CPostWWWU3Ec__AnonStorey12_t3399653964::get_offset_of_contentHeaders_2(),
	U3CPostWWWU3Ec__AnonStorey12_t3399653964::get_offset_of_headers_3(),
	U3CPostWWWU3Ec__AnonStorey12_t3399653964::get_offset_of_progress_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { sizeof (U3CLoadFromCacheOrDownloadU3Ec__AnonStorey13_t2957179115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2521[3] = 
{
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey13_t2957179115::get_offset_of_url_0(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey13_t2957179115::get_offset_of_version_1(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey13_t2957179115::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2522[4] = 
{
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179::get_offset_of_url_0(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179::get_offset_of_version_1(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179::get_offset_of_crc_2(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey14_t3766483179::get_offset_of_progress_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (U3CLoadFromCacheOrDownloadU3Ec__AnonStorey15_t1810168043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2523[3] = 
{
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey15_t1810168043::get_offset_of_url_0(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey15_t1810168043::get_offset_of_hash128_1(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey15_t1810168043::get_offset_of_progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { sizeof (U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2524[4] = 
{
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203::get_offset_of_url_0(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203::get_offset_of_hash128_1(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203::get_offset_of_crc_2(),
	U3CLoadFromCacheOrDownloadU3Ec__AnonStorey16_t4148820203::get_offset_of_progress_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (U3CFetchU3Ec__Iterator0_t2218155811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2525[8] = 
{
	U3CFetchU3Ec__Iterator0_t2218155811::get_offset_of_www_0(),
	U3CFetchU3Ec__Iterator0_t2218155811::get_offset_of_U24locvar0_1(),
	U3CFetchU3Ec__Iterator0_t2218155811::get_offset_of_reportProgress_2(),
	U3CFetchU3Ec__Iterator0_t2218155811::get_offset_of_cancel_3(),
	U3CFetchU3Ec__Iterator0_t2218155811::get_offset_of_observer_4(),
	U3CFetchU3Ec__Iterator0_t2218155811::get_offset_of_U24current_5(),
	U3CFetchU3Ec__Iterator0_t2218155811::get_offset_of_U24disposing_6(),
	U3CFetchU3Ec__Iterator0_t2218155811::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (U3CFetchTextU3Ec__Iterator1_t3169890160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2526[8] = 
{
	U3CFetchTextU3Ec__Iterator1_t3169890160::get_offset_of_www_0(),
	U3CFetchTextU3Ec__Iterator1_t3169890160::get_offset_of_U24locvar0_1(),
	U3CFetchTextU3Ec__Iterator1_t3169890160::get_offset_of_reportProgress_2(),
	U3CFetchTextU3Ec__Iterator1_t3169890160::get_offset_of_cancel_3(),
	U3CFetchTextU3Ec__Iterator1_t3169890160::get_offset_of_observer_4(),
	U3CFetchTextU3Ec__Iterator1_t3169890160::get_offset_of_U24current_5(),
	U3CFetchTextU3Ec__Iterator1_t3169890160::get_offset_of_U24disposing_6(),
	U3CFetchTextU3Ec__Iterator1_t3169890160::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (U3CFetchBytesU3Ec__Iterator2_t135672608), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2527[8] = 
{
	U3CFetchBytesU3Ec__Iterator2_t135672608::get_offset_of_www_0(),
	U3CFetchBytesU3Ec__Iterator2_t135672608::get_offset_of_U24locvar0_1(),
	U3CFetchBytesU3Ec__Iterator2_t135672608::get_offset_of_reportProgress_2(),
	U3CFetchBytesU3Ec__Iterator2_t135672608::get_offset_of_cancel_3(),
	U3CFetchBytesU3Ec__Iterator2_t135672608::get_offset_of_observer_4(),
	U3CFetchBytesU3Ec__Iterator2_t135672608::get_offset_of_U24current_5(),
	U3CFetchBytesU3Ec__Iterator2_t135672608::get_offset_of_U24disposing_6(),
	U3CFetchBytesU3Ec__Iterator2_t135672608::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (U3CFetchAssetBundleU3Ec__Iterator3_t3693207334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2528[8] = 
{
	U3CFetchAssetBundleU3Ec__Iterator3_t3693207334::get_offset_of_www_0(),
	U3CFetchAssetBundleU3Ec__Iterator3_t3693207334::get_offset_of_U24locvar0_1(),
	U3CFetchAssetBundleU3Ec__Iterator3_t3693207334::get_offset_of_reportProgress_2(),
	U3CFetchAssetBundleU3Ec__Iterator3_t3693207334::get_offset_of_cancel_3(),
	U3CFetchAssetBundleU3Ec__Iterator3_t3693207334::get_offset_of_observer_4(),
	U3CFetchAssetBundleU3Ec__Iterator3_t3693207334::get_offset_of_U24current_5(),
	U3CFetchAssetBundleU3Ec__Iterator3_t3693207334::get_offset_of_U24disposing_6(),
	U3CFetchAssetBundleU3Ec__Iterator3_t3693207334::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (WWWErrorException_t1771212499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2529[6] = 
{
	WWWErrorException_t1771212499::get_offset_of_U3CRawErrorMessageU3Ek__BackingField_11(),
	WWWErrorException_t1771212499::get_offset_of_U3CHasResponseU3Ek__BackingField_12(),
	WWWErrorException_t1771212499::get_offset_of_U3CTextU3Ek__BackingField_13(),
	WWWErrorException_t1771212499::get_offset_of_U3CStatusCodeU3Ek__BackingField_14(),
	WWWErrorException_t1771212499::get_offset_of_U3CResponseHeadersU3Ek__BackingField_15(),
	WWWErrorException_t1771212499::get_offset_of_U3CWWWU3Ek__BackingField_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (ObserveExtensions_t3076931129), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2531[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2532[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (U3CEmptyEnumeratorU3Ec__Iterator0_t3471758210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2533[3] = 
{
	U3CEmptyEnumeratorU3Ec__Iterator0_t3471758210::get_offset_of_U24current_0(),
	U3CEmptyEnumeratorU3Ec__Iterator0_t3471758210::get_offset_of_U24disposing_1(),
	U3CEmptyEnumeratorU3Ec__Iterator0_t3471758210::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2534[12] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2535[15] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2536[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2537[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2538[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { sizeof (BatchFrameObservable_t2539759103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2539[3] = 
{
	BatchFrameObservable_t2539759103::get_offset_of_source_1(),
	BatchFrameObservable_t2539759103::get_offset_of_frameCount_2(),
	BatchFrameObservable_t2539759103::get_offset_of_frameCountType_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { sizeof (BatchFrame_t3337927563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2540[6] = 
{
	BatchFrame_t3337927563::get_offset_of_parent_2(),
	BatchFrame_t3337927563::get_offset_of_gate_3(),
	BatchFrame_t3337927563::get_offset_of_cancellationToken_4(),
	BatchFrame_t3337927563::get_offset_of_timer_5(),
	BatchFrame_t3337927563::get_offset_of_isRunning_6(),
	BatchFrame_t3337927563::get_offset_of_isCompleted_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (ReusableEnumerator_t911091657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2541[2] = 
{
	ReusableEnumerator_t911091657::get_offset_of_parent_0(),
	ReusableEnumerator_t911091657::get_offset_of_currentFrame_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2542[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2543[12] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2544[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2545[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2546[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2547[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2548[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2549[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2550[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2551[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2553[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2555[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2556[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2557[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2558[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2559[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2560[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2561[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2562[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2563[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2564[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2565[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2566[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2567[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2568[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2569[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2570[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (PresenterBase_t3151094974), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2573[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2574[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2575[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2576[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2577[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2580[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (ReactiveCollectionExtensions_t1881372181), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (ReactiveCommand_t2994750062), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2585[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (AsyncReactiveCommand_t3750662548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2587[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2588[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (ReactiveCommandExtensions_t1223375871), -1, sizeof(ReactiveCommandExtensions_t1223375871_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2589[2] = 
{
	ReactiveCommandExtensions_t1223375871_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	ReactiveCommandExtensions_t1223375871_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (AsyncReactiveCommandExtensions_t454737267), -1, sizeof(AsyncReactiveCommandExtensions_t454737267_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2590[2] = 
{
	AsyncReactiveCommandExtensions_t454737267_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	AsyncReactiveCommandExtensions_t454737267_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2591[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2592[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2593[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2596[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (ReactiveDictionaryExtensions_t2909995766), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
