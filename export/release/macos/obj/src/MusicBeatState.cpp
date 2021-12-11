#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_495f89d9d0902be3_13_new,"MusicBeatState","new",0xdae47368,"MusicBeatState.new","MusicBeatState.hx",13,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_23_get_controls,"MusicBeatState","get_controls",0xacecf677,"MusicBeatState.get_controls","MusicBeatState.hx",23,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_26_create,"MusicBeatState","create",0x5e9058f4,"MusicBeatState.create","MusicBeatState.hx",26,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_48_update,"MusicBeatState","update",0x69867801,"MusicBeatState.update","MusicBeatState.hx",48,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_76_updateBeat,"MusicBeatState","updateBeat",0x79761a17,"MusicBeatState.updateBeat","MusicBeatState.hx",76,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_84_updateCurStep,"MusicBeatState","updateCurStep",0xd6ad7aeb,"MusicBeatState.updateCurStep","MusicBeatState.hx",84,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_101_stepHit,"MusicBeatState","stepHit",0xcf94756f,"MusicBeatState.stepHit","MusicBeatState.hx",101,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_106_beatHit,"MusicBeatState","beatHit",0xc257b185,"MusicBeatState.beatHit","MusicBeatState.hx",106,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_81_boot,"MusicBeatState","boot",0xa519882a,"MusicBeatState.boot","MusicBeatState.hx",81,0xa1b2f108)

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_13_new)
HXLINE(  45)		this->skippedFrames = 0;
HXLINE(  36)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  36)		{
HXLINE(  36)			color = (color & -16711681);
HXDLIN(  36)			color = (color | 9699328);
            		}
HXDLIN(  36)		{
HXLINE(  36)			color = (color & -65281);
HXDLIN(  36)			color = (color | 0);
            		}
HXDLIN(  36)		{
HXLINE(  36)			color = (color & -256);
HXDLIN(  36)			color = (color | 211);
            		}
HXDLIN(  36)		{
HXLINE(  36)			color = (color & 16777215);
HXDLIN(  36)			color = (color | -16777216);
            		}
HXLINE(  37)		int color1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  37)		{
HXLINE(  37)			color1 = (color1 & -16711681);
HXDLIN(  37)			color1 = (color1 | 4915200);
            		}
HXDLIN(  37)		{
HXLINE(  37)			color1 = (color1 & -65281);
HXDLIN(  37)			color1 = (color1 | 0);
            		}
HXDLIN(  37)		{
HXLINE(  37)			color1 = (color1 & -256);
HXDLIN(  37)			color1 = (color1 | 130);
            		}
HXDLIN(  37)		{
HXLINE(  37)			color1 = (color1 & 16777215);
HXDLIN(  37)			color1 = (color1 | -16777216);
            		}
HXLINE(  38)		int color2 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  38)		{
HXLINE(  38)			color2 = (color2 & -16711681);
HXDLIN(  38)			color2 = (color2 | 0);
            		}
HXDLIN(  38)		{
HXLINE(  38)			color2 = (color2 & -65281);
HXDLIN(  38)			color2 = (color2 | 0);
            		}
HXDLIN(  38)		{
HXLINE(  38)			color2 = (color2 & -256);
HXDLIN(  38)			color2 = (color2 | 255);
            		}
HXDLIN(  38)		{
HXLINE(  38)			color2 = (color2 & 16777215);
HXDLIN(  38)			color2 = (color2 | -16777216);
            		}
HXLINE(  39)		int color3 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  39)		{
HXLINE(  39)			color3 = (color3 & -16711681);
HXDLIN(  39)			color3 = (color3 | 0);
            		}
HXDLIN(  39)		{
HXLINE(  39)			color3 = (color3 & -65281);
HXDLIN(  39)			color3 = (color3 | 65280);
            		}
HXDLIN(  39)		{
HXLINE(  39)			color3 = (color3 & -256);
HXDLIN(  39)			color3 = (color3 | 0);
            		}
HXDLIN(  39)		{
HXLINE(  39)			color3 = (color3 & 16777215);
HXDLIN(  39)			color3 = (color3 | -16777216);
            		}
