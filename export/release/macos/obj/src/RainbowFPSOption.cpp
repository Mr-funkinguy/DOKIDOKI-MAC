#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_RainbowFPSOption
#include <RainbowFPSOption.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7861c1e414cf422e_458_new,"RainbowFPSOption","new",0xb4ce913a,"RainbowFPSOption.new","Options.hx",458,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7861c1e414cf422e_464_press,"RainbowFPSOption","press",0xa1d87edd,"RainbowFPSOption.press","Options.hx",464,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7861c1e414cf422e_473_updateDisplay,"RainbowFPSOption","updateDisplay",0xe58aa493,"RainbowFPSOption.updateDisplay","Options.hx",473,0x9d9a0240)

void RainbowFPSOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_7861c1e414cf422e_458_new)
HXLINE( 459)		super::__construct();
HXLINE( 460)		this->description = desc;
            	}

Dynamic RainbowFPSOption_obj::__CreateEmpty() { return new RainbowFPSOption_obj; }

void *RainbowFPSOption_obj::_hx_vtable = 0;

Dynamic RainbowFPSOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RainbowFPSOption_obj > _hx_result = new RainbowFPSOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RainbowFPSOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x7b2bfcf0;
	}
}

bool RainbowFPSOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_7861c1e414cf422e_464_press)
HXLINE( 465)		::flixel::FlxG_obj::save->data->__SetField(HX_("fpsRain",dd,e5,17,c7),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsRain",dd,e5,17,c7),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 466)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->changeFPSColor(-1);
HXLINE( 467)		this->display = this->updateDisplay();
HXLINE( 468)		return true;
            	}


::String RainbowFPSOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_7861c1e414cf422e_473_updateDisplay)
HXDLIN( 473)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optFPSRainbow",60,ba,b8,4a)) + HX_(" ",20,00,00,00));
HXDLIN( 473)		::String _hx_tmp1;
HXDLIN( 473)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsRain",dd,e5,17,c7),::hx::paccDynamic)) )) {
HXDLIN( 473)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 473)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 473)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< RainbowFPSOption_obj > RainbowFPSOption_obj::__new(::String desc) {
	::hx::ObjectPtr< RainbowFPSOption_obj > __this = new RainbowFPSOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< RainbowFPSOption_obj > RainbowFPSOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	RainbowFPSOption_obj *__this = (RainbowFPSOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RainbowFPSOption_obj), true, "RainbowFPSOption"));
	*(void **)__this = RainbowFPSOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

RainbowFPSOption_obj::RainbowFPSOption_obj()
{
}

::hx::Val RainbowFPSOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RainbowFPSOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *RainbowFPSOption_obj_sStaticStorageInfo = 0;
#endif

static ::String RainbowFPSOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class RainbowFPSOption_obj::__mClass;

void RainbowFPSOption_obj::__register()
{
	RainbowFPSOption_obj _hx_dummy;
	RainbowFPSOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("RainbowFPSOption",48,2c,33,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RainbowFPSOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RainbowFPSOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RainbowFPSOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RainbowFPSOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
