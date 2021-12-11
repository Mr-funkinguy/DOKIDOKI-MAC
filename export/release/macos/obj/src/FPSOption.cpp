#include <hxcpp.h>

#ifndef INCLUDED_FPSOption
#include <FPSOption.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_da44038d8b33767f_333_new,"FPSOption","new",0xd6c03010,"FPSOption.new","Options.hx",333,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_da44038d8b33767f_339_press,"FPSOption","press",0x5a8fff33,"FPSOption.press","Options.hx",339,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_da44038d8b33767f_348_updateDisplay,"FPSOption","updateDisplay",0x3edb6ae9,"FPSOption.updateDisplay","Options.hx",348,0x9d9a0240)

void FPSOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_da44038d8b33767f_333_new)
HXLINE( 334)		super::__construct();
HXLINE( 335)		this->description = desc;
            	}

Dynamic FPSOption_obj::__CreateEmpty() { return new FPSOption_obj; }

void *FPSOption_obj::_hx_vtable = 0;

Dynamic FPSOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FPSOption_obj > _hx_result = new FPSOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FPSOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x2c8e9d5e;
	}
}

bool FPSOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_da44038d8b33767f_339_press)
HXLINE( 340)		::flixel::FlxG_obj::save->data->__SetField(HX_("fps",e9,c7,4d,00),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 341)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->toggleFPS(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) ));
HXLINE( 342)		this->display = this->updateDisplay();
HXLINE( 343)		return true;
            	}


::String FPSOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_da44038d8b33767f_348_updateDisplay)
HXDLIN( 348)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optFPSCount",79,7f,18,46)) + HX_(" ",20,00,00,00));
HXDLIN( 348)		::String _hx_tmp1;
HXDLIN( 348)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fps",e9,c7,4d,00),::hx::paccDynamic)) )) {
HXDLIN( 348)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 348)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 348)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< FPSOption_obj > FPSOption_obj::__new(::String desc) {
	::hx::ObjectPtr< FPSOption_obj > __this = new FPSOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< FPSOption_obj > FPSOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	FPSOption_obj *__this = (FPSOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FPSOption_obj), true, "FPSOption"));
	*(void **)__this = FPSOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

FPSOption_obj::FPSOption_obj()
{
}

::hx::Val FPSOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *FPSOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FPSOption_obj_sStaticStorageInfo = 0;
#endif

static ::String FPSOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class FPSOption_obj::__mClass;

void FPSOption_obj::__register()
{
	FPSOption_obj _hx_dummy;
	FPSOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FPSOption",1e,28,4b,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FPSOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FPSOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPSOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPSOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

