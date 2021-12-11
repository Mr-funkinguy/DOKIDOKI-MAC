#include <hxcpp.h>

#ifndef INCLUDED_GlobalVideo
#include <GlobalVideo.h>
#endif
#ifndef INCLUDED_VideoHandler
#include <VideoHandler.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_AsyncErrorEvent
#include <openfl/events/AsyncErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_Video
#include <openfl/media/Video.h>
#endif
#ifndef INCLUDED_openfl_net_NetStream
#include <openfl/net/NetStream.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_16_new,"VideoHandler","new",0xddc18921,"VideoHandler.new","VideoHandler.hx",16,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_32_source,"VideoHandler","source",0xd5b926ba,"VideoHandler.source","VideoHandler.hx",32,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_39_init1,"VideoHandler","init1",0x1cf69e22,"VideoHandler.init1","VideoHandler.hx",39,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_46_init2,"VideoHandler","init2",0x1cf69e23,"VideoHandler.init2","VideoHandler.hx",46,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_62_client_onMetaData,"VideoHandler","client_onMetaData",0x038c7103,"VideoHandler.client_onMetaData","VideoHandler.hx",62,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_71_netStream_onAsyncError,"VideoHandler","netStream_onAsyncError",0x4d19accc,"VideoHandler.netStream_onAsyncError","VideoHandler.hx",71,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_76_netConnection_onNetStatus,"VideoHandler","netConnection_onNetStatus",0x3264b92d,"VideoHandler.netConnection_onNetStatus","VideoHandler.hx",76,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_88_play,"VideoHandler","play",0x2cee1e13,"VideoHandler.play","VideoHandler.hx",88,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_92_stop,"VideoHandler","stop",0x2eefe021,"VideoHandler.stop","VideoHandler.hx",92,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_98_restart,"VideoHandler","restart",0xdda57510,"VideoHandler.restart","VideoHandler.hx",98,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_104_update,"VideoHandler","update",0x2a8cfbe8,"VideoHandler.update","VideoHandler.hx",104,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_118_pause,"VideoHandler","pause",0x1c3601f7,"VideoHandler.pause","VideoHandler.hx",118,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_124_resume,"VideoHandler","resume",0xac0bdf8c,"VideoHandler.resume","VideoHandler.hx",124,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_131_togglePause,"VideoHandler","togglePause",0x03047083,"VideoHandler.togglePause","VideoHandler.hx",131,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_143_clearPause,"VideoHandler","clearPause",0x4da36788,"VideoHandler.clearPause","VideoHandler.hx",143,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_148_onStop,"VideoHandler","onStop",0x926d6ea0,"VideoHandler.onStop","VideoHandler.hx",148,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_156_onRestart,"VideoHandler","onRestart",0x3686bff1,"VideoHandler.onRestart","VideoHandler.hx",156,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_161_onPlay,"VideoHandler","onPlay",0x906bac92,"VideoHandler.onPlay","VideoHandler.hx",161,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_169_onEnd,"VideoHandler","onEnd",0x9142c2fd,"VideoHandler.onEnd","VideoHandler.hx",169,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_177_alpha,"VideoHandler","alpha",0x8074d25f,"VideoHandler.alpha","VideoHandler.hx",177,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_182_unalpha,"VideoHandler","unalpha",0x91274ba6,"VideoHandler.unalpha","VideoHandler.hx",182,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_187_hide,"VideoHandler","hide",0x27a224e1,"VideoHandler.hide","VideoHandler.hx",187,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_192_show,"VideoHandler","show",0x2ee6c51c,"VideoHandler.show","VideoHandler.hx",192,0x6bc1b56f)

void VideoHandler_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_16_new)
HXLINE( 115)		this->paused = false;
HXLINE( 114)		this->ended = false;
HXLINE( 113)		this->played = false;
HXLINE( 112)		this->restarted = false;
HXLINE( 111)		this->stopped = false;
HXLINE(  23)		this->ignoreShit = false;
HXLINE(  22)		this->vidPath = HX_("",00,00,00,00);
HXLINE(  21)		this->addOverlay = false;
HXLINE(  20)		this->isReady = false;
HXLINE(  27)		this->isReady = false;
            	}

Dynamic VideoHandler_obj::__CreateEmpty() { return new VideoHandler_obj; }

void *VideoHandler_obj::_hx_vtable = 0;

Dynamic VideoHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoHandler_obj > _hx_result = new VideoHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VideoHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10c5b76f;
}

