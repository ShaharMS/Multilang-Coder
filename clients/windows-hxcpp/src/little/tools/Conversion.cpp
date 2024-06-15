// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_little_KeywordConfig
#include <little/KeywordConfig.h>
#endif
#ifndef INCLUDED_little_Little
#include <little/Little.h>
#endif
#ifndef INCLUDED_little_interpreter_InterpTokens
#include <little/interpreter/InterpTokens.h>
#endif
#ifndef INCLUDED_little_interpreter_Interpreter
#include <little/interpreter/Interpreter.h>
#endif
#ifndef INCLUDED_little_interpreter_memory_Memory
#include <little/interpreter/memory/Memory.h>
#endif
#ifndef INCLUDED_little_tools_BaseOrderedMap
#include <little/tools/BaseOrderedMap.h>
#endif
#ifndef INCLUDED_little_tools_Conversion
#include <little/tools/Conversion.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_43ee8787f79b458a_21_extractHaxeType,"little.tools.Conversion","extractHaxeType",0x34ea0b14,"little.tools.Conversion.extractHaxeType","little/tools/Conversion.hx",21,0x79fe483b)
HX_LOCAL_STACK_FRAME(_hx_pos_43ee8787f79b458a_39_toLittleValue,"little.tools.Conversion","toLittleValue",0x838f9cd3,"little.tools.Conversion.toLittleValue","little/tools/Conversion.hx",39,0x79fe483b)
HX_LOCAL_STACK_FRAME(_hx_pos_43ee8787f79b458a_95_toHaxeValue,"little.tools.Conversion","toHaxeValue",0x359ae1a3,"little.tools.Conversion.toHaxeValue","little/tools/Conversion.hx",95,0x79fe483b)
HX_LOCAL_STACK_FRAME(_hx_pos_43ee8787f79b458a_133_toLittleType,"little.tools.Conversion","toLittleType",0xdf321798,"little.tools.Conversion.toLittleType","little/tools/Conversion.hx",133,0x79fe483b)
namespace little{
namespace tools{

void Conversion_obj::__construct() { }

Dynamic Conversion_obj::__CreateEmpty() { return new Conversion_obj; }

void *Conversion_obj::_hx_vtable = 0;

Dynamic Conversion_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Conversion_obj > _hx_result = new Conversion_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Conversion_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33a2e9f7;
}

::String Conversion_obj::extractHaxeType( ::ValueType type){
            	HX_STACKFRAME(&_hx_pos_43ee8787f79b458a_21_extractHaxeType)
HXDLIN(  21)		switch((int)(type->_hx_getIndex())){
            			case (int)0: {
HXLINE(  22)				return HX_("Dynamic",5f,c7,66,03);
            			}
            			break;
            			case (int)1: {
HXLINE(  23)				return HX_("Int",cf,c4,37,00);
            			}
            			break;
            			case (int)2: {
HXLINE(  24)				return HX_("Float",7c,35,c4,95);
            			}
            			break;
            			case (int)3: {
HXLINE(  25)				return HX_("Bool",4a,b0,f4,2b);
            			}
            			break;
            			case (int)4: {
HXLINE(  26)				return HX_("Dynamic",5f,c7,66,03);
            			}
            			break;
            			case (int)5: {
HXLINE(  27)				return HX_("Dynamic",5f,c7,66,03);
            			}
            			break;
            			case (int)6: {
HXLINE(  28)				::hx::Class c = type->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN(  28)				return ( (::String)(::Type_obj::getClassName(c).split(HX_(".",2e,00,00,00))->pop()) );
            			}
            			break;
            			case (int)7: {
HXLINE(  29)				::hx::Class e = type->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN(  29)				return ( (::String)(::Type_obj::getEnumName(e).split(HX_(".",2e,00,00,00))->pop()) );
            			}
            			break;
            			case (int)8: {
HXLINE(  30)				return HX_("Dynamic",5f,c7,66,03);
            			}
            			break;
            		}
HXLINE(  21)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conversion_obj,extractHaxeType,return )

