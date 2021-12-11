#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_SongPositionOption
#include <SongPositionOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e90bf299ab00f44e_187_new,"SongPositionOption","new",0xf73dda45,"SongPositionOption.new","Options.hx",187,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_e90bf299ab00f44e_193_press,"SongPositionOption","press",0xd57460a8,"SongPositionOption.press","Options.hx",193,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_e90bf299ab00f44e_201_updateDisplay,"SongPositionOption","updateDisplay",0x1eddc95e,"SongPositionOption.updateDisplay","Options.hx",201,0x9d9a0240)

void SongPositionOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_e90bf299ab00f44e_187_new)
HXLINE( 188)		super::__construct();
HXLINE( 189)		this->description = desc;
            	}

Dynamic SongPositionOption_obj::__CreateEmpty() { return new SongPositionOption_obj; }

void *SongPositionOption_obj::_hx_vtable = 0;

Dynamic SongPositionOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SongPositionOption_obj > _hx_result = new SongPositionOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SongPositionOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x2f8840f7;
	}
}

bool SongPositionOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_e90bf299ab00f44e_193_press)
HXLINE( 194)		::flixel::FlxG_obj::save->data->__SetField(HX_("songPosition",9e,dd,3b,8d),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("songPosition",9e,dd,3b,8d),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 195)		this->display = this->updateDisplay();
HXLINE( 196)		return true;
            	}


::String SongPositionOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_e90bf299ab00f44e_201_updateDisplay)
HXDLIN( 201)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optPosition",fc,e3,14,3b)) + HX_(" ",20,00,00,00));
HXDLIN( 201)		::String _hx_tmp1;
HXDLIN( 201)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("songPosition",9e,dd,3b,8d),::hx::paccDynamic)) )) {
HXDLIN( 201)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 201)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 201)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< SongPositionOption_obj > SongPositionOption_obj::__new(::String desc) {
	::hx::ObjectPtr< SongPositionOption_obj > __this = new SongPositionOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< SongPositionOption_obj > SongPositionOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	SongPositionOption_obj *__this = (SongPositionOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SongPositionOption_obj), true, "SongPositionOption"));
	*(void **)__this = SongPositionOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

SongPositionOption_obj::SongPositionOption_obj()
{
}

::hx::Val SongPositionOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *SongPositionOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SongPositionOption_obj_sStaticStorageInfo = 0;
#endif

static ::String SongPositionOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class SongPositionOption_obj::__mClass;

void SongPositionOption_obj::__register()
{
	SongPositionOption_obj _hx_dummy;
	SongPositionOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SongPositionOption",d3,53,d0,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SongPositionOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SongPositionOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SongPositionOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SongPositionOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

