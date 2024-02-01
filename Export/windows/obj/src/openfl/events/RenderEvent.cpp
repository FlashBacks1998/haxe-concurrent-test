// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_RenderEvent
#include <openfl/events/RenderEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6a559adcb74b53ca_154_new,"openfl.events.RenderEvent","new",0x8fc9357f,"openfl.events.RenderEvent.new","openfl/events/RenderEvent.hx",154,0xf57c28f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6a559adcb74b53ca_163_clone,"openfl.events.RenderEvent","clone",0xabd33e3c,"openfl.events.RenderEvent.clone","openfl/events/RenderEvent.hx",163,0xf57c28f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6a559adcb74b53ca_176_toString,"openfl.events.RenderEvent","toString",0xf15b7b2d,"openfl.events.RenderEvent.toString","openfl/events/RenderEvent.hx",176,0xf57c28f1)
static const ::String _hx_array_data_d18b0a0d_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6a559adcb74b53ca_180___init,"openfl.events.RenderEvent","__init",0x9368f671,"openfl.events.RenderEvent.__init","openfl/events/RenderEvent.hx",180,0xf57c28f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6a559adcb74b53ca_45_boot,"openfl.events.RenderEvent","boot",0x385e9a33,"openfl.events.RenderEvent.boot","openfl/events/RenderEvent.hx",45,0xf57c28f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6a559adcb74b53ca_61_boot,"openfl.events.RenderEvent","boot",0x385e9a33,"openfl.events.RenderEvent.boot","openfl/events/RenderEvent.hx",61,0xf57c28f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6a559adcb74b53ca_77_boot,"openfl.events.RenderEvent","boot",0x385e9a33,"openfl.events.RenderEvent.boot","openfl/events/RenderEvent.hx",77,0xf57c28f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6a559adcb74b53ca_93_boot,"openfl.events.RenderEvent","boot",0x385e9a33,"openfl.events.RenderEvent.boot","openfl/events/RenderEvent.hx",93,0xf57c28f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6a559adcb74b53ca_109_boot,"openfl.events.RenderEvent","boot",0x385e9a33,"openfl.events.RenderEvent.boot","openfl/events/RenderEvent.hx",109,0xf57c28f1)
namespace openfl{
namespace events{

void RenderEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Matrix objectMatrix, ::openfl::geom::ColorTransform objectColorTransform,::hx::Null< bool >  __o_allowSmoothing){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		bool allowSmoothing = __o_allowSmoothing.Default(true);
            	HX_STACKFRAME(&_hx_pos_6a559adcb74b53ca_154_new)
HXLINE( 155)		super::__construct(type,bubbles,cancelable);
HXLINE( 157)		this->objectMatrix = objectMatrix;
HXLINE( 158)		this->objectColorTransform = objectColorTransform;
HXLINE( 159)		this->allowSmoothing = allowSmoothing;
            	}

Dynamic RenderEvent_obj::__CreateEmpty() { return new RenderEvent_obj; }

void *RenderEvent_obj::_hx_vtable = 0;

Dynamic RenderEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RenderEvent_obj > _hx_result = new RenderEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool RenderEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x19d7ad57;
	}
}

 ::openfl::events::Event RenderEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_6a559adcb74b53ca_163_clone)
HXLINE( 164)		::String event = this->type;
HXDLIN( 164)		bool event1 = this->bubbles;
HXDLIN( 164)		bool event2 = this->cancelable;
HXDLIN( 164)		 ::openfl::geom::Matrix event3 = this->objectMatrix->clone();
HXDLIN( 164)		 ::openfl::geom::ColorTransform event4 = this->objectColorTransform->_hx___clone();
HXDLIN( 164)		 ::openfl::events::RenderEvent event5 =  ::openfl::events::RenderEvent_obj::__alloc( HX_CTX ,event,event1,event2,event3,event4,this->allowSmoothing);
HXLINE( 166)		event5->target = this->target;
HXLINE( 167)		event5->currentTarget = this->currentTarget;
HXLINE( 168)		event5->eventPhase = this->eventPhase;
HXLINE( 170)		return event5;
            	}


::String RenderEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_6a559adcb74b53ca_176_toString)
HXDLIN( 176)		return this->_hx___formatToString(HX_("RenderEvent",c4,8c,a8,25),::Array_obj< ::String >::fromData( _hx_array_data_d18b0a0d_3,3));
            	}


void RenderEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_6a559adcb74b53ca_180___init)
HXLINE( 181)		this->super::_hx___init();
HXLINE( 182)		this->objectMatrix = null();
HXLINE( 183)		this->objectColorTransform = null();
HXLINE( 184)		this->allowSmoothing = false;
HXLINE( 185)		this->renderer = null();
            	}


::String RenderEvent_obj::CLEAR_DOM;

::String RenderEvent_obj::RENDER_CAIRO;

::String RenderEvent_obj::RENDER_CANVAS;

::String RenderEvent_obj::RENDER_DOM;

::String RenderEvent_obj::RENDER_OPENGL;


::hx::ObjectPtr< RenderEvent_obj > RenderEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Matrix objectMatrix, ::openfl::geom::ColorTransform objectColorTransform,::hx::Null< bool >  __o_allowSmoothing) {
	::hx::ObjectPtr< RenderEvent_obj > __this = new RenderEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,objectMatrix,objectColorTransform,__o_allowSmoothing);
	return __this;
}