 ::little::interpreter::InterpTokens Conversion_obj::toLittleValue( ::Dynamic val){
            	HX_GC_STACKFRAME(&_hx_pos_43ee8787f79b458a_39_toLittleValue)
HXLINE(  40)		if (::hx::IsNull( val )) {
HXLINE(  40)			return ::little::interpreter::InterpTokens_obj::NullValue_dyn();
            		}
HXLINE(  41)		if (::Std_obj::isOfType(val,::hx::ClassOf< ::String >())) {
HXLINE(  41)			return ::little::interpreter::InterpTokens_obj::Characters(val);
            		}
HXLINE(  42)		 ::ValueType type = ::Type_obj::_hx_typeof(val);
HXLINE(  43)		switch((int)(type->_hx_getIndex())){
            			case (int)0: {
HXLINE(  44)				return ::little::interpreter::InterpTokens_obj::NullValue_dyn();
            			}
            			break;
            			case (int)1: {
HXLINE(  45)				return ::little::interpreter::InterpTokens_obj::Number(val);
            			}
            			break;
            			case (int)2: {
HXLINE(  46)				return ::little::interpreter::InterpTokens_obj::Decimal(val);
            			}
            			break;
            			case (int)3: {
HXLINE(  47)				if (( (bool)(val) )) {
HXLINE(  47)					return ::little::interpreter::InterpTokens_obj::TrueValue_dyn();
            				}
            				else {
HXLINE(  47)					return ::little::interpreter::InterpTokens_obj::FalseValue_dyn();
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(  48)				if (::hx::IsNotNull( ::Type_obj::getClass(val) )) {
HXLINE(  49)					 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  50)					{
HXLINE(  50)						int _g = 0;
HXDLIN(  50)						::Array< ::String > _g1 = ::Type_obj::getInstanceFields(::Type_obj::getClass(val));
HXDLIN(  50)						while((_g < _g1->length)){
HXLINE(  50)							::String field = _g1->__get(_g);
HXDLIN(  50)							_g = (_g + 1);
HXLINE(  51)							{
HXLINE(  51)								 ::Dynamic v =  ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("value",71,7f,b8,31),::little::tools::Conversion_obj::toLittleValue(::Reflect_obj::getProperty(val,field)))
            									->setFixed(1,HX_("documentation",ba,81,68,41),HX_("",00,00,00,00)));
HXDLIN(  51)								map->set(field,v);
            							}
            						}
            					}
HXLINE(  56)					{
HXLINE(  56)						::String k = (::little::Little_obj::keywords->TYPE_CAST_FUNCTION_PREFIX + ::little::Little_obj::keywords->TYPE_STRING);
HXLINE(  58)						 ::little::interpreter::InterpTokens v1 = ::little::interpreter::InterpTokens_obj::Characters(::Std_obj::string(val));
HXLINE(  56)						 ::Dynamic v2 =  ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("value",71,7f,b8,31),::little::interpreter::InterpTokens_obj::Block(::Array_obj< ::Dynamic>::__new(1)->init(0,::little::interpreter::InterpTokens_obj::FunctionReturn(v1,::little::interpreter::InterpTokens_obj::Identifier(::little::Little_obj::keywords->TYPE_STRING))),::little::interpreter::InterpTokens_obj::Identifier(::little::Little_obj::keywords->TYPE_STRING)))
            							->setFixed(1,HX_("documentation",ba,81,68,41),HX_("The function that will be used to convert this object to a string.",36,97,ae,3c)));
HXDLIN(  56)						map->set(k,v2);
            					}
HXLINE(  61)					{
HXLINE(  61)						::String k1 = ::little::Little_obj::keywords->OBJECT_TYPE_PROPERTY_NAME;
HXLINE(  62)						 ::little::interpreter::InterpTokens v3 = ::little::interpreter::InterpTokens_obj::Characters(::little::tools::Conversion_obj::toLittleType(::Type_obj::getClassName(val)));
HXLINE(  61)						 ::Dynamic v4 =  ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("value",71,7f,b8,31),v3)
            							->setFixed(1,HX_("documentation",ba,81,68,41),((HX_("The type of this object, as a ",ea,9a,26,74) + ::little::Little_obj::keywords->TYPE_STRING) + HX_(".",2e,00,00,00))));
