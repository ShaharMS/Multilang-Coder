// Generated by Haxe 4.3.4
#ifndef INCLUDED_vision_helpers_VisionThread
#define INCLUDED_vision_helpers_VisionThread

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)
HX_DECLARE_CLASS2(vision,helpers,VisionThread)

namespace vision{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES VisionThread_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VisionThread_obj OBJ_;
		VisionThread_obj();

	public:
		enum { _hx_ClassId = 0x7ed853fb };

		void __construct( ::Dynamic job);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="vision.helpers.VisionThread")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"vision.helpers.VisionThread"); }
		static ::hx::ObjectPtr< VisionThread_obj > __new( ::Dynamic job);
		static ::hx::ObjectPtr< VisionThread_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic job);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VisionThread_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VisionThread",f2,2c,67,46); }

		static void __boot();
		static int COUNT;
		static  ::vision::helpers::VisionThread create( ::Dynamic job);
		static ::Dynamic create_dyn();

		 ::sys::thread::_Thread::HaxeThread underlying;
		 ::Dynamic job;
		Dynamic job_dyn() { return job;}
		 ::Dynamic onFailed;
		Dynamic onFailed_dyn() { return onFailed;}
		 ::Dynamic onDone;
		Dynamic onDone_dyn() { return onDone;}
		 ::Dynamic jobDone;
		bool relaunchEvents;
		int count;
		void start();
		::Dynamic start_dyn();

		void onFailedWrapper( ::haxe::Exception d);
		::Dynamic onFailedWrapper_dyn();

		 ::Dynamic set_onFailed( ::Dynamic value);
		::Dynamic set_onFailed_dyn();

		 ::Dynamic set_onDone( ::Dynamic value);
		::Dynamic set_onDone_dyn();

};

} // end namespace vision
} // end namespace helpers

#endif /* INCLUDED_vision_helpers_VisionThread */ 
