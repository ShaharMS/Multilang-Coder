// Generated by Haxe 4.3.4
#ifndef INCLUDED_vision_tools_MathTools
#define INCLUDED_vision_tools_MathTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(vision,ds,Line2D)
HX_DECLARE_CLASS2(vision,ds,Point2D)
HX_DECLARE_CLASS2(vision,ds,Ray2D)
HX_DECLARE_CLASS2(vision,ds,Rectangle)
HX_DECLARE_CLASS2(vision,tools,MathTools)

namespace vision{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES MathTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MathTools_obj OBJ_;
		MathTools_obj();

	public:
		enum { _hx_ClassId = 0x23de0c48 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="vision.tools.MathTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"vision.tools.MathTools"); }

		inline static ::hx::ObjectPtr< MathTools_obj > __new() {
			::hx::ObjectPtr< MathTools_obj > __this = new MathTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MathTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MathTools_obj *__this = (MathTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MathTools_obj), false, "vision.tools.MathTools"));
			*(void **)__this = MathTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MathTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MathTools",13,2b,ed,32); }

		static Float PI;
		static Float NEGATIVE_INFINITY;
		static Float POSITIVE_INFINITY;
		static Float NaN;
		static Float distanceFromRayToPoint2D( ::vision::ds::Ray2D ray, ::vision::ds::Point2D point);
		static ::Dynamic distanceFromRayToPoint2D_dyn();

		static  ::vision::ds::Point2D intersectionBetweenRay2Ds( ::vision::ds::Ray2D ray, ::vision::ds::Ray2D ray2);
		static ::Dynamic intersectionBetweenRay2Ds_dyn();

		static Float distanceBetweenRays2D( ::vision::ds::Ray2D ray, ::vision::ds::Ray2D ray2);
		static ::Dynamic distanceBetweenRays2D_dyn();

		static  ::vision::ds::Point2D findPointAtDistanceUsingX( ::vision::ds::Ray2D ray,Float startXPos,Float distance,::hx::Null< bool >  goPositive);
		static ::Dynamic findPointAtDistanceUsingX_dyn();

		static  ::vision::ds::Point2D findPointAtDistanceUsingY( ::vision::ds::Ray2D ray,Float startYPos,Float distance,::hx::Null< bool >  goPositive);
		static ::Dynamic findPointAtDistanceUsingY_dyn();

		static Float distanceFromLineToPoint2D( ::vision::ds::Line2D line, ::vision::ds::Point2D point);
		static ::Dynamic distanceFromLineToPoint2D_dyn();

		static Float distanceBetweenLines2D( ::vision::ds::Line2D line1, ::vision::ds::Line2D line2);
		static ::Dynamic distanceBetweenLines2D_dyn();

		static Float radiansFromLineToPoint2D( ::vision::ds::Line2D line, ::vision::ds::Point2D point);
		static ::Dynamic radiansFromLineToPoint2D_dyn();

		static  ::vision::ds::Point2D intersectionBetweenLine2Ds( ::vision::ds::Line2D line1, ::vision::ds::Line2D line2);
		static ::Dynamic intersectionBetweenLine2Ds_dyn();

		static  ::vision::ds::Line2D mirrorInsideRectangle( ::vision::ds::Line2D line, ::vision::ds::Rectangle rect);
		static ::Dynamic mirrorInsideRectangle_dyn();

		static  ::vision::ds::Line2D flipInsideRectangle( ::vision::ds::Line2D line, ::vision::ds::Rectangle rect);
		static ::Dynamic flipInsideRectangle_dyn();

		static  ::vision::ds::Line2D invertInsideRectangle( ::vision::ds::Line2D line, ::vision::ds::Rectangle rect);
		static ::Dynamic invertInsideRectangle_dyn();

		static int clamp(int value,int mi,int ma);
		static ::Dynamic clamp_dyn();

		static bool isBetweenRanges(Float value,::Array< ::Dynamic> ranges);
		static ::Dynamic isBetweenRanges_dyn();

		static bool isBetweenRange(Float value,Float min,Float max);
		static ::Dynamic isBetweenRange_dyn();

		static int wrapInt(int value,int min,int max);
		static ::Dynamic wrapInt_dyn();

		static Float wrapFloat(Float value,Float min,Float max);
		static ::Dynamic wrapFloat_dyn();

		static int boundInt(int value,int min,int max);
		static ::Dynamic boundInt_dyn();

