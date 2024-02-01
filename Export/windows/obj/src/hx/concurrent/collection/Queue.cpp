// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_hx_concurrent_atomic__AtomicInt_AtomicIntImpl
#include <hx/concurrent/atomic/_AtomicInt/AtomicIntImpl.h>
#endif
#ifndef INCLUDED_hx_concurrent_collection_Queue
#include <hx/concurrent/collection/Queue.h>
#endif
#ifndef INCLUDED_hx_concurrent_thread_Threads
#include <hx/concurrent/thread/Threads.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9c51bbc37eb24c1_15_new,"hx.concurrent.collection.Queue","new",0x7b24850c,"hx.concurrent.collection.Queue.new","hx/concurrent/collection/Queue.hx",15,0x9dd4df45)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c51bbc37eb24c1_27_get_length,"hx.concurrent.collection.Queue","get_length",0xf4e17d83,"hx.concurrent.collection.Queue.get_length","hx/concurrent/collection/Queue.hx",27,0x9dd4df45)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c51bbc37eb24c1_48_pop,"hx.concurrent.collection.Queue","pop",0x7b26123d,"hx.concurrent.collection.Queue.pop","hx/concurrent/collection/Queue.hx",48,0x9dd4df45)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c51bbc37eb24c1_65_pop,"hx.concurrent.collection.Queue","pop",0x7b26123d,"hx.concurrent.collection.Queue.pop","hx/concurrent/collection/Queue.hx",65,0x9dd4df45)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c51bbc37eb24c1_97_pushHead,"hx.concurrent.collection.Queue","pushHead",0x698137ee,"hx.concurrent.collection.Queue.pushHead","hx/concurrent/collection/Queue.hx",97,0x9dd4df45)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c51bbc37eb24c1_119_push,"hx.concurrent.collection.Queue","push",0x462e73ae,"hx.concurrent.collection.Queue.push","hx/concurrent/collection/Queue.hx",119,0x9dd4df45)
namespace hx{
namespace concurrent{
namespace collection{

void Queue_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e9c51bbc37eb24c1_15_new)
HXLINE(  26)		this->_length =  ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl_obj::__alloc( HX_CTX ,0);
HXLINE(  17)		this->_queue =  ::sys::thread::Deque_obj::__alloc( HX_CTX );
            	}

Dynamic Queue_obj::__CreateEmpty() { return new Queue_obj; }

void *Queue_obj::_hx_vtable = 0;

Dynamic Queue_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Queue_obj > _hx_result = new Queue_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Queue_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16c678ec;
}

int Queue_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_e9c51bbc37eb24c1_27_get_length)
HXDLIN(  27)		return this->_length->get_value();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Queue_obj,get_length,return )

 ::Dynamic Queue_obj::pop(::hx::Null< int >  __o_timeoutMS){
            		int timeoutMS = __o_timeoutMS.Default(0);
            	HX_STACKFRAME(&_hx_pos_e9c51bbc37eb24c1_48_pop)
HXDLIN(  48)		 ::hx::concurrent::collection::Queue _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  49)		::cpp::VirtualArray msg = ::cpp::VirtualArray_obj::__new(1)->init(0,null());
HXLINE(  51)		if ((timeoutMS < -1)) {
HXLINE(  52)			HX_STACK_DO_THROW(HX_("[timeoutMS] must be >= -1",70,77,1b,12));
            		}
HXLINE(  54)		if ((timeoutMS == 0)) {
HXLINE(  56)			msg->set(0,this->_queue->pop(false));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::hx::concurrent::collection::Queue,_gthis,::cpp::VirtualArray,msg) HXARGC(0)
            			bool _hx_run(){
            				HX_STACKFRAME(&_hx_pos_e9c51bbc37eb24c1_65_pop)
HXLINE(  67)				msg->set(0,_gthis->_queue->pop(false));
HXLINE(  75)				return ::hx::IsNotNull( msg->__get(0) );
            			}
            			HX_END_LOCAL_FUNC0(return)

HXLINE(  65)			::hx::concurrent::thread::Threads_obj::await( ::Dynamic(new _hx_Closure_0(_gthis,msg)),timeoutMS,null());
            		}
HXLINE(  78)		if (::hx::IsNotNull( msg->__get(0) )) {
HXLINE(  78)			this->_length->getAndIncrement(-1);
            		}
HXLINE(  79)		return msg->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Queue_obj,pop,return )

void Queue_obj::pushHead( ::Dynamic msg){
            	HX_STACKFRAME(&_hx_pos_e9c51bbc37eb24c1_97_pushHead)
HXLINE(  98)		if (::hx::IsNull( msg )) {
HXLINE(  99)			HX_STACK_DO_THROW(HX_("[msg] must not be null",c9,be,46,2e));
            		}
HXLINE( 102)		this->_queue->push(msg);
HXLINE( 110)		this->_length->getAndIncrement(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Queue_obj,pushHead,(void))

void Queue_obj::push( ::Dynamic msg){
            	HX_STACKFRAME(&_hx_pos_e9c51bbc37eb24c1_119_push)
HXLINE( 120)		if (::hx::IsNull( msg )) {
HXLINE( 121)			HX_STACK_DO_THROW(HX_("[msg] must not be null",c9,be,46,2e));
            		}
HXLINE( 124)		this->_queue->add(msg);
HXLINE( 132)		this->_length->getAndIncrement(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Queue_obj,push,(void))


::hx::ObjectPtr< Queue_obj > Queue_obj::__new() {
	::hx::ObjectPtr< Queue_obj > __this = new Queue_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Queue_obj > Queue_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Queue_obj *__this = (Queue_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Queue_obj), true, "hx.concurrent.collection.Queue"));
	*(void **)__this = Queue_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Queue_obj::Queue_obj()
{
}

void Queue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Queue);
	HX_MARK_MEMBER_NAME(_queue,"_queue");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_END_CLASS();
}

void Queue_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_queue,"_queue");
	HX_VISIT_MEMBER_NAME(_length,"_length");
}

::hx::Val Queue_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_queue") ) { return ::hx::Val( _queue ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { return ::hx::Val( _length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushHead") ) { return ::hx::Val( pushHead_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Queue_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_queue") ) { _queue=inValue.Cast<  ::sys::thread::Deque >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast<  ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Queue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_queue",d2,d4,d1,59));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("_length",85,a6,7e,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Queue_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::Deque */ ,(int)offsetof(Queue_obj,_queue),HX_("_queue",d2,d4,d1,59)},
	{::hx::fsObject /*  ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl */ ,(int)offsetof(Queue_obj,_length),HX_("_length",85,a6,7e,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Queue_obj_sStaticStorageInfo = 0;
#endif

static ::String Queue_obj_sMemberFields[] = {
	HX_("_queue",d2,d4,d1,59),
	HX_("_length",85,a6,7e,0d),
	HX_("get_length",af,04,8f,8f),
	HX_("pop",91,5d,55,00),
	HX_("pushHead",1a,5c,fc,13),
	HX_("push",da,11,61,4a),
	::String(null()) };

::hx::Class Queue_obj::__mClass;

void Queue_obj::__register()
{
	Queue_obj _hx_dummy;
	Queue_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.concurrent.collection.Queue",1a,4f,2a,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Queue_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Queue_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Queue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Queue_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace concurrent
} // end namespace collection
