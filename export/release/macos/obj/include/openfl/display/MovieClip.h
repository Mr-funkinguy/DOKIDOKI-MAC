#ifndef INCLUDED_openfl_display_MovieClip
#define INCLUDED_openfl_display_MovieClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,FrameLabel)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Scene)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Timeline)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES MovieClip_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef MovieClip_obj OBJ_;
		MovieClip_obj();

	public:
		enum { _hx_ClassId = 0x17c2d032 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.MovieClip")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.MovieClip"); }
		static ::hx::ObjectPtr< MovieClip_obj > __new();
		static ::hx::ObjectPtr< MovieClip_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MovieClip_obj();

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
		::String __ToString() const { return HX_("MovieClip",80,e2,ed,b9); }

		static  ::Dynamic _hx___constructor;
		static Dynamic _hx___constructor_dyn() { return _hx___constructor;}
		static  ::openfl::display::MovieClip fromTimeline( ::openfl::display::Timeline timeline);
		static ::Dynamic fromTimeline_dyn();

		bool _hx___enabled;
		bool _hx___hasDown;
		bool _hx___hasOver;
		bool _hx___hasUp;
		bool _hx___mouseIsDown;
		 ::openfl::display::Scene _hx___scene;
		 ::openfl::display::Timeline _hx___timeline;
		void addFrameScript(int index, ::Dynamic method);
		::Dynamic addFrameScript_dyn();

		void attachTimeline( ::openfl::display::Timeline timeline);
		::Dynamic attachTimeline_dyn();

		void gotoAndPlay( ::Dynamic frame,::String scene);
		::Dynamic gotoAndPlay_dyn();

		void gotoAndStop( ::Dynamic frame,::String scene);
		::Dynamic gotoAndStop_dyn();

		void nextFrame();
		::Dynamic nextFrame_dyn();

		void nextScene();
		::Dynamic nextScene_dyn();

		void play();
		::Dynamic play_dyn();

		void prevFrame();
		::Dynamic prevFrame_dyn();

		void prevScene();
		::Dynamic prevScene_dyn();

		void stop();
		::Dynamic stop_dyn();

		void _hx___enterFrame(int deltaTime);

		void _hx___stopAllMovieClips();

		void _hx___tabTest(::Array< ::Dynamic> stack);

		void _hx___onMouseDown( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onMouseDown_dyn();

		void _hx___onMouseUp( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onMouseUp_dyn();

		void _hx___onRollOut( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onRollOut_dyn();

		void _hx___onRollOver( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onRollOver_dyn();

		bool set_buttonMode(bool value);

		int get_currentFrame();
		::Dynamic get_currentFrame_dyn();

		::String get_currentFrameLabel();
		::Dynamic get_currentFrameLabel_dyn();

		::String get_currentLabel();
		::Dynamic get_currentLabel_dyn();

		::Array< ::Dynamic> get_currentLabels();
		::Dynamic get_currentLabels_dyn();

		 ::openfl::display::Scene get_currentScene();
		::Dynamic get_currentScene_dyn();

		bool get_enabled();
		::Dynamic get_enabled_dyn();

		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		int get_framesLoaded();
		::Dynamic get_framesLoaded_dyn();

		bool get_isPlaying();
		::Dynamic get_isPlaying_dyn();

		::Array< ::Dynamic> get_scenes();
		::Dynamic get_scenes_dyn();

		int get_totalFrames();
		::Dynamic get_totalFrames_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_MovieClip */ 