HXLINE(  40)		int color4 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  40)		{
HXLINE(  40)			color4 = (color4 & -16711681);
HXDLIN(  40)			color4 = (color4 | 16711680);
            		}
HXDLIN(  40)		{
HXLINE(  40)			color4 = (color4 & -65281);
HXDLIN(  40)			color4 = (color4 | 65280);
            		}
HXDLIN(  40)		{
HXLINE(  40)			color4 = (color4 & -256);
HXDLIN(  40)			color4 = (color4 | 0);
            		}
HXDLIN(  40)		{
HXLINE(  40)			color4 = (color4 & 16777215);
HXDLIN(  40)			color4 = (color4 | -16777216);
            		}
HXLINE(  41)		int color5 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  41)		{
HXLINE(  41)			color5 = (color5 & -16711681);
HXDLIN(  41)			color5 = (color5 | 16711680);
            		}
HXDLIN(  41)		{
HXLINE(  41)			color5 = (color5 & -65281);
HXDLIN(  41)			color5 = (color5 | 32512);
            		}
HXDLIN(  41)		{
HXLINE(  41)			color5 = (color5 & -256);
HXDLIN(  41)			color5 = (color5 | 0);
            		}
HXDLIN(  41)		{
HXLINE(  41)			color5 = (color5 & 16777215);
HXDLIN(  41)			color5 = (color5 | -16777216);
            		}
HXLINE(  42)		int color6 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  42)		{
HXLINE(  42)			color6 = (color6 & -16711681);
HXDLIN(  42)			color6 = (color6 | 16711680);
            		}
HXDLIN(  42)		{
HXLINE(  42)			color6 = (color6 & -65281);
HXDLIN(  42)			color6 = (color6 | 0);
            		}
HXDLIN(  42)		{
HXLINE(  42)			color6 = (color6 & -256);
HXDLIN(  42)			color6 = (color6 | 0);
            		}
HXDLIN(  42)		{
HXLINE(  42)			color6 = (color6 & 16777215);
HXDLIN(  42)			color6 = (color6 | -16777216);
            		}
HXLINE(  35)		this->array = ::Array_obj< int >::__new(7)->init(0,color)->init(1,color1)->init(2,color2)->init(3,color3)->init(4,color4)->init(5,color5)->init(6,color6);
HXLINE(  19)		this->curBeat = 0;
HXLINE(  18)		this->curStep = 0;
HXLINE(  16)		this->lastStep = ((Float)0);
HXLINE(  15)		this->lastBeat = ((Float)0);
HXLINE(  13)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_23_get_controls)
HXDLIN(  23)		return ::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_26_create)
HXLINE(  27)		::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ));
HXLINE(  29)		if (::hx::IsNotNull( this->transIn )) {
HXLINE(  30)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  30)			::String _hx_tmp1 = (HX_("reg ",4c,50,a7,4b) + ::Std_obj::string(this->transIn->region));
HXDLIN(  30)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/MusicBeatState.hx",94,cf,99,e4),30,HX_("MusicBeatState",76,df,84,5d),HX_("create",fc,66,0f,7c)));
            		}
HXLINE(  32)		this->super::create();
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_48_update)
HXLINE(  50)		int oldStep = this->curStep;
HXLINE(  52)		this->updateCurStep();
HXLINE(  53)		this->updateBeat();
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		if ((oldStep != this->curStep)) {
HXLINE(  55)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  55)			_hx_tmp = false;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  56)			this->stepHit();
            		}
HXLINE(  58)		bool _hx_tmp1;
HXDLIN(  58)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsRain",dd,e5,17,c7),::hx::paccDynamic)) )) {
HXLINE(  58)			_hx_tmp1 = (this->skippedFrames >= 6);
            		}
            		else {
HXLINE(  58)			_hx_tmp1 = false;
            		}
HXDLIN(  58)		if (_hx_tmp1) {
HXLINE(  60)			if ((::MusicBeatState_obj::currentColor >= this->array->length)) {
HXLINE(  61)				::MusicBeatState_obj::currentColor = 0;
            			}
HXLINE(  62)			 ::Main _hx_tmp = ::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0));
HXDLIN(  62)			_hx_tmp->changeFPSColor(this->array->__get(::MusicBeatState_obj::currentColor));
HXLINE(  63)			::MusicBeatState_obj::currentColor++;
HXLINE(  64)			this->skippedFrames = 0;
            		}
            		else {
HXLINE(  67)			this->skippedFrames++;
            		}
