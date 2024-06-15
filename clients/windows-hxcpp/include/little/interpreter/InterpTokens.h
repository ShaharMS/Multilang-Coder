// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_interpreter_InterpTokens
#define INCLUDED_little_interpreter_InterpTokens

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(little,interpreter,InterpTokens)
HX_DECLARE_CLASS2(little,tools,BaseOrderedMap)
namespace little{
namespace interpreter{


class InterpTokens_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef InterpTokens_obj OBJ_;

	public:
		InterpTokens_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("little.interpreter.InterpTokens",1a,72,c4,82); }
		::String __ToString() const { return HX_("InterpTokens.",00,f8,7f,41) + _hx_tag; }

		static ::little::interpreter::InterpTokens Block(::Array< ::Dynamic> body, ::little::interpreter::InterpTokens type);
		static ::Dynamic Block_dyn();
		static ::little::interpreter::InterpTokens Characters(::String string);
		static ::Dynamic Characters_dyn();
		static ::little::interpreter::InterpTokens ClassPointer(int pointer);
		static ::Dynamic ClassPointer_dyn();
		static ::little::interpreter::InterpTokens ConditionCall( ::little::interpreter::InterpTokens name, ::little::interpreter::InterpTokens exp, ::little::interpreter::InterpTokens body);
		static ::Dynamic ConditionCall_dyn();
		static ::little::interpreter::InterpTokens ConditionCode( ::haxe::ds::ObjectMap callers);
		static ::Dynamic ConditionCode_dyn();
		static ::little::interpreter::InterpTokens Decimal(Float num);
		static ::Dynamic Decimal_dyn();
		static ::little::interpreter::InterpTokens Documentation(::String doc);
		static ::Dynamic Documentation_dyn();
		static ::little::interpreter::InterpTokens ErrorMessage(::String msg);
		static ::Dynamic ErrorMessage_dyn();
		static ::little::interpreter::InterpTokens Expression(::Array< ::Dynamic> parts, ::little::interpreter::InterpTokens type);
		static ::Dynamic Expression_dyn();
		static ::little::interpreter::InterpTokens FalseValue;
		static inline ::little::interpreter::InterpTokens FalseValue_dyn() { return FalseValue; }
		static ::little::interpreter::InterpTokens FunctionCall( ::little::interpreter::InterpTokens name, ::little::interpreter::InterpTokens params);
		static ::Dynamic FunctionCall_dyn();
		static ::little::interpreter::InterpTokens FunctionCode( ::little::tools::BaseOrderedMap requiredParams, ::little::interpreter::InterpTokens body);
		static ::Dynamic FunctionCode_dyn();
		static ::little::interpreter::InterpTokens FunctionDeclaration( ::little::interpreter::InterpTokens name, ::little::interpreter::InterpTokens params, ::little::interpreter::InterpTokens type, ::little::interpreter::InterpTokens doc);
		static ::Dynamic FunctionDeclaration_dyn();
		static ::little::interpreter::InterpTokens FunctionReturn( ::little::interpreter::InterpTokens value, ::little::interpreter::InterpTokens type);
		static ::Dynamic FunctionReturn_dyn();
		static ::little::interpreter::InterpTokens HaxeExtern( ::Dynamic func);
		static ::Dynamic HaxeExtern_dyn();
		static ::little::interpreter::InterpTokens Identifier(::String word);
		static ::Dynamic Identifier_dyn();
		static ::little::interpreter::InterpTokens NullValue;
		static inline ::little::interpreter::InterpTokens NullValue_dyn() { return NullValue; }
		static ::little::interpreter::InterpTokens Number(int num);
		static ::Dynamic Number_dyn();
		static ::little::interpreter::InterpTokens Object( ::haxe::ds::StringMap props,::String typeName);
		static ::Dynamic Object_dyn();
		static ::little::interpreter::InterpTokens PartArray(::Array< ::Dynamic> parts);
		static ::Dynamic PartArray_dyn();
		static ::little::interpreter::InterpTokens PropertyAccess( ::little::interpreter::InterpTokens name, ::little::interpreter::InterpTokens property);
		static ::Dynamic PropertyAccess_dyn();
		static ::little::interpreter::InterpTokens SetLine(int line);
		static ::Dynamic SetLine_dyn();
		static ::little::interpreter::InterpTokens SetModule(::String module);
		static ::Dynamic SetModule_dyn();
		static ::little::interpreter::InterpTokens Sign(::String sign);
		static ::Dynamic Sign_dyn();
		static ::little::interpreter::InterpTokens SplitLine;
		static inline ::little::interpreter::InterpTokens SplitLine_dyn() { return SplitLine; }
		static ::little::interpreter::InterpTokens TrueValue;
		static inline ::little::interpreter::InterpTokens TrueValue_dyn() { return TrueValue; }
		static ::little::interpreter::InterpTokens TypeCast( ::little::interpreter::InterpTokens value, ::little::interpreter::InterpTokens type);
		static ::Dynamic TypeCast_dyn();
		static ::little::interpreter::InterpTokens VariableDeclaration( ::little::interpreter::InterpTokens name, ::little::interpreter::InterpTokens type, ::little::interpreter::InterpTokens doc);
		static ::Dynamic VariableDeclaration_dyn();
		static ::little::interpreter::InterpTokens Write(::Array< ::Dynamic> assignees, ::little::interpreter::InterpTokens value);
		static ::Dynamic Write_dyn();
};

} // end namespace little
} // end namespace interpreter

#endif /* INCLUDED_little_interpreter_InterpTokens */ 
