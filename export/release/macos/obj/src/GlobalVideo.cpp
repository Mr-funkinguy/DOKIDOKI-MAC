#include <hxcpp.h>

#ifndef INCLUDED_GameDimensions
#include <GameDimensions.h>
#endif
#ifndef INCLUDED_GlobalVideo
#include <GlobalVideo.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_VideoHandler
#include <VideoHandler.h>
#endif
#ifndef INCLUDED_WebmHandler
#include <WebmHandler.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_16_setVid,"GlobalVideo","setVid",0xecb4b505,"GlobalVideo.setVid","GlobalVideo.hx",16,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_21_getVid,"GlobalVideo","getVid",0x206c6091,"GlobalVideo.getVid","GlobalVideo.hx",21,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_25_setWebm,"GlobalVideo","setWebm",0x320fdba5,"GlobalVideo.setWebm","GlobalVideo.hx",25,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_32_getWebm,"GlobalVideo","getWebm",0x3f0e4a99,"GlobalVideo.getWebm","GlobalVideo.hx",32,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_37_get,"GlobalVideo","get",0xcbc0b120,"GlobalVideo.get","GlobalVideo.hx",37,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_48_calc,"GlobalVideo","calc",0x7a3260cb,"GlobalVideo.calc","GlobalVideo.hx",48,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_9_boot,"GlobalVideo","boot",0x7993cc68,"GlobalVideo.boot","GlobalVideo.hx",9,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_10_boot,"GlobalVideo","boot",0x7993cc68,"GlobalVideo.boot","GlobalVideo.hx",10,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_11_boot,"GlobalVideo","boot",0x7993cc68,"GlobalVideo.boot","GlobalVideo.hx",11,0xce6709c6)
HX_LOCAL_STACK_FRAME(_hx_pos_6a75960c1e8a6d1e_12_boot,"GlobalVideo","boot",0x7993cc68,"GlobalVideo.boot","GlobalVideo.hx",12,0xce6709c6)

void GlobalVideo_obj::__construct() { }

Dynamic GlobalVideo_obj::__CreateEmpty() { return new GlobalVideo_obj; }

void *GlobalVideo_obj::_hx_vtable = 0;

Dynamic GlobalVideo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlobalVideo_obj > _hx_result = new GlobalVideo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlobalVideo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x040cd218;
}

 ::VideoHandler GlobalVideo_obj::video;

 ::WebmHandler GlobalVideo_obj::webm;

bool GlobalVideo_obj::isWebm;

bool GlobalVideo_obj::isAndroid;

Float GlobalVideo_obj::daAlpha1;

Float GlobalVideo_obj::daAlpha2;

void GlobalVideo_obj::setVid( ::VideoHandler vid){
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_16_setVid)
HXDLIN(  16)		::GlobalVideo_obj::video = vid;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GlobalVideo_obj,setVid,(void))

 ::VideoHandler GlobalVideo_obj::getVid(){
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_21_getVid)
HXDLIN(  21)		return ::GlobalVideo_obj::video;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GlobalVideo_obj,getVid,return )

void GlobalVideo_obj::setWebm( ::WebmHandler vid){
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_25_setWebm)
HXLINE(  26)		::GlobalVideo_obj::webm = vid;
HXLINE(  27)		::GlobalVideo_obj::isWebm = true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GlobalVideo_obj,setWebm,(void))

 ::WebmHandler GlobalVideo_obj::getWebm(){
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_32_getWebm)
HXDLIN(  32)		return ::GlobalVideo_obj::webm;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GlobalVideo_obj,getWebm,return )

 ::Dynamic GlobalVideo_obj::get(){
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_37_get)
HXDLIN(  37)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  39)			return ::GlobalVideo_obj::getWebm();
            		}
            		else {
HXLINE(  43)			return ::GlobalVideo_obj::getVid();
            		}
HXLINE(  37)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GlobalVideo_obj,get,return )

 ::Dynamic GlobalVideo_obj::calc(int ind){
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_48_calc)
HXLINE(  49)		int stageWidth = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  50)		int stageHeight = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  52)		Float width = ( (Float)(::GameDimensions_obj::width) );
HXLINE(  53)		Float height = ( (Float)(::GameDimensions_obj::height) );
HXLINE(  58)		Float ratioX = (height / width);
HXLINE(  59)		Float ratioY = (width / height);
HXLINE(  60)		Float appliedWidth = (( (Float)(stageHeight) ) * ratioY);
HXLINE(  61)		Float appliedHeight = (( (Float)(stageWidth) ) * ratioX);
HXLINE(  63)		Float remainingX = (( (Float)(stageWidth) ) - appliedWidth);
HXLINE(  64)		Float remainingY = (( (Float)(stageHeight) ) - appliedHeight);
HXLINE(  65)		remainingX = (remainingX / ( (Float)(2) ));
HXLINE(  66)		remainingY = (remainingY / ( (Float)(2) ));
HXLINE(  68)		appliedWidth = ( (Float)(::Std_obj::_hx_int(appliedWidth)) );
HXLINE(  69)		appliedHeight = ( (Float)(::Std_obj::_hx_int(appliedHeight)) );
HXLINE(  71)		if ((appliedHeight > stageHeight)) {
HXLINE(  73)			remainingY = ( (Float)(0) );
HXLINE(  74)			appliedHeight = ( (Float)(stageHeight) );
            		}
