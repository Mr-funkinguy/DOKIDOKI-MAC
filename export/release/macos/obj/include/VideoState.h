#ifndef INCLUDED_VideoState
#define INCLUDED_VideoState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(VideoState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES VideoState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef VideoState_obj OBJ_;
		VideoState_obj();

	public:
		enum { _hx_ClassId = 0x6e4dda76 };

		void __construct(::String source, ::flixel::FlxState toTrans,::hx::Null< bool >  __o_autopause);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="VideoState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"VideoState"); }
		static ::hx::ObjectPtr< VideoState_obj > __new(::String source, ::flixel::FlxState toTrans,::hx::Null< bool >  __o_autopause);
		static ::hx::ObjectPtr< VideoState_obj > __alloc(::hx::Ctx *_hx_ctx,::String source, ::flixel::FlxState toTrans,::hx::Null< bool >  __o_autopause);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoState",b6,b7,8a,56); }

		::String leSource;
		 ::flixel::FlxState transClass;
		 ::flixel::text::FlxText txt;
		Float fuckingVolume;
		bool notDone;
		 ::flixel::_hx_system::FlxSound vidSound;
		bool useSound;
		Float soundMultiplier;
		Float prevSoundMultiplier;
		int videoFrames;
		::String defaultText;
		bool doShit;
		::String pauseText;
		bool autoPause;
		bool musicPaused;
		void create();

		void update(Float elapsed);

};


#endif /* INCLUDED_VideoState */ 
