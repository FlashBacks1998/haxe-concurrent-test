// Generated by Haxe 4.3.3
#ifndef INCLUDED_lime_graphics_Image
#define INCLUDED_lime_graphics_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageBuffer)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS2(lime,graphics,ImageFileFormat)
HX_DECLARE_CLASS2(lime,graphics,ImageType)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,_hx_system,Endian)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)

namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES Image_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		enum { _hx_ClassId = 0x33f052f7 };

		void __construct( ::lime::graphics::ImageBuffer buffer,::hx::Null< int >  __o_offsetX,::hx::Null< int >  __o_offsetY,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic color, ::lime::graphics::ImageType type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.Image")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.graphics.Image"); }
		static ::hx::ObjectPtr< Image_obj > __new( ::lime::graphics::ImageBuffer buffer,::hx::Null< int >  __o_offsetX,::hx::Null< int >  __o_offsetY,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic color, ::lime::graphics::ImageType type);
		static ::hx::ObjectPtr< Image_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::ImageBuffer buffer,::hx::Null< int >  __o_offsetX,::hx::Null< int >  __o_offsetY,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic color, ::lime::graphics::ImageType type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Image",3b,8f,96,50); }

		static  ::lime::graphics::Image fromBase64(::String base64,::String type);
		static ::Dynamic fromBase64_dyn();

		static  ::lime::graphics::Image fromBitmapData( ::Dynamic bitmapData);
		static ::Dynamic fromBitmapData_dyn();

		static  ::lime::graphics::Image fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::lime::graphics::Image fromCanvas( ::Dynamic canvas);
		static ::Dynamic fromCanvas_dyn();

		static  ::lime::graphics::Image fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static  ::lime::graphics::Image fromImageElement( ::Dynamic image);
		static ::Dynamic fromImageElement_dyn();

		static  ::lime::app::Future loadFromBase64(::String base64,::String type);
		static ::Dynamic loadFromBase64_dyn();

		static  ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic loadFromBytes_dyn();

		static  ::lime::app::Future loadFromFile(::String path);
		static ::Dynamic loadFromFile_dyn();

		static bool _hx___isGIF( ::haxe::io::Bytes bytes);
		static ::Dynamic _hx___isGIF_dyn();

		static bool _hx___isJPG( ::haxe::io::Bytes bytes);
		static ::Dynamic _hx___isJPG_dyn();

		static bool _hx___isPNG( ::haxe::io::Bytes bytes);
		static ::Dynamic _hx___isPNG_dyn();

		static bool _hx___isWebP( ::haxe::io::Bytes bytes);
		static ::Dynamic _hx___isWebP_dyn();

		 ::lime::graphics::ImageBuffer buffer;
		bool dirty;
		int height;
		int offsetX;
		int offsetY;
		 ::lime::math::Rectangle rect;
		 ::lime::graphics::ImageType type;
		int version;
		int width;
		Float x;
		Float y;
		 ::lime::graphics::Image clone();
		::Dynamic clone_dyn();

		void colorTransform( ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix);
		::Dynamic colorTransform_dyn();

		void copyChannel( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::ImageChannel sourceChannel, ::lime::graphics::ImageChannel destChannel);
		::Dynamic copyChannel_dyn();

		void copyPixels( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,::hx::Null< bool >  mergeAlpha);
		::Dynamic copyPixels_dyn();

		 ::haxe::io::Bytes encode( ::lime::graphics::ImageFileFormat format,::hx::Null< int >  quality);
		::Dynamic encode_dyn();

		void fillRect( ::lime::math::Rectangle rect,int color, ::Dynamic format);
		::Dynamic fillRect_dyn();

		void floodFill(int x,int y,int color, ::Dynamic format);
		::Dynamic floodFill_dyn();

		 ::lime::math::Rectangle getColorBoundsRect(int mask,int color,::hx::Null< bool >  findColor, ::Dynamic format);
		::Dynamic getColorBoundsRect_dyn();

		int getPixel(int x,int y, ::Dynamic format);
		::Dynamic getPixel_dyn();

		int getPixel32(int x,int y, ::Dynamic format);
		::Dynamic getPixel32_dyn();

		 ::haxe::io::Bytes getPixels( ::lime::math::Rectangle rect, ::Dynamic format);
		::Dynamic getPixels_dyn();

		void merge( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		::Dynamic merge_dyn();

		void resize(int newWidth,int newHeight);
		::Dynamic resize_dyn();

		void scroll(int x,int y);
		::Dynamic scroll_dyn();

		void setPixel(int x,int y,int color, ::Dynamic format);
		::Dynamic setPixel_dyn();

		void setPixel32(int x,int y,int color, ::Dynamic format);
		::Dynamic setPixel32_dyn();

		void setPixels( ::lime::math::Rectangle rect, ::lime::utils::BytePointerData bytePointer, ::Dynamic format, ::lime::_hx_system::Endian endian);
		::Dynamic setPixels_dyn();

		int threshold( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::String operation,int threshold,::hx::Null< int >  color,::hx::Null< int >  mask,::hx::Null< bool >  copySource, ::Dynamic format);
		::Dynamic threshold_dyn();

		 ::lime::math::Rectangle _hx___clipRect( ::lime::math::Rectangle r);
		::Dynamic _hx___clipRect_dyn();

		void _hx___fromBase64(::String base64,::String type, ::Dynamic onload);
		::Dynamic _hx___fromBase64_dyn();

		bool _hx___fromBytes( ::haxe::io::Bytes bytes, ::Dynamic onload);
		::Dynamic _hx___fromBytes_dyn();

		bool _hx___fromFile(::String path, ::Dynamic onload, ::Dynamic onerror);
		::Dynamic _hx___fromFile_dyn();

		void _hx___fromImageBuffer( ::lime::graphics::ImageBuffer buffer);
		::Dynamic _hx___fromImageBuffer_dyn();

		 ::lime::utils::ArrayBufferView get_data();
		::Dynamic get_data_dyn();

		 ::lime::utils::ArrayBufferView set_data( ::lime::utils::ArrayBufferView value);
		::Dynamic set_data_dyn();

		int get_format();
		::Dynamic get_format_dyn();

		int set_format(int value);
		::Dynamic set_format_dyn();

		bool get_powerOfTwo();
		::Dynamic get_powerOfTwo_dyn();

		bool set_powerOfTwo(bool value);
		::Dynamic set_powerOfTwo_dyn();

		bool get_premultiplied();
		::Dynamic get_premultiplied_dyn();

		bool set_premultiplied(bool value);
		::Dynamic set_premultiplied_dyn();

		 ::lime::math::Rectangle get_rect();
		::Dynamic get_rect_dyn();

		 ::Dynamic get_src();
		::Dynamic get_src_dyn();

		 ::Dynamic set_src( ::Dynamic value);
		::Dynamic set_src_dyn();

		bool get_transparent();
		::Dynamic get_transparent_dyn();

		bool set_transparent(bool value);
		::Dynamic set_transparent_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_Image */ 
