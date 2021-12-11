#ifndef INCLUDED_LaneUnderlayOption
#define INCLUDED_LaneUnderlayOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(LaneUnderlayOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES LaneUnderlayOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef LaneUnderlayOption_obj OBJ_;
		LaneUnderlayOption_obj();

	public:
		enum { _hx_ClassId = 0x3f6624cd };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LaneUnderlayOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LaneUnderlayOption"); }
		static ::hx::ObjectPtr< LaneUnderlayOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< LaneUnderlayOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LaneUnderlayOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LaneUnderlayOption",0d,42,a2,e7); }

		bool press();

		::String updateDisplay();

		bool right();

		::String getValue();

		bool left();

};


#endif /* INCLUDED_LaneUnderlayOption */ 
