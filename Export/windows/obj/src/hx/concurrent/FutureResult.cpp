// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_hx_concurrent_ConcurrentException
#include <hx/concurrent/ConcurrentException.h>
#endif
#ifndef INCLUDED_hx_concurrent_Future
#include <hx/concurrent/Future.h>
#endif
#ifndef INCLUDED_hx_concurrent_FutureResult
#include <hx/concurrent/FutureResult.h>
#endif
namespace hx{
namespace concurrent{

::hx::concurrent::FutureResult FutureResult_obj::FAILURE( ::hx::concurrent::ConcurrentException ex,Float time,::Dynamic future)
{
	return ::hx::CreateEnum< FutureResult_obj >(HX_("FAILURE",2a,44,ce,96),1,3)->_hx_init(0,ex)->_hx_init(1,time)->_hx_init(2,future);
}

::hx::concurrent::FutureResult FutureResult_obj::PENDING(::Dynamic future)
{
	return ::hx::CreateEnum< FutureResult_obj >(HX_("PENDING",37,6c,c0,ab),2,1)->_hx_init(0,future);
}

::hx::concurrent::FutureResult FutureResult_obj::VALUE( ::Dynamic result,Float time,::Dynamic future)
{
	return ::hx::CreateEnum< FutureResult_obj >(HX_("VALUE",51,b7,a6,af),0,3)->_hx_init(0,result)->_hx_init(1,time)->_hx_init(2,future);
}

bool FutureResult_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FAILURE",2a,44,ce,96)) { outValue = FutureResult_obj::FAILURE_dyn(); return true; }
	if (inName==HX_("PENDING",37,6c,c0,ab)) { outValue = FutureResult_obj::PENDING_dyn(); return true; }
	if (inName==HX_("VALUE",51,b7,a6,af)) { outValue = FutureResult_obj::VALUE_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FutureResult_obj)

int FutureResult_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FAILURE",2a,44,ce,96)) return 1;
	if (inName==HX_("PENDING",37,6c,c0,ab)) return 2;
	if (inName==HX_("VALUE",51,b7,a6,af)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(FutureResult_obj,FAILURE,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureResult_obj,PENDING,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(FutureResult_obj,VALUE,return)

int FutureResult_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FAILURE",2a,44,ce,96)) return 3;
	if (inName==HX_("PENDING",37,6c,c0,ab)) return 1;
	if (inName==HX_("VALUE",51,b7,a6,af)) return 3;
	return super::__FindArgCount(inName);
}

::hx::Val FutureResult_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FAILURE",2a,44,ce,96)) return FAILURE_dyn();
	if (inName==HX_("PENDING",37,6c,c0,ab)) return PENDING_dyn();
	if (inName==HX_("VALUE",51,b7,a6,af)) return VALUE_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FutureResult_obj_sStaticFields[] = {
	HX_("VALUE",51,b7,a6,af),
	HX_("FAILURE",2a,44,ce,96),
	HX_("PENDING",37,6c,c0,ab),
	::String(null())
};

::hx::Class FutureResult_obj::__mClass;

Dynamic __Create_FutureResult_obj() { return new FutureResult_obj; }

void FutureResult_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.concurrent.FutureResult",d9,14,6c,e8), ::hx::TCanCast< FutureResult_obj >,FutureResult_obj_sStaticFields,0,
	&__Create_FutureResult_obj, &__Create,
	&super::__SGetClass(), &CreateFutureResult_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FutureResult_obj::__GetStatic;
}

void FutureResult_obj::__boot()
{
}


} // end namespace hx
} // end namespace concurrent
