// Generated by Haxe 4.3.4
#ifndef INCLUDED_vision_algorithms_Cramer
#define INCLUDED_vision_algorithms_Cramer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(vision,algorithms,Cramer)
HX_DECLARE_CLASS2(vision,ds,Array2D)

namespace vision{
namespace algorithms{


class HXCPP_CLASS_ATTRIBUTES Cramer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Cramer_obj OBJ_;
		Cramer_obj();

	public:
		enum { _hx_ClassId = 0x0481d658 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="vision.algorithms.Cramer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"vision.algorithms.Cramer"); }

		inline static ::hx::ObjectPtr< Cramer_obj > __new() {
			::hx::ObjectPtr< Cramer_obj > __this = new Cramer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Cramer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Cramer_obj *__this = (Cramer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Cramer_obj), false, "vision.algorithms.Cramer"));
			*(void **)__this = Cramer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Cramer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Cramer",a8,0e,08,ae); }

		static ::Array< Float > solveVariablesFor( ::vision::ds::Array2D coefficients,::Array< Float > solutions);
		static ::Dynamic solveVariablesFor_dyn();

};

} // end namespace vision
} // end namespace algorithms

#endif /* INCLUDED_vision_algorithms_Cramer */ 