void VideoHandler_obj::source(::String vPath){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_32_source)
HXDLIN(  32)		bool _hx_tmp;
HXDLIN(  32)		if (::hx::IsNotNull( vPath )) {
HXDLIN(  32)			_hx_tmp = (vPath.length > 0);
            		}
            		else {
HXDLIN(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			this->vidPath = vPath;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,source,(void))

void VideoHandler_obj::init1(){
            	HX_GC_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_39_init1)
HXLINE(  40)		this->isReady = false;
HXLINE(  41)		this->video =  ::openfl::media::Video_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  42)		this->video->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,init1,(void))

void VideoHandler_obj::init2(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_46_init2)
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,init2,(void))

void VideoHandler_obj::client_onMetaData( ::Dynamic metaData){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_62_client_onMetaData)
HXLINE(  63)		this->video->attachNetStream(this->netStream);
HXLINE(  65)		this->video->set_width(( (Float)(::flixel::FlxG_obj::width) ));
HXLINE(  66)		this->video->set_height(( (Float)(::flixel::FlxG_obj::height) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,client_onMetaData,(void))

void VideoHandler_obj::netStream_onAsyncError( ::openfl::events::AsyncErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_71_netStream_onAsyncError)
HXDLIN(  71)		::haxe::Log_obj::trace(HX_("Error loading video",5f,31,02,a0),::hx::SourceInfo(HX_("source/VideoHandler.hx",fb,98,bf,08),71,HX_("VideoHandler",af,64,e4,27),HX_("netStream_onAsyncError",ed,48,34,6a)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,netStream_onAsyncError,(void))

void VideoHandler_obj::netConnection_onNetStatus( ::openfl::events::NetStatusEvent event){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_76_netConnection_onNetStatus)
HXDLIN(  76)		::haxe::Log_obj::trace( ::Dynamic(event->info->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic)),::hx::SourceInfo(HX_("source/VideoHandler.hx",fb,98,bf,08),76,HX_("VideoHandler",af,64,e4,27),HX_("netConnection_onNetStatus",ac,a7,a3,f4)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,netConnection_onNetStatus,(void))

void VideoHandler_obj::play(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_88_play)
HXDLIN(  88)		::haxe::Log_obj::trace(this->vidPath,::hx::SourceInfo(HX_("source/VideoHandler.hx",fb,98,bf,08),88,HX_("VideoHandler",af,64,e4,27),HX_("play",f4,2d,5a,4a)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,play,(void))

void VideoHandler_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_92_stop)
HXLINE(  93)		this->netStream->close();
HXLINE(  94)		this->onStop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,stop,(void))

void VideoHandler_obj::restart(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_98_restart)
HXLINE(  99)		this->play();
HXLINE( 100)		this->onRestart();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,restart,(void))

void VideoHandler_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_104_update)
HXLINE( 105)		 ::openfl::media::Video _hx_tmp = this->video;
HXDLIN( 105)		_hx_tmp->set_x(( (Float)(::GlobalVideo_obj::calc(0)) ));
HXLINE( 106)		 ::openfl::media::Video _hx_tmp1 = this->video;
HXDLIN( 106)		_hx_tmp1->set_y(( (Float)(::GlobalVideo_obj::calc(1)) ));
HXLINE( 107)		 ::openfl::media::Video _hx_tmp2 = this->video;
HXDLIN( 107)		_hx_tmp2->set_width(( (Float)(::GlobalVideo_obj::calc(2)) ));
HXLINE( 108)		 ::openfl::media::Video _hx_tmp3 = this->video;
HXDLIN( 108)		_hx_tmp3->set_height(( (Float)(::GlobalVideo_obj::calc(3)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,update,(void))

void VideoHandler_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_118_pause)
HXLINE( 119)		this->netStream->pause();
HXLINE( 120)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,pause,(void))

void VideoHandler_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_124_resume)
HXLINE( 125)		this->netStream->resume();
HXLINE( 126)		this->paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,resume,(void))

void VideoHandler_obj::togglePause(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_131_togglePause)
HXDLIN( 131)		if (this->paused) {
HXLINE( 133)			this->resume();
            		}
            		else {
HXLINE( 137)			this->pause();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,togglePause,(void))

void VideoHandler_obj::clearPause(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_143_clearPause)
HXDLIN( 143)		this->paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,clearPause,(void))