HXDLIN(  61)						map->set(k1,v4);
            					}
HXLINE(  65)					return ::little::interpreter::InterpTokens_obj::Object(map,::Type_obj::enumParameters(map->get(::little::Little_obj::keywords->OBJECT_TYPE_PROPERTY_NAME)->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic))->__get(0));
            				}
            				else {
HXLINE(  68)					::String objType = ::little::Little_obj::keywords->TYPE_DYNAMIC;
HXLINE(  69)					 ::haxe::ds::StringMap map1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  70)					{
HXLINE(  70)						int _g2 = 0;
HXDLIN(  70)						::Array< ::String > _g3 = ::Type_obj::getInstanceFields(::Type_obj::getClass(val));
HXDLIN(  70)						while((_g2 < _g3->length)){
HXLINE(  70)							::String field1 = _g3->__get(_g2);
HXDLIN(  70)							_g2 = (_g2 + 1);
HXLINE(  71)							{
HXLINE(  71)								 ::Dynamic v5 =  ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("value",71,7f,b8,31),::little::tools::Conversion_obj::toLittleValue(::Reflect_obj::getProperty(val,field1)))
            									->setFixed(1,HX_("documentation",ba,81,68,41),HX_("",00,00,00,00)));
HXDLIN(  71)								map1->set(field1,v5);
            							}
            						}
            					}
HXLINE(  76)					return ::little::interpreter::InterpTokens_obj::Object(map1,objType);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  79)				return ::little::interpreter::InterpTokens_obj::NullValue_dyn();
            			}
            			break;
            			case (int)6: {
HXLINE(  81)				::hx::Class c = type->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE(  82)				return ::little::interpreter::InterpTokens_obj::NullValue_dyn();
            			}
            			break;
            			case (int)7: {
HXLINE(  84)				::hx::Class e = type->_hx_getObject(0).StaticCast< ::hx::Class >();
HXLINE(  85)				return ::little::interpreter::InterpTokens_obj::NullValue_dyn();
            			}
            			break;
            			case (int)8: {
HXLINE(  87)				return ::little::interpreter::InterpTokens_obj::NullValue_dyn();
            			}
            			break;
            		}
HXLINE(  43)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conversion_obj,toLittleValue,return )

 ::Dynamic Conversion_obj::toHaxeValue( ::little::interpreter::InterpTokens val){
            	HX_STACKFRAME(&_hx_pos_43ee8787f79b458a_95_toHaxeValue)
HXLINE(  96)		val = ::little::interpreter::Interpreter_obj::evaluate(val,null());
HXLINE(  97)		switch((int)(val->_hx_getIndex())){
            			case (int)7: {
HXLINE( 120)				 ::little::tools::BaseOrderedMap _g = val->_hx_getObject(0).StaticCast<  ::little::tools::BaseOrderedMap >();
HXDLIN( 120)				 ::little::interpreter::InterpTokens _g1 = val->_hx_getObject(1).StaticCast<  ::little::interpreter::InterpTokens >();
HXLINE( 121)				return null();
            			}
            			break;
            			case (int)16: {
HXLINE( 106)				int num = val->_hx_getInt(0);
HXDLIN( 106)				return num;
            			}
            			break;
            			case (int)17: {
HXLINE( 105)				Float num1 = val->_hx_getFloat(0);
HXDLIN( 105)				return num1;
            			}
            			break;
            			case (int)18: {
HXLINE( 107)				::String string = val->_hx_getString(0);
HXDLIN( 107)				return string;
            			}
            			break;
            			case (int)20: {
HXLINE( 117)				int pointer = val->_hx_getInt(0);
HXLINE( 118)				return ::little::Little_obj::memory->getTypeName(pointer);
            			}
            			break;
            			case (int)22: {
HXLINE( 104)				return null();
            			}
            			break;
            			case (int)23: {
HXLINE( 102)				return true;
            			}
            			break;
            			case (int)24: {
HXLINE( 103)				return false;
            			}
            			break;
            			case (int)26: {
HXLINE( 108)				 ::haxe::ds::StringMap props = val->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 108)				::String typeName = val->_hx_getString(1);
HXLINE( 109)				 ::Dynamic obj =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 110)				{
HXLINE( 110)					::Dynamic map = props;
HXDLIN( 110)					::Dynamic _g_map = map;
HXDLIN( 110)					 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 110)					while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 110)						::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 110)						 ::Dynamic _g_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 110)						::String _g_key = key;
HXDLIN( 110)						::String key1 = _g_key;
HXDLIN( 110)						 ::Dynamic value = _g_value;
HXDLIN( 110)						{
HXLINE( 111)							if ((key1 == (::little::Little_obj::keywords->TYPE_CAST_FUNCTION_PREFIX + ::little::Little_obj::keywords->TYPE_STRING))) {
HXLINE( 111)								continue;
            							}
HXLINE( 112)							obj->__SetField(HX_("key",9f,89,51,00),::little::tools::Conversion_obj::toHaxeValue(value->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)),::hx::paccDynamic);
            						}
            					}
            				}
