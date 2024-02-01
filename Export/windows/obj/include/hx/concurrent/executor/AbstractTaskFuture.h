// Generated by Haxe 4.3.3
#ifndef INCLUDED_hx_concurrent_executor_AbstractTaskFuture
#define INCLUDED_hx_concurrent_executor_AbstractTaskFuture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_concurrent_CompletableFuture
#include <hx/concurrent/CompletableFuture.h>
#endif
#ifndef INCLUDED_hx_concurrent_executor_TaskFuture
#include <hx/concurrent/executor/TaskFuture.h>
#endif
HX_DECLARE_CLASS2(hx,concurrent,AbstractFuture)
HX_DECLARE_CLASS2(hx,concurrent,CompletableFuture)
HX_DECLARE_CLASS2(hx,concurrent,Future)
HX_DECLARE_CLASS2(hx,concurrent,FutureResult)
HX_DECLARE_CLASS2(hx,concurrent,Service)
HX_DECLARE_CLASS2(hx,concurrent,ServiceBase)
HX_DECLARE_CLASS3(hx,concurrent,executor,AbstractTaskFuture)
HX_DECLARE_CLASS3(hx,concurrent,executor,Executor)
HX_DECLARE_CLASS3(hx,concurrent,executor,Schedule)
HX_DECLARE_CLASS3(hx,concurrent,executor,TaskFuture)
HX_DECLARE_CLASS4(hx,concurrent,internal,_Either2,_Either2)

namespace hx{
namespace concurrent{
namespace executor{


class HXCPP_CLASS_ATTRIBUTES AbstractTaskFuture_obj : public  ::hx::concurrent::CompletableFuture_obj
{
	public:
		typedef  ::hx::concurrent::CompletableFuture_obj super;
		typedef AbstractTaskFuture_obj OBJ_;
		AbstractTaskFuture_obj();

	public:
		enum { _hx_ClassId = 0x7b9c8b84 };

		void __construct( ::hx::concurrent::executor::Executor executor, ::hx::concurrent::internal::_Either2::_Either2 task, ::hx::concurrent::executor::Schedule schedule);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.concurrent.executor.AbstractTaskFuture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.concurrent.executor.AbstractTaskFuture"); }

		//~AbstractTaskFuture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AbstractTaskFuture",0a,a5,38,7b); }

		 ::hx::concurrent::executor::Schedule schedule;
		bool isStopped;
		 ::hx::concurrent::executor::Executor _executor;
		 ::hx::concurrent::internal::_Either2::_Either2 _task;
		virtual void cancel();
		::Dynamic cancel_dyn();

		 ::hx::concurrent::FutureResult awaitCompletion(int timeoutMS);
		::Dynamic awaitCompletion_dyn();

};

} // end namespace hx
} // end namespace concurrent
} // end namespace executor

#endif /* INCLUDED_hx_concurrent_executor_AbstractTaskFuture */ 
