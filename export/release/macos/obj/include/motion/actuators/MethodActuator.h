#ifndef INCLUDED_motion_actuators_MethodActuator
#define INCLUDED_motion_actuators_MethodActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,MethodActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)

namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES MethodActuator_obj : public  ::motion::actuators::SimpleActuator_obj
{
	public:
		typedef  ::motion::actuators::SimpleActuator_obj super;
		typedef MethodActuator_obj OBJ_;
		MethodActuator_obj();

	public:
		enum { _hx_ClassId = 0x558db13e };

		void __construct( ::Dynamic target,Float duration, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion.actuators.MethodActuator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion.actuators.MethodActuator"); }
		static ::hx::ObjectPtr< MethodActuator_obj > __new( ::Dynamic target,Float duration, ::Dynamic properties);
		static ::hx::ObjectPtr< MethodActuator_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MethodActuator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MethodActuator",5a,8d,1d,99); }

		::cpp::VirtualArray currentParameters;
		 ::Dynamic tweenProperties;
		void apply();

		void complete(::hx::Null< bool >  sendEvent);

		void initialize();

		void update(Float currentTime);

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_MethodActuator */ 
