#include <hxcpp.h>

#ifndef INCLUDED_BotPlay
#include <BotPlay.h>
#endif
#ifndef INCLUDED_LangUtil
#include <LangUtil.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fc55aba1ba34c432_590_new,"BotPlay","new",0x2cacc9ed,"BotPlay.new","Options.hx",590,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fc55aba1ba34c432_596_press,"BotPlay","press",0x783c8a50,"BotPlay.press","Options.hx",596,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fc55aba1ba34c432_604_updateDisplay,"BotPlay","updateDisplay",0xe1e3db06,"BotPlay.updateDisplay","Options.hx",604,0x9d9a0240)

void BotPlay_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_fc55aba1ba34c432_590_new)
HXLINE( 591)		super::__construct();
HXLINE( 592)		this->description = desc;
            	}

Dynamic BotPlay_obj::__CreateEmpty() { return new BotPlay_obj; }

void *BotPlay_obj::_hx_vtable = 0;

Dynamic BotPlay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BotPlay_obj > _hx_result = new BotPlay_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BotPlay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x14219af3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x14219af3;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool BotPlay_obj::press(){
            	HX_STACKFRAME(&_hx_pos_fc55aba1ba34c432_596_press)
HXLINE( 597)		::flixel::FlxG_obj::save->data->__SetField(HX_("botplay",7b,fb,a9,61),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 598)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 598)		::String _hx_tmp1 = (HX_("BotPlay : ",2b,ca,ec,4b) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic))));
HXDLIN( 598)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),598,HX_("BotPlay",7b,4f,d4,19),HX_("press",83,53,88,c8)));
HXLINE( 599)		this->display = this->updateDisplay();
HXLINE( 600)		return true;
            	}


::String BotPlay_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_fc55aba1ba34c432_604_updateDisplay)
HXDLIN( 604)		::String _hx_tmp = (::LangUtil_obj::getString(HX_("cmnBotplay",57,3d,3e,f0)) + HX_(" ",20,00,00,00));
HXDLIN( 604)		::String _hx_tmp1;
HXDLIN( 604)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXDLIN( 604)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOn",c3,6c,0b,49));
            		}
            		else {
HXDLIN( 604)			_hx_tmp1 = ::LangUtil_obj::getString(HX_("cmnOff",4b,b7,f3,a0));
            		}
HXDLIN( 604)		return (_hx_tmp + _hx_tmp1);
            	}



::hx::ObjectPtr< BotPlay_obj > BotPlay_obj::__new(::String desc) {
	::hx::ObjectPtr< BotPlay_obj > __this = new BotPlay_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< BotPlay_obj > BotPlay_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	BotPlay_obj *__this = (BotPlay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BotPlay_obj), true, "BotPlay"));
	*(void **)__this = BotPlay_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

BotPlay_obj::BotPlay_obj()
{
}

::hx::Val BotPlay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *BotPlay_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BotPlay_obj_sStaticStorageInfo = 0;
#endif

static ::String BotPlay_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class BotPlay_obj::__mClass;

void BotPlay_obj::__register()
{
	BotPlay_obj _hx_dummy;
	BotPlay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BotPlay",7b,4f,d4,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BotPlay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BotPlay_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BotPlay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BotPlay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

