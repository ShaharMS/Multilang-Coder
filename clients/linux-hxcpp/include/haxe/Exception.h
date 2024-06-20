// Generated by Haxe 4.3.4
#ifndef INCLUDED_haxe_Exception
#define INCLUDED_haxe_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS1(haxe,StackItem)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Exception_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();

	public:
		enum { _hx_ClassId = 0x677ddc49 };

		void __construct(::String message, ::haxe::Exception previous, ::Dynamic native);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.Exception")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.Exception"); }
		static ::hx::ObjectPtr< Exception_obj > __new(::String message, ::haxe::Exception previous, ::Dynamic native);
		static ::hx::ObjectPtr< Exception_obj > __alloc(::hx::Ctx *_hx_ctx,::String message, ::haxe::Exception previous, ::Dynamic native);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Exception_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Exception",2f,f0,6c,eb); }

		static  ::haxe::Exception caught( ::Dynamic value);
		static ::Dynamic caught_dyn();

		::String _hx___exceptionMessage;
		::Array< ::Dynamic> _hx___exceptionStack;
		::Array< ::String > _hx___nativeStack;
		int _hx___skipStack;
		 ::Dynamic _hx___nativeException;
		 ::haxe::Exception _hx___previousException;
		virtual ::String toString();
		::Dynamic toString_dyn();

		::String details();
		::Dynamic details_dyn();

		void _hx___shiftStack();
		::Dynamic _hx___shiftStack_dyn();

		void _hx___unshiftStack();
		::Dynamic _hx___unshiftStack_dyn();

		::String get_message();
		::Dynamic get_message_dyn();

		 ::haxe::Exception get_previous();
		::Dynamic get_previous_dyn();

		::Array< ::Dynamic> get_stack();
		::Dynamic get_stack_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Exception */ 
