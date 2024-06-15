// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_interpreter_memory_ExternalInterfacing
#define INCLUDED_little_interpreter_memory_ExternalInterfacing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(little,interpreter,memory,ExtTree)
HX_DECLARE_CLASS3(little,interpreter,memory,ExternalInterfacing)
HX_DECLARE_CLASS3(little,interpreter,memory,Memory)

namespace little{
namespace interpreter{
namespace memory{


class HXCPP_CLASS_ATTRIBUTES ExternalInterfacing_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ExternalInterfacing_obj OBJ_;
		ExternalInterfacing_obj();

	public:
		enum { _hx_ClassId = 0x7a9209ca };

		void __construct( ::little::interpreter::memory::Memory memory);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="little.interpreter.memory.ExternalInterfacing")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"little.interpreter.memory.ExternalInterfacing"); }
		static ::hx::ObjectPtr< ExternalInterfacing_obj > __new( ::little::interpreter::memory::Memory memory);
		static ::hx::ObjectPtr< ExternalInterfacing_obj > __alloc(::hx::Ctx *_hx_ctx, ::little::interpreter::memory::Memory memory);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ExternalInterfacing_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ExternalInterfacing",8b,66,5d,ff); }

		 ::little::interpreter::memory::Memory parent;
		 ::haxe::ds::StringMap externToPointer;
		 ::haxe::ds::IntMap pointerToExtern;
		 ::haxe::ds::IntMap get_pointerToExtern();
		::Dynamic get_pointerToExtern_dyn();

		 ::little::interpreter::memory::ExtTree instanceProperties;
		 ::little::interpreter::memory::ExtTree globalProperties;
		 ::little::interpreter::memory::ExtTree createPathFor( ::little::interpreter::memory::ExtTree extType,::Array< ::String > path);
		::Dynamic createPathFor_dyn();

		void createAllPathsFor(::Array< ::String > path);
		::Dynamic createAllPathsFor_dyn();

		bool hasGlobal(::Array< ::String > path);
		::Dynamic hasGlobal_dyn();

		bool hasInstance(::Array< ::String > path);
		::Dynamic hasInstance_dyn();

		 ::Dynamic getGlobal(::Array< ::String > path);
		::Dynamic getGlobal_dyn();

};

} // end namespace little
} // end namespace interpreter
} // end namespace memory

#endif /* INCLUDED_little_interpreter_memory_ExternalInterfacing */ 
