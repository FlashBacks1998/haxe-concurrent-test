// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hx_concurrent_AbstractFuture
#include <hx/concurrent/AbstractFuture.h>
#endif
#ifndef INCLUDED_hx_concurrent_CompletableFuture
#include <hx/concurrent/CompletableFuture.h>
#endif
#ifndef INCLUDED_hx_concurrent_ConcurrentException
#include <hx/concurrent/ConcurrentException.h>
#endif
#ifndef INCLUDED_hx_concurrent_Future
#include <hx/concurrent/Future.h>
#endif
#ifndef INCLUDED_hx_concurrent_FutureResult
#include <hx/concurrent/FutureResult.h>
#endif
#ifndef INCLUDED_hx_concurrent_Service
#include <hx/concurrent/Service.h>
#endif
#ifndef INCLUDED_hx_concurrent_ServiceBase
#include <hx/concurrent/ServiceBase.h>
#endif
#ifndef INCLUDED_hx_concurrent_executor_AbstractTaskFuture
#include <hx/concurrent/executor/AbstractTaskFuture.h>
#endif
#ifndef INCLUDED_hx_concurrent_executor_Executor
#include <hx/concurrent/executor/Executor.h>
#endif
#ifndef INCLUDED_hx_concurrent_executor_Schedule
#include <hx/concurrent/executor/Schedule.h>
#endif
#ifndef INCLUDED_hx_concurrent_executor_ScheduleTools
#include <hx/concurrent/executor/ScheduleTools.h>
#endif
#ifndef INCLUDED_hx_concurrent_executor_TaskFuture
#include <hx/concurrent/executor/TaskFuture.h>
#endif
#ifndef INCLUDED_hx_concurrent_executor_ThreadPoolExecutor
#include <hx/concurrent/executor/ThreadPoolExecutor.h>
#endif
#ifndef INCLUDED_hx_concurrent_executor__ThreadPoolExecutor_TaskFutureImpl
#include <hx/concurrent/executor/_ThreadPoolExecutor/TaskFutureImpl.h>
#endif
#ifndef INCLUDED_hx_concurrent_internal__Either2__Either2
#include <hx/concurrent/internal/_Either2/_Either2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ca8fa8c5f43466d_165_new,"hx.concurrent.executor._ThreadPoolExecutor.TaskFutureImpl","new",0x9ab633d2,"hx.concurrent.executor._ThreadPoolExecutor.TaskFutureImpl.new","hx/concurrent/executor/ThreadPoolExecutor.hx",165,0x82271a22)
HX_LOCAL_STACK_FRAME(_hx_pos_6ca8fa8c5f43466d_171_isDue,"hx.concurrent.executor._ThreadPoolExecutor.TaskFutureImpl","isDue",0x83a215dc,"hx.concurrent.executor._ThreadPoolExecutor.TaskFutureImpl.isDue","hx/concurrent/executor/ThreadPoolExecutor.hx",171,0x82271a22)
HX_LOCAL_STACK_FRAME(_hx_pos_6ca8fa8c5f43466d_191_run,"hx.concurrent.executor._ThreadPoolExecutor.TaskFutureImpl","run",0x9ab94abd,"hx.concurrent.executor._ThreadPoolExecutor.TaskFutureImpl.run","hx/concurrent/executor/ThreadPoolExecutor.hx",191,0x82271a22)
namespace hx{
namespace concurrent{
namespace executor{
namespace _ThreadPoolExecutor{

void TaskFutureImpl_obj::__construct( ::hx::concurrent::executor::ThreadPoolExecutor executor, ::hx::concurrent::internal::_Either2::_Either2 task, ::hx::concurrent::executor::Schedule schedule){
            	HX_STACKFRAME(&_hx_pos_6ca8fa8c5f43466d_165_new)
HXLINE( 166)		super::__construct(executor,task,schedule);
HXLINE( 167)		this->_nextRunAt = ::hx::concurrent::executor::ScheduleTools_obj::firstRunAt(this->schedule);
            	}

Dynamic TaskFutureImpl_obj::__CreateEmpty() { return new TaskFutureImpl_obj; }

void *TaskFutureImpl_obj::_hx_vtable = 0;

Dynamic TaskFutureImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TaskFutureImpl_obj > _hx_result = new TaskFutureImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TaskFutureImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x30365f26) {
		if (inClassId<=(int)0x1af78b62) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1af78b62;
		} else {
			return inClassId==(int)0x30365f26;
		}
	} else {
		return inClassId==(int)0x77d6e8d0 || inClassId==(int)0x7b9c8b84;
	}
}

bool TaskFutureImpl_obj::isDue(){
            	HX_STACKFRAME(&_hx_pos_6ca8fa8c5f43466d_171_isDue)
HXLINE( 172)		bool _hx_tmp;
HXDLIN( 172)		if (!(this->isStopped)) {
HXLINE( 172)			_hx_tmp = (this->_nextRunAt == -1);
            		}
            		else {
HXLINE( 172)			_hx_tmp = true;
            		}
HXDLIN( 172)		if (_hx_tmp) {
HXLINE( 173)			return false;
            		}
HXLINE( 175)		Float _hx_tmp1 = (::Sys_obj::time() * ( (Float)(1000) ));
HXDLIN( 175)		if ((_hx_tmp1 >= this->_nextRunAt)) {
HXLINE( 177)			{
HXLINE( 177)				 ::hx::concurrent::executor::Schedule _g = this->schedule;
HXDLIN( 177)				switch((int)(_g->_hx_getIndex())){
            					case (int)0: {
HXLINE( 178)						 ::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 178)						this->_nextRunAt = ( (Float)(-1) );
            					}
            					break;
            					case (int)1: {
HXLINE( 179)						int _g2 = _g->_hx_getInt(0);
HXDLIN( 179)						 ::Dynamic _g3 = _g->_hx_getObject(1);
HXDLIN( 179)						this->_nextRunAt = ( (Float)(-1) );
            					}
            					break;
            					case (int)2: {
HXLINE( 180)						 ::Dynamic _g4 = _g->_hx_getObject(1);
HXDLIN( 180)						{
HXLINE( 180)							int intervalMS = _g->_hx_getInt(0);
HXDLIN( 180)							 ::hx::concurrent::executor::_ThreadPoolExecutor::TaskFutureImpl _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)							_hx_tmp2->_nextRunAt = (_hx_tmp2->_nextRunAt + intervalMS);
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 181)						 ::Dynamic _g5 = _g->_hx_getObject(0);
HXDLIN( 181)						 ::Dynamic _g6 = _g->_hx_getObject(1);
HXDLIN( 181)						 ::hx::concurrent::executor::_ThreadPoolExecutor::TaskFutureImpl _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 181)						_hx_tmp3->_nextRunAt = (_hx_tmp3->_nextRunAt + 3600000);
            					}
            					break;
            					case (int)4: {
HXLINE( 182)						 ::Dynamic _g7 = _g->_hx_getObject(0);
HXDLIN( 182)						 ::Dynamic _g8 = _g->_hx_getObject(1);
HXDLIN( 182)						 ::Dynamic _g9 = _g->_hx_getObject(2);
HXDLIN( 182)						 ::hx::concurrent::executor::_ThreadPoolExecutor::TaskFutureImpl _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)						_hx_tmp4->_nextRunAt = (_hx_tmp4->_nextRunAt + 86400000);
            					}
            					break;
            					case (int)5: {
HXLINE( 183)						 ::Dynamic _g10 = _g->_hx_getObject(0);
HXDLIN( 183)						 ::Dynamic _g11 = _g->_hx_getObject(1);
HXDLIN( 183)						 ::Dynamic _g12 = _g->_hx_getObject(2);
HXDLIN( 183)						 ::Dynamic _g13 = _g->_hx_getObject(3);
HXDLIN( 183)						 ::hx::concurrent::executor::_ThreadPoolExecutor::TaskFutureImpl _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)						_hx_tmp5->_nextRunAt = (_hx_tmp5->_nextRunAt + 604800000);
            					}
            					break;
            				}
            			}
