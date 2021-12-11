#ifndef INCLUDED_LoadReplayState
#define INCLUDED_LoadReplayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(LoadReplayState)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(SongMetadata)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES LoadReplayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef LoadReplayState_obj OBJ_;
		LoadReplayState_obj();

	public:
		enum { _hx_ClassId = 0x56472204 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LoadReplayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LoadReplayState"); }
		static ::hx::ObjectPtr< LoadReplayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< LoadReplayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LoadReplayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LoadReplayState",c4,3c,20,8a); }

		 ::flixel::text::FlxText selector;
		int curSelected;
		::Array< ::Dynamic> songs;
		::Array< ::String > controlsStrings;
		::Array< ::String > actualNames;
		 ::flixel::group::FlxTypedGroup grpControls;
		 ::flixel::text::FlxText versionShit;
		 ::flixel::text::FlxText poggerDetails;
		void create();

		int getWeekNumbFromSong(::String songName);
		::Dynamic getWeekNumbFromSong_dyn();

		void addSong(::String songName,int weekNum,::String songCharacter);
		::Dynamic addSong_dyn();

		void addWeek(::Array< ::String > songs,int weekNum,::Array< ::String > songCharacters);
		::Dynamic addWeek_dyn();

		void update(Float elapsed);

		bool isSettingControl;
		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

};


#endif /* INCLUDED_LoadReplayState */ 
