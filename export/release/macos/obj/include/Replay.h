#ifndef INCLUDED_Replay
#define INCLUDED_Replay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Replay)



class HXCPP_CLASS_ATTRIBUTES Replay_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Replay_obj OBJ_;
		Replay_obj();

	public:
		enum { _hx_ClassId = 0x02ae226b };

		void __construct(::String path);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Replay")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Replay"); }
		static ::hx::ObjectPtr< Replay_obj > __new(::String path);
		static ::hx::ObjectPtr< Replay_obj > __alloc(::hx::Ctx *_hx_ctx,::String path);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Replay_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Replay",47,5b,16,3b); }

		static void __boot();
		static ::String version;
		static  ::Replay LoadReplay(::String path);
		static ::Dynamic LoadReplay_dyn();

		::String path;
		 ::Dynamic replay;
		void SaveReplay(::Array< Float > notearray);
		::Dynamic SaveReplay_dyn();

		void LoadFromJSON();
		::Dynamic LoadFromJSON_dyn();

};


#endif /* INCLUDED_Replay */ 
