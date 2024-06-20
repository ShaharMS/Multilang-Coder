// Generated by Haxe 4.3.4
#ifndef INCLUDED_vision_exceptions_ImageLoadingFailed
#define INCLUDED_vision_exceptions_ImageLoadingFailed

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_vision_exceptions_VisionException
#include <vision/exceptions/VisionException.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(vision,exceptions,ImageLoadingFailed)
HX_DECLARE_CLASS2(vision,exceptions,VisionException)

namespace vision{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES ImageLoadingFailed_obj : public  ::vision::exceptions::VisionException_obj
{
	public:
		typedef  ::vision::exceptions::VisionException_obj super;
		typedef ImageLoadingFailed_obj OBJ_;
		ImageLoadingFailed_obj();

	public:
		enum { _hx_ClassId = 0x62c6f08a };

		void __construct(int type,::String reason);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="vision.exceptions.ImageLoadingFailed")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"vision.exceptions.ImageLoadingFailed"); }
		static ::hx::ObjectPtr< ImageLoadingFailed_obj > __new(int type,::String reason);
		static ::hx::ObjectPtr< ImageLoadingFailed_obj > __alloc(::hx::Ctx *_hx_ctx,int type,::String reason);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageLoadingFailed_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageLoadingFailed",1e,a5,18,52); }

};

} // end namespace vision
} // end namespace exceptions

#endif /* INCLUDED_vision_exceptions_ImageLoadingFailed */ 
