#ifndef INCLUDED_motion__MotionPath_ComponentPath
#define INCLUDED_motion__MotionPath_ComponentPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
HX_DECLARE_CLASS1(motion,IComponentPath)
HX_DECLARE_CLASS2(motion,_MotionPath,ComponentPath)

namespace motion{
namespace _MotionPath{


class HXCPP_CLASS_ATTRIBUTES ComponentPath_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ComponentPath_obj OBJ_;
		ComponentPath_obj();

	public:
		enum { _hx_ClassId = 0x16146fde };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion._MotionPath.ComponentPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion._MotionPath.ComponentPath"); }
		static ::hx::ObjectPtr< ComponentPath_obj > __new();
		static ::hx::ObjectPtr< ComponentPath_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ComponentPath",e2,f4,e2,2f); }

		Float strength;
		::Array< ::Dynamic> paths;
		void addPath(::Dynamic path);
		::Dynamic addPath_dyn();

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float get_start();
		::Dynamic get_start_dyn();

		virtual Float set_start(Float value);
		::Dynamic set_start_dyn();

		virtual Float get_end();
		::Dynamic get_end_dyn();

};

} // end namespace motion
} // end namespace _MotionPath

#endif /* INCLUDED_motion__MotionPath_ComponentPath */ 