HXLINE(  77)		if ((appliedWidth > stageWidth)) {
HXLINE(  79)			remainingX = ( (Float)(0) );
HXLINE(  80)			appliedWidth = ( (Float)(stageWidth) );
            		}
HXLINE(  83)		switch((int)(ind)){
            			case (int)0: {
HXLINE(  86)				return remainingX;
            			}
            			break;
            			case (int)1: {
HXLINE(  88)				return remainingY;
            			}
            			break;
            			case (int)2: {
HXLINE(  90)				return appliedWidth;
            			}
            			break;
            			case (int)3: {
HXLINE(  92)				return appliedHeight;
            			}
            			break;
            		}
HXLINE(  95)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GlobalVideo_obj,calc,return )


GlobalVideo_obj::GlobalVideo_obj()
{
}

bool GlobalVideo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"webm") ) { outValue = ( webm ); return true; }
		if (HX_FIELD_EQ(inName,"calc") ) { outValue = calc_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { outValue = ( video ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isWebm") ) { outValue = ( isWebm ); return true; }
		if (HX_FIELD_EQ(inName,"setVid") ) { outValue = setVid_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getVid") ) { outValue = getVid_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setWebm") ) { outValue = setWebm_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWebm") ) { outValue = getWebm_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"daAlpha1") ) { outValue = ( daAlpha1 ); return true; }
		if (HX_FIELD_EQ(inName,"daAlpha2") ) { outValue = ( daAlpha2 ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isAndroid") ) { outValue = ( isAndroid ); return true; }
	}
	return false;
}

bool GlobalVideo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"webm") ) { webm=ioValue.Cast<  ::WebmHandler >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { video=ioValue.Cast<  ::VideoHandler >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isWebm") ) { isWebm=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"daAlpha1") ) { daAlpha1=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"daAlpha2") ) { daAlpha2=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isAndroid") ) { isAndroid=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GlobalVideo_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GlobalVideo_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::VideoHandler */ ,(void *) &GlobalVideo_obj::video,HX_("video",7b,14,fc,36)},
	{::hx::fsObject /*  ::WebmHandler */ ,(void *) &GlobalVideo_obj::webm,HX_("webm",59,5d,f5,4e)},
	{::hx::fsBool,(void *) &GlobalVideo_obj::isWebm,HX_("isWebm",63,22,5c,6c)},
	{::hx::fsBool,(void *) &GlobalVideo_obj::isAndroid,HX_("isAndroid",65,18,a3,a0)},
	{::hx::fsFloat,(void *) &GlobalVideo_obj::daAlpha1,HX_("daAlpha1",70,d2,26,90)},
	{::hx::fsFloat,(void *) &GlobalVideo_obj::daAlpha2,HX_("daAlpha2",71,d2,26,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GlobalVideo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlobalVideo_obj::video,"video");
	HX_MARK_MEMBER_NAME(GlobalVideo_obj::webm,"webm");
	HX_MARK_MEMBER_NAME(GlobalVideo_obj::isWebm,"isWebm");
	HX_MARK_MEMBER_NAME(GlobalVideo_obj::isAndroid,"isAndroid");
	HX_MARK_MEMBER_NAME(GlobalVideo_obj::daAlpha1,"daAlpha1");
	HX_MARK_MEMBER_NAME(GlobalVideo_obj::daAlpha2,"daAlpha2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlobalVideo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlobalVideo_obj::video,"video");
	HX_VISIT_MEMBER_NAME(GlobalVideo_obj::webm,"webm");
	HX_VISIT_MEMBER_NAME(GlobalVideo_obj::isWebm,"isWebm");
	HX_VISIT_MEMBER_NAME(GlobalVideo_obj::isAndroid,"isAndroid");
	HX_VISIT_MEMBER_NAME(GlobalVideo_obj::daAlpha1,"daAlpha1");
	HX_VISIT_MEMBER_NAME(GlobalVideo_obj::daAlpha2,"daAlpha2");
};

#endif

::hx::Class GlobalVideo_obj::__mClass;

static ::String GlobalVideo_obj_sStaticFields[] = {
	HX_("video",7b,14,fc,36),
	HX_("webm",59,5d,f5,4e),
	HX_("isWebm",63,22,5c,6c),
	HX_("isAndroid",65,18,a3,a0),
	HX_("daAlpha1",70,d2,26,90),
	HX_("daAlpha2",71,d2,26,90),
	HX_("setVid",4f,73,71,6f),
	HX_("getVid",db,1e,29,a3),
	HX_("setWebm",1b,9e,79,14),
	HX_("getWebm",0f,0d,78,21),
	HX_("get",96,80,4e,00),
	HX_("calc",95,18,ba,41),
	::String(null())
};

void GlobalVideo_obj::__register()
{
	GlobalVideo_obj _hx_dummy;
	GlobalVideo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GlobalVideo",f8,03,6d,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlobalVideo_obj::__GetStatic;
	__mClass->mSetStaticField = &GlobalVideo_obj::__SetStatic;
	__mClass->mMarkFunc = GlobalVideo_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GlobalVideo_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GlobalVideo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlobalVideo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlobalVideo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlobalVideo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GlobalVideo_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_9_boot)
HXDLIN(   9)		isWebm = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_10_boot)
HXDLIN(  10)		isAndroid = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_11_boot)
HXDLIN(  11)		daAlpha1 = ((Float)0.2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_6a75960c1e8a6d1e_12_boot)
HXDLIN(  12)		daAlpha2 = ((Float)1);
            	}
}

