// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_stencil
#define INCLUDED_lime_graphics_opengl_ext_NV_read_stencil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8a976b7eb1d3d624_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_read_stencil)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_read_stencil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_read_stencil_obj OBJ_;
		NV_read_stencil_obj();

	public:
		enum { _hx_ClassId = 0x164fbcb8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_read_stencil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_read_stencil"); }

		inline static ::hx::ObjectPtr< NV_read_stencil_obj > __new() {
			::hx::ObjectPtr< NV_read_stencil_obj > __this = new NV_read_stencil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_read_stencil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_read_stencil_obj *__this = (NV_read_stencil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_read_stencil_obj), false, "lime.graphics.opengl.ext.NV_read_stencil"));
			*(void **)__this = NV_read_stencil_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8a976b7eb1d3d624_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_read_stencil_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_read_stencil",6a,ea,92,c8); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_read_stencil */ 
