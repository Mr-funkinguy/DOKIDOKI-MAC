#ifndef INCLUDED_motion_actuators_GenericActuator
#define INCLUDED_motion_actuators_GenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES GenericActuator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GenericActuator_obj OBJ_;
		GenericActuator_obj();

	public:
		enum { _hx_ClassId = 0x172f0ab4 };

		void __construct( ::Dynamic target,Float duration, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion.actuators.GenericActuator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion.actuators.GenericActuator"); }
		static ::hx::ObjectPtr< GenericActuator_obj > __new( ::Dynamic target,Float duration, ::Dynamic properties);
		static ::hx::ObjectPtr< GenericActuator_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GenericActuator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::Dynamic onResume_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic onPause_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic snapping_881a854a( ::Dynamic value);

		::Dynamic smartRotation_881a854a( ::Dynamic value);

		::Dynamic reverse_881a854a( ::Dynamic value);

		::Dynamic repeat_881a854a( ::Dynamic times);

		::Dynamic reflect_881a854a( ::Dynamic value);

		::Dynamic onUpdate_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic onRepeat_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic onComplete_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic ease_02a46974(::Dynamic easing);

		::Dynamic delay_145ae511(Float duration);

		::Dynamic autoVisible_881a854a( ::Dynamic value);
		::String __ToString() const { return HX_("GenericActuator",50,a2,b3,78); }

		Float duration;
		::String id;
		 ::Dynamic properties;
		 ::Dynamic target;
		bool _autoVisible;
		Float _delay;
		::Dynamic _ease;
		 ::Dynamic _onComplete;
		::cpp::VirtualArray _onCompleteParams;
		 ::Dynamic _onRepeat;
		::cpp::VirtualArray _onRepeatParams;
		 ::Dynamic _onUpdate;
		::cpp::VirtualArray _onUpdateParams;
		 ::Dynamic _onResume;
		::cpp::VirtualArray _onResumeParams;
		 ::Dynamic _onPause;
		::cpp::VirtualArray _onPauseParams;
		bool _reflect;
		int _repeat;
		bool _reverse;
		bool _smartRotation;
		bool _snapping;
		bool special;
		virtual void apply();
		::Dynamic apply_dyn();

		virtual  ::motion::actuators::GenericActuator autoVisible( ::Dynamic value);
		::Dynamic autoVisible_dyn();

		 ::Dynamic callMethod( ::Dynamic method,::cpp::VirtualArray params);
		::Dynamic callMethod_dyn();

		void change();
		::Dynamic change_dyn();

		virtual void complete(::hx::Null< bool >  sendEvent);
		::Dynamic complete_dyn();

		virtual  ::motion::actuators::GenericActuator delay(Float duration);
		::Dynamic delay_dyn();

		 ::motion::actuators::GenericActuator ease(::Dynamic easing);
		::Dynamic ease_dyn();

		virtual void move();
		::Dynamic move_dyn();

		 ::motion::actuators::GenericActuator onComplete( ::Dynamic handler,::cpp::VirtualArray parameters);
		::Dynamic onComplete_dyn();

		 ::motion::actuators::GenericActuator onRepeat( ::Dynamic handler,::cpp::VirtualArray parameters);
		::Dynamic onRepeat_dyn();

		virtual  ::motion::actuators::GenericActuator onUpdate( ::Dynamic handler,::cpp::VirtualArray parameters);
		::Dynamic onUpdate_dyn();

		 ::motion::actuators::GenericActuator onPause( ::Dynamic handler,::cpp::VirtualArray parameters);
		::Dynamic onPause_dyn();

		 ::motion::actuators::GenericActuator onResume( ::Dynamic handler,::cpp::VirtualArray parameters);
		::Dynamic onResume_dyn();

		virtual void pause();
		::Dynamic pause_dyn();

		 ::motion::actuators::GenericActuator reflect( ::Dynamic value);
		::Dynamic reflect_dyn();

		 ::motion::actuators::GenericActuator repeat( ::Dynamic times);
		::Dynamic repeat_dyn();

		virtual void resume();
		::Dynamic resume_dyn();

		 ::motion::actuators::GenericActuator reverse( ::Dynamic value);
		::Dynamic reverse_dyn();

		 ::motion::actuators::GenericActuator smartRotation( ::Dynamic value);
		::Dynamic smartRotation_dyn();

		 ::motion::actuators::GenericActuator snapping( ::Dynamic value);
		::Dynamic snapping_dyn();

		virtual void stop( ::Dynamic properties,bool complete,bool sendEvent);
		::Dynamic stop_dyn();

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_GenericActuator */ 
