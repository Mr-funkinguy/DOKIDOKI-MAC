#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_MenuItem
#include <MenuItem.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a2a86a23843e0eb5_10_new,"MenuItem","new",0x11397064,"MenuItem.new","MenuItem.hx",10,0x14bda78c)
HX_LOCAL_STACK_FRAME(_hx_pos_a2a86a23843e0eb5_27_startFlashing,"MenuItem","startFlashing",0xa64b34b8,"MenuItem.startFlashing","MenuItem.hx",27,0x14bda78c)
HX_LOCAL_STACK_FRAME(_hx_pos_a2a86a23843e0eb5_37_update,"MenuItem","update",0x1808c085,"MenuItem.update","MenuItem.hx",37,0x14bda78c)

void MenuItem_obj::__construct(Float x,Float y,::hx::Null< int >  __o_weekNum){
            		int weekNum = __o_weekNum.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_a2a86a23843e0eb5_10_new)
HXLINE(  34)		this->fakeFramerate = ::Math_obj::round(((( (Float)(1) ) / ::flixel::FlxG_obj::elapsed) / ( (Float)(10) )));
HXLINE(  23)		this->isFlashing = false;
HXLINE(  14)		this->flashingInt = 0;
HXLINE(  12)		this->targetY = ((Float)0);
HXLINE(  18)		super::__construct(x,y,null());
HXLINE(  19)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  19)		::String key = (HX_("storymenu/week",0f,e3,c9,3d) + weekNum);
HXDLIN(  19)		::String library = null();
HXDLIN(  19)		this->week = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  20)		this->add(this->week);
            	}

Dynamic MenuItem_obj::__CreateEmpty() { return new MenuItem_obj; }

void *MenuItem_obj::_hx_vtable = 0;

Dynamic MenuItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItem_obj > _hx_result = new MenuItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MenuItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2f356bfa) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x2f356bfa;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MenuItem_obj::startFlashing(){
            	HX_STACKFRAME(&_hx_pos_a2a86a23843e0eb5_27_startFlashing)
HXDLIN(  27)		this->isFlashing = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,startFlashing,(void))

void MenuItem_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a2a86a23843e0eb5_37_update)
HXLINE(  38)		this->super::update(elapsed);
HXLINE(  39)		Float a = this->y;
HXDLIN(  39)		this->set_y((a + ((((Float)0.17) * (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ))) * (((this->targetY * ( (Float)(120) )) + 480) - a))));
HXLINE(  41)		if (this->isFlashing) {
HXLINE(  42)			 ::MenuItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  42)			_hx_tmp->flashingInt = (_hx_tmp->flashingInt + 1);
            		}
HXLINE(  44)		if ((::hx::Mod(this->flashingInt,this->fakeFramerate) >= ::Math_obj::floor((( (Float)(this->fakeFramerate) ) / ( (Float)(2) ))))) {
HXLINE(  45)			this->week->set_color(-13369345);
            		}
            		else {
HXLINE(  46)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
HXLINE(  47)				this->week->set_color(-1);
            			}
            		}
            	}



::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new(Float x,Float y,::hx::Null< int >  __o_weekNum) {
	::hx::ObjectPtr< MenuItem_obj > __this = new MenuItem_obj();
	__this->__construct(x,y,__o_weekNum);
	return __this;
}

::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::hx::Null< int >  __o_weekNum) {
	MenuItem_obj *__this = (MenuItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItem_obj), true, "MenuItem"));
	*(void **)__this = MenuItem_obj::_hx_vtable;
	__this->__construct(x,y,__o_weekNum);
	return __this;
}

MenuItem_obj::MenuItem_obj()
{
}

void MenuItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuItem);
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(week,"week");
	HX_MARK_MEMBER_NAME(flashingInt,"flashingInt");
	HX_MARK_MEMBER_NAME(isFlashing,"isFlashing");
	HX_MARK_MEMBER_NAME(fakeFramerate,"fakeFramerate");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(week,"week");
	HX_VISIT_MEMBER_NAME(flashingInt,"flashingInt");
	HX_VISIT_MEMBER_NAME(isFlashing,"isFlashing");
	HX_VISIT_MEMBER_NAME(fakeFramerate,"fakeFramerate");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { return ::hx::Val( week ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFlashing") ) { return ::hx::Val( isFlashing ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashingInt") ) { return ::hx::Val( flashingInt ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startFlashing") ) { return ::hx::Val( startFlashing_dyn() ); }
		if (HX_FIELD_EQ(inName,"fakeFramerate") ) { return ::hx::Val( fakeFramerate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { week=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFlashing") ) { isFlashing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashingInt") ) { flashingInt=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fakeFramerate") ) { fakeFramerate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("week",f4,5f,f5,4e));
	outFields->push(HX_("flashingInt",dd,0a,bd,91));
	outFields->push(HX_("isFlashing",3c,97,97,14));
	outFields->push(HX_("fakeFramerate",38,6f,b1,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuItem_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MenuItem_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MenuItem_obj,week),HX_("week",f4,5f,f5,4e)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,flashingInt),HX_("flashingInt",dd,0a,bd,91)},
	{::hx::fsBool,(int)offsetof(MenuItem_obj,isFlashing),HX_("isFlashing",3c,97,97,14)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,fakeFramerate),HX_("fakeFramerate",38,6f,b1,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItem_obj_sMemberFields[] = {
	HX_("targetY",e8,f3,67,88),
	HX_("week",f4,5f,f5,4e),
	HX_("flashingInt",dd,0a,bd,91),
	HX_("isFlashing",3c,97,97,14),
	HX_("startFlashing",b4,e7,a3,9e),
	HX_("fakeFramerate",38,6f,b1,5e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	MenuItem_obj _hx_dummy;
	MenuItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuItem",72,ae,e0,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

