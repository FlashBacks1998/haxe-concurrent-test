// Generated by Haxe 4.3.3
#ifndef INCLUDED_openfl_errors_TypeError
#define INCLUDED_openfl_errors_TypeError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,TypeError)

namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES TypeError_obj : public  ::openfl::errors::Error_obj
{
	public:
		typedef  ::openfl::errors::Error_obj super;
		typedef TypeError_obj OBJ_;
		TypeError_obj();

	public:
		enum { _hx_ClassId = 0x285b9d0f };

		void __construct(::String __o_message);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.errors.TypeError")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.errors.TypeError"); }
		static ::hx::ObjectPtr< TypeError_obj > __new(::String __o_message);
		static ::hx::ObjectPtr< TypeError_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_message);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TypeError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TypeError",8e,06,d5,d9); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_TypeError */ 
