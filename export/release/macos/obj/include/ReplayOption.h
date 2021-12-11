#ifndef INCLUDED_ReplayOption
#define INCLUDED_ReplayOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(ReplayOption)



class HXCPP_CLASS_ATTRIBUTES ReplayOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef ReplayOption_obj OBJ_;
		ReplayOption_obj();

	public:
		enum { _hx_ClassId = 0x06c5f3a4 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ReplayOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ReplayOption"); }
		static ::hx::ObjectPtr< ReplayOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< ReplayOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ReplayOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ReplayOption",1c,d2,4f,b9); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_ReplayOption */ 
