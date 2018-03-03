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


// System.Action
struct Action_t1264377477;
// System.Action`1<System.Exception>
struct Action_1_t1609204844;
// UniRx.IAsyncMessageBroker
struct IAsyncMessageBroker_t503716257;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1229485932;
// UniRx.Subject`1<System.Boolean>
struct Subject_1_t185944352;
// UniRx.Subject`1<UniRx.CountChangedStatus>
struct Subject_1_t3482580559;
// UniRx.IMessageBroker
struct IMessageBroker_t2790640530;
// UniRx.CountNotifier
struct CountNotifier_t3944288434;
// System.Char[]
struct CharU5BU5D_t3528271667;




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
#ifndef OBSERVEREXTENSIONS_T2168473419_H
#define OBSERVEREXTENSIONS_T2168473419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObserverExtensions
struct  ObserverExtensions_t2168473419  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVEREXTENSIONS_T2168473419_H
#ifndef OBSERVER_T4122299270_H
#define OBSERVER_T4122299270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Observer
struct  Observer_t4122299270  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVER_T4122299270_H
#ifndef OBSERVABLEEXTENSIONS_T1214079256_H
#define OBSERVABLEEXTENSIONS_T1214079256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.ObservableExtensions
struct  ObservableExtensions_t1214079256  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSERVABLEEXTENSIONS_T1214079256_H
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
#ifndef STUBS_T4137823816_H
#define STUBS_T4137823816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Stubs
struct  Stubs_t4137823816  : public RuntimeObject
{
public:

public:
};

struct Stubs_t4137823816_StaticFields
{
public:
	// System.Action UniRx.Stubs::Nop
	Action_t1264377477 * ___Nop_0;
	// System.Action`1<System.Exception> UniRx.Stubs::Throw
	Action_1_t1609204844 * ___Throw_1;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(Stubs_t4137823816_StaticFields, ___Nop_0)); }
	inline Action_t1264377477 * get_Nop_0() const { return ___Nop_0; }
	inline Action_t1264377477 ** get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(Action_t1264377477 * value)
	{
		___Nop_0 = value;
		Il2CppCodeGenWriteBarrier((&___Nop_0), value);
	}

	inline static int32_t get_offset_of_Throw_1() { return static_cast<int32_t>(offsetof(Stubs_t4137823816_StaticFields, ___Throw_1)); }
	inline Action_1_t1609204844 * get_Throw_1() const { return ___Throw_1; }
	inline Action_1_t1609204844 ** get_address_of_Throw_1() { return &___Throw_1; }
	inline void set_Throw_1(Action_1_t1609204844 * value)
	{
		___Throw_1 = value;
		Il2CppCodeGenWriteBarrier((&___Throw_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STUBS_T4137823816_H
#ifndef ASYNCMESSAGEBROKER_T3406290114_H
#define ASYNCMESSAGEBROKER_T3406290114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.AsyncMessageBroker
struct  AsyncMessageBroker_t3406290114  : public RuntimeObject
{
public:
	// System.Boolean UniRx.AsyncMessageBroker::isDisposed
	bool ___isDisposed_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> UniRx.AsyncMessageBroker::notifiers
	Dictionary_2_t1229485932 * ___notifiers_2;

public:
	inline static int32_t get_offset_of_isDisposed_1() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t3406290114, ___isDisposed_1)); }
	inline bool get_isDisposed_1() const { return ___isDisposed_1; }
	inline bool* get_address_of_isDisposed_1() { return &___isDisposed_1; }
	inline void set_isDisposed_1(bool value)
	{
		___isDisposed_1 = value;
	}

	inline static int32_t get_offset_of_notifiers_2() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t3406290114, ___notifiers_2)); }
	inline Dictionary_2_t1229485932 * get_notifiers_2() const { return ___notifiers_2; }
	inline Dictionary_2_t1229485932 ** get_address_of_notifiers_2() { return &___notifiers_2; }
	inline void set_notifiers_2(Dictionary_2_t1229485932 * value)
	{
		___notifiers_2 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_2), value);
	}
};

