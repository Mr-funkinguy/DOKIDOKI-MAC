#include <hxcpp.h>

#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_ResetButtonOption
#include <ResetButtonOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0bd54ba2a6db792a_229_new,"ResetButtonOption","new",0xc052ff48,"ResetButtonOption.new","Options.hx",229,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0bd54ba2a6db792a_235_press,"ResetButtonOption","press",0xe9df0c6b,"ResetButtonOption.press","Options.hx",235,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0bd54ba2a6db792a_243_updateDisplay,"ResetButtonOption","updateDisplay",0x9c4e7021,"ResetButtonOption.updateDisplay","Options.hx",243,0x9d9a0240)

void ResetButtonOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_0bd54ba2a6db792a_229_new)
HXLINE( 230)		super::__construct();
HXLINE( 231)		this->description = desc;
            	}

Dynamic ResetButtonOption_obj::__CreateEmpty() { return new ResetButtonOption_obj; }

void *ResetButtonOption_obj::_hx_vtable = 0;

Dynamic ResetButtonOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResetButtonOption_obj > _hx_result = new ResetButtonOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResetButtonOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x7f83a466;
	}
}

bool ResetButtonOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_0bd54ba2a6db792a_235_press)
HXLINE( 236)		::flixel::FlxG_obj::save->data->__SetField(HX_("resetButton",21,e5,f4,79),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("resetButton",21,e5,f4,79),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 237)		this->display = this->updateDisplay();
HXLINE( 238)		return true;
            	}


::String ResetButtonOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_0bd54ba2a6db792a_243_updateDisplay)
HXDLIN( 243)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("optReset",9c,04,9f,d9)) + HX_(" ",20,00,00,00));
HXDLIN( 243)		::String _hx_tmp1;
HXDLIN( 243)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("resetButton",21,e5,f4,79),::hx::paccDynamic)) )) {
HXDLIN( 243)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 243)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 243)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< ResetButtonOption_obj > ResetButtonOption_obj::__new(::String desc) {
	::hx::ObjectPtr< ResetButtonOption_obj > __this = new ResetButtonOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< ResetButtonOption_obj > ResetButtonOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	ResetButtonOption_obj *__this = (ResetButtonOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResetButtonOption_obj), true, "ResetButtonOption"));
	*(void **)__this = ResetButtonOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

ResetButtonOption_obj::ResetButtonOption_obj()
{
}

::hx::Val ResetButtonOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ResetButtonOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ResetButtonOption_obj_sStaticStorageInfo = 0;
#endif

static ::String ResetButtonOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class ResetButtonOption_obj::__mClass;

void ResetButtonOption_obj::__register()
{
	ResetButtonOption_obj _hx_dummy;
	ResetButtonOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ResetButtonOption",56,fb,07,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResetButtonOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResetButtonOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResetButtonOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResetButtonOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

