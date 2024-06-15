// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_vision_ds_ImageView
#include <vision/ds/ImageView.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a236565ae31d1ec_4_new,"vision.ds.ImageView","new",0x59cc7a59,"vision.ds.ImageView.new","vision/ds/ImageView.hx",4,0x85e179d7)
HX_LOCAL_STACK_FRAME(_hx_pos_5a236565ae31d1ec_29_toString,"vision.ds.ImageView","toString",0x6ace6013,"vision.ds.ImageView.toString","vision/ds/ImageView.hx",29,0x85e179d7)
namespace vision{
namespace ds{

void ImageView_obj::__construct( ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height, ::Dynamic shape){
            	HX_STACKFRAME(&_hx_pos_5a236565ae31d1ec_4_new)
HXLINE(  26)		this->shape = 0;
HXLINE(  20)		this->height = 0;
HXLINE(  16)		this->width = 0;
HXLINE(  12)		this->y = 0;
HXLINE(   8)		this->x = 0;
HXLINE(   4)		if (::hx::IsNotNull( x )) {
HXDLIN(   4)			this->x = ( (int)(x) );
            		}
HXDLIN(   4)		if (::hx::IsNotNull( y )) {
HXDLIN(   4)			this->y = ( (int)(y) );
            		}
HXDLIN(   4)		if (::hx::IsNotNull( width )) {
HXDLIN(   4)			this->width = ( (int)(width) );
            		}
HXDLIN(   4)		if (::hx::IsNotNull( height )) {
HXDLIN(   4)			this->height = ( (int)(height) );
            		}
HXDLIN(   4)		if (::hx::IsNotNull( shape )) {
HXDLIN(   4)			this->shape = ( (int)(shape) );
            		}
            	}

Dynamic ImageView_obj::__CreateEmpty() { return new ImageView_obj; }

void *ImageView_obj::_hx_vtable = 0;

Dynamic ImageView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageView_obj > _hx_result = new ImageView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ImageView_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19a5e905;
}

::String ImageView_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5a236565ae31d1ec_29_toString)
HXDLIN(  29)		return ((((((((((HX_("{shape: ",ec,b4,b1,e2) + this->shape) + HX_(", x: ",2a,9b,23,6b)) + this->x) + HX_(", y: ",6b,5d,24,6b)) + this->y) + HX_(", width: ",38,46,cd,98)) + this->width) + HX_(", height: ",c1,fc,44,9e)) + this->height) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageView_obj,toString,return )


ImageView_obj::ImageView_obj()
{
}

::hx::Val ImageView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"shape") ) { return ::hx::Val( shape ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("shape",21,e3,1c,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageView_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ImageView_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(ImageView_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(ImageView_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(ImageView_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(ImageView_obj,shape),HX_("shape",21,e3,1c,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageView_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageView_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("shape",21,e3,1c,7c),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class ImageView_obj::__mClass;

void ImageView_obj::__register()
{
	ImageView_obj _hx_dummy;
	ImageView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("vision.ds.ImageView",e7,59,e0,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace vision
} // end namespace ds