// Generated by Haxe 4.3.3
#ifndef INCLUDED_hx_concurrent_FutureResult
#define INCLUDED_hx_concurrent_FutureResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,concurrent,ConcurrentException)
HX_DECLARE_CLASS2(hx,concurrent,Future)
HX_DECLARE_CLASS2(hx,concurrent,FutureResult)
namespace hx{
namespace concurrent{


class FutureResult_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FutureResult_obj OBJ_;

	public:
		FutureResult_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.concurrent.FutureResult",d9,14,6c,e8); }
		::String __ToString() const { return HX_("FutureResult.",8e,16,01,1f) + _hx_tag; }

		static ::hx::concurrent::FutureResult FAILURE( ::hx::concurrent::ConcurrentException ex,Float time,::Dynamic future);
		static ::Dynamic FAILURE_dyn();
		static ::hx::concurrent::FutureResult PENDING(::Dynamic future);
		static ::Dynamic PENDING_dyn();
		static ::hx::concurrent::FutureResult VALUE( ::Dynamic result,Float time,::Dynamic future);
		static ::Dynamic VALUE_dyn();
};

} // end namespace hx
} // end namespace concurrent

#endif /* INCLUDED_hx_concurrent_FutureResult */ 
