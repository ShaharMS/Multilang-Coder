// Generated by Haxe 4.3.4
#ifndef INCLUDED_vision_ds_ImageView
#define INCLUDED_vision_ds_ImageView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5a236565ae31d1ec_4_new)
HX_DECLARE_CLASS2(vision,ds,ImageView)

namespace vision{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES ImageView_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageView_obj OBJ_;
		ImageView_obj();

	public:
		enum { _hx_ClassId = 0x19a5e905 };

		void __construct( ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height, ::Dynamic shape);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="vision.ds.ImageView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"vision.ds.ImageView"); }

		inline static ::hx::ObjectPtr< ImageView_obj > __new( ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height, ::Dynamic shape) {
			::hx::ObjectPtr< ImageView_obj > __this = new ImageView_obj();
			__this->__construct(x,y,width,height,shape);
			return __this;
		}

		inline static ::hx::ObjectPtr< ImageView_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height, ::Dynamic shape) {
			ImageView_obj *__this = (ImageView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageView_obj), false, "vision.ds.ImageView"));
			*(void **)__this = ImageView_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5a236565ae31d1ec_4_new)
HXLINE(  26)		( ( ::vision::ds::ImageView)(__this) )->shape = 0;
HXLINE(  20)		( ( ::vision::ds::ImageView)(__this) )->height = 0;
HXLINE(  16)		( ( ::vision::ds::ImageView)(__this) )->width = 0;
HXLINE(  12)		( ( ::vision::ds::ImageView)(__this) )->y = 0;
HXLINE(   8)		( ( ::vision::ds::ImageView)(__this) )->x = 0;
HXLINE(   4)		if (::hx::IsNotNull( x )) {
HXDLIN(   4)			( ( ::vision::ds::ImageView)(__this) )->x = ( (int)(x) );
            		}
HXDLIN(   4)		if (::hx::IsNotNull( y )) {
HXDLIN(   4)			( ( ::vision::ds::ImageView)(__this) )->y = ( (int)(y) );
            		}
HXDLIN(   4)		if (::hx::IsNotNull( width )) {
HXDLIN(   4)			( ( ::vision::ds::ImageView)(__this) )->width = ( (int)(width) );
            		}
HXDLIN(   4)		if (::hx::IsNotNull( height )) {
HXDLIN(   4)			( ( ::vision::ds::ImageView)(__this) )->height = ( (int)(height) );
            		}
HXDLIN(   4)		if (::hx::IsNotNull( shape )) {
HXDLIN(   4)			( ( ::vision::ds::ImageView)(__this) )->shape = ( (int)(shape) );
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageView",40,a7,56,d2); }

		int x;
		int y;
		int width;
		int height;
		int shape;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace vision
} // end namespace ds

#endif /* INCLUDED_vision_ds_ImageView */ 
