// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_parser_ParserTokens
#define INCLUDED_little_parser_ParserTokens

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(little,parser,ParserTokens)
namespace little{
namespace parser{


class ParserTokens_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ParserTokens_obj OBJ_;

	public:
		ParserTokens_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("little.parser.ParserTokens",30,0f,05,9c); }
		::String __ToString() const { return HX_("ParserTokens.",55,1c,83,11) + _hx_tag; }

		static ::little::parser::ParserTokens Block(::Array< ::Dynamic> body, ::little::parser::ParserTokens type);
		static ::Dynamic Block_dyn();
		static ::little::parser::ParserTokens Characters(::String string);
		static ::Dynamic Characters_dyn();
		static ::little::parser::ParserTokens ConditionCall( ::little::parser::ParserTokens name, ::little::parser::ParserTokens exp, ::little::parser::ParserTokens body);
		static ::Dynamic ConditionCall_dyn();
		static ::little::parser::ParserTokens Custom(::String name,::Array< ::Dynamic> params);
		static ::Dynamic Custom_dyn();
		static ::little::parser::ParserTokens Decimal(::String num);
		static ::Dynamic Decimal_dyn();
		static ::little::parser::ParserTokens Documentation(::String doc);
		static ::Dynamic Documentation_dyn();
		static ::little::parser::ParserTokens ErrorMessage(::String msg);
		static ::Dynamic ErrorMessage_dyn();
		static ::little::parser::ParserTokens Expression(::Array< ::Dynamic> parts, ::little::parser::ParserTokens type);
		static ::Dynamic Expression_dyn();
		static ::little::parser::ParserTokens FalseValue;
		static inline ::little::parser::ParserTokens FalseValue_dyn() { return FalseValue; }
		static ::little::parser::ParserTokens Function( ::little::parser::ParserTokens name, ::little::parser::ParserTokens params, ::little::parser::ParserTokens type, ::little::parser::ParserTokens doc);
		static ::Dynamic Function_dyn();
		static ::little::parser::ParserTokens FunctionCall( ::little::parser::ParserTokens name, ::little::parser::ParserTokens params);
		static ::Dynamic FunctionCall_dyn();
		static ::little::parser::ParserTokens Identifier(::String word);
		static ::Dynamic Identifier_dyn();
		static ::little::parser::ParserTokens NullValue;
		static inline ::little::parser::ParserTokens NullValue_dyn() { return NullValue; }
		static ::little::parser::ParserTokens Number(::String num);
		static ::Dynamic Number_dyn();
		static ::little::parser::ParserTokens PartArray(::Array< ::Dynamic> parts);
		static ::Dynamic PartArray_dyn();
		static ::little::parser::ParserTokens PropertyAccess( ::little::parser::ParserTokens name, ::little::parser::ParserTokens property);
		static ::Dynamic PropertyAccess_dyn();
		static ::little::parser::ParserTokens Read( ::little::parser::ParserTokens name);
		static ::Dynamic Read_dyn();
		static ::little::parser::ParserTokens Return( ::little::parser::ParserTokens value, ::little::parser::ParserTokens type);
		static ::Dynamic Return_dyn();
		static ::little::parser::ParserTokens SetLine(int line);
		static ::Dynamic SetLine_dyn();
		static ::little::parser::ParserTokens SetModule(::String module);
		static ::Dynamic SetModule_dyn();
		static ::little::parser::ParserTokens Sign(::String sign);
		static ::Dynamic Sign_dyn();
		static ::little::parser::ParserTokens SplitLine;
		static inline ::little::parser::ParserTokens SplitLine_dyn() { return SplitLine; }
		static ::little::parser::ParserTokens TrueValue;
		static inline ::little::parser::ParserTokens TrueValue_dyn() { return TrueValue; }
		static ::little::parser::ParserTokens TypeDeclaration( ::little::parser::ParserTokens value, ::little::parser::ParserTokens type);
		static ::Dynamic TypeDeclaration_dyn();
		static ::little::parser::ParserTokens Variable( ::little::parser::ParserTokens name, ::little::parser::ParserTokens type, ::little::parser::ParserTokens doc);
		static ::Dynamic Variable_dyn();
		static ::little::parser::ParserTokens Write(::Array< ::Dynamic> assignees, ::little::parser::ParserTokens value);
		static ::Dynamic Write_dyn();
};

} // end namespace little
} // end namespace parser

#endif /* INCLUDED_little_parser_ParserTokens */ 