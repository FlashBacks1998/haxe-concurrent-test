// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_baeaab40d0a56ac0_148_new,"openfl.media.SoundLoaderContext","new",0xafd95147,"openfl.media.SoundLoaderContext.new","openfl/media/SoundLoaderContext.hx",148,0x79afda07)
namespace openfl{
namespace media{

void SoundLoaderContext_obj::__construct(::hx::Null< Float >  __o_bufferTime,::hx::Null< bool >  __o_checkPolicyFile){
            		Float bufferTime = __o_bufferTime.Default(1000);
            		bool checkPolicyFile = __o_checkPolicyFile.Default(false);
            	HX_STACKFRAME(&_hx_pos_baeaab40d0a56ac0_148_new)
HXLINE( 149)		this->bufferTime = bufferTime;
HXLINE( 150)		this->checkPolicyFile = checkPolicyFile;
            	}

Dynamic SoundLoaderContext_obj::__CreateEmpty() { return new SoundLoaderContext_obj; }

void *SoundLoaderContext_obj::_hx_vtable = 0;

Dynamic SoundLoaderContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundLoaderContext_obj > _hx_result = new SoundLoaderContext_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SoundLoaderContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08c82281;
}


SoundLoaderContext_obj::SoundLoaderContext_obj()
{
}

::hx::Val SoundLoaderContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { return ::hx::Val( bufferTime ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return ::hx::Val( checkPolicyFile ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SoundLoaderContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundLoaderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bufferTime",2d,35,0d,9e));
	outFields->push(HX_("checkPolicyFile",76,1e,96,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SoundLoaderContext_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(SoundLoaderContext_obj,bufferTime),HX_("bufferTime",2d,35,0d,9e)},
	{::hx::fsBool,(int)offsetof(SoundLoaderContext_obj,checkPolicyFile),HX_("checkPolicyFile",76,1e,96,af)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SoundLoaderContext_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundLoaderContext_obj_sMemberFields[] = {
	HX_("bufferTime",2d,35,0d,9e),
	HX_("checkPolicyFile",76,1e,96,af),
	::String(null()) };

::hx::Class SoundLoaderContext_obj::__mClass;

void SoundLoaderContext_obj::__register()
{
	SoundLoaderContext_obj _hx_dummy;
	SoundLoaderContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.media.SoundLoaderContext",d5,a1,df,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundLoaderContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundLoaderContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundLoaderContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundLoaderContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