HXLINE( 115)				return obj;
            			}
            			break;
            			case (int)27: {
HXLINE(  98)				::String msg = val->_hx_getString(0);
HXLINE(  99)				::haxe::Log_obj::trace(((HX_("WARNING: ",e2,e7,94,f3) + msg) + HX_(". Returning null",07,f3,67,78)),::hx::SourceInfo(HX_("src/little/tools/Conversion.hx",c6,ba,6a,bc),99,HX_("little.tools.Conversion",21,1d,97,28),HX_("toHaxeValue",70,64,16,6a)));
HXLINE( 100)				return null();
            			}
            			break;
            			default:{
HXLINE( 124)				return null();
            			}
            		}
HXLINE(  97)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conversion_obj,toHaxeValue,return )

::String Conversion_obj::toLittleType(::String type){
            	HX_STACKFRAME(&_hx_pos_43ee8787f79b458a_133_toLittleType)
HXDLIN( 133)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("Bool",4a,b0,f4,2b)) ){
HXLINE( 134)			return ::little::Little_obj::keywords->TYPE_BOOLEAN;
HXDLIN( 134)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("Dynamic",5f,c7,66,03)) ){
HXLINE( 138)			return ::little::Little_obj::keywords->TYPE_DYNAMIC;
HXDLIN( 138)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("Float",7c,35,c4,95)) ){
HXLINE( 136)			return ::little::Little_obj::keywords->TYPE_FLOAT;
HXDLIN( 136)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("Int",cf,c4,37,00)) ){
HXLINE( 135)			return ::little::Little_obj::keywords->TYPE_INT;
HXDLIN( 135)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("String",f1,9c,c4,45)) ){
HXLINE( 137)			return ::little::Little_obj::keywords->TYPE_STRING;
HXDLIN( 137)			goto _hx_goto_6;
            		}
            		/* default */{
HXLINE( 139)			return type;
            		}
            		_hx_goto_6:;
HXLINE( 133)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conversion_obj,toLittleType,return )


Conversion_obj::Conversion_obj()
{
}

bool Conversion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"toHaxeValue") ) { outValue = toHaxeValue_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toLittleType") ) { outValue = toLittleType_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toLittleValue") ) { outValue = toLittleValue_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"extractHaxeType") ) { outValue = extractHaxeType_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Conversion_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Conversion_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Conversion_obj::__mClass;

static ::String Conversion_obj_sStaticFields[] = {
	HX_("extractHaxeType",61,78,73,e3),
	HX_("toLittleValue",e0,2c,0b,70),
	HX_("toHaxeValue",70,64,16,6a),
	HX_("toLittleType",2b,08,c9,96),
	::String(null())
};

void Conversion_obj::__register()
{
	Conversion_obj _hx_dummy;
	Conversion_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("little.tools.Conversion",21,1d,97,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Conversion_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Conversion_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Conversion_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Conversion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Conversion_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace little
} // end namespace tools
