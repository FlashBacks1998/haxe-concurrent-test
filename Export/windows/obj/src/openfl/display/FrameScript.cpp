// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameScript
#include <openfl/display/FrameScript.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b74d327ee4b1542_13_new,"openfl.display.FrameScript","new",0xe34b39e0,"openfl.display.FrameScript.new","openfl/display/FrameScript.hx",13,0x67b50a12)
namespace openfl{
namespace display{

void FrameScript_obj::__construct( ::Dynamic script,int frame){
            	HX_STACKFRAME(&_hx_pos_2b74d327ee4b1542_13_new)
HXLINE(  14)		this->script = script;
HXLINE(  15)		this->frame = frame;
            	}

Dynamic FrameScript_obj::__CreateEmpty() { return new FrameScript_obj; }

void *FrameScript_obj::_hx_vtable = 0;

Dynamic FrameScript_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FrameScript_obj > _hx_result = new FrameScript_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FrameScript_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x120580c6;
}


::hx::ObjectPtr< FrameScript_obj > FrameScript_obj::__new( ::Dynamic script,int frame) {
	::hx::ObjectPtr< FrameScript_obj > __this = new FrameScript_obj();
	__this->__construct(script,frame);
	return __this;
}

::hx::ObjectPtr< FrameScript_obj > FrameScript_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic script,int frame) {
	FrameScript_obj *__this = (FrameScript_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FrameScript_obj), true, "openfl.display.FrameScript"));
	*(void **)__this = FrameScript_obj::_hx_vtable;
	__this->__construct(script,frame);
	return __this;
}

FrameScript_obj::FrameScript_obj()
{
}

void FrameScript_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameScript);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_END_CLASS();
}

void FrameScript_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(script,"script");
}

::hx::Val FrameScript_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FrameScript_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameScript_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frame",2d,78,83,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FrameScript_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FrameScript_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FrameScript_obj,script),HX_("script",0b,4e,60,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FrameScript_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameScript_obj_sMemberFields[] = {
	HX_("frame",2d,78,83,06),
	HX_("script",0b,4e,60,47),
	::String(null()) };

::hx::Class FrameScript_obj::__mClass;

void FrameScript_obj::__register()
{
	FrameScript_obj _hx_dummy;
	FrameScript_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.FrameScript",ee,09,79,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FrameScript_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FrameScript_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameScript_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameScript_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