HXLINE( 185)			return true;
            		}
HXLINE( 187)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TaskFutureImpl_obj,isDue,return )

void TaskFutureImpl_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_6ca8fa8c5f43466d_191_run)
HXLINE( 192)		if (this->isStopped) {
HXLINE( 193)			return;
            		}
HXLINE( 195)		 ::hx::concurrent::internal::_Either2::_Either2 fnResult;
HXLINE( 196)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 197)			 ::hx::concurrent::internal::_Either2::_Either2 _g = this->_task;
HXDLIN( 197)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 198)					 ::Dynamic functionWithReturnValue = _g->_hx_getObject(0);
HXDLIN( 198)					fnResult = ::hx::concurrent::internal::_Either2::_Either2_obj::a(functionWithReturnValue());
            				}
            				break;
            				case (int)1: {
HXLINE( 199)					 ::Dynamic functionWithoutReturnValue = _g->_hx_getObject(0);
HXDLIN( 199)					functionWithoutReturnValue();
HXDLIN( 199)					fnResult = null();
            				}
            				break;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g1 = _hx_e;
HXLINE( 201)				 ::haxe::Exception ex = ::haxe::Exception_obj::caught(_g1);
HXLINE( 202)				fnResult = ::hx::concurrent::internal::_Either2::_Either2_obj::b( ::hx::concurrent::ConcurrentException_obj::__alloc( HX_CTX ,ex));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 205)		{
HXLINE( 205)			 ::hx::concurrent::executor::Schedule _g2 = this->schedule;
HXDLIN( 205)			switch((int)(_g2->_hx_getIndex())){
            				case (int)0: {
HXLINE( 206)					 ::Dynamic _g3 = _g2->_hx_getObject(0);
HXDLIN( 206)					this->isStopped = true;
            				}
            				break;
            				case (int)1: {
HXLINE( 207)					 ::Dynamic _g4 = _g2->_hx_getObject(1);
HXDLIN( 207)					{
HXLINE( 207)						int intervalMS = _g2->_hx_getInt(0);
HXDLIN( 207)						this->_nextRunAt = ((::Sys_obj::time() * ( (Float)(1000) )) + intervalMS);
            					}
            				}
            				break;
            				default:{
            				}
            			}
            		}
