#ifndef INCLUDED_MiddleScrollOption
#define INCLUDED_MiddleScrollOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(MiddleScrollOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES MiddleScrollOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef MiddleScrollOption_obj OBJ_;
		MiddleScrollOption_obj();

	public:
		enum { _hx_ClassId = 0x56368dff };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MiddleScrollOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MiddleScrollOption"); }
		static ::hx::ObjectPtr< MiddleScrollOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< MiddleScrollOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MiddleScrollOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MiddleScrollOption",77,96,8a,30); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_MiddleScrollOption */ 