::hx::ObjectPtr< RenderEvent_obj > RenderEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Matrix objectMatrix, ::openfl::geom::ColorTransform objectColorTransform,::hx::Null< bool >  __o_allowSmoothing) {
	RenderEvent_obj *__this = (RenderEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderEvent_obj), true, "openfl.events.RenderEvent"));
	*(void **)__this = RenderEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,objectMatrix,objectColorTransform,__o_allowSmoothing);
	return __this;
}

RenderEvent_obj::RenderEvent_obj()
{
}

void RenderEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderEvent);
	HX_MARK_MEMBER_NAME(allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(objectColorTransform,"objectColorTransform");
	HX_MARK_MEMBER_NAME(objectMatrix,"objectMatrix");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(objectColorTransform,"objectColorTransform");
	HX_VISIT_MEMBER_NAME(objectMatrix,"objectMatrix");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RenderEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return ::hx::Val( renderer ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectMatrix") ) { return ::hx::Val( objectMatrix ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { return ::hx::Val( allowSmoothing ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"objectColorTransform") ) { return ::hx::Val( objectColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RenderEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast<  ::openfl::display::DisplayObjectRenderer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectMatrix") ) { objectMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"objectColorTransform") ) { objectColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("allowSmoothing",ab,b7,66,68));
	outFields->push(HX_("objectColorTransform",a8,9a,71,7d));
	outFields->push(HX_("objectMatrix",60,42,d2,95));
	outFields->push(HX_("renderer",43,c5,db,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RenderEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(RenderEvent_obj,allowSmoothing),HX_("allowSmoothing",ab,b7,66,68)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(RenderEvent_obj,objectColorTransform),HX_("objectColorTransform",a8,9a,71,7d)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(RenderEvent_obj,objectMatrix),HX_("objectMatrix",60,42,d2,95)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectRenderer */ ,(int)offsetof(RenderEvent_obj,renderer),HX_("renderer",43,c5,db,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo RenderEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &RenderEvent_obj::CLEAR_DOM,HX_("CLEAR_DOM",50,87,7e,d8)},
	{::hx::fsString,(void *) &RenderEvent_obj::RENDER_CAIRO,HX_("RENDER_CAIRO",7f,eb,7b,e1)},
	{::hx::fsString,(void *) &RenderEvent_obj::RENDER_CANVAS,HX_("RENDER_CANVAS",e1,31,43,6e)},
	{::hx::fsString,(void *) &RenderEvent_obj::RENDER_DOM,HX_("RENDER_DOM",b9,9d,78,f8)},
	{::hx::fsString,(void *) &RenderEvent_obj::RENDER_OPENGL,HX_("RENDER_OPENGL",78,41,95,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String RenderEvent_obj_sMemberFields[] = {
	HX_("allowSmoothing",ab,b7,66,68),
	HX_("objectColorTransform",a8,9a,71,7d),
	HX_("objectMatrix",60,42,d2,95),
	HX_("renderer",43,c5,db,b2),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void RenderEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderEvent_obj::CLEAR_DOM,"CLEAR_DOM");
	HX_MARK_MEMBER_NAME(RenderEvent_obj::RENDER_CAIRO,"RENDER_CAIRO");
	HX_MARK_MEMBER_NAME(RenderEvent_obj::RENDER_CANVAS,"RENDER_CANVAS");
	HX_MARK_MEMBER_NAME(RenderEvent_obj::RENDER_DOM,"RENDER_DOM");
	HX_MARK_MEMBER_NAME(RenderEvent_obj::RENDER_OPENGL,"RENDER_OPENGL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RenderEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderEvent_obj::CLEAR_DOM,"CLEAR_DOM");
	HX_VISIT_MEMBER_NAME(RenderEvent_obj::RENDER_CAIRO,"RENDER_CAIRO");
	HX_VISIT_MEMBER_NAME(RenderEvent_obj::RENDER_CANVAS,"RENDER_CANVAS");
	HX_VISIT_MEMBER_NAME(RenderEvent_obj::RENDER_DOM,"RENDER_DOM");
	HX_VISIT_MEMBER_NAME(RenderEvent_obj::RENDER_OPENGL,"RENDER_OPENGL");
};

#endif

::hx::Class RenderEvent_obj::__mClass;

static ::String RenderEvent_obj_sStaticFields[] = {
	HX_("CLEAR_DOM",50,87,7e,d8),
	HX_("RENDER_CAIRO",7f,eb,7b,e1),
	HX_("RENDER_CANVAS",e1,31,43,6e),
	HX_("RENDER_DOM",b9,9d,78,f8),
	HX_("RENDER_OPENGL",78,41,95,d7),
	::String(null())
};

void RenderEvent_obj::__register()
{
	RenderEvent_obj _hx_dummy;
	RenderEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.RenderEvent",0d,0a,8b,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RenderEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RenderEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RenderEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RenderEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RenderEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RenderEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6a559adcb74b53ca_45_boot)
HXDLIN(  45)		CLEAR_DOM = HX_("clearDOM",f5,22,08,31);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6a559adcb74b53ca_61_boot)
HXDLIN(  61)		RENDER_CAIRO = HX_("renderCairo",52,5d,ca,0c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6a559adcb74b53ca_77_boot)
HXDLIN(  77)		RENDER_CANVAS = HX_("renderCanvas",ce,58,98,27);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6a559adcb74b53ca_93_boot)
HXDLIN(  93)		RENDER_DOM = HX_("renderDOM",cc,ac,57,cd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6a559adcb74b53ca_109_boot)
HXDLIN( 109)		RENDER_OPENGL = HX_("renderOpenGL",65,4c,ea,90);
            	}
}

} // end namespace openfl
} // end namespace events
