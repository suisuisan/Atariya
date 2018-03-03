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


// UniRx.BooleanDisposable
struct BooleanDisposable_t84760918;
// System.Action
struct Action_t1264377477;
// System.Collections.Generic.HashSet`1<System.Threading.Timer>
struct HashSet_1_t3576587796;
// System.Threading.Timer
struct Timer_t716671026;
// UniRx.InternalUtil.AsyncLock
struct AsyncLock_t301382185;
// UniRx.IScheduler
struct IScheduler_t411218504;
// UniRx.SingleAssignmentDisposable
struct SingleAssignmentDisposable_t4102667663;
// UniRx.IObserver`1<UniRx.Unit>
struct IObserver_1_t811551750;
// System.IDisposable
struct IDisposable_t3640265483;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// UniRx.Operators.WhenAllObservable/WhenAll_
struct WhenAll__t3629299119;
// UniRx.SerialDisposable
struct SerialDisposable_t3525249344;
// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey0
struct U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993;
// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey1
struct U3CSubscribeCoreU3Ec__AnonStorey1_t3331905994;
// UniRx.Operators.WhenAllObservable/WhenAll
struct WhenAll_t3625170351;
// UniRx.InternalUtil.SchedulerQueue
struct SchedulerQueue_t1565164295;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;
// UniRx.IObservable`1<UniRx.Unit>[]
struct IObservable_1U5BU5D_t3038720744;
// System.Collections.Generic.IList`1<UniRx.IObservable`1<UniRx.Unit>>
struct IList_1_t3300701388;
// System.Collections.Generic.IEnumerable`1<UniRx.IObservable`1<UniRx.Unit>>
struct IEnumerable_1_t465234494;
// UniRx.ICancelable
struct ICancelable_t3440398893;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;




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
#ifndef U3CSCHEDULEU3EC__ANONSTOREY0_T2014915017_H
#define U3CSCHEDULEU3EC__ANONSTOREY0_T2014915017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler/<Schedule>c__AnonStorey0
struct  U3CScheduleU3Ec__AnonStorey0_t2014915017  : public RuntimeObject
{
public:
	// UniRx.BooleanDisposable UniRx.Scheduler/ThreadPoolScheduler/<Schedule>c__AnonStorey0::d
	BooleanDisposable_t84760918 * ___d_0;
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/<Schedule>c__AnonStorey0::action
	Action_t1264377477 * ___action_1;

public:
	inline static int32_t get_offset_of_d_0() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t2014915017, ___d_0)); }
	inline BooleanDisposable_t84760918 * get_d_0() const { return ___d_0; }
	inline BooleanDisposable_t84760918 ** get_address_of_d_0() { return &___d_0; }
	inline void set_d_0(BooleanDisposable_t84760918 * value)
	{
		___d_0 = value;
		Il2CppCodeGenWriteBarrier((&___d_0), value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CScheduleU3Ec__AnonStorey0_t2014915017, ___action_1)); }
	inline Action_t1264377477 * get_action_1() const { return ___action_1; }
	inline Action_t1264377477 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_t1264377477 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((&___action_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSCHEDULEU3EC__ANONSTOREY0_T2014915017_H
#ifndef PERIODICTIMER_T753797134_H
#define PERIODICTIMER_T753797134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer
struct  PeriodicTimer_t753797134  : public RuntimeObject
{
public:
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer::_action
	Action_t1264377477 * ____action_1;
	// System.Threading.Timer UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer::_timer
	Timer_t716671026 * ____timer_2;
	// UniRx.InternalUtil.AsyncLock UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer::_gate
	AsyncLock_t301382185 * ____gate_3;

public:
	inline static int32_t get_offset_of__action_1() { return static_cast<int32_t>(offsetof(PeriodicTimer_t753797134, ____action_1)); }
	inline Action_t1264377477 * get__action_1() const { return ____action_1; }
	inline Action_t1264377477 ** get_address_of__action_1() { return &____action_1; }
	inline void set__action_1(Action_t1264377477 * value)
	{
		____action_1 = value;
		Il2CppCodeGenWriteBarrier((&____action_1), value);
	}

	inline static int32_t get_offset_of__timer_2() { return static_cast<int32_t>(offsetof(PeriodicTimer_t753797134, ____timer_2)); }
	inline Timer_t716671026 * get__timer_2() const { return ____timer_2; }
	inline Timer_t716671026 ** get_address_of__timer_2() { return &____timer_2; }
	inline void set__timer_2(Timer_t716671026 * value)
	{
		____timer_2 = value;
		Il2CppCodeGenWriteBarrier((&____timer_2), value);
	}

	inline static int32_t get_offset_of__gate_3() { return static_cast<int32_t>(offsetof(PeriodicTimer_t753797134, ____gate_3)); }
	inline AsyncLock_t301382185 * get__gate_3() const { return ____gate_3; }
	inline AsyncLock_t301382185 ** get_address_of__gate_3() { return &____gate_3; }
	inline void set__gate_3(AsyncLock_t301382185 * value)
	{
		____gate_3 = value;
		Il2CppCodeGenWriteBarrier((&____gate_3), value);
	}
};

struct PeriodicTimer_t753797134_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.Threading.Timer> UniRx.Scheduler/ThreadPoolScheduler/PeriodicTimer::s_timers
	HashSet_1_t3576587796 * ___s_timers_0;

public:
	inline static int32_t get_offset_of_s_timers_0() { return static_cast<int32_t>(offsetof(PeriodicTimer_t753797134_StaticFields, ___s_timers_0)); }
	inline HashSet_1_t3576587796 * get_s_timers_0() const { return ___s_timers_0; }
	inline HashSet_1_t3576587796 ** get_address_of_s_timers_0() { return &___s_timers_0; }
	inline void set_s_timers_0(HashSet_1_t3576587796 * value)
	{
		___s_timers_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_timers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERIODICTIMER_T753797134_H
#ifndef DEFAULTSCHEDULERS_T4171041390_H
#define DEFAULTSCHEDULERS_T4171041390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/DefaultSchedulers
struct  DefaultSchedulers_t4171041390  : public RuntimeObject
{
public:

public:
};

struct DefaultSchedulers_t4171041390_StaticFields
{
public:
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::constantTime
	RuntimeObject* ___constantTime_0;
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::tailRecursion
	RuntimeObject* ___tailRecursion_1;
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::iteration
	RuntimeObject* ___iteration_2;
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::timeBasedOperations
	RuntimeObject* ___timeBasedOperations_3;
	// UniRx.IScheduler UniRx.Scheduler/DefaultSchedulers::asyncConversions
	RuntimeObject* ___asyncConversions_4;

public:
	inline static int32_t get_offset_of_constantTime_0() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t4171041390_StaticFields, ___constantTime_0)); }
	inline RuntimeObject* get_constantTime_0() const { return ___constantTime_0; }
	inline RuntimeObject** get_address_of_constantTime_0() { return &___constantTime_0; }
	inline void set_constantTime_0(RuntimeObject* value)
	{
		___constantTime_0 = value;
		Il2CppCodeGenWriteBarrier((&___constantTime_0), value);
	}

	inline static int32_t get_offset_of_tailRecursion_1() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t4171041390_StaticFields, ___tailRecursion_1)); }
	inline RuntimeObject* get_tailRecursion_1() const { return ___tailRecursion_1; }
	inline RuntimeObject** get_address_of_tailRecursion_1() { return &___tailRecursion_1; }
	inline void set_tailRecursion_1(RuntimeObject* value)
	{
		___tailRecursion_1 = value;
		Il2CppCodeGenWriteBarrier((&___tailRecursion_1), value);
	}

	inline static int32_t get_offset_of_iteration_2() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t4171041390_StaticFields, ___iteration_2)); }
	inline RuntimeObject* get_iteration_2() const { return ___iteration_2; }
	inline RuntimeObject** get_address_of_iteration_2() { return &___iteration_2; }
	inline void set_iteration_2(RuntimeObject* value)
	{
		___iteration_2 = value;
		Il2CppCodeGenWriteBarrier((&___iteration_2), value);
	}

	inline static int32_t get_offset_of_timeBasedOperations_3() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t4171041390_StaticFields, ___timeBasedOperations_3)); }
	inline RuntimeObject* get_timeBasedOperations_3() const { return ___timeBasedOperations_3; }
	inline RuntimeObject** get_address_of_timeBasedOperations_3() { return &___timeBasedOperations_3; }
	inline void set_timeBasedOperations_3(RuntimeObject* value)
	{
		___timeBasedOperations_3 = value;
		Il2CppCodeGenWriteBarrier((&___timeBasedOperations_3), value);
	}

	inline static int32_t get_offset_of_asyncConversions_4() { return static_cast<int32_t>(offsetof(DefaultSchedulers_t4171041390_StaticFields, ___asyncConversions_4)); }
	inline RuntimeObject* get_asyncConversions_4() const { return ___asyncConversions_4; }
	inline RuntimeObject** get_address_of_asyncConversions_4() { return &___asyncConversions_4; }
	inline void set_asyncConversions_4(RuntimeObject* value)
	{
		___asyncConversions_4 = value;
		Il2CppCodeGenWriteBarrier((&___asyncConversions_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTSCHEDULERS_T4171041390_H
#ifndef THREADPOOLSCHEDULER_T964667149_H
#define THREADPOOLSCHEDULER_T964667149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler
struct  ThreadPoolScheduler_t964667149  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPOOLSCHEDULER_T964667149_H
#ifndef TIMER_T996616921_H
#define TIMER_T996616921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler/Timer
struct  Timer_t996616921  : public RuntimeObject
{
public:
	// UniRx.SingleAssignmentDisposable UniRx.Scheduler/ThreadPoolScheduler/Timer::_disposable
	SingleAssignmentDisposable_t4102667663 * ____disposable_1;
	// System.Action UniRx.Scheduler/ThreadPoolScheduler/Timer::_action
	Action_t1264377477 * ____action_2;
	// System.Threading.Timer UniRx.Scheduler/ThreadPoolScheduler/Timer::_timer
	Timer_t716671026 * ____timer_3;
	// System.Boolean UniRx.Scheduler/ThreadPoolScheduler/Timer::_hasAdded
	bool ____hasAdded_4;
	// System.Boolean UniRx.Scheduler/ThreadPoolScheduler/Timer::_hasRemoved
	bool ____hasRemoved_5;

public:
	inline static int32_t get_offset_of__disposable_1() { return static_cast<int32_t>(offsetof(Timer_t996616921, ____disposable_1)); }
	inline SingleAssignmentDisposable_t4102667663 * get__disposable_1() const { return ____disposable_1; }
	inline SingleAssignmentDisposable_t4102667663 ** get_address_of__disposable_1() { return &____disposable_1; }
	inline void set__disposable_1(SingleAssignmentDisposable_t4102667663 * value)
	{
		____disposable_1 = value;
		Il2CppCodeGenWriteBarrier((&____disposable_1), value);
	}

	inline static int32_t get_offset_of__action_2() { return static_cast<int32_t>(offsetof(Timer_t996616921, ____action_2)); }
	inline Action_t1264377477 * get__action_2() const { return ____action_2; }
	inline Action_t1264377477 ** get_address_of__action_2() { return &____action_2; }
	inline void set__action_2(Action_t1264377477 * value)
	{
		____action_2 = value;
		Il2CppCodeGenWriteBarrier((&____action_2), value);
	}

	inline static int32_t get_offset_of__timer_3() { return static_cast<int32_t>(offsetof(Timer_t996616921, ____timer_3)); }
	inline Timer_t716671026 * get__timer_3() const { return ____timer_3; }
	inline Timer_t716671026 ** get_address_of__timer_3() { return &____timer_3; }
	inline void set__timer_3(Timer_t716671026 * value)
	{
		____timer_3 = value;
		Il2CppCodeGenWriteBarrier((&____timer_3), value);
	}

	inline static int32_t get_offset_of__hasAdded_4() { return static_cast<int32_t>(offsetof(Timer_t996616921, ____hasAdded_4)); }
	inline bool get__hasAdded_4() const { return ____hasAdded_4; }
	inline bool* get_address_of__hasAdded_4() { return &____hasAdded_4; }
	inline void set__hasAdded_4(bool value)
	{
		____hasAdded_4 = value;
	}

	inline static int32_t get_offset_of__hasRemoved_5() { return static_cast<int32_t>(offsetof(Timer_t996616921, ____hasRemoved_5)); }
	inline bool get__hasRemoved_5() const { return ____hasRemoved_5; }
	inline bool* get_address_of__hasRemoved_5() { return &____hasRemoved_5; }
	inline void set__hasRemoved_5(bool value)
	{
		____hasRemoved_5 = value;
	}
};

struct Timer_t996616921_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.Threading.Timer> UniRx.Scheduler/ThreadPoolScheduler/Timer::s_timers
	HashSet_1_t3576587796 * ___s_timers_0;

public:
	inline static int32_t get_offset_of_s_timers_0() { return static_cast<int32_t>(offsetof(Timer_t996616921_StaticFields, ___s_timers_0)); }
	inline HashSet_1_t3576587796 * get_s_timers_0() const { return ___s_timers_0; }
	inline HashSet_1_t3576587796 ** get_address_of_s_timers_0() { return &___s_timers_0; }
	inline void set_s_timers_0(HashSet_1_t3576587796 * value)
	{
		___s_timers_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_timers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T996616921_H
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
#ifndef MAINTHREADSCHEDULER_T794692167_H
#define MAINTHREADSCHEDULER_T794692167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/MainThreadScheduler
struct  MainThreadScheduler_t794692167  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler::scheduleAction
	Action_1_t3252573759 * ___scheduleAction_0;

public:
	inline static int32_t get_offset_of_scheduleAction_0() { return static_cast<int32_t>(offsetof(MainThreadScheduler_t794692167, ___scheduleAction_0)); }
	inline Action_1_t3252573759 * get_scheduleAction_0() const { return ___scheduleAction_0; }
	inline Action_1_t3252573759 ** get_address_of_scheduleAction_0() { return &___scheduleAction_0; }
	inline void set_scheduleAction_0(Action_1_t3252573759 * value)
	{
		___scheduleAction_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheduleAction_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINTHREADSCHEDULER_T794692167_H
#ifndef IGNORETIMESCALEMAINTHREADSCHEDULER_T115692742_H
#define IGNORETIMESCALEMAINTHREADSCHEDULER_T115692742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct  IgnoreTimeScaleMainThreadScheduler_t115692742  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::scheduleAction
	Action_1_t3252573759 * ___scheduleAction_0;

public:
	inline static int32_t get_offset_of_scheduleAction_0() { return static_cast<int32_t>(offsetof(IgnoreTimeScaleMainThreadScheduler_t115692742, ___scheduleAction_0)); }
	inline Action_1_t3252573759 * get_scheduleAction_0() const { return ___scheduleAction_0; }
	inline Action_1_t3252573759 ** get_address_of_scheduleAction_0() { return &___scheduleAction_0; }
	inline void set_scheduleAction_0(Action_1_t3252573759 * value)
	{
		___scheduleAction_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheduleAction_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IGNORETIMESCALEMAINTHREADSCHEDULER_T115692742_H
#ifndef WHENALLCOLLECTIONOBSERVER_T3221558212_H
#define WHENALLCOLLECTIONOBSERVER_T3221558212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver
struct  WhenAllCollectionObserver_t3221558212  : public RuntimeObject
{
public:
	// UniRx.Operators.WhenAllObservable/WhenAll_ UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::parent
	WhenAll__t3629299119 * ___parent_0;
	// System.Boolean UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::isCompleted
	bool ___isCompleted_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t3221558212, ___parent_0)); }
	inline WhenAll__t3629299119 * get_parent_0() const { return ___parent_0; }
	inline WhenAll__t3629299119 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(WhenAll__t3629299119 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_isCompleted_1() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t3221558212, ___isCompleted_1)); }
	inline bool get_isCompleted_1() const { return ___isCompleted_1; }
	inline bool* get_address_of_isCompleted_1() { return &___isCompleted_1; }
	inline void set_isCompleted_1(bool value)
	{
		___isCompleted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALLCOLLECTIONOBSERVER_T3221558212_H
#ifndef U3CSUBSCRIBECOREU3EC__ANONSTOREY2_T3331905991_H
#define U3CSUBSCRIBECOREU3EC__ANONSTOREY2_T3331905991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey2
struct  U3CSubscribeCoreU3Ec__AnonStorey2_t3331905991  : public RuntimeObject
{
public:
	// UniRx.SerialDisposable UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey2::disposable
	SerialDisposable_t3525249344 * ___disposable_0;
	// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey0 UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey2::<>f__ref$0
	U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993 * ___U3CU3Ef__refU240_1;
	// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey1 UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey2::<>f__ref$1
	U3CSubscribeCoreU3Ec__AnonStorey1_t3331905994 * ___U3CU3Ef__refU241_2;

public:
	inline static int32_t get_offset_of_disposable_0() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey2_t3331905991, ___disposable_0)); }
	inline SerialDisposable_t3525249344 * get_disposable_0() const { return ___disposable_0; }
	inline SerialDisposable_t3525249344 ** get_address_of_disposable_0() { return &___disposable_0; }
	inline void set_disposable_0(SerialDisposable_t3525249344 * value)
	{
		___disposable_0 = value;
		Il2CppCodeGenWriteBarrier((&___disposable_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey2_t3331905991, ___U3CU3Ef__refU240_1)); }
	inline U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_2() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey2_t3331905991, ___U3CU3Ef__refU241_2)); }
	inline U3CSubscribeCoreU3Ec__AnonStorey1_t3331905994 * get_U3CU3Ef__refU241_2() const { return ___U3CU3Ef__refU241_2; }
	inline U3CSubscribeCoreU3Ec__AnonStorey1_t3331905994 ** get_address_of_U3CU3Ef__refU241_2() { return &___U3CU3Ef__refU241_2; }
	inline void set_U3CU3Ef__refU241_2(U3CSubscribeCoreU3Ec__AnonStorey1_t3331905994 * value)
	{
		___U3CU3Ef__refU241_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU241_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBSCRIBECOREU3EC__ANONSTOREY2_T3331905991_H
#ifndef WHENALLCOLLECTIONOBSERVER_T535337770_H
#define WHENALLCOLLECTIONOBSERVER_T535337770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver
struct  WhenAllCollectionObserver_t535337770  : public RuntimeObject
{
public:
	// UniRx.Operators.WhenAllObservable/WhenAll UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::parent
	WhenAll_t3625170351 * ___parent_0;
	// System.Boolean UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::isCompleted
	bool ___isCompleted_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t535337770, ___parent_0)); }
	inline WhenAll_t3625170351 * get_parent_0() const { return ___parent_0; }
	inline WhenAll_t3625170351 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(WhenAll_t3625170351 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_isCompleted_1() { return static_cast<int32_t>(offsetof(WhenAllCollectionObserver_t535337770, ___isCompleted_1)); }
	inline bool get_isCompleted_1() const { return ___isCompleted_1; }
	inline bool* get_address_of_isCompleted_1() { return &___isCompleted_1; }
	inline void set_isCompleted_1(bool value)
	{
		___isCompleted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALLCOLLECTIONOBSERVER_T535337770_H
#ifndef SCHEDULER_T1572131957_H
#define SCHEDULER_T1572131957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler
struct  Scheduler_t1572131957  : public RuntimeObject
{
public:

public:
};

struct Scheduler_t1572131957_StaticFields
{
public:
	// UniRx.IScheduler UniRx.Scheduler::CurrentThread
	RuntimeObject* ___CurrentThread_0;
	// UniRx.IScheduler UniRx.Scheduler::Immediate
	RuntimeObject* ___Immediate_1;
	// UniRx.IScheduler UniRx.Scheduler::ThreadPool
	RuntimeObject* ___ThreadPool_2;
	// UniRx.IScheduler UniRx.Scheduler::mainThread
	RuntimeObject* ___mainThread_3;
	// UniRx.IScheduler UniRx.Scheduler::mainThreadIgnoreTimeScale
	RuntimeObject* ___mainThreadIgnoreTimeScale_4;
	// UniRx.IScheduler UniRx.Scheduler::mainThreadFixedUpdate
	RuntimeObject* ___mainThreadFixedUpdate_5;
	// UniRx.IScheduler UniRx.Scheduler::mainThreadEndOfFrame
	RuntimeObject* ___mainThreadEndOfFrame_6;

public:
	inline static int32_t get_offset_of_CurrentThread_0() { return static_cast<int32_t>(offsetof(Scheduler_t1572131957_StaticFields, ___CurrentThread_0)); }
	inline RuntimeObject* get_CurrentThread_0() const { return ___CurrentThread_0; }
	inline RuntimeObject** get_address_of_CurrentThread_0() { return &___CurrentThread_0; }
	inline void set_CurrentThread_0(RuntimeObject* value)
	{
		___CurrentThread_0 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentThread_0), value);
	}

	inline static int32_t get_offset_of_Immediate_1() { return static_cast<int32_t>(offsetof(Scheduler_t1572131957_StaticFields, ___Immediate_1)); }
	inline RuntimeObject* get_Immediate_1() const { return ___Immediate_1; }
	inline RuntimeObject** get_address_of_Immediate_1() { return &___Immediate_1; }
	inline void set_Immediate_1(RuntimeObject* value)
	{
		___Immediate_1 = value;
		Il2CppCodeGenWriteBarrier((&___Immediate_1), value);
	}

	inline static int32_t get_offset_of_ThreadPool_2() { return static_cast<int32_t>(offsetof(Scheduler_t1572131957_StaticFields, ___ThreadPool_2)); }
	inline RuntimeObject* get_ThreadPool_2() const { return ___ThreadPool_2; }
	inline RuntimeObject** get_address_of_ThreadPool_2() { return &___ThreadPool_2; }
	inline void set_ThreadPool_2(RuntimeObject* value)
	{
		___ThreadPool_2 = value;
		Il2CppCodeGenWriteBarrier((&___ThreadPool_2), value);
	}

	inline static int32_t get_offset_of_mainThread_3() { return static_cast<int32_t>(offsetof(Scheduler_t1572131957_StaticFields, ___mainThread_3)); }
	inline RuntimeObject* get_mainThread_3() const { return ___mainThread_3; }
	inline RuntimeObject** get_address_of_mainThread_3() { return &___mainThread_3; }
	inline void set_mainThread_3(RuntimeObject* value)
	{
		___mainThread_3 = value;
		Il2CppCodeGenWriteBarrier((&___mainThread_3), value);
	}

	inline static int32_t get_offset_of_mainThreadIgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(Scheduler_t1572131957_StaticFields, ___mainThreadIgnoreTimeScale_4)); }
	inline RuntimeObject* get_mainThreadIgnoreTimeScale_4() const { return ___mainThreadIgnoreTimeScale_4; }
	inline RuntimeObject** get_address_of_mainThreadIgnoreTimeScale_4() { return &___mainThreadIgnoreTimeScale_4; }
	inline void set_mainThreadIgnoreTimeScale_4(RuntimeObject* value)
	{
		___mainThreadIgnoreTimeScale_4 = value;
		Il2CppCodeGenWriteBarrier((&___mainThreadIgnoreTimeScale_4), value);
	}

	inline static int32_t get_offset_of_mainThreadFixedUpdate_5() { return static_cast<int32_t>(offsetof(Scheduler_t1572131957_StaticFields, ___mainThreadFixedUpdate_5)); }
	inline RuntimeObject* get_mainThreadFixedUpdate_5() const { return ___mainThreadFixedUpdate_5; }
	inline RuntimeObject** get_address_of_mainThreadFixedUpdate_5() { return &___mainThreadFixedUpdate_5; }
	inline void set_mainThreadFixedUpdate_5(RuntimeObject* value)
	{
		___mainThreadFixedUpdate_5 = value;
		Il2CppCodeGenWriteBarrier((&___mainThreadFixedUpdate_5), value);
	}

	inline static int32_t get_offset_of_mainThreadEndOfFrame_6() { return static_cast<int32_t>(offsetof(Scheduler_t1572131957_StaticFields, ___mainThreadEndOfFrame_6)); }
	inline RuntimeObject* get_mainThreadEndOfFrame_6() const { return ___mainThreadEndOfFrame_6; }
	inline RuntimeObject** get_address_of_mainThreadEndOfFrame_6() { return &___mainThreadEndOfFrame_6; }
	inline void set_mainThreadEndOfFrame_6(RuntimeObject* value)
	{
		___mainThreadEndOfFrame_6 = value;
		Il2CppCodeGenWriteBarrier((&___mainThreadEndOfFrame_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T1572131957_H
#ifndef TRAMPOLINE_T854539875_H
#define TRAMPOLINE_T854539875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/CurrentThreadScheduler/Trampoline
struct  Trampoline_t854539875  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAMPOLINE_T854539875_H
#ifndef IMMEDIATESCHEDULER_T2366437439_H
#define IMMEDIATESCHEDULER_T2366437439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ImmediateScheduler
struct  ImmediateScheduler_t2366437439  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMEDIATESCHEDULER_T2366437439_H
#ifndef CURRENTTHREADSCHEDULER_T2387236140_H
#define CURRENTTHREADSCHEDULER_T2387236140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/CurrentThreadScheduler
struct  CurrentThreadScheduler_t2387236140  : public RuntimeObject
{
public:

public:
};

struct CurrentThreadScheduler_t2387236140_ThreadStaticFields
{
public:
	// UniRx.InternalUtil.SchedulerQueue UniRx.Scheduler/CurrentThreadScheduler::s_threadLocalQueue
	SchedulerQueue_t1565164295 * ___s_threadLocalQueue_0;
	// System.Diagnostics.Stopwatch UniRx.Scheduler/CurrentThreadScheduler::s_clock
	Stopwatch_t305734070 * ___s_clock_1;

public:
	inline static int32_t get_offset_of_s_threadLocalQueue_0() { return static_cast<int32_t>(offsetof(CurrentThreadScheduler_t2387236140_ThreadStaticFields, ___s_threadLocalQueue_0)); }
	inline SchedulerQueue_t1565164295 * get_s_threadLocalQueue_0() const { return ___s_threadLocalQueue_0; }
	inline SchedulerQueue_t1565164295 ** get_address_of_s_threadLocalQueue_0() { return &___s_threadLocalQueue_0; }
	inline void set_s_threadLocalQueue_0(SchedulerQueue_t1565164295 * value)
	{
		___s_threadLocalQueue_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_threadLocalQueue_0), value);
	}

	inline static int32_t get_offset_of_s_clock_1() { return static_cast<int32_t>(offsetof(CurrentThreadScheduler_t2387236140_ThreadStaticFields, ___s_clock_1)); }
	inline Stopwatch_t305734070 * get_s_clock_1() const { return ___s_clock_1; }
	inline Stopwatch_t305734070 ** get_address_of_s_clock_1() { return &___s_clock_1; }
	inline void set_s_clock_1(Stopwatch_t305734070 * value)
	{
		___s_clock_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_clock_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTTHREADSCHEDULER_T2387236140_H
#ifndef WHENALL_T3625170351_H
#define WHENALL_T3625170351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable/WhenAll
struct  WhenAll_t3625170351  : public OperatorObserverBase_2_t3781804006
{
public:
	// UniRx.IObservable`1<UniRx.Unit>[] UniRx.Operators.WhenAllObservable/WhenAll::sources
	IObservable_1U5BU5D_t3038720744* ___sources_2;
	// System.Object UniRx.Operators.WhenAllObservable/WhenAll::gate
	RuntimeObject * ___gate_3;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll::completedCount
	int32_t ___completedCount_4;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll::length
	int32_t ___length_5;

public:
	inline static int32_t get_offset_of_sources_2() { return static_cast<int32_t>(offsetof(WhenAll_t3625170351, ___sources_2)); }
	inline IObservable_1U5BU5D_t3038720744* get_sources_2() const { return ___sources_2; }
	inline IObservable_1U5BU5D_t3038720744** get_address_of_sources_2() { return &___sources_2; }
	inline void set_sources_2(IObservable_1U5BU5D_t3038720744* value)
	{
		___sources_2 = value;
		Il2CppCodeGenWriteBarrier((&___sources_2), value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(WhenAll_t3625170351, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((&___gate_3), value);
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(WhenAll_t3625170351, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(WhenAll_t3625170351, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALL_T3625170351_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef WHENALL__T3629299119_H
#define WHENALL__T3629299119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable/WhenAll_
struct  WhenAll__t3629299119  : public OperatorObserverBase_2_t3781804006
{
public:
	// System.Collections.Generic.IList`1<UniRx.IObservable`1<UniRx.Unit>> UniRx.Operators.WhenAllObservable/WhenAll_::sources
	RuntimeObject* ___sources_2;
	// System.Object UniRx.Operators.WhenAllObservable/WhenAll_::gate
	RuntimeObject * ___gate_3;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll_::completedCount
	int32_t ___completedCount_4;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll_::length
	int32_t ___length_5;

public:
	inline static int32_t get_offset_of_sources_2() { return static_cast<int32_t>(offsetof(WhenAll__t3629299119, ___sources_2)); }
	inline RuntimeObject* get_sources_2() const { return ___sources_2; }
	inline RuntimeObject** get_address_of_sources_2() { return &___sources_2; }
	inline void set_sources_2(RuntimeObject* value)
	{
		___sources_2 = value;
		Il2CppCodeGenWriteBarrier((&___sources_2), value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(WhenAll__t3629299119, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((&___gate_3), value);
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(WhenAll__t3629299119, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(WhenAll__t3629299119, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALL__T3629299119_H
#ifndef WHENALLOBSERVABLE_T722905145_H
#define WHENALLOBSERVABLE_T722905145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.WhenAllObservable
struct  WhenAllObservable_t722905145  : public OperatorObservableBase_1_t354719556
{
public:
	// UniRx.IObservable`1<UniRx.Unit>[] UniRx.Operators.WhenAllObservable::sources
	IObservable_1U5BU5D_t3038720744* ___sources_1;
	// System.Collections.Generic.IEnumerable`1<UniRx.IObservable`1<UniRx.Unit>> UniRx.Operators.WhenAllObservable::sourcesEnumerable
	RuntimeObject* ___sourcesEnumerable_2;

public:
	inline static int32_t get_offset_of_sources_1() { return static_cast<int32_t>(offsetof(WhenAllObservable_t722905145, ___sources_1)); }
	inline IObservable_1U5BU5D_t3038720744* get_sources_1() const { return ___sources_1; }
	inline IObservable_1U5BU5D_t3038720744** get_address_of_sources_1() { return &___sources_1; }
	inline void set_sources_1(IObservable_1U5BU5D_t3038720744* value)
	{
		___sources_1 = value;
		Il2CppCodeGenWriteBarrier((&___sources_1), value);
	}

	inline static int32_t get_offset_of_sourcesEnumerable_2() { return static_cast<int32_t>(offsetof(WhenAllObservable_t722905145, ___sourcesEnumerable_2)); }
	inline RuntimeObject* get_sourcesEnumerable_2() const { return ___sourcesEnumerable_2; }
	inline RuntimeObject** get_address_of_sourcesEnumerable_2() { return &___sourcesEnumerable_2; }
	inline void set_sourcesEnumerable_2(RuntimeObject* value)
	{
		___sourcesEnumerable_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourcesEnumerable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHENALLOBSERVABLE_T722905145_H
#ifndef U3CPERIODICACTIONU3EC__ITERATOR1_T1273408431_H
#define U3CPERIODICACTIONU3EC__ITERATOR1_T1273408431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1
struct  U3CPeriodicActionU3Ec__Iterator1_t1273408431  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::period
	TimeSpan_t881159249  ___period_0;
	// UniRx.ICancelable UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::action
	Action_t1264377477 * ___action_2;
	// System.Single UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::<seconds>__1
	float ___U3CsecondsU3E__1_3;
	// UnityEngine.WaitForSeconds UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::<yieldInstruction>__1
	WaitForSeconds_t1699091251 * ___U3CyieldInstructionU3E__1_4;
	// System.Object UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_period_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t1273408431, ___period_0)); }
	inline TimeSpan_t881159249  get_period_0() const { return ___period_0; }
	inline TimeSpan_t881159249 * get_address_of_period_0() { return &___period_0; }
	inline void set_period_0(TimeSpan_t881159249  value)
	{
		___period_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t1273408431, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t1273408431, ___action_2)); }
	inline Action_t1264377477 * get_action_2() const { return ___action_2; }
	inline Action_t1264377477 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t1264377477 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CsecondsU3E__1_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t1273408431, ___U3CsecondsU3E__1_3)); }
	inline float get_U3CsecondsU3E__1_3() const { return ___U3CsecondsU3E__1_3; }
	inline float* get_address_of_U3CsecondsU3E__1_3() { return &___U3CsecondsU3E__1_3; }
	inline void set_U3CsecondsU3E__1_3(float value)
	{
		___U3CsecondsU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CyieldInstructionU3E__1_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t1273408431, ___U3CyieldInstructionU3E__1_4)); }
	inline WaitForSeconds_t1699091251 * get_U3CyieldInstructionU3E__1_4() const { return ___U3CyieldInstructionU3E__1_4; }
	inline WaitForSeconds_t1699091251 ** get_address_of_U3CyieldInstructionU3E__1_4() { return &___U3CyieldInstructionU3E__1_4; }
	inline void set_U3CyieldInstructionU3E__1_4(WaitForSeconds_t1699091251 * value)
	{
		___U3CyieldInstructionU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CyieldInstructionU3E__1_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t1273408431, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t1273408431, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ec__Iterator1_t1273408431, ___U24PC_7)); }
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
#endif // U3CPERIODICACTIONU3EC__ITERATOR1_T1273408431_H
#ifndef U3CSUBSCRIBECOREU3EC__ANONSTOREY3_T3331905992_H
#define U3CSUBSCRIBECOREU3EC__ANONSTOREY3_T3331905992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey3
struct  U3CSubscribeCoreU3Ec__AnonStorey3_t3331905992  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey3::timeP
	TimeSpan_t881159249  ___timeP_0;
	// UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey0 UniRx.Operators.TimerObservable/<SubscribeCore>c__AnonStorey3::<>f__ref$0
	U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_timeP_0() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey3_t3331905992, ___timeP_0)); }
	inline TimeSpan_t881159249  get_timeP_0() const { return ___timeP_0; }
	inline TimeSpan_t881159249 * get_address_of_timeP_0() { return &___timeP_0; }
	inline void set_timeP_0(TimeSpan_t881159249  value)
	{
		___timeP_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CSubscribeCoreU3Ec__AnonStorey3_t3331905992, ___U3CU3Ef__refU240_1)); }
	inline U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CSubscribeCoreU3Ec__AnonStorey0_t3331905993 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSUBSCRIBECOREU3EC__ANONSTOREY3_T3331905992_H
#ifndef U3CDELAYACTIONU3EC__ITERATOR0_T3203061179_H
#define U3CDELAYACTIONU3EC__ITERATOR0_T3203061179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0
struct  U3CDelayActionU3Ec__Iterator0_t3203061179  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::dueTime
	TimeSpan_t881159249  ___dueTime_0;
	// UniRx.ICancelable UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::action
	Action_t1264377477 * ___action_2;
	// System.Object UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UniRx.Scheduler/MainThreadScheduler/<DelayAction>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_dueTime_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t3203061179, ___dueTime_0)); }
	inline TimeSpan_t881159249  get_dueTime_0() const { return ___dueTime_0; }
	inline TimeSpan_t881159249 * get_address_of_dueTime_0() { return &___dueTime_0; }
	inline void set_dueTime_0(TimeSpan_t881159249  value)
	{
		___dueTime_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t3203061179, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t3203061179, ___action_2)); }
	inline Action_t1264377477 * get_action_2() const { return ___action_2; }
	inline Action_t1264377477 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t1264377477 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t3203061179, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t3203061179, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t3203061179, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYACTIONU3EC__ITERATOR0_T3203061179_H
#ifndef U3CDELAYACTIONU3EC__ITERATOR0_T749594046_H
#define U3CDELAYACTIONU3EC__ITERATOR0_T749594046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0
struct  U3CDelayActionU3Ec__Iterator0_t749594046  : public RuntimeObject
{
public:
	// System.TimeSpan UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::dueTime
	TimeSpan_t881159249  ___dueTime_0;
	// UniRx.ICancelable UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::cancellation
	RuntimeObject* ___cancellation_1;
	// System.Action UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::action
	Action_t1264377477 * ___action_2;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::<elapsed>__1
	float ___U3CelapsedU3E__1_3;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::<dt>__1
	float ___U3CdtU3E__1_4;
	// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_dueTime_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t749594046, ___dueTime_0)); }
	inline TimeSpan_t881159249  get_dueTime_0() const { return ___dueTime_0; }
	inline TimeSpan_t881159249 * get_address_of_dueTime_0() { return &___dueTime_0; }
	inline void set_dueTime_0(TimeSpan_t881159249  value)
	{
		___dueTime_0 = value;
	}

	inline static int32_t get_offset_of_cancellation_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t749594046, ___cancellation_1)); }
	inline RuntimeObject* get_cancellation_1() const { return ___cancellation_1; }
	inline RuntimeObject** get_address_of_cancellation_1() { return &___cancellation_1; }
	inline void set_cancellation_1(RuntimeObject* value)
	{
		___cancellation_1 = value;
		Il2CppCodeGenWriteBarrier((&___cancellation_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t749594046, ___action_2)); }
	inline Action_t1264377477 * get_action_2() const { return ___action_2; }
	inline Action_t1264377477 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t1264377477 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__1_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t749594046, ___U3CelapsedU3E__1_3)); }
	inline float get_U3CelapsedU3E__1_3() const { return ___U3CelapsedU3E__1_3; }
	inline float* get_address_of_U3CelapsedU3E__1_3() { return &___U3CelapsedU3E__1_3; }
	inline void set_U3CelapsedU3E__1_3(float value)
	{
		___U3CelapsedU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E__1_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t749594046, ___U3CdtU3E__1_4)); }
	inline float get_U3CdtU3E__1_4() const { return ___U3CdtU3E__1_4; }
	inline float* get_address_of_U3CdtU3E__1_4() { return &___U3CdtU3E__1_4; }
	inline void set_U3CdtU3E__1_4(float value)
	{
		___U3CdtU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t749594046, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t749594046, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ec__Iterator0_t749594046, ___U24PC_7)); }
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
#endif // U3CDELAYACTIONU3EC__ITERATOR0_T749594046_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (U3CSubscribeCoreU3Ec__AnonStorey2_t3331905991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2300[3] = 
{
	U3CSubscribeCoreU3Ec__AnonStorey2_t3331905991::get_offset_of_disposable_0(),
	U3CSubscribeCoreU3Ec__AnonStorey2_t3331905991::get_offset_of_U3CU3Ef__refU240_1(),
	U3CSubscribeCoreU3Ec__AnonStorey2_t3331905991::get_offset_of_U3CU3Ef__refU241_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (U3CSubscribeCoreU3Ec__AnonStorey3_t3331905992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2301[2] = 
{
	U3CSubscribeCoreU3Ec__AnonStorey3_t3331905992::get_offset_of_timeP_0(),
	U3CSubscribeCoreU3Ec__AnonStorey3_t3331905992::get_offset_of_U3CU3Ef__refU240_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2302[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2303[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2304[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2305[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2306[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2307[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2309[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2310[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2311[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2312[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2313[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2314[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2315[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (WhenAllObservable_t722905145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[2] = 
{
	WhenAllObservable_t722905145::get_offset_of_sources_1(),
	WhenAllObservable_t722905145::get_offset_of_sourcesEnumerable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (WhenAll_t3625170351), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2318[4] = 
{
	WhenAll_t3625170351::get_offset_of_sources_2(),
	WhenAll_t3625170351::get_offset_of_gate_3(),
	WhenAll_t3625170351::get_offset_of_completedCount_4(),
	WhenAll_t3625170351::get_offset_of_length_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (WhenAllCollectionObserver_t535337770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2319[2] = 
{
	WhenAllCollectionObserver_t535337770::get_offset_of_parent_0(),
	WhenAllCollectionObserver_t535337770::get_offset_of_isCompleted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (WhenAll__t3629299119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[4] = 
{
	WhenAll__t3629299119::get_offset_of_sources_2(),
	WhenAll__t3629299119::get_offset_of_gate_3(),
	WhenAll__t3629299119::get_offset_of_completedCount_4(),
	WhenAll__t3629299119::get_offset_of_length_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (WhenAllCollectionObserver_t3221558212), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2321[2] = 
{
	WhenAllCollectionObserver_t3221558212::get_offset_of_parent_0(),
	WhenAllCollectionObserver_t3221558212::get_offset_of_isCompleted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2322[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2323[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2324[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2325[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2326[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2327[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2328[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2329[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2330[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2331[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2337[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2338[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2339[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2340[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2341[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2342[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2343[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2344[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2345[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2346[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2347[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2348[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2349[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2350[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2351[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2352[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2353[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2355[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2356[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2362[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2363[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2364[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2365[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2366[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2367[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2368[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2369[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2370[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2371[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2372[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2373[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2374[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2375[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2376[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2377[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2378[9] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2380[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2381[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2382[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { sizeof (Scheduler_t1572131957), -1, sizeof(Scheduler_t1572131957_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2383[7] = 
{
	Scheduler_t1572131957_StaticFields::get_offset_of_CurrentThread_0(),
	Scheduler_t1572131957_StaticFields::get_offset_of_Immediate_1(),
	Scheduler_t1572131957_StaticFields::get_offset_of_ThreadPool_2(),
	Scheduler_t1572131957_StaticFields::get_offset_of_mainThread_3(),
	Scheduler_t1572131957_StaticFields::get_offset_of_mainThreadIgnoreTimeScale_4(),
	Scheduler_t1572131957_StaticFields::get_offset_of_mainThreadFixedUpdate_5(),
	Scheduler_t1572131957_StaticFields::get_offset_of_mainThreadEndOfFrame_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { sizeof (CurrentThreadScheduler_t2387236140), -1, 0, sizeof(CurrentThreadScheduler_t2387236140_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable2384[2] = 
{
	THREAD_STATIC_FIELD_OFFSET,
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { sizeof (Trampoline_t854539875), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { sizeof (ImmediateScheduler_t2366437439), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { sizeof (DefaultSchedulers_t4171041390), -1, sizeof(DefaultSchedulers_t4171041390_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2387[5] = 
{
	DefaultSchedulers_t4171041390_StaticFields::get_offset_of_constantTime_0(),
	DefaultSchedulers_t4171041390_StaticFields::get_offset_of_tailRecursion_1(),
	DefaultSchedulers_t4171041390_StaticFields::get_offset_of_iteration_2(),
	DefaultSchedulers_t4171041390_StaticFields::get_offset_of_timeBasedOperations_3(),
	DefaultSchedulers_t4171041390_StaticFields::get_offset_of_asyncConversions_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { sizeof (ThreadPoolScheduler_t964667149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { sizeof (Timer_t996616921), -1, sizeof(Timer_t996616921_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2389[6] = 
{
	Timer_t996616921_StaticFields::get_offset_of_s_timers_0(),
	Timer_t996616921::get_offset_of__disposable_1(),
	Timer_t996616921::get_offset_of__action_2(),
	Timer_t996616921::get_offset_of__timer_3(),
	Timer_t996616921::get_offset_of__hasAdded_4(),
	Timer_t996616921::get_offset_of__hasRemoved_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { sizeof (PeriodicTimer_t753797134), -1, sizeof(PeriodicTimer_t753797134_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2390[4] = 
{
	PeriodicTimer_t753797134_StaticFields::get_offset_of_s_timers_0(),
	PeriodicTimer_t753797134::get_offset_of__action_1(),
	PeriodicTimer_t753797134::get_offset_of__timer_2(),
	PeriodicTimer_t753797134::get_offset_of__gate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { sizeof (U3CScheduleU3Ec__AnonStorey0_t2014915017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2391[2] = 
{
	U3CScheduleU3Ec__AnonStorey0_t2014915017::get_offset_of_d_0(),
	U3CScheduleU3Ec__AnonStorey0_t2014915017::get_offset_of_action_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2392[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { sizeof (MainThreadScheduler_t794692167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2393[1] = 
{
	MainThreadScheduler_t794692167::get_offset_of_scheduleAction_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2394[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { sizeof (U3CDelayActionU3Ec__Iterator0_t3203061179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2395[6] = 
{
	U3CDelayActionU3Ec__Iterator0_t3203061179::get_offset_of_dueTime_0(),
	U3CDelayActionU3Ec__Iterator0_t3203061179::get_offset_of_cancellation_1(),
	U3CDelayActionU3Ec__Iterator0_t3203061179::get_offset_of_action_2(),
	U3CDelayActionU3Ec__Iterator0_t3203061179::get_offset_of_U24current_3(),
	U3CDelayActionU3Ec__Iterator0_t3203061179::get_offset_of_U24disposing_4(),
	U3CDelayActionU3Ec__Iterator0_t3203061179::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (U3CPeriodicActionU3Ec__Iterator1_t1273408431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2396[8] = 
{
	U3CPeriodicActionU3Ec__Iterator1_t1273408431::get_offset_of_period_0(),
	U3CPeriodicActionU3Ec__Iterator1_t1273408431::get_offset_of_cancellation_1(),
	U3CPeriodicActionU3Ec__Iterator1_t1273408431::get_offset_of_action_2(),
	U3CPeriodicActionU3Ec__Iterator1_t1273408431::get_offset_of_U3CsecondsU3E__1_3(),
	U3CPeriodicActionU3Ec__Iterator1_t1273408431::get_offset_of_U3CyieldInstructionU3E__1_4(),
	U3CPeriodicActionU3Ec__Iterator1_t1273408431::get_offset_of_U24current_5(),
	U3CPeriodicActionU3Ec__Iterator1_t1273408431::get_offset_of_U24disposing_6(),
	U3CPeriodicActionU3Ec__Iterator1_t1273408431::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (IgnoreTimeScaleMainThreadScheduler_t115692742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2397[1] = 
{
	IgnoreTimeScaleMainThreadScheduler_t115692742::get_offset_of_scheduleAction_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2398[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (U3CDelayActionU3Ec__Iterator0_t749594046), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2399[8] = 
{
	U3CDelayActionU3Ec__Iterator0_t749594046::get_offset_of_dueTime_0(),
	U3CDelayActionU3Ec__Iterator0_t749594046::get_offset_of_cancellation_1(),
	U3CDelayActionU3Ec__Iterator0_t749594046::get_offset_of_action_2(),
	U3CDelayActionU3Ec__Iterator0_t749594046::get_offset_of_U3CelapsedU3E__1_3(),
	U3CDelayActionU3Ec__Iterator0_t749594046::get_offset_of_U3CdtU3E__1_4(),
	U3CDelayActionU3Ec__Iterator0_t749594046::get_offset_of_U24current_5(),
	U3CDelayActionU3Ec__Iterator0_t749594046::get_offset_of_U24disposing_6(),
	U3CDelayActionU3Ec__Iterator0_t749594046::get_offset_of_U24PC_7(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
