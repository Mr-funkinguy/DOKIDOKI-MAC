#ifndef INCLUDED_ResetButtonOption
#define INCLUDED_ResetButtonOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(ResetButtonOption)



class HXCPP_CLASS_ATTRIBUTES ResetButtonOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef ResetButtonOption_obj OBJ_;
		ResetButtonOption_obj();

	public:
		enum { _hx_ClassId = 0x7f83a466 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ResetButtonOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ResetButtonOption"); }
		static ::hx::ObjectPtr< ResetButtonOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< ResetButtonOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ResetButtonOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ResetButtonOption",56,fb,07,7a); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_ResetButtonOption */ 