HXLINE( 211)		this->complete(fnResult,true);
HXLINE( 212)		this->_executor->notifyResult(this->result);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TaskFutureImpl_obj,run,(void))


::hx::ObjectPtr< TaskFutureImpl_obj > TaskFutureImpl_obj::__new( ::hx::concurrent::executor::ThreadPoolExecutor executor, ::hx::concurrent::internal::_Either2::_Either2 task, ::hx::concurrent::executor::Schedule schedule) {
	::hx::ObjectPtr< TaskFutureImpl_obj > __this = new TaskFutureImpl_obj();
	__this->__construct(executor,task,schedule);
	return __this;
}

::hx::ObjectPtr< TaskFutureImpl_obj > TaskFutureImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::concurrent::executor::ThreadPoolExecutor executor, ::hx::concurrent::internal::_Either2::_Either2 task, ::hx::concurrent::executor::Schedule schedule) {
	TaskFutureImpl_obj *__this = (TaskFutureImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TaskFutureImpl_obj), true, "hx.concurrent.executor._ThreadPoolExecutor.TaskFutureImpl"));
	*(void **)__this = TaskFutureImpl_obj::_hx_vtable;
	__this->__construct(executor,task,schedule);
	return __this;
}

TaskFutureImpl_obj::TaskFutureImpl_obj()
{
}

::hx::Val TaskFutureImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isDue") ) { return ::hx::Val( isDue_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_nextRunAt") ) { return ::hx::Val( _nextRunAt ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TaskFutureImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_nextRunAt") ) { _nextRunAt=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TaskFutureImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_nextRunAt",ec,5e,3f,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TaskFutureImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TaskFutureImpl_obj,_nextRunAt),HX_("_nextRunAt",ec,5e,3f,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TaskFutureImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String TaskFutureImpl_obj_sMemberFields[] = {
	HX_("_nextRunAt",ec,5e,3f,f4),
	HX_("isDue",ea,71,4a,c1),
	HX_("run",4b,e7,56,00),
	::String(null()) };

::hx::Class TaskFutureImpl_obj::__mClass;

void TaskFutureImpl_obj::__register()
{
	TaskFutureImpl_obj _hx_dummy;
	TaskFutureImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.concurrent.executor._ThreadPoolExecutor.TaskFutureImpl",e0,a2,bf,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TaskFutureImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TaskFutureImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TaskFutureImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TaskFutureImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace concurrent
} // end namespace executor
} // end namespace _ThreadPoolExecutor