void VideoHandler_obj::onStop(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_148_onStop)
HXDLIN( 148)		if (!(this->ignoreShit)) {
HXLINE( 150)			this->stopped = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onStop,(void))

void VideoHandler_obj::onRestart(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_156_onRestart)
HXDLIN( 156)		this->restarted = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onRestart,(void))

void VideoHandler_obj::onPlay( ::openfl::events::NetStatusEvent event){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_161_onPlay)
HXDLIN( 161)		if (::hx::IsEq( event->info->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic),HX_("NetStream.Play.Start",99,42,56,dc) )) {
HXLINE( 163)			this->played = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,onPlay,(void))

void VideoHandler_obj::onEnd( ::openfl::events::NetStatusEvent event){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_169_onEnd)
HXDLIN( 169)		if (::hx::IsEq( event->info->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic),HX_("NetStream.Play.Complete",e2,ae,0c,40) )) {
HXLINE( 171)			this->ended = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,onEnd,(void))

void VideoHandler_obj::alpha(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_177_alpha)
HXDLIN( 177)		this->video->set_alpha(::GlobalVideo_obj::daAlpha1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,alpha,(void))

void VideoHandler_obj::unalpha(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_182_unalpha)
HXDLIN( 182)		this->video->set_alpha(::GlobalVideo_obj::daAlpha2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,unalpha,(void))

void VideoHandler_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_187_hide)
HXDLIN( 187)		this->video->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,hide,(void))

void VideoHandler_obj::show(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_192_show)
HXDLIN( 192)		this->video->set_visible(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,show,(void))


::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__new() {
	::hx::ObjectPtr< VideoHandler_obj > __this = new VideoHandler_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VideoHandler_obj *__this = (VideoHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoHandler_obj), true, "VideoHandler"));
	*(void **)__this = VideoHandler_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VideoHandler_obj::VideoHandler_obj()
{
}

void VideoHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoHandler);
	HX_MARK_MEMBER_NAME(netStream,"netStream");
	HX_MARK_MEMBER_NAME(video,"video");
	HX_MARK_MEMBER_NAME(isReady,"isReady");
	HX_MARK_MEMBER_NAME(addOverlay,"addOverlay");
	HX_MARK_MEMBER_NAME(vidPath,"vidPath");
	HX_MARK_MEMBER_NAME(ignoreShit,"ignoreShit");
	HX_MARK_MEMBER_NAME(stopped,"stopped");
	HX_MARK_MEMBER_NAME(restarted,"restarted");
	HX_MARK_MEMBER_NAME(played,"played");
	HX_MARK_MEMBER_NAME(ended,"ended");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void VideoHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(netStream,"netStream");
	HX_VISIT_MEMBER_NAME(video,"video");
	HX_VISIT_MEMBER_NAME(isReady,"isReady");
	HX_VISIT_MEMBER_NAME(addOverlay,"addOverlay");
	HX_VISIT_MEMBER_NAME(vidPath,"vidPath");
	HX_VISIT_MEMBER_NAME(ignoreShit,"ignoreShit");
	HX_VISIT_MEMBER_NAME(stopped,"stopped");
	HX_VISIT_MEMBER_NAME(restarted,"restarted");
	HX_VISIT_MEMBER_NAME(played,"played");
	HX_VISIT_MEMBER_NAME(ended,"ended");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

