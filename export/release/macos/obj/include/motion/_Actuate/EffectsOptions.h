#ifndef INCLUDED_motion__Actuate_EffectsOptions
#define INCLUDED_motion__Actuate_EffectsOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,_Actuate,EffectsOptions)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace motion{
namespace _Actuate{


class HXCPP_CLASS_ATTRIBUTES EffectsOptions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EffectsOptions_obj OBJ_;
		EffectsOptions_obj();

	public:
		enum { _hx_ClassId = 0x22e54f6e };

		void __construct( ::openfl::display::DisplayObject target,Float duration,bool overwrite);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion._Actuate.EffectsOptions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion._Actuate.EffectsOptions"); }
		static ::hx::ObjectPtr< EffectsOptions_obj > __new( ::openfl::display::DisplayObject target,Float duration,bool overwrite);
		static ::hx::ObjectPtr< EffectsOptions_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject target,Float duration,bool overwrite);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EffectsOptions_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EffectsOptions",dc,06,98,9e); }

		Float duration;
		bool overwrite;
		 ::openfl::display::DisplayObject target;
		::Dynamic filter( ::Dynamic reference, ::Dynamic properties);
		::Dynamic filter_dyn();

};

} // end namespace motion
} // end namespace _Actuate

#endif /* INCLUDED_motion__Actuate_EffectsOptions */ 
