// Generated by Haxe 4.3.4
#ifndef INCLUDED_vision_ds_specifics_PointTransformationPair
#define INCLUDED_vision_ds_specifics_PointTransformationPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(vision,ds,Point2D)
HX_DECLARE_CLASS3(vision,ds,specifics,PointTransformationPair)

namespace vision{
namespace ds{
namespace specifics{


class HXCPP_CLASS_ATTRIBUTES PointTransformationPair_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PointTransformationPair_obj OBJ_;
		PointTransformationPair_obj();

	public:
		enum { _hx_ClassId = 0x03eadabd };

		void __construct( ::vision::ds::Point2D from, ::vision::ds::Point2D to);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="vision.ds.specifics.PointTransformationPair")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"vision.ds.specifics.PointTransformationPair"); }
		static ::hx::ObjectPtr< PointTransformationPair_obj > __new( ::vision::ds::Point2D from, ::vision::ds::Point2D to);
		static ::hx::ObjectPtr< PointTransformationPair_obj > __alloc(::hx::Ctx *_hx_ctx, ::vision::ds::Point2D from, ::vision::ds::Point2D to);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PointTransformationPair_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PointTransformationPair",d3,f2,d3,03); }

		 ::vision::ds::Point2D from;
		 ::vision::ds::Point2D to;
};

} // end namespace vision
} // end namespace ds
} // end namespace specifics

#endif /* INCLUDED_vision_ds_specifics_PointTransformationPair */ 