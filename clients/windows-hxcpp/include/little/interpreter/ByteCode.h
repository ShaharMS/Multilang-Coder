// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_interpreter_ByteCode
#define INCLUDED_little_interpreter_ByteCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(little,interpreter,ByteCode)
HX_DECLARE_CLASS2(little,interpreter,InterpTokens)

namespace little{
namespace interpreter{


class HXCPP_CLASS_ATTRIBUTES ByteCode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ByteCode_obj OBJ_;
		ByteCode_obj();

	public:
		enum { _hx_ClassId = 0x7ebb4a0d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="little.interpreter.ByteCode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"little.interpreter.ByteCode"); }

		inline static ::hx::ObjectPtr< ByteCode_obj > __new() {
			::hx::ObjectPtr< ByteCode_obj > __this = new ByteCode_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ByteCode_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ByteCode_obj *__this = (ByteCode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ByteCode_obj), false, "little.interpreter.ByteCode"));
			*(void **)__this = ByteCode_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ByteCode_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ByteCode",75,dc,22,1c); }

		static ::String compile(::Array< ::Dynamic> tokens);
		static ::Dynamic compile_dyn();

		static ::Array< ::Dynamic> decompile(::String bytecode);
		static ::Dynamic decompile_dyn();

};

} // end namespace little
} // end namespace interpreter

#endif /* INCLUDED_little_interpreter_ByteCode */ 
