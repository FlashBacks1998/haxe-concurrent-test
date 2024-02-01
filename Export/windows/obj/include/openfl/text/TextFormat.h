// Generated by Haxe 4.3.3
#ifndef INCLUDED_openfl_text_TextFormat
#define INCLUDED_openfl_text_TextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextFormat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextFormat_obj OBJ_;
		TextFormat_obj();

	public:
		enum { _hx_ClassId = 0x2a1c7fe1 };

		void __construct(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text.TextFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.text.TextFormat"); }
		static ::hx::ObjectPtr< TextFormat_obj > __new(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading);
		static ::hx::ObjectPtr< TextFormat_obj > __alloc(::hx::Ctx *_hx_ctx,::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFormat",e4,13,30,2b); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::Dynamic align;
		 ::Dynamic blockIndent;
		 ::Dynamic bold;
		 ::Dynamic bullet;
		 ::Dynamic color;
		::String font;
		 ::Dynamic indent;
		 ::Dynamic italic;
		 ::Dynamic kerning;
		 ::Dynamic leading;
		 ::Dynamic leftMargin;
		 ::Dynamic letterSpacing;
		 ::Dynamic rightMargin;
		 ::Dynamic size;
		::Array< int > tabStops;
		::String target;
		 ::Dynamic underline;
		::String url;
		 ::Dynamic _hx___ascent;
		 ::Dynamic _hx___descent;
		::String _hx___cacheKey;
		 ::openfl::text::TextFormat clone();
		::Dynamic clone_dyn();

		void _hx___merge( ::openfl::text::TextFormat format);
		::Dynamic _hx___merge_dyn();

		::String _hx___toCacheKey();
		::Dynamic _hx___toCacheKey_dyn();

};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextFormat */ 