struct AsyncMessageBroker_t3406290114_StaticFields
{
public:
	// UniRx.IAsyncMessageBroker UniRx.AsyncMessageBroker::Default
	RuntimeObject* ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(AsyncMessageBroker_t3406290114_StaticFields, ___Default_0)); }
	inline RuntimeObject* get_Default_0() const { return ___Default_0; }
	inline RuntimeObject** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(RuntimeObject* value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCMESSAGEBROKER_T3406290114_H
#ifndef NOTIFICATION_T2788794668_H
#define NOTIFICATION_T2788794668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Notification
struct  Notification_t2788794668  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATION_T2788794668_H
#ifndef BOOLEANNOTIFIER_T2404233217_H
#define BOOLEANNOTIFIER_T2404233217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.BooleanNotifier
struct  BooleanNotifier_t2404233217  : public RuntimeObject
{
public:
	// UniRx.Subject`1<System.Boolean> UniRx.BooleanNotifier::boolTrigger
	Subject_1_t185944352 * ___boolTrigger_0;
	// System.Boolean UniRx.BooleanNotifier::boolValue
	bool ___boolValue_1;

public:
	inline static int32_t get_offset_of_boolTrigger_0() { return static_cast<int32_t>(offsetof(BooleanNotifier_t2404233217, ___boolTrigger_0)); }
	inline Subject_1_t185944352 * get_boolTrigger_0() const { return ___boolTrigger_0; }
	inline Subject_1_t185944352 ** get_address_of_boolTrigger_0() { return &___boolTrigger_0; }
	inline void set_boolTrigger_0(Subject_1_t185944352 * value)
	{
		___boolTrigger_0 = value;
		Il2CppCodeGenWriteBarrier((&___boolTrigger_0), value);
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(BooleanNotifier_t2404233217, ___boolValue_1)); }
	inline bool get_boolValue_1() const { return ___boolValue_1; }
	inline bool* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(bool value)
	{
		___boolValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANNOTIFIER_T2404233217_H
#ifndef COUNTNOTIFIER_T3944288434_H
#define COUNTNOTIFIER_T3944288434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountNotifier
struct  CountNotifier_t3944288434  : public RuntimeObject
{
public:
	// System.Object UniRx.CountNotifier::lockObject
	RuntimeObject * ___lockObject_0;
	// UniRx.Subject`1<UniRx.CountChangedStatus> UniRx.CountNotifier::statusChanged
	Subject_1_t3482580559 * ___statusChanged_1;
	// System.Int32 UniRx.CountNotifier::max
	int32_t ___max_2;
	// System.Int32 UniRx.CountNotifier::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CountNotifier_t3944288434, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_statusChanged_1() { return static_cast<int32_t>(offsetof(CountNotifier_t3944288434, ___statusChanged_1)); }
	inline Subject_1_t3482580559 * get_statusChanged_1() const { return ___statusChanged_1; }
	inline Subject_1_t3482580559 ** get_address_of_statusChanged_1() { return &___statusChanged_1; }
	inline void set_statusChanged_1(Subject_1_t3482580559 * value)
	{
		___statusChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___statusChanged_1), value);
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(CountNotifier_t3944288434, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CountNotifier_t3944288434, ___U3CCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CCountU3Ek__BackingField_3() const { return ___U3CCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_3() { return &___U3CCountU3Ek__BackingField_3; }
	inline void set_U3CCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CCountU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTNOTIFIER_T3944288434_H
#ifndef MESSAGEBROKER_T3452936682_H
#define MESSAGEBROKER_T3452936682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.MessageBroker
struct  MessageBroker_t3452936682  : public RuntimeObject
{
public:
	// System.Boolean UniRx.MessageBroker::isDisposed
	bool ___isDisposed_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> UniRx.MessageBroker::notifiers
	Dictionary_2_t1229485932 * ___notifiers_2;

public:
	inline static int32_t get_offset_of_isDisposed_1() { return static_cast<int32_t>(offsetof(MessageBroker_t3452936682, ___isDisposed_1)); }
	inline bool get_isDisposed_1() const { return ___isDisposed_1; }
	inline bool* get_address_of_isDisposed_1() { return &___isDisposed_1; }
	inline void set_isDisposed_1(bool value)
	{
		___isDisposed_1 = value;
	}

	inline static int32_t get_offset_of_notifiers_2() { return static_cast<int32_t>(offsetof(MessageBroker_t3452936682, ___notifiers_2)); }
	inline Dictionary_2_t1229485932 * get_notifiers_2() const { return ___notifiers_2; }
	inline Dictionary_2_t1229485932 ** get_address_of_notifiers_2() { return &___notifiers_2; }
	inline void set_notifiers_2(Dictionary_2_t1229485932 * value)
	{
		___notifiers_2 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_2), value);
	}
};

struct MessageBroker_t3452936682_StaticFields
{
public:
	// UniRx.IMessageBroker UniRx.MessageBroker::Default
	RuntimeObject* ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(MessageBroker_t3452936682_StaticFields, ___Default_0)); }
	inline RuntimeObject* get_Default_0() const { return ___Default_0; }
	inline RuntimeObject** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(RuntimeObject* value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEBROKER_T3452936682_H
#ifndef U3CINCREMENTU3EC__ANONSTOREY0_T2788993591_H
#define U3CINCREMENTU3EC__ANONSTOREY0_T2788993591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountNotifier/<Increment>c__AnonStorey0
struct  U3CIncrementU3Ec__AnonStorey0_t2788993591  : public RuntimeObject
{
public:
	// System.Int32 UniRx.CountNotifier/<Increment>c__AnonStorey0::incrementCount
	int32_t ___incrementCount_0;
	// UniRx.CountNotifier UniRx.CountNotifier/<Increment>c__AnonStorey0::$this
	CountNotifier_t3944288434 * ___U24this_1;

public:
	inline static int32_t get_offset_of_incrementCount_0() { return static_cast<int32_t>(offsetof(U3CIncrementU3Ec__AnonStorey0_t2788993591, ___incrementCount_0)); }
	inline int32_t get_incrementCount_0() const { return ___incrementCount_0; }
	inline int32_t* get_address_of_incrementCount_0() { return &___incrementCount_0; }
	inline void set_incrementCount_0(int32_t value)
	{
		___incrementCount_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CIncrementU3Ec__AnonStorey0_t2788993591, ___U24this_1)); }
	inline CountNotifier_t3944288434 * get_U24this_1() const { return ___U24this_1; }
	inline CountNotifier_t3944288434 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(CountNotifier_t3944288434 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINCREMENTU3EC__ANONSTOREY0_T2788993591_H
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
#ifndef COUNTCHANGEDSTATUS_T3393924172_H
#define COUNTCHANGEDSTATUS_T3393924172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.CountChangedStatus
struct  CountChangedStatus_t3393924172 
{
public:
	// System.Int32 UniRx.CountChangedStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CountChangedStatus_t3393924172, ___value___1)); }
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
#endif // COUNTCHANGEDSTATUS_T3393924172_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2000[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2001[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2003[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2004[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { sizeof (Notification_t2788794668), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { sizeof (BooleanNotifier_t2404233217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2006[2] = 
{
	BooleanNotifier_t2404233217::get_offset_of_boolTrigger_0(),
	BooleanNotifier_t2404233217::get_offset_of_boolValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (CountChangedStatus_t3393924172)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2007[5] = 
{
	CountChangedStatus_t3393924172::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (CountNotifier_t3944288434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2008[4] = 
{
	CountNotifier_t3944288434::get_offset_of_lockObject_0(),
	CountNotifier_t3944288434::get_offset_of_statusChanged_1(),
	CountNotifier_t3944288434::get_offset_of_max_2(),
	CountNotifier_t3944288434::get_offset_of_U3CCountU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { sizeof (U3CIncrementU3Ec__AnonStorey0_t2788993591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2009[2] = 
{
	U3CIncrementU3Ec__AnonStorey0_t2788993591::get_offset_of_incrementCount_0(),
	U3CIncrementU3Ec__AnonStorey0_t2788993591::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2014 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2015 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2016 = { sizeof (MessageBroker_t3452936682), -1, sizeof(MessageBroker_t3452936682_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2016[3] = 
{
	MessageBroker_t3452936682_StaticFields::get_offset_of_Default_0(),
	MessageBroker_t3452936682::get_offset_of_isDisposed_1(),
	MessageBroker_t3452936682::get_offset_of_notifiers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2017 = { sizeof (AsyncMessageBroker_t3406290114), -1, sizeof(AsyncMessageBroker_t3406290114_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2017[3] = 
{
	AsyncMessageBroker_t3406290114_StaticFields::get_offset_of_Default_0(),
	AsyncMessageBroker_t3406290114::get_offset_of_isDisposed_1(),
	AsyncMessageBroker_t3406290114::get_offset_of_notifiers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2018 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2018[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2019 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2019[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2020 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2020[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2021 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2021[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2022 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2022[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2023 = { sizeof (Observer_t4122299270), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2024 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2024[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2025 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2025[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2026 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2026[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2027 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2027[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2028 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2028[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2029 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2029[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2030 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2030[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2031 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2032 = { sizeof (ObserverExtensions_t2168473419), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2033 = { sizeof (ObservableExtensions_t1214079256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2034 = { sizeof (Stubs_t4137823816), -1, sizeof(Stubs_t4137823816_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2034[2] = 
{
	Stubs_t4137823816_StaticFields::get_offset_of_Nop_0(),
	Stubs_t4137823816_StaticFields::get_offset_of_Throw_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2035 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2035[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2036 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2036[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2037 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2037[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2038 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2038[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2039 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2039[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2040 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2040[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2041 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2041[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2042 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2042[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2043 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2043[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2044 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2044[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2045 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2045[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2046 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2046[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2047 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2047[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2048 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2048[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2049 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2049[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2050 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2051 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2051[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2052 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2053 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2053[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2054 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2055 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2055[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2056 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2056[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2057 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2057[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2058 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2058[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2059 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2059[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2060 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2060[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2061 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2061[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2062 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2062[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2063 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2063[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2064 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2064[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2065 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2065[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2066 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2066[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2067 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2067[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2068 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2069 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2069[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2070 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2070[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2071 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2071[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2072 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2072[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2073 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2074 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2075 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2076 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2077 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2078 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2078[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2079 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2079[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2080 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2080[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2081 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2081[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2082 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2082[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2083 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2083[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2084 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2084[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2085 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2085[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2086 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2086[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2087 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2087[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2088 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2088[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2089 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2089[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2090 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2090[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2091 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2091[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2092 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2092[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2093 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2093[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2094 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2094[9] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2095 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2096 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2096[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2097 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2097[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2098 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2098[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2099 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2099[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
