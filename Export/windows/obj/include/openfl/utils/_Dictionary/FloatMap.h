// Generated by Haxe 4.3.3
#ifndef INCLUDED_openfl_utils__Dictionary_FloatMap
#define INCLUDED_openfl_utils__Dictionary_FloatMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS3(openfl,utils,_Dictionary,FloatMap)

namespace openfl{
namespace utils{
namespace _Dictionary{


class HXCPP_CLASS_ATTRIBUTES FloatMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FloatMap_obj OBJ_;
		FloatMap_obj();

	public:
		enum { _hx_ClassId = 0x1b518c94 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._Dictionary.FloatMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils._Dictionary.FloatMap"); }
		static ::hx::ObjectPtr< FloatMap_obj > __new();
		static ::hx::ObjectPtr< FloatMap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FloatMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		void set_dca24b06( ::Dynamic k, ::Dynamic v);
		::String __ToString() const { return HX_("FloatMap",80,22,3c,b7); }

		static void __boot();
		static  ::Dynamic __meta__;
		::cpp::VirtualArray floatKeys;
		::cpp::VirtualArray values;
		void clear();
		::Dynamic clear_dyn();

		 ::openfl::utils::_Dictionary::FloatMap copy();
		::Dynamic copy_dyn();

		bool exists( ::Dynamic key);
		::Dynamic exists_dyn();

		 ::Dynamic get( ::Dynamic key);
		::Dynamic get_dyn();

		 ::Dynamic keyValueIterator();
		::Dynamic keyValueIterator_dyn();

		 ::Dynamic keys();
		::Dynamic keys_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		bool remove( ::Dynamic key);
		::Dynamic remove_dyn();

		void set( ::Dynamic key, ::Dynamic value);
		::Dynamic set_dyn();

		int indexOf( ::Dynamic key);
		::Dynamic indexOf_dyn();

		void insertSorted( ::Dynamic key, ::Dynamic value);
		::Dynamic insertSorted_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary

#endif /* INCLUDED_openfl_utils__Dictionary_FloatMap */ 