::hx::Val VideoHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { return ::hx::Val( video ); }
		if (HX_FIELD_EQ(inName,"init1") ) { return ::hx::Val( init1_dyn() ); }
		if (HX_FIELD_EQ(inName,"init2") ) { return ::hx::Val( init2_dyn() ); }
		if (HX_FIELD_EQ(inName,"ended") ) { return ::hx::Val( ended ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return ::hx::Val( onEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"played") ) { return ::hx::Val( played ); }
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"onStop") ) { return ::hx::Val( onStop_dyn() ); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return ::hx::Val( onPlay_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return ::hx::Val( isReady ); }
		if (HX_FIELD_EQ(inName,"vidPath") ) { return ::hx::Val( vidPath ); }
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return ::hx::Val( stopped ); }
		if (HX_FIELD_EQ(inName,"unalpha") ) { return ::hx::Val( unalpha_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"netStream") ) { return ::hx::Val( netStream ); }
		if (HX_FIELD_EQ(inName,"restarted") ) { return ::hx::Val( restarted ); }
		if (HX_FIELD_EQ(inName,"onRestart") ) { return ::hx::Val( onRestart_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addOverlay") ) { return ::hx::Val( addOverlay ); }
		if (HX_FIELD_EQ(inName,"ignoreShit") ) { return ::hx::Val( ignoreShit ); }
		if (HX_FIELD_EQ(inName,"clearPause") ) { return ::hx::Val( clearPause_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"togglePause") ) { return ::hx::Val( togglePause_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"client_onMetaData") ) { return ::hx::Val( client_onMetaData_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"netStream_onAsyncError") ) { return ::hx::Val( netStream_onAsyncError_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"netConnection_onNetStatus") ) { return ::hx::Val( netConnection_onNetStatus_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { video=inValue.Cast<  ::openfl::media::Video >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ended") ) { ended=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"played") ) { played=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { isReady=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vidPath") ) { vidPath=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stopped") ) { stopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"netStream") ) { netStream=inValue.Cast<  ::openfl::net::NetStream >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restarted") ) { restarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addOverlay") ) { addOverlay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreShit") ) { ignoreShit=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("netStream",bd,7c,1d,52));
	outFields->push(HX_("video",7b,14,fc,36));
	outFields->push(HX_("isReady",19,44,40,83));
	outFields->push(HX_("addOverlay",6f,6f,9a,10));
	outFields->push(HX_("vidPath",16,b4,9a,ef));
	outFields->push(HX_("ignoreShit",f2,a5,7b,4c));
	outFields->push(HX_("stopped",0d,d2,61,43));
	outFields->push(HX_("restarted",ee,f1,82,b5));
	outFields->push(HX_("played",53,eb,b8,37));
	outFields->push(HX_("ended",fa,48,7a,70));
	outFields->push(HX_("paused",ae,40,84,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::net::NetStream */ ,(int)offsetof(VideoHandler_obj,netStream),HX_("netStream",bd,7c,1d,52)},
	{::hx::fsObject /*  ::openfl::media::Video */ ,(int)offsetof(VideoHandler_obj,video),HX_("video",7b,14,fc,36)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,isReady),HX_("isReady",19,44,40,83)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,addOverlay),HX_("addOverlay",6f,6f,9a,10)},
	{::hx::fsString,(int)offsetof(VideoHandler_obj,vidPath),HX_("vidPath",16,b4,9a,ef)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,ignoreShit),HX_("ignoreShit",f2,a5,7b,4c)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,stopped),HX_("stopped",0d,d2,61,43)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,restarted),HX_("restarted",ee,f1,82,b5)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,played),HX_("played",53,eb,b8,37)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,ended),HX_("ended",fa,48,7a,70)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,paused),HX_("paused",ae,40,84,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoHandler_obj_sMemberFields[] = {
	HX_("netStream",bd,7c,1d,52),
	HX_("video",7b,14,fc,36),
	HX_("isReady",19,44,40,83),
	HX_("addOverlay",6f,6f,9a,10),
	HX_("vidPath",16,b4,9a,ef),
	HX_("ignoreShit",f2,a5,7b,4c),
	HX_("source",db,b0,31,32),
	HX_("init1",21,73,18,be),
	HX_("init2",22,73,18,be),
	HX_("client_onMetaData",82,48,d9,34),
	HX_("netStream_onAsyncError",ed,48,34,6a),
	HX_("netConnection_onNetStatus",ac,a7,a3,f4),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("restart",cf,c7,a5,6a),
	HX_("update",09,86,05,87),
	HX_("stopped",0d,d2,61,43),
	HX_("restarted",ee,f1,82,b5),
	HX_("played",53,eb,b8,37),
	HX_("ended",fa,48,7a,70),
	HX_("paused",ae,40,84,ef),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("togglePause",c2,8e,1e,e5),
	HX_("clearPause",29,16,62,92),
	HX_("onStop",c1,f8,e5,ee),
	HX_("onRestart",70,80,50,42),
	HX_("onPlay",b3,36,e4,ec),
	HX_("onEnd",fc,97,64,32),
	HX_("alpha",5e,a7,96,21),
	HX_("unalpha",65,9e,27,1e),
	HX_("hide",c2,34,0e,45),
	HX_("show",fd,d4,52,4c),
	::String(null()) };

::hx::Class VideoHandler_obj::__mClass;

void VideoHandler_obj::__register()
{
	VideoHandler_obj _hx_dummy;
	VideoHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("VideoHandler",af,64,e4,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

