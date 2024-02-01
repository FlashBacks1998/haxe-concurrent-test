// Generated by Haxe 4.3.3
#ifndef INCLUDED_hx_concurrent_executor__TimerExecutor_TaskFutureImpl
#define INCLUDED_hx_concurrent_executor__TimerExecutor_TaskFutureImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_concurrent_executor_AbstractTaskFuture
#include <hx/concurrent/executor/AbstractTaskFuture.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(hx,concurrent,AbstractFuture)
HX_DECLARE_CLASS2(hx,concurrent,CompletableFuture)
HX_DECLARE_CLASS2(hx,concurrent,Future)
HX_DECLARE_CLASS2(hx,concurrent,Service)
HX_DECLARE_CLASS2(hx,concurrent,ServiceBase)
HX_DECLARE_CLASS3(hx,concurrent,executor,AbstractTaskFuture)
HX_DECLARE_CLASS3(hx,concurrent,executor,Executor)
HX_DECLARE_CLASS3(hx,concurrent,executor,Schedule)
HX_DECLARE_CLASS3(hx,concurrent,executor,TaskFuture)
HX_DECLARE_CLASS3(hx,concurrent,executor,TimerExecutor)
HX_DECLARE_CLASS4(hx,concurrent,executor,_TimerExecutor,TaskFutureImpl)
HX_DECLARE_CLASS4(hx,concurrent,internal,_Either2,_Either2)

namespace hx{
namespace concurrent{
namespace executor{
namespace _TimerExecutor{


class HXCPP_CLASS_ATTRIBUTES TaskFutureImpl_obj : public  ::hx::concurrent::executor::AbstractTaskFuture_obj
{
	public:
		typedef  ::hx::concurrent::executor::AbstractTaskFuture_obj super;
		typedef TaskFutureImpl_obj OBJ_;
		TaskFutureImpl_obj();

	public:
		enum { _hx_ClassId = 0x580ae5fb };

		void __construct( ::hx::concurrent::executor::TimerExecutor executor, ::hx::concurrent::internal::_Either2::_Either2 task, ::hx::concurrent::executor::Schedule schedule);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.concurrent.executor._TimerExecutor.TaskFutureImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.concurrent.executor._TimerExecutor.TaskFutureImpl"); }
		static ::hx::ObjectPtr< TaskFutureImpl_obj > __new( ::hx::concurrent::executor::TimerExecutor executor, ::hx::concurrent::internal::_Either2::_Either2 task, ::hx::concurrent::executor::Schedule schedule);
		static ::hx::ObjectPtr< TaskFutureImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::concurrent::executor::TimerExecutor executor, ::hx::concurrent::internal::_Either2::_Either2 task, ::hx::concurrent::executor::Schedule schedule);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TaskFutureImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TaskFutureImpl",88,20,5c,8a); }

		 ::haxe::Timer _timer;
		void run();
		::Dynamic run_dyn();

		void cancel();

};

} // end namespace hx
} // end namespace concurrent
} // end namespace executor
} // end namespace _TimerExecutor

#endif /* INCLUDED_hx_concurrent_executor__TimerExecutor_TaskFutureImpl */ 
