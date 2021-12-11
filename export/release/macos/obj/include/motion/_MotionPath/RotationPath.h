#ifndef INCLUDED_motion__MotionPath_RotationPath
#define INCLUDED_motion__MotionPath_RotationPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
HX_DECLARE_CLASS1(motion,IComponentPath)
HX_DECLARE_CLASS2(motion,_MotionPath,ComponentPath)
HX_DECLARE_CLASS2(motion,_MotionPath,RotationPath)

namespace motion{
namespace _MotionPath{


class HXCPP_CLASS_ATTRIBUTES RotationPath_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RotationPath_obj OBJ_;
		RotationPath_obj();

	public:
		enum { _hx_ClassId = 0x25b496df };

		void __construct( ::motion::_MotionPath::ComponentPath x, ::motion::_MotionPath::ComponentPath y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion._MotionPath.RotationPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion._MotionPath.RotationPath"); }
		static ::hx::ObjectPtr< RotationPath_obj > __new( ::motion::_MotionPath::ComponentPath x, ::motion::_MotionPath::ComponentPath y);
		static ::hx::ObjectPtr< RotationPath_obj > __alloc(::hx::Ctx *_hx_ctx, ::motion::_MotionPath::ComponentPath x, ::motion::_MotionPath::ComponentPath y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RotationPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("RotationPath",23,12,fe,e4); }

		Float offset;
		Float strength;
		Float _start;
		Float step;
		 ::motion::_MotionPath::ComponentPath _x;
		 ::motion::_MotionPath::ComponentPath _y;
		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float get_start();
		::Dynamic get_start_dyn();

		Float set_start(Float value);
		::Dynamic set_start_dyn();

		Float get_end();
		::Dynamic get_end_dyn();

};

} // end namespace motion
} // end namespace _MotionPath

#endif /* INCLUDED_motion__MotionPath_RotationPath */ 
