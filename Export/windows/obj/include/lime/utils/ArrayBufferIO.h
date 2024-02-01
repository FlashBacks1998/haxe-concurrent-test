// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#define INCLUDED_lime_utils_ArrayBufferIO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferIO)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ArrayBufferIO_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayBufferIO_obj OBJ_;
		ArrayBufferIO_obj();

	public:
		enum { _hx_ClassId = 0x09198603 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils.ArrayBufferIO")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.utils.ArrayBufferIO"); }

		inline static ::hx::ObjectPtr< ArrayBufferIO_obj > __new() {
			::hx::ObjectPtr< ArrayBufferIO_obj > __this = new ArrayBufferIO_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayBufferIO_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ArrayBufferIO_obj *__this = (ArrayBufferIO_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBufferIO_obj), false, "lime.utils.ArrayBufferIO"));
			*(void **)__this = ArrayBufferIO_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayBufferIO_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayBufferIO",7f,77,2c,77); }

		static int getInt16( ::haxe::io::Bytes buffer,int byteOffset);
		static ::Dynamic getInt16_dyn();

		static int getInt16_BE( ::haxe::io::Bytes buffer,int byteOffset);
		static ::Dynamic getInt16_BE_dyn();

		static void setInt16( ::haxe::io::Bytes buffer,int byteOffset,int value);
		static ::Dynamic setInt16_dyn();

		static void setInt16_BE( ::haxe::io::Bytes buffer,int byteOffset,int value);
		static ::Dynamic setInt16_BE_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ArrayBufferIO */ 
