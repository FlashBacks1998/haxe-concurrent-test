// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary
#define INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_497b3991c268df4c_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_get_program_binary)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_get_program_binary_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_get_program_binary_obj OBJ_;
		OES_get_program_binary_obj();

	public:
		enum { _hx_ClassId = 0x3f3921d1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_get_program_binary")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_get_program_binary"); }

		inline static ::hx::ObjectPtr< OES_get_program_binary_obj > __new() {
			::hx::ObjectPtr< OES_get_program_binary_obj > __this = new OES_get_program_binary_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_get_program_binary_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_get_program_binary_obj *__this = (OES_get_program_binary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_get_program_binary_obj), false, "lime.graphics.opengl.ext.OES_get_program_binary"));
			*(void **)__this = OES_get_program_binary_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_497b3991c268df4c_4_new)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::OES_get_program_binary)(__this) )->PROGRAM_BINARY_FORMATS_OES = 34815;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::OES_get_program_binary)(__this) )->NUM_PROGRAM_BINARY_FORMATS_OES = 34814;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::OES_get_program_binary)(__this) )->PROGRAM_BINARY_LENGTH_OES = 34625;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_get_program_binary_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_get_program_binary",27,f4,1a,01); }

		int PROGRAM_BINARY_LENGTH_OES;
		int NUM_PROGRAM_BINARY_FORMATS_OES;
		int PROGRAM_BINARY_FORMATS_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_get_program_binary */ 
