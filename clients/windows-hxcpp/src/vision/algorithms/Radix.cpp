// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_vision_algorithms_Radix
#include <vision/algorithms/Radix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_760d9f469d2534e1_34_getMax,"vision.algorithms.Radix","getMax",0x7b0880fc,"vision.algorithms.Radix.getMax","vision/algorithms/Radix.hx",34,0x762466fe)
HX_LOCAL_STACK_FRAME(_hx_pos_760d9f469d2534e1_52_countingSort,"vision.algorithms.Radix","countingSort",0x5e5a283f,"vision.algorithms.Radix.countingSort","vision/algorithms/Radix.hx",52,0x762466fe)
HX_LOCAL_STACK_FRAME(_hx_pos_760d9f469d2534e1_91_sort,"vision.algorithms.Radix","sort",0xd75cd52c,"vision.algorithms.Radix.sort","vision/algorithms/Radix.hx",91,0x762466fe)
namespace vision{
namespace algorithms{

void Radix_obj::__construct() { }

Dynamic Radix_obj::__CreateEmpty() { return new Radix_obj; }

void *Radix_obj::_hx_vtable = 0;

Dynamic Radix_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Radix_obj > _hx_result = new Radix_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Radix_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x483c7518;
}

 ::Dynamic Radix_obj::getMax(::cpp::VirtualArray array, ::Dynamic endIndex){
            	HX_STACKFRAME(&_hx_pos_760d9f469d2534e1_34_getMax)
HXLINE(  35)		if (::hx::IsNull( endIndex )) {
HXLINE(  36)			endIndex = array->get_length();
            		}
HXLINE(  38)		 ::Dynamic potential = array->__get(0);
HXLINE(  39)		{
HXLINE(  39)			int _g = 1;
HXDLIN(  39)			 ::Dynamic _g1 = endIndex;
HXDLIN(  39)			while(::hx::IsLess( _g,_g1 )){
HXLINE(  39)				_g = (_g + 1);
HXDLIN(  39)				int i = (_g - 1);
HXLINE(  40)				if (::hx::IsGreater( array->__get(i),potential )) {
HXLINE(  41)					potential = array->__get(i);
            				}
            			}
            		}
HXLINE(  43)		return potential;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Radix_obj,getMax,return )

::cpp::VirtualArray Radix_obj::countingSort(::cpp::VirtualArray array,int exp, ::Dynamic endIndex){
            	HX_STACKFRAME(&_hx_pos_760d9f469d2534e1_52_countingSort)
HXLINE(  53)		if (::hx::IsNull( endIndex )) {
HXLINE(  54)			endIndex = array->get_length();
            		}
HXLINE(  56)		::cpp::VirtualArray output = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  57)		int i = -1;
HXLINE(  58)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN(  58)		{
HXLINE(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
HXDLIN(  58)			_g->push(0);
            		}
HXDLIN(  58)		::Array< int > count = _g;
HXLINE(  61)		while(true){
HXLINE(  61)			i = (i + 1);
HXDLIN(  61)			if (!(::hx::IsLess( i,endIndex ))) {
HXLINE(  61)				goto _hx_goto_2;
            			}
HXLINE(  62)			int _hx_tmp = ::hx::Mod(::Std_obj::_hx_int((( (Float)(array->__get(i)) ) / ( (Float)(exp) ))),10);
HXDLIN(  62)			count[_hx_tmp]++;
            		}
            		_hx_goto_2:;
HXLINE(  64)		i = 0;
HXLINE(  68)		while(true){
HXLINE(  68)			i = (i + 1);
HXDLIN(  68)			if (!((i < 10))) {
HXLINE(  68)				goto _hx_goto_3;
            			}
HXLINE(  69)			::Array< int > count1 = count;
HXDLIN(  69)			int i1 = i;
HXDLIN(  69)			count1[i1] = (count1->__get(i1) + count->__get((i - 1)));
            		}
            		_hx_goto_3:;
HXLINE(  71)		i = ( (int)(endIndex) );
HXLINE(  74)		while(true){
HXLINE(  74)			i = (i - 1);
HXDLIN(  74)			if (!((i >= 0))) {
HXLINE(  74)				goto _hx_goto_4;
            			}
HXLINE(  75)			output->set((count->__get(::hx::Mod(::Std_obj::_hx_int((( (Float)(array->__get(i)) ) / ( (Float)(exp) ))),10)) - 1),array->__get(i));
HXLINE(  76)			int _hx_tmp1 = ::hx::Mod(::Std_obj::_hx_int((( (Float)(array->__get(i)) ) / ( (Float)(exp) ))),10);
HXDLIN(  76)			count[_hx_tmp1]--;
            		}
            		_hx_goto_4:;
HXLINE(  79)		i = -1;
HXLINE(  82)		while(true){
HXLINE(  82)			i = (i + 1);
HXDLIN(  82)			if (!(::hx::IsLess( i,endIndex ))) {
HXLINE(  82)				goto _hx_goto_5;
            			}
HXLINE(  83)			array->set(i,output->__get(i));
            		}
            		_hx_goto_5:;
HXLINE(  85)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Radix_obj,countingSort,return )

::cpp::VirtualArray Radix_obj::sort(::cpp::VirtualArray main){
            	HX_STACKFRAME(&_hx_pos_760d9f469d2534e1_91_sort)
HXLINE(  93)		::cpp::VirtualArray negatives = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  93)		::cpp::VirtualArray positives = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			int _g1 = main->get_length();
HXDLIN(  94)			while((_g < _g1)){
HXLINE(  94)				_g = (_g + 1);
HXDLIN(  94)				int i = (_g - 1);
HXLINE(  95)				if (::hx::IsLess( main->__get(i),0 )) {
HXLINE(  96)					negatives->push(-(main->__get(i)));
            				}
            				else {
HXLINE(  98)					positives->push(main->__get(i));
            				}
            			}
            		}
