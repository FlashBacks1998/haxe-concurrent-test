// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_hx_concurrent_CompletedFuture
#include <hx/concurrent/CompletedFuture.h>
#endif
#ifndef INCLUDED_hx_concurrent_Future
#include <hx/concurrent/Future.h>
#endif
#ifndef INCLUDED_hx_concurrent_FutureResult
#include <hx/concurrent/FutureResult.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9a3a5ee5257915d_134_new,"hx.concurrent.CompletedFuture","new",0xe54cb9e7,"hx.concurrent.CompletedFuture.new","hx/concurrent/Future.hx",134,0x6ea4a7c2)
HX_LOCAL_STACK_FRAME(_hx_pos_e9a3a5ee5257915d_138_isComplete,"hx.concurrent.CompletedFuture","isComplete",0x37f7781c,"hx.concurrent.CompletedFuture.isComplete","hx/concurrent/Future.hx",138,0x6ea4a7c2)
HX_LOCAL_STACK_FRAME(_hx_pos_e9a3a5ee5257915d_142_onCompletion,"hx.concurrent.CompletedFuture","onCompletion",0xc5029ab4,"hx.concurrent.CompletedFuture.onCompletion","hx/concurrent/Future.hx",142,0x6ea4a7c2)
namespace hx{
namespace concurrent{

void CompletedFuture_obj::__construct( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e9a3a5ee5257915d_134_new)
HXDLIN( 134)		this->result = ::hx::concurrent::FutureResult_obj::VALUE(value,(::Sys_obj::time() * ( (Float)(1000) )),::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic CompletedFuture_obj::__CreateEmpty() { return new CompletedFuture_obj; }

void *CompletedFuture_obj::_hx_vtable = 0;

Dynamic CompletedFuture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CompletedFuture_obj > _hx_result = new CompletedFuture_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CompletedFuture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12fcebc3;
}

static ::hx::concurrent::Future_obj _hx_hx_concurrent_CompletedFuture__hx_hx_concurrent_Future= {
	( bool (::hx::Object::*)())&::hx::concurrent::CompletedFuture_obj::isComplete,
	( void (::hx::Object::*)( ::Dynamic))&::hx::concurrent::CompletedFuture_obj::onCompletion,
};

void *CompletedFuture_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xdec70c2a: return &_hx_hx_concurrent_CompletedFuture__hx_hx_concurrent_Future;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool CompletedFuture_obj::isComplete(){
            	HX_STACKFRAME(&_hx_pos_e9a3a5ee5257915d_138_isComplete)
HXDLIN( 138)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletedFuture_obj,isComplete,return )

void CompletedFuture_obj::onCompletion( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_e9a3a5ee5257915d_142_onCompletion)
HXDLIN( 142)		listener(this->result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletedFuture_obj,onCompletion,(void))


::hx::ObjectPtr< CompletedFuture_obj > CompletedFuture_obj::__new( ::Dynamic value) {
	::hx::ObjectPtr< CompletedFuture_obj > __this = new CompletedFuture_obj();
	__this->__construct(value);
	return __this;
}

::hx::ObjectPtr< CompletedFuture_obj > CompletedFuture_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value) {
	CompletedFuture_obj *__this = (CompletedFuture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CompletedFuture_obj), true, "hx.concurrent.CompletedFuture"));
	*(void **)__this = CompletedFuture_obj::_hx_vtable;
	__this->__construct(value);
	return __this;
}

CompletedFuture_obj::CompletedFuture_obj()
{
}

void CompletedFuture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletedFuture);
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_END_CLASS();
}

void CompletedFuture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(result,"result");
}

::hx::Val CompletedFuture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return ::hx::Val( result ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return ::hx::Val( isComplete_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onCompletion") ) { return ::hx::Val( onCompletion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CompletedFuture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast<  ::hx::concurrent::FutureResult >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompletedFuture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("result",dd,68,84,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CompletedFuture_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::concurrent::FutureResult */ ,(int)offsetof(CompletedFuture_obj,result),HX_("result",dd,68,84,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CompletedFuture_obj_sStaticStorageInfo = 0;
#endif

static ::String CompletedFuture_obj_sMemberFields[] = {
	HX_("result",dd,68,84,08),
	HX_("isComplete",c3,12,77,fa),
	HX_("onCompletion",1b,6d,9b,da),
	::String(null()) };

::hx::Class CompletedFuture_obj::__mClass;

void CompletedFuture_obj::__register()
{
	CompletedFuture_obj _hx_dummy;
	CompletedFuture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.concurrent.CompletedFuture",75,3a,0a,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CompletedFuture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CompletedFuture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompletedFuture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompletedFuture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace concurrent
