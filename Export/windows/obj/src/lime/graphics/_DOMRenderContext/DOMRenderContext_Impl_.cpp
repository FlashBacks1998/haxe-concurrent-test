// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__DOMRenderContext_DOMRenderContext_Impl_
#include <lime/graphics/_DOMRenderContext/DOMRenderContext_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2f3df008938fcd18_34_fromRenderContext,"lime.graphics._DOMRenderContext.DOMRenderContext_Impl_","fromRenderContext",0xc0c4271a,"lime.graphics._DOMRenderContext.DOMRenderContext_Impl_.fromRenderContext","lime/graphics/DOMRenderContext.hx",34,0x5950199d)
namespace lime{
namespace graphics{
namespace _DOMRenderContext{

void DOMRenderContext_Impl__obj::__construct() { }

Dynamic DOMRenderContext_Impl__obj::__CreateEmpty() { return new DOMRenderContext_Impl__obj; }

void *DOMRenderContext_Impl__obj::_hx_vtable = 0;

Dynamic DOMRenderContext_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMRenderContext_Impl__obj > _hx_result = new DOMRenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMRenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b6b058d;
}

 ::Dynamic DOMRenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_2f3df008938fcd18_34_fromRenderContext)
HXDLIN(  34)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_Impl__obj,fromRenderContext,return )


DOMRenderContext_Impl__obj::DOMRenderContext_Impl__obj()
{
}

bool DOMRenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMRenderContext_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMRenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMRenderContext_Impl__obj::__mClass;

static ::String DOMRenderContext_Impl__obj_sStaticFields[] = {
	HX_("fromRenderContext",6f,19,d4,ba),
	::String(null())
};

void DOMRenderContext_Impl__obj::__register()
{
	DOMRenderContext_Impl__obj _hx_dummy;
	DOMRenderContext_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics._DOMRenderContext.DOMRenderContext_Impl_",59,57,4d,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMRenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMRenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMRenderContext_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMRenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMRenderContext_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _DOMRenderContext
