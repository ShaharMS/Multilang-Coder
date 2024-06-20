// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_interpreter_memory_Referrer
#define INCLUDED_little_interpreter_memory_Referrer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(little,interpreter,memory,Memory)
HX_DECLARE_CLASS3(little,interpreter,memory,Referrer)

namespace little{
namespace interpreter{
namespace memory{


class HXCPP_CLASS_ATTRIBUTES Referrer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Referrer_obj OBJ_;
		Referrer_obj();

	public:
		enum { _hx_ClassId = 0x70701b44 };

		void __construct( ::little::interpreter::memory::Memory memory);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="little.interpreter.memory.Referrer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"little.interpreter.memory.Referrer"); }
		static ::hx::ObjectPtr< Referrer_obj > __new( ::little::interpreter::memory::Memory memory);
		static ::hx::ObjectPtr< Referrer_obj > __alloc(::hx::Ctx *_hx_ctx, ::little::interpreter::memory::Memory memory);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Referrer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Referrer",ff,f8,b0,f5); }

		static void __boot();
		static int KEY_SIZE;
		 ::little::interpreter::memory::Memory parent;
		 ::haxe::io::Bytes bytes;
		int currentScopeStart;
		int get_currentScopeStart();
		::Dynamic get_currentScopeStart_dyn();

		int currentScopeLength;
		int get_currentScopeLength();
		::Dynamic get_currentScopeLength_dyn();

		void requestMemory();
		::Dynamic requestMemory_dyn();

		void pushScope();
		::Dynamic pushScope_dyn();

		void popScope();
		::Dynamic popScope_dyn();

		void reference(::String key,int address,::String type);
		::Dynamic reference_dyn();

		void dereference(::String key);
		::Dynamic dereference_dyn();

		 ::Dynamic get(::String key);
		::Dynamic get_dyn();

		void set(::String key, ::Dynamic value);
		::Dynamic set_dyn();

		bool exists(::String key);
		::Dynamic exists_dyn();

		 ::Dynamic keyValueIterator();
		::Dynamic keyValueIterator_dyn();

};

} // end namespace little
} // end namespace interpreter
} // end namespace memory

#endif /* INCLUDED_little_interpreter_memory_Referrer */ 
