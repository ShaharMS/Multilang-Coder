// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_tools_ParserTokensSimple
#define INCLUDED_little_tools_ParserTokensSimple

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(little,tools,ParserTokensSimple)
namespace little{
namespace tools{


class ParserTokensSimple_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ParserTokensSimple_obj OBJ_;

	public:
		ParserTokensSimple_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("little.tools.ParserTokensSimple",b6,97,6c,97); }
		::String __ToString() const { return HX_("ParserTokensSimple.",03,03,7b,c8) + _hx_tag; }

		static ::little::tools::ParserTokensSimple BLOCK;
		static inline ::little::tools::ParserTokensSimple BLOCK_dyn() { return BLOCK; }
		static ::little::tools::ParserTokensSimple CHARACTERS;
		static inline ::little::tools::ParserTokensSimple CHARACTERS_dyn() { return CHARACTERS; }
		static ::little::tools::ParserTokensSimple CONDITION_CALL;
		static inline ::little::tools::ParserTokensSimple CONDITION_CALL_dyn() { return CONDITION_CALL; }
		static ::little::tools::ParserTokensSimple DECIMAL;
		static inline ::little::tools::ParserTokensSimple DECIMAL_dyn() { return DECIMAL; }
		static ::little::tools::ParserTokensSimple DOCUMENTATION;
		static inline ::little::tools::ParserTokensSimple DOCUMENTATION_dyn() { return DOCUMENTATION; }
		static ::little::tools::ParserTokensSimple ERROR_MESSAGE;
		static inline ::little::tools::ParserTokensSimple ERROR_MESSAGE_dyn() { return ERROR_MESSAGE; }
		static ::little::tools::ParserTokensSimple EXPRESSION;
		static inline ::little::tools::ParserTokensSimple EXPRESSION_dyn() { return EXPRESSION; }
		static ::little::tools::ParserTokensSimple EXTERNAL;
		static inline ::little::tools::ParserTokensSimple EXTERNAL_dyn() { return EXTERNAL; }
		static ::little::tools::ParserTokensSimple EXTERNAL_CONDITION;
		static inline ::little::tools::ParserTokensSimple EXTERNAL_CONDITION_dyn() { return EXTERNAL_CONDITION; }
		static ::little::tools::ParserTokensSimple FALSE_VALUE;
		static inline ::little::tools::ParserTokensSimple FALSE_VALUE_dyn() { return FALSE_VALUE; }
		static ::little::tools::ParserTokensSimple FUNCTION;
		static inline ::little::tools::ParserTokensSimple FUNCTION_dyn() { return FUNCTION; }
		static ::little::tools::ParserTokensSimple FUNCTION_CALL;
		static inline ::little::tools::ParserTokensSimple FUNCTION_CALL_dyn() { return FUNCTION_CALL; }
		static ::little::tools::ParserTokensSimple IDENTIFIER;
		static inline ::little::tools::ParserTokensSimple IDENTIFIER_dyn() { return IDENTIFIER; }
		static ::little::tools::ParserTokensSimple MODULE;
		static inline ::little::tools::ParserTokensSimple MODULE_dyn() { return MODULE; }
		static ::little::tools::ParserTokensSimple NOBODY;
		static inline ::little::tools::ParserTokensSimple NOBODY_dyn() { return NOBODY; }
		static ::little::tools::ParserTokensSimple NULL_VALUE;
		static inline ::little::tools::ParserTokensSimple NULL_VALUE_dyn() { return NULL_VALUE; }
		static ::little::tools::ParserTokensSimple NUMBER;
		static inline ::little::tools::ParserTokensSimple NUMBER_dyn() { return NUMBER; }
		static ::little::tools::ParserTokensSimple PART_ARRAY;
		static inline ::little::tools::ParserTokensSimple PART_ARRAY_dyn() { return PART_ARRAY; }
		static ::little::tools::ParserTokensSimple PROPERTY_ACCESS;
		static inline ::little::tools::ParserTokensSimple PROPERTY_ACCESS_dyn() { return PROPERTY_ACCESS; }
		static ::little::tools::ParserTokensSimple READ;
		static inline ::little::tools::ParserTokensSimple READ_dyn() { return READ; }
		static ::little::tools::ParserTokensSimple RETURN;
		static inline ::little::tools::ParserTokensSimple RETURN_dyn() { return RETURN; }
		static ::little::tools::ParserTokensSimple SET_LINE;
		static inline ::little::tools::ParserTokensSimple SET_LINE_dyn() { return SET_LINE; }
		static ::little::tools::ParserTokensSimple SET_MODULE;
		static inline ::little::tools::ParserTokensSimple SET_MODULE_dyn() { return SET_MODULE; }
		static ::little::tools::ParserTokensSimple SIGN;
		static inline ::little::tools::ParserTokensSimple SIGN_dyn() { return SIGN; }
		static ::little::tools::ParserTokensSimple SPLIT_LINE;
		static inline ::little::tools::ParserTokensSimple SPLIT_LINE_dyn() { return SPLIT_LINE; }
		static ::little::tools::ParserTokensSimple TRUE_VALUE;
		static inline ::little::tools::ParserTokensSimple TRUE_VALUE_dyn() { return TRUE_VALUE; }
		static ::little::tools::ParserTokensSimple TYPE_DECLARATION;
		static inline ::little::tools::ParserTokensSimple TYPE_DECLARATION_dyn() { return TYPE_DECLARATION; }
		static ::little::tools::ParserTokensSimple VARIABLE;
		static inline ::little::tools::ParserTokensSimple VARIABLE_dyn() { return VARIABLE; }
		static ::little::tools::ParserTokensSimple WRITE;
		static inline ::little::tools::ParserTokensSimple WRITE_dyn() { return WRITE; }
};

} // end namespace little
} // end namespace tools

#endif /* INCLUDED_little_tools_ParserTokensSimple */ 