HXLINE( 101)		{
HXLINE( 101)			{
HXLINE( 101)				::cpp::VirtualArray array = negatives;
HXLINE( 103)				 ::Dynamic max = ::vision::algorithms::Radix_obj::getMax(array,array->get_length());
HXLINE( 104)				int exp = 1;
HXLINE( 109)				while(((( (Float)(max) ) / ( (Float)(exp) )) > 0)){
HXLINE( 110)					array = ::vision::algorithms::Radix_obj::countingSort(array,exp,array->get_length());
HXLINE( 111)					exp = (exp * 10);
            				}
            			}
HXLINE( 101)			{
HXLINE( 101)				::cpp::VirtualArray array1 = positives;
HXLINE( 103)				 ::Dynamic max1 = ::vision::algorithms::Radix_obj::getMax(array1,array1->get_length());
HXLINE( 104)				int exp1 = 1;
HXLINE( 109)				while(((( (Float)(max1) ) / ( (Float)(exp1) )) > 0)){
HXLINE( 110)					array1 = ::vision::algorithms::Radix_obj::countingSort(array1,exp1,array1->get_length());
HXLINE( 111)					exp1 = (exp1 * 10);
            				}
            			}
            		}
HXLINE( 115)		negatives->reverse();
HXLINE( 116)		::cpp::VirtualArray result = ::cpp::VirtualArray_obj::__new(negatives->get_length());
HXDLIN( 116)		{
HXLINE( 116)			int _g2 = 0;
HXDLIN( 116)			int _g3 = negatives->get_length();
HXDLIN( 116)			while((_g2 < _g3)){
HXLINE( 116)				_g2 = (_g2 + 1);
HXDLIN( 116)				int i1 = (_g2 - 1);
HXDLIN( 116)				{
HXLINE( 116)					 ::Dynamic inValue = -(_hx_array_unsafe_get(negatives,i1));
HXDLIN( 116)					result->__unsafe_set(i1,inValue);
            				}
            			}
            		}
HXDLIN( 116)		negatives = result;
HXLINE( 117)		main = negatives->concat(positives);
HXDLIN( 117)		return main;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Radix_obj,sort,return )


Radix_obj::Radix_obj()
{
}

bool Radix_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getMax") ) { outValue = getMax_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"countingSort") ) { outValue = countingSort_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Radix_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Radix_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Radix_obj::__mClass;

static ::String Radix_obj_sStaticFields[] = {
	HX_("getMax",ae,43,22,a3),
	HX_("countingSort",71,fc,1d,4d),
	HX_("sort",5e,27,58,4c),
	::String(null())
};

void Radix_obj::__register()
{
	Radix_obj _hx_dummy;
	Radix_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("vision.algorithms.Radix",60,85,6a,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Radix_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Radix_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Radix_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Radix_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Radix_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace vision
} // end namespace algorithms