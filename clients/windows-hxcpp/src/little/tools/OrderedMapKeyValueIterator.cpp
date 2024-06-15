// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_little_tools_OrderedMapKeyValueIterator
#include <little/tools/OrderedMapKeyValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3c99cda9c080e45f_133_new,"little.tools.OrderedMapKeyValueIterator","new",0x2dc689ac,"little.tools.OrderedMapKeyValueIterator.new","little/tools/OrderedMap.hx",133,0xd54914c2)
HX_LOCAL_STACK_FRAME(_hx_pos_3c99cda9c080e45f_144_hasNext,"little.tools.OrderedMapKeyValueIterator","hasNext",0xca7df4b9,"little.tools.OrderedMapKeyValueIterator.hasNext","little/tools/OrderedMap.hx",144,0xd54914c2)
HX_LOCAL_STACK_FRAME(_hx_pos_3c99cda9c080e45f_148_next,"little.tools.OrderedMapKeyValueIterator","next",0xdff1ee27,"little.tools.OrderedMapKeyValueIterator.next","little/tools/OrderedMap.hx",148,0xd54914c2)
namespace little{
namespace tools{

void OrderedMapKeyValueIterator_obj::__construct(::cpp::VirtualArray karray,::cpp::VirtualArray varray){
            	HX_STACKFRAME(&_hx_pos_3c99cda9c080e45f_133_new)
HXLINE( 134)		this->current = 0;
HXLINE( 139)		this->karray = karray;
HXLINE( 140)		this->varray = varray;
            	}

Dynamic OrderedMapKeyValueIterator_obj::__CreateEmpty() { return new OrderedMapKeyValueIterator_obj; }

void *OrderedMapKeyValueIterator_obj::_hx_vtable = 0;

Dynamic OrderedMapKeyValueIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OrderedMapKeyValueIterator_obj > _hx_result = new OrderedMapKeyValueIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OrderedMapKeyValueIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x663adc90;
}

bool OrderedMapKeyValueIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_3c99cda9c080e45f_144_hasNext)
HXDLIN( 144)		if ((this->karray->get_length() == this->varray->get_length())) {
HXDLIN( 144)			return (this->current < this->karray->get_length());
            		}
            		else {
HXDLIN( 144)			return false;
            		}
HXDLIN( 144)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMapKeyValueIterator_obj,hasNext,return )

 ::Dynamic OrderedMapKeyValueIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_3c99cda9c080e45f_148_next)
HXDLIN( 148)		 ::Dynamic _hx_tmp = this->varray->__get(this->current);
HXDLIN( 148)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("key",9f,89,51,00),this->karray->__get(this->current++))
            			->setFixed(1,HX_("value",71,7f,b8,31),_hx_tmp));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMapKeyValueIterator_obj,next,return )


OrderedMapKeyValueIterator_obj::OrderedMapKeyValueIterator_obj()
{
}

void OrderedMapKeyValueIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrderedMapKeyValueIterator);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(karray,"karray");
	HX_MARK_MEMBER_NAME(varray,"varray");
	HX_MARK_END_CLASS();
}

void OrderedMapKeyValueIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(karray,"karray");
	HX_VISIT_MEMBER_NAME(varray,"varray");
}

::hx::Val OrderedMapKeyValueIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"karray") ) { return ::hx::Val( karray ); }
		if (HX_FIELD_EQ(inName,"varray") ) { return ::hx::Val( varray ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return ::hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OrderedMapKeyValueIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"karray") ) { karray=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"varray") ) { varray=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OrderedMapKeyValueIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("current",39,9c,e3,cb));
	outFields->push(HX_("karray",4e,09,bf,ed));
	outFields->push(HX_("varray",63,01,ac,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OrderedMapKeyValueIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OrderedMapKeyValueIterator_obj,current),HX_("current",39,9c,e3,cb)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(OrderedMapKeyValueIterator_obj,karray),HX_("karray",4e,09,bf,ed)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(OrderedMapKeyValueIterator_obj,varray),HX_("varray",63,01,ac,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OrderedMapKeyValueIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String OrderedMapKeyValueIterator_obj_sMemberFields[] = {
	HX_("current",39,9c,e3,cb),
	HX_("karray",4e,09,bf,ed),
	HX_("varray",63,01,ac,53),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class OrderedMapKeyValueIterator_obj::__mClass;

void OrderedMapKeyValueIterator_obj::__register()
{
	OrderedMapKeyValueIterator_obj _hx_dummy;
	OrderedMapKeyValueIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("little.tools.OrderedMapKeyValueIterator",ba,83,05,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OrderedMapKeyValueIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OrderedMapKeyValueIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OrderedMapKeyValueIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OrderedMapKeyValueIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace little
} // end namespace tools