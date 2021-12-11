#ifndef INCLUDED_FPSCapOption
#define INCLUDED_FPSCapOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(FPSCapOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES FPSCapOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef FPSCapOption_obj OBJ_;
		FPSCapOption_obj();

	public:
		enum { _hx_ClassId = 0x25e90a42 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FPSCapOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FPSCapOption"); }
		static ::hx::ObjectPtr< FPSCapOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< FPSCapOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FPSCapOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FPSCapOption",1e,50,bd,0a); }

		bool press();

		::String updateDisplay();

		::String getValue();

		bool right();

		bool left();

};


#endif /* INCLUDED_FPSCapOption */ 
