// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_vision_ds_Rectangle
#include <vision/ds/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_40061b8343164eb6_4_new,"vision.ds.Rectangle","new",0xb22d9aa8,"vision.ds.Rectangle.new","vision/ds/Rectangle.hx",4,0x35eb1868)
namespace vision{
namespace ds{

void Rectangle_obj::__construct(int x,int y,int width,int height){
            	HX_STACKFRAME(&_hx_pos_40061b8343164eb6_4_new)
HXDLIN(   4)		this->x = x;
HXDLIN(   4)		this->y = y;
HXDLIN(   4)		this->width = width;
HXDLIN(   4)		this->height = height;
            	}

Dynamic Rectangle_obj::__CreateEmpty() { return new Rectangle_obj; }

void *Rectangle_obj::_hx_vtable = 0;

Dynamic Rectangle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Rectangle_obj > _hx_result = new Rectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Rectangle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x029ef5d4;
}


Rectangle_obj::Rectangle_obj()
{
}

::hx::Val Rectangle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Rectangle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Rectangle_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Rectangle_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(Rectangle_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(Rectangle_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(Rectangle_obj,height),HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Rectangle_obj_sStaticStorageInfo = 0;
#endif

static ::String Rectangle_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	::String(null()) };

::hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	Rectangle_obj _hx_dummy;
	Rectangle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("vision.ds.Rectangle",b6,66,d9,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Rectangle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Rectangle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rectangle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace vision
} // end namespace ds
