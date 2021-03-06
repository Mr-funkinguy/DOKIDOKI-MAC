#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_KadeEngineData
#include <KadeEngineData.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fa146bb3dc6eaa33_8_initSave,"KadeEngineData","initSave",0xa0157798,"KadeEngineData.initSave","KadeEngineData.hx",8,0xb03595fb)

void KadeEngineData_obj::__construct() { }

Dynamic KadeEngineData_obj::__CreateEmpty() { return new KadeEngineData_obj; }

void *KadeEngineData_obj::_hx_vtable = 0;

Dynamic KadeEngineData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KadeEngineData_obj > _hx_result = new KadeEngineData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KadeEngineData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0703882b;
}

void KadeEngineData_obj::initSave(){
            	HX_STACKFRAME(&_hx_pos_fa146bb3dc6eaa33_8_initSave)
HXLINE(   9)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("language",58,80,11,7a),::hx::paccDynamic) )) {
HXLINE(  10)			::flixel::FlxG_obj::save->data->__SetField(HX_("language",58,80,11,7a),HX_("en-US",02,7f,50,70),::hx::paccDynamic);
            		}
HXLINE(  12)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekUnlocked",37,64,c4,a5),::hx::paccDynamic) )) {
HXLINE(  13)			::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),1,::hx::paccDynamic);
            		}
HXLINE(  15)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("newInput",8a,07,68,e1),::hx::paccDynamic) )) {
HXLINE(  16)			::flixel::FlxG_obj::save->data->__SetField(HX_("newInput",8a,07,68,e1),true,::hx::paccDynamic);
            		}
HXLINE(  18)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic) )) {
HXLINE(  19)			::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),false,::hx::paccDynamic);
            		}
HXLINE(  21)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic) )) {
HXLINE(  22)			::flixel::FlxG_obj::save->data->__SetField(HX_("dfjk",c3,18,67,42),false,::hx::paccDynamic);
            		}
HXLINE(  24)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic) )) {
HXLINE(  25)			::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyDisplay",09,75,5e,26),true,::hx::paccDynamic);
            		}
HXLINE(  27)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) )) {
HXLINE(  28)			::flixel::FlxG_obj::save->data->__SetField(HX_("offset",93,97,3f,60),0,::hx::paccDynamic);
            		}
HXLINE(  30)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songPosition",9e,dd,3b,8d),::hx::paccDynamic) )) {
HXLINE(  31)			::flixel::FlxG_obj::save->data->__SetField(HX_("songPosition",9e,dd,3b,8d),false,::hx::paccDynamic);
            		}
HXLINE(  33)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic) )) {
HXLINE(  34)			::flixel::FlxG_obj::save->data->__SetField(HX_("fps",e9,c7,4d,00),false,::hx::paccDynamic);
            		}
HXLINE(  36)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("changedHit",bf,5d,c0,31),::hx::paccDynamic) )) {
HXLINE(  38)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHitX",b9,a9,91,56),-1,::hx::paccDynamic);
HXLINE(  39)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHitY",ba,a9,91,56),-1,::hx::paccDynamic);
HXLINE(  40)			::flixel::FlxG_obj::save->data->__SetField(HX_("changedHit",bf,5d,c0,31),false,::hx::paccDynamic);
            		}
HXLINE(  43)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsRain",dd,e5,17,c7),::hx::paccDynamic) )) {
HXLINE(  44)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsRain",dd,e5,17,c7),false,::hx::paccDynamic);
            		}
HXLINE(  46)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic) )) {
HXLINE(  47)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),120,::hx::paccDynamic);
            		}
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (!(::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),285 ))) {
HXLINE(  49)			_hx_tmp = ::hx::IsLess( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),60 );
            		}
            		else {
HXLINE(  49)			_hx_tmp = true;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),120,::hx::paccDynamic);
            		}
HXLINE(  52)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("scrollSpeed",3a,e0,46,cb),::hx::paccDynamic) )) {
HXLINE(  53)			::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),1,::hx::paccDynamic);
            		}
HXLINE(  55)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("npsDisplay",51,08,e2,23),::hx::paccDynamic) )) {
HXLINE(  56)			::flixel::FlxG_obj::save->data->__SetField(HX_("npsDisplay",51,08,e2,23),false,::hx::paccDynamic);
            		}
HXLINE(  58)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic) )) {
HXLINE(  59)			::flixel::FlxG_obj::save->data->__SetField(HX_("frames",a6,af,85,ac),10,::hx::paccDynamic);
            		}
HXLINE(  61)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("accuracyMod",09,b2,8a,86),::hx::paccDynamic) )) {
HXLINE(  62)			::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyMod",09,b2,8a,86),1,::hx::paccDynamic);
            		}
HXLINE(  64)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("watermark",a4,af,1e,e0),::hx::paccDynamic) )) {
HXLINE(  65)			::flixel::FlxG_obj::save->data->__SetField(HX_("watermark",a4,af,1e,e0),true,::hx::paccDynamic);
            		}
