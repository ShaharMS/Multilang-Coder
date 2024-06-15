// Generated by Haxe 4.3.4
#ifndef INCLUDED_little_interpreter_memory_Memory
#define INCLUDED_little_interpreter_memory_Memory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(little,interpreter,InterpTokens)
HX_DECLARE_CLASS3(little,interpreter,memory,ConstantPool)
HX_DECLARE_CLASS3(little,interpreter,memory,ExternalInterfacing)
HX_DECLARE_CLASS3(little,interpreter,memory,Memory)
HX_DECLARE_CLASS3(little,interpreter,memory,Operators)
HX_DECLARE_CLASS3(little,interpreter,memory,Referrer)
HX_DECLARE_CLASS3(little,interpreter,memory,Storage)

namespace little{
namespace interpreter{
namespace memory{


class HXCPP_CLASS_ATTRIBUTES Memory_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Memory_obj OBJ_;
		Memory_obj();

	public:
		enum { _hx_ClassId = 0x19bbd626 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="little.interpreter.memory.Memory")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"little.interpreter.memory.Memory"); }
		static ::hx::ObjectPtr< Memory_obj > __new();
		static ::hx::ObjectPtr< Memory_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Memory_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Memory",21,3f,54,39); }

		 ::little::interpreter::memory::Storage storage;
		 ::little::interpreter::memory::Referrer referrer;
		 ::little::interpreter::memory::ExternalInterfacing externs;
		 ::little::interpreter::memory::ConstantPool constants;
		 ::little::interpreter::memory::Operators operators;
		int memoryChunkSize;
		int maxMemorySize;
		int get_currentMemorySize();
		::Dynamic get_currentMemorySize_dyn();

		void reset();
		::Dynamic reset_dyn();

		int store( ::little::interpreter::InterpTokens token);
		::Dynamic store_dyn();

		int retrieve( ::little::interpreter::InterpTokens token);
		::Dynamic retrieve_dyn();

		 ::little::interpreter::InterpTokens valueFromType(int address,::String type,::Array< ::String > fullPath,::Array< ::String > currentPath);
		::Dynamic valueFromType_dyn();

		 ::Dynamic read(::Array< ::String > path);
		::Dynamic read_dyn();

		 ::Dynamic readFrom( ::Dynamic value,::Array< ::String > path);
		::Dynamic readFrom_dyn();

		void write(::Array< ::String > path, ::little::interpreter::InterpTokens value,::String type,::String doc);
		::Dynamic write_dyn();

		void set(::Array< ::String > path, ::little::interpreter::InterpTokens value,::String type,::String doc);
		::Dynamic set_dyn();

		int allocate(int size);
		::Dynamic allocate_dyn();

		void free(int pointer,int size);
		::Dynamic free_dyn();

		 ::Dynamic sizeOf(int pointer,::String type);
		::Dynamic sizeOf_dyn();

		 ::Dynamic getTypeInformation(::String name);
		::Dynamic getTypeInformation_dyn();

		::String getTypeName(int pointer);
		::Dynamic getTypeName_dyn();

};

} // end namespace little
} // end namespace interpreter
} // end namespace memory

#endif /* INCLUDED_little_interpreter_memory_Memory */ 
