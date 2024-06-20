// Generated by Haxe 4.3.4
#ifndef INCLUDED_vision_exceptions_LibraryRequired
#define INCLUDED_vision_exceptions_LibraryRequired

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_vision_exceptions_VisionException
#include <vision/exceptions/VisionException.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(vision,exceptions,LibraryRequired)
HX_DECLARE_CLASS2(vision,exceptions,VisionException)

namespace vision{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES LibraryRequired_obj : public  ::vision::exceptions::VisionException_obj
{
	public:
		typedef  ::vision::exceptions::VisionException_obj super;
		typedef LibraryRequired_obj OBJ_;
		LibraryRequired_obj();

	public:
		enum { _hx_ClassId = 0x05e8086e };

		void __construct(::String library,::Array< ::String > dependencies,::String classDotField,::String __o_fieldType);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="vision.exceptions.LibraryRequired")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"vision.exceptions.LibraryRequired"); }
		static ::hx::ObjectPtr< LibraryRequired_obj > __new(::String library,::Array< ::String > dependencies,::String classDotField,::String __o_fieldType);
		static ::hx::ObjectPtr< LibraryRequired_obj > __alloc(::hx::Ctx *_hx_ctx,::String library,::Array< ::String > dependencies,::String classDotField,::String __o_fieldType);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LibraryRequired_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LibraryRequired",5a,6f,58,c4); }

		static ::String getInclusionMethod(::Array< ::String > libs);
		static ::Dynamic getInclusionMethod_dyn();

};

} // end namespace vision
} // end namespace exceptions

#endif /* INCLUDED_vision_exceptions_LibraryRequired */ 
