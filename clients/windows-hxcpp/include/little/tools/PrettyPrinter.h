// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_tools_PrettyPrinter
#define INCLUDED_little_tools_PrettyPrinter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(little,interpreter,InterpTokens)
HX_DECLARE_CLASS2(little,parser,ParserTokens)
HX_DECLARE_CLASS2(little,tools,PrettyPrinter)

namespace little{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES PrettyPrinter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PrettyPrinter_obj OBJ_;
		PrettyPrinter_obj();

	public:
		enum { _hx_ClassId = 0x666e1a1f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="little.tools.PrettyPrinter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"little.tools.PrettyPrinter"); }

		inline static ::hx::ObjectPtr< PrettyPrinter_obj > __new() {
			::hx::ObjectPtr< PrettyPrinter_obj > __this = new PrettyPrinter_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PrettyPrinter_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PrettyPrinter_obj *__this = (PrettyPrinter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PrettyPrinter_obj), false, "little.tools.PrettyPrinter"));
			*(void **)__this = PrettyPrinter_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PrettyPrinter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PrettyPrinter",a4,2d,a5,fc); }

		static void __boot();
		static ::String printParserAst(::Array< ::Dynamic> ast, ::Dynamic spacingBetweenNodes);
		static ::Dynamic printParserAst_dyn();

		static ::String printInterpreterAst(::Array< ::Dynamic> ast, ::Dynamic spacingBetweenNodes);
		static ::Dynamic printInterpreterAst_dyn();

		static ::String prefixFA(::Array< int > pArray);
		static ::Dynamic prefixFA_dyn();

		static ::Array< int > pushIndex(::Array< int > pArray,int i);
		static ::Dynamic pushIndex_dyn();

		static ::String s;
		static int l;
		static ::String getTree_PARSER( ::little::parser::ParserTokens root,::Array< int > prefix,int level,bool last);
		static ::Dynamic getTree_PARSER_dyn();

		static ::String getTree_INTERP( ::little::interpreter::InterpTokens root,::Array< int > prefix,int level,bool last);
		static ::Dynamic getTree_INTERP_dyn();

		static ::String indent;
		static ::String stringifyParser(::Array< ::Dynamic> code, ::little::parser::ParserTokens token);
		static ::Dynamic stringifyParser_dyn();

		static ::String stringifyInterpreter(::Array< ::Dynamic> code, ::little::interpreter::InterpTokens token);
		static ::Dynamic stringifyInterpreter_dyn();

		static ::String prettyPrintOperatorPriority( ::haxe::ds::IntMap priority);
		static ::Dynamic prettyPrintOperatorPriority_dyn();

};

} // end namespace little
} // end namespace tools

#endif /* INCLUDED_little_tools_PrettyPrinter */ 