HXLINE(  67)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("ghost",4f,8f,58,93),::hx::paccDynamic) )) {
HXLINE(  68)			::flixel::FlxG_obj::save->data->__SetField(HX_("ghost",4f,8f,58,93),true,::hx::paccDynamic);
            		}
HXLINE(  70)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("distractions",31,13,7d,60),::hx::paccDynamic) )) {
HXLINE(  71)			::flixel::FlxG_obj::save->data->__SetField(HX_("distractions",31,13,7d,60),true,::hx::paccDynamic);
            		}
HXLINE(  73)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE(  74)			::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),true,::hx::paccDynamic);
            		}
HXLINE(  76)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("resetButton",21,e5,f4,79),::hx::paccDynamic) )) {
HXLINE(  77)			::flixel::FlxG_obj::save->data->__SetField(HX_("resetButton",21,e5,f4,79),false,::hx::paccDynamic);
            		}
HXLINE(  79)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic) )) {
HXLINE(  80)			::flixel::FlxG_obj::save->data->__SetField(HX_("botplay",7b,fb,a9,61),false,::hx::paccDynamic);
            		}
HXLINE(  82)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gfCountdown",92,1a,b1,82),::hx::paccDynamic) )) {
HXLINE(  83)			::flixel::FlxG_obj::save->data->__SetField(HX_("gfCountdown",92,1a,b1,82),false,::hx::paccDynamic);
            		}
HXLINE(  85)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("zoom",13,a3,f8,50),::hx::paccDynamic) )) {
HXLINE(  86)			::flixel::FlxG_obj::save->data->__SetField(HX_("zoom",13,a3,f8,50),1,::hx::paccDynamic);
            		}
HXLINE(  88)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("cacheCharacters",8c,1d,70,34),::hx::paccDynamic) )) {
HXLINE(  89)			::flixel::FlxG_obj::save->data->__SetField(HX_("cacheCharacters",8c,1d,70,34),false,::hx::paccDynamic);
            		}
HXLINE(  91)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("cacheSongs",5c,9d,7f,c3),::hx::paccDynamic) )) {
HXLINE(  92)			::flixel::FlxG_obj::save->data->__SetField(HX_("cacheSongs",5c,9d,7f,c3),false,::hx::paccDynamic);
            		}
HXLINE(  94)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("cacheMusic",03,37,13,53),::hx::paccDynamic) )) {
HXLINE(  95)			::flixel::FlxG_obj::save->data->__SetField(HX_("cacheMusic",03,37,13,53),false,::hx::paccDynamic);
            		}
HXLINE(  97)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("cacheSounds",a6,d4,cf,50),::hx::paccDynamic) )) {
HXLINE(  98)			::flixel::FlxG_obj::save->data->__SetField(HX_("cacheSounds",a6,d4,cf,50),false,::hx::paccDynamic);
            		}
HXLINE( 100)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic) )) {
HXLINE( 101)			::flixel::FlxG_obj::save->data->__SetField(HX_("middleScroll",42,cd,58,62),false,::hx::paccDynamic);
            		}
HXLINE( 103)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("laneUnderlay",58,04,15,b5),::hx::paccDynamic) )) {
HXLINE( 104)			::flixel::FlxG_obj::save->data->__SetField(HX_("laneUnderlay",58,04,15,b5),false,::hx::paccDynamic);
            		}
HXLINE( 106)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic) )) {
HXLINE( 107)			::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),((Float)0.5),::hx::paccDynamic);
            		}
HXLINE( 109)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("selfAware",f2,2f,cc,62),::hx::paccDynamic) )) {
HXLINE( 110)			::flixel::FlxG_obj::save->data->__SetField(HX_("selfAware",f2,2f,cc,62),true,::hx::paccDynamic);
            		}
HXLINE( 112)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 114)		::KeyBinds_obj::gamepad = ::hx::IsNotNull( gamepad );
HXLINE( 116)		::Conductor_obj::recalculateTimings();
HXLINE( 118)		::Main_obj::watermarks = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("watermark",a4,af,1e,e0),::hx::paccDynamic)) );
HXLINE( 120)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KadeEngineData_obj,initSave,(void))


KadeEngineData_obj::KadeEngineData_obj()
{
}

bool KadeEngineData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"initSave") ) { outValue = initSave_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *KadeEngineData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *KadeEngineData_obj_sStaticStorageInfo = 0;
#endif

::hx::Class KadeEngineData_obj::__mClass;

static ::String KadeEngineData_obj_sStaticFields[] = {
	HX_("initSave",6d,ba,04,51),
	::String(null())
};

void KadeEngineData_obj::__register()
{
	KadeEngineData_obj _hx_dummy;
	KadeEngineData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KadeEngineData",a3,f4,9b,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KadeEngineData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(KadeEngineData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< KadeEngineData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KadeEngineData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KadeEngineData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

