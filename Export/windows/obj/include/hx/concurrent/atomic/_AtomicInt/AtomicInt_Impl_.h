// Generated by Haxe 4.3.3
#ifndef INCLUDED_hx_concurrent_atomic__AtomicInt_AtomicInt_Impl_
#define INCLUDED_hx_concurrent_atomic__AtomicInt_AtomicInt_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,concurrent,atomic,_AtomicInt,AtomicIntImpl)
HX_DECLARE_CLASS4(hx,concurrent,atomic,_AtomicInt,AtomicInt_Impl_)

namespace hx{
namespace concurrent{
namespace atomic{
namespace _AtomicInt{


class HXCPP_CLASS_ATTRIBUTES AtomicInt_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AtomicInt_Impl__obj OBJ_;
		AtomicInt_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7404a929 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.concurrent.atomic._AtomicInt.AtomicInt_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.concurrent.atomic._AtomicInt.AtomicInt_Impl_"); }

		inline static ::hx::ObjectPtr< AtomicInt_Impl__obj > __new() {
			::hx::ObjectPtr< AtomicInt_Impl__obj > __this = new AtomicInt_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AtomicInt_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AtomicInt_Impl__obj *__this = (AtomicInt_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AtomicInt_Impl__obj), false, "hx.concurrent.atomic._AtomicInt.AtomicInt_Impl_"));
			*(void **)__this = AtomicInt_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AtomicInt_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AtomicInt_Impl_",44,ce,32,5e); }

		static  ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl _new(::hx::Null< int >  val);
		static ::Dynamic _new_dyn();

		static int toInt( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1);
		static ::Dynamic toInt_dyn();

		static  ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl op_add_assign1( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,int v);
		static ::Dynamic op_add_assign1_dyn();

		static  ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl op_sub_assign1( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,int v);
		static ::Dynamic op_sub_assign1_dyn();

		static  ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl op_add_assign2( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1, ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl v);
		static ::Dynamic op_add_assign2_dyn();

		static  ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl op_sub_assign2( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1, ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl v);
		static ::Dynamic op_sub_assign2_dyn();

		static int op_add1( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,int v);
		static ::Dynamic op_add1_dyn();

		static int op_add2( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1, ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl v);
		static ::Dynamic op_add2_dyn();

		static int op_sub1( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,int v);
		static ::Dynamic op_sub1_dyn();

		static int op_sub2( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1, ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl v);
		static ::Dynamic op_sub2_dyn();

		static bool op_lt1( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,int v);
		static ::Dynamic op_lt1_dyn();

		static bool op_lt2( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1, ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl v);
		static ::Dynamic op_lt2_dyn();

		static bool op_lt3( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,Float v);
		static ::Dynamic op_lt3_dyn();

		static bool op_gt1( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,int v);
		static ::Dynamic op_gt1_dyn();

		static bool op_gt2( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1, ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl v);
		static ::Dynamic op_gt2_dyn();

		static bool op_gt3( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,Float v);
		static ::Dynamic op_gt3_dyn();

		static bool op_le( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,Float v);
		static ::Dynamic op_le_dyn();

		static bool op_ge( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,Float v);
		static ::Dynamic op_ge_dyn();

		static int op_decrement_pre( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1);
		static ::Dynamic op_decrement_pre_dyn();

		static int op_decrement_post( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1);
		static ::Dynamic op_decrement_post_dyn();

		static int op_increment_pre( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1);
		static ::Dynamic op_increment_pre_dyn();

		static int op_increment_post( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1);
		static ::Dynamic op_increment_post_dyn();

		static int op_negate( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1);
		static ::Dynamic op_negate_dyn();

		static int op_add3(int a, ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl b);
		static ::Dynamic op_add3_dyn();

		static int op_sub3(int a, ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl b);
		static ::Dynamic op_sub3_dyn();

		static void increment( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,::hx::Null< int >  amount);
		static ::Dynamic increment_dyn();

		static void decrement( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,::hx::Null< int >  amount);
		static ::Dynamic decrement_dyn();

		static int decrementAndGet( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,::hx::Null< int >  amount);
		static ::Dynamic decrementAndGet_dyn();

		static int getAndDecrement( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1,::hx::Null< int >  amount);
		static ::Dynamic getAndDecrement_dyn();

		static ::String toString( ::hx::concurrent::atomic::_AtomicInt::AtomicIntImpl this1);
		static ::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace concurrent
} // end namespace atomic
} // end namespace _AtomicInt

#endif /* INCLUDED_hx_concurrent_atomic__AtomicInt_AtomicInt_Impl_ */ 