HXLINE(  69)		bool _hx_tmp2;
HXDLIN(  69)		if (::hx::IsNotEq( ::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->getFPSCap_dyn(),::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic) )) {
HXLINE(  69)			_hx_tmp2 = ::hx::IsLessEq( ::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic),290 );
            		}
            		else {
HXLINE(  69)			_hx_tmp2 = false;
            		}
HXDLIN(  69)		if (_hx_tmp2) {
HXLINE(  70)			::hx::TCast<  ::Main >::cast(::openfl::Lib_obj::get_current()->getChildAt(0))->setFPSCap(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ));
            		}
HXLINE(  72)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_76_updateBeat)
HXLINE(  77)		this->lastBeat = ( (Float)(this->curStep) );
HXLINE(  78)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_84_updateCurStep)
HXLINE(  85)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  90)		{
HXLINE(  90)			int _g = 0;
HXDLIN(  90)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN(  90)			while((_g < _g1)){
HXLINE(  90)				_g = (_g + 1);
HXDLIN(  90)				int i = (_g - 1);
HXLINE(  92)				if (::hx::IsGreaterEq( ::Conductor_obj::songPosition,::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  93)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  96)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(((::Conductor_obj::songPosition - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_101_stepHit)
HXDLIN( 101)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 102)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_106_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))

int MusicBeatState_obj::currentColor;


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

void MusicBeatState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MusicBeatState);
	HX_MARK_MEMBER_NAME(lastBeat,"lastBeat");
	HX_MARK_MEMBER_NAME(lastStep,"lastStep");
	HX_MARK_MEMBER_NAME(curStep,"curStep");
	HX_MARK_MEMBER_NAME(curBeat,"curBeat");
	HX_MARK_MEMBER_NAME(array,"array");
	HX_MARK_MEMBER_NAME(skippedFrames,"skippedFrames");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MusicBeatState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastBeat,"lastBeat");
	HX_VISIT_MEMBER_NAME(lastStep,"lastStep");
	HX_VISIT_MEMBER_NAME(curStep,"curStep");
	HX_VISIT_MEMBER_NAME(curBeat,"curBeat");
	HX_VISIT_MEMBER_NAME(array,"array");
	HX_VISIT_MEMBER_NAME(skippedFrames,"skippedFrames");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { return ::hx::Val( array ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skippedFrames") ) { return ::hx::Val( skippedFrames ); }
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MusicBeatState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentColor") ) { outValue = ( currentColor ); return true; }
	}
	return false;
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { array=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skippedFrames") ) { skippedFrames=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MusicBeatState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentColor") ) { currentColor=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("controls",76,86,bc,37));
	outFields->push(HX_("array",99,6d,8f,25));
	outFields->push(HX_("skippedFrames",76,1f,4b,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(MusicBeatState_obj,array),HX_("array",99,6d,8f,25)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,skippedFrames),HX_("skippedFrames",76,1f,4b,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MusicBeatState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &MusicBeatState_obj::currentColor,HX_("currentColor",6a,56,68,91)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("create",fc,66,0f,7c),
	HX_("array",99,6d,8f,25),
	HX_("skippedFrames",76,1f,4b,c6),
	HX_("update",09,86,05,87),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

static void MusicBeatState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MusicBeatState_obj::currentColor,"currentColor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MusicBeatState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MusicBeatState_obj::currentColor,"currentColor");
};

#endif

::hx::Class MusicBeatState_obj::__mClass;

static ::String MusicBeatState_obj_sStaticFields[] = {
	HX_("currentColor",6a,56,68,91),
	::String(null())
};

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicBeatState",76,df,84,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MusicBeatState_obj::__GetStatic;
	__mClass->mSetStaticField = &MusicBeatState_obj::__SetStatic;
	__mClass->mMarkFunc = MusicBeatState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MusicBeatState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MusicBeatState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_81_boot)
HXDLIN(  81)		currentColor = 0;
            	}
}