		static Float boundFloat(Float value,Float min,Float max);
		static ::Dynamic boundFloat_dyn();

		static Float gamma(Float x);
		static ::Dynamic gamma_dyn();

		static Float factorial(Float value);
		static ::Dynamic factorial_dyn();

		static Float slopeToDegrees(Float slope);
		static ::Dynamic slopeToDegrees_dyn();

		static Float slopeToRadians(Float slope);
		static ::Dynamic slopeToRadians_dyn();

		static Float degreesToSlope(Float degrees);
		static ::Dynamic degreesToSlope_dyn();

		static Float degreesToRadians(Float degrees);
		static ::Dynamic degreesToRadians_dyn();

		static Float radiansToDegrees(Float radians);
		static ::Dynamic radiansToDegrees_dyn();

		static Float radiansToSlope(Float radians);
		static ::Dynamic radiansToSlope_dyn();

		static Float cotan(Float radians);
		static ::Dynamic cotan_dyn();

		static Float cosec(Float radians);
		static ::Dynamic cosec_dyn();

		static Float sec(Float radians);
		static ::Dynamic sec_dyn();

		static Float sind(Float degrees);
		static ::Dynamic sind_dyn();

		static Float cosd(Float degrees);
		static ::Dynamic cosd_dyn();

		static Float tand(Float degrees);
		static ::Dynamic tand_dyn();

		static Float cotand(Float degrees);
		static ::Dynamic cotand_dyn();

		static Float cosecd(Float degrees);
		static ::Dynamic cosecd_dyn();

		static Float secd(Float degrees);
		static ::Dynamic secd_dyn();

		static Float truncate(Float num,int numbersAfterDecimal);
		static ::Dynamic truncate_dyn();

		static int cropDecimal(Float number);
		static ::Dynamic cropDecimal_dyn();

		static bool isInt(Float v);
		static ::Dynamic isInt_dyn();

		static Float get_NEGATIVE_INFINITY();
		static ::Dynamic get_NEGATIVE_INFINITY_dyn();

		static Float get_POSITIVE_INFINITY();
		static ::Dynamic get_POSITIVE_INFINITY_dyn();

		static Float get_NaN();
		static ::Dynamic get_NaN_dyn();

		static Float get_PI_OVER_2();
		static ::Dynamic get_PI_OVER_2_dyn();

		static Float get_PI();
		static ::Dynamic get_PI_dyn();

		static Float abs(Float v);
		static ::Dynamic abs_dyn();

		static Float acos(Float v);
		static ::Dynamic acos_dyn();

		static Float asin(Float v);
		static ::Dynamic asin_dyn();

		static Float atan(Float v);
		static ::Dynamic atan_dyn();

		static Float atan2(Float y,Float x);
		static ::Dynamic atan2_dyn();

		static int ceil(Float v);
		static ::Dynamic ceil_dyn();

		static Float cos(Float radians);
		static ::Dynamic cos_dyn();

		static Float exp(Float v);
		static ::Dynamic exp_dyn();

		static int floor(Float v);
		static ::Dynamic floor_dyn();

		static Float log(Float v);
		static ::Dynamic log_dyn();

		static Float pow(Float v,Float exp);
		static ::Dynamic pow_dyn();

		static Float random();
		static ::Dynamic random_dyn();

		static int round(Float v);
		static ::Dynamic round_dyn();

		static Float sin(Float radians);
		static ::Dynamic sin_dyn();

		static Float sqrt(Float v);
		static ::Dynamic sqrt_dyn();

		static Float tan(Float radians);
		static ::Dynamic tan_dyn();

		static Float ffloor(Float v);
		static ::Dynamic ffloor_dyn();

		static Float fceil(Float v);
		static ::Dynamic fceil_dyn();

		static Float fround(Float v);
		static ::Dynamic fround_dyn();

		static bool isFinite(Float f);
		static ::Dynamic isFinite_dyn();

		static bool isNaN(Float f);
		static ::Dynamic isNaN_dyn();

		static Float parseFloat(::String s);
		static ::Dynamic parseFloat_dyn();

		static Float parseInt(::String s);
		static ::Dynamic parseInt_dyn();

		static bool parseBool(::String s);
		static ::Dynamic parseBool_dyn();

};

} // end namespace vision
} // end namespace tools

#endif /* INCLUDED_vision_tools_MathTools */ 
