// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_tools__Layer_Layer_Impl_
#define INCLUDED_little_tools__Layer_Layer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(little,tools,_Layer,Layer_Impl_)

namespace little{
namespace tools{
namespace _Layer{


class HXCPP_CLASS_ATTRIBUTES Layer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Layer_Impl__obj OBJ_;
		Layer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2d86e0da };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="little.tools._Layer.Layer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"little.tools._Layer.Layer_Impl_"); }

		inline static ::hx::ObjectPtr< Layer_Impl__obj > __new() {
			::hx::ObjectPtr< Layer_Impl__obj > __this = new Layer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Layer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Layer_Impl__obj *__this = (Layer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Layer_Impl__obj), false, "little.tools._Layer.Layer_Impl_"));
			*(void **)__this = Layer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Layer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Layer_Impl_",11,09,59,34); }

		static void __boot();
		static ::String LEXER;
		static ::String PARSER;
		static ::String PARSER_MACRO;
		static ::String INTERPRETER;
		static ::String INTERPRETER_VALUE_EVALUATOR;
		static ::String INTERPRETER_EXPRESSION_EVALUATOR;
		static ::String INTERPRETER_TOKEN_VALUE_STRINGIFIER;
		static ::String INTERPRETER_TOKEN_IDENTIFIER_STRINGIFIER;
		static ::String MEMORY;
		static ::String MEMORY_REFERRER;
		static ::String MEMORY_STORAGE;
		static ::String MEMORY_EXTERNAL_INTERFACING;
		static ::String MEMORY_SIZE_EVALUATOR;
		static ::String MEMORY_GARBAGE_COLLECTOR;
		static int getIndexOf(::String layer);
		static ::Dynamic getIndexOf_dyn();

};

} // end namespace little
} // end namespace tools
} // end namespace _Layer

#endif /* INCLUDED_little_tools__Layer_Layer_Impl_ */ 
