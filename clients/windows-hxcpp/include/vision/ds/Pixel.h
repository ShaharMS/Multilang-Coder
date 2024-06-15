// Generated by Haxe 4.3.4
#ifndef INCLUDED_vision_ds_Pixel
#define INCLUDED_vision_ds_Pixel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8d44068f5b94b9f6_29_new)
HX_DECLARE_CLASS2(vision,ds,Pixel)

namespace vision{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES Pixel_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Pixel_obj OBJ_;
		Pixel_obj();

	public:
		enum { _hx_ClassId = 0x7130a38f };

		void __construct(int x,int y,int color);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="vision.ds.Pixel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"vision.ds.Pixel"); }

		inline static ::hx::ObjectPtr< Pixel_obj > __new(int x,int y,int color) {
			::hx::ObjectPtr< Pixel_obj > __this = new Pixel_obj();
			__this->__construct(x,y,color);
			return __this;
		}

		inline static ::hx::ObjectPtr< Pixel_obj > __alloc(::hx::Ctx *_hx_ctx,int x,int y,int color) {
			Pixel_obj *__this = (Pixel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pixel_obj), false, "vision.ds.Pixel"));
			*(void **)__this = Pixel_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8d44068f5b94b9f6_29_new)
HXLINE(  30)		( ( ::vision::ds::Pixel)(__this) )->x = x;
HXLINE(  31)		( ( ::vision::ds::Pixel)(__this) )->y = y;
HXLINE(  32)		( ( ::vision::ds::Pixel)(__this) )->color = color;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pixel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Pixel",66,36,d1,55); }

		int x;
		int y;
		int color;
};

} // end namespace vision
} // end namespace ds

#endif /* INCLUDED_vision_ds_Pixel */ 
